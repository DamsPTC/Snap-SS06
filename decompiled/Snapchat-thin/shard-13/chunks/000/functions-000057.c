/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109f6635c; end: 109f66397;  */

void FUN_109f6635c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = 0;
  if ((char)*(byte *)(param_2 + -1) < '\0') {
    lVar2 = -((ulong)*(byte *)(param_2 + -1) & 0x7f);
  }
  param_2 = param_2 + lVar2;
  if (*(byte *)(param_2 + -2) < 0x10) {
    *(byte *)(param_2 + -1) = *(byte *)(param_2 + -1) ^ 2;
    return;
  }
  if (param_2 != 4) {
    plVar3 = (long *)(param_2 + -0x34);
    if (param_1 == 0) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        lVar1 = *(long *)(param_2 + -0x1c);
        if (*(long **)(lVar2 + 8) == plVar3) {
          *(long *)(lVar2 + 8) = lVar1;
        }
        lVar2 = *(long *)(param_2 + -0x24);
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = lVar2;
        }
      }
      *plVar3 = 0;
      *(undefined8 *)(param_2 + -0x24) = 0;
      *(undefined8 *)(param_2 + -0x1c) = 0;
      return;
    }
    FUN_109f65aa4(plVar3);
    *(long *)(param_2 + -0x34) = param_1 + -0x30;
    lVar2 = *(long *)(param_1 + -0x28);
    *(long *)(param_2 + -0x1c) = lVar2;
    *(long **)(param_1 + -0x28) = plVar3;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar3;
    }
  }
  return;
}



/* Entry: 109f66398; end: 109f664bb;  */

void FUN_109f66398(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6 * 0x20;
    if (*(long *)(lVar1 + 8) != lVar1) {
      lVar7 = *(long *)(lVar1 + 8);
      do {
        lVar8 = *(long *)(lVar7 + 8);
        if (*(int *)(lVar7 + 0x20) == 0) {
          FUN_109f664bc(lVar7 + -0x18);
        }
        else {
          lVar4 = *(long *)(lVar7 + -0x10);
          for (lVar5 = lVar7 + 0x28; lVar5 != lVar4; lVar5 = lVar5 + lVar6 * 0x20 + 0x20) {
            bVar3 = *(byte *)(lVar5 + 3);
            if (((bVar3 & 1) != 0) && ((bVar3 & 2) != *(byte *)(param_1 + 0x200))) {
              iVar2 = *(int *)(lVar7 + 0x20);
              *(byte *)(lVar5 + 3) = bVar3 & 0xfe;
              FUN_109f66238(lVar5,0);
              if (iVar2 == 1) break;
              lVar4 = *(long *)(lVar7 + -0x10);
            }
          }
        }
        lVar7 = lVar8;
      } while (lVar8 != lVar1);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x10) {
      lVar6 = 0;
      do {
        lVar1 = param_1 + lVar6 * 0x20;
        for (lVar7 = *(long *)(lVar1 + 8); lVar7 != lVar1; lVar7 = *(long *)(lVar7 + 8)) {
          FUN_109f65b2c(param_1,lVar7 + -0x18);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x10);
      if (*(long *)(param_1 + 0x208) != 0) {
        lVar6 = *(long *)(param_1 + 0x208) + -0x30;
        FUN_109f65aa4(lVar6);
        FUN_109f65ae0(lVar6);
      }
      *(undefined8 *)(param_1 + 0x208) = 0;
      return;
    }
  } while( true );
}



/* Entry: 109f664bc; end: 109f6650b;  */

void FUN_109f664bc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x20);
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_109f65aa4(param_1 + -0x30);
  lVar2 = *(long *)(param_1 + -0x28);
  while (lVar2 != 0) {
    *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(lVar2 + 0x18);
    FUN_109f65ae0();
    lVar2 = *(long *)(param_1 + -0x28);
  }
  if (*(code **)(param_1 + -0x10) != (code *)0x0) {
    (**(code **)(param_1 + -0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1 + -0x30);
  return;
}



/* Entry: 109f6650c; end: 109f6658b;  */

void FUN_109f6650c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = param_2 + 7U & 0xfffffff8;
  uVar4 = param_1[1];
  if (param_1[2] < uVar4 + uVar1) {
    uVar4 = *param_1;
    uVar2 = uVar1;
    if (uVar1 <= uVar4) {
      uVar2 = uVar4;
    }
    puVar3 = param_1;
    FUN_109f658b0(param_1,uVar2);
    if (puVar3 == (uint *)0x0) {
      return;
    }
    if (uVar4 <= uVar1) {
      return;
    }
    uVar4 = 0;
    param_1[2] = uVar2;
    *(uint **)(param_1 + 4) = puVar3;
  }
  param_1[1] = uVar4 + uVar1;
  return;
}



/* Entry: 109f6658c; end: 109f66643;  */

void FUN_109f6658c(uint *param_1,int *param_2)

{
  uint uVar1;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_2 + 0x7ffU & 0xfffff800;
    if (uVar1 < 0x801) {
      uVar1 = 0x800;
    }
    FUN_109f658b0(param_1,uVar1 | 0x20);
    if (param_1 != (uint *)0x0) {
      *param_1 = uVar1;
      param_1[1] = 0;
      param_1[2] = uVar1;
      *(uint **)(param_1 + 4) = param_1 + 8;
    }
  }
  return;
}



/* Entry: 109f66644; end: 109f666af;  */

long FUN_109f66644(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_2;
    _strlen();
    FUN_109f6650c(param_1,(int)uVar1 + 1);
    if (param_1 != 0) {
      _memcpy(param_1,param_2,uVar1 & 0xffffffff);
      *(undefined1 *)(param_1 + (uVar1 & 0xffffffff)) = 0;
    }
  }
  return param_1;
}



/* Entry: 109f666b0; end: 109f666d7;  */

void FUN_109f666b0(undefined8 param_1,undefined8 param_2)

{
  FUN_109f666d8(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109f666d8; end: 109f66757;  */

long FUN_109f666d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar2 = &uStack_39;
  uStack_38 = param_3;
  _vsnprintf(puVar2,1,param_2,param_3);
  iVar1 = (int)puVar2 + 1;
  FUN_109f6650c(param_1,iVar1);
  if (param_1 != 0) {
    _vsnprintf(param_1,iVar1,param_2,param_3);
  }
  return param_1;
}



/* Entry: 109f66758; end: 109f6677f;  */

void FUN_109f66758(void)

{
  FUN_109f66780();
  return;
}



/* Entry: 109f66780; end: 109f667df;  */

void FUN_109f66780(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    _strlen();
  }
  lStack_38 = lVar1;
  FUN_109f667e0(param_1,param_2,&lStack_38,param_3,param_4);
  return;
}



/* Entry: 109f667e0; end: 109f668c7;  */

void FUN_109f667e0(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uStack_59;
  undefined8 uStack_58;
  
  if (*param_2 == 0) {
    FUN_109f666d8(param_1,param_4,param_5);
    *param_2 = param_1;
    _strlen();
  }
  else {
    puVar2 = &uStack_59;
    uStack_58 = param_5;
    _vsnprintf(puVar2,1,param_4,param_5);
    iVar1 = (int)puVar2;
    FUN_109f6650c(param_1,iVar1 + (int)*param_3 + 1);
    if (param_1 == 0) {
      return;
    }
    _memcpy();
    _vsnprintf(param_1 + *param_3,(long)iVar1 + 1,param_4,param_5);
    *param_2 = param_1;
    param_1 = *param_3 + (long)iVar1;
  }
  *param_3 = param_1;
  return;
}



/* Entry: 109f668c8; end: 109f6695b;  */

bool FUN_109f668c8(ulong param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_3;
  _strlen();
  uVar3 = *param_2;
  _strlen();
  uVar1 = (int)uVar3 + (int)uVar2;
  FUN_109f6650c(param_1,uVar1 + 1);
  if (param_1 != 0) {
    _memcpy(param_1,*param_2,uVar3 & 0xffffffff);
    _memcpy(param_1 + (uVar3 & 0xffffffff),param_3,uVar2 & 0xffffffff);
    *(undefined1 *)(param_1 + uVar1) = 0;
    *param_2 = param_1;
  }
  return param_1 != 0;
}



/* Entry: 109f6695c; end: 109f66ba7;  */

long FUN_109f6695c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  FUN_109f658b0(param_1,0x48);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0x300000005;
    *(undefined8 *)(param_1 + 0x30) = 0x5555555555555556;
    *(undefined8 *)(param_1 + 0x28) = 0x3333333333333334;
    *(undefined8 *)(param_1 + 0x38) = 2;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    plVar1 = (long *)0x80;
    _malloc();
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      FUN_109f65aa4(param_1 + -0x30);
      FUN_109f65ae0(param_1 + -0x30);
      param_1 = 0;
    }
    else {
      plVar1[4] = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      *plVar1 = param_1 + -0x30;
      lVar2 = *(long *)(param_1 + -0x28);
      plVar1[3] = lVar2;
      *(long **)(param_1 + -0x28) = plVar1;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 0x10) = plVar1;
      }
      plVar1[7] = 0;
      plVar1[6] = 0;
      plVar1[0xd] = 0;
      plVar1[0xc] = 0;
      plVar1[0xf] = 0;
      plVar1[0xe] = 0;
      plVar1[9] = 0;
      plVar1[8] = 0;
      plVar1[0xb] = 0;
      plVar1[10] = 0;
      *(long **)(param_1 + 8) = plVar1 + 6;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  return param_1;
}



/* Entry: 109f66ba8; end: 109f66c8b;  */

uint * FUN_109f66ba8(long param_1,uint param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = *(long *)(param_1 + 0x28) * (ulong)param_2;
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar8 = ((uVar7 & 0xffffffff) * (ulong)uVar4 >> 0x20) + (uVar7 >> 0x20) * (ulong)uVar4;
  uVar9 = uVar8 >> 0x20;
  uVar7 = *(long *)(param_1 + 0x30) * (ulong)param_2;
  while( true ) {
    puVar1 = (uint *)(*(long *)(param_1 + 8) + uVar9 * 0x10);
    if (*(undefined **)(puVar1 + 2) == (undefined *)0x0) {
      return (uint *)0x0;
    }
    if (((*(undefined **)(puVar1 + 2) != &UNK_10e47dcd0) && (*puVar1 == param_2)) &&
       (uVar6 = param_3, (**(code **)(param_1 + 0x18))(), (uVar6 & 1) != 0)) break;
    uVar2 = (int)(((uVar7 & 0xffffffff) * (ulong)uVar5 >> 0x20) + (uVar7 >> 0x20) * (ulong)uVar5 >>
                 0x20) + 1 + (int)uVar9;
    uVar3 = 0;
    if (uVar4 <= uVar2) {
      uVar3 = uVar4;
    }
    uVar2 = uVar2 - uVar3;
    uVar9 = (ulong)uVar2;
    if (uVar2 == (uint)(uVar8 >> 0x20)) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}



/* Entry: 109f66c8c; end: 109f66e47;  */

void FUN_109f66c8c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  undefined *puVar15;
  ulong uVar16;
  
  if ((*(uint *)(param_1 + 0x3c) == param_2) &&
     (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x38))) {
    _bzero(*(undefined8 *)(param_1 + 8),
           (ulong)*(uint *)(&UNK_10e47d8f4 + (ulong)param_2 * 0x20) << 4);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (param_2 < 0x1f) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar9 = 0;
    }
    else {
      lVar13 = *(long *)(*(long *)(param_1 + 8) + -0x30);
      lVar9 = 0;
      if (lVar13 != 0) {
        lVar9 = lVar13 + 0x30;
      }
    }
    lVar13 = (ulong)param_2 * 0x20;
    uVar5 = *(uint *)(&UNK_10e47d8f4 + lVar13);
    func_0x000109f6590c(lVar9,(ulong)uVar5 << 4);
    if (lVar9 != 0) {
      puVar12 = *(uint **)(param_1 + 8);
      uVar6 = *(uint *)(param_1 + 0x20);
      *(long *)(param_1 + 8) = lVar9;
      uVar7 = *(uint *)(&UNK_10e47d8f8 + lVar13);
      *(uint *)(param_1 + 0x20) = uVar5;
      *(uint *)(param_1 + 0x24) = uVar7;
      lVar3 = *(long *)(&UNK_10e47d900 + lVar13);
      lVar4 = *(long *)(&UNK_10e47d908 + lVar13);
      *(long *)(param_1 + 0x28) = lVar3;
      *(long *)(param_1 + 0x30) = lVar4;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(&UNK_10e47d8f0 + lVar13);
      *(uint *)(param_1 + 0x3c) = param_2;
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (uVar6 != 0) {
        lVar13 = (ulong)uVar6 << 4;
        puVar14 = puVar12;
        do {
          puVar15 = *(undefined **)(puVar14 + 2);
          if (puVar15 != (undefined *)0x0 && puVar15 != &UNK_10e47dcd0) {
            do {
              uVar8 = *puVar14;
              uVar16 = lVar3 * (ulong)uVar8;
              uVar16 = ((uVar16 & 0xffffffff) * (ulong)uVar5 >> 0x20) +
                       (uVar16 >> 0x20) * (ulong)uVar5 >> 0x20;
              puVar11 = (uint *)(lVar9 + uVar16 * 0x10);
              if (*(long *)(puVar11 + 2) != 0) {
                uVar10 = lVar4 * (ulong)uVar8;
                do {
                  uVar1 = (int)(((uVar10 & 0xffffffff) * (ulong)uVar7 >> 0x20) +
                                (uVar10 >> 0x20) * (ulong)uVar7 >> 0x20) + 1 + (int)uVar16;
                  uVar2 = 0;
                  if (uVar5 <= uVar1) {
                    uVar2 = uVar5;
                  }
                  uVar16 = (ulong)(uVar1 - uVar2);
                  puVar11 = (uint *)(lVar9 + uVar16 * 0x10);
                } while (*(long *)(puVar11 + 2) != 0);
              }
              *puVar11 = uVar8;
              *(undefined **)(puVar11 + 2) = puVar15;
              puVar11 = puVar14;
              do {
                puVar14 = puVar11 + 4;
                if (puVar14 == puVar12 + (ulong)uVar6 * 4) goto LAB_109f66d8c;
                puVar15 = *(undefined **)(puVar11 + 6);
                puVar11 = puVar14;
              } while (puVar15 == (undefined *)0x0 || puVar15 == &UNK_10e47dcd0);
            } while( true );
          }
          puVar14 = puVar14 + 4;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
LAB_109f66d8c:
      if (puVar12 != (uint *)0x0) {
        FUN_109f65aa4(puVar12 + -0xc);
        lVar9 = *(long *)(puVar12 + -10);
        while (lVar9 != 0) {
          *(undefined8 *)(puVar12 + -10) = *(undefined8 *)(lVar9 + 0x18);
          FUN_109f65ae0();
          lVar9 = *(long *)(puVar12 + -10);
        }
        if (*(code **)(puVar12 + -4) != (code *)0x0) {
          (**(code **)(puVar12 + -4))(puVar12);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(puVar12 + -0xc);
        return;
      }
    }
  }
  return;
}



/* Entry: 109f66e48; end: 109f66fe7;  */

uint * FUN_109f66e48(long param_1,uint param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  
  if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x44) + *(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x38))
    goto LAB_109f66eb0;
    iVar5 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x3c) + 1;
  }
  FUN_109f66c8c(param_1,iVar5);
LAB_109f66eb0:
  uVar9 = *(long *)(param_1 + 0x28) * (ulong)param_2;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar10 = ((uVar9 & 0xffffffff) * (ulong)uVar3 >> 0x20) + (uVar9 >> 0x20) * (ulong)uVar3;
  uVar14 = uVar10 >> 0x20;
  uVar9 = *(long *)(param_1 + 0x30) * (ulong)param_2;
  puVar12 = (uint *)0x0;
  do {
    puVar11 = (uint *)(*(long *)(param_1 + 8) + uVar14 * 0x10);
    puVar7 = *(undefined **)(puVar11 + 2);
    puVar13 = puVar12;
    if (puVar7 == (undefined *)0x0 || puVar7 == &UNK_10e47dcd0) {
      puVar13 = puVar11;
      if (puVar12 != (uint *)0x0) {
        puVar13 = puVar12;
      }
      if (puVar7 == (undefined *)0x0) break;
    }
    if (((puVar7 != &UNK_10e47dcd0) && (*puVar11 == param_2)) &&
       (uVar6 = param_3, (**(code **)(param_1 + 0x18))(), (int)uVar6 != 0)) {
      if (param_4 == (undefined1 *)0x0) {
        return puVar11;
      }
      uVar8 = 1;
      goto LAB_109f66fc0;
    }
    uVar1 = (int)(((uVar9 & 0xffffffff) * (ulong)uVar4 >> 0x20) + (uVar9 >> 0x20) * (ulong)uVar4 >>
                 0x20) + 1 + (int)uVar14;
    uVar2 = 0;
    if (uVar3 <= uVar1) {
      uVar2 = uVar3;
    }
    uVar1 = uVar1 - uVar2;
    uVar14 = (ulong)uVar1;
    puVar12 = puVar13;
  } while (uVar1 != (uint)(uVar10 >> 0x20));
  puVar11 = puVar13;
  if (puVar11 == (uint *)0x0) {
    puVar11 = (uint *)0x0;
  }
  else {
    if (*(undefined **)(puVar11 + 2) == &UNK_10e47dcd0) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    }
    *puVar11 = param_2;
    *(undefined8 *)(puVar11 + 2) = param_3;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (param_4 != (undefined1 *)0x0) {
      uVar8 = 0;
LAB_109f66fc0:
      *param_4 = uVar8;
    }
  }
  return puVar11;
}



/* Entry: 109f66fe8; end: 109f67047;  */

void FUN_109f66fe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  (**(code **)(param_1 + 0x10))(param_2);
  lVar2 = param_1;
  FUN_109f66ba8(param_1,uVar1,param_2);
  if (lVar2 != 0) {
    *(undefined **)(lVar2 + 8) = &UNK_10e47dcd0;
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 0x40) + -1);
  }
  return;
}



/* Entry: 109f67048; end: 109f67663;  */

void FUN_109f67048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_init_11034c900)(param_1 + 0x18,0);
  return;
}



/* Entry: 109f67664; end: 109f67e17;  */

void FUN_109f67664(ulong param_1,ulong param_2,ulong param_3,undefined8 *param_4,uint param_5,
                  undefined8 *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_1 & 0xfffffffffffff;
  uVar18 = param_1 >> 0x34 & 0x7ff;
  uVar8 = param_2 & 0xfffffffffffff;
  uVar17 = param_2 >> 0x34 & 0x7ff;
  uVar5 = param_3 & 0xfffffffffffff;
  uVar27 = param_3 >> 0x34 & 0x7ff;
  puVar25 = (undefined8 *)-((long)param_3 >> 0x3f);
  puVar26 = (undefined8 *)-((long)(param_2 ^ param_1) >> 0x3f);
  if (((uVar18 == 0x7ff) || (uVar17 == 0x7ff)) || (uVar27 == 0x7ff)) goto LAB_109f67dac;
  if (uVar18 == 0) {
    if (uVar11 == 0) goto LAB_109f67dac;
    uVar18 = 0xc - LZCOUNT(uVar11);
    uVar11 = uVar11 << ((ulong)((int)LZCOUNT(uVar11) - 0xb) & 0x3f);
  }
  if (uVar17 == 0) {
    if (uVar8 == 0) goto LAB_109f67dac;
    uVar17 = 0xc - LZCOUNT(uVar8);
    uVar8 = uVar8 << ((ulong)((int)LZCOUNT(uVar8) - 0xb) & 0x3f);
    param_1 = param_3;
  }
  uVar19 = uVar11 << 10 | 0x4000000000000000;
  uVar20 = uVar8 << 0xb | 0x8000000000000000;
  uVar22 = uVar19 >> 0x20;
  uVar24 = uVar20 >> 0x20;
  uVar8 = (uVar8 << 0xb & 0xffffffff) * uVar22;
  uVar12 = uVar24 * (uVar11 << 10 & 0xffffffff);
  uVar11 = uVar12 + uVar8;
  lVar21 = 0x100000000;
  if (!CARRY8(uVar12,uVar8)) {
    lVar21 = 0;
  }
  uVar20 = uVar20 * uVar19;
  uVar6 = (uint)uVar20;
  uStack_78 = uVar20;
  uVar8 = (uVar11 >> 0x20) + uVar24 * uVar22 + lVar21;
  if (uVar20 < uVar11 << 0x20) {
    uVar8 = uVar8 + 1;
  }
  uStack_70 = uVar8;
  uVar11 = uVar8 & 0x4000000000000000;
  lVar21 = -0x3ff;
  if (uVar11 != 0) {
    lVar21 = -0x3fe;
  }
  uVar18 = uVar17 + uVar18 + lVar21;
  if (uVar27 == 0) {
    if (uVar5 != 0) {
      uVar27 = 0xc - LZCOUNT(uVar5);
      uVar5 = uVar5 << ((ulong)((int)LZCOUNT(uVar5) - 0xb) & 0x3f);
      goto LAB_109f67844;
    }
    param_5 = (int)uVar18 - 1;
    param_6 = (undefined8 *)
              (uVar8 << (uVar11 >> 0x3e ^ 1) |
              (ulong)((uVar20 & 0xffffffff00000000) != 0 || uVar6 != 0));
LAB_109f67c28:
    func_0x000109f67368();
    param_4 = puVar26;
  }
  else {
LAB_109f67844:
    uVar12 = uVar5 << 10 | 0x4000000000000000;
    uVar17 = uVar18 - uVar27;
    uVar28 = (undefined4)(uVar5 << 10);
    uVar2 = (undefined4)(uVar12 >> 0x20);
    uVar5 = uVar8;
    if ((long)uVar17 < 0) {
      uVar20 = uVar27;
      if ((puVar26 == puVar25) || (uVar17 != 0xffffffffffffffff)) {
        uVar11 = -uVar17 - (ulong)(uVar11 == 0);
        if (uVar11 != 0) {
          if (uVar11 < 0x3f) {
            uVar5 = uVar8 >> (uVar11 & 0x3f) |
                    (ulong)(uVar8 << ((ulong)(uint)-(int)uVar11 & 0x3f) != 0);
          }
          else {
            uVar5 = (ulong)(uVar8 != 0);
          }
        }
      }
      else if (uVar11 != 0) {
        uVar6 = uVar6 >> 1;
        puVar9 = (uint *)((ulong)&uStack_78 | 4);
        lVar21 = 3;
        do {
          puVar9[-1] = uVar6 | *puVar9 << 0x1f;
          uVar6 = *puVar9 >> 1;
          puVar9 = puVar9 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        uStack_70 = CONCAT44(uVar6,(int)uVar8);
      }
    }
    else {
      if (uVar11 == 0) {
        uVar7 = 0;
        uVar6 = uVar6 << 1;
        uStack_78._4_4_ = (int)(uVar20 >> 0x20);
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar6);
        lVar21 = 4;
        do {
          if (uVar6 != (uint)uVar20) {
            uVar7 = (uint)(uVar6 < (uint)uVar20);
          }
          uVar20 = (ulong)*(uint *)((long)&uStack_78 + lVar21);
          uVar6 = uVar7 | *(uint *)((long)&uStack_78 + lVar21) << 1;
          *(uint *)((long)&uStack_78 + lVar21) = uVar6;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x10);
      }
      uVar5 = uStack_70;
      uVar20 = uVar18;
      if (uVar18 != uVar27) {
        uStack_80 = uVar28;
        uStack_7c = uVar2;
        uStack_88 = 0;
        uVar6 = (uint)uVar17;
        if (uVar17 < 0x20) {
          uVar11 = 0;
          uVar3 = 0;
          bVar1 = true;
          puVar9 = (uint *)&uStack_88;
          uVar5 = uVar17;
LAB_109f679cc:
          uVar19 = uVar11 >> (uVar5 & 0x3f);
          uVar19 = uVar19 | uVar19 << (uVar5 & 0x3f) != uVar11;
          uVar7 = (uint)uVar19;
          uVar16 = (4 - uVar3 & 0xff) - 1;
          uVar11 = (ulong)uVar16;
          if (uVar16 == 0) {
            uVar11 = 0;
          }
          else {
            puVar23 = (uint *)&uStack_88;
            uVar22 = uVar11;
            do {
              puVar9 = puVar9 + 1;
              uVar7 = *puVar9;
              *puVar23 = uVar7 << (ulong)(-uVar6 & 0x1f) | (uint)uVar19;
              uVar7 = uVar7 >> (uVar5 & 0x3f);
              uVar19 = (ulong)uVar7;
              uVar22 = uVar22 - 1;
              puVar23 = puVar23 + 1;
            } while (uVar22 != 0);
          }
          *(uint *)((long)&uStack_88 + uVar11 * 4) = uVar7;
          uVar7 = uVar3;
          if (uVar3 != 0) {
LAB_109f67a5c:
            param_4 = (undefined8 *)((long)&uStack_88 + (ulong)(4 - uVar7) * 4);
            param_5 = (uVar7 - 1) * 4 + 4;
            _bzero(param_1);
          }
          uVar5 = uVar8;
          if (bVar1) goto LAB_109f67aa0;
        }
        else {
          uVar11 = uVar17 >> 5 & 0x7ffffff;
          uVar3 = (uint)uVar11;
          uVar7 = 4;
          if (uVar17 < 0xa0) {
            uVar7 = uVar3;
          }
          piVar13 = (int *)&uStack_88;
          uVar16 = uVar7;
          do {
            iVar10 = *piVar13;
            uVar16 = uVar16 - 1;
            piVar13 = piVar13 + 1;
          } while (iVar10 == 0 && (uVar16 & 0xff) != 0);
          bVar1 = iVar10 == 0;
          if (uVar7 < 4) {
            uVar5 = (ulong)(uVar6 & 0x1f);
            if ((uVar17 & 0x1f) != 0) {
              puVar9 = (uint *)((long)&uStack_88 + uVar11 * 4);
              uVar11 = (ulong)*puVar9;
              goto LAB_109f679cc;
            }
            uVar7 = 4;
            if (uVar3 != 4) {
              uVar6 = 4 - (uVar6 >> 5);
              puVar14 = &uStack_88;
              do {
                *(undefined4 *)puVar14 = *(undefined4 *)((long)puVar14 + uVar11 * 4);
                uVar6 = uVar6 - 1;
                puVar14 = (undefined8 *)((long)puVar14 + 4);
                uVar7 = uVar3;
              } while ((uVar6 & 0xff) != 0);
            }
            goto LAB_109f67a5c;
          }
          param_4 = &uStack_88;
          param_5 = (uVar7 - 1) * 4 + 4;
          _bzero(param_1);
          uVar5 = uVar8;
          if (iVar10 == 0) goto LAB_109f67aa0;
        }
        uStack_88 = uStack_88 | 1;
        uVar5 = uVar8;
      }
    }
LAB_109f67aa0:
    uVar6 = (uint)uStack_78;
    if (puVar26 == puVar25) {
      if (0 < (long)uVar17) {
        bVar1 = false;
        uVar7 = (uint)uStack_88 + (uint)uStack_78;
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar7);
        lVar21 = 4;
        do {
          if (uVar7 != uVar6) {
            bVar1 = uVar7 < uVar6;
          }
          uVar6 = *(uint *)((long)&uStack_78 + lVar21);
          uVar7 = *(int *)((long)&uStack_88 + lVar21) + uVar6 + (uint)bVar1;
          *(uint *)((long)&uStack_78 + lVar21) = uVar7;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x10);
      }
      goto LAB_109f67dac;
    }
    if ((long)uVar17 < 0) {
      if (uVar17 != 0xffffffffffffffff) {
        uVar18 = (uVar12 - uVar5) - 1 | 1;
        if (uStack_78._4_4_ == 0 && (uint)uStack_78 == 0) {
          uVar18 = uVar12 - uVar5;
        }
        uVar11 = uVar18 >> 0x3e & 1;
        param_6 = (undefined8 *)(uVar18 << (uVar11 ^ 1));
        param_5 = ((int)uVar20 + (int)uVar11) - 2;
        puVar26 = puVar25;
        goto LAB_109f67c28;
      }
      uVar3 = 0;
      uStack_80 = uVar28;
      uStack_7c = uVar2;
      uStack_88 = uStack_88 & 0xffffffff;
      uStack_78 = CONCAT44(uStack_78._4_4_,-(uint)uStack_78);
      uVar7 = 1;
      lVar21 = 4;
      do {
        bVar1 = uVar3 < uVar6;
        if (uVar7 == 0) {
          bVar1 = uVar3 <= uVar6;
        }
        uVar3 = *(uint *)((long)&uStack_88 + lVar21);
        uVar6 = *(uint *)((long)&uStack_78 + lVar21);
        *(uint *)((long)&uStack_78 + lVar21) = (uVar3 - uVar6) - (uint)bVar1;
        uVar7 = bVar1 ^ 1;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x10);
    }
    else if (uVar18 == uVar27) {
      if (((uVar5 == uVar12) && (uStack_78._4_4_ == 0)) && ((uint)uStack_78 == 0))
      goto LAB_109f67dac;
      uStack_70 = uVar5 - uVar12;
      if ((long)(uVar5 - uVar12) < 0) {
        iVar10 = -(uint)uStack_78;
        uStack_78 = CONCAT44(uStack_78._4_4_,iVar10);
        iVar4 = 1;
        lVar21 = 4;
        do {
          if (iVar10 != 0) {
            iVar4 = 0;
          }
          iVar10 = ~*(uint *)((long)&uStack_78 + lVar21) + iVar4;
          *(int *)((long)&uStack_78 + lVar21) = iVar10;
          lVar21 = lVar21 + 4;
        } while (lVar21 != 0x10);
      }
    }
    else {
      uVar7 = 1;
      lVar21 = 4;
      uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 - (uint)uStack_88);
      uVar3 = uVar6;
      uVar16 = (uint)uStack_88;
      do {
        bVar1 = uVar3 < uVar16;
        if (uVar7 == 0) {
          bVar1 = uVar3 <= uVar16;
        }
        uVar3 = *(uint *)((long)&uStack_78 + lVar21);
        uVar16 = *(uint *)((long)&uStack_88 + lVar21);
        *(uint *)((long)&uStack_78 + lVar21) = (uVar3 - uVar16) - (uint)bVar1;
        uVar7 = bVar1 ^ 1;
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x10);
      if (1 < uVar17) {
        uVar18 = uStack_70 >> 0x3e & 1;
        param_5 = ((int)uVar20 + (int)uVar18) - 2;
        param_6 = (undefined8 *)
                  (uStack_70 << (uVar18 ^ 1) |
                  (ulong)(uStack_78._4_4_ != 0 || uVar6 != (uint)uStack_88));
        goto LAB_109f67c28;
      }
    }
    uVar18 = uStack_78;
    if (uStack_70 != 0) {
      uVar18 = uStack_70;
    }
    lVar21 = 0x40;
    if (uStack_70 != 0) {
      lVar21 = 0;
    }
    lVar21 = (ulong)((int)LZCOUNT(uVar18) - 1) + lVar21;
    if (lVar21 != 0) {
      param_4 = &uStack_78;
      param_6 = &uStack_78;
      FUN_109f67e18();
    }
    param_5 = (uint)lVar21;
  }
LAB_109f67dac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (param_5 < 0x80) {
    uVar6 = param_5 >> 5;
    piVar13 = (int *)((long)param_4 + (ulong)(3 - uVar6) * 4);
    uVar7 = param_5 & 0x1f;
    if (uVar7 == 0) {
      uVar7 = 4 - (param_5 >> 5);
      piVar15 = (int *)((long)param_6 + 0xc);
      do {
        *piVar15 = *piVar13;
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + -1;
        piVar13 = piVar13 + -1;
      } while ((uVar7 & 0xff) != 0);
    }
    else {
      puVar9 = (uint *)((long)param_6 + (ulong)uVar6 * 4);
      uVar3 = *piVar13 << (ulong)uVar7;
      if (uVar6 != 3) {
        lVar21 = (ulong)(3 - uVar6) << 2;
        do {
          uVar16 = *(uint *)((long)param_4 + lVar21 + -4);
          *(uint *)((long)puVar9 + lVar21) = uVar16 >> (ulong)(-param_5 & 0x1f) | uVar3;
          uVar3 = uVar16 << (ulong)uVar7;
          lVar21 = lVar21 + -4;
        } while (lVar21 != 0);
      }
      *puVar9 = uVar3;
      if (param_5 < 0x20) {
        return;
      }
    }
  }
  else {
    uVar6 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_6,(ulong)(uVar6 - 1) * 4 + 4);
  return;
}



/* Entry: 109f67e18; end: 109f684bb;  */

void FUN_109f67e18(long param_1,uint param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  
  if (param_2 < 0x80) {
    uVar3 = param_2 >> 5;
    piVar7 = (int *)(param_1 + (ulong)(3 - uVar3) * 4);
    uVar4 = param_2 & 0x1f;
    if (uVar4 == 0) {
      uVar4 = 4 - (param_2 >> 5);
      piVar5 = (int *)(param_3 + 0xc);
      do {
        *piVar5 = *piVar7;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + -1;
        piVar7 = piVar7 + -1;
      } while ((uVar4 & 0xff) != 0);
    }
    else {
      puVar1 = (uint *)(param_3 + (ulong)uVar3 * 4);
      uVar6 = *piVar7 << (ulong)uVar4;
      if (uVar3 != 3) {
        lVar8 = (ulong)(3 - uVar3) << 2;
        do {
          uVar2 = *(uint *)(param_1 + -4 + lVar8);
          *(uint *)((long)puVar1 + lVar8) = uVar2 >> (ulong)(-param_2 & 0x1f) | uVar6;
          uVar6 = uVar2 << (ulong)uVar4;
          lVar8 = lVar8 + -4;
        } while (lVar8 != 0);
      }
      *puVar1 = uVar6;
      if (param_2 < 0x20) {
        return;
      }
    }
  }
  else {
    uVar3 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_3,(ulong)(uVar3 - 1) * 4 + 4);
  return;
}



/* Entry: 109f684bc; end: 109f6852f;  */

undefined8 * FUN_109f684bc(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_109f658b0(param_1,0x10);
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = 0x20;
    if (param_2 != 0) {
      iVar1 = param_2;
    }
    *(int *)((long)param_1 + 0xc) = iVar1;
    puVar2 = param_1;
    FUN_109f658b0();
    *param_1 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      FUN_109f65aa4(param_1 + -6);
      FUN_109f65ae0(param_1 + -6);
      param_1 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined1 *)puVar2 = 0;
    }
  }
  return param_1;
}



/* Entry: 109f68530; end: 109f685ab;  */

void FUN_109f68530(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  
  if ((!CARRY4(param_3 + 1U,*(uint *)(param_1 + 1))) &&
     (plVar2 = param_1, FUN_109f685ac(param_1,param_3 + 1U + *(uint *)(param_1 + 1)),
     (int)plVar2 != 0)) {
    _memcpy(*param_1 + (ulong)*(uint *)(param_1 + 1),param_2,param_3);
    uVar1 = (int)param_1[1] + param_3;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined1 *)(*param_1 + (ulong)uVar1) = 0;
  }
  return;
}



/* Entry: 109f685ac; end: 109f68603;  */

void FUN_109f685ac(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 < param_2) {
    do {
      uVar2 = uVar2 << 1;
    } while (uVar2 < param_2);
    plVar1 = param_1;
    FUN_109f65a40(param_1,*param_1,1,uVar2);
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      *(uint *)((long)param_1 + 0xc) = uVar2;
    }
  }
  return;
}



/* Entry: 109f68604; end: 109f686b3;  */

uint FUN_109f68604(long *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint extraout_w8;
  uint uVar5;
  bool bVar6;
  
  bVar2 = true;
  do {
    bVar6 = bVar2;
    uVar5 = *(int *)((long)param_1 + 0xc) - *(uint *)(param_1 + 1);
    lVar4 = *param_1 + (ulong)*(uint *)(param_1 + 1);
    _vsnprintf(lVar4,uVar5,param_2);
    uVar3 = (uint)lVar4;
    if (((int)uVar3 < 0) ||
       (iVar1 = *(uint *)(param_1 + 1) + uVar3, iVar1 + 1U < *(uint *)(param_1 + 1))) {
      uVar5 = 0;
LAB_109f68698:
      uVar3 = 1;
      break;
    }
    if (uVar3 < uVar5) {
      *(int *)(param_1 + 1) = iVar1;
      uVar5 = 1;
      goto LAB_109f68698;
    }
    FUN_109f685ac(param_1);
    uVar3 = 0;
    bVar2 = false;
    uVar5 = extraout_w8;
  } while (bVar6);
  return uVar3 & uVar5;
}



/* Entry: 109f686b4; end: 109f686ff;  */

void FUN_109f686b4(undefined8 param_1,undefined8 param_2)

{
  FUN_109f68604(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 109f68700; end: 109f68807;  */

ulong FUN_109f68700(char *param_1,ulong param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (((((cVar1 == '0') && (param_1[1] == '\0')) ||
         (pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e30), (int)pcVar2 == 0)) ||
        ((pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e32), (int)pcVar2 == 0 ||
         (pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e35), (int)pcVar2 == 0)))) ||
       (pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e37), (int)pcVar2 == 0)) {
      param_2 = 0;
    }
    else if (((cVar1 == '1') && (param_1[1] == '\0')) ||
            ((pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e3d), (int)pcVar2 == 0 ||
             ((pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e3f), (int)pcVar2 == 0 ||
              (pcVar2 = param_1, _strcasecmp(param_1,&UNK_10f624e43), (int)pcVar2 == 0)))))) {
      param_2 = 1;
    }
    else {
      _strcasecmp(param_1,&UNK_10f624e45);
      uVar3 = (uint)param_2;
      if ((int)param_1 == 0) {
        uVar3 = 1;
      }
      param_2 = (ulong)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109f68808; end: 109f6884f;  */

void FUN_109f68808(void)

{
  undefined1 uVar1;
  
  if ((bRam0000000113834778 & 1) == 0) {
    uVar1 = 0x4a;
    _getenv();
    FUN_109f68700();
    uRam0000000113834779 = uVar1;
    bRam0000000113834778 = 1;
  }
  return;
}



/* Entry: 109f68850; end: 109f6893b;  */

void FUN_109f68850(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = *param_1;
  uVar4 = param_1[1];
  iVar6 = iVar9 - uVar4;
  if (iVar6 == param_1[3]) {
    uVar5 = iVar6 * 2;
    uVar7 = (ulong)uVar5;
    _malloc();
    if (uVar7 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & uVar4;
    uVar2 = iVar6 - 1U & uVar4;
    if (uVar2 == 0) {
      lVar8 = *(long *)(param_1 + 4);
    }
    else {
      uVar3 = iVar9 - 1U & -iVar6;
      lVar8 = *(long *)(param_1 + 4);
      _memcpy(uVar7 + uVar1,lVar8 + (ulong)uVar2,uVar3 - uVar4);
      uVar1 = uVar5 - 1 & uVar3;
      iVar6 = iVar9 - uVar3;
    }
    _memcpy(uVar7 + uVar1,lVar8,iVar6);
    _free(lVar8);
    *(ulong *)(param_1 + 4) = uVar7;
    param_1[3] = uVar5;
    iVar9 = *param_1;
  }
  *param_1 = param_1[2] + iVar9;
  return;
}



/* Entry: 109f6893c; end: 109f68997;  */

void FUN_109f6893c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + 0x10) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  FUN_109f65aa4(lVar2 + -0x30);
  lVar1 = *(long *)(lVar2 + -0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar1 + 0x18);
    FUN_109f65ae0();
    lVar1 = *(long *)(lVar2 + -0x28);
  }
  if (*(code **)(lVar2 + -0x10) != (code *)0x0) {
    (**(code **)(lVar2 + -0x10))(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2 + -0x30);
  return;
}



/* Entry: 109f68998; end: 109f68a67;  */

void FUN_109f68998(int *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(uint *)(*(long *)(param_1 + 4) + (ulong)(*param_2 >> 5) * 4) >> (ulong)(*param_2 & 0x1f) &
      1) != 0) {
    return;
  }
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  *(uint **)(*(long *)(param_1 + 6) + (ulong)(iVar1 - 1U) * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = iVar1 - 1U;
  uVar2 = (ulong)(*param_2 >> 3) & 0x1ffffffc;
  *(uint *)(*(long *)(param_1 + 4) + uVar2) =
       *(uint *)(*(long *)(param_1 + 4) + uVar2) | 1 << (ulong)(*param_2 & 0x1f);
  return;
}



/* Entry: 109f68a68; end: 109f68c0f;  */

void FUN_109f68a68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    ___error();
    *(undefined4 *)param_1 = 0x16;
  }
  else {
    puVar1 = (undefined8 *)0x1;
    _calloc(1,0x30);
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      _funopen();
      if (puVar2 == (undefined8 *)0x0) {
        _free(puVar1);
      }
      else {
        *param_2 = 0;
        *param_1 = 0;
        *puVar1 = param_1;
        puVar1[1] = param_2;
      }
    }
  }
  return;
}



/* Entry: 109f68c10; end: 109f68cc3;  */

ulong FUN_109f68c10(undefined8 *param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_3 == 1) {
    lVar1 = 0x20;
  }
  else {
    if (param_3 != 2) goto LAB_109f68c34;
    lVar1 = 0x18;
  }
  param_2 = *(long *)((long)param_1 + lVar1) + param_2;
LAB_109f68c34:
  if ((long)param_2 < 0) {
    ___error();
    *(undefined4 *)param_1 = 0x16;
    param_2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_1[3];
    if ((ulong)param_1[4] < uVar2) {
      *(undefined1 *)(*(long *)*param_1 + param_1[4]) = *(undefined1 *)(param_1 + 5);
      uVar2 = param_1[3];
    }
    param_1[4] = param_2;
    if (param_2 < uVar2) {
      lVar1 = *(long *)*param_1;
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar1 + param_2);
      *(undefined1 *)(lVar1 + param_2) = 0;
      uVar2 = param_1[4];
    }
    *(ulong *)param_1[1] = uVar2;
  }
  return param_2;
}



/* Entry: 109f68cc4; end: 109f68e5f;  */

/* WARNING: Removing unreachable block (ram,0x000109f69918) */

void FUN_109f68cc4(uint *param_1,ulong *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ****ppppuVar20;
  undefined4 uVar21;
  long lVar22;
  undefined8 *extraout_x8;
  undefined **ppuVar23;
  undefined **ppuVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong *puVar29;
  undefined2 uVar30;
  long *plVar31;
  ulong uVar32;
  uint *puVar33;
  undefined *puVar34;
  long *plVar35;
  ulong unaff_x25;
  undefined1 **ppuVar36;
  uint *unaff_x26;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined7 uStack_350;
  undefined1 uStack_349;
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined8 uStack_340;
  byte bStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined ***pppuStack_280;
  undefined **ppuStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  uint *puStack_230;
  ulong uStack_228;
  long *plStack_220;
  uint *puStack_218;
  ulong *puStack_210;
  long *plStack_208;
  ulong *puStack_200;
  undefined ***pppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  ulong *puStack_1d8;
  int iStack_1cc;
  ulong *puStack_1c8;
  long *plStack_1c0;
  ulong *puStack_1b8;
  uint *puStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  ulong uStack_168;
  undefined ***apppuStack_160 [2];
  char cStack_149;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  byte bStack_129;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  byte bStack_117;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  long lStack_100;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  char *pcStack_58;
  long *plVar10;
  
  ppuVar8 = &puStack_90;
  ppuVar36 = &puStack_90;
  uVar32 = *(ulong *)(&UNK_110b935f8 + (ulong)param_3 * 0x10);
  if (uVar32 < 0x7ffffffffffffff8) {
    puVar34 = (&PTR_DAT_110b935f0)[(ulong)param_3 * 2];
    if (uVar32 < 0x17) {
      uStack_80 = CONCAT17((char)uVar32,(undefined7)uStack_80);
      if (uVar32 == 0) goto LAB_109f68d60;
    }
    else {
      puVar2 = (undefined1 *)0x19;
      if ((uVar32 | 7) != 0x17) {
        puVar2 = (undefined1 *)((uVar32 | 7) + 1);
      }
      ppuVar8 = (undefined1 **)puVar2;
      __Znwm();
      uStack_80 = (ulong)puVar2 | 0x8000000000000000;
      puStack_90 = (undefined1 *)ppuVar8;
      uStack_88 = uVar32;
    }
    _memmove(ppuVar8,puVar34,uVar32);
    ppuVar36 = ppuVar8;
LAB_109f68d60:
    *(undefined1 *)((long)ppuVar36 + uVar32) = 0;
    if (param_4 == (undefined8 *)0x0) {
      uStack_64 = 0;
      uStack_68 = 0;
      pcStack_58 = "";
      pcStack_60 = pcStack_58;
    }
    else {
      pcStack_58 = (char *)*param_4;
      uStack_64 = *(undefined4 *)(param_4 + 2);
      uStack_68 = *(undefined4 *)((long)param_4 + 0x14);
      pcStack_60 = (char *)param_4[1];
    }
    FUN_109f6d194(&puStack_90,param_2,&pcStack_58,&pcStack_60,&uStack_64,&uStack_68);
    ppuVar23 = &PTR_PTR_1132ff358;
    FUN_10ae079a0();
    func_0x000109f6d228();
    FUN_10ae07cd4(ppuVar23,&PTR_PTR_1132ff358);
    if ((long)uStack_80 < 0) {
      __ZdlPv(puStack_90);
    }
    puStack_90 = (undefined1 *)CONCAT44(puStack_90._4_4_,param_3);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_88,*param_2,param_2[1]);
      param_3 = (uint)puStack_90;
    }
    else {
      uStack_80 = param_2[1];
      uStack_88 = *param_2;
      uStack_78 = param_2[2];
    }
    *param_1 = param_3;
    *(ulong *)(param_1 + 4) = uStack_80;
    *(ulong *)(param_1 + 2) = uStack_88;
    *(ulong *)(param_1 + 6) = uStack_78;
    *(undefined8 **)(param_1 + 8) = param_4;
    return;
  }
  func_0x000104c4f6b8();
  pcStack_98 = FUN_109f68e60;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar35 = *(long **)(param_2[1] + 8);
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((int)param_2[2] == 0) {
    uVar30 = 0x8b31;
    uVar21 = 0;
LAB_109f68ec0:
    plVar28 = plVar35 + 2;
    func_0x000109ec61e0(plVar28,*(undefined8 *)(param_2[1] + 0x18),uVar30,param_2[6]);
    param_2[0x27] = (ulong)plVar28;
    *(undefined2 *)plVar28 = uVar30;
    *(undefined4 *)((long)plVar28 + 4) = uVar21;
    plVar28[0x13] = param_2[6];
    puVar9 = (undefined8 *)0x600;
    _malloc();
    if (puVar9 == (undefined8 *)0x0) {
      plVar31 = (long *)0x0;
    }
    else {
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      *puVar9 = plVar28 + -6;
      lVar22 = plVar28[-5];
      puVar9[3] = lVar22;
      plVar28[-5] = (long)puVar9;
      if (lVar22 != 0) {
        *(undefined8 **)(lVar22 + 0x10) = puVar9;
      }
      plVar31 = puVar9 + 6;
      _bzero(plVar31,0x5d0);
      plVar28 = (long *)param_2[0x27];
      uVar21 = *(undefined4 *)((long)plVar28 + 4);
    }
    plVar10 = plVar31;
    FUN_109e9de9c(plVar31,plVar35 + 2,uVar21,plVar28);
    iVar7 = (int)plVar10;
    param_2[0x29] = (ulong)plVar31;
    uStack_168 = *(ulong *)(param_2[0x27] + 0x98);
    FUN_109e8bb00();
    uVar32 = uStack_168;
    puVar29 = (ulong *)param_2[0x29];
    *(bool *)((long)puVar29 + 0x28b) = iVar7 != 0;
    if (iVar7 == 0) {
      uVar26 = uStack_168;
      _strlen();
      param_2[8] = uVar32;
      param_2[9] = uVar26;
      lVar22 = *(long *)(param_2[1] + 8);
      uVar40 = *(ulong *)(lVar22 + 0xcbac8);
      uVar39 = *(ulong *)(lVar22 + 0xcbac0);
      uVar27 = *(ulong *)(lVar22 + 0xcbad8);
      uVar26 = *(ulong *)(lVar22 + 0xcbad0);
      uVar38 = *(ulong *)(lVar22 + 0xcbab8);
      uVar37 = *(ulong *)(lVar22 + 0xcbab0);
      param_2[0x26] = *(ulong *)(lVar22 + 0xcbae0);
      param_2[0x23] = uVar40;
      param_2[0x22] = uVar39;
      param_2[0x25] = uVar27;
      param_2[0x24] = uVar26;
      param_2[0x21] = uVar38;
      param_2[0x20] = uVar37;
      uVar27 = *(ulong *)(lVar22 + 0xcba78);
      uVar26 = *(ulong *)(lVar22 + 0xcba70);
      uVar38 = *(ulong *)(lVar22 + 0xcba88);
      uVar37 = *(ulong *)(lVar22 + 0xcba80);
      uVar39 = *(ulong *)(lVar22 + 0xcba90);
      uVar41 = *(ulong *)(lVar22 + 0xcbaa8);
      uVar40 = *(ulong *)(lVar22 + 0xcbaa0);
      param_2[0x1d] = *(ulong *)(lVar22 + 0xcba98);
      param_2[0x1c] = uVar39;
      param_2[0x1f] = uVar41;
      param_2[0x1e] = uVar40;
      param_2[0x19] = uVar27;
      param_2[0x18] = uVar26;
      param_2[0x1b] = uVar38;
      param_2[0x1a] = uVar37;
      uVar27 = *(ulong *)(lVar22 + 0xcba38);
      uVar26 = *(ulong *)(lVar22 + 0xcba30);
      uVar38 = *(ulong *)(lVar22 + 0xcba48);
      uVar37 = *(ulong *)(lVar22 + 0xcba40);
      uVar39 = *(ulong *)(lVar22 + 0xcba50);
      uVar41 = *(ulong *)(lVar22 + 0xcba68);
      uVar40 = *(ulong *)(lVar22 + 0xcba60);
      param_2[0x15] = *(ulong *)(lVar22 + 0xcba58);
      param_2[0x14] = uVar39;
      param_2[0x17] = uVar41;
      param_2[0x16] = uVar40;
      param_2[0x11] = uVar27;
      param_2[0x10] = uVar26;
      param_2[0x13] = uVar38;
      param_2[0x12] = uVar37;
      uVar38 = *(ulong *)(lVar22 + 0xcba18);
      uVar37 = *(ulong *)(lVar22 + 0xcba10);
      uVar27 = *(ulong *)(lVar22 + 0xcba28);
      uVar26 = *(ulong *)(lVar22 + 0xcba20);
      uVar39 = *(ulong *)(lVar22 + 0xcba00);
      param_2[0xb] = *(ulong *)(lVar22 + 0xcba08);
      param_2[10] = uVar39;
      param_2[0xd] = uVar38;
      param_2[0xc] = uVar37;
      param_2[0xf] = uVar27;
      param_2[0xe] = uVar26;
      func_0x000109e95ce8(plVar31,uVar32);
      FUN_109e95d28(plVar31);
      func_0x000109e95c74(plVar31[4]);
      uVar32 = param_2[0x29];
      if ((*(byte *)(uVar32 + 0x28b) & 1) != 0) {
        func_0x000107c31940(apppuStack_160,puVar29[0x5d]);
        pppuVar18 = &ppuStack_148;
        ppppuVar20 = apppuStack_160;
        FUN_109f68cc4(pppuVar18,ppppuVar20,4,&PTR_DAT_110b93310);
        goto LAB_109f69158;
      }
      if (*(long *)(uVar32 + 0x28) != uVar32 + 0x38) {
        puVar9 = (undefined8 *)param_2[0x27];
        FUN_109f658b0(puVar9,0x20);
        puVar9[2] = 0;
        *puVar9 = puVar9 + 2;
        puVar9[1] = 0;
        puVar9[3] = puVar9;
        *(undefined8 **)(param_2[0x27] + 0xc0) = puVar9;
        FUN_109e151dc();
        if (*(char *)(param_2[0x29] + 0x28b) == '\x01') {
          func_0x000107c31940(apppuStack_160,puVar29[0x5d]);
          pppuVar18 = &ppuStack_148;
          ppppuVar20 = apppuStack_160;
          FUN_109f68cc4(pppuVar18,ppppuVar20,4,&PTR_DAT_110b93328);
          goto LAB_109f69158;
        }
      }
      uStack_16c = 0;
      puStack_1d8 = param_2 + 10;
      uStack_1a8 = param_2[0x27];
      puVar33 = *(uint **)(uStack_1a8 + 0xc0);
      lStack_1a0 = *plVar31 + (long)(int)plVar31[0x1f] * 0x28;
      iStack_1cc = *(int *)(uStack_1a8 + 4);
      puStack_1c8 = puVar29;
      plStack_1c0 = plVar35;
      puStack_1b8 = param_2;
      puStack_1b0 = param_1;
      plStack_198 = plVar31;
      do {
        puVar11 = puVar33;
        FUN_109ec5a44();
        uStack_170 = (uint)puVar11;
        uStack_11f = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_127 = 0;
        uStack_130 = 0;
        bStack_129 = 0;
        uStack_138 = 0;
        uStack_131 = 0;
        uStack_140 = 0;
        ppuStack_148 = &PTR_FUN_110b66600;
        bStack_117 = 0;
        FUN_109eb4670(&ppuStack_148,puVar33);
        uStack_174 = (uint)bStack_117;
        uStack_11f = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_127 = 0;
        uStack_130 = 0;
        bStack_129 = 0;
        uStack_138 = 0;
        uStack_131 = 0;
        uStack_140 = 0;
        ppuStack_148 = &PTR_FUN_110b66088;
        bStack_117 = 0;
        FUN_109eb4670(&ppuStack_148,puVar33);
        uStack_178 = (uint)bStack_117;
        puVar11 = puVar33;
        FUN_109ec353c();
        uStack_17c = (uint)puVar11;
        puVar11 = puVar33;
        FUN_109ec2b48();
        uStack_180 = (uint)puVar11;
        puVar11 = puVar33;
        FUN_109ec2d24();
        uStack_184 = (uint)puVar11;
        ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
        FUN_109eabdbc(puVar33,FUN_109ec2da0,&ppuStack_148);
        uStack_188 = (uint)(byte)ppuStack_148;
        puVar11 = puVar33;
        FUN_109ec5348();
        uStack_18c = (uint)puVar11;
        puVar11 = puVar33;
        func_0x000109ec448c();
        uStack_11f = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_127 = 0;
        uStack_130 = 0;
        bStack_129 = 0;
        uStack_138 = 0;
        uStack_131 = 0;
        uStack_140 = 0;
        ppuStack_148 = &PTR_FUN_110b668b8;
        bStack_117 = 0;
        FUN_109eb4670(&ppuStack_148,puVar33);
        bVar5 = bStack_117;
        unaff_x25 = (ulong)bStack_117;
        puVar12 = puVar33;
        FUN_109ec1f1c(puVar33,*(char *)(*plStack_198 + 0x1a4c4) != '\0',lStack_1a0 + 0x1a7a8);
        puVar13 = puVar33;
        func_0x000109ebbd14(puVar33,1,1,0,0);
        uVar32 = uStack_1a8;
        FUN_109ec1800();
        unaff_x26 = puVar33;
        FUN_109ebd5a4();
        puVar14 = puVar33;
        FUN_109eb8ee4(puVar33,0);
        puVar15 = puVar33;
        FUN_109ec1438();
        puVar16 = puVar33;
        FUN_109eb8dec();
        puVar17 = puVar33;
        FUN_109eb8ee4(puVar33,0);
        if (((uStack_17c | uStack_170 | uStack_180 | uStack_184 | uStack_188 |
              uStack_178 | uStack_174 | uStack_18c | (uint)puVar11 | (uint)bVar5 | (uint)puVar13 |
              (uint)uVar32 | (uint)unaff_x26 | (uint)puVar14 | (uint)puVar12 |
             (uint)puVar15 | (uint)puVar16 | (uint)puVar17) & 1) == 0) break;
        bVar6 = uStack_16c < 999;
        uStack_16c = uStack_16c + 1;
      } while (bVar6);
      FUN_109ec5a44(puVar33);
      plVar35 = plStack_198;
      puVar11 = puStack_1b0;
      puVar29 = puStack_1b8;
      plVar31 = plStack_1c0;
      param_2 = puStack_1c8;
      uVar21 = 5;
      if (iStack_1cc != 4) {
        uVar21 = 0xc;
      }
      uVar1 = 4;
      if (iStack_1cc != 0) {
        uVar1 = uVar21;
      }
      func_0x000109ec2a10(puVar33,uVar1);
      uVar3 = *(uint *)(plVar35 + 0xb6);
      if (0 < (int)uVar3) {
        uVar32 = 0;
        iVar7 = 0;
        plVar28 = (long *)plVar35[0xb7];
        do {
          lVar22 = plVar28[uVar32];
          iVar25 = *(int *)(lVar22 + 0x58);
          while (iVar25 == -1) {
            iVar25 = -1;
            plVar10 = plVar28;
            uVar26 = (ulong)(uVar3 - 1);
            uVar27 = (ulong)uVar3;
            do {
              if (*(int *)(*plVar10 + 0x58) == iVar7) break;
              if (uVar26 == 0) {
                *(int *)(lVar22 + 0x58) = iVar7;
                iVar25 = iVar7;
              }
              uVar26 = uVar26 - 1;
              uVar27 = uVar27 - 1;
              plVar10 = plVar10 + 1;
            } while (uVar27 != 0);
            iVar7 = iVar7 + 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar3);
      }
      FUN_109ec1054(puVar33,plVar35);
      FUN_109eb7420(puVar33);
      if (*(char *)(puVar29[0x29] + 0x28b) == '\x01') {
        func_0x000107c31940(apppuStack_160,param_2[0x5d]);
        pppuVar18 = &ppuStack_148;
        ppppuVar20 = apppuStack_160;
        FUN_109f68cc4(pppuVar18,ppppuVar20,4,&PTR_DAT_110b93340);
      }
      else {
        uVar26 = puVar29[0x27];
        iVar7 = *(int *)(uVar26 + 4);
        uVar32 = (ulong)iVar7;
        if ((*(char *)(puVar29[0x29] + 0xe4) == '\x01') &&
           (((char)plVar31[(long)iVar7 * 5 + 0x34f8] != '\0' ||
            (*(char *)((long)plVar31 + (long)iVar7 * 0x28 + 0x1a7c1) != '\0')))) {
          FUN_109ebe898(plVar31 + (long)iVar7 * 5 + 0x34f7,*(undefined8 *)(uVar26 + 0xc0));
          FUN_109ebd5a4(*(undefined8 *)(puVar29[0x27] + 0xc0));
          FUN_109ec1438(*(undefined8 *)(puVar29[0x27] + 0xc0));
          FUN_109ec2b48(*(undefined8 *)(puVar29[0x27] + 0xc0));
          ppuStack_148 = (undefined **)((ulong)ppuStack_148 & 0xffffffffffffff00);
          FUN_109eabdbc(*(undefined8 *)(puVar29[0x27] + 0xc0),FUN_109ec2da0,&ppuStack_148);
          if ((*(byte *)(puVar29[0x29] + 0x28b) & 1) != 0) {
            func_0x000107c31940(apppuStack_160,param_2[0x5d]);
            pppuVar18 = &ppuStack_148;
            ppppuVar20 = apppuStack_160;
            FUN_109f68cc4(pppuVar18,ppppuVar20,4,&PTR_DAT_110b93358);
            goto LAB_109f69624;
          }
          uVar26 = puVar29[0x27];
          uVar32 = (ulong)*(uint *)(uVar26 + 4);
        }
        plVar28 = plVar31 + 0x3410;
        ppppuVar20 = (undefined ****)(uVar26 + 0xc0);
        FUN_109ea2538(plVar28,ppppuVar20,0,uVar32,puStack_1d8,uVar26 + 0x34);
        *(long **)(puVar29[0x27] + 0xb8) = plVar28;
        if ((ulong *)plVar28[5] == puStack_1d8) {
          func_0x000109f66614(*(undefined8 *)(puVar29[0x29] + 0x50));
          uVar32 = puVar29[0x29];
          *(undefined8 *)(uVar32 + 0x38) = 0;
          *(undefined8 *)(uVar32 + 0x28) = (undefined8 *)(uVar32 + 0x38);
          *(undefined8 *)(uVar32 + 0x50) = 0;
          *(undefined8 *)(uVar32 + 0x30) = 0;
          *(undefined8 **)(uVar32 + 0x40) = (undefined8 *)(uVar32 + 0x28);
          pppuVar18 = *(undefined ****)(puVar29[0x29] + 0x48);
          FUN_109f65a74();
          *(undefined8 *)(puVar29[0x29] + 0x48) = 0;
          *(undefined8 *)(puVar29[0x27] + 0xc0) = 0;
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[0] = 0;
          puVar11[1] = 0;
          *(undefined1 *)(puVar11 + 10) = 1;
          param_1 = puVar33;
          goto LAB_109f69184;
        }
        func_0x000107c31940(apppuStack_160,&UNK_10f6252a8);
        pppuVar18 = &ppuStack_148;
        ppppuVar20 = apppuStack_160;
        FUN_109f68cc4(pppuVar18,ppppuVar20,2,&PTR_DAT_110b93370);
      }
LAB_109f69624:
      *puVar11 = (uint)ppuStack_148;
      *(ulong *)(puVar11 + 4) = CONCAT17(uStack_131,uStack_138);
      *(undefined8 *)(puVar11 + 2) = uStack_140;
      *(ulong *)(puVar11 + 6) = CONCAT17(bStack_129,uStack_130);
      *(ulong *)(puVar11 + 8) = CONCAT71(uStack_127,uStack_128);
      *(undefined1 *)(puVar11 + 10) = 0;
    }
    else {
      func_0x000107c31940(apppuStack_160,puVar29[0x5d]);
      pppuVar18 = &ppuStack_148;
      ppppuVar20 = apppuStack_160;
      FUN_109f68cc4(pppuVar18,ppppuVar20,4,&PTR_DAT_110b932f8);
LAB_109f69158:
      *param_1 = (uint)ppuStack_148;
      *(ulong *)(param_1 + 4) = CONCAT17(uStack_131,uStack_138);
      *(undefined8 *)(param_1 + 2) = uStack_140;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_129,uStack_130);
      *(ulong *)(param_1 + 8) = CONCAT71(uStack_127,uStack_128);
      *(undefined1 *)(param_1 + 10) = 0;
      puVar33 = param_1;
    }
    param_1 = puVar33;
    if (cStack_149 < '\0') {
      pppuVar18 = apppuStack_160[0];
      __ZdlPv();
    }
  }
  else {
    if ((int)param_2[2] == 1) {
      uVar21 = 4;
      uVar30 = 0x8b30;
      goto LAB_109f68ec0;
    }
    func_0x000107c31940(apppuStack_160,&UNK_10f624e60);
    pppuVar18 = &ppuStack_148;
    ppppuVar20 = apppuStack_160;
    FUN_109f68cc4(pppuVar18,ppppuVar20,2,&PTR_DAT_110b93198);
    bVar5 = bStack_129;
    uVar4 = uStack_140;
    uVar3 = (uint)ppuStack_148;
    param_2 = (ulong *)((ulong)ppuStack_148 & 0xffffffff);
    uStack_110 = uStack_138;
    uStack_109 = uStack_131;
    uStack_108 = uStack_130;
    puVar29 = (ulong *)(ulong)bStack_129;
    plVar31 = (long *)CONCAT71(uStack_127,uStack_128);
    if (cStack_149 < '\0') {
      pppuVar18 = apppuStack_160[0];
      __ZdlPv();
    }
    *param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar4;
    *(ulong *)(param_1 + 4) = CONCAT17(uStack_109,uStack_110);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_108,uStack_109);
    *(byte *)((long)param_1 + 0x1f) = bVar5;
    *(long **)(param_1 + 8) = plVar31;
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_109f69184:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_149 < '\0') {
    __ZdlPv(apppuStack_160[0]);
  }
  pppuVar19 = pppuVar18;
  __Unwind_Resume();
  pcStack_1e8 = FUN_109f69708;
  ppuVar23 = pppuVar19[0x28];
  puStack_230 = unaff_x26;
  uStack_228 = unaff_x25;
  plStack_220 = plVar35;
  puStack_218 = param_1;
  puStack_210 = param_2;
  plStack_208 = plVar31;
  puStack_200 = puVar29;
  pppuStack_1f8 = pppuVar18;
  ppuStack_1f0 = &puStack_a0;
  if (ppuVar23 == (undefined **)0x0) {
    func_0x000107c31940(&ppuStack_288,&UNK_10f624f54);
    FUN_109f68cc4(&uStack_330,&ppuStack_288,3,&PTR_DAT_110b931d8);
  }
  else {
    ppuVar24 = pppuVar19[0x2c];
    if (ppuVar24 != (undefined **)0x0) {
      ppuStack_288 = pppuVar19[1] + 2;
      pppuStack_280 = pppuVar19 + 4;
      ppuStack_278 = pppuVar19[3];
      puStack_268 = ppuVar23[9];
      puStack_270 = ppuVar23[8];
      puStack_258 = ppuVar24[9];
      puStack_260 = ppuVar24[8];
      puStack_250 = ppuVar23[0x28];
      puStack_240 = ppuVar23[0x29];
      puStack_248 = ppuVar24[0x28];
      puStack_238 = ppuVar24[0x29];
      uStack_290 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      FUN_109f74eb4(&puStack_360,&ppuStack_288,pppuVar19[2],&uStack_330,ppppuVar20);
      if ((bStack_338 & 1) == 0) {
        extraout_x8[1] = uStack_358;
        extraout_x8[2] = CONCAT17(uStack_349,uStack_350);
        *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_348,uStack_349);
        *(undefined4 *)extraout_x8 = puStack_360._0_4_;
        *(undefined1 *)((long)extraout_x8 + 0x1f) = uStack_341;
        extraout_x8[4] = uStack_340;
        *(undefined1 *)(extraout_x8 + 0x15) = 0;
      }
      else {
        uVar32 = uStack_328;
        if (-1 < (long)uStack_320) {
          uVar32 = uStack_320 >> 0x38;
        }
        if (uVar32 == 0) {
          func_0x000107c31940(auStack_378,&UNK_10f62502e);
          FUN_109f68cc4(&puStack_360,auStack_378,2,&PTR_DAT_110b93208);
        }
        else {
          uVar32 = uStack_310;
          if (-1 < (long)uStack_308) {
            uVar32 = uStack_308 >> 0x38;
          }
          if (uVar32 != 0) {
            extraout_x8[2] = uStack_320;
            extraout_x8[5] = uStack_308;
            extraout_x8[8] = uStack_2f0;
            extraout_x8[0xb] = uStack_2d8;
            extraout_x8[0xe] = uStack_2c0;
            extraout_x8[1] = uStack_328;
            *extraout_x8 = uStack_330;
            uStack_328 = 0;
            uStack_320 = 0;
            uStack_330 = 0;
            extraout_x8[4] = uStack_310;
            extraout_x8[3] = uStack_318;
            uStack_318 = 0;
            uStack_310 = 0;
            uStack_308 = 0;
            extraout_x8[7] = uStack_2f8;
            extraout_x8[6] = uStack_300;
            uStack_2f8 = 0;
            uStack_2f0 = 0;
            uStack_300 = 0;
            extraout_x8[10] = uStack_2e0;
            extraout_x8[9] = uStack_2e8;
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2d8 = 0;
            extraout_x8[0xd] = uStack_2c8;
            extraout_x8[0xc] = uStack_2d0;
            uStack_2d0 = 0;
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            extraout_x8[0x10] = lStack_2b0;
            extraout_x8[0xf] = lStack_2b8;
            extraout_x8[0x11] = uStack_2a8;
            lStack_2b8 = 0;
            lStack_2b0 = 0;
            uStack_2a8 = 0;
            extraout_x8[0x13] = uStack_298;
            extraout_x8[0x12] = uStack_2a0;
            extraout_x8[0x14] = uStack_290;
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0;
            *(undefined1 *)(extraout_x8 + 0x15) = 1;
            goto LAB_109f699d0;
          }
          func_0x000107c31940(auStack_378,&UNK_10f625056);
          FUN_109f68cc4(&puStack_360,auStack_378,2,&PTR_DAT_110b93220);
        }
        *(undefined4 *)extraout_x8 = puStack_360._0_4_;
        extraout_x8[2] = CONCAT17(uStack_349,uStack_350);
        extraout_x8[1] = uStack_358;
        extraout_x8[3] = CONCAT17(uStack_341,uStack_348);
        extraout_x8[4] = uStack_340;
        *(undefined1 *)(extraout_x8 + 0x15) = 0;
        if (cStack_361 < '\0') {
          __ZdlPv(auStack_378[0]);
        }
      }
LAB_109f699d0:
      puStack_360 = &uStack_2a0;
      func_0x0001092d2d9c(&puStack_360);
      if (lStack_2b8 != 0) {
        lStack_2b0 = lStack_2b8;
        __ZdlPv();
      }
      puStack_360 = &uStack_2d0;
      FUN_109f608e0(&puStack_360);
      puStack_360 = &uStack_2e8;
      FUN_109f60564(&puStack_360);
      puStack_360 = &uStack_300;
      func_0x000109f60180(&puStack_360);
      if ((long)uStack_308 < 0) {
        __ZdlPv(uStack_318);
      }
      if (-1 < (long)uStack_320) {
        return;
      }
      __ZdlPv(uStack_330);
      return;
    }
    func_0x000107c31940(&ppuStack_288,&UNK_10f625003);
    FUN_109f68cc4(&uStack_330,&ppuStack_288,3,&PTR_DAT_110b931f0);
  }
  *(undefined4 *)extraout_x8 = (undefined4)uStack_330;
  extraout_x8[2] = uStack_320;
  extraout_x8[1] = uStack_328;
  extraout_x8[3] = uStack_318;
  extraout_x8[4] = uStack_310;
  *(undefined1 *)(extraout_x8 + 0x15) = 0;
  return;
}



/* Entry: 109f68e60; end: 109f69707;  */

/* WARNING: Removing unreachable block (ram,0x000109f69918) */

void FUN_109f68e60(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ****ppppuVar18;
  undefined4 uVar19;
  long lVar20;
  undefined8 *extraout_x8;
  undefined **ppuVar21;
  ulong uVar22;
  undefined **ppuVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined2 uVar29;
  long *plVar30;
  long *plVar31;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined ***pppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  ulong uStack_180;
  long *plStack_178;
  ulong uStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  int iStack_13c;
  ulong uStack_138;
  long *plStack_130;
  ulong uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined ***apppuStack_d0 [2];
  char cStack_b9;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  byte bStack_99;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  byte bStack_87;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long lStack_70;
  long *plVar8;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar31 = *(long **)(*(long *)(param_2 + 8) + 8);
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar29 = 0x8b31;
    uVar19 = 0;
LAB_109f68ec0:
    plVar27 = plVar31 + 2;
    func_0x000109ec61e0(plVar27,*(undefined8 *)(*(long *)(param_2 + 8) + 0x18),uVar29,
                        *(undefined8 *)(param_2 + 0x30));
    *(long **)(param_2 + 0x138) = plVar27;
    *(undefined2 *)plVar27 = uVar29;
    *(undefined4 *)((long)plVar27 + 4) = uVar19;
    plVar27[0x13] = *(long *)(param_2 + 0x30);
    puVar7 = (undefined8 *)0x600;
    _malloc();
    if (puVar7 == (undefined8 *)0x0) {
      plVar30 = (long *)0x0;
    }
    else {
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      *puVar7 = plVar27 + -6;
      lVar20 = plVar27[-5];
      puVar7[3] = lVar20;
      plVar27[-5] = (long)puVar7;
      if (lVar20 != 0) {
        *(undefined8 **)(lVar20 + 0x10) = puVar7;
      }
      plVar30 = puVar7 + 6;
      _bzero(plVar30,0x5d0);
      plVar27 = *(long **)(param_2 + 0x138);
      uVar19 = *(undefined4 *)((long)plVar27 + 4);
    }
    plVar8 = plVar30;
    FUN_109e9de9c(plVar30,plVar31 + 2,uVar19,plVar27);
    iVar6 = (int)plVar8;
    *(long **)(param_2 + 0x148) = plVar30;
    uStack_d8 = *(undefined8 *)(*(long *)(param_2 + 0x138) + 0x98);
    FUN_109e8bb00();
    uVar3 = uStack_d8;
    uVar28 = *(ulong *)(param_2 + 0x148);
    *(bool *)(uVar28 + 0x28b) = iVar6 != 0;
    if (iVar6 == 0) {
      uVar32 = uStack_d8;
      _strlen();
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      *(undefined8 *)(param_2 + 0x48) = uVar32;
      lVar20 = *(long *)(*(long *)(param_2 + 8) + 8);
      uVar37 = *(undefined8 *)(lVar20 + 0xcbac8);
      uVar36 = *(undefined8 *)(lVar20 + 0xcbac0);
      uVar33 = *(undefined8 *)(lVar20 + 0xcbad8);
      uVar32 = *(undefined8 *)(lVar20 + 0xcbad0);
      uVar35 = *(undefined8 *)(lVar20 + 0xcbab8);
      uVar34 = *(undefined8 *)(lVar20 + 0xcbab0);
      *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(lVar20 + 0xcbae0);
      *(undefined8 *)(param_2 + 0x118) = uVar37;
      *(undefined8 *)(param_2 + 0x110) = uVar36;
      *(undefined8 *)(param_2 + 0x128) = uVar33;
      *(undefined8 *)(param_2 + 0x120) = uVar32;
      *(undefined8 *)(param_2 + 0x108) = uVar35;
      *(undefined8 *)(param_2 + 0x100) = uVar34;
      uVar33 = *(undefined8 *)(lVar20 + 0xcba78);
      uVar32 = *(undefined8 *)(lVar20 + 0xcba70);
      uVar35 = *(undefined8 *)(lVar20 + 0xcba88);
      uVar34 = *(undefined8 *)(lVar20 + 0xcba80);
      uVar36 = *(undefined8 *)(lVar20 + 0xcba90);
      uVar38 = *(undefined8 *)(lVar20 + 0xcbaa8);
      uVar37 = *(undefined8 *)(lVar20 + 0xcbaa0);
      *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(lVar20 + 0xcba98);
      *(undefined8 *)(param_2 + 0xe0) = uVar36;
      *(undefined8 *)(param_2 + 0xf8) = uVar38;
      *(undefined8 *)(param_2 + 0xf0) = uVar37;
      *(undefined8 *)(param_2 + 200) = uVar33;
      *(undefined8 *)(param_2 + 0xc0) = uVar32;
      *(undefined8 *)(param_2 + 0xd8) = uVar35;
      *(undefined8 *)(param_2 + 0xd0) = uVar34;
      uVar33 = *(undefined8 *)(lVar20 + 0xcba38);
      uVar32 = *(undefined8 *)(lVar20 + 0xcba30);
      uVar35 = *(undefined8 *)(lVar20 + 0xcba48);
      uVar34 = *(undefined8 *)(lVar20 + 0xcba40);
      uVar36 = *(undefined8 *)(lVar20 + 0xcba50);
      uVar38 = *(undefined8 *)(lVar20 + 0xcba68);
      uVar37 = *(undefined8 *)(lVar20 + 0xcba60);
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar20 + 0xcba58);
      *(undefined8 *)(param_2 + 0xa0) = uVar36;
      *(undefined8 *)(param_2 + 0xb8) = uVar38;
      *(undefined8 *)(param_2 + 0xb0) = uVar37;
      *(undefined8 *)(param_2 + 0x88) = uVar33;
      *(undefined8 *)(param_2 + 0x80) = uVar32;
      *(undefined8 *)(param_2 + 0x98) = uVar35;
      *(undefined8 *)(param_2 + 0x90) = uVar34;
      uVar35 = *(undefined8 *)(lVar20 + 0xcba18);
      uVar34 = *(undefined8 *)(lVar20 + 0xcba10);
      uVar33 = *(undefined8 *)(lVar20 + 0xcba28);
      uVar32 = *(undefined8 *)(lVar20 + 0xcba20);
      uVar36 = *(undefined8 *)(lVar20 + 0xcba00);
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar20 + 0xcba08);
      *(undefined8 *)(param_2 + 0x50) = uVar36;
      *(undefined8 *)(param_2 + 0x68) = uVar35;
      *(undefined8 *)(param_2 + 0x60) = uVar34;
      *(undefined8 *)(param_2 + 0x78) = uVar33;
      *(undefined8 *)(param_2 + 0x70) = uVar32;
      func_0x000109e95ce8(plVar30,uVar3);
      FUN_109e95d28(plVar30);
      func_0x000109e95c74(plVar30[4]);
      lVar20 = *(long *)(param_2 + 0x148);
      if ((*(byte *)(lVar20 + 0x28b) & 1) != 0) {
        func_0x000107c31940(apppuStack_d0,*(undefined8 *)(uVar28 + 0x2e8));
        pppuVar16 = &ppuStack_b8;
        ppppuVar18 = apppuStack_d0;
        FUN_109f68cc4(pppuVar16,ppppuVar18,4,&PTR_DAT_110b93310);
        goto LAB_109f69158;
      }
      if (*(long *)(lVar20 + 0x28) != lVar20 + 0x38) {
        puVar7 = *(undefined8 **)(param_2 + 0x138);
        FUN_109f658b0(puVar7,0x20);
        puVar7[2] = 0;
        *puVar7 = puVar7 + 2;
        puVar7[1] = 0;
        puVar7[3] = puVar7;
        *(undefined8 **)(*(long *)(param_2 + 0x138) + 0xc0) = puVar7;
        FUN_109e151dc();
        if (*(char *)(*(long *)(param_2 + 0x148) + 0x28b) == '\x01') {
          func_0x000107c31940(apppuStack_d0,*(undefined8 *)(uVar28 + 0x2e8));
          pppuVar16 = &ppuStack_b8;
          ppppuVar18 = apppuStack_d0;
          FUN_109f68cc4(pppuVar16,ppppuVar18,4,&PTR_DAT_110b93328);
          goto LAB_109f69158;
        }
      }
      uStack_dc = 0;
      lStack_148 = param_2 + 0x50;
      lStack_118 = *(long *)(param_2 + 0x138);
      puVar7 = *(undefined8 **)(lStack_118 + 0xc0);
      lStack_110 = *plVar30 + (long)(int)plVar30[0x1f] * 0x28;
      iStack_13c = *(int *)(lStack_118 + 4);
      uStack_138 = uVar28;
      plStack_130 = plVar31;
      uStack_128 = param_2;
      puStack_120 = param_1;
      plStack_108 = plVar30;
      do {
        puVar9 = puVar7;
        FUN_109ec5a44();
        uStack_e0 = (uint)puVar9;
        uStack_8f = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_a0 = 0;
        bStack_99 = 0;
        uStack_a8 = 0;
        uStack_a1 = 0;
        uStack_b0 = 0;
        ppuStack_b8 = &PTR_FUN_110b66600;
        bStack_87 = 0;
        FUN_109eb4670(&ppuStack_b8,puVar7);
        uStack_e4 = (uint)bStack_87;
        uStack_8f = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_a0 = 0;
        bStack_99 = 0;
        uStack_a8 = 0;
        uStack_a1 = 0;
        uStack_b0 = 0;
        ppuStack_b8 = &PTR_FUN_110b66088;
        bStack_87 = 0;
        FUN_109eb4670(&ppuStack_b8,puVar7);
        uStack_e8 = (uint)bStack_87;
        puVar9 = puVar7;
        FUN_109ec353c();
        uStack_ec = (uint)puVar9;
        puVar9 = puVar7;
        FUN_109ec2b48();
        uStack_f0 = (uint)puVar9;
        puVar9 = puVar7;
        FUN_109ec2d24();
        uStack_f4 = (uint)puVar9;
        ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffffffffff00);
        FUN_109eabdbc(puVar7,FUN_109ec2da0,&ppuStack_b8);
        uStack_f8 = (uint)(byte)ppuStack_b8;
        puVar9 = puVar7;
        FUN_109ec5348();
        uStack_fc = (uint)puVar9;
        puVar9 = puVar7;
        func_0x000109ec448c();
        uStack_8f = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_97 = 0;
        uStack_a0 = 0;
        bStack_99 = 0;
        uStack_a8 = 0;
        uStack_a1 = 0;
        uStack_b0 = 0;
        ppuStack_b8 = &PTR_FUN_110b668b8;
        bStack_87 = 0;
        FUN_109eb4670(&ppuStack_b8,puVar7);
        bVar4 = bStack_87;
        unaff_x25 = (ulong)bStack_87;
        puVar10 = puVar7;
        FUN_109ec1f1c(puVar7,*(char *)(*plStack_108 + 0x1a4c4) != '\0',lStack_110 + 0x1a7a8);
        puVar11 = puVar7;
        func_0x000109ebbd14(puVar7,1,1,0,0);
        lVar20 = lStack_118;
        FUN_109ec1800();
        unaff_x26 = puVar7;
        FUN_109ebd5a4();
        puVar12 = puVar7;
        FUN_109eb8ee4(puVar7,0);
        puVar13 = puVar7;
        FUN_109ec1438();
        puVar14 = puVar7;
        FUN_109eb8dec();
        puVar15 = puVar7;
        FUN_109eb8ee4(puVar7,0);
        if (((uStack_ec | uStack_e0 | uStack_f0 | uStack_f4 | uStack_f8 | uStack_e8 | uStack_e4 |
              uStack_fc | (uint)puVar9 | (uint)bVar4 | (uint)puVar11 | (uint)lVar20 |
              (uint)unaff_x26 | (uint)puVar12 | (uint)puVar10 |
             (uint)puVar13 | (uint)puVar14 | (uint)puVar15) & 1) == 0) break;
        bVar5 = uStack_dc < 999;
        uStack_dc = uStack_dc + 1;
      } while (bVar5);
      FUN_109ec5a44(puVar7);
      plVar31 = plStack_108;
      puVar9 = puStack_120;
      uVar28 = uStack_128;
      plVar30 = plStack_130;
      param_2 = uStack_138;
      uVar19 = 5;
      if (iStack_13c != 4) {
        uVar19 = 0xc;
      }
      uVar1 = 4;
      if (iStack_13c != 0) {
        uVar1 = uVar19;
      }
      func_0x000109ec2a10(puVar7,uVar1);
      uVar2 = *(uint *)(plVar31 + 0xb6);
      if (0 < (int)uVar2) {
        uVar22 = 0;
        iVar6 = 0;
        plVar27 = (long *)plVar31[0xb7];
        do {
          lVar20 = plVar27[uVar22];
          iVar24 = *(int *)(lVar20 + 0x58);
          while (iVar24 == -1) {
            iVar24 = -1;
            plVar8 = plVar27;
            uVar25 = (ulong)(uVar2 - 1);
            uVar26 = (ulong)uVar2;
            do {
              if (*(int *)(*plVar8 + 0x58) == iVar6) break;
              if (uVar25 == 0) {
                *(int *)(lVar20 + 0x58) = iVar6;
                iVar24 = iVar6;
              }
              uVar25 = uVar25 - 1;
              uVar26 = uVar26 - 1;
              plVar8 = plVar8 + 1;
            } while (uVar26 != 0);
            iVar6 = iVar6 + 1;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar2);
      }
      FUN_109ec1054(puVar7,plVar31);
      FUN_109eb7420(puVar7);
      if (*(char *)(*(long *)(uVar28 + 0x148) + 0x28b) == '\x01') {
        func_0x000107c31940(apppuStack_d0,*(undefined8 *)(param_2 + 0x2e8));
        pppuVar16 = &ppuStack_b8;
        ppppuVar18 = apppuStack_d0;
        FUN_109f68cc4(pppuVar16,ppppuVar18,4,&PTR_DAT_110b93340);
      }
      else {
        lVar20 = *(long *)(uVar28 + 0x138);
        iVar6 = *(int *)(lVar20 + 4);
        uVar22 = (ulong)iVar6;
        if (*(char *)(*(long *)(uVar28 + 0x148) + 0xe4) == '\x01') {
          if (((char)plVar30[(long)iVar6 * 5 + 0x34f8] != '\0') ||
             (*(char *)((long)plVar30 + (long)iVar6 * 0x28 + 0x1a7c1) != '\0')) {
            FUN_109ebe898(plVar30 + (long)iVar6 * 5 + 0x34f7,*(undefined8 *)(lVar20 + 0xc0));
            FUN_109ebd5a4(*(undefined8 *)(*(long *)(uVar28 + 0x138) + 0xc0));
            FUN_109ec1438(*(undefined8 *)(*(long *)(uVar28 + 0x138) + 0xc0));
            FUN_109ec2b48(*(undefined8 *)(*(long *)(uVar28 + 0x138) + 0xc0));
            ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffffffffff00);
            FUN_109eabdbc(*(undefined8 *)(*(long *)(uVar28 + 0x138) + 0xc0),FUN_109ec2da0,
                          &ppuStack_b8);
            if ((*(byte *)(*(long *)(uVar28 + 0x148) + 0x28b) & 1) != 0) {
              func_0x000107c31940(apppuStack_d0,*(undefined8 *)(param_2 + 0x2e8));
              pppuVar16 = &ppuStack_b8;
              ppppuVar18 = apppuStack_d0;
              FUN_109f68cc4(pppuVar16,ppppuVar18,4,&PTR_DAT_110b93358);
              goto LAB_109f69624;
            }
            lVar20 = *(long *)(uVar28 + 0x138);
            uVar22 = (ulong)*(uint *)(lVar20 + 4);
          }
        }
        plVar27 = plVar30 + 0x3410;
        ppppuVar18 = (undefined ****)(lVar20 + 0xc0);
        FUN_109ea2538(plVar27,ppppuVar18,0,uVar22,lStack_148,lVar20 + 0x34);
        *(long **)(*(long *)(uVar28 + 0x138) + 0xb8) = plVar27;
        if (plVar27[5] == lStack_148) {
          func_0x000109f66614(*(undefined8 *)(*(long *)(uVar28 + 0x148) + 0x50));
          lVar20 = *(long *)(uVar28 + 0x148);
          *(undefined8 *)(lVar20 + 0x38) = 0;
          *(undefined8 *)(lVar20 + 0x28) = (undefined8 *)(lVar20 + 0x38);
          *(undefined8 *)(lVar20 + 0x50) = 0;
          *(undefined8 *)(lVar20 + 0x30) = 0;
          *(undefined8 **)(lVar20 + 0x40) = (undefined8 *)(lVar20 + 0x28);
          pppuVar16 = *(undefined ****)(*(long *)(uVar28 + 0x148) + 0x48);
          FUN_109f65a74();
          *(undefined8 *)(*(long *)(uVar28 + 0x148) + 0x48) = 0;
          *(undefined8 *)(*(long *)(uVar28 + 0x138) + 0xc0) = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          *(undefined1 *)(puVar9 + 5) = 1;
          param_1 = puVar7;
          goto LAB_109f69184;
        }
        func_0x000107c31940(apppuStack_d0,&UNK_10f6252a8);
        pppuVar16 = &ppuStack_b8;
        ppppuVar18 = apppuStack_d0;
        FUN_109f68cc4(pppuVar16,ppppuVar18,2,&PTR_DAT_110b93370);
      }
LAB_109f69624:
      *(undefined4 *)puVar9 = ppuStack_b8._0_4_;
      puVar9[2] = CONCAT17(uStack_a1,uStack_a8);
      puVar9[1] = uStack_b0;
      puVar9[3] = CONCAT17(bStack_99,uStack_a0);
      puVar9[4] = CONCAT71(uStack_97,uStack_98);
      *(undefined1 *)(puVar9 + 5) = 0;
    }
    else {
      func_0x000107c31940(apppuStack_d0,*(undefined8 *)(uVar28 + 0x2e8));
      pppuVar16 = &ppuStack_b8;
      ppppuVar18 = apppuStack_d0;
      FUN_109f68cc4(pppuVar16,ppppuVar18,4,&PTR_DAT_110b932f8);
LAB_109f69158:
      *(undefined4 *)param_1 = ppuStack_b8._0_4_;
      param_1[2] = CONCAT17(uStack_a1,uStack_a8);
      param_1[1] = uStack_b0;
      param_1[3] = CONCAT17(bStack_99,uStack_a0);
      param_1[4] = CONCAT71(uStack_97,uStack_98);
      *(undefined1 *)(param_1 + 5) = 0;
      puVar7 = param_1;
    }
    param_1 = puVar7;
    if (cStack_b9 < '\0') {
      pppuVar16 = apppuStack_d0[0];
      __ZdlPv();
    }
  }
  else {
    if (*(int *)(param_2 + 0x10) == 1) {
      uVar19 = 4;
      uVar29 = 0x8b30;
      goto LAB_109f68ec0;
    }
    func_0x000107c31940(apppuStack_d0,&UNK_10f624e60);
    pppuVar16 = &ppuStack_b8;
    ppppuVar18 = apppuStack_d0;
    FUN_109f68cc4(pppuVar16,ppppuVar18,2,&PTR_DAT_110b93198);
    bVar4 = bStack_99;
    uVar3 = uStack_b0;
    uVar19 = ppuStack_b8._0_4_;
    param_2 = (ulong)ppuStack_b8 & 0xffffffff;
    uStack_80 = uStack_a8;
    uStack_79 = uStack_a1;
    uStack_78 = uStack_a0;
    uVar28 = (ulong)bStack_99;
    plVar30 = (long *)CONCAT71(uStack_97,uStack_98);
    if (cStack_b9 < '\0') {
      pppuVar16 = apppuStack_d0[0];
      __ZdlPv();
    }
    *(undefined4 *)param_1 = uVar19;
    param_1[1] = uVar3;
    param_1[2] = CONCAT17(uStack_79,uStack_80);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_78,uStack_79);
    *(byte *)((long)param_1 + 0x1f) = bVar4;
    param_1[4] = plVar30;
    *(undefined1 *)(param_1 + 5) = 0;
  }
LAB_109f69184:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b9 < '\0') {
    __ZdlPv(apppuStack_d0[0]);
  }
  pppuVar17 = pppuVar16;
  __Unwind_Resume();
  pcStack_158 = FUN_109f69708;
  ppuVar21 = pppuVar17[0x28];
  puStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  plStack_190 = plVar31;
  puStack_188 = param_1;
  uStack_180 = param_2;
  plStack_178 = plVar30;
  uStack_170 = uVar28;
  pppuStack_168 = pppuVar16;
  puStack_160 = &stack0xfffffffffffffff0;
  if (ppuVar21 == (undefined **)0x0) {
    func_0x000107c31940(&ppuStack_1f8,&UNK_10f624f54);
    FUN_109f68cc4(&uStack_2a0,&ppuStack_1f8,3,&PTR_DAT_110b931d8);
  }
  else {
    ppuVar23 = pppuVar17[0x2c];
    if (ppuVar23 != (undefined **)0x0) {
      ppuStack_1f8 = pppuVar17[1] + 2;
      pppuStack_1f0 = pppuVar17 + 4;
      ppuStack_1e8 = pppuVar17[3];
      puStack_1d8 = ppuVar21[9];
      puStack_1e0 = ppuVar21[8];
      puStack_1c8 = ppuVar23[9];
      puStack_1d0 = ppuVar23[8];
      puStack_1c0 = ppuVar21[0x28];
      puStack_1b0 = ppuVar21[0x29];
      puStack_1b8 = ppuVar23[0x28];
      puStack_1a8 = ppuVar23[0x29];
      uStack_200 = 0;
      uStack_218 = 0;
      lStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      FUN_109f74eb4(&puStack_2d0,&ppuStack_1f8,pppuVar17[2],&uStack_2a0,ppppuVar18);
      if ((bStack_2a8 & 1) == 0) {
        extraout_x8[1] = uStack_2c8;
        extraout_x8[2] = CONCAT17(uStack_2b9,uStack_2c0);
        *(ulong *)((long)extraout_x8 + 0x17) = CONCAT71(uStack_2b8,uStack_2b9);
        *(undefined4 *)extraout_x8 = puStack_2d0._0_4_;
        *(undefined1 *)((long)extraout_x8 + 0x1f) = uStack_2b1;
        extraout_x8[4] = uStack_2b0;
        *(undefined1 *)(extraout_x8 + 0x15) = 0;
      }
      else {
        uVar28 = uStack_298;
        if (-1 < (long)uStack_290) {
          uVar28 = uStack_290 >> 0x38;
        }
        if (uVar28 == 0) {
          func_0x000107c31940(auStack_2e8,&UNK_10f62502e);
          FUN_109f68cc4(&puStack_2d0,auStack_2e8,2,&PTR_DAT_110b93208);
        }
        else {
          uVar28 = uStack_280;
          if (-1 < (long)uStack_278) {
            uVar28 = uStack_278 >> 0x38;
          }
          if (uVar28 != 0) {
            extraout_x8[2] = uStack_290;
            extraout_x8[5] = uStack_278;
            extraout_x8[8] = uStack_260;
            extraout_x8[0xb] = uStack_248;
            extraout_x8[0xe] = uStack_230;
            extraout_x8[1] = uStack_298;
            *extraout_x8 = uStack_2a0;
            uStack_298 = 0;
            uStack_290 = 0;
            uStack_2a0 = 0;
            extraout_x8[4] = uStack_280;
            extraout_x8[3] = uStack_288;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            extraout_x8[7] = uStack_268;
            extraout_x8[6] = uStack_270;
            uStack_268 = 0;
            uStack_260 = 0;
            uStack_270 = 0;
            extraout_x8[10] = uStack_250;
            extraout_x8[9] = uStack_258;
            uStack_258 = 0;
            uStack_250 = 0;
            uStack_248 = 0;
            extraout_x8[0xd] = uStack_238;
            extraout_x8[0xc] = uStack_240;
            uStack_240 = 0;
            uStack_238 = 0;
            uStack_230 = 0;
            extraout_x8[0x10] = lStack_220;
            extraout_x8[0xf] = lStack_228;
            extraout_x8[0x11] = uStack_218;
            lStack_228 = 0;
            lStack_220 = 0;
            uStack_218 = 0;
            extraout_x8[0x13] = uStack_208;
            extraout_x8[0x12] = uStack_210;
            extraout_x8[0x14] = uStack_200;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_200 = 0;
            *(undefined1 *)(extraout_x8 + 0x15) = 1;
            goto LAB_109f699d0;
          }
          func_0x000107c31940(auStack_2e8,&UNK_10f625056);
          FUN_109f68cc4(&puStack_2d0,auStack_2e8,2,&PTR_DAT_110b93220);
        }
        *(undefined4 *)extraout_x8 = puStack_2d0._0_4_;
        extraout_x8[2] = CONCAT17(uStack_2b9,uStack_2c0);
        extraout_x8[1] = uStack_2c8;
        extraout_x8[3] = CONCAT17(uStack_2b1,uStack_2b8);
        extraout_x8[4] = uStack_2b0;
        *(undefined1 *)(extraout_x8 + 0x15) = 0;
        if (cStack_2d1 < '\0') {
          __ZdlPv(auStack_2e8[0]);
        }
      }
LAB_109f699d0:
      puStack_2d0 = &uStack_210;
      func_0x0001092d2d9c(&puStack_2d0);
      if (lStack_228 != 0) {
        lStack_220 = lStack_228;
        __ZdlPv();
      }
      puStack_2d0 = &uStack_240;
      FUN_109f608e0(&puStack_2d0);
      puStack_2d0 = &uStack_258;
      FUN_109f60564(&puStack_2d0);
      puStack_2d0 = &uStack_270;
      func_0x000109f60180(&puStack_2d0);
      if ((long)uStack_278 < 0) {
        __ZdlPv(uStack_288);
      }
      if (-1 < (long)uStack_290) {
        return;
      }
      __ZdlPv(uStack_2a0);
      return;
    }
    func_0x000107c31940(&ppuStack_1f8,&UNK_10f625003);
    FUN_109f68cc4(&uStack_2a0,&ppuStack_1f8,3,&PTR_DAT_110b931f0);
  }
  *(undefined4 *)extraout_x8 = (undefined4)uStack_2a0;
  extraout_x8[2] = uStack_290;
  extraout_x8[1] = uStack_298;
  extraout_x8[3] = uStack_288;
  extraout_x8[4] = uStack_280;
  *(undefined1 *)(extraout_x8 + 0x15) = 0;
  return;
}



/* Entry: 109f69708; end: 109f69a9f;  */

/* WARNING: Removing unreachable block (ram,0x000109f69918) */

void FUN_109f69708(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined8 uStack_160;
  byte bStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_2 + 0x140);
  if (lVar2 == 0) {
    func_0x000107c31940(&lStack_a8,&UNK_10f624f54);
    FUN_109f68cc4(&uStack_150,&lStack_a8,3,&PTR_DAT_110b931d8);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x160);
    if (lVar3 != 0) {
      lStack_a8 = *(long *)(param_2 + 8) + 0x10;
      lStack_a0 = param_2 + 0x20;
      uStack_98 = *(undefined8 *)(param_2 + 0x18);
      uStack_88 = *(undefined8 *)(lVar2 + 0x48);
      uStack_90 = *(undefined8 *)(lVar2 + 0x40);
      uStack_78 = *(undefined8 *)(lVar3 + 0x48);
      uStack_80 = *(undefined8 *)(lVar3 + 0x40);
      uStack_70 = *(undefined8 *)(lVar2 + 0x140);
      uStack_60 = *(undefined8 *)(lVar2 + 0x148);
      uStack_68 = *(undefined8 *)(lVar3 + 0x140);
      uStack_58 = *(undefined8 *)(lVar3 + 0x148);
      uStack_b0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_d8 = 0;
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
      FUN_109f74eb4(&puStack_180,&lStack_a8,*(undefined8 *)(param_2 + 0x10),&uStack_150,param_3);
      if ((bStack_158 & 1) == 0) {
        param_1[1] = uStack_178;
        param_1[2] = CONCAT17(uStack_169,uStack_170);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_168,uStack_169);
        *(undefined4 *)param_1 = puStack_180._0_4_;
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_161;
        param_1[4] = uStack_160;
        *(undefined1 *)(param_1 + 0x15) = 0;
      }
      else {
        uVar1 = uStack_148;
        if (-1 < (long)uStack_140) {
          uVar1 = uStack_140 >> 0x38;
        }
        if (uVar1 == 0) {
          func_0x000107c31940(auStack_198,&UNK_10f62502e);
          FUN_109f68cc4(&puStack_180,auStack_198,2,&PTR_DAT_110b93208);
        }
        else {
          uVar1 = uStack_130;
          if (-1 < (long)uStack_128) {
            uVar1 = uStack_128 >> 0x38;
          }
          if (uVar1 != 0) {
            param_1[2] = uStack_140;
            param_1[5] = uStack_128;
            param_1[8] = uStack_110;
            param_1[0xb] = uStack_f8;
            param_1[0xe] = uStack_e0;
            param_1[1] = uStack_148;
            *param_1 = uStack_150;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_150 = 0;
            param_1[4] = uStack_130;
            param_1[3] = uStack_138;
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            param_1[7] = uStack_118;
            param_1[6] = uStack_120;
            uStack_118 = 0;
            uStack_110 = 0;
            uStack_120 = 0;
            param_1[10] = uStack_100;
            param_1[9] = uStack_108;
            uStack_108 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            param_1[0xd] = uStack_e8;
            param_1[0xc] = uStack_f0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            param_1[0x10] = lStack_d0;
            param_1[0xf] = lStack_d8;
            param_1[0x11] = uStack_c8;
            lStack_d8 = 0;
            lStack_d0 = 0;
            uStack_c8 = 0;
            param_1[0x13] = uStack_b8;
            param_1[0x12] = uStack_c0;
            param_1[0x14] = uStack_b0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            *(undefined1 *)(param_1 + 0x15) = 1;
            goto LAB_109f699d0;
          }
          func_0x000107c31940(auStack_198,&UNK_10f625056);
          FUN_109f68cc4(&puStack_180,auStack_198,2,&PTR_DAT_110b93220);
        }
        *(undefined4 *)param_1 = puStack_180._0_4_;
        param_1[2] = CONCAT17(uStack_169,uStack_170);
        param_1[1] = uStack_178;
        param_1[3] = CONCAT17(uStack_161,uStack_168);
        param_1[4] = uStack_160;
        *(undefined1 *)(param_1 + 0x15) = 0;
        if (cStack_181 < '\0') {
          __ZdlPv(auStack_198[0]);
        }
      }
LAB_109f699d0:
      puStack_180 = &uStack_c0;
      func_0x0001092d2d9c(&puStack_180);
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        __ZdlPv();
      }
      puStack_180 = &uStack_f0;
      FUN_109f608e0(&puStack_180);
      puStack_180 = &uStack_108;
      FUN_109f60564(&puStack_180);
      puStack_180 = &uStack_120;
      func_0x000109f60180(&puStack_180);
      if ((long)uStack_128 < 0) {
        __ZdlPv(uStack_138);
      }
      if (-1 < (long)uStack_140) {
        return;
      }
      __ZdlPv(uStack_150);
      return;
    }
    func_0x000107c31940(&lStack_a8,&UNK_10f625003);
    FUN_109f68cc4(&uStack_150,&lStack_a8,3,&PTR_DAT_110b931f0);
  }
  *(undefined4 *)param_1 = (undefined4)uStack_150;
  param_1[2] = uStack_140;
  param_1[1] = uStack_148;
  param_1[3] = uStack_138;
  param_1[4] = uStack_130;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}



/* Entry: 109f69aa0; end: 109f69b37;  */

undefined8 * FUN_109f69aa0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 0x12;
  func_0x0001092d2d9c(&puStack_28);
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xc;
  FUN_109f608e0(&puStack_28);
  puStack_28 = param_1 + 9;
  FUN_109f60564(&puStack_28);
  puStack_28 = param_1 + 6;
  func_0x000109f60180(&puStack_28);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109f69b38; end: 109f69ed3;  */

/* WARNING: Removing unreachable block (ram,0x000109f69c10) */

void FUN_109f69b38(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined8 uStack_160;
  byte bStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if (*(long *)(param_2 + 0x140) == 0) {
    func_0x000107c31940(&lStack_b8,&UNK_10f624f54);
    FUN_109f68cc4(&uStack_150,&lStack_b8,3,&PTR_DAT_110b93238);
  }
  else {
    if (*(long *)(param_2 + 0x160) != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28);
      lStack_58 = *(long *)(lVar3 + 0x160);
      if (lStack_58 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*(long *)(lStack_58 + -0x30) != 0) {
          lVar2 = *(long *)(lStack_58 + -0x30) + 0x30;
        }
      }
      lStack_60 = lVar3;
      FUN_109ed0574();
      *(long *)(lVar3 + 0x160) = lVar2;
      if (*(char *)(param_3 + 1) != '\0') {
        func_0x000109f0ce74(*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28) +
                             0x160));
      }
      lStack_b8 = *(long *)(param_2 + 8) + 0x10;
      lStack_b0 = param_2 + 0x20;
      uStack_a8 = *(undefined8 *)(param_2 + 0x18);
      lVar3 = *(long *)(param_2 + 0x140);
      uStack_98 = *(undefined8 *)(lVar3 + 0x48);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x40);
      lVar2 = *(long *)(param_2 + 0x160);
      uStack_88 = *(undefined8 *)(lVar2 + 0x48);
      uStack_90 = *(undefined8 *)(lVar2 + 0x40);
      uStack_80 = *(undefined8 *)(lVar3 + 0x140);
      uStack_70 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar2 + 0x140);
      uStack_68 = *(undefined8 *)(lVar2 + 0x148);
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      FUN_109fae924(&puStack_180,&lStack_b8,*(undefined8 *)(param_2 + 0x10),&uStack_150,param_3);
      if ((bStack_158 & 1) == 0) {
        param_1[1] = uStack_178;
        param_1[2] = CONCAT17(uStack_169,uStack_170);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_168,uStack_169);
        *(undefined4 *)param_1 = puStack_180._0_4_;
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_161;
        param_1[4] = uStack_160;
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
      else {
        uVar1 = uStack_148;
        if (-1 < (long)uStack_140) {
          uVar1 = uStack_140 >> 0x38;
        }
        if (uVar1 == 0) {
          func_0x000107c31940(auStack_198,&UNK_10f625109);
          FUN_109f68cc4(&puStack_180,auStack_198,2,&PTR_DAT_110b93268);
          *(undefined4 *)param_1 = puStack_180._0_4_;
          param_1[2] = CONCAT17(uStack_169,uStack_170);
          param_1[1] = uStack_178;
          param_1[3] = CONCAT17(uStack_161,uStack_168);
          param_1[4] = uStack_160;
          *(undefined1 *)(param_1 + 0x12) = 0;
          if (cStack_181 < '\0') {
            __ZdlPv(auStack_198[0]);
          }
        }
        else {
          param_1[2] = uStack_140;
          param_1[5] = uStack_128;
          param_1[8] = uStack_110;
          param_1[0xb] = uStack_f8;
          param_1[0xe] = uStack_e0;
          param_1[1] = uStack_148;
          *param_1 = uStack_150;
          uStack_148 = 0;
          uStack_140 = 0;
          uStack_150 = 0;
          param_1[4] = uStack_130;
          param_1[3] = uStack_138;
          uStack_130 = 0;
          uStack_128 = 0;
          uStack_138 = 0;
          param_1[7] = uStack_118;
          param_1[6] = uStack_120;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_120 = 0;
          param_1[10] = uStack_100;
          param_1[9] = uStack_108;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          param_1[0xd] = lStack_e8;
          param_1[0xc] = lStack_f0;
          lStack_f0 = 0;
          lStack_e8 = 0;
          uStack_e0 = 0;
          param_1[0x10] = uStack_d0;
          param_1[0xf] = uStack_d8;
          param_1[0x11] = uStack_c8;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          *(undefined1 *)(param_1 + 0x12) = 1;
        }
      }
      puStack_180 = &uStack_d8;
      func_0x0001092d2d9c(&puStack_180);
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      puStack_180 = &uStack_108;
      FUN_109f608e0(&puStack_180);
      puStack_180 = &uStack_120;
      FUN_109f60564(&puStack_180);
      puStack_180 = &uStack_138;
      func_0x000109f60180(&puStack_180);
      if ((long)uStack_140 < 0) {
        __ZdlPv(uStack_150);
      }
      func_0x000109f69f5c(&lStack_60);
      return;
    }
    func_0x000107c31940(&lStack_b8,&UNK_10f625003);
    FUN_109f68cc4(&uStack_150,&lStack_b8,3,&PTR_DAT_110b93250);
  }
  *(undefined4 *)param_1 = (undefined4)uStack_150;
  param_1[2] = uStack_140;
  param_1[1] = uStack_148;
  param_1[3] = uStack_138;
  param_1[4] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 109f69ed4; end: 109f69fa7;  */

undefined8 * FUN_109f69ed4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 0xf;
  func_0x0001092d2d9c(&puStack_28);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  puStack_28 = param_1 + 9;
  FUN_109f608e0(&puStack_28);
  puStack_28 = param_1 + 6;
  FUN_109f60564(&puStack_28);
  puStack_28 = param_1 + 3;
  func_0x000109f60180(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109f69fa8; end: 109f6a237;  */

/* WARNING: Removing unreachable block (ram,0x000109f6a07c) */

void FUN_109f69fa8(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_1b0 [2];
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined8 uStack_190;
  byte bStack_188;
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
  undefined1 auStack_b8 [88];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*(long *)(param_2 + 0x140) == 0) {
    func_0x000107c31940(auStack_b8,&UNK_10f624f54);
    FUN_109f68cc4(&uStack_180,auStack_b8,3,&PTR_DAT_110b93280);
  }
  else {
    if (*(long *)(param_2 + 0x160) != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28);
      lStack_48 = *(long *)(lVar3 + 0x160);
      if (lStack_48 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*(long *)(lStack_48 + -0x30) != 0) {
          lVar2 = *(long *)(lStack_48 + -0x30) + 0x30;
        }
      }
      lStack_50 = lVar3;
      FUN_109ed0574();
      *(long *)(lVar3 + 0x160) = lVar2;
      lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x160) + 0x140) + 0x28);
      lStack_58 = *(long *)(lVar3 + 0x160);
      if (lStack_58 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (*(long *)(lStack_58 + -0x30) != 0) {
          lVar2 = *(long *)(lStack_58 + -0x30) + 0x30;
        }
      }
      lStack_60 = lVar3;
      FUN_109ed0574();
      *(long *)(lVar3 + 0x160) = lVar2;
      if (*(char *)(param_3 + 2) != '\0') {
        func_0x000109f0ce74(*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28) +
                             0x160));
      }
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_109fbb248(auStack_1b0,auStack_b8,&uStack_180,param_3);
      bVar1 = (bStack_188 & 1) == 0;
      if (bVar1) {
        param_1[1] = uStack_1a8;
        param_1[2] = CONCAT17(uStack_199,uStack_1a0);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_198,uStack_199);
        *(undefined4 *)param_1 = auStack_1b0[0];
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_191;
        param_1[4] = uStack_190;
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
      }
      *(bool *)(param_1 + 0x18) = !bVar1;
      FUN_109f6d2b8(&uStack_180);
      func_0x000109f69f5c(&lStack_60);
      func_0x000109f69f5c(&lStack_50);
      return;
    }
    func_0x000107c31940(auStack_b8,&UNK_10f625003);
    FUN_109f68cc4(&uStack_180,auStack_b8,3,&PTR_DAT_110b93298);
  }
  *(undefined4 *)param_1 = (undefined4)uStack_180;
  param_1[2] = uStack_170;
  param_1[1] = uStack_178;
  param_1[3] = uStack_168;
  param_1[4] = uStack_160;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109f6a238; end: 109f6a5c3;  */

/* WARNING: Removing unreachable block (ram,0x000109f6a30c) */

void FUN_109f6a238(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined4 auStack_1d0 [2];
  long lStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  long lStack_1b0;
  byte bStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*(long *)(param_2 + 0x140) == 0) {
    func_0x000107c31940(&lStack_a8,&UNK_10f624f54);
    FUN_109f68cc4(&lStack_1a0,&lStack_a8,3,&PTR_DAT_110b932b0);
  }
  else {
    if (*(long *)(param_2 + 0x160) != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28);
      lStack_48 = *(long *)(lVar2 + 0x160);
      if (lStack_48 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = 0;
        if (*(long *)(lStack_48 + -0x30) != 0) {
          lVar1 = *(long *)(lStack_48 + -0x30) + 0x30;
        }
      }
      lStack_50 = lVar2;
      FUN_109ed0574();
      *(long *)(lVar2 + 0x160) = lVar1;
      if (*(char *)(param_3 + 8) != '\0') {
        func_0x000109f0ce74(*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(param_2 + 0x140) + 0x140) + 0x28) +
                             0x160));
      }
      lStack_a8 = *(long *)(param_2 + 8) + 0x10;
      lStack_a0 = param_2 + 0x20;
      uStack_98 = *(undefined8 *)(param_2 + 0x18);
      lVar2 = *(long *)(param_2 + 0x140);
      uStack_88 = *(undefined8 *)(lVar2 + 0x48);
      uStack_90 = *(undefined8 *)(lVar2 + 0x40);
      lVar1 = *(long *)(param_2 + 0x160);
      uStack_78 = *(undefined8 *)(lVar1 + 0x48);
      uStack_80 = *(undefined8 *)(lVar1 + 0x40);
      uStack_70 = *(undefined8 *)(lVar2 + 0x140);
      uStack_60 = *(undefined8 *)(lVar2 + 0x148);
      uStack_68 = *(undefined8 *)(lVar1 + 0x140);
      uStack_58 = *(undefined8 *)(lVar1 + 0x148);
      lStack_c8 = 0;
      lStack_d0 = 0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
      lStack_f8 = 0;
      lStack_100 = 0;
      lStack_128 = 0;
      lStack_130 = 0;
      lStack_118 = 0;
      lStack_120 = 0;
      lStack_148 = 0;
      lStack_150 = 0;
      lStack_138 = 0;
      lStack_140 = 0;
      lStack_158 = 0;
      lStack_160 = 0;
      lStack_178 = 0;
      lStack_180 = 0;
      lStack_168 = 0;
      lStack_170 = 0;
      lStack_198 = 0;
      lStack_1a0 = 0;
      lStack_188 = 0;
      lStack_190 = 0;
      FUN_109f8f1b4(auStack_1d0,&lStack_a8,*(undefined8 *)(param_2 + 0x10),&lStack_1a0,param_3);
      if ((bStack_1a8 & 1) == 0) {
        param_1[1] = lStack_1c8;
        param_1[2] = CONCAT17(uStack_1b9,uStack_1c0);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_1b8,uStack_1b9);
        *(undefined4 *)param_1 = auStack_1d0[0];
        *(undefined1 *)((long)param_1 + 0x1f) = uStack_1b1;
        param_1[4] = lStack_1b0;
        *(undefined1 *)(param_1 + 0x1e) = 0;
      }
      else if (lStack_1a0 == lStack_198) {
        func_0x000107c31940(auStack_1e8,&UNK_10f62524a);
        FUN_109f68cc4(auStack_1d0,auStack_1e8,2,&PTR_DAT_110b932e0);
        *(undefined4 *)param_1 = auStack_1d0[0];
        param_1[2] = CONCAT17(uStack_1b9,uStack_1c0);
        param_1[1] = lStack_1c8;
        param_1[3] = CONCAT17(uStack_1b1,uStack_1b8);
        param_1[4] = lStack_1b0;
        *(undefined1 *)(param_1 + 0x1e) = 0;
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
      }
      else {
        *param_1 = lStack_1a0;
        param_1[1] = lStack_198;
        param_1[2] = lStack_190;
        lStack_1a0 = 0;
        lStack_198 = 0;
        param_1[4] = lStack_180;
        param_1[3] = lStack_188;
        param_1[5] = lStack_178;
        lStack_190 = 0;
        lStack_188 = 0;
        lStack_180 = 0;
        lStack_178 = 0;
        param_1[7] = lStack_168;
        param_1[6] = lStack_170;
        param_1[8] = lStack_160;
        lStack_170 = 0;
        lStack_168 = 0;
        param_1[10] = lStack_150;
        param_1[9] = lStack_158;
        param_1[0xb] = lStack_148;
        lStack_160 = 0;
        lStack_158 = 0;
        lStack_150 = 0;
        lStack_148 = 0;
        param_1[0xd] = lStack_138;
        param_1[0xc] = lStack_140;
        param_1[0xe] = lStack_130;
        lStack_140 = 0;
        lStack_138 = 0;
        param_1[0x10] = lStack_120;
        param_1[0xf] = lStack_128;
        param_1[0x11] = lStack_118;
        lStack_130 = 0;
        lStack_128 = 0;
        lStack_120 = 0;
        lStack_118 = 0;
        param_1[0x14] = lStack_100;
        param_1[0x13] = lStack_108;
        param_1[0x12] = lStack_110;
        lStack_110 = 0;
        lStack_108 = 0;
        param_1[0x17] = lStack_e8;
        param_1[0x16] = lStack_f0;
        param_1[0x15] = lStack_f8;
        lStack_100 = 0;
        lStack_f8 = 0;
        lStack_f0 = 0;
        lStack_e8 = 0;
        param_1[0x19] = lStack_d8;
        param_1[0x18] = lStack_e0;
        param_1[0x1a] = lStack_d0;
        lStack_e0 = 0;
        lStack_d8 = 0;
        param_1[0x1c] = lStack_c0;
        param_1[0x1b] = lStack_c8;
        param_1[0x1d] = lStack_b8;
        lStack_d0 = 0;
        lStack_c8 = 0;
        lStack_c0 = 0;
        lStack_b8 = 0;
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
      func_0x000109f6d360(&lStack_1a0);
      func_0x000109f69f5c(&lStack_50);
      return;
    }
    func_0x000107c31940(&lStack_a8,&UNK_10f625003);
    FUN_109f68cc4(&lStack_1a0,&lStack_a8,3,&PTR_DAT_110b932c8);
  }
  *(undefined4 *)param_1 = (undefined4)lStack_1a0;
  param_1[2] = lStack_190;
  param_1[1] = lStack_198;
  param_1[3] = lStack_188;
  param_1[4] = lStack_180;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}



/* Entry: 109f6a5c4; end: 109f6aceb;  */

void FUN_109f6a5c4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  long *unaff_x24;
  long *plVar23;
  float fVar24;
  undefined4 auStack_b0 [2];
  long *plStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  byte bStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar4 = *(uint *)(*(long *)(param_2 + 0x18) + 0x18);
  uVar7 = (ulong)uVar4;
  if (uVar4 != 0) {
    plVar13 = *(long **)(*(long *)(param_2 + 0x18) + 0x20);
    do {
      if ((*plVar13 != 0) &&
         ((lVar15 = *(long *)(*plVar13 + 0xb8), lVar15 == 0 || (*(long *)(lVar15 + 0x28) == 0)))) {
        func_0x000107c31940(&lStack_80,&UNK_10f6252db);
        FUN_109f68cc4(auStack_b0,&lStack_80,2,&PTR_DAT_110b93388);
        goto LAB_109f6abe0;
      }
      uVar7 = uVar7 - 1;
      plVar13 = plVar13 + 1;
    } while (uVar7 != 0);
  }
  lVar22 = *(long *)(param_2 + 8);
  FUN_109ec5ca4(lVar22 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  lVar8 = *(long *)(lVar15 + 0x68);
  *(undefined4 *)(lVar8 + 0x114) = 1;
  *(undefined1 *)(lVar8 + 0x100) = 0;
  if ((*(int *)(lVar15 + 0x18) == 0) && (*(int *)(lVar22 + 0x1c) != 0)) {
    func_0x000109eb844c(lVar15,&UNK_10f615382);
    lVar15 = *(long *)(*(long *)(param_2 + 0x18) + 0x68);
    puVar21 = (undefined8 *)(lVar15 + 0x118);
    if (*(int *)(lVar15 + 0x114) != 1) {
      func_0x000107c31940(&lStack_80,*puVar21);
      FUN_109f68cc4(auStack_b0,&lStack_80,4,&PTR_DAT_110b933a0);
      goto LAB_109f6abe0;
    }
  }
  else {
    puVar21 = (undefined8 *)(lVar8 + 0x118);
  }
  iVar12 = (int)lVar22 + 0x10;
  FUN_109e77c20();
  lVar15 = *(long *)(param_2 + 0x18);
  if (iVar12 != 0) {
    lVar8 = 0;
    iVar12 = 0;
    do {
      piVar20 = *(int **)(lVar15 + 0xa8 + lVar8);
      if (piVar20 != (int *)0x0) {
        *(int **)(*(long *)(param_2 + 0x140 + (long)*piVar20 * 8) + 0x140) = piVar20;
        iVar12 = iVar12 + 1;
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x30);
    if (iVar12 != 2) {
      func_0x000107c31940(&lStack_80,&UNK_10f625353);
      FUN_109f68cc4(auStack_b0,&lStack_80,2,&PTR_DAT_110b933b8);
      goto LAB_109f6abe0;
    }
  }
  if (*(int *)(*(long *)(lVar15 + 0x68) + 0x114) == 1) {
    FUN_109f6acec(auStack_b0,param_2,0,param_3);
    if (((bStack_88 & 1) == 0) ||
       (FUN_109f6acec(auStack_b0,param_2,4,param_3), (bStack_88 & 1) == 0)) {
      *(undefined4 *)param_1 = auStack_b0[0];
      param_1[1] = plStack_a8;
      param_1[2] = CONCAT17(uStack_99,uStack_a0);
      *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_98,uStack_99);
      *(undefined1 *)((long)param_1 + 0x1f) = uStack_91;
      param_1[4] = uStack_90;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    if (param_3 != (long *)0x0) {
      plVar13 = (long *)*param_3;
      plVar3 = (long *)param_3[1];
      if (plVar13 != plVar3) {
        plVar1 = (long *)(param_2 + 0x118);
        plVar2 = (long *)(param_2 + 0x128);
        do {
          if (*(char *)((long)plVar13 + 0x17) < '\0') {
            func_0x000107c3192c(&lStack_80,*plVar13,plVar13[1]);
          }
          else {
            lStack_78 = plVar13[1];
            lStack_80 = *plVar13;
            uStack_70 = plVar13[2];
          }
          plVar11 = plVar1;
          func_0x000107c31944(plVar1,&lStack_80);
          plVar23 = *(long **)(param_2 + 0x120);
          if (plVar23 != (long *)0x0) {
            uVar7 = (long)plVar23 - 1;
            if (((ulong)plVar23 & uVar7) == 0) {
              unaff_x24 = (long *)(uVar7 & (ulong)plVar11);
            }
            else {
              unaff_x24 = plVar11;
              if (plVar23 <= plVar11) {
                uVar5 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar5 = (ulong)plVar11 / (ulong)plVar23;
                }
                unaff_x24 = (long *)((long)plVar11 - uVar5 * (long)plVar23);
              }
            }
            plVar9 = *(long **)(*plVar1 + (long)unaff_x24 * 8);
            if (plVar9 != (long *)0x0) {
              for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
                plVar10 = (long *)plVar9[1];
                if (plVar10 == plVar11) {
                  plVar10 = plVar1;
                  func_0x000104c4fbc4(plVar1,plVar9 + 2,&lStack_80);
                  if (((ulong)plVar10 & 1) != 0) {
                    plVar9[5] = plVar13[3];
                    goto LAB_109f6aa68;
                  }
                }
                else {
                  if (((ulong)plVar23 & uVar7) == 0) {
                    plVar10 = (long *)((ulong)plVar10 & uVar7);
                  }
                  else if (plVar23 <= plVar10) {
                    uVar5 = 0;
                    if (plVar23 != (long *)0x0) {
                      uVar5 = (ulong)plVar10 / (ulong)plVar23;
                    }
                    plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar23);
                  }
                  if (plVar10 != unaff_x24) break;
                }
              }
            }
          }
          plVar9 = (long *)0x30;
          __Znwm();
          uStack_a0 = 1;
          uStack_99 = 0;
          *plVar9 = 0;
          plVar9[1] = (long)plVar11;
          plVar9[3] = lStack_78;
          plVar9[2] = lStack_80;
          plVar9[4] = uStack_70;
          lStack_80 = 0;
          lStack_78 = 0;
          uStack_70 = 0;
          plVar9[5] = plVar13[3];
          fVar24 = (float)(*(long *)(param_2 + 0x130) + 1);
          plStack_a8 = plVar1;
          if ((plVar23 == (long *)0x0) || (*(float *)(param_2 + 0x138) * (float)plVar23 < fVar24)) {
            uVar7 = 1;
            if ((long *)0x2 < plVar23) {
              uVar7 = (ulong)(((ulong)plVar23 & (long)plVar23 - 1U) != 0);
            }
            plVar10 = (long *)(uVar7 | (long)plVar23 << 1);
            plVar23 = (long *)(long)(fVar24 / *(float *)(param_2 + 0x138));
            if (plVar10 <= plVar23) {
              plVar10 = plVar23;
            }
            if ((long)plVar10 - 1U == 0) {
              plVar10 = (long *)0x2;
            }
            else if (((ulong)plVar10 & (long)plVar10 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            plVar23 = *(long **)(param_2 + 0x120);
            if (plVar23 < plVar10) {
LAB_109f6a888:
              if ((ulong)plVar10 >> 0x3d != 0) {
                func_0x000104c4f740();
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x109f6aca0);
                (*pcVar6)();
              }
              lVar15 = (long)plVar10 << 3;
              __Znwm();
              lVar8 = *plVar1;
              *plVar1 = lVar15;
              if (lVar8 != 0) {
                __ZdlPv();
              }
              plVar23 = (long *)0x0;
              *(long **)(param_2 + 0x120) = plVar10;
              do {
                *(undefined8 *)(*plVar1 + (long)plVar23 * 8) = 0;
                plVar23 = (long *)((long)plVar23 + 1);
              } while (plVar10 != plVar23);
              plVar14 = (long *)*plVar2;
              plVar23 = plVar10;
              if (plVar14 != (long *)0x0) {
                plVar16 = (long *)plVar14[1];
                uVar7 = (long)plVar10 - 1;
                if (((ulong)plVar10 & uVar7) == 0) {
                  plVar16 = (long *)((ulong)plVar16 & uVar7);
                }
                else if (plVar10 <= plVar16) {
                  uVar5 = 0;
                  if (plVar10 != (long *)0x0) {
                    uVar5 = (ulong)plVar16 / (ulong)plVar10;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar5 * (long)plVar10);
                }
                *(long **)(*plVar1 + (long)plVar16 * 8) = plVar2;
                plVar17 = (long *)*plVar14;
                while (plVar17 != (long *)0x0) {
                  plVar19 = (long *)plVar17[1];
                  if (((ulong)plVar10 & uVar7) == 0) {
                    plVar19 = (long *)((ulong)plVar19 & uVar7);
                  }
                  else if (plVar10 <= plVar19) {
                    uVar5 = 0;
                    if (plVar10 != (long *)0x0) {
                      uVar5 = (ulong)plVar19 / (ulong)plVar10;
                    }
                    plVar19 = (long *)((long)plVar19 - uVar5 * (long)plVar10);
                  }
                  plVar18 = plVar17;
                  if (plVar19 != plVar16) {
                    lVar15 = *plVar1;
                    if (*(long *)(lVar15 + (long)plVar19 * 8) == 0) {
                      *(long **)(lVar15 + (long)plVar19 * 8) = plVar14;
                      plVar16 = plVar19;
                    }
                    else {
                      *plVar14 = *plVar17;
                      *plVar17 = **(undefined8 **)(lVar15 + (long)plVar19 * 8);
                      **(long **)(lVar15 + (long)plVar19 * 8) = (long)plVar17;
                      plVar18 = plVar14;
                    }
                  }
                  plVar14 = plVar18;
                  plVar17 = (long *)*plVar18;
                }
              }
            }
            else if (plVar10 < plVar23) {
              plVar14 = (long *)(long)((float)*(ulong *)(param_2 + 0x130) /
                                      *(float *)(param_2 + 0x138));
              if ((plVar23 < (long *)0x3) || (((ulong)plVar23 & (long)plVar23 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *)0x1 < plVar14) {
                plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
              }
              if (plVar10 <= plVar14) {
                plVar10 = plVar14;
              }
              if (plVar10 < plVar23) {
                if (plVar10 != (long *)0x0) goto LAB_109f6a888;
                lVar15 = *plVar1;
                *plVar1 = 0;
                if (lVar15 != 0) {
                  __ZdlPv();
                }
                *(undefined8 *)(param_2 + 0x120) = 0;
                plVar23 = (long *)0x0;
              }
              else {
                plVar23 = *(long **)(param_2 + 0x120);
              }
            }
            if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
              unaff_x24 = (long *)((long)plVar23 - 1U & (ulong)plVar11);
            }
            else {
              unaff_x24 = plVar11;
              if (plVar23 <= plVar11) {
                uVar7 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar7 = (ulong)plVar11 / (ulong)plVar23;
                }
                unaff_x24 = (long *)((long)plVar11 - uVar7 * (long)plVar23);
              }
            }
          }
          lVar15 = *plVar1;
          plVar11 = *(long **)(lVar15 + (long)unaff_x24 * 8);
          if (plVar11 == (long *)0x0) {
            *plVar9 = *plVar2;
            *plVar2 = (long)plVar9;
            *(long **)(lVar15 + (long)unaff_x24 * 8) = plVar2;
            if (*plVar9 != 0) {
              plVar11 = *(long **)(*plVar9 + 8);
              if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
                plVar11 = (long *)((ulong)plVar11 & (long)plVar23 - 1U);
              }
              else if (plVar23 <= plVar11) {
                uVar7 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar7 = (ulong)plVar11 / (ulong)plVar23;
                }
                plVar11 = (long *)((long)plVar11 - uVar7 * (long)plVar23);
              }
              plVar11 = (long *)(*plVar1 + (long)plVar11 * 8);
              goto LAB_109f6aa58;
            }
          }
          else {
            *plVar9 = *plVar11;
LAB_109f6aa58:
            *plVar11 = (long)plVar9;
          }
          *(long *)(param_2 + 0x130) = *(long *)(param_2 + 0x130) + 1;
LAB_109f6aa68:
          if (uStack_70 < 0) {
            __ZdlPv(lStack_80);
          }
          plVar13 = plVar13 + 7;
        } while (plVar13 != plVar3);
      }
    }
    lVar15 = *(long *)(param_2 + 0x18);
    if (*(int *)(lVar15 + 0x18) != 0) {
      uVar7 = 0;
      lVar8 = *(long *)(lVar15 + 0x20);
      do {
        lVar8 = *(long *)(*(long *)(lVar8 + uVar7 * 8) + 0xb8);
        if (lVar8 != 0) {
          lVar8 = lVar8 + -0x30;
          FUN_109f65aa4(lVar8);
          FUN_109f65ae0(lVar8);
          lVar15 = *(long *)(param_2 + 0x18);
        }
        lVar8 = *(long *)(lVar15 + 0x20);
        *(undefined8 *)(*(long *)(lVar8 + uVar7 * 8) + 0xb8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(lVar15 + 0x18));
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  func_0x000107c31940(&lStack_80,*puVar21);
  FUN_109f68cc4(auStack_b0,&lStack_80,4,&PTR_DAT_110b933d0);
LAB_109f6abe0:
  *(undefined4 *)param_1 = auStack_b0[0];
  param_1[2] = CONCAT17(uStack_99,uStack_a0);
  param_1[1] = plStack_a8;
  param_1[3] = CONCAT17(uStack_91,uStack_98);
  param_1[4] = uStack_90;
  *(undefined1 *)(param_1 + 5) = 0;
  if (uStack_70._7_1_ < '\0') {
    __ZdlPv(lStack_80);
  }
  return;
}



/* Entry: 109f6acec; end: 109f6bf2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109f6acec(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long **pplVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong uVar34;
  undefined8 *puVar35;
  float fVar36;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long **pplStack_e0;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined7 uStack_c8;
  char cStack_c1;
  undefined7 uStack_c0;
  char cStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined7 uStack_88;
  char cStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_2 + ((ulong)param_3 & 0xffffffff) * 8 + 0x140);
  if (lVar10 == 0) {
    func_0x000107c31940(&plStack_150,&UNK_10f6255fb);
    FUN_109f68cc4(&uStack_d0,&plStack_150,1,&PTR_DAT_110b93538);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x140);
    if (lVar10 == 0) {
      func_0x000107c31940(&plStack_150,&UNK_10f62560e);
      FUN_109f68cc4(&uStack_d0,&plStack_150,1,&PTR_DAT_110b93550);
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 == 0) {
        func_0x000107c31940(&plStack_150,&UNK_10f625623);
        FUN_109f68cc4(&uStack_d0,&plStack_150,1,&PTR_DAT_110b93568);
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x160);
        if (lVar10 != 0) {
          plVar29 = *(long **)(lVar10 + 8);
          if (*plVar29 != 0) {
            plVar17 = (long *)(param_2 + 0x48);
            plVar18 = (long *)(param_2 + 0x30);
            plVar1 = (long *)(param_2 + 0x58);
            plVar31 = param_3;
            do {
              if ((*(byte *)(plVar29 + 4) >> 1 & 1) != 0) {
                lVar11 = plVar29[2];
                bVar2 = *(byte *)(lVar11 + 4);
                if (bVar2 == 0x13) {
                  for (lVar19 = *(long *)(lVar11 + 0x30); *(byte *)(lVar19 + 4) == 0x13;
                      lVar19 = *(long *)(lVar19 + 0x30)) {
                  }
                  do {
                    lVar11 = *(long *)(lVar11 + 0x30);
                    bVar2 = *(byte *)(lVar11 + 4);
                  } while (bVar2 == 0x13);
                  if (*(byte *)(lVar19 + 4) < 0xc) {
LAB_109f6addc:
                    if (0xb < bVar2) goto LAB_109f6b948;
                  }
                }
                else if (bVar2 != 0x11) goto LAB_109f6addc;
                func_0x000107c31940(&uStack_d0,plVar29[3]);
                uStack_b8 = SUB87(plVar29,0);
                uStack_b1 = (undefined1)((ulong)plVar29 >> 0x38);
                plVar20 = (long *)(param_2 + 0x20);
                func_0x000107c31944(plVar20,&uStack_d0);
                plVar33 = *(long **)(param_2 + 0x28);
                if (plVar33 != (long *)0x0) {
                  uVar26 = (long)plVar33 - 1;
                  if (((ulong)plVar33 & uVar26) == 0) {
                    plVar31 = (long *)(uVar26 & (ulong)plVar20);
                  }
                  else {
                    plVar31 = plVar20;
                    if (plVar33 <= plVar20) {
                      uVar34 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar34 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar31 = (long *)((long)plVar20 - uVar34 * (long)plVar33);
                    }
                  }
                  plVar12 = *(long **)(*(long *)(param_2 + 0x20) + (long)plVar31 * 8);
                  if (plVar12 != (long *)0x0) {
                    for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0;
                        plVar12 = (long *)*plVar12) {
                      plVar13 = (long *)plVar12[1];
                      if (plVar13 == plVar20) {
                        uVar34 = param_2 + 0x20;
                        func_0x000104c4fbc4(uVar34,plVar12 + 2,&uStack_d0);
                        if ((uVar34 & 1) != 0) {
                          if (cStack_b9 < '\0') {
                            __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
                          }
                          plVar31 = (long *)((ulong)param_3 & 0xffffffff);
                          goto LAB_109f6b948;
                        }
                      }
                      else {
                        if (((ulong)plVar33 & uVar26) == 0) {
                          plVar13 = (long *)((ulong)plVar13 & uVar26);
                        }
                        else if (plVar33 <= plVar13) {
                          uVar34 = 0;
                          if (plVar33 != (long *)0x0) {
                            uVar34 = (ulong)plVar13 / (ulong)plVar33;
                          }
                          plVar13 = (long *)((long)plVar13 - uVar34 * (long)plVar33);
                        }
                        if (plVar13 != plVar31) break;
                      }
                    }
                  }
                }
                plVar12 = (long *)0x30;
                __Znwm();
                *plVar12 = 0;
                plVar12[1] = (long)plVar20;
                if (cStack_b9 < '\0') {
                  func_0x000107c3192c(plVar12 + 2,CONCAT44(uStack_cc,uStack_d0),
                                      CONCAT17(cStack_c1,uStack_c8));
                }
                else {
                  plVar12[3] = CONCAT17(cStack_c1,uStack_c8);
                  plVar12[2] = CONCAT44(uStack_cc,uStack_d0);
                  plVar12[4] = CONCAT17(cStack_b9,uStack_c0);
                }
                plVar12[5] = CONCAT17(uStack_b1,uStack_b8);
                fVar36 = (float)(*(long *)(param_2 + 0x38) + 1);
                if ((plVar33 == (long *)0x0) ||
                   (*(float *)(param_2 + 0x40) * (float)plVar33 < fVar36)) {
                  uVar26 = 1;
                  if ((long *)0x2 < plVar33) {
                    uVar26 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
                  }
                  plVar31 = (long *)(uVar26 | (long)plVar33 << 1);
                  plVar33 = (long *)(long)(fVar36 / *(float *)(param_2 + 0x40));
                  if (plVar31 <= plVar33) {
                    plVar31 = plVar33;
                  }
                  if ((long)plVar31 - 1U == 0) {
                    plVar31 = (long *)0x2;
                  }
                  else if (((ulong)plVar31 & (long)plVar31 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                  }
                  plVar33 = *(long **)(param_2 + 0x28);
                  if (plVar33 < plVar31) {
LAB_109f6af60:
                    if ((ulong)plVar31 >> 0x3d != 0) goto LAB_109f6bd98;
                    lVar11 = (long)plVar31 << 3;
                    __Znwm();
                    lVar19 = *(long *)(param_2 + 0x20);
                    *(long *)(param_2 + 0x20) = lVar11;
                    if (lVar19 != 0) {
                      __ZdlPv();
                    }
                    plVar33 = (long *)0x0;
                    *(long **)(param_2 + 0x28) = plVar31;
                    do {
                      *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)plVar33 * 8) = 0;
                      plVar33 = (long *)((long)plVar33 + 1);
                    } while (plVar31 != plVar33);
                    plVar13 = (long *)*plVar18;
                    plVar33 = plVar31;
                    if (plVar13 != (long *)0x0) {
                      plVar21 = (long *)plVar13[1];
                      uVar26 = (long)plVar31 - 1;
                      if (((ulong)plVar31 & uVar26) == 0) {
                        plVar21 = (long *)((ulong)plVar21 & uVar26);
                      }
                      else if (plVar31 <= plVar21) {
                        uVar34 = 0;
                        if (plVar31 != (long *)0x0) {
                          uVar34 = (ulong)plVar21 / (ulong)plVar31;
                        }
                        plVar21 = (long *)((long)plVar21 - uVar34 * (long)plVar31);
                      }
                      *(long **)(*(long *)(param_2 + 0x20) + (long)plVar21 * 8) = plVar18;
                      plVar22 = (long *)*plVar13;
                      while (plVar22 != (long *)0x0) {
                        plVar25 = (long *)plVar22[1];
                        if (((ulong)plVar31 & uVar26) == 0) {
                          plVar25 = (long *)((ulong)plVar25 & uVar26);
                        }
                        else if (plVar31 <= plVar25) {
                          uVar34 = 0;
                          if (plVar31 != (long *)0x0) {
                            uVar34 = (ulong)plVar25 / (ulong)plVar31;
                          }
                          plVar25 = (long *)((long)plVar25 - uVar34 * (long)plVar31);
                        }
                        plVar24 = plVar22;
                        if (plVar25 != plVar21) {
                          lVar11 = *(long *)(param_2 + 0x20);
                          if (*(long *)(lVar11 + (long)plVar25 * 8) == 0) {
                            *(long **)(lVar11 + (long)plVar25 * 8) = plVar13;
                            plVar21 = plVar25;
                          }
                          else {
                            *plVar13 = *plVar22;
                            *plVar22 = **(undefined8 **)(lVar11 + (long)plVar25 * 8);
                            **(long **)(lVar11 + (long)plVar25 * 8) = (long)plVar22;
                            plVar24 = plVar13;
                          }
                        }
                        plVar13 = plVar24;
                        plVar22 = (long *)*plVar24;
                      }
                    }
                  }
                  else if (plVar31 < plVar33) {
                    plVar13 = (long *)(long)((float)*(ulong *)(param_2 + 0x38) /
                                            *(float *)(param_2 + 0x40));
                    if ((plVar33 < (long *)0x3) || (((ulong)plVar33 & (long)plVar33 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *)0x1 < plVar13) {
                      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
                    }
                    if (plVar31 <= plVar13) {
                      plVar31 = plVar13;
                    }
                    if (plVar31 < plVar33) {
                      if (plVar31 != (long *)0x0) goto LAB_109f6af60;
                      lVar11 = *(long *)(param_2 + 0x20);
                      *(undefined8 *)(param_2 + 0x20) = 0;
                      if (lVar11 != 0) {
                        __ZdlPv();
                      }
                      *(undefined8 *)(param_2 + 0x28) = 0;
                      plVar33 = (long *)0x0;
                    }
                    else {
                      plVar33 = *(long **)(param_2 + 0x28);
                    }
                  }
                  if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                    plVar31 = (long *)((long)plVar33 - 1U & (ulong)plVar20);
                  }
                  else {
                    plVar31 = plVar20;
                    if (plVar33 <= plVar20) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar31 = (long *)((long)plVar20 - uVar26 * (long)plVar33);
                    }
                  }
                }
                lVar11 = *(long *)(param_2 + 0x20);
                plVar20 = *(long **)(lVar11 + (long)plVar31 * 8);
                if (plVar20 == (long *)0x0) {
                  *plVar12 = *plVar18;
                  *plVar18 = (long)plVar12;
                  *(long **)(lVar11 + (long)plVar31 * 8) = plVar18;
                  if (*plVar12 != 0) {
                    plVar20 = *(long **)(*plVar12 + 8);
                    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                      plVar20 = (long *)((ulong)plVar20 & (long)plVar33 - 1U);
                    }
                    else if (plVar33 <= plVar20) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar20 = (long *)((long)plVar20 - uVar26 * (long)plVar33);
                    }
                    *(long **)(*(long *)(param_2 + 0x20) + (long)plVar20 * 8) = plVar12;
                  }
                }
                else {
                  *plVar12 = *plVar20;
                  *plVar20 = (long)plVar12;
                }
                *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
                if (cStack_b9 < '\0') {
                  __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
                }
                pppppppuStack_118 = (undefined8 *******)0x0;
                uStack_110 = 0;
                uStack_108 = 0;
                if (param_4 != 0) {
                  plVar20 = (long *)plVar29[3];
                  plVar31 = plVar20;
                  _strlen();
                  uVar26 = param_4 + 0x18;
                  func_0x000107c2ac8c(uVar26,plVar20,plVar31);
                  uVar34 = *(ulong *)(param_4 + 0x20);
                  if (uVar34 != 0) {
                    uVar28 = uVar34 - 1;
                    if ((uVar34 & uVar28) == 0) {
                      uVar27 = uVar28 & uVar26;
                    }
                    else {
                      uVar27 = uVar26;
                      if (uVar34 <= uVar26) {
                        uVar27 = 0;
                        if (uVar34 != 0) {
                          uVar27 = uVar26 / uVar34;
                        }
                        uVar27 = uVar26 - uVar27 * uVar34;
                      }
                    }
                    plVar33 = *(long **)(*(long *)(param_4 + 0x18) + uVar27 * 8);
                    if (plVar33 != (long *)0x0) {
                      for (plVar33 = (long *)*plVar33; plVar33 != (long *)0x0;
                          plVar33 = (long *)*plVar33) {
                        uVar14 = plVar33[1];
                        if (uVar26 == uVar14) {
                          if ((long *)plVar33[3] == plVar31) {
                            uVar9 = plVar33[2];
                            _memcmp(uVar9,plVar20,plVar31);
                            if ((int)uVar9 == 0) {
                              func_0x000107c2c4d8(&pppppppuStack_118,plVar33[4],plVar33[5]);
                              break;
                            }
                          }
                        }
                        else {
                          if ((uVar34 & uVar28) == 0) {
                            uVar14 = uVar14 & uVar28;
                          }
                          else if (uVar34 <= uVar14) {
                            uVar3 = 0;
                            if (uVar34 != 0) {
                              uVar3 = uVar14 / uVar34;
                            }
                            uVar14 = uVar14 - uVar3 * uVar34;
                          }
                          if (uVar14 != uVar27) break;
                        }
                      }
                    }
                  }
                }
                uVar26 = uStack_110;
                if (-1 < (long)uStack_108) {
                  uVar26 = uStack_108 >> 0x38;
                }
                if (uVar26 == 0) {
                  if ((long)uStack_108 < 0) {
                    uStack_110 = 0xc;
                    pppppppuVar15 = pppppppuStack_118;
                  }
                  else {
                    uStack_108 = CONCAT17(0xc,(undefined7)uStack_108);
                    pppppppuVar15 = &pppppppuStack_118;
                  }
                  *(undefined4 *)(pppppppuVar15 + 1) = 0x736d726f;
                  *pppppppuVar15 = (undefined8 ******)0x66696e5572657355;
                  *(undefined1 *)((long)pppppppuVar15 + 0xc) = 0;
                }
                plVar20 = plVar17;
                func_0x000107c31944(plVar17,&pppppppuStack_118);
                plVar33 = *(long **)(param_2 + 0x50);
                if (plVar33 != (long *)0x0) {
                  plVar31 = (long *)((long)plVar33 + -1);
                  if (((ulong)plVar33 & (ulong)plVar31) == 0) {
                    plVar13 = (long *)((ulong)plVar31 & (ulong)plVar20);
                  }
                  else {
                    plVar13 = plVar20;
                    if (plVar33 <= plVar20) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar13 = (long *)((long)plVar20 - uVar26 * (long)plVar33);
                    }
                  }
                  plVar21 = *(long **)(*plVar17 + (long)plVar13 * 8);
                  if ((plVar21 != (long *)0x0) &&
                     (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
LAB_109f6b35c:
                    plVar22 = (long *)plVar21[1];
                    if (plVar22 == plVar20) {
                      plVar22 = plVar21 + 2;
                      plVar25 = plVar17;
                      func_0x000104c4fbc4(plVar17,plVar22,&pppppppuStack_118);
                      if (((ulong)plVar25 & 1) == 0) goto LAB_109f6b3a8;
                      puVar32 = (undefined8 *)plVar21[6];
                      puVar16 = (undefined8 *)plVar21[7];
                      uVar34 = (long)puVar16 - (long)puVar32;
                      uVar26 = 0;
                      if (uVar34 != 0) {
                        uVar26 = ((long)puVar16 - (long)puVar32) * 0x40 - 1;
                      }
                      uVar27 = plVar21[9];
                      lVar11 = plVar21[10];
                      uVar28 = lVar11 + uVar27;
                      if (uVar26 != uVar28) goto LAB_109f6ba54;
                      if (uVar27 < 0x200) {
                        puVar30 = (undefined8 *)plVar21[8];
                        puVar35 = (undefined8 *)plVar21[5];
                        if (uVar34 < (ulong)((long)puVar30 - (long)puVar35)) {
                          uVar9 = 0x1000;
                          __Znwm();
                          if (puVar30 == puVar16) {
                            if (puVar32 == puVar35) {
                              lVar11 = (long)puVar30 - (long)puVar32 >> 2;
                              if (puVar16 == puVar32) {
                                lVar11 = 1;
                              }
                              lVar19 = lVar11;
                              FUN_109f6d9f0();
                              puVar32 = (undefined8 *)
                                        (lVar19 + (lVar11 * 2 + 6U & 0xfffffffffffffff8));
                              lVar11 = plVar21[7] - plVar21[6];
                              puVar16 = puVar32;
                              if (lVar11 != 0) {
                                puVar16 = (undefined8 *)((long)puVar32 + lVar11);
                                puVar30 = (undefined8 *)plVar21[6];
                                puVar35 = puVar32;
                                do {
                                  *puVar35 = *puVar30;
                                  lVar11 = lVar11 + -8;
                                  puVar30 = puVar30 + 1;
                                  puVar35 = puVar35 + 1;
                                } while (lVar11 != 0);
                              }
                              lVar11 = plVar21[5];
                              plVar21[5] = lVar19;
                              plVar21[6] = (long)puVar32;
                              plVar21[7] = (long)puVar16;
                              plVar21[8] = lVar19 + (long)plVar22 * 8;
                              if (lVar11 != 0) {
                                __ZdlPv(lVar11);
                                puVar32 = (undefined8 *)plVar21[6];
                              }
                            }
                            puVar32[-1] = uVar9;
                            puVar16 = (undefined8 *)plVar21[6];
                            puVar32 = puVar16 + -1;
                            plVar21[6] = (long)puVar32;
LAB_109f6b7c0:
                            uVar9 = *puVar32;
                            plVar21[6] = (long)puVar16;
                            FUN_109f6d6f4(plVar21 + 5,uVar9);
                          }
                          else {
                            *puVar16 = uVar9;
                            plVar21[7] = plVar21[7] + 8;
                          }
                        }
                        else {
                          lVar11 = (long)puVar30 - (long)puVar35 >> 2;
                          if (puVar30 == puVar35) {
                            lVar11 = 1;
                          }
                          plStack_b0 = plVar21 + 5;
                          FUN_109f6d9f0();
                          uStack_d0 = (undefined4)lVar11;
                          uStack_cc = (undefined4)((ulong)lVar11 >> 0x20);
                          uStack_c8 = (undefined7)(lVar11 + uVar34);
                          cStack_c1 = (char)(lVar11 + uVar34 >> 0x38);
                          lVar11 = lVar11 + (long)plVar22 * 8;
                          uStack_b8 = (undefined7)lVar11;
                          uStack_b1 = (undefined1)((ulong)lVar11 >> 0x38);
                          uVar9 = 0x1000;
                          uStack_c0 = uStack_c8;
                          cStack_b9 = cStack_c1;
                          __Znwm(0x1000);
                          func_0x000109f6d7f0(&uStack_d0,uVar9);
                          lVar11 = plVar21[7];
                          while (lVar11 != plVar21[6]) {
                            lVar11 = lVar11 + -8;
                            FUN_109f6d8ec(&uStack_d0,lVar11);
                          }
                          lVar11 = plVar21[5];
                          plVar21[6] = CONCAT17(cStack_c1,uStack_c8);
                          plVar21[5] = CONCAT44(uStack_cc,uStack_d0);
                          plVar21[8] = CONCAT17(uStack_b1,uStack_b8);
                          plVar21[7] = CONCAT17(cStack_b9,uStack_c0);
                          if (lVar11 != 0) {
                            __ZdlPv();
                          }
                        }
                        lVar11 = plVar21[10];
                        puVar32 = (undefined8 *)plVar21[6];
                        uVar28 = plVar21[9] + lVar11;
LAB_109f6ba54:
                        *(long **)(puVar32[uVar28 >> 9] + (uVar28 & 0x1ff) * 8) = plVar12;
                        plVar21[10] = lVar11 + 1;
                        goto LAB_109f6b92c;
                      }
                      plVar21[9] = uVar27 - 0x200;
                      puVar16 = puVar32 + 1;
                      goto LAB_109f6b7c0;
                    }
                    if (((ulong)plVar33 & (ulong)plVar31) == 0) {
                      plVar22 = (long *)((ulong)plVar22 & (ulong)plVar31);
                    }
                    else if (plVar33 <= plVar22) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar22 / (ulong)plVar33;
                      }
                      plVar22 = (long *)((long)plVar22 - uVar26 * (long)plVar33);
                    }
                    if (plVar22 == plVar13) goto LAB_109f6b3a8;
                  }
                }
LAB_109f6b3b0:
                plStack_148 = (long *)0x0;
                plStack_150 = (long *)0x0;
                plStack_138 = (long *)0x0;
                plStack_140 = (long *)0x0;
                lStack_128 = 0;
                lStack_130 = 0;
                pplStack_e0 = &plStack_150;
                plVar20 = (long *)0x8;
                plStack_d8 = plVar12;
                __Znwm();
                plStack_e8 = plVar20 + 1;
                uVar9 = 0x1000;
                plStack_100 = plVar20;
                plStack_f8 = plVar20;
                plStack_f0 = plVar20;
                __Znwm(0x1000);
                func_0x000109f6d7f0(&plStack_100,uVar9);
                plVar20 = plStack_140;
                while (plVar33 = plStack_150, plVar20 != plStack_148) {
                  plVar20 = (long *)((long)plVar20 + -8);
                  FUN_109f6d8ec(&plStack_100,plVar20);
                }
                plStack_148 = plStack_f8;
                plStack_150 = plStack_100;
                plStack_138 = plStack_e8;
                plStack_140 = plStack_f0;
                if (plVar33 != (long *)0x0) {
                  __ZdlPv();
                }
                plStack_a0 = plStack_138;
                plStack_a8 = plStack_140;
                plStack_b0 = plStack_148;
                plVar20 = plStack_148 + ((ulong)(lStack_128 + lStack_130) >> 9);
                puVar16 = (undefined8 *)*plVar20;
                puVar32 = (undefined8 *)0x0;
                if (plStack_140 != plStack_148) {
                  puVar32 = puVar16 + (lStack_128 + lStack_130 & 0x1ff);
                }
                lVar11 = (long)puVar32 - (long)puVar16 >> 3;
                if (lVar11 < 0) {
                  uVar26 = (ulong)~(uint)(0x1feU - lVar11);
                  lVar11 = (0x1feU - lVar11 >> 9) * -8;
                }
                else {
                  uVar26 = lVar11 + 1;
                  lVar11 = (uVar26 >> 9) << 3;
                }
                plVar33 = (long *)((long)plVar20 + lVar11);
                puVar30 = (undefined8 *)(*plVar33 + (uVar26 & 0x1ff) * 8);
                lStack_90 = lStack_128;
                if (puVar32 != puVar30) {
                  pplVar23 = &plStack_d8;
                  do {
                    puVar4 = puVar32;
                    puVar5 = puVar32;
                    puVar35 = puVar30;
                    if (plVar20 != plVar33) {
                      puVar35 = puVar16 + 0x200;
                    }
                    for (; puVar4 != puVar35; puVar4 = puVar4 + 1) {
                      *puVar4 = *pplVar23;
                      pplVar23 = pplVar23 + 1;
                      puVar5 = puVar35;
                    }
                    lStack_128 = lStack_128 + ((long)puVar5 - (long)puVar32 >> 3);
                    lStack_90 = lStack_128;
                    if (plVar20 == plVar33) break;
                    plVar20 = plVar20 + 1;
                    puVar32 = (undefined8 *)*plVar20;
                    puVar16 = puVar32;
                  } while (puVar32 != puVar30);
                }
                uStack_c0 = (undefined7)uStack_108;
                cStack_b9 = (char)(uStack_108 >> 0x38);
                uStack_b8 = SUB87(plStack_150,0);
                uStack_b1 = (undefined1)((ulong)plStack_150 >> 0x38);
                uStack_c8 = (undefined7)uStack_110;
                cStack_c1 = (char)(uStack_110 >> 0x38);
                uStack_d0 = SUB84(pppppppuStack_118,0);
                uStack_cc = (undefined4)((ulong)pppppppuStack_118 >> 0x20);
                uStack_110 = 0;
                uStack_108 = 0;
                pppppppuStack_118 = (undefined8 *******)0x0;
                plStack_148 = (long *)0x0;
                plStack_150 = (long *)0x0;
                plStack_138 = (long *)0x0;
                plStack_140 = (long *)0x0;
                lStack_98 = lStack_130;
                lStack_130 = 0;
                lStack_128 = 0;
                plVar20 = plVar17;
                func_0x000107c31944(plVar17,&uStack_d0);
                plVar33 = *(long **)(param_2 + 0x50);
                if (plVar33 != (long *)0x0) {
                  uVar26 = (long)plVar33 - 1;
                  if (((ulong)plVar33 & uVar26) == 0) {
                    plVar31 = (long *)(uVar26 & (ulong)plVar20);
                  }
                  else {
                    plVar31 = plVar20;
                    if (plVar33 <= plVar20) {
                      uVar34 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar34 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar31 = (long *)((long)plVar20 - uVar34 * (long)plVar33);
                    }
                  }
                  plVar12 = *(long **)(*plVar17 + (long)plVar31 * 8);
                  if (plVar12 != (long *)0x0) {
                    for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0;
                        plVar12 = (long *)*plVar12) {
                      plVar13 = (long *)plVar12[1];
                      if (plVar13 == plVar20) {
                        plVar13 = plVar17;
                        func_0x000104c4fbc4(plVar17,plVar12 + 2,&uStack_d0);
                        if (((ulong)plVar13 & 1) != 0) goto LAB_109f6b908;
                      }
                      else {
                        if (((ulong)plVar33 & uVar26) == 0) {
                          plVar13 = (long *)((ulong)plVar13 & uVar26);
                        }
                        else if (plVar33 <= plVar13) {
                          uVar34 = 0;
                          if (plVar33 != (long *)0x0) {
                            uVar34 = (ulong)plVar13 / (ulong)plVar33;
                          }
                          plVar13 = (long *)((long)plVar13 - uVar34 * (long)plVar33);
                        }
                        if (plVar13 != plVar31) break;
                      }
                    }
                  }
                }
                plVar12 = (long *)0x58;
                __Znwm();
                plStack_f0 = (long *)0x1;
                *plVar12 = 0;
                plVar12[1] = (long)plVar20;
                plVar12[3] = CONCAT17(cStack_c1,uStack_c8);
                plVar12[2] = CONCAT44(uStack_cc,uStack_d0);
                plVar12[4] = CONCAT17(cStack_b9,uStack_c0);
                uStack_d0 = 0;
                uStack_cc = 0;
                uStack_c8 = 0;
                cStack_c1 = '\0';
                uStack_c0 = 0;
                cStack_b9 = '\0';
                plVar12[6] = (long)plStack_b0;
                plVar12[5] = CONCAT17(uStack_b1,uStack_b8);
                plVar12[8] = (long)plStack_a0;
                plVar12[7] = (long)plStack_a8;
                plStack_a0 = (long *)0x0;
                plStack_a8 = (long *)0x0;
                plStack_b0 = (long *)0x0;
                uStack_b8 = 0;
                uStack_b1 = 0;
                plVar12[10] = lStack_90;
                plVar12[9] = lStack_98;
                lStack_98 = 0;
                lStack_90 = 0;
                fVar36 = (float)(*(long *)(param_2 + 0x60) + 1);
                plStack_100 = plVar12;
                plStack_f8 = plVar17;
                if ((plVar33 == (long *)0x0) ||
                   (*(float *)(param_2 + 0x68) * (float)plVar33 < fVar36)) {
                  uVar26 = 1;
                  if ((long *)0x2 < plVar33) {
                    uVar26 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
                  }
                  plVar31 = (long *)(uVar26 | (long)plVar33 << 1);
                  plVar33 = (long *)(long)(fVar36 / *(float *)(param_2 + 0x68));
                  if (plVar31 <= plVar33) {
                    plVar31 = plVar33;
                  }
                  if ((long)plVar31 - 1U == 0) {
                    plVar31 = (long *)0x2;
                  }
                  else if (((ulong)plVar31 & (long)plVar31 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                  }
                  plVar33 = *(long **)(param_2 + 0x50);
                  if (plVar33 < plVar31) {
LAB_109f6b6c8:
                    if ((ulong)plVar31 >> 0x3d != 0) {
                      func_0x000104c4f740();
                      goto LAB_109f6beb8;
                    }
                    lVar11 = (long)plVar31 << 3;
                    __Znwm();
                    lVar19 = *plVar17;
                    *plVar17 = lVar11;
                    if (lVar19 != 0) {
                      __ZdlPv();
                    }
                    plVar33 = (long *)0x0;
                    *(long **)(param_2 + 0x50) = plVar31;
                    do {
                      *(undefined8 *)(*plVar17 + (long)plVar33 * 8) = 0;
                      plVar33 = (long *)((long)plVar33 + 1);
                    } while (plVar31 != plVar33);
                    plVar13 = (long *)*plVar1;
                    plVar33 = plVar31;
                    if (plVar13 != (long *)0x0) {
                      plVar21 = (long *)plVar13[1];
                      uVar26 = (long)plVar31 - 1;
                      if (((ulong)plVar31 & uVar26) == 0) {
                        plVar21 = (long *)((ulong)plVar21 & uVar26);
                      }
                      else if (plVar31 <= plVar21) {
                        uVar34 = 0;
                        if (plVar31 != (long *)0x0) {
                          uVar34 = (ulong)plVar21 / (ulong)plVar31;
                        }
                        plVar21 = (long *)((long)plVar21 - uVar34 * (long)plVar31);
                      }
                      *(long **)(*plVar17 + (long)plVar21 * 8) = plVar1;
                      plVar22 = (long *)*plVar13;
                      while (plVar22 != (long *)0x0) {
                        plVar25 = (long *)plVar22[1];
                        if (((ulong)plVar31 & uVar26) == 0) {
                          plVar25 = (long *)((ulong)plVar25 & uVar26);
                        }
                        else if (plVar31 <= plVar25) {
                          uVar34 = 0;
                          if (plVar31 != (long *)0x0) {
                            uVar34 = (ulong)plVar25 / (ulong)plVar31;
                          }
                          plVar25 = (long *)((long)plVar25 - uVar34 * (long)plVar31);
                        }
                        plVar24 = plVar22;
                        if (plVar25 != plVar21) {
                          lVar11 = *plVar17;
                          if (*(long *)(lVar11 + (long)plVar25 * 8) == 0) {
                            *(long **)(lVar11 + (long)plVar25 * 8) = plVar13;
                            plVar21 = plVar25;
                          }
                          else {
                            *plVar13 = *plVar22;
                            *plVar22 = **(undefined8 **)(lVar11 + (long)plVar25 * 8);
                            **(long **)(lVar11 + (long)plVar25 * 8) = (long)plVar22;
                            plVar24 = plVar13;
                          }
                        }
                        plVar13 = plVar24;
                        plVar22 = (long *)*plVar24;
                      }
                    }
                  }
                  else if (plVar31 < plVar33) {
                    plVar13 = (long *)(long)((float)*(ulong *)(param_2 + 0x60) /
                                            *(float *)(param_2 + 0x68));
                    if ((plVar33 < (long *)0x3) || (((ulong)plVar33 & (long)plVar33 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *)0x1 < plVar13) {
                      plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
                    }
                    if (plVar31 <= plVar13) {
                      plVar31 = plVar13;
                    }
                    if (plVar31 < plVar33) {
                      if (plVar31 != (long *)0x0) goto LAB_109f6b6c8;
                      lVar11 = *plVar17;
                      *plVar17 = 0;
                      if (lVar11 != 0) {
                        __ZdlPv();
                      }
                      *(undefined8 *)(param_2 + 0x50) = 0;
                      plVar33 = (long *)0x0;
                    }
                    else {
                      plVar33 = *(long **)(param_2 + 0x50);
                    }
                  }
                  if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                    plVar31 = (long *)((long)plVar33 - 1U & (ulong)plVar20);
                  }
                  else {
                    plVar31 = plVar20;
                    if (plVar33 <= plVar20) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar20 / (ulong)plVar33;
                      }
                      plVar31 = (long *)((long)plVar20 - uVar26 * (long)plVar33);
                    }
                  }
                }
                lVar11 = *plVar17;
                plVar20 = *(long **)(lVar11 + (long)plVar31 * 8);
                if (plVar20 == (long *)0x0) {
                  *plVar12 = *plVar1;
                  *plVar1 = (long)plVar12;
                  *(long **)(lVar11 + (long)plVar31 * 8) = plVar1;
                  if (*plVar12 != 0) {
                    plVar31 = *(long **)(*plVar12 + 8);
                    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                      plVar31 = (long *)((ulong)plVar31 & (long)plVar33 - 1U);
                    }
                    else if (plVar33 <= plVar31) {
                      uVar26 = 0;
                      if (plVar33 != (long *)0x0) {
                        uVar26 = (ulong)plVar31 / (ulong)plVar33;
                      }
                      plVar31 = (long *)((long)plVar31 - uVar26 * (long)plVar33);
                    }
                    *(long **)(*plVar17 + (long)plVar31 * 8) = plVar12;
                  }
                }
                else {
                  *plVar12 = *plVar20;
                  *plVar20 = (long)plVar12;
                }
                *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_109f6b908:
                FUN_109f6da70(&uStack_b8);
                if (cStack_b9 < '\0') {
                  __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
                }
                FUN_109f6da70(&plStack_150);
LAB_109f6b92c:
                plVar31 = (long *)((ulong)param_3 & 0xffffffff);
                if ((long)uStack_108 < 0) {
                  __ZdlPv(pppppppuStack_118);
                }
              }
LAB_109f6b948:
              plVar29 = (long *)*plVar29;
            } while (*plVar29 != 0);
            plVar17 = (long *)**(long **)(lVar10 + 8);
            plVar29 = *(long **)(lVar10 + 8);
            if (plVar17 != (long *)0x0) {
              do {
                plVar18 = plVar17;
                if ((*(byte *)(plVar29 + 4) >> 1 & 1) != 0) {
                  FUN_109f6d548(param_2,plVar31,plVar29[2]);
                  plVar18 = (long *)*plVar29;
                }
                plVar17 = (long *)*plVar18;
                plVar29 = plVar18;
              } while (plVar17 != (long *)0x0);
              plVar29 = *(long **)(lVar10 + 8);
              for (plVar17 = (long *)**(long **)(lVar10 + 8); plVar17 != (long *)0x0;
                  plVar17 = (long *)*plVar17) {
                if (*(char *)(plVar29 + 4) < '\0') {
                  lVar10 = plVar29[0x11];
                  if ((lVar10 == 0) && (lVar10 = plVar29[2], lVar10 == 0)) {
                    func_0x000107c31940(&plStack_150,&UNK_10f6254e0);
                    FUN_109f68cc4(&uStack_d0,&plStack_150,2,&PTR_DAT_110b93508);
LAB_109f6bd38:
                    *(undefined4 *)param_1 = uStack_d0;
                    param_1[2] = CONCAT17(cStack_b9,uStack_c0);
                    param_1[1] = CONCAT17(cStack_c1,uStack_c8);
                    param_1[3] = CONCAT17(uStack_b1,uStack_b8);
                    param_1[4] = plStack_b0;
                    *(undefined1 *)(param_1 + 5) = 0;
                    if ((long)plStack_140 < 0) {
                      __ZdlPv(plStack_150);
                    }
                    goto LAB_109f6bcd8;
                  }
                  if ((*(byte *)(lVar10 + 4) - 0x11 < 2) && (*(int *)(lVar10 + 0x10) != 0)) {
                    lVar11 = 0;
                    uVar26 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar10 + 0x30) + lVar11) == 0) {
                        func_0x000107c31940(&plStack_150,&UNK_10f625568);
                        FUN_109f68cc4(&uStack_d0,&plStack_150,2,&PTR_DAT_110b93520);
                        goto LAB_109f6bd38;
                      }
                      FUN_109f6d548(param_2,plVar31);
                      uVar26 = uVar26 + 1;
                      lVar11 = lVar11 + 0x30;
                    } while (uVar26 < *(uint *)(lVar10 + 0x10));
                    plVar17 = (long *)*plVar29;
                  }
                }
                plVar29 = plVar17;
              }
            }
          }
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          *param_1 = 0;
          *(undefined1 *)(param_1 + 5) = 1;
          goto LAB_109f6bcd8;
        }
        func_0x000107c31940(&plStack_150,&UNK_10f625633);
        FUN_109f68cc4(&uStack_d0,&plStack_150,1,&PTR_DAT_110b93580);
      }
    }
  }
  plVar29 = plStack_b0;
  uVar7 = uStack_b1;
  uVar6 = uStack_d0;
  uVar9 = CONCAT17(cStack_c1,uStack_c8);
  uStack_88 = uStack_c0;
  cStack_81 = cStack_b9;
  uStack_80 = uStack_b8;
  if ((long)plStack_140 < 0) {
    __ZdlPv(plStack_150);
  }
  uStack_d0 = (undefined4)uStack_88;
  uStack_cc = CONCAT13(cStack_81,(int3)((uint7)uStack_88 >> 0x20));
  uStack_c8 = uStack_80;
  *(undefined4 *)param_1 = uVar6;
  param_1[1] = uVar9;
  param_1[2] = CONCAT44(uStack_cc,uStack_d0);
  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_80,cStack_81);
  *(undefined1 *)((long)param_1 + 0x1f) = uVar7;
  param_1[4] = plVar29;
  *(undefined1 *)(param_1 + 5) = 0;
LAB_109f6bcd8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_109f6bd98:
  func_0x000104c4f740();
LAB_109f6beb8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109f6bebc);
  (*pcVar8)();
LAB_109f6b3a8:
  plVar21 = (long *)*plVar21;
  if (plVar21 == (long *)0x0) goto LAB_109f6b3b0;
  goto LAB_109f6b35c;
}



/* Entry: 109f6bf2c; end: 109f6bf83;  */

void FUN_109f6bf2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xcbaf0;
  __Znwm();
  FUN_109f6e038();
  *param_1 = uVar1;
  return;
}



/* Entry: 109f6bf84; end: 109f6c68f;  */

long * FUN_109f6bf84(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *unaff_x27;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar20 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar20;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar9 = param_1 + 3;
  param_1[4] = 0;
  *plVar9 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  plVar5 = param_1 + 8;
  param_1[9] = 0;
  *plVar5 = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  plVar10 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  if (plVar10 != plVar3) {
    plVar1 = param_1 + 10;
    plVar2 = param_1 + 5;
    do {
      lVar20 = (long)*(char *)((long)plVar10 + 0x17);
      plVar13 = plVar10;
      if (lVar20 < 0) {
        lVar20 = plVar10[1];
        plVar13 = (long *)*plVar10;
      }
      plVar6 = plVar5;
      func_0x000107c2ac8c(plVar5,plVar13,lVar20);
      plVar19 = (long *)param_1[9];
      if (plVar19 != (long *)0x0) {
        uVar18 = (long)plVar19 - 1;
        if (((ulong)plVar19 & uVar18) == 0) {
          unaff_x27 = (long *)(uVar18 & (ulong)plVar6);
        }
        else {
          unaff_x27 = plVar6;
          if (plVar19 <= plVar6) {
            uVar15 = 0;
            if (plVar19 != (long *)0x0) {
              uVar15 = (ulong)plVar6 / (ulong)plVar19;
            }
            unaff_x27 = (long *)((long)plVar6 - uVar15 * (long)plVar19);
          }
        }
        plVar11 = *(long **)(*plVar5 + (long)unaff_x27 * 8);
        if (plVar11 != (long *)0x0) {
          for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            plVar12 = (long *)plVar11[1];
            if (plVar12 == plVar6) {
              if (plVar11[3] == lVar20) {
                uVar7 = plVar11[2];
                _memcmp(uVar7,plVar13,lVar20);
                if ((int)uVar7 == 0) goto LAB_109f6c38c;
              }
            }
            else {
              if (((ulong)plVar19 & uVar18) == 0) {
                plVar12 = (long *)((ulong)plVar12 & uVar18);
              }
              else if (plVar19 <= plVar12) {
                uVar15 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar15 = (ulong)plVar12 / (ulong)plVar19;
                }
                plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar19);
              }
              if (plVar12 != unaff_x27) break;
            }
          }
        }
      }
      plVar11 = (long *)0x28;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = (long)plVar6;
      plVar11[2] = (long)plVar13;
      plVar11[3] = lVar20;
      plVar11[4] = plVar10[3];
      if ((plVar19 == (long *)0x0) ||
         (*(float *)(param_1 + 0xc) * (float)plVar19 < (float)(param_1[0xb] + 1))) {
        uVar18 = 1;
        if ((long *)0x2 < plVar19) {
          uVar18 = (ulong)(((ulong)plVar19 & (long)plVar19 - 1U) != 0);
        }
        plVar13 = (long *)(uVar18 | (long)plVar19 << 1);
        plVar12 = (long *)(long)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
        if (plVar13 <= plVar12) {
          plVar13 = plVar12;
        }
        if ((long)plVar13 - 1U == 0) {
          plVar13 = (long *)0x2;
        }
        else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar19 = (long *)param_1[9];
        }
        if (plVar19 < plVar13) {
LAB_109f6c188:
          plVar19 = plVar13;
          if ((ulong)plVar19 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x109f6c640);
            (*pcVar4)();
          }
          lVar20 = (long)plVar19 << 3;
          __Znwm();
          lVar8 = *plVar5;
          *plVar5 = lVar20;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          plVar13 = (long *)0x0;
          param_1[9] = (long)plVar19;
          do {
            *(undefined8 *)(*plVar5 + (long)plVar13 * 8) = 0;
            plVar13 = (long *)((long)plVar13 + 1);
          } while (plVar19 != plVar13);
          plVar13 = (long *)*plVar1;
          if (plVar13 != (long *)0x0) {
            plVar12 = (long *)plVar13[1];
            uVar18 = (long)plVar19 - 1;
            if (((ulong)plVar19 & uVar18) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar18);
            }
            else if (plVar19 <= plVar12) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar12 / (ulong)plVar19;
              }
              plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar19);
            }
            *(long **)(*plVar5 + (long)plVar12 * 8) = plVar1;
            plVar16 = (long *)*plVar13;
            while (plVar16 != (long *)0x0) {
              plVar17 = (long *)plVar16[1];
              if (((ulong)plVar19 & uVar18) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar18);
              }
              else if (plVar19 <= plVar17) {
                uVar15 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar15 = (ulong)plVar17 / (ulong)plVar19;
                }
                plVar17 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
              }
              plVar14 = plVar16;
              if (plVar17 != plVar12) {
                lVar20 = *plVar5;
                if (*(long *)(lVar20 + (long)plVar17 * 8) == 0) {
                  *(long **)(lVar20 + (long)plVar17 * 8) = plVar13;
                  plVar12 = plVar17;
                }
                else {
                  *plVar13 = *plVar16;
                  *plVar16 = **(undefined8 **)(lVar20 + (long)plVar17 * 8);
                  **(long **)(lVar20 + (long)plVar17 * 8) = (long)plVar16;
                  plVar14 = plVar13;
                }
              }
              plVar13 = plVar14;
              plVar16 = (long *)*plVar14;
            }
          }
        }
        else if (plVar13 < plVar19) {
          plVar12 = (long *)(long)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
          if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar12) {
            plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
          }
          if (plVar13 <= plVar12) {
            plVar13 = plVar12;
          }
          if (plVar13 < plVar19) {
            if (plVar13 != (long *)0x0) goto LAB_109f6c188;
            lVar20 = *plVar5;
            *plVar5 = 0;
            if (lVar20 != 0) {
              __ZdlPv();
            }
            plVar19 = (long *)0x0;
            param_1[9] = 0;
          }
          else {
            plVar19 = (long *)param_1[9];
          }
        }
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          unaff_x27 = (long *)((long)plVar19 - 1U & (ulong)plVar6);
        }
        else {
          unaff_x27 = plVar6;
          if (plVar19 <= plVar6) {
            uVar18 = 0;
            if (plVar19 != (long *)0x0) {
              uVar18 = (ulong)plVar6 / (ulong)plVar19;
            }
            unaff_x27 = (long *)((long)plVar6 - uVar18 * (long)plVar19);
          }
        }
      }
      lVar20 = *plVar5;
      plVar13 = *(long **)(lVar20 + (long)unaff_x27 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar20 + (long)unaff_x27 * 8) = plVar1;
        if (*plVar11 != 0) {
          plVar13 = *(long **)(*plVar11 + 8);
          if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar13) {
            uVar18 = 0;
            if (plVar19 != (long *)0x0) {
              uVar18 = (ulong)plVar13 / (ulong)plVar19;
            }
            plVar13 = (long *)((long)plVar13 - uVar18 * (long)plVar19);
          }
          plVar13 = (long *)(*plVar5 + (long)plVar13 * 8);
          goto LAB_109f6c37c;
        }
      }
      else {
        *plVar11 = *plVar13;
LAB_109f6c37c:
        *plVar13 = (long)plVar11;
      }
      param_1[0xb] = param_1[0xb] + 1;
LAB_109f6c38c:
      plVar6 = (long *)plVar10[5];
      for (plVar13 = (long *)plVar10[4]; plVar13 != plVar6; plVar13 = plVar13 + 3) {
        lVar20 = (long)*(char *)((long)plVar13 + 0x17);
        plVar11 = plVar13;
        if (lVar20 < 0) {
          lVar20 = plVar13[1];
          plVar11 = (long *)*plVar13;
        }
        lVar8 = (long)*(char *)((long)plVar10 + 0x17);
        plVar12 = plVar10;
        if (lVar8 < 0) {
          lVar8 = plVar10[1];
          plVar12 = (long *)*plVar10;
        }
        plVar16 = plVar9;
        func_0x000107c2ac8c(plVar9,plVar11,lVar20);
        unaff_x27 = (long *)param_1[4];
        if (unaff_x27 != (long *)0x0) {
          uVar18 = (long)unaff_x27 - 1;
          if (((ulong)unaff_x27 & uVar18) == 0) {
            plVar19 = (long *)(uVar18 & (ulong)plVar16);
          }
          else {
            plVar19 = plVar16;
            if (unaff_x27 <= plVar16) {
              uVar15 = 0;
              if (unaff_x27 != (long *)0x0) {
                uVar15 = (ulong)plVar16 / (ulong)unaff_x27;
              }
              plVar19 = (long *)((long)plVar16 - uVar15 * (long)unaff_x27);
            }
          }
          plVar17 = *(long **)(*plVar9 + (long)plVar19 * 8);
          if (plVar17 != (long *)0x0) {
            for (plVar17 = (long *)*plVar17; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
              plVar14 = (long *)plVar17[1];
              if (plVar14 == plVar16) {
                if (plVar17[3] == lVar20) {
                  uVar7 = plVar17[2];
                  _memcmp(uVar7,plVar11,lVar20);
                  if ((int)uVar7 == 0) goto LAB_109f6c5ac;
                }
              }
              else {
                if (((ulong)unaff_x27 & uVar18) == 0) {
                  plVar14 = (long *)((ulong)plVar14 & uVar18);
                }
                else if (unaff_x27 <= plVar14) {
                  uVar15 = 0;
                  if (unaff_x27 != (long *)0x0) {
                    uVar15 = (ulong)plVar14 / (ulong)unaff_x27;
                  }
                  plVar14 = (long *)((long)plVar14 - uVar15 * (long)unaff_x27);
                }
                if (plVar14 != plVar19) break;
              }
            }
          }
        }
        plVar17 = (long *)0x30;
        __Znwm();
        *plVar17 = 0;
        plVar17[1] = (long)plVar16;
        plVar17[2] = (long)plVar11;
        plVar17[3] = lVar20;
        plVar17[4] = (long)plVar12;
        plVar17[5] = lVar8;
        if ((unaff_x27 == (long *)0x0) ||
           (*(float *)(param_1 + 7) * (float)unaff_x27 < (float)(param_1[6] + 1))) {
          uVar18 = 1;
          if ((long *)0x2 < unaff_x27) {
            uVar18 = (ulong)(((ulong)unaff_x27 & (long)unaff_x27 - 1U) != 0);
          }
          uVar18 = uVar18 | (long)unaff_x27 << 1;
          uVar15 = (ulong)((float)(param_1[6] + 1) / *(float *)(param_1 + 7));
          if (uVar18 <= uVar15) {
            uVar18 = uVar15;
          }
          FUN_109f6f564(plVar9,uVar18);
          unaff_x27 = (long *)param_1[4];
          if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
            plVar19 = (long *)((long)unaff_x27 - 1U & (ulong)plVar16);
          }
          else {
            plVar19 = plVar16;
            if (unaff_x27 <= plVar16) {
              uVar18 = 0;
              if (unaff_x27 != (long *)0x0) {
                uVar18 = (ulong)plVar16 / (ulong)unaff_x27;
              }
              plVar19 = (long *)((long)plVar16 - uVar18 * (long)unaff_x27);
            }
          }
        }
        lVar20 = *plVar9;
        plVar11 = *(long **)(lVar20 + (long)plVar19 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar17 = *plVar2;
          *plVar2 = (long)plVar17;
          *(long **)(lVar20 + (long)plVar19 * 8) = plVar2;
          if (*plVar17 != 0) {
            plVar11 = *(long **)(*plVar17 + 8);
            if (((ulong)unaff_x27 & (long)unaff_x27 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)unaff_x27 - 1U);
            }
            else if (unaff_x27 <= plVar11) {
              uVar18 = 0;
              if (unaff_x27 != (long *)0x0) {
                uVar18 = (ulong)plVar11 / (ulong)unaff_x27;
              }
              plVar11 = (long *)((long)plVar11 - uVar18 * (long)unaff_x27);
            }
            plVar11 = (long *)(*plVar9 + (long)plVar11 * 8);
            goto LAB_109f6c59c;
          }
        }
        else {
          *plVar17 = *plVar11;
LAB_109f6c59c:
          *plVar11 = (long)plVar17;
        }
        param_1[6] = param_1[6] + 1;
LAB_109f6c5ac:
      }
      plVar10 = plVar10 + 7;
    } while (plVar10 != plVar3);
  }
  return param_1;
}



/* Entry: 109f6c690; end: 109f6ccf7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109f6c690(int *param_1,long *param_2,undefined8 param_3,ulong param_4,uint param_5,
                  uint param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined1 **ppuVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 **ppuVar20;
  undefined8 uVar21;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  
  ppuVar10 = &puStack_f0;
  ppuVar20 = &puStack_f0;
  uVar5 = (undefined1)param_4;
  if ((param_6 | param_5) < 0x100) {
    puVar4 = (undefined8 *)param_2[1];
    puVar3 = (undefined8 *)*param_2;
    for (puVar19 = puVar3; puVar19 != puVar4; puVar19 = puVar19 + 7) {
      uVar12 = (ulong)*(char *)((long)puVar19 + 0x17);
      puVar18 = puVar19;
      if ((long)uVar12 < 0) {
        uVar12 = puVar19[1];
        puVar18 = (undefined8 *)*puVar19;
      }
      if ((param_4 == uVar12) &&
         (uVar16 = param_3, _memcmp(param_3,puVar18,param_4), (int)uVar16 == 0)) {
        if (0x7ffffffffffffff7 < param_4) goto LAB_109f6cc70;
        if (param_4 < 0x17) {
          uStack_a8 = CONCAT17(uVar5,(undefined7)uStack_a8);
          pppppppuVar7 = &pppppppuStack_b8;
          if (param_4 != 0) goto LAB_109f6cb7c;
        }
        else {
          pppppppuVar8 = (undefined8 *******)0x19;
          if ((param_4 | 7) != 0x17) {
            pppppppuVar8 = (undefined8 *******)((param_4 | 7) + 1);
          }
          pppppppuVar7 = pppppppuVar8;
          __Znwm();
          uStack_a8 = (ulong)pppppppuVar8 | 0x8000000000000000;
          pppppppuStack_b8 = pppppppuVar7;
          uStack_b0 = param_4;
LAB_109f6cb7c:
          _memmove(pppppppuVar7,param_3,param_4);
        }
        *(undefined1 *)((long)pppppppuVar7 + param_4) = 0;
        pppppppuVar8 = &pppppppuStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar8,0,&UNK_10f625413,0x14);
        ppppppuStack_98 = pppppppuVar8[1];
        ppppppuStack_a0 = *pppppppuVar8;
        ppppppuStack_90 = pppppppuVar8[2];
        pppppppuVar8[1] = (undefined8 ******)0x0;
        pppppppuVar8[2] = (undefined8 ******)0x0;
        *pppppppuVar8 = (undefined8 ******)0x0;
        ppppppuVar9 = &ppppppuStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar9,&DAT_10f638984,1);
        pppppuStack_78 = ppppppuVar9[1];
        pppppuStack_80 = *ppppppuVar9;
        pppppuStack_70 = ppppppuVar9[2];
        ppppppuVar9[1] = (undefined8 *****)0x0;
        ppppppuVar9[2] = (undefined8 *****)0x0;
        *ppppppuVar9 = (undefined8 *****)0x0;
        FUN_109f68cc4(&puStack_f0,&pppppuStack_80,1,&PTR_DAT_110b93400);
        goto LAB_109f6cc04;
      }
      if (*(uint *)(puVar19 + 3) == param_5 && *(uint *)((long)puVar19 + 0x1c) == param_6) {
        if (0x7ffffffffffffff7 < param_4) goto LAB_109f6cc70;
        if (param_4 < 0x17) {
          uStack_a8 = CONCAT17(uVar5,(undefined7)uStack_a8);
          pppppppuVar7 = &pppppppuStack_b8;
          if (param_4 != 0) goto LAB_109f6cac8;
        }
        else {
          pppppppuVar8 = (undefined8 *******)0x19;
          if ((param_4 | 7) != 0x17) {
            pppppppuVar8 = (undefined8 *******)((param_4 | 7) + 1);
          }
          pppppppuVar7 = pppppppuVar8;
          __Znwm();
          uStack_a8 = (ulong)pppppppuVar8 | 0x8000000000000000;
          pppppppuStack_b8 = pppppppuVar7;
          uStack_b0 = param_4;
LAB_109f6cac8:
          _memmove(pppppppuVar7,param_3,param_4);
        }
        *(undefined1 *)((long)pppppppuVar7 + param_4) = 0;
        pppppppuVar8 = &pppppppuStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar8,0,&UNK_10f625428,0x2a);
        ppppppuStack_98 = pppppppuVar8[1];
        ppppppuStack_a0 = *pppppppuVar8;
        ppppppuStack_90 = pppppppuVar8[2];
        pppppppuVar8[1] = (undefined8 ******)0x0;
        pppppppuVar8[2] = (undefined8 ******)0x0;
        *pppppppuVar8 = (undefined8 ******)0x0;
        ppppppuVar9 = &ppppppuStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar9,&DAT_10f638984,1);
        pppppuStack_78 = ppppppuVar9[1];
        pppppuStack_80 = *ppppppuVar9;
        pppppuStack_70 = ppppppuVar9[2];
        ppppppuVar9[1] = (undefined8 *****)0x0;
        ppppppuVar9[2] = (undefined8 *****)0x0;
        *ppppppuVar9 = (undefined8 *****)0x0;
        FUN_109f68cc4(&puStack_f0,&pppppuStack_80,1,&PTR_DAT_110b93418);
        goto LAB_109f6cc04;
      }
    }
    if (0x7ffffffffffffff7 < param_4) goto LAB_109f6cc70;
    if (param_4 < 0x17) {
      uStack_e0 = CONCAT17(uVar5,(undefined7)uStack_e0);
      if (param_4 != 0) goto LAB_109f6c858;
    }
    else {
      puVar2 = (undefined1 *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar2 = (undefined1 *)((param_4 | 7) + 1);
      }
      ppuVar10 = (undefined1 **)puVar2;
      __Znwm();
      uStack_e0 = (ulong)puVar2 | 0x8000000000000000;
      puStack_f0 = (undefined1 *)ppuVar10;
      uStack_e8 = param_4;
LAB_109f6c858:
      _memmove(ppuVar10,param_3,param_4);
      ppuVar20 = ppuVar10;
    }
    *(undefined1 *)((long)ppuVar20 + param_4) = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    pppuStack_d0 = (undefined8 ***)0x0;
    puVar19 = (undefined8 *)param_2[1];
    uStack_d8 = param_5;
    uStack_d4 = param_6;
    if (puVar19 < (undefined8 *)param_2[2]) {
      puVar19[2] = uStack_e0;
      puVar19[1] = uStack_e8;
      *puVar19 = puStack_f0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      puStack_f0 = (undefined1 *)0x0;
      puVar19[3] = CONCAT44(param_6,param_5);
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[6] = 0;
      pppuStack_d0 = (undefined8 ***)0x0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puVar19 = puVar19 + 7;
LAB_109f6ca14:
      param_2[1] = (long)puVar19;
      pppppuStack_80 = (undefined8 *****)&pppuStack_d0;
      func_0x000104c607c8(&pppppuStack_80);
      if ((long)uStack_e0 < 0) {
        __ZdlPv(puStack_f0);
      }
      *param_1 = (int)((long)puVar4 - (long)puVar3 >> 3) * -0x49249249;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    puVar18 = (undefined8 *)*param_2;
    uVar12 = ((long)puVar19 - (long)puVar18 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar12 < 0x492492492492493) {
      lVar14 = param_2[2] - (long)puVar18 >> 3;
      uVar17 = lVar14 * -0x2492492492492492;
      if (uVar17 < uVar12 || uVar17 - uVar12 == 0) {
        uVar17 = uVar12;
      }
      if (0x249249249249248 < (ulong)(lVar14 * 0x6db6db6db6db6db7)) {
        uVar17 = 0x492492492492492;
      }
      if (uVar17 < 0x492492492492493) {
        puVar11 = (undefined8 *)(uVar17 * 0x38);
        __Znwm();
        uVar12 = uStack_e0;
        puVar1 = (undefined8 *)((long)puVar11 + ((long)puVar19 - (long)puVar18));
        puVar1[1] = uStack_e8;
        *puVar1 = puStack_f0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        puStack_f0 = (undefined1 *)0x0;
        puVar1[2] = uVar12;
        puVar1[3] = CONCAT44(uStack_d4,uStack_d8);
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        pppuStack_d0 = (undefined8 ***)0x0;
        puVar13 = puVar18;
        puVar15 = puVar11;
        if (puVar18 != puVar19) {
          do {
            uVar21 = puVar13[1];
            uVar16 = *puVar13;
            puVar15[2] = puVar13[2];
            puVar15[1] = uVar21;
            *puVar15 = uVar16;
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = 0;
            uVar16 = puVar13[3];
            puVar15[5] = 0;
            puVar15[6] = 0;
            puVar15[3] = uVar16;
            puVar15[4] = 0;
            uVar16 = puVar13[4];
            puVar15[5] = puVar13[5];
            puVar15[4] = uVar16;
            puVar15[6] = puVar13[6];
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13 = puVar13 + 7;
            puVar15 = puVar15 + 7;
          } while (puVar13 != puVar19);
          do {
            FUN_109f6f1ec(puVar18);
            puVar18 = puVar18 + 7;
          } while (puVar18 != puVar19);
          puVar18 = (undefined8 *)*param_2;
        }
        puVar19 = puVar1 + 7;
        *param_2 = (long)puVar11;
        param_2[1] = (long)puVar19;
        param_2[2] = (long)(puVar11 + uVar17 * 7);
        if (puVar18 != (undefined8 *)0x0) {
          __ZdlPv(puVar18);
        }
        goto LAB_109f6ca14;
      }
      func_0x000104c4f740();
      goto LAB_109f6cc80;
    }
  }
  else {
    if (param_4 < 0x7ffffffffffffff8) {
      if (param_4 < 0x17) {
        uStack_a8 = CONCAT17(uVar5,(undefined7)uStack_a8);
        pppppppuVar7 = &pppppppuStack_b8;
        if (param_4 == 0) goto LAB_109f6c7b4;
      }
      else {
        pppppppuVar8 = (undefined8 *******)0x19;
        if ((param_4 | 7) != 0x17) {
          pppppppuVar8 = (undefined8 *******)((param_4 | 7) + 1);
        }
        pppppppuVar7 = pppppppuVar8;
        __Znwm();
        uStack_a8 = (ulong)pppppppuVar8 | 0x8000000000000000;
        pppppppuStack_b8 = pppppppuVar7;
        uStack_b0 = param_4;
      }
      _memmove(pppppppuVar7,param_3,param_4);
LAB_109f6c7b4:
      *(undefined1 *)((long)pppppppuVar7 + param_4) = 0;
      pppppppuVar8 = &pppppppuStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppppuVar8,0,&UNK_10f625370,5);
      ppppppuStack_98 = pppppppuVar8[1];
      ppppppuStack_a0 = *pppppppuVar8;
      ppppppuStack_90 = pppppppuVar8[2];
      pppppppuVar8[1] = (undefined8 ******)0x0;
      pppppppuVar8[2] = (undefined8 ******)0x0;
      *pppppppuVar8 = (undefined8 ******)0x0;
      ppppppuVar9 = &ppppppuStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar9,&UNK_10f625376,0x1d);
      pppppuStack_78 = ppppppuVar9[1];
      pppppuStack_80 = *ppppppuVar9;
      pppppuStack_70 = ppppppuVar9[2];
      ppppppuVar9[1] = (undefined8 *****)0x0;
      ppppppuVar9[2] = (undefined8 *****)0x0;
      *ppppppuVar9 = (undefined8 *****)0x0;
      FUN_109f68cc4(&puStack_f0,&pppppuStack_80,1,&PTR_DAT_110b933e8);
LAB_109f6cc04:
      *param_1 = (int)puStack_f0;
      *(ulong *)(param_1 + 4) = uStack_e0;
      *(ulong *)(param_1 + 2) = uStack_e8;
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_d4,uStack_d8);
      *(undefined8 ****)(param_1 + 8) = pppuStack_d0;
      *(undefined1 *)(param_1 + 10) = 0;
      if ((long)pppppuStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if ((long)ppppppuStack_90 < 0) {
        __ZdlPv(ppppppuStack_a0);
      }
      if (-1 < (long)uStack_a8) {
        return;
      }
      __ZdlPv(pppppppuStack_b8);
      return;
    }
LAB_109f6cc70:
    func_0x000104c4f6b8();
  }
  FUN_109f6f230();
LAB_109f6cc80:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109f6cc84);
  (*pcVar6)();
}



/* Entry: 109f6ccf8; end: 109f6cd3f;  */

undefined8 * FUN_109f6ccf8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109f6cd40; end: 109f6d0bb;  */

long *******
FUN_109f6cd40(undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long *****ppppplVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long ******pppppplStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long ******pppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long ******pppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long *****ppppplStack_88;
  long ******pppppplStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar6 = (param_2[1] - *param_2 >> 3) * 0x6db6db6db6db6db7;
  uStack_60 = param_3;
  uStack_58 = param_4;
  if (uVar6 < (param_5 & 0xffffffff) || uVar6 - (param_5 & 0xffffffff) == 0) {
    __ZNSt3__19to_stringEj(&pppppplStack_d8,param_5);
    ppppppplVar4 = &pppppplStack_d8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar4,0,&UNK_10f625453,10);
    ppppplStack_b8 = (long *****)ppppppplVar4[1];
    pppppplStack_c0 = *ppppppplVar4;
    ppppplStack_b0 = (long *****)ppppppplVar4[2];
    ppppppplVar4[1] = (long ******)0x0;
    ppppppplVar4[2] = (long ******)0x0;
    *ppppppplVar4 = (long ******)0x0;
    ppppppplVar4 = &pppppplStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppplVar4,&UNK_10f56f521,0x10);
    ppppplStack_98 = (long *****)ppppppplVar4[1];
    pppppplStack_a0 = *ppppppplVar4;
    ppppplStack_90 = (long *****)ppppppplVar4[2];
    ppppppplVar4[1] = (long ******)0x0;
    ppppppplVar4[2] = (long ******)0x0;
    *ppppppplVar4 = (long ******)0x0;
    ppppppplVar4 = (long *******)&ppppplStack_88;
    FUN_109f68cc4(ppppppplVar4,&pppppplStack_a0,1,&PTR_DAT_110b93430);
    goto LAB_109f6cfbc;
  }
  ppppppplVar4 = (long *******)(param_2 + 3);
  pppppplVar2 = (long ******)0x28;
  __Znwm();
  uStack_78 = 0;
  *pppppplVar2 = (long *****)0x0;
  pppppplVar2[1] = (long *****)0x0;
  ppppplStack_88 = (long *****)pppppplVar2;
  pppppplStack_80 = (long ******)ppppppplVar4;
  FUN_109f6f244(pppppplVar2 + 2,param_3,param_4);
  uStack_78 = CONCAT71(uStack_78._1_7_,1);
  ppppppplVar3 = ppppppplVar4;
  func_0x000107c31944(ppppppplVar4,pppppplVar2 + 2);
  pppppplVar2[1] = (long *****)ppppppplVar3;
  func_0x0001072d8bb4();
  ppppplVar1 = ppppplStack_88;
  if (((ulong)pppppplVar2 & 1) != 0) {
    lVar7 = *param_2 + (param_5 & 0xffffffff) * 0x38;
    uVar6 = *(ulong *)(lVar7 + 0x28);
    if (uVar6 < *(ulong *)(lVar7 + 0x30)) {
      FUN_109f6f244(uVar6,param_3,param_4);
      ppppppplVar4 = (long *******)(uVar6 + 0x18);
      *(long ********)(lVar7 + 0x28) = ppppppplVar4;
    }
    else {
      ppppppplVar4 = (long *******)(lVar7 + 0x20);
      func_0x000107c27954(ppppppplVar4,&uStack_60);
    }
    *(long ********)(lVar7 + 0x28) = ppppppplVar4;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    return ppppppplVar4;
  }
  ppppplStack_88 = (long *****)0x0;
  if ((long ******)ppppplVar1 != (long ******)0x0) {
    ppppppplVar4 = &pppppplStack_80;
    func_0x00010937d2f4();
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000104c4f6b8();
    param_2[5] = param_5;
    __Unwind_Resume();
    if (ppppppplVar4[3] != (long ******)0x0) {
      func_0x000109ec6108();
    }
    func_0x000109f6ed18(ppppppplVar4 + 0x2e);
    lVar7 = 0x168;
    do {
      lVar5 = *(long *)((long)ppppppplVar4 + lVar7);
      *(undefined8 *)((long)ppppppplVar4 + lVar7) = 0;
      if (lVar5 != 0) {
        FUN_109f6ef20();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0x138);
    func_0x000109f6ed60(ppppppplVar4 + 0x23);
    lVar7 = 0;
    do {
      lVar5 = *(long *)((long)ppppppplVar4 + lVar7 + 0x100);
      if (lVar5 != 0) {
        *(long *)((long)ppppppplVar4 + lVar7 + 0x108) = lVar5;
        __ZdlPv();
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x90);
    if (ppppppplVar4[0xe] != (long ******)0x0) {
      ppppppplVar4[0xf] = ppppppplVar4[0xe];
      __ZdlPv();
    }
    FUN_109f6eddc(ppppppplVar4 + 9);
    func_0x000109f6ee38(ppppppplVar4 + 4);
    pppppplVar2 = ppppppplVar4[2];
    ppppppplVar4[2] = (long ******)0x0;
    if (pppppplVar2 != (long ******)0x0) {
      (*(code *)(*pppppplVar2)[1])();
    }
    return ppppppplVar4;
  }
  if (param_4 < 0x17) {
    uStack_c8 = CONCAT17((char)param_4,(undefined7)uStack_c8);
    ppppppplVar3 = &pppppplStack_d8;
    if (param_4 != 0) goto LAB_109f6cf34;
  }
  else {
    ppppppplVar4 = (long *******)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppppplVar4 = (long *******)((param_4 | 7) + 1);
    }
    ppppppplVar3 = ppppppplVar4;
    __Znwm();
    uStack_c8 = (ulong)ppppppplVar4 | 0x8000000000000000;
    pppppplStack_d8 = (long ******)ppppppplVar3;
    uStack_d0 = param_4;
LAB_109f6cf34:
    _memmove(ppppppplVar3,param_3,param_4);
  }
  *(undefined1 *)((long)ppppppplVar3 + param_4) = 0;
  ppppppplVar4 = &pppppplStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppppppplVar4,0,&UNK_10f6254bb,9);
  ppppplStack_b8 = (long *****)ppppppplVar4[1];
  pppppplStack_c0 = *ppppppplVar4;
  ppppplStack_b0 = (long *****)ppppppplVar4[2];
  ppppppplVar4[1] = (long ******)0x0;
  ppppppplVar4[2] = (long ******)0x0;
  *ppppppplVar4 = (long ******)0x0;
  ppppppplVar4 = &pppppplStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppplVar4,&UNK_10f6254c5,0x1a);
  ppppplStack_98 = (long *****)ppppppplVar4[1];
  pppppplStack_a0 = *ppppppplVar4;
  ppppplStack_90 = (long *****)ppppppplVar4[2];
  ppppppplVar4[1] = (long ******)0x0;
  ppppppplVar4[2] = (long ******)0x0;
  *ppppppplVar4 = (long ******)0x0;
  ppppppplVar4 = (long *******)&ppppplStack_88;
  FUN_109f68cc4(ppppppplVar4,&pppppplStack_a0,1,&PTR_DAT_110b93448);
LAB_109f6cfbc:
  *(undefined4 *)param_1 = ppppplStack_88._0_4_;
  param_1[2] = uStack_78;
  param_1[1] = pppppplStack_80;
  param_1[3] = uStack_70;
  param_1[4] = uStack_68;
  *(undefined1 *)(param_1 + 5) = 0;
  if ((long)ppppplStack_90 < 0) {
    ppppppplVar4 = (long *******)pppppplStack_a0;
    __ZdlPv(pppppplStack_a0);
  }
  if ((long)ppppplStack_b0 < 0) {
    ppppppplVar4 = (long *******)pppppplStack_c0;
    __ZdlPv(pppppplStack_c0);
  }
  if ((long)uStack_c8 < 0) {
    __ZdlPv(pppppplStack_d8);
    ppppppplVar4 = (long *******)pppppplStack_d8;
  }
  return ppppppplVar4;
}



/* Entry: 109f6d0bc; end: 109f6d0bf;  */

long FUN_109f6d0bc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ec6108();
  }
  func_0x000109f6ed18(param_1 + 0x170);
  lVar3 = 0x168;
  do {
    lVar1 = *(long *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    if (lVar1 != 0) {
      FUN_109f6ef20();
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x138);
  func_0x000109f6ed60(param_1 + 0x118);
  lVar3 = 0;
  do {
    lVar1 = *(long *)(param_1 + lVar3 + 0x100);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar3 + 0x108) = lVar1;
      __ZdlPv();
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x90);
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  FUN_109f6eddc(param_1 + 0x48);
  func_0x000109f6ee38(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 109f6d0c0; end: 109f6d0d3;  */

void FUN_109f6d0c0(void)

{
  FUN_109f6f2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109f6d0d4; end: 109f6d12b;  */

undefined1  [16] FUN_109f6d0d4(long param_1,int param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (param_2 != 1) {
      return ZEXT816(0);
    }
    lVar1 = 4;
  }
  auVar2._0_8_ = *(long *)(param_1 + lVar1 * 8 + 0x140);
  auVar2[8] = auVar2._0_8_ != 0;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 109f6d12c; end: 109f6d18b;  */

long FUN_109f6d12c(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 109f6d18c; end: 109f6d193;  */

undefined4 FUN_109f6d18c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 109f6d194; end: 109f6d2b7;  */

/* WARNING: Possible PIC construction at 0x000109f6d20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109f6d210) */

undefined1  [16] FUN_109f6d194(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *in_x4;
  undefined1 auVar4 [16];
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  lVar3 = 0;
  FUN_10ae03140(0,puVar2,uVar1);
  FUN_10ae03140();
  FUN_10ae030a0();
  FUN_10ae030a0();
  auVar4._8_4_ = *in_x4;
  auVar4._0_8_ = (lVar3 + 3U & 0xfffffffffffffffc) + 4;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 109f6d2b8; end: 109f6d503;  */

long * FUN_109f6d2b8(long *param_1)

{
  long *plStack_28;
  
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    __ZdlPv();
  }
  plStack_28 = param_1 + 0xf;
  func_0x0001092d2d9c(&plStack_28);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  plStack_28 = param_1 + 9;
  FUN_109f608e0(&plStack_28);
  plStack_28 = param_1 + 6;
  FUN_109f60564(&plStack_28);
  plStack_28 = param_1 + 3;
  func_0x000109f60180(&plStack_28);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f6d504; end: 109f6d50f;  */

char * FUN_109f6d504(void)

{
  return "Bad expected access";
}



/* Entry: 109f6d510; end: 109f6d547;  */

undefined8 * FUN_109f6d510(undefined8 *param_1)

{
  FUN_109f6da70(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109f6d548; end: 109f6d63b;  */

void FUN_109f6d548(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lStack_48;
  
  cVar2 = *(char *)(param_3 + 4);
  if (cVar2 != '\x11') {
    if (cVar2 != '\x13') {
      return;
    }
    for (lVar3 = *(long *)(param_3 + 0x30); *(byte *)(lVar3 + 4) == 0x13;
        lVar3 = *(long *)(lVar3 + 0x30)) {
    }
    if (*(byte *)(lVar3 + 4) < 0xc) {
      return;
    }
  }
  while (cVar2 == '\x13') {
    param_3 = *(long *)(param_3 + 0x30);
    cVar2 = *(char *)(param_3 + 4);
  }
  lStack_48 = param_3;
  if (*(int *)(param_3 + 0x10) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      FUN_109f6d548(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x30) + lVar3));
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x30;
    } while (uVar4 < *(uint *)(param_3 + 0x10));
  }
  plVar1 = &lStack_48;
  FUN_109f6dbdc(param_1 + 0x170,plVar1,&lStack_48);
  if (((ulong)plVar1 & 1) != 0) {
    FUN_109f6db08(param_1 + 0x70,lStack_48);
  }
  FUN_109f6db08(param_1 + (param_2 & 0xffffffff) * 0x18 + 0x88,lStack_48);
  return;
}



/* Entry: 109f6d63c; end: 109f6d6f3;  */

void FUN_109f6d63c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109f6d6f4; end: 109f6d8eb;  */

void FUN_109f6d6f4(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_109f6d9f0();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 109f6d8ec; end: 109f6d9ef;  */

void FUN_109f6d8ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_109f6d9f0();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 109f6d9f0; end: 109f6da6f;  */

undefined1  [16] FUN_109f6d9f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109f6da70; end: 109f6db07;  */

long * FUN_109f6da70(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_109f6daec;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_109f6daec:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f6db08; end: 109f6dbdb;  */

undefined1  [16] FUN_109f6db08(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    puVar10 = puVar13 + 1;
    *puVar13 = param_2;
    puVar8 = param_1;
LAB_109f6dbb8:
    param_1[1] = (ulong)puVar10;
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = puVar8;
    return auVar14;
  }
  puVar7 = (ulong *)*param_1;
  lVar9 = (long)puVar13 - (long)puVar7;
  uVar4 = (lVar9 >> 3) + 1;
  if (uVar4 >> 0x3d == 0) {
    uVar3 = (long)param_1[2] - (long)puVar7;
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 >> 0x3d == 0) {
      lVar1 = uVar5 << 3;
      __Znwm();
      puVar13 = (undefined8 *)(lVar1 + lVar9);
      puVar11 = puVar13 + -(lVar9 >> 3);
      puVar10 = puVar13 + 1;
      *puVar13 = param_2;
      puVar8 = puVar11;
      param_2 = puVar7;
      _memcpy(puVar11,puVar7,lVar9);
      *param_1 = (ulong)puVar11;
      param_1[1] = (ulong)puVar10;
      param_1[2] = lVar1 + uVar5 * 8;
      if (puVar7 != (ulong *)0x0) {
        __ZdlPv(puVar7);
        puVar8 = puVar7;
      }
      goto LAB_109f6dbb8;
    }
  }
  else {
    FUN_109f6e024();
  }
  func_0x000104c4f740();
  uVar4 = *param_2;
  uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (uVar4 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  puVar12 = (undefined8 *)((uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297);
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 != (undefined8 *)0x0) {
    uVar5 = (long)puVar10 - 1;
    if (((ulong)puVar10 & uVar5) == 0) {
      puVar13 = (undefined8 *)((ulong)puVar12 & uVar5);
    }
    else {
      puVar13 = puVar12;
      if (puVar10 <= puVar12) {
        uVar3 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar3 = (ulong)puVar12 / (ulong)puVar10;
        }
        puVar13 = (undefined8 *)((long)puVar12 - uVar3 * (long)puVar10);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)puVar13 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (puVar8 = (ulong *)*puVar6; puVar8 != (ulong *)0x0; puVar8 = (ulong *)*puVar8) {
        puVar6 = (undefined8 *)puVar8[1];
        if (puVar6 == puVar12) {
          if (puVar8[2] == uVar4) {
            uVar2 = 0;
            goto LAB_109f6dde4;
          }
        }
        else {
          if (((ulong)puVar10 & uVar5) == 0) {
            puVar6 = (undefined8 *)((ulong)puVar6 & uVar5);
          }
          else if (puVar10 <= puVar6) {
            uVar3 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              uVar3 = (ulong)puVar6 / (ulong)puVar10;
            }
            puVar6 = (undefined8 *)((long)puVar6 - uVar3 * (long)puVar10);
          }
          if (puVar6 != puVar13) break;
        }
      }
    }
  }
  puVar8 = (ulong *)0x18;
  __Znwm();
  *puVar8 = 0;
  puVar8[1] = (ulong)puVar12;
  puVar8[2] = *param_3;
  if ((puVar10 == (undefined8 *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar10 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if ((undefined8 *)0x2 < puVar10) {
      uVar4 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)puVar10 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    FUN_109f6de18(param_1,uVar4);
    puVar10 = (undefined8 *)param_1[1];
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      puVar13 = (undefined8 *)((long)puVar10 - 1U & (ulong)puVar12);
    }
    else {
      puVar13 = puVar12;
      if (puVar10 <= puVar12) {
        uVar4 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = (ulong)puVar12 / (ulong)puVar10;
        }
        puVar13 = (undefined8 *)((long)puVar12 - uVar4 * (long)puVar10);
      }
    }
  }
  uVar4 = *param_1;
  puVar7 = *(ulong **)(uVar4 + (long)puVar13 * 8);
  if (puVar7 == (ulong *)0x0) {
    puVar7 = param_1 + 2;
    *puVar8 = *puVar7;
    *puVar7 = (ulong)puVar8;
    *(ulong **)(uVar4 + (long)puVar13 * 8) = puVar7;
    if (*puVar8 == 0) goto LAB_109f6ddd4;
    puVar13 = *(undefined8 **)(*puVar8 + 8);
    if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
      puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar10 - 1U);
    }
    else if (puVar10 <= puVar13) {
      uVar4 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar4 = (ulong)puVar13 / (ulong)puVar10;
      }
      puVar13 = (undefined8 *)((long)puVar13 - uVar4 * (long)puVar10);
    }
    puVar7 = (ulong *)(*param_1 + (long)puVar13 * 8);
  }
  else {
    *puVar8 = *puVar7;
  }
  *puVar7 = (ulong)puVar8;
LAB_109f6ddd4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_109f6dde4:
  auVar15._8_8_ = uVar2;
  auVar15._0_8_ = puVar8;
  return auVar15;
}



/* Entry: 109f6dbdc; end: 109f6de17;  */

undefined1  [16] FUN_109f6dbdc(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_109f6dde4;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_109f6de18(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_109f6ddd4;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_109f6ddd4:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_109f6dde4:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 109f6de18; end: 109f6dee7;  */

uint * FUN_109f6de18(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar7 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (uint *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar7 = param_2;
  }
  puVar15 = *(uint **)(param_1 + 2);
  if (puVar15 < param_2) {
LAB_109f6de60:
    if (param_2 == (uint *)0x0) {
      puVar7 = *(uint **)param_1;
      param_1[0] = 0;
      param_1[1] = 0;
      if (puVar7 != (uint *)0x0) {
        __ZdlPv();
      }
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        puVar7 = (uint *)&DAT_10f62a4d8;
        func_0x000104c4f6cc();
        *(undefined ***)puVar7 = &PTR_FUN_110b935a8;
        puVar13 = puVar7 + 4;
        puVar13[0] = 0;
        puVar13[1] = 0;
        *(undefined2 *)(puVar7 + 6) = 0;
        puVar7[0x6daa] = 0;
        puVar7[0x6dab] = 0;
        puVar7[0x6dac] = 0;
        puVar7[0x3111a] = 0;
        puVar7[0x3111b] = 0;
        puVar7[0x3111c] = 0;
        puVar7[0x31137] = 0;
        puVar7[0x31138] = 0;
        puVar7[0x32e6d] = 0;
        puVar7[0x32e6e] = 0;
        puVar7[0x32e6b] = 0;
        puVar7[0x32e6c] = 0;
        puVar7[0x32e71] = 0;
        puVar7[0x32e72] = 0;
        puVar7[0x32e6f] = 0;
        puVar7[0x32e70] = 0;
        puVar7[0x32e7c] = 0;
        puVar7[0x32e7d] = 0;
        puVar7[0x32e7e] = 0;
        puVar15 = puVar7 + 0x32e80;
        _bzero(puVar7 + 7,0x19ff8);
        _bzero(puVar7 + 0x6806,0x922);
        *(undefined1 *)(puVar7 + 0x6a51) = 0;
        puVar7[0x6a4f] = 0;
        puVar7[0x6a50] = 0;
        _bzero(puVar7 + 0x6a52,0xc3a);
        puVar7[0x6da7] = 0;
        puVar7[0x6da8] = 0;
        puVar7[0x6da5] = 0;
        puVar7[0x6da6] = 0;
        puVar7[0x6da0] = 0;
        puVar7[0x6da1] = 0;
        puVar7[0x6d9e] = 0;
        puVar7[0x6d9f] = 0;
        puVar7[0x6da4] = 0;
        puVar7[0x6da5] = 0;
        puVar7[0x6da2] = 0;
        puVar7[0x6da3] = 0;
        puVar7[0x6d98] = 0;
        puVar7[0x6d99] = 0;
        puVar7[0x6d96] = 0;
        puVar7[0x6d97] = 0;
        puVar7[0x6d9c] = 0;
        puVar7[0x6d9d] = 0;
        puVar7[0x6d9a] = 0;
        puVar7[0x6d9b] = 0;
        puVar7[0x6d90] = 0;
        puVar7[0x6d91] = 0;
        puVar7[0x6d8e] = 0;
        puVar7[0x6d8f] = 0;
        puVar7[0x6d94] = 0;
        puVar7[0x6d95] = 0;
        puVar7[0x6d92] = 0;
        puVar7[0x6d93] = 0;
        puVar7[0x6d88] = 0;
        puVar7[0x6d89] = 0;
        puVar7[0x6d86] = 0;
        puVar7[0x6d87] = 0;
        puVar7[0x6d8c] = 0;
        puVar7[0x6d8d] = 0;
        puVar7[0x6d8a] = 0;
        puVar7[0x6d8b] = 0;
        puVar7[0x6d80] = 0;
        puVar7[0x6d81] = 0;
        puVar7[0x6d7e] = 0;
        puVar7[0x6d7f] = 0;
        puVar7[0x6d84] = 0;
        puVar7[0x6d85] = 0;
        puVar7[0x6d82] = 0;
        puVar7[0x6d83] = 0;
        puVar7[0x6d78] = 0;
        puVar7[0x6d79] = 0;
        puVar7[0x6d76] = 0;
        puVar7[0x6d77] = 0;
        puVar7[0x6d7c] = 0;
        puVar7[0x6d7d] = 0;
        puVar7[0x6d7a] = 0;
        puVar7[0x6d7b] = 0;
        puVar7[0x6d70] = 0;
        puVar7[0x6d71] = 0;
        puVar7[0x6d6e] = 0;
        puVar7[0x6d6f] = 0;
        puVar7[0x6d74] = 0;
        puVar7[0x6d75] = 0;
        puVar7[0x6d72] = 0;
        puVar7[0x6d73] = 0;
        puVar7[0x6d68] = 0;
        puVar7[0x6d69] = 0;
        puVar7[0x6d66] = 0;
        puVar7[0x6d67] = 0;
        puVar7[0x6d6c] = 0;
        puVar7[0x6d6d] = 0;
        puVar7[0x6d6a] = 0;
        puVar7[0x6d6b] = 0;
        puVar7[0x6d64] = 0;
        puVar7[0x6d65] = 0;
        puVar7[0x6d62] = 0;
        puVar7[0x6d63] = 0;
        _bzero(puVar7 + 0x6dae,0x624);
        _bzero(puVar7 + 0x6f38,0x84cec);
        _bzero(puVar7 + 0x28274,0x23a92);
        *(undefined2 *)(puVar7 + 0x31136) = 0;
        puVar7[0x31130] = 0;
        puVar7[0x31131] = 0;
        puVar7[0x3112e] = 0;
        puVar7[0x3112f] = 0;
        puVar7[0x31134] = 0;
        puVar7[0x31135] = 0;
        puVar7[0x31132] = 0;
        puVar7[0x31133] = 0;
        puVar7[0x31128] = 0;
        puVar7[0x31129] = 0;
        puVar7[0x31126] = 0;
        puVar7[0x31127] = 0;
        puVar7[0x3112c] = 0;
        puVar7[0x3112d] = 0;
        puVar7[0x3112a] = 0;
        puVar7[0x3112b] = 0;
        puVar7[0x31120] = 0;
        puVar7[0x31121] = 0;
        puVar7[0x3111e] = 0;
        puVar7[0x3111f] = 0;
        puVar7[0x31124] = 0;
        puVar7[0x31125] = 0;
        puVar7[0x31122] = 0;
        puVar7[0x31123] = 0;
        puVar7[0x3113c] = 0;
        puVar7[0x3113d] = 0;
        puVar7[0x3113a] = 0;
        puVar7[0x3113b] = 0;
        puVar7[0x31140] = 0;
        puVar7[0x31141] = 0;
        puVar7[0x3113e] = 0;
        puVar7[0x3113f] = 0;
        puVar7[0x31144] = 0;
        puVar7[0x31145] = 0;
        puVar7[0x31142] = 0;
        puVar7[0x31143] = 0;
        puVar7[0x31148] = 0;
        puVar7[0x31149] = 0;
        puVar7[0x31146] = 0;
        puVar7[0x31147] = 0;
        puVar7[0x3114c] = 0;
        puVar7[0x3114d] = 0;
        puVar7[0x3114a] = 0;
        puVar7[0x3114b] = 0;
        puVar7[0x31150] = 0;
        puVar7[0x31151] = 0;
        puVar7[0x3114e] = 0;
        puVar7[0x3114f] = 0;
        puVar7[0x31154] = 0;
        puVar7[0x31155] = 0;
        puVar7[0x31152] = 0;
        puVar7[0x31153] = 0;
        *(undefined2 *)(puVar7 + 0x31156) = 0;
        puVar7[0x31157] = 0;
        puVar7[0x31158] = 0;
        puVar7[0x3115b] = 0;
        puVar7[0x3115c] = 0;
        puVar7[0x31159] = 0;
        puVar7[0x3115a] = 0;
        *(undefined8 *)((long)puVar7 + 0xc472f) = 0;
        *(undefined8 *)((long)puVar7 + 0xc4727) = 0;
        *(undefined1 *)(puVar7 + 0x3115d) = 0;
        puVar7[0x311c4] = 0;
        puVar7[0x311c5] = 0;
        puVar7[0x311c2] = 0;
        puVar7[0x311c3] = 0;
        puVar7[0x311c8] = 0;
        puVar7[0x311c9] = 0;
        puVar7[0x311c6] = 0;
        puVar7[0x311c7] = 0;
        puVar7[0x311bc] = 0;
        puVar7[0x311bd] = 0;
        puVar7[0x311ba] = 0;
        puVar7[0x311bb] = 0;
        puVar7[0x311c0] = 0;
        puVar7[0x311c1] = 0;
        puVar7[0x311be] = 0;
        puVar7[0x311bf] = 0;
        puVar7[0x311b4] = 0;
        puVar7[0x311b5] = 0;
        puVar7[0x311b2] = 0;
        puVar7[0x311b3] = 0;
        puVar7[0x311b8] = 0;
        puVar7[0x311b9] = 0;
        puVar7[0x311b6] = 0;
        puVar7[0x311b7] = 0;
        puVar7[0x311ac] = 0;
        puVar7[0x311ad] = 0;
        puVar7[0x311aa] = 0;
        puVar7[0x311ab] = 0;
        puVar7[0x311b0] = 0;
        puVar7[0x311b1] = 0;
        puVar7[0x311ae] = 0;
        puVar7[0x311af] = 0;
        puVar7[0x311a4] = 0;
        puVar7[0x311a5] = 0;
        puVar7[0x311a2] = 0;
        puVar7[0x311a3] = 0;
        puVar7[0x311a8] = 0;
        puVar7[0x311a9] = 0;
        puVar7[0x311a6] = 0;
        puVar7[0x311a7] = 0;
        puVar7[0x3119c] = 0;
        puVar7[0x3119d] = 0;
        puVar7[0x3119a] = 0;
        puVar7[0x3119b] = 0;
        puVar7[0x311a0] = 0;
        puVar7[0x311a1] = 0;
        puVar7[0x3119e] = 0;
        puVar7[0x3119f] = 0;
        puVar7[0x31194] = 0;
        puVar7[0x31195] = 0;
        puVar7[0x31192] = 0;
        puVar7[0x31193] = 0;
        puVar7[0x31198] = 0;
        puVar7[0x31199] = 0;
        puVar7[0x31196] = 0;
        puVar7[0x31197] = 0;
        puVar7[0x3118c] = 0;
        puVar7[0x3118d] = 0;
        puVar7[0x3118a] = 0;
        puVar7[0x3118b] = 0;
        puVar7[0x31190] = 0;
        puVar7[0x31191] = 0;
        puVar7[0x3118e] = 0;
        puVar7[0x3118f] = 0;
        puVar7[0x31184] = 0;
        puVar7[0x31185] = 0;
        puVar7[0x31182] = 0;
        puVar7[0x31183] = 0;
        puVar7[0x31188] = 0;
        puVar7[0x31189] = 0;
        puVar7[0x31186] = 0;
        puVar7[0x31187] = 0;
        puVar7[0x3117c] = 0;
        puVar7[0x3117d] = 0;
        puVar7[0x3117a] = 0;
        puVar7[0x3117b] = 0;
        puVar7[0x31180] = 0;
        puVar7[0x31181] = 0;
        puVar7[0x3117e] = 0;
        puVar7[0x3117f] = 0;
        puVar7[0x31174] = 0;
        puVar7[0x31175] = 0;
        puVar7[0x31172] = 0;
        puVar7[0x31173] = 0;
        puVar7[0x31178] = 0;
        puVar7[0x31179] = 0;
        puVar7[0x31176] = 0;
        puVar7[0x31177] = 0;
        puVar7[0x3116c] = 0;
        puVar7[0x3116d] = 0;
        puVar7[0x3116a] = 0;
        puVar7[0x3116b] = 0;
        puVar7[0x31170] = 0;
        puVar7[0x31171] = 0;
        puVar7[0x3116e] = 0;
        puVar7[0x3116f] = 0;
        puVar7[0x31164] = 0;
        puVar7[0x31165] = 0;
        puVar7[0x31162] = 0;
        puVar7[0x31163] = 0;
        puVar7[0x31168] = 0;
        puVar7[0x31169] = 0;
        puVar7[0x31166] = 0;
        puVar7[0x31167] = 0;
        puVar7[0x31160] = 0;
        puVar7[0x31161] = 0;
        puVar7[0x3115e] = 0;
        puVar7[0x3115f] = 0;
        *(undefined4 *)((long)puVar7 + 0xc473f) = 0;
        puVar7[0x311ce] = 0;
        puVar7[0x311cf] = 0;
        _bzero(puVar7 + 0x311d2,0x7243);
        *(undefined1 *)(puVar7 + 0x32e6a) = 0;
        puVar7[0x32e68] = 0;
        puVar7[0x32e69] = 0;
        puVar7[0x32e66] = 0;
        puVar7[0x32e67] = 0;
        puVar7[0x32e64] = 0;
        puVar7[0x32e65] = 0;
        puVar7[0x32e74] = 0;
        puVar7[0x32e75] = 0;
        puVar7[0x32e78] = 0;
        puVar7[0x32e79] = 0;
        puVar7[0x32e76] = 0;
        puVar7[0x32e77] = 0;
        *(undefined1 *)(puVar7 + 0x32e7a) = 0;
        puVar7[0x32e82] = 0;
        puVar7[0x32e83] = 0;
        puVar15[0] = 0;
        puVar15[1] = 0;
        puVar7[0x32e86] = 0;
        puVar7[0x32e87] = 0;
        puVar7[0x32e84] = 0;
        puVar7[0x32e85] = 0;
        puVar7[0x32e8a] = 0;
        puVar7[0x32e8b] = 0;
        puVar7[0x32e88] = 0;
        puVar7[0x32e89] = 0;
        puVar7[0x32e8e] = 0;
        puVar7[0x32e8f] = 0;
        puVar7[0x32e8c] = 0;
        puVar7[0x32e8d] = 0;
        puVar7[0x32e92] = 0;
        puVar7[0x32e93] = 0;
        puVar7[0x32e90] = 0;
        puVar7[0x32e91] = 0;
        *(undefined8 *)((long)puVar7 + 0xcba51) = 0;
        *(undefined8 *)((long)puVar7 + 0xcba49) = 0;
        puVar7[0x32e9a] = 0;
        puVar7[0x32e9b] = 0;
        puVar7[0x32e98] = 0;
        puVar7[0x32e99] = 0;
        puVar7[0x32e9e] = 0;
        puVar7[0x32e9f] = 0;
        puVar7[0x32e9c] = 0;
        puVar7[0x32e9d] = 0;
        puVar7[0x32ea2] = 0;
        puVar7[0x32ea3] = 0;
        puVar7[0x32ea0] = 0;
        puVar7[0x32ea1] = 0;
        *(undefined4 *)((long)puVar7 + 0xcba8f) = 0;
        *(undefined8 *)((long)puVar7 + 0xcbaa1) = 0;
        puVar7[0x32ea5] = 0;
        puVar7[0x32ea6] = 0;
        puVar7[0x32ea7] = 0;
        puVar7[0x32ea8] = 0;
        puVar7[0x32ead] = 0;
        puVar7[0x32eae] = 0;
        puVar7[0x32eab] = 0;
        puVar7[0x32eac] = 0;
        *(undefined1 *)(puVar7 + 0x32eb1) = 0;
        puVar7[0x32eaf] = 0;
        puVar7[0x32eb0] = 0;
        puVar7[0x32eb4] = 0;
        puVar7[0x32eb5] = 0;
        puVar7[0x32eb2] = 0;
        puVar7[0x32eb3] = 0;
        puVar7[0x32eb8] = 0;
        puVar7[0x32eb9] = 0;
        puVar7[0x32eb6] = 0;
        puVar7[0x32eb7] = 0;
        FUN_109ec72ac();
        func_0x000109e26a2c();
        func_0x000109ec5dac(puVar13,0);
        puVar7[0x692d] = *param_2;
        *(char *)((long)puVar7 + 0x1b58a) = (char)param_2[1];
        uVar16 = *(undefined8 *)((long)param_2 + 5);
        *(undefined8 *)(puVar7 + 0x6d65) = *(undefined8 *)((long)param_2 + 0xd);
        *(undefined8 *)(puVar7 + 0x6d63) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x15);
        *(undefined8 *)(puVar7 + 0x6d69) = *(undefined8 *)((long)param_2 + 0x1d);
        *(undefined8 *)(puVar7 + 0x6d67) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x25);
        *(undefined8 *)(puVar7 + 0x6d6d) = *(undefined8 *)((long)param_2 + 0x2d);
        *(undefined8 *)(puVar7 + 0x6d6b) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x35);
        *(undefined8 *)(puVar7 + 0x6d71) = *(undefined8 *)((long)param_2 + 0x3d);
        *(undefined8 *)(puVar7 + 0x6d6f) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x45);
        *(undefined8 *)(puVar7 + 0x6d75) = *(undefined8 *)((long)param_2 + 0x4d);
        *(undefined8 *)(puVar7 + 0x6d73) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x55);
        *(undefined8 *)(puVar7 + 0x6d79) = *(undefined8 *)((long)param_2 + 0x5d);
        *(undefined8 *)(puVar7 + 0x6d77) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x65);
        *(undefined8 *)(puVar7 + 0x6d7d) = *(undefined8 *)((long)param_2 + 0x6d);
        *(undefined8 *)(puVar7 + 0x6d7b) = uVar16;
        *(undefined1 *)((long)puVar7 + 0x1b58b) = *(undefined1 *)((long)param_2 + 0x76);
        uVar17 = *(undefined8 *)((long)param_2 + 0x7d);
        uVar16 = *(undefined8 *)((long)param_2 + 0x75);
        *(ulong *)(puVar7 + 0x6d81) =
             CONCAT17(*(undefined1 *)((long)param_2 + 0x85),(int7)((ulong)uVar17 >> 8));
        *(ulong *)(puVar7 + 0x6d7f) =
             CONCAT17((char)uVar17,
                      CONCAT16((char)((ulong)uVar16 >> 0x38),
                               CONCAT15((char)((ulong)uVar16 >> 0x30),
                                        CONCAT14((char)((ulong)uVar16 >> 0x28),
                                                 CONCAT13((char)((ulong)uVar16 >> 0x20),
                                                          CONCAT12((char)((ulong)uVar16 >> 0x18),
                                                                   CONCAT11((char)((ulong)uVar16 >>
                                                                                  0x10),(char)uVar16
                                                                           )))))));
        uVar16 = *(undefined8 *)((long)param_2 + 0x86);
        *(undefined8 *)(puVar7 + 0x6d85) = *(undefined8 *)((long)param_2 + 0x8e);
        *(undefined8 *)(puVar7 + 0x6d83) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0x96);
        *(undefined8 *)(puVar7 + 0x6d89) = *(undefined8 *)((long)param_2 + 0x9e);
        *(undefined8 *)(puVar7 + 0x6d87) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0xa6);
        *(undefined8 *)(puVar7 + 0x6d8d) = *(undefined8 *)((long)param_2 + 0xae);
        *(undefined8 *)(puVar7 + 0x6d8b) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0xb6);
        *(undefined8 *)(puVar7 + 0x6d91) = *(undefined8 *)((long)param_2 + 0xbe);
        *(undefined8 *)(puVar7 + 0x6d8f) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0xc6);
        *(undefined8 *)(puVar7 + 0x6d95) = *(undefined8 *)((long)param_2 + 0xce);
        *(undefined8 *)(puVar7 + 0x6d93) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0xd6);
        *(undefined8 *)(puVar7 + 0x6d99) = *(undefined8 *)((long)param_2 + 0xde);
        *(undefined8 *)(puVar7 + 0x6d97) = uVar16;
        uVar16 = *(undefined8 *)((long)param_2 + 0xe6);
        *(undefined8 *)(puVar7 + 0x6d9d) = *(undefined8 *)((long)param_2 + 0xee);
        *(undefined8 *)(puVar7 + 0x6d9b) = uVar16;
        *(undefined8 *)(puVar7 + 0x6d9f) = *(undefined8 *)((long)param_2 + 0xf6);
        puVar7[0x6da1] = *(uint *)((long)param_2 + 0xfe);
        *(undefined1 *)(puVar7 + 0x6da2) = *(undefined1 *)((long)param_2 + 0x102);
        *(undefined1 *)((long)puVar7 + 0x1b689) = *(undefined1 *)((long)param_2 + 0x103);
        *(char *)((long)puVar7 + 0x1b68a) = (char)param_2[0x41];
        *(undefined1 *)((long)puVar7 + 0x1a4cb) = 1;
        *(undefined1 *)((long)puVar7 + 0x1a4bd) = 1;
        puVar7[0x69e0] = 0xffff;
        puVar7[0x69e1] = 0x400;
        puVar7[0x69de] = 0xffff;
        puVar7[0x69df] = 0xffff;
        puVar7[0x69e4] = 0x400;
        puVar7[0x69e5] = 0x8000;
        puVar7[0x69e2] = 0x400;
        puVar7[0x69e3] = 0x40;
        puVar7[0x69e8] = 0x40;
        puVar7[0x69e9] = 0x200;
        puVar7[0x69e6] = 0x200;
        puVar7[0x69e7] = 0x200;
        puVar7[0x69db] = 0x20;
        puVar7[0x68fe] = 0x4000;
        puVar7[0x68ff] = 0;
        puVar7[0x68f1] = 0x4000;
        puVar7[0x68f2] = 0;
        puVar7[0x68f3] = 0;
        puVar7[0x6902] = 8;
        puVar7[0x6903] = 8;
        puVar7[0x6900] = 0x400;
        puVar7[0x6901] = 8;
        puVar7[0x68fd] = 0xc;
        puVar7[0x6918] = 4;
        puVar7[0x6943] = 7;
        puVar7[0x683a] = 8;
        puVar7[0x683b] = 0;
        puVar7[0x6827] = 0;
        puVar7[0x6828] = 0x20;
        puVar7[0x6829] = 0;
        puVar7[0x6941] = 4;
        puVar7[0x6942] = 0xfffffff8;
        puVar7[0x693e] = 4;
        puVar7[0x6927] = 0x100000;
        puVar7[0x6925] = 0x10;
        puVar7[0x6926] = 0x10;
        puVar7[0x684a] = 0x10;
        puVar7[0x6860] = 0x400;
        puVar7[0x685e] = 0x4000;
        puVar7[0x685f] = 0;
        puVar7[0x6851] = 0x4000;
        puVar7[0x6852] = 0;
        puVar7[0x6853] = 0x40;
        puVar7[0x6864] = 0x10;
        puVar7[0x685d] = 0x400;
        puVar7[0x68e0] = 0x400;
        puVar7[0x68de] = 0x4000;
        puVar7[0x68df] = 0;
        puVar7[0x68d1] = 0x4000;
        puVar7[0x68d2] = 0x3c;
        puVar7[0x68d3] = 0;
        puVar7[0x68e4] = 0x10;
        puVar7[0x68dd] = 0x400;
        puVar7[0x6922] = 0x54;
        puVar7[0x6923] = 0x100000;
        puVar7[0x6920] = 0xf;
        puVar7[0x6921] = 0x800;
        *(undefined2 *)((long)puVar7 + 0x1a542) = 1;
        puVar7[0x6a2a] = 0x20;
        puVar7[0x6929] = 0x18000;
        *(undefined1 *)((long)puVar7 + 0x1a8e6) = 0;
        *(undefined1 *)((long)puVar7 + 0xcba27) = 1;
        *(undefined2 *)((long)puVar7 + 0xcba05) = 0x101;
        *(undefined1 *)((long)puVar7 + 0xcba25) = 1;
        *(undefined1 *)(puVar7 + 0x32ea8) = 1;
        *(undefined2 *)((long)puVar7 + 0xcba16) = 0x101;
        *(undefined2 *)((long)puVar7 + 0xcba52) = 0x101;
        puVar7[0x32e90] = 0x1010101;
        puVar7[0x32eab] = 0x1000;
        *(undefined1 *)((long)puVar7 + 0xcba6a) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba71) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba7a) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba79) = 1;
        *(undefined1 *)((long)puVar7 + 0xcbaa3) = 1;
        *(undefined1 *)(puVar7 + 0x32e89) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba69) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba92) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba91) = 1;
        *(undefined1 *)(puVar7 + 0x32e81) = 1;
        *(undefined1 *)((long)puVar7 + 0xcbac1) = 1;
        puVar7[0x32ea5] = 0x20;
        puVar7[0x32ea6] = 0x20;
        puVar7[0x32ea7] = 0x20;
        if (*param_2 < 0x79) {
          *(undefined1 *)((long)puVar7 + 0xcba2b) = 1;
          *(undefined1 *)((long)puVar7 + 0xcba23) = 1;
          *(undefined1 *)((long)puVar7 + 0xcba1f) = 1;
          *(undefined2 *)((long)puVar7 + 0xcba21) = 0x101;
          *(undefined2 *)((long)puVar7 + 0xcba1d) = 0x101;
        }
        lVar9 = 0x1a7c0;
        bVar2 = *(byte *)((long)param_2 + 0x106);
        bVar3 = *(byte *)((long)param_2 + 0x107);
        bVar4 = *(byte *)((long)param_2 + 0x105);
        lVar6 = 0x1a7d8;
        lVar14 = 0xf0;
        do {
          if (*(long *)((long)puVar7 + lVar6) == 0) {
            *(uint **)((long)puVar7 + lVar6) = puVar15;
          }
          pbVar1 = (byte *)((long)puVar7 + lVar9);
          *pbVar1 = bVar2;
          pbVar1[1] = bVar3;
          pbVar1[2] = bVar2;
          pbVar1[4] = (bVar2 | *(byte *)((long)param_2 + 0x107)) & 1;
          pbVar1[3] = bVar4;
          lVar6 = lVar6 + 0x28;
          lVar9 = lVar9 + 0x28;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
        return puVar7;
      }
      lVar6 = (long)param_2 << 3;
      __Znwm();
      puVar7 = *(uint **)param_1;
      *(long *)param_1 = lVar6;
      if (puVar7 != (uint *)0x0) {
        __ZdlPv();
      }
      puVar15 = (uint *)0x0;
      *(uint **)(param_1 + 2) = param_2;
      do {
        *(undefined8 *)(*(long *)param_1 + (long)puVar15 * 8) = 0;
        puVar15 = (uint *)((long)puVar15 + 1);
      } while (param_2 != puVar15);
      plVar10 = *(long **)(param_1 + 4);
      if (plVar10 != (long *)0x0) {
        puVar15 = (uint *)plVar10[1];
        uVar8 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar8) == 0) {
          puVar15 = (uint *)((ulong)puVar15 & uVar8);
        }
        else if (param_2 <= puVar15) {
          uVar5 = 0;
          if (param_2 != (uint *)0x0) {
            uVar5 = (ulong)puVar15 / (ulong)param_2;
          }
          puVar15 = (uint *)((long)puVar15 - uVar5 * (long)param_2);
        }
        *(uint **)(*(long *)param_1 + (long)puVar15 * 8) = param_1 + 4;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          puVar13 = (uint *)plVar11[1];
          if (((ulong)param_2 & uVar8) == 0) {
            puVar13 = (uint *)((ulong)puVar13 & uVar8);
          }
          else if (param_2 <= puVar13) {
            uVar5 = 0;
            if (param_2 != (uint *)0x0) {
              uVar5 = (ulong)puVar13 / (ulong)param_2;
            }
            puVar13 = (uint *)((long)puVar13 - uVar5 * (long)param_2);
          }
          plVar12 = plVar11;
          if (puVar13 != puVar15) {
            lVar6 = *(long *)param_1;
            if (*(long *)(lVar6 + (long)puVar13 * 8) == 0) {
              *(long **)(lVar6 + (long)puVar13 * 8) = plVar10;
              puVar15 = puVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar6 + (long)puVar13 * 8);
              **(long **)(lVar6 + (long)puVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    return puVar7;
  }
  if (param_2 < puVar15) {
    puVar7 = (uint *)(long)((float)*(ulong *)(param_1 + 6) / (float)param_1[8]);
    if ((puVar15 < (uint *)0x3) || (((ulong)puVar15 & (long)puVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((uint *)0x1 < puVar7) {
      puVar7 = (uint *)(1L << (-LZCOUNT((long)puVar7 + -1) & 0x3fU));
    }
    if (param_2 <= puVar7) {
      param_2 = puVar7;
    }
    if (param_2 < puVar15) goto LAB_109f6de60;
  }
  return puVar7;
}



/* Entry: 109f6dee8; end: 109f6e023;  */

undefined8 * FUN_109f6dee8(long *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_2 == (uint *)0x0) {
    puVar7 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      puVar7 = (undefined8 *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      *puVar7 = &PTR_FUN_110b935a8;
      puVar7[2] = 0;
      *(undefined2 *)(puVar7 + 3) = 0;
      puVar7[0x36d5] = 0;
      *(undefined4 *)(puVar7 + 0x36d6) = 0;
      puVar7[0x1888d] = 0;
      *(undefined4 *)(puVar7 + 0x1888e) = 0;
      *(undefined4 *)((long)puVar7 + 0xc44dc) = 0;
      *(undefined4 *)(puVar7 + 0x1889c) = 0;
      *(undefined8 *)((long)puVar7 + 0xcb9b4) = 0;
      *(undefined8 *)((long)puVar7 + 0xcb9ac) = 0;
      *(undefined8 *)((long)puVar7 + 0xcb9c4) = 0;
      *(undefined8 *)((long)puVar7 + 0xcb9bc) = 0;
      puVar7[0x1973e] = 0;
      *(undefined4 *)(puVar7 + 0x1973f) = 0;
      _bzero((undefined *)((long)puVar7 + 0x1c),0x19ff8);
      _bzero(puVar7 + 0x3403,0x922);
      *(undefined1 *)((long)puVar7 + 0x1a944) = 0;
      *(undefined8 *)((long)puVar7 + 0x1a93c) = 0;
      _bzero(puVar7 + 0x3529,0xc3a);
      *(undefined8 *)((long)puVar7 + 0x1b69c) = 0;
      *(undefined8 *)((long)puVar7 + 0x1b694) = 0;
      puVar7[0x36d0] = 0;
      puVar7[0x36cf] = 0;
      puVar7[0x36d2] = 0;
      puVar7[0x36d1] = 0;
      puVar7[0x36cc] = 0;
      puVar7[0x36cb] = 0;
      puVar7[0x36ce] = 0;
      puVar7[0x36cd] = 0;
      puVar7[0x36c8] = 0;
      puVar7[0x36c7] = 0;
      puVar7[0x36ca] = 0;
      puVar7[0x36c9] = 0;
      puVar7[0x36c4] = 0;
      puVar7[0x36c3] = 0;
      puVar7[0x36c6] = 0;
      puVar7[0x36c5] = 0;
      puVar7[0x36c0] = 0;
      puVar7[0x36bf] = 0;
      puVar7[0x36c2] = 0;
      puVar7[0x36c1] = 0;
      puVar7[0x36bc] = 0;
      puVar7[0x36bb] = 0;
      puVar7[0x36be] = 0;
      puVar7[0x36bd] = 0;
      puVar7[0x36b8] = 0;
      puVar7[0x36b7] = 0;
      puVar7[0x36ba] = 0;
      puVar7[0x36b9] = 0;
      puVar7[0x36b4] = 0;
      puVar7[0x36b3] = 0;
      puVar7[0x36b6] = 0;
      puVar7[0x36b5] = 0;
      puVar7[0x36b2] = 0;
      puVar7[0x36b1] = 0;
      _bzero(puVar7 + 0x36d7,0x624);
      _bzero(puVar7 + 0x379c,0x84cec);
      _bzero(puVar7 + 0x1413a,0x23a92);
      *(undefined2 *)(puVar7 + 0x1889b) = 0;
      puVar7[0x18898] = 0;
      puVar7[0x18897] = 0;
      puVar7[0x1889a] = 0;
      puVar7[0x18899] = 0;
      puVar7[0x18894] = 0;
      puVar7[0x18893] = 0;
      puVar7[0x18896] = 0;
      puVar7[0x18895] = 0;
      puVar7[0x18890] = 0;
      puVar7[0x1888f] = 0;
      puVar7[0x18892] = 0;
      puVar7[0x18891] = 0;
      puVar7[0x1889e] = 0;
      puVar7[0x1889d] = 0;
      puVar7[0x188a0] = 0;
      puVar7[0x1889f] = 0;
      puVar7[0x188a2] = 0;
      puVar7[0x188a1] = 0;
      puVar7[0x188a4] = 0;
      puVar7[0x188a3] = 0;
      puVar7[0x188a6] = 0;
      puVar7[0x188a5] = 0;
      puVar7[0x188a8] = 0;
      puVar7[0x188a7] = 0;
      puVar7[0x188aa] = 0;
      puVar7[0x188a9] = 0;
      *(undefined2 *)(puVar7 + 0x188ab) = 0;
      *(undefined8 *)((long)puVar7 + 0xc455c) = 0;
      *(undefined8 *)((long)puVar7 + 0xc456c) = 0;
      *(undefined8 *)((long)puVar7 + 0xc4564) = 0;
      *(undefined8 *)((long)puVar7 + 0xc472f) = 0;
      *(undefined8 *)((long)puVar7 + 0xc4727) = 0;
      *(undefined1 *)((long)puVar7 + 0xc4574) = 0;
      puVar7[0x188e2] = 0;
      puVar7[0x188e1] = 0;
      puVar7[0x188e4] = 0;
      puVar7[0x188e3] = 0;
      puVar7[0x188de] = 0;
      puVar7[0x188dd] = 0;
      puVar7[0x188e0] = 0;
      puVar7[0x188df] = 0;
      puVar7[0x188da] = 0;
      puVar7[0x188d9] = 0;
      puVar7[0x188dc] = 0;
      puVar7[0x188db] = 0;
      puVar7[0x188d6] = 0;
      puVar7[0x188d5] = 0;
      puVar7[0x188d8] = 0;
      puVar7[0x188d7] = 0;
      puVar7[0x188d2] = 0;
      puVar7[0x188d1] = 0;
      puVar7[0x188d4] = 0;
      puVar7[0x188d3] = 0;
      puVar7[0x188ce] = 0;
      puVar7[0x188cd] = 0;
      puVar7[0x188d0] = 0;
      puVar7[0x188cf] = 0;
      puVar7[0x188ca] = 0;
      puVar7[0x188c9] = 0;
      puVar7[0x188cc] = 0;
      puVar7[0x188cb] = 0;
      puVar7[0x188c6] = 0;
      puVar7[0x188c5] = 0;
      puVar7[0x188c8] = 0;
      puVar7[0x188c7] = 0;
      puVar7[0x188c2] = 0;
      puVar7[0x188c1] = 0;
      puVar7[0x188c4] = 0;
      puVar7[0x188c3] = 0;
      puVar7[0x188be] = 0;
      puVar7[0x188bd] = 0;
      puVar7[0x188c0] = 0;
      puVar7[0x188bf] = 0;
      puVar7[0x188ba] = 0;
      puVar7[0x188b9] = 0;
      puVar7[0x188bc] = 0;
      puVar7[0x188bb] = 0;
      puVar7[0x188b6] = 0;
      puVar7[0x188b5] = 0;
      puVar7[0x188b8] = 0;
      puVar7[0x188b7] = 0;
      puVar7[0x188b2] = 0;
      puVar7[0x188b1] = 0;
      puVar7[0x188b4] = 0;
      puVar7[0x188b3] = 0;
      puVar7[0x188b0] = 0;
      puVar7[0x188af] = 0;
      *(undefined4 *)((long)puVar7 + 0xc473f) = 0;
      puVar7[0x188e7] = 0;
      _bzero(puVar7 + 0x188e9,0x7243);
      *(undefined1 *)(puVar7 + 0x19735) = 0;
      puVar7[0x19734] = 0;
      puVar7[0x19733] = 0;
      puVar7[0x19732] = 0;
      puVar7[0x1973a] = 0;
      puVar7[0x1973c] = 0;
      puVar7[0x1973b] = 0;
      *(undefined1 *)(puVar7 + 0x1973d) = 0;
      puVar7[0x19741] = 0;
      puVar7[0x19740] = 0;
      puVar7[0x19743] = 0;
      puVar7[0x19742] = 0;
      puVar7[0x19745] = 0;
      puVar7[0x19744] = 0;
      puVar7[0x19747] = 0;
      puVar7[0x19746] = 0;
      puVar7[0x19749] = 0;
      puVar7[0x19748] = 0;
      *(undefined8 *)((long)puVar7 + 0xcba51) = 0;
      *(undefined8 *)((long)puVar7 + 0xcba49) = 0;
      puVar7[0x1974d] = 0;
      puVar7[0x1974c] = 0;
      puVar7[0x1974f] = 0;
      puVar7[0x1974e] = 0;
      puVar7[0x19751] = 0;
      puVar7[0x19750] = 0;
      *(undefined4 *)((long)puVar7 + 0xcba8f) = 0;
      *(undefined8 *)((long)puVar7 + 0xcbaa1) = 0;
      *(undefined8 *)((long)puVar7 + 0xcba94) = 0;
      *(undefined8 *)((long)puVar7 + 0xcba9c) = 0;
      *(undefined8 *)((long)puVar7 + 0xcbab4) = 0;
      *(undefined8 *)((long)puVar7 + 0xcbaac) = 0;
      *(undefined1 *)((long)puVar7 + 0xcbac4) = 0;
      *(undefined8 *)((long)puVar7 + 0xcbabc) = 0;
      puVar7[0x1975a] = 0;
      puVar7[0x19759] = 0;
      puVar7[0x1975c] = 0;
      puVar7[0x1975b] = 0;
      FUN_109ec72ac();
      func_0x000109e26a2c();
      func_0x000109ec5dac(puVar7 + 2,0);
      *(uint *)((long)puVar7 + 0x1a4b4) = *param_2;
      *(char *)((long)puVar7 + 0x1b58a) = (char)param_2[1];
      uVar16 = *(undefined8 *)((long)param_2 + 5);
      *(undefined8 *)((long)puVar7 + 0x1b594) = *(undefined8 *)((long)param_2 + 0xd);
      *(undefined8 *)((long)puVar7 + 0x1b58c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x15);
      *(undefined8 *)((long)puVar7 + 0x1b5a4) = *(undefined8 *)((long)param_2 + 0x1d);
      *(undefined8 *)((long)puVar7 + 0x1b59c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x25);
      *(undefined8 *)((long)puVar7 + 0x1b5b4) = *(undefined8 *)((long)param_2 + 0x2d);
      *(undefined8 *)((long)puVar7 + 0x1b5ac) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x35);
      *(undefined8 *)((long)puVar7 + 0x1b5c4) = *(undefined8 *)((long)param_2 + 0x3d);
      *(undefined8 *)((long)puVar7 + 0x1b5bc) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x45);
      *(undefined8 *)((long)puVar7 + 0x1b5d4) = *(undefined8 *)((long)param_2 + 0x4d);
      *(undefined8 *)((long)puVar7 + 0x1b5cc) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x55);
      *(undefined8 *)((long)puVar7 + 0x1b5e4) = *(undefined8 *)((long)param_2 + 0x5d);
      *(undefined8 *)((long)puVar7 + 0x1b5dc) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x65);
      *(undefined8 *)((long)puVar7 + 0x1b5f4) = *(undefined8 *)((long)param_2 + 0x6d);
      *(undefined8 *)((long)puVar7 + 0x1b5ec) = uVar16;
      *(undefined1 *)((long)puVar7 + 0x1b58b) = *(undefined1 *)((long)param_2 + 0x76);
      uVar17 = *(undefined8 *)((long)param_2 + 0x7d);
      uVar16 = *(undefined8 *)((long)param_2 + 0x75);
      *(ulong *)((long)puVar7 + 0x1b604) =
           CONCAT17(*(undefined1 *)((long)param_2 + 0x85),(int7)((ulong)uVar17 >> 8));
      *(ulong *)((long)puVar7 + 0x1b5fc) =
           CONCAT17((char)uVar17,
                    CONCAT16((char)((ulong)uVar16 >> 0x38),
                             CONCAT15((char)((ulong)uVar16 >> 0x30),
                                      CONCAT14((char)((ulong)uVar16 >> 0x28),
                                               CONCAT13((char)((ulong)uVar16 >> 0x20),
                                                        CONCAT12((char)((ulong)uVar16 >> 0x18),
                                                                 CONCAT11((char)((ulong)uVar16 >>
                                                                                0x10),(char)uVar16))
                                                       )))));
      uVar16 = *(undefined8 *)((long)param_2 + 0x86);
      *(undefined8 *)((long)puVar7 + 0x1b614) = *(undefined8 *)((long)param_2 + 0x8e);
      *(undefined8 *)((long)puVar7 + 0x1b60c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0x96);
      *(undefined8 *)((long)puVar7 + 0x1b624) = *(undefined8 *)((long)param_2 + 0x9e);
      *(undefined8 *)((long)puVar7 + 0x1b61c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0xa6);
      *(undefined8 *)((long)puVar7 + 0x1b634) = *(undefined8 *)((long)param_2 + 0xae);
      *(undefined8 *)((long)puVar7 + 0x1b62c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0xb6);
      *(undefined8 *)((long)puVar7 + 0x1b644) = *(undefined8 *)((long)param_2 + 0xbe);
      *(undefined8 *)((long)puVar7 + 0x1b63c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0xc6);
      *(undefined8 *)((long)puVar7 + 0x1b654) = *(undefined8 *)((long)param_2 + 0xce);
      *(undefined8 *)((long)puVar7 + 0x1b64c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0xd6);
      *(undefined8 *)((long)puVar7 + 0x1b664) = *(undefined8 *)((long)param_2 + 0xde);
      *(undefined8 *)((long)puVar7 + 0x1b65c) = uVar16;
      uVar16 = *(undefined8 *)((long)param_2 + 0xe6);
      *(undefined8 *)((long)puVar7 + 0x1b674) = *(undefined8 *)((long)param_2 + 0xee);
      *(undefined8 *)((long)puVar7 + 0x1b66c) = uVar16;
      *(undefined8 *)((long)puVar7 + 0x1b67c) = *(undefined8 *)((long)param_2 + 0xf6);
      *(undefined4 *)((long)puVar7 + 0x1b684) = *(undefined4 *)((long)param_2 + 0xfe);
      *(undefined1 *)(puVar7 + 0x36d1) = *(undefined1 *)((long)param_2 + 0x102);
      *(undefined1 *)((long)puVar7 + 0x1b689) = *(undefined1 *)((long)param_2 + 0x103);
      *(char *)((long)puVar7 + 0x1b68a) = (char)param_2[0x41];
      *(undefined1 *)((long)puVar7 + 0x1a4cb) = 1;
      *(undefined1 *)((long)puVar7 + 0x1a4bd) = 1;
      puVar7[0x34f0] = 0x4000000ffff;
      puVar7[0x34ef] = 0xffff0000ffff;
      puVar7[0x34f2] = 0x800000000400;
      puVar7[0x34f1] = 0x4000000400;
      puVar7[0x34f4] = 0x20000000040;
      puVar7[0x34f3] = 0x20000000200;
      *(undefined4 *)((long)puVar7 + 0x1a76c) = 0x20;
      puVar7[0x347f] = 0x4000;
      *(undefined8 *)((long)puVar7 + 0x1a3c4) = 0x4000;
      *(undefined4 *)((long)puVar7 + 0x1a3cc) = 0;
      puVar7[0x3481] = 0x800000008;
      puVar7[0x3480] = 0x800000400;
      *(undefined4 *)((long)puVar7 + 0x1a3f4) = 0xc;
      *(undefined4 *)(puVar7 + 0x348c) = 4;
      *(undefined4 *)((long)puVar7 + 0x1a50c) = 7;
      puVar7[0x341d] = 8;
      *(undefined8 *)((long)puVar7 + 0x1a09c) = 0x2000000000;
      *(undefined4 *)((long)puVar7 + 0x1a0a4) = 0;
      *(undefined8 *)((long)puVar7 + 0x1a504) = 0xfffffff800000004;
      *(undefined4 *)(puVar7 + 0x349f) = 4;
      *(undefined4 *)((long)puVar7 + 0x1a49c) = 0x100000;
      *(undefined8 *)((long)puVar7 + 0x1a494) = 0x1000000010;
      *(undefined4 *)(puVar7 + 0x3425) = 0x10;
      *(undefined4 *)(puVar7 + 0x3430) = 0x400;
      puVar7[0x342f] = 0x4000;
      *(undefined8 *)((long)puVar7 + 0x1a144) = 0x4000;
      *(undefined4 *)((long)puVar7 + 0x1a14c) = 0x40;
      *(undefined4 *)(puVar7 + 0x3432) = 0x10;
      *(undefined4 *)((long)puVar7 + 0x1a174) = 0x400;
      *(undefined4 *)(puVar7 + 0x3470) = 0x400;
      puVar7[0x346f] = 0x4000;
      *(undefined8 *)((long)puVar7 + 0x1a344) = 0x3c00004000;
      *(undefined4 *)((long)puVar7 + 0x1a34c) = 0;
      *(undefined4 *)(puVar7 + 0x3472) = 0x10;
      *(undefined4 *)((long)puVar7 + 0x1a374) = 0x400;
      puVar7[0x3491] = 0x10000000000054;
      puVar7[0x3490] = 0x8000000000f;
      *(undefined2 *)((long)puVar7 + 0x1a542) = 1;
      *(undefined4 *)(puVar7 + 0x3515) = 0x20;
      *(undefined4 *)((long)puVar7 + 0x1a4a4) = 0x18000;
      *(undefined1 *)((long)puVar7 + 0x1a8e6) = 0;
      *(undefined1 *)((long)puVar7 + 0xcba27) = 1;
      *(undefined2 *)((long)puVar7 + 0xcba05) = 0x101;
      *(undefined1 *)((long)puVar7 + 0xcba25) = 1;
      *(undefined1 *)(puVar7 + 0x19754) = 1;
      *(undefined2 *)((long)puVar7 + 0xcba16) = 0x101;
      *(undefined2 *)((long)puVar7 + 0xcba52) = 0x101;
      *(undefined4 *)(puVar7 + 0x19748) = 0x1010101;
      *(undefined4 *)((long)puVar7 + 0xcbaac) = 0x1000;
      *(undefined1 *)((long)puVar7 + 0xcba6a) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba71) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba7a) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba79) = 1;
      *(undefined1 *)((long)puVar7 + 0xcbaa3) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba24) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba69) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba92) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba91) = 1;
      *(undefined1 *)((long)puVar7 + 0xcba04) = 1;
      *(undefined1 *)((long)puVar7 + 0xcbac1) = 1;
      *(undefined8 *)((long)puVar7 + 0xcba94) = 0x2000000020;
      *(undefined4 *)((long)puVar7 + 0xcba9c) = 0x20;
      if (*param_2 < 0x79) {
        *(undefined1 *)((long)puVar7 + 0xcba2b) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba23) = 1;
        *(undefined1 *)((long)puVar7 + 0xcba1f) = 1;
        *(undefined2 *)((long)puVar7 + 0xcba21) = 0x101;
        *(undefined2 *)((long)puVar7 + 0xcba1d) = 0x101;
      }
      lVar10 = 0x1a7c0;
      bVar2 = *(byte *)((long)param_2 + 0x106);
      bVar3 = *(byte *)((long)param_2 + 0x107);
      bVar4 = *(byte *)((long)param_2 + 0x105);
      lVar6 = 0x1a7d8;
      lVar15 = 0xf0;
      do {
        if (*(long *)((long)puVar7 + lVar6) == 0) {
          *(undefined8 **)((long)puVar7 + lVar6) = puVar7 + 0x19740;
        }
        pbVar1 = (byte *)((long)puVar7 + lVar10);
        *pbVar1 = bVar2;
        pbVar1[1] = bVar3;
        pbVar1[2] = bVar2;
        pbVar1[4] = (bVar2 | *(byte *)((long)param_2 + 0x107)) & 1;
        pbVar1[3] = bVar4;
        lVar6 = lVar6 + 0x28;
        lVar10 = lVar10 + 0x28;
        lVar15 = lVar15 + -0x28;
      } while (lVar15 != 0);
      return puVar7;
    }
    lVar6 = (long)param_2 << 3;
    __Znwm();
    puVar7 = (undefined8 *)*param_1;
    *param_1 = lVar6;
    if (puVar7 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    puVar8 = (uint *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar8 * 8) = 0;
      puVar8 = (uint *)((long)puVar8 + 1);
    } while (param_2 != puVar8);
    plVar11 = (long *)param_1[2];
    if (plVar11 != (long *)0x0) {
      puVar8 = (uint *)plVar11[1];
      uVar9 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar9) == 0) {
        puVar8 = (uint *)((ulong)puVar8 & uVar9);
      }
      else if (param_2 <= puVar8) {
        uVar5 = 0;
        if (param_2 != (uint *)0x0) {
          uVar5 = (ulong)puVar8 / (ulong)param_2;
        }
        puVar8 = (uint *)((long)puVar8 - uVar5 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar8 * 8) = param_1 + 2;
      plVar12 = (long *)*plVar11;
      while (plVar12 != (long *)0x0) {
        puVar14 = (uint *)plVar12[1];
        if (((ulong)param_2 & uVar9) == 0) {
          puVar14 = (uint *)((ulong)puVar14 & uVar9);
        }
        else if (param_2 <= puVar14) {
          uVar5 = 0;
          if (param_2 != (uint *)0x0) {
            uVar5 = (ulong)puVar14 / (ulong)param_2;
          }
          puVar14 = (uint *)((long)puVar14 - uVar5 * (long)param_2);
        }
        plVar13 = plVar12;
        if (puVar14 != puVar8) {
          lVar6 = *param_1;
          if (*(long *)(lVar6 + (long)puVar14 * 8) == 0) {
            *(long **)(lVar6 + (long)puVar14 * 8) = plVar11;
            puVar8 = puVar14;
          }
          else {
            *plVar11 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar6 + (long)puVar14 * 8);
            **(long **)(lVar6 + (long)puVar14 * 8) = (long)plVar12;
            plVar13 = plVar11;
          }
        }
        plVar11 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  return puVar7;
}



/* Entry: 109f6e024; end: 109f6e037;  */

undefined8 * FUN_109f6e024(undefined8 param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar5 = &PTR_FUN_110b935a8;
  puVar5[2] = 0;
  *(undefined2 *)(puVar5 + 3) = 0;
  puVar5[0x36d5] = 0;
  *(undefined4 *)(puVar5 + 0x36d6) = 0;
  puVar5[0x1888d] = 0;
  *(undefined4 *)(puVar5 + 0x1888e) = 0;
  *(undefined4 *)((long)puVar5 + 0xc44dc) = 0;
  *(undefined4 *)(puVar5 + 0x1889c) = 0;
  *(undefined8 *)((long)puVar5 + 0xcb9b4) = 0;
  *(undefined8 *)((long)puVar5 + 0xcb9ac) = 0;
  *(undefined8 *)((long)puVar5 + 0xcb9c4) = 0;
  *(undefined8 *)((long)puVar5 + 0xcb9bc) = 0;
  puVar5[0x1973e] = 0;
  *(undefined4 *)(puVar5 + 0x1973f) = 0;
  _bzero((undefined *)((long)puVar5 + 0x1c),0x19ff8);
  _bzero(puVar5 + 0x3403,0x922);
  *(undefined1 *)((long)puVar5 + 0x1a944) = 0;
  *(undefined8 *)((long)puVar5 + 0x1a93c) = 0;
  _bzero(puVar5 + 0x3529,0xc3a);
  *(undefined8 *)((long)puVar5 + 0x1b69c) = 0;
  *(undefined8 *)((long)puVar5 + 0x1b694) = 0;
  puVar5[0x36d0] = 0;
  puVar5[0x36cf] = 0;
  puVar5[0x36d2] = 0;
  puVar5[0x36d1] = 0;
  puVar5[0x36cc] = 0;
  puVar5[0x36cb] = 0;
  puVar5[0x36ce] = 0;
  puVar5[0x36cd] = 0;
  puVar5[0x36c8] = 0;
  puVar5[0x36c7] = 0;
  puVar5[0x36ca] = 0;
  puVar5[0x36c9] = 0;
  puVar5[0x36c4] = 0;
  puVar5[0x36c3] = 0;
  puVar5[0x36c6] = 0;
  puVar5[0x36c5] = 0;
  puVar5[0x36c0] = 0;
  puVar5[0x36bf] = 0;
  puVar5[0x36c2] = 0;
  puVar5[0x36c1] = 0;
  puVar5[0x36bc] = 0;
  puVar5[0x36bb] = 0;
  puVar5[0x36be] = 0;
  puVar5[0x36bd] = 0;
  puVar5[0x36b8] = 0;
  puVar5[0x36b7] = 0;
  puVar5[0x36ba] = 0;
  puVar5[0x36b9] = 0;
  puVar5[0x36b4] = 0;
  puVar5[0x36b3] = 0;
  puVar5[0x36b6] = 0;
  puVar5[0x36b5] = 0;
  puVar5[0x36b2] = 0;
  puVar5[0x36b1] = 0;
  _bzero(puVar5 + 0x36d7,0x624);
  _bzero(puVar5 + 0x379c,0x84cec);
  _bzero(puVar5 + 0x1413a,0x23a92);
  *(undefined2 *)(puVar5 + 0x1889b) = 0;
  puVar5[0x18898] = 0;
  puVar5[0x18897] = 0;
  puVar5[0x1889a] = 0;
  puVar5[0x18899] = 0;
  puVar5[0x18894] = 0;
  puVar5[0x18893] = 0;
  puVar5[0x18896] = 0;
  puVar5[0x18895] = 0;
  puVar5[0x18890] = 0;
  puVar5[0x1888f] = 0;
  puVar5[0x18892] = 0;
  puVar5[0x18891] = 0;
  puVar5[0x1889e] = 0;
  puVar5[0x1889d] = 0;
  puVar5[0x188a0] = 0;
  puVar5[0x1889f] = 0;
  puVar5[0x188a2] = 0;
  puVar5[0x188a1] = 0;
  puVar5[0x188a4] = 0;
  puVar5[0x188a3] = 0;
  puVar5[0x188a6] = 0;
  puVar5[0x188a5] = 0;
  puVar5[0x188a8] = 0;
  puVar5[0x188a7] = 0;
  puVar5[0x188aa] = 0;
  puVar5[0x188a9] = 0;
  *(undefined2 *)(puVar5 + 0x188ab) = 0;
  *(undefined8 *)((long)puVar5 + 0xc455c) = 0;
  *(undefined8 *)((long)puVar5 + 0xc456c) = 0;
  *(undefined8 *)((long)puVar5 + 0xc4564) = 0;
  *(undefined8 *)((long)puVar5 + 0xc472f) = 0;
  *(undefined8 *)((long)puVar5 + 0xc4727) = 0;
  *(undefined1 *)((long)puVar5 + 0xc4574) = 0;
  puVar5[0x188e2] = 0;
  puVar5[0x188e1] = 0;
  puVar5[0x188e4] = 0;
  puVar5[0x188e3] = 0;
  puVar5[0x188de] = 0;
  puVar5[0x188dd] = 0;
  puVar5[0x188e0] = 0;
  puVar5[0x188df] = 0;
  puVar5[0x188da] = 0;
  puVar5[0x188d9] = 0;
  puVar5[0x188dc] = 0;
  puVar5[0x188db] = 0;
  puVar5[0x188d6] = 0;
  puVar5[0x188d5] = 0;
  puVar5[0x188d8] = 0;
  puVar5[0x188d7] = 0;
  puVar5[0x188d2] = 0;
  puVar5[0x188d1] = 0;
  puVar5[0x188d4] = 0;
  puVar5[0x188d3] = 0;
  puVar5[0x188ce] = 0;
  puVar5[0x188cd] = 0;
  puVar5[0x188d0] = 0;
  puVar5[0x188cf] = 0;
  puVar5[0x188ca] = 0;
  puVar5[0x188c9] = 0;
  puVar5[0x188cc] = 0;
  puVar5[0x188cb] = 0;
  puVar5[0x188c6] = 0;
  puVar5[0x188c5] = 0;
  puVar5[0x188c8] = 0;
  puVar5[0x188c7] = 0;
  puVar5[0x188c2] = 0;
  puVar5[0x188c1] = 0;
  puVar5[0x188c4] = 0;
  puVar5[0x188c3] = 0;
  puVar5[0x188be] = 0;
  puVar5[0x188bd] = 0;
  puVar5[0x188c0] = 0;
  puVar5[0x188bf] = 0;
  puVar5[0x188ba] = 0;
  puVar5[0x188b9] = 0;
  puVar5[0x188bc] = 0;
  puVar5[0x188bb] = 0;
  puVar5[0x188b6] = 0;
  puVar5[0x188b5] = 0;
  puVar5[0x188b8] = 0;
  puVar5[0x188b7] = 0;
  puVar5[0x188b2] = 0;
  puVar5[0x188b1] = 0;
  puVar5[0x188b4] = 0;
  puVar5[0x188b3] = 0;
  puVar5[0x188b0] = 0;
  puVar5[0x188af] = 0;
  *(undefined4 *)((long)puVar5 + 0xc473f) = 0;
  puVar5[0x188e7] = 0;
  _bzero(puVar5 + 0x188e9,0x7243);
  *(undefined1 *)(puVar5 + 0x19735) = 0;
  puVar5[0x19734] = 0;
  puVar5[0x19733] = 0;
  puVar5[0x19732] = 0;
  puVar5[0x1973a] = 0;
  puVar5[0x1973c] = 0;
  puVar5[0x1973b] = 0;
  *(undefined1 *)(puVar5 + 0x1973d) = 0;
  puVar5[0x19741] = 0;
  puVar5[0x19740] = 0;
  puVar5[0x19743] = 0;
  puVar5[0x19742] = 0;
  puVar5[0x19745] = 0;
  puVar5[0x19744] = 0;
  puVar5[0x19747] = 0;
  puVar5[0x19746] = 0;
  puVar5[0x19749] = 0;
  puVar5[0x19748] = 0;
  *(undefined8 *)((long)puVar5 + 0xcba51) = 0;
  *(undefined8 *)((long)puVar5 + 0xcba49) = 0;
  puVar5[0x1974d] = 0;
  puVar5[0x1974c] = 0;
  puVar5[0x1974f] = 0;
  puVar5[0x1974e] = 0;
  puVar5[0x19751] = 0;
  puVar5[0x19750] = 0;
  *(undefined4 *)((long)puVar5 + 0xcba8f) = 0;
  *(undefined8 *)((long)puVar5 + 0xcbaa1) = 0;
  *(undefined8 *)((long)puVar5 + 0xcba94) = 0;
  *(undefined8 *)((long)puVar5 + 0xcba9c) = 0;
  *(undefined8 *)((long)puVar5 + 0xcbab4) = 0;
  *(undefined8 *)((long)puVar5 + 0xcbaac) = 0;
  *(undefined1 *)((long)puVar5 + 0xcbac4) = 0;
  *(undefined8 *)((long)puVar5 + 0xcbabc) = 0;
  puVar5[0x1975a] = 0;
  puVar5[0x19759] = 0;
  puVar5[0x1975c] = 0;
  puVar5[0x1975b] = 0;
  FUN_109ec72ac();
  func_0x000109e26a2c();
  func_0x000109ec5dac(puVar5 + 2,0);
  *(uint *)((long)puVar5 + 0x1a4b4) = *param_2;
  *(char *)((long)puVar5 + 0x1b58a) = (char)param_2[1];
  uVar9 = *(undefined8 *)((long)param_2 + 5);
  *(undefined8 *)((long)puVar5 + 0x1b594) = *(undefined8 *)((long)param_2 + 0xd);
  *(undefined8 *)((long)puVar5 + 0x1b58c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x15);
  *(undefined8 *)((long)puVar5 + 0x1b5a4) = *(undefined8 *)((long)param_2 + 0x1d);
  *(undefined8 *)((long)puVar5 + 0x1b59c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x25);
  *(undefined8 *)((long)puVar5 + 0x1b5b4) = *(undefined8 *)((long)param_2 + 0x2d);
  *(undefined8 *)((long)puVar5 + 0x1b5ac) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)puVar5 + 0x1b5c4) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)((long)puVar5 + 0x1b5bc) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x45);
  *(undefined8 *)((long)puVar5 + 0x1b5d4) = *(undefined8 *)((long)param_2 + 0x4d);
  *(undefined8 *)((long)puVar5 + 0x1b5cc) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x55);
  *(undefined8 *)((long)puVar5 + 0x1b5e4) = *(undefined8 *)((long)param_2 + 0x5d);
  *(undefined8 *)((long)puVar5 + 0x1b5dc) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)((long)puVar5 + 0x1b5f4) = *(undefined8 *)((long)param_2 + 0x6d);
  *(undefined8 *)((long)puVar5 + 0x1b5ec) = uVar9;
  *(undefined1 *)((long)puVar5 + 0x1b58b) = *(undefined1 *)((long)param_2 + 0x76);
  uVar10 = *(undefined8 *)((long)param_2 + 0x7d);
  uVar9 = *(undefined8 *)((long)param_2 + 0x75);
  *(ulong *)((long)puVar5 + 0x1b604) =
       CONCAT17(*(undefined1 *)((long)param_2 + 0x85),(int7)((ulong)uVar10 >> 8));
  *(ulong *)((long)puVar5 + 0x1b5fc) =
       CONCAT17((char)uVar10,
                CONCAT16((char)((ulong)uVar9 >> 0x38),
                         CONCAT15((char)((ulong)uVar9 >> 0x30),
                                  CONCAT14((char)((ulong)uVar9 >> 0x28),
                                           CONCAT13((char)((ulong)uVar9 >> 0x20),
                                                    CONCAT12((char)((ulong)uVar9 >> 0x18),
                                                             CONCAT11((char)((ulong)uVar9 >> 0x10),
                                                                      (char)uVar9)))))));
  uVar9 = *(undefined8 *)((long)param_2 + 0x86);
  *(undefined8 *)((long)puVar5 + 0x1b614) = *(undefined8 *)((long)param_2 + 0x8e);
  *(undefined8 *)((long)puVar5 + 0x1b60c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0x96);
  *(undefined8 *)((long)puVar5 + 0x1b624) = *(undefined8 *)((long)param_2 + 0x9e);
  *(undefined8 *)((long)puVar5 + 0x1b61c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0xa6);
  *(undefined8 *)((long)puVar5 + 0x1b634) = *(undefined8 *)((long)param_2 + 0xae);
  *(undefined8 *)((long)puVar5 + 0x1b62c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0xb6);
  *(undefined8 *)((long)puVar5 + 0x1b644) = *(undefined8 *)((long)param_2 + 0xbe);
  *(undefined8 *)((long)puVar5 + 0x1b63c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0xc6);
  *(undefined8 *)((long)puVar5 + 0x1b654) = *(undefined8 *)((long)param_2 + 0xce);
  *(undefined8 *)((long)puVar5 + 0x1b64c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0xd6);
  *(undefined8 *)((long)puVar5 + 0x1b664) = *(undefined8 *)((long)param_2 + 0xde);
  *(undefined8 *)((long)puVar5 + 0x1b65c) = uVar9;
  uVar9 = *(undefined8 *)((long)param_2 + 0xe6);
  *(undefined8 *)((long)puVar5 + 0x1b674) = *(undefined8 *)((long)param_2 + 0xee);
  *(undefined8 *)((long)puVar5 + 0x1b66c) = uVar9;
  *(undefined8 *)((long)puVar5 + 0x1b67c) = *(undefined8 *)((long)param_2 + 0xf6);
  *(undefined4 *)((long)puVar5 + 0x1b684) = *(undefined4 *)((long)param_2 + 0xfe);
  *(undefined1 *)(puVar5 + 0x36d1) = *(undefined1 *)((long)param_2 + 0x102);
  *(undefined1 *)((long)puVar5 + 0x1b689) = *(undefined1 *)((long)param_2 + 0x103);
  *(char *)((long)puVar5 + 0x1b68a) = (char)param_2[0x41];
  *(undefined1 *)((long)puVar5 + 0x1a4cb) = 1;
  *(undefined1 *)((long)puVar5 + 0x1a4bd) = 1;
  puVar5[0x34f0] = 0x4000000ffff;
  puVar5[0x34ef] = 0xffff0000ffff;
  puVar5[0x34f2] = 0x800000000400;
  puVar5[0x34f1] = 0x4000000400;
  puVar5[0x34f4] = 0x20000000040;
  puVar5[0x34f3] = 0x20000000200;
  *(undefined4 *)((long)puVar5 + 0x1a76c) = 0x20;
  puVar5[0x347f] = 0x4000;
  *(undefined8 *)((long)puVar5 + 0x1a3c4) = 0x4000;
  *(undefined4 *)((long)puVar5 + 0x1a3cc) = 0;
  puVar5[0x3481] = 0x800000008;
  puVar5[0x3480] = 0x800000400;
  *(undefined4 *)((long)puVar5 + 0x1a3f4) = 0xc;
  *(undefined4 *)(puVar5 + 0x348c) = 4;
  *(undefined4 *)((long)puVar5 + 0x1a50c) = 7;
  puVar5[0x341d] = 8;
  *(undefined8 *)((long)puVar5 + 0x1a09c) = 0x2000000000;
  *(undefined4 *)((long)puVar5 + 0x1a0a4) = 0;
  *(undefined8 *)((long)puVar5 + 0x1a504) = 0xfffffff800000004;
  *(undefined4 *)(puVar5 + 0x349f) = 4;
  *(undefined4 *)((long)puVar5 + 0x1a49c) = 0x100000;
  *(undefined8 *)((long)puVar5 + 0x1a494) = 0x1000000010;
  *(undefined4 *)(puVar5 + 0x3425) = 0x10;
  *(undefined4 *)(puVar5 + 0x3430) = 0x400;
  puVar5[0x342f] = 0x4000;
  *(undefined8 *)((long)puVar5 + 0x1a144) = 0x4000;
  *(undefined4 *)((long)puVar5 + 0x1a14c) = 0x40;
  *(undefined4 *)(puVar5 + 0x3432) = 0x10;
  *(undefined4 *)((long)puVar5 + 0x1a174) = 0x400;
  *(undefined4 *)(puVar5 + 0x3470) = 0x400;
  puVar5[0x346f] = 0x4000;
  *(undefined8 *)((long)puVar5 + 0x1a344) = 0x3c00004000;
  *(undefined4 *)((long)puVar5 + 0x1a34c) = 0;
  *(undefined4 *)(puVar5 + 0x3472) = 0x10;
  *(undefined4 *)((long)puVar5 + 0x1a374) = 0x400;
  puVar5[0x3491] = 0x10000000000054;
  puVar5[0x3490] = 0x8000000000f;
  *(undefined2 *)((long)puVar5 + 0x1a542) = 1;
  *(undefined4 *)(puVar5 + 0x3515) = 0x20;
  *(undefined4 *)((long)puVar5 + 0x1a4a4) = 0x18000;
  *(undefined1 *)((long)puVar5 + 0x1a8e6) = 0;
  *(undefined1 *)((long)puVar5 + 0xcba27) = 1;
  *(undefined2 *)((long)puVar5 + 0xcba05) = 0x101;
  *(undefined1 *)((long)puVar5 + 0xcba25) = 1;
  *(undefined1 *)(puVar5 + 0x19754) = 1;
  *(undefined2 *)((long)puVar5 + 0xcba16) = 0x101;
  *(undefined2 *)((long)puVar5 + 0xcba52) = 0x101;
  *(undefined4 *)(puVar5 + 0x19748) = 0x1010101;
  *(undefined4 *)((long)puVar5 + 0xcbaac) = 0x1000;
  *(undefined1 *)((long)puVar5 + 0xcba6a) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba71) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba7a) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba79) = 1;
  *(undefined1 *)((long)puVar5 + 0xcbaa3) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba24) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba69) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba92) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba91) = 1;
  *(undefined1 *)((long)puVar5 + 0xcba04) = 1;
  *(undefined1 *)((long)puVar5 + 0xcbac1) = 1;
  *(undefined8 *)((long)puVar5 + 0xcba94) = 0x2000000020;
  *(undefined4 *)((long)puVar5 + 0xcba9c) = 0x20;
  if (*param_2 < 0x79) {
    *(undefined1 *)((long)puVar5 + 0xcba2b) = 1;
    *(undefined1 *)((long)puVar5 + 0xcba23) = 1;
    *(undefined1 *)((long)puVar5 + 0xcba1f) = 1;
    *(undefined2 *)((long)puVar5 + 0xcba21) = 0x101;
    *(undefined2 *)((long)puVar5 + 0xcba1d) = 0x101;
  }
  lVar6 = 0x1a7c0;
  bVar2 = *(byte *)((long)param_2 + 0x106);
  bVar3 = *(byte *)((long)param_2 + 0x107);
  bVar4 = *(byte *)((long)param_2 + 0x105);
  lVar7 = 0x1a7d8;
  lVar8 = 0xf0;
  do {
    if (*(long *)((long)puVar5 + lVar7) == 0) {
      *(undefined8 **)((long)puVar5 + lVar7) = puVar5 + 0x19740;
    }
    pbVar1 = (byte *)((long)puVar5 + lVar6);
    *pbVar1 = bVar2;
    pbVar1[1] = bVar3;
    pbVar1[2] = bVar2;
    pbVar1[4] = (bVar2 | *(byte *)((long)param_2 + 0x107)) & 1;
    pbVar1[3] = bVar4;
    lVar7 = lVar7 + 0x28;
    lVar6 = lVar6 + 0x28;
    lVar8 = lVar8 + -0x28;
  } while (lVar8 != 0);
  return puVar5;
}



/* Entry: 109f6e038; end: 109f6e64f;  */

undefined8 * FUN_109f6e038(undefined8 *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = &PTR_FUN_110b935a8;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[0x36d5] = 0;
  *(undefined4 *)(param_1 + 0x36d6) = 0;
  param_1[0x1888d] = 0;
  *(undefined4 *)(param_1 + 0x1888e) = 0;
  *(undefined4 *)((long)param_1 + 0xc44dc) = 0;
  *(undefined4 *)(param_1 + 0x1889c) = 0;
  *(undefined8 *)((long)param_1 + 0xcb9b4) = 0;
  *(undefined8 *)((long)param_1 + 0xcb9ac) = 0;
  *(undefined8 *)((long)param_1 + 0xcb9c4) = 0;
  *(undefined8 *)((long)param_1 + 0xcb9bc) = 0;
  param_1[0x1973e] = 0;
  *(undefined4 *)(param_1 + 0x1973f) = 0;
  _bzero((long)param_1 + 0x1c,0x19ff8);
  _bzero(param_1 + 0x3403,0x922);
  *(undefined1 *)((long)param_1 + 0x1a944) = 0;
  *(undefined8 *)((long)param_1 + 0x1a93c) = 0;
  _bzero(param_1 + 0x3529,0xc3a);
  *(undefined8 *)((long)param_1 + 0x1b69c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b694) = 0;
  param_1[0x36d0] = 0;
  param_1[0x36cf] = 0;
  param_1[0x36d2] = 0;
  param_1[0x36d1] = 0;
  param_1[0x36cc] = 0;
  param_1[0x36cb] = 0;
  param_1[0x36ce] = 0;
  param_1[0x36cd] = 0;
  param_1[0x36c8] = 0;
  param_1[0x36c7] = 0;
  param_1[0x36ca] = 0;
  param_1[0x36c9] = 0;
  param_1[0x36c4] = 0;
  param_1[0x36c3] = 0;
  param_1[0x36c6] = 0;
  param_1[0x36c5] = 0;
  param_1[0x36c0] = 0;
  param_1[0x36bf] = 0;
  param_1[0x36c2] = 0;
  param_1[0x36c1] = 0;
  param_1[0x36bc] = 0;
  param_1[0x36bb] = 0;
  param_1[0x36be] = 0;
  param_1[0x36bd] = 0;
  param_1[0x36b8] = 0;
  param_1[0x36b7] = 0;
  param_1[0x36ba] = 0;
  param_1[0x36b9] = 0;
  param_1[0x36b4] = 0;
  param_1[0x36b3] = 0;
  param_1[0x36b6] = 0;
  param_1[0x36b5] = 0;
  param_1[0x36b2] = 0;
  param_1[0x36b1] = 0;
  _bzero(param_1 + 0x36d7,0x624);
  _bzero(param_1 + 0x379c,0x84cec);
  _bzero(param_1 + 0x1413a,0x23a92);
  *(undefined2 *)(param_1 + 0x1889b) = 0;
  param_1[0x18898] = 0;
  param_1[0x18897] = 0;
  param_1[0x1889a] = 0;
  param_1[0x18899] = 0;
  param_1[0x18894] = 0;
  param_1[0x18893] = 0;
  param_1[0x18896] = 0;
  param_1[0x18895] = 0;
  param_1[0x18890] = 0;
  param_1[0x1888f] = 0;
  param_1[0x18892] = 0;
  param_1[0x18891] = 0;
  param_1[0x1889e] = 0;
  param_1[0x1889d] = 0;
  param_1[0x188a0] = 0;
  param_1[0x1889f] = 0;
  param_1[0x188a2] = 0;
  param_1[0x188a1] = 0;
  param_1[0x188a4] = 0;
  param_1[0x188a3] = 0;
  param_1[0x188a6] = 0;
  param_1[0x188a5] = 0;
  param_1[0x188a8] = 0;
  param_1[0x188a7] = 0;
  param_1[0x188aa] = 0;
  param_1[0x188a9] = 0;
  *(undefined2 *)(param_1 + 0x188ab) = 0;
  *(undefined8 *)((long)param_1 + 0xc455c) = 0;
  *(undefined8 *)((long)param_1 + 0xc456c) = 0;
  *(undefined8 *)((long)param_1 + 0xc4564) = 0;
  *(undefined8 *)((long)param_1 + 0xc472f) = 0;
  *(undefined8 *)((long)param_1 + 0xc4727) = 0;
  *(undefined1 *)((long)param_1 + 0xc4574) = 0;
  param_1[0x188e2] = 0;
  param_1[0x188e1] = 0;
  param_1[0x188e4] = 0;
  param_1[0x188e3] = 0;
  param_1[0x188de] = 0;
  param_1[0x188dd] = 0;
  param_1[0x188e0] = 0;
  param_1[0x188df] = 0;
  param_1[0x188da] = 0;
  param_1[0x188d9] = 0;
  param_1[0x188dc] = 0;
  param_1[0x188db] = 0;
  param_1[0x188d6] = 0;
  param_1[0x188d5] = 0;
  param_1[0x188d8] = 0;
  param_1[0x188d7] = 0;
  param_1[0x188d2] = 0;
  param_1[0x188d1] = 0;
  param_1[0x188d4] = 0;
  param_1[0x188d3] = 0;
  param_1[0x188ce] = 0;
  param_1[0x188cd] = 0;
  param_1[0x188d0] = 0;
  param_1[0x188cf] = 0;
  param_1[0x188ca] = 0;
  param_1[0x188c9] = 0;
  param_1[0x188cc] = 0;
  param_1[0x188cb] = 0;
  param_1[0x188c6] = 0;
  param_1[0x188c5] = 0;
  param_1[0x188c8] = 0;
  param_1[0x188c7] = 0;
  param_1[0x188c2] = 0;
  param_1[0x188c1] = 0;
  param_1[0x188c4] = 0;
  param_1[0x188c3] = 0;
  param_1[0x188be] = 0;
  param_1[0x188bd] = 0;
  param_1[0x188c0] = 0;
  param_1[0x188bf] = 0;
  param_1[0x188ba] = 0;
  param_1[0x188b9] = 0;
  param_1[0x188bc] = 0;
  param_1[0x188bb] = 0;
  param_1[0x188b6] = 0;
  param_1[0x188b5] = 0;
  param_1[0x188b8] = 0;
  param_1[0x188b7] = 0;
  param_1[0x188b2] = 0;
  param_1[0x188b1] = 0;
  param_1[0x188b4] = 0;
  param_1[0x188b3] = 0;
  param_1[0x188b0] = 0;
  param_1[0x188af] = 0;
  *(undefined4 *)((long)param_1 + 0xc473f) = 0;
  param_1[0x188e7] = 0;
  _bzero(param_1 + 0x188e9,0x7243);
  *(undefined1 *)(param_1 + 0x19735) = 0;
  param_1[0x19734] = 0;
  param_1[0x19733] = 0;
  param_1[0x19732] = 0;
  param_1[0x1973a] = 0;
  param_1[0x1973c] = 0;
  param_1[0x1973b] = 0;
  *(undefined1 *)(param_1 + 0x1973d) = 0;
  param_1[0x19741] = 0;
  param_1[0x19740] = 0;
  param_1[0x19743] = 0;
  param_1[0x19742] = 0;
  param_1[0x19745] = 0;
  param_1[0x19744] = 0;
  param_1[0x19747] = 0;
  param_1[0x19746] = 0;
  param_1[0x19749] = 0;
  param_1[0x19748] = 0;
  *(undefined8 *)((long)param_1 + 0xcba51) = 0;
  *(undefined8 *)((long)param_1 + 0xcba49) = 0;
  param_1[0x1974d] = 0;
  param_1[0x1974c] = 0;
  param_1[0x1974f] = 0;
  param_1[0x1974e] = 0;
  param_1[0x19751] = 0;
  param_1[0x19750] = 0;
  *(undefined4 *)((long)param_1 + 0xcba8f) = 0;
  *(undefined8 *)((long)param_1 + 0xcbaa1) = 0;
  *(undefined8 *)((long)param_1 + 0xcba94) = 0;
  *(undefined8 *)((long)param_1 + 0xcba9c) = 0;
  *(undefined8 *)((long)param_1 + 0xcbab4) = 0;
  *(undefined8 *)((long)param_1 + 0xcbaac) = 0;
  *(undefined1 *)((long)param_1 + 0xcbac4) = 0;
  *(undefined8 *)((long)param_1 + 0xcbabc) = 0;
  param_1[0x1975a] = 0;
  param_1[0x19759] = 0;
  param_1[0x1975c] = 0;
  param_1[0x1975b] = 0;
  FUN_109ec72ac();
  func_0x000109e26a2c();
  func_0x000109ec5dac(param_1 + 2,0);
  *(uint *)((long)param_1 + 0x1a4b4) = *param_2;
  *(char *)((long)param_1 + 0x1b58a) = (char)param_2[1];
  uVar8 = *(undefined8 *)((long)param_2 + 5);
  *(undefined8 *)((long)param_1 + 0x1b594) = *(undefined8 *)((long)param_2 + 0xd);
  *(undefined8 *)((long)param_1 + 0x1b58c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1b5a4) = *(undefined8 *)((long)param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x1b59c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x25);
  *(undefined8 *)((long)param_1 + 0x1b5b4) = *(undefined8 *)((long)param_2 + 0x2d);
  *(undefined8 *)((long)param_1 + 0x1b5ac) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)param_1 + 0x1b5c4) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)((long)param_1 + 0x1b5bc) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x45);
  *(undefined8 *)((long)param_1 + 0x1b5d4) = *(undefined8 *)((long)param_2 + 0x4d);
  *(undefined8 *)((long)param_1 + 0x1b5cc) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x55);
  *(undefined8 *)((long)param_1 + 0x1b5e4) = *(undefined8 *)((long)param_2 + 0x5d);
  *(undefined8 *)((long)param_1 + 0x1b5dc) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)((long)param_1 + 0x1b5f4) = *(undefined8 *)((long)param_2 + 0x6d);
  *(undefined8 *)((long)param_1 + 0x1b5ec) = uVar8;
  *(undefined1 *)((long)param_1 + 0x1b58b) = *(undefined1 *)((long)param_2 + 0x76);
  uVar9 = *(undefined8 *)((long)param_2 + 0x7d);
  uVar8 = *(undefined8 *)((long)param_2 + 0x75);
  *(ulong *)((long)param_1 + 0x1b604) =
       CONCAT17(*(undefined1 *)((long)param_2 + 0x85),(int7)((ulong)uVar9 >> 8));
  *(ulong *)((long)param_1 + 0x1b5fc) =
       CONCAT17((char)uVar9,
                CONCAT16((char)((ulong)uVar8 >> 0x38),
                         CONCAT15((char)((ulong)uVar8 >> 0x30),
                                  CONCAT14((char)((ulong)uVar8 >> 0x28),
                                           CONCAT13((char)((ulong)uVar8 >> 0x20),
                                                    CONCAT12((char)((ulong)uVar8 >> 0x18),
                                                             CONCAT11((char)((ulong)uVar8 >> 0x10),
                                                                      (char)uVar8)))))));
  uVar8 = *(undefined8 *)((long)param_2 + 0x86);
  *(undefined8 *)((long)param_1 + 0x1b614) = *(undefined8 *)((long)param_2 + 0x8e);
  *(undefined8 *)((long)param_1 + 0x1b60c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x96);
  *(undefined8 *)((long)param_1 + 0x1b624) = *(undefined8 *)((long)param_2 + 0x9e);
  *(undefined8 *)((long)param_1 + 0x1b61c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0xa6);
  *(undefined8 *)((long)param_1 + 0x1b634) = *(undefined8 *)((long)param_2 + 0xae);
  *(undefined8 *)((long)param_1 + 0x1b62c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0xb6);
  *(undefined8 *)((long)param_1 + 0x1b644) = *(undefined8 *)((long)param_2 + 0xbe);
  *(undefined8 *)((long)param_1 + 0x1b63c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0xc6);
  *(undefined8 *)((long)param_1 + 0x1b654) = *(undefined8 *)((long)param_2 + 0xce);
  *(undefined8 *)((long)param_1 + 0x1b64c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0xd6);
  *(undefined8 *)((long)param_1 + 0x1b664) = *(undefined8 *)((long)param_2 + 0xde);
  *(undefined8 *)((long)param_1 + 0x1b65c) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0xe6);
  *(undefined8 *)((long)param_1 + 0x1b674) = *(undefined8 *)((long)param_2 + 0xee);
  *(undefined8 *)((long)param_1 + 0x1b66c) = uVar8;
  *(undefined8 *)((long)param_1 + 0x1b67c) = *(undefined8 *)((long)param_2 + 0xf6);
  *(undefined4 *)((long)param_1 + 0x1b684) = *(undefined4 *)((long)param_2 + 0xfe);
  *(undefined1 *)(param_1 + 0x36d1) = *(undefined1 *)((long)param_2 + 0x102);
  *(undefined1 *)((long)param_1 + 0x1b689) = *(undefined1 *)((long)param_2 + 0x103);
  *(char *)((long)param_1 + 0x1b68a) = (char)param_2[0x41];
  *(undefined1 *)((long)param_1 + 0x1a4cb) = 1;
  *(undefined1 *)((long)param_1 + 0x1a4bd) = 1;
  param_1[0x34f0] = 0x4000000ffff;
  param_1[0x34ef] = 0xffff0000ffff;
  param_1[0x34f2] = 0x800000000400;
  param_1[0x34f1] = 0x4000000400;
  param_1[0x34f4] = 0x20000000040;
  param_1[0x34f3] = 0x20000000200;
  *(undefined4 *)((long)param_1 + 0x1a76c) = 0x20;
  param_1[0x347f] = 0x4000;
  *(undefined8 *)((long)param_1 + 0x1a3c4) = 0x4000;
  *(undefined4 *)((long)param_1 + 0x1a3cc) = 0;
  param_1[0x3481] = 0x800000008;
  param_1[0x3480] = 0x800000400;
  *(undefined4 *)((long)param_1 + 0x1a3f4) = 0xc;
  *(undefined4 *)(param_1 + 0x348c) = 4;
  *(undefined4 *)((long)param_1 + 0x1a50c) = 7;
  param_1[0x341d] = 8;
  *(undefined8 *)((long)param_1 + 0x1a09c) = 0x2000000000;
  *(undefined4 *)((long)param_1 + 0x1a0a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1a504) = 0xfffffff800000004;
  *(undefined4 *)(param_1 + 0x349f) = 4;
  *(undefined4 *)((long)param_1 + 0x1a49c) = 0x100000;
  *(undefined8 *)((long)param_1 + 0x1a494) = 0x1000000010;
  *(undefined4 *)(param_1 + 0x3425) = 0x10;
  *(undefined4 *)(param_1 + 0x3430) = 0x400;
  param_1[0x342f] = 0x4000;
  *(undefined8 *)((long)param_1 + 0x1a144) = 0x4000;
  *(undefined4 *)((long)param_1 + 0x1a14c) = 0x40;
  *(undefined4 *)(param_1 + 0x3432) = 0x10;
  *(undefined4 *)((long)param_1 + 0x1a174) = 0x400;
  *(undefined4 *)(param_1 + 0x3470) = 0x400;
  param_1[0x346f] = 0x4000;
  *(undefined8 *)((long)param_1 + 0x1a344) = 0x3c00004000;
  *(undefined4 *)((long)param_1 + 0x1a34c) = 0;
  *(undefined4 *)(param_1 + 0x3472) = 0x10;
  *(undefined4 *)((long)param_1 + 0x1a374) = 0x400;
  param_1[0x3491] = 0x10000000000054;
  param_1[0x3490] = 0x8000000000f;
  *(undefined2 *)((long)param_1 + 0x1a542) = 1;
  *(undefined4 *)(param_1 + 0x3515) = 0x20;
  *(undefined4 *)((long)param_1 + 0x1a4a4) = 0x18000;
  *(undefined1 *)((long)param_1 + 0x1a8e6) = 0;
  *(undefined1 *)((long)param_1 + 0xcba27) = 1;
  *(undefined2 *)((long)param_1 + 0xcba05) = 0x101;
  *(undefined1 *)((long)param_1 + 0xcba25) = 1;
  *(undefined1 *)(param_1 + 0x19754) = 1;
  *(undefined2 *)((long)param_1 + 0xcba16) = 0x101;
  *(undefined2 *)((long)param_1 + 0xcba52) = 0x101;
  *(undefined4 *)(param_1 + 0x19748) = 0x1010101;
  *(undefined4 *)((long)param_1 + 0xcbaac) = 0x1000;
  *(undefined1 *)((long)param_1 + 0xcba6a) = 1;
  *(undefined1 *)((long)param_1 + 0xcba71) = 1;
  *(undefined1 *)((long)param_1 + 0xcba7a) = 1;
  *(undefined1 *)((long)param_1 + 0xcba79) = 1;
  *(undefined1 *)((long)param_1 + 0xcbaa3) = 1;
  *(undefined1 *)((long)param_1 + 0xcba24) = 1;
  *(undefined1 *)((long)param_1 + 0xcba69) = 1;
  *(undefined1 *)((long)param_1 + 0xcba92) = 1;
  *(undefined1 *)((long)param_1 + 0xcba91) = 1;
  *(undefined1 *)((long)param_1 + 0xcba04) = 1;
  *(undefined1 *)((long)param_1 + 0xcbac1) = 1;
  *(undefined8 *)((long)param_1 + 0xcba94) = 0x2000000020;
  *(undefined4 *)((long)param_1 + 0xcba9c) = 0x20;
  if (*param_2 < 0x79) {
    *(undefined1 *)((long)param_1 + 0xcba2b) = 1;
    *(undefined1 *)((long)param_1 + 0xcba23) = 1;
    *(undefined1 *)((long)param_1 + 0xcba1f) = 1;
    *(undefined2 *)((long)param_1 + 0xcba21) = 0x101;
    *(undefined2 *)((long)param_1 + 0xcba1d) = 0x101;
  }
  lVar5 = 0x1a7c0;
  bVar2 = *(byte *)((long)param_2 + 0x106);
  bVar3 = *(byte *)((long)param_2 + 0x107);
  bVar4 = *(byte *)((long)param_2 + 0x105);
  lVar6 = 0x1a7d8;
  lVar7 = 0xf0;
  do {
    if (*(long *)((long)param_1 + lVar6) == 0) {
      *(undefined8 **)((long)param_1 + lVar6) = param_1 + 0x19740;
    }
    pbVar1 = (byte *)((long)param_1 + lVar5);
    *pbVar1 = bVar2;
    pbVar1[1] = bVar3;
    pbVar1[2] = bVar2;
    pbVar1[4] = (bVar2 | *(byte *)((long)param_2 + 0x107)) & 1;
    pbVar1[3] = bVar4;
    lVar6 = lVar6 + 0x28;
    lVar5 = lVar5 + 0x28;
    lVar7 = lVar7 + -0x28;
  } while (lVar7 != 0);
  return param_1;
}



/* Entry: 109f6e650; end: 109f6e697;  */

undefined8 FUN_109f6e650(undefined8 param_1)

{
  FUN_109f6e94c();
  return param_1;
}



/* Entry: 109f6e698; end: 109f6e7e3;  */

void FUN_109f6e698(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_50;
  byte bStack_48;
  
  uVar1 = 0x198;
  __Znwm();
  FUN_109f6eb68();
  FUN_109f6e964(auStack_70,uVar1,0,param_3);
  if (((bStack_48 & 1) != 0) && (FUN_109f6e964(auStack_70,uVar1,1,param_4), (bStack_48 & 1) != 0)) {
    if (*(char *)(param_5 + 1) == '\x01') {
      plVar3 = (long *)*param_5;
      plVar2 = (long *)0x0;
      if (*plVar3 != plVar3[1]) {
        plVar2 = plVar3;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    FUN_109f6a5c4(auStack_70,uVar1,plVar2);
    if ((bStack_48 & 1) != 0) {
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  param_1[1] = uStack_68;
  param_1[2] = CONCAT17(uStack_59,uStack_60);
  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_58,uStack_59);
  *(undefined4 *)param_1 = auStack_70[0];
  *(undefined1 *)((long)param_1 + 0x1f) = uStack_51;
  param_1[4] = uStack_50;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_109f6f2e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109f6e7e4; end: 109f6e94b;  */

void FUN_109f6e7e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined8 uStack_60;
  byte bStack_58;
  
  uVar1 = 0x198;
  __Znwm();
  FUN_109f6eb68();
  FUN_109f6efa0(auStack_80,uVar1,0,param_3,param_4);
  if (((bStack_58 & 1) != 0) &&
     (FUN_109f6efa0(auStack_80,uVar1,1,param_5,param_6), (bStack_58 & 1) != 0)) {
    if (*(char *)(param_7 + 1) == '\x01') {
      plVar3 = (long *)*param_7;
      plVar2 = (long *)0x0;
      if (*plVar3 != plVar3[1]) {
        plVar2 = plVar3;
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
    FUN_109f6a5c4(auStack_80,uVar1,plVar2);
    if ((bStack_58 & 1) != 0) {
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  param_1[1] = uStack_78;
  param_1[2] = CONCAT17(uStack_69,uStack_70);
  *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_68,uStack_69);
  *(undefined4 *)param_1 = auStack_80[0];
  *(undefined1 *)((long)param_1 + 0x1f) = uStack_61;
  param_1[4] = uStack_60;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_109f6f2e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109f6e94c; end: 109f6e963;  */

void FUN_109f6e94c(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000109e26bc0();
  ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar2 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar2 = (undefined *)0x1132ff008;
    ppuVar2[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  iVar1 = (int)uRam0000000113834740 + -1;
  uRam0000000113834740 = CONCAT44(uRam0000000113834740._4_4_,iVar1);
  if (iVar1 == 0) {
    if (lRam0000000113834730 != 0) {
      lVar4 = lRam0000000113834730 + -0x30;
      FUN_109f65aa4(lVar4);
      FUN_109f65ae0(lVar4);
    }
    uRam0000000113834770 = 0;
    uRam0000000113834758 = 0;
    uRam0000000113834750 = 0;
    uRam0000000113834768 = 0;
    uRam0000000113834760 = 0;
    uRam0000000113834738 = 0;
    lRam0000000113834730 = 0;
    uRam0000000113834748 = 0;
    uRam0000000113834740 = 0;
  }
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132ff008;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
  return;
}



/* Entry: 109f6e964; end: 109f6eb67;  */

undefined8 ** FUN_109f6e964(uint *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  long *aplStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined1 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  byte bStack_59;
  undefined8 uStack_58;
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x150;
  __Znwm();
  *puVar6 = &PTR_FUN_110b931c0;
  puVar6[1] = param_2;
  *(int *)(puVar6 + 2) = (int)param_3;
  uVar14 = *param_4;
  puVar6[4] = param_4[1];
  puVar6[3] = uVar14;
  puVar6[5] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  *(undefined8 *)((long)puVar6 + 0xa1) = 0;
  *(undefined8 *)((long)puVar6 + 0x99) = 0;
  *(undefined4 *)((long)puVar6 + 0xdf) = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  *(undefined8 *)((long)puVar6 + 0xec) = 0;
  *(undefined8 *)((long)puVar6 + 0xe4) = 0;
  *(undefined8 *)((long)puVar6 + 0xf1) = 0;
  *(undefined8 *)((long)puVar6 + 0x104) = 0;
  *(undefined1 *)((long)puVar6 + 0x114) = 0;
  *(undefined8 *)((long)puVar6 + 0xfc) = 0;
  *(undefined8 *)((long)puVar6 + 0x10c) = 0;
  puVar6[0x24] = 0;
  puVar6[0x23] = 0;
  puVar6[0x26] = 0;
  puVar6[0x25] = 0;
  puVar6[0x28] = 0;
  puVar6[0x27] = 0;
  puVar6[0x29] = 0;
  lVar12 = (long)*(char *)((long)puVar6 + 0x2f);
  if (lVar12 < 0) {
    puVar11 = (undefined8 *)puVar6[3];
    lVar12 = puVar6[4];
  }
  else {
    puVar11 = puVar6 + 3;
  }
  puVar6[6] = puVar11;
  puVar6[7] = lVar12;
  puVar11 = puVar6;
  FUN_109f68e60(&uStack_78);
  uVar5 = uStack_78;
  if ((bStack_50 & 1) == 0) {
    param_2 = (ulong)uStack_78;
    param_4 = (undefined8 *)(ulong)bStack_59;
    puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,uStack_78);
    uStack_98 = uStack_68;
    uStack_91 = uStack_61;
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    FUN_109f6ef20(puVar6);
    uVar4 = uStack_90;
    uVar3 = uStack_91;
    uStack_80 = 0;
    uStack_78 = (uint)uStack_98;
    uStack_74 = CONCAT13(uStack_91,(int3)((uint7)uStack_98 >> 0x20));
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_a0 = 0;
    *param_1 = uVar5;
    *(ulong *)(param_1 + 2) = CONCAT17(uStack_69,uStack_70);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_74,uStack_78);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uVar4,uVar3);
    *(byte *)((long)param_1 + 0x1f) = bStack_59;
    *(undefined8 *)(param_1 + 8) = uStack_58;
    *(undefined1 *)(param_1 + 10) = 0;
    param_3 = uStack_58;
  }
  else {
    uStack_80 = 1;
    puStack_a8 = puVar6;
    FUN_109f6ee9c(&puStack_a8);
    puVar2 = puStack_a8;
    puStack_a8 = (undefined8 *)0x0;
    lVar12 = param_2 + (long)*(int *)(puVar2[0x27] + 4) * 8;
    lVar7 = *(long *)(lVar12 + 0x140);
    *(undefined8 **)(lVar12 + 0x140) = puVar2;
    if (lVar7 != 0) {
      FUN_109f6ef20();
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  ppuVar8 = &puStack_a8;
  func_0x000109f6ef50();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  func_0x000109f6ef50(&puStack_a8);
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  pcStack_b8 = FUN_109f6eb68;
  ppuVar13 = ppuVar9 + 2;
  uStack_e8 = param_3;
  puStack_e0 = param_4;
  puStack_d8 = puVar6;
  uStack_d0 = param_2;
  ppuStack_c8 = ppuVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  ppuVar9[3] = (undefined8 *)0x0;
  *ppuVar13 = (undefined8 *)0x0;
  *ppuVar9 = &PTR_FUN_110b93470;
  ppuVar9[1] = puVar11;
  ppuVar9[5] = (undefined8 *)0x0;
  ppuVar9[4] = (undefined8 *)0x0;
  ppuVar9[7] = (undefined8 *)0x0;
  ppuVar9[6] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar9 + 8) = 0x3f800000;
  ppuVar9[10] = (undefined8 *)0x0;
  ppuVar9[9] = (undefined8 *)0x0;
  ppuVar9[0xc] = (undefined8 *)0x0;
  ppuVar9[0xb] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar9 + 0xd) = 0x3f800000;
  ppuVar9[0xf] = (undefined8 *)0x0;
  ppuVar9[0xe] = (undefined8 *)0x0;
  ppuVar9[0x11] = (undefined8 *)0x0;
  ppuVar9[0x10] = (undefined8 *)0x0;
  ppuVar9[0x13] = (undefined8 *)0x0;
  ppuVar9[0x12] = (undefined8 *)0x0;
  ppuVar9[0x15] = (undefined8 *)0x0;
  ppuVar9[0x14] = (undefined8 *)0x0;
  ppuVar9[0x17] = (undefined8 *)0x0;
  ppuVar9[0x16] = (undefined8 *)0x0;
  ppuVar9[0x19] = (undefined8 *)0x0;
  ppuVar9[0x18] = (undefined8 *)0x0;
  ppuVar9[0x1b] = (undefined8 *)0x0;
  ppuVar9[0x1a] = (undefined8 *)0x0;
  ppuVar9[0x1d] = (undefined8 *)0x0;
  ppuVar9[0x1c] = (undefined8 *)0x0;
  ppuVar9[0x1f] = (undefined8 *)0x0;
  ppuVar9[0x1e] = (undefined8 *)0x0;
  ppuVar9[0x21] = (undefined8 *)0x0;
  ppuVar9[0x20] = (undefined8 *)0x0;
  ppuVar9[0x23] = (undefined8 *)0x0;
  ppuVar9[0x22] = (undefined8 *)0x0;
  ppuVar9[0x25] = (undefined8 *)0x0;
  ppuVar9[0x24] = (undefined8 *)0x0;
  ppuVar9[0x26] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar9 + 0x27) = 0x3f800000;
  ppuVar9[0x29] = (undefined8 *)0x0;
  ppuVar9[0x28] = (undefined8 *)0x0;
  ppuVar9[0x2b] = (undefined8 *)0x0;
  ppuVar9[0x2a] = (undefined8 *)0x0;
  ppuVar9[0x2d] = (undefined8 *)0x0;
  ppuVar9[0x2c] = (undefined8 *)0x0;
  ppuVar9[0x2f] = (undefined8 *)0x0;
  ppuVar9[0x2e] = (undefined8 *)0x0;
  ppuVar9[0x31] = (undefined8 *)0x0;
  ppuVar9[0x30] = (undefined8 *)0x0;
  *(undefined4 *)(ppuVar9 + 0x32) = 0x3f800000;
  ppuVar8 = ppuVar9;
  func_0x000109ec5fb8();
  ppuVar9[3] = ppuVar8;
  FUN_109f6f770(aplStack_f8,0x40,0x10000);
  plVar1 = aplStack_f8[0];
  aplStack_f8[0] = (long *)0x0;
  plVar10 = *ppuVar13;
  *ppuVar13 = plVar1;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
    plVar1 = aplStack_f8[0];
    aplStack_f8[0] = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return ppuVar9;
}



/* Entry: 109f6eb68; end: 109f6ecb3;  */

undefined8 * FUN_109f6eb68(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_48;
  
  plVar4 = param_1 + 2;
  param_1[3] = 0;
  *plVar4 = 0;
  *param_1 = &PTR_FUN_110b93470;
  param_1[1] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  puVar2 = param_1;
  func_0x000109ec5fb8();
  param_1[3] = puVar2;
  FUN_109f6f770(&plStack_48,0x40,0x10000);
  plVar1 = plStack_48;
  plStack_48 = (long *)0x0;
  plVar3 = (long *)*plVar4;
  *plVar4 = (long)plVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar1 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return param_1;
}



/* Entry: 109f6ecb4; end: 109f6eddb;  */

long * FUN_109f6ecb4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x000109f6ed60(param_1 + 0x1f);
  lVar3 = 0;
  do {
    lVar2 = *(long *)((long)param_1 + lVar3 + 0xe0);
    if (lVar2 != 0) {
      *(long *)((long)param_1 + lVar3 + 0xe8) = lVar2;
      __ZdlPv();
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x90);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  FUN_109f6eddc(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109f6eddc; end: 109f6ee9b;  */

long * FUN_109f6eddc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000109f6d6b8(plVar1 + 2);
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



/* Entry: 109f6ee9c; end: 109f6ef1f;  */

void FUN_109f6ee9c(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return;
  }
  uStack_48 = *param_1;
  uStack_40 = *(undefined8 *)(param_1 + 2);
  uStack_38 = (undefined7)*(undefined8 *)(param_1 + 4);
  uStack_31 = (undefined1)*(undefined8 *)((long)param_1 + 0x17);
  uStack_30 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
  uStack_29 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_50 = &PTR_LAB_110b93678;
  func_0x000109f6d428(&ppuStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109f6ef0c);
  (*pcVar1)();
}



/* Entry: 109f6ef20; end: 109f6ef9f;  */

void FUN_109f6ef20(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109f6efa0; end: 109f6f183;  */

void FUN_109f6efa0(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined7 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined8 uStack_58;
  byte bStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x150;
  __Znwm();
  *puVar4 = &PTR_FUN_110b931c0;
  puVar4[1] = param_2;
  *(undefined4 *)(puVar4 + 2) = param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = param_4;
  puVar4[7] = param_5;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  *(undefined8 *)((long)puVar4 + 0xa1) = 0;
  *(undefined8 *)((long)puVar4 + 0x99) = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  *(undefined4 *)((long)puVar4 + 0xdf) = 0;
  *(undefined8 *)((long)puVar4 + 0xec) = 0;
  *(undefined8 *)((long)puVar4 + 0xe4) = 0;
  *(undefined8 *)((long)puVar4 + 0xf1) = 0;
  *(undefined8 *)((long)puVar4 + 0x104) = 0;
  *(undefined8 *)((long)puVar4 + 0xfc) = 0;
  *(undefined1 *)((long)puVar4 + 0x114) = 0;
  *(undefined8 *)((long)puVar4 + 0x10c) = 0;
  puVar4[0x24] = 0;
  puVar4[0x23] = 0;
  puVar4[0x26] = 0;
  puVar4[0x25] = 0;
  puVar4[0x28] = 0;
  puVar4[0x27] = 0;
  puVar4[0x29] = 0;
  FUN_109f68e60(&uStack_78,puVar4);
  uVar3 = uStack_78;
  if ((bStack_50 & 1) == 0) {
    puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,uStack_78);
    uStack_98 = uStack_68;
    uStack_91 = uStack_61;
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    FUN_109f6ef20(puVar4);
    uVar2 = uStack_90;
    uVar1 = uStack_91;
    uStack_80 = 0;
    uStack_78 = (undefined4)uStack_98;
    uStack_74 = CONCAT13(uStack_91,(int3)((uint7)uStack_98 >> 0x20));
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_a0 = 0;
    *(undefined4 *)param_1 = uVar3;
    param_1[1] = CONCAT17(uStack_69,uStack_70);
    param_1[2] = CONCAT44(uStack_74,uStack_78);
    *(ulong *)((long)param_1 + 0x17) = CONCAT71(uVar2,uVar1);
    *(undefined1 *)((long)param_1 + 0x1f) = uStack_59;
    param_1[4] = uStack_58;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uStack_80 = 1;
    puStack_a8 = puVar4;
    FUN_109f6ee9c(&puStack_a8);
    puVar4 = puStack_a8;
    puStack_a8 = (undefined8 *)0x0;
    param_2 = param_2 + (long)*(int *)(puVar4[0x27] + 4) * 8;
    lVar5 = *(long *)(param_2 + 0x140);
    *(undefined8 **)(param_2 + 0x140) = puVar4;
    if (lVar5 != 0) {
      FUN_109f6ef20();
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  ppuVar6 = &puStack_a8;
  func_0x000109f6ef50();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109f6ef50(&puStack_a8);
  __Unwind_Resume();
  puVar4 = *ppuVar6;
  if (puVar4 != (undefined8 *)0x0) {
    puVar8 = ppuVar6[1];
    puVar7 = puVar4;
    if (puVar8 != puVar4) {
      do {
        puVar8 = puVar8 + -7;
        FUN_109f6f1ec(puVar8);
      } while (puVar8 != puVar4);
      puVar7 = *ppuVar6;
    }
    ppuVar6[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar7);
    return;
  }
  return;
}



/* Entry: 109f6f184; end: 109f6f1eb;  */

void FUN_109f6f184(long *param_1)

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
        lVar2 = lVar2 + -0x38;
        FUN_109f6f1ec(lVar2);
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



/* Entry: 109f6f1ec; end: 109f6f22f;  */

void FUN_109f6f1ec(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 109f6f230; end: 109f6f243;  */

undefined8 * FUN_109f6f230(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    if (puVar2[3] != 0) {
      func_0x000109ec6108();
    }
    func_0x000109f6ed18(puVar2 + 0x2e);
    lVar6 = 0x168;
    do {
      lVar4 = *(long *)((long)puVar2 + lVar6);
      *(undefined8 *)((long)puVar2 + lVar6) = 0;
      if (lVar4 != 0) {
        FUN_109f6ef20();
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0x138);
    func_0x000109f6ed60(puVar2 + 0x23);
    lVar6 = 0;
    do {
      lVar4 = *(long *)((long)puVar2 + lVar6 + 0x100);
      if (lVar4 != 0) {
        *(long *)((long)puVar2 + lVar6 + 0x108) = lVar4;
        __ZdlPv();
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x90);
    if (puVar2[0xe] != 0) {
      puVar2[0xf] = puVar2[0xe];
      __ZdlPv();
    }
    FUN_109f6eddc(puVar2 + 9);
    func_0x000109f6ee38(puVar2 + 4);
    plVar5 = (long *)puVar2[2];
    puVar2[2] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    return puVar2;
  }
  if (param_3 < 0x17) {
    *(char *)((long)puVar2 + 0x17) = (char)param_3;
    puVar3 = puVar2;
    if (param_3 == 0) goto LAB_109f6f2c0;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (undefined8 *)((param_3 | 7) + 1);
    }
    puVar3 = puVar1;
    __Znwm();
    puVar2[1] = param_3;
    puVar2[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar2 = puVar3;
  }
  _memmove(puVar3,param_2,param_3);
LAB_109f6f2c0:
  *(undefined1 *)((long)puVar3 + param_3) = 0;
  return puVar2;
}



/* Entry: 109f6f244; end: 109f6f2df;  */

ulong * FUN_109f6f244(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    if (param_1[3] != 0) {
      func_0x000109ec6108();
    }
    func_0x000109f6ed18(param_1 + 0x2e);
    lVar5 = 0x168;
    do {
      lVar3 = *(long *)((long)param_1 + lVar5);
      *(undefined8 *)((long)param_1 + lVar5) = 0;
      if (lVar3 != 0) {
        FUN_109f6ef20();
      }
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0x138);
    func_0x000109f6ed60(param_1 + 0x23);
    lVar5 = 0;
    do {
      lVar3 = *(long *)((long)param_1 + lVar5 + 0x100);
      if (lVar3 != 0) {
        *(long *)((long)param_1 + lVar5 + 0x108) = lVar3;
        __ZdlPv();
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x90);
    if (param_1[0xe] != 0) {
      param_1[0xf] = param_1[0xe];
      __ZdlPv();
    }
    FUN_109f6eddc(param_1 + 9);
    func_0x000109f6ee38(param_1 + 4);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_109f6f2c0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (ulong *)((param_3 | 7) + 1);
    }
    puVar2 = puVar1;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  _memmove(puVar2,param_2,param_3);
LAB_109f6f2c0:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  return param_1;
}



/* Entry: 109f6f2e0; end: 109f6f39b;  */

long FUN_109f6f2e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ec6108();
  }
  func_0x000109f6ed18(param_1 + 0x170);
  lVar3 = 0x168;
  do {
    lVar1 = *(long *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    if (lVar1 != 0) {
      FUN_109f6ef20();
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x138);
  func_0x000109f6ed60(param_1 + 0x118);
  lVar3 = 0;
  do {
    lVar1 = *(long *)(param_1 + lVar3 + 0x100);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar3 + 0x108) = lVar1;
      __ZdlPv();
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x90);
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  FUN_109f6eddc(param_1 + 0x48);
  func_0x000109f6ee38(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 109f6f39c; end: 109f6f483;  */

void FUN_109f6f39c(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = *(long *)(param_2 + (ulong)param_3 * 8 + 0x140);
  if ((((lVar1 == 0) || (lStack_58 = *(long *)(lVar1 + 0x140), lStack_58 == 0)) ||
      (*(long *)(lStack_58 + 0x28) == 0)) || (*(long *)(*(long *)(lStack_58 + 0x28) + 0x160) == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(lVar1 + 0x48);
    uStack_80 = *(undefined8 *)(lVar1 + 0x40);
    lVar2 = *(long *)(lVar1 + 8);
    lStack_70 = *(long *)(lVar2 + 8) + 0x10;
    lStack_68 = lVar2 + 0x20;
    uStack_60 = *(undefined8 *)(lVar2 + 0x18);
    uStack_50 = *(undefined8 *)(lVar1 + 0x148);
    uStack_48 = 1;
    func_0x000109f79988(&uStack_80,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(**(long **)(param_2 + 0x10) + 0x40))(*(long **)(param_2 + 0x10),&uStack_38);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 109f6f484; end: 109f6f563;  */

void FUN_109f6f484(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x10));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109f6f564; end: 109f6f633;  */

void FUN_109f6f564(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_109f6f5ac:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar4 = 0x28;
        __Znwm();
        FUN_109f6f820();
        *extraout_x8 = uVar4;
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar9 * 8) == 0) {
              *(long **)(lVar2 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
              **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_109f6f5ac;
  }
  return;
}



/* Entry: 109f6f634; end: 109f6f76f;  */

void FUN_109f6f634(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar4 = 0x28;
      __Znwm();
      FUN_109f6f820();
      *extraout_x8 = uVar4;
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(long **)(lVar2 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(long **)(lVar2 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 109f6f770; end: 109f6f7cb;  */

void FUN_109f6f770(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_109f6f820();
  *param_1 = uVar1;
  return;
}



/* Entry: 109f6f7cc; end: 109f6f81f;  */

void FUN_109f6f7cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm();
  FUN_109f6fd1c();
  *param_1 = uVar1;
  return;
}



/* Entry: 109f6f820; end: 109f6f897;  */

undefined8 * FUN_109f6f820(undefined8 *param_1,ulong param_2,ulong param_3)

{
  param_1[2] = 0;
  if (param_3 < 0x10001) {
    param_3 = 0x10000;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110b936a0;
  param_1[1] = param_3;
  if (param_2 < 0x41) {
    param_2 = 0x40;
  }
  func_0x000107c31930(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 109f6f898; end: 109f6f923;  */

undefined8 * FUN_109f6f898(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 2;
  *param_1 = &PTR_FUN_110b936a0;
  func_0x000104c607c8(&puStack_28);
  return param_1;
}



/* Entry: 109f6f924; end: 109f6fc47;  */

/* WARNING: Removing unreachable block (ram,0x000109f6fc14) */

void FUN_109f6f924(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 uStack_b1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  puVar11 = (undefined8 *)*puVar1;
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (puVar11 == puVar5) {
    uVar7 = 0;
  }
  else {
    lVar6 = (long)*(char *)((long)puVar5 + -1);
    if (lVar6 < 0) {
      lVar6 = puVar5[-2];
      lVar9 = (puVar5[-1] & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar9 = 0x16;
    }
    uVar7 = lVar9 - lVar6;
  }
  if (uVar7 < param_3) {
    if (puVar5 < *(undefined8 **)(param_1 + 0x20)) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar11 = puVar5 + 3;
      puVar5[2] = 0;
    }
    else {
      uVar7 = ((long)puVar5 - (long)puVar11 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        func_0x000104c60770();
        puStack_e8 = auStack_70;
        puVar2 = &uStack_b1;
        uVar4 = 1;
        puStack_c0 = puStack_e8;
        _vsnprintf(puVar2,1,param_2,auStack_70);
        uVar7 = (ulong)(int)puVar2;
        puVar3 = puVar1 + 2;
        puVar11 = (undefined8 *)*puVar3;
        puVar5 = (undefined8 *)puVar1[3];
        if (puVar11 == puVar5) {
          uVar10 = 0;
        }
        else {
          lVar6 = (long)*(char *)((long)puVar5 + -1);
          if (lVar6 < 0) {
            lVar6 = puVar5[-2];
            lVar9 = (puVar5[-1] & 0x7fffffffffffffff) - 1;
          }
          else {
            lVar9 = 0x16;
          }
          uVar10 = lVar9 - lVar6;
        }
        if (uVar10 < uVar7) {
          if (puVar5 < (undefined8 *)puVar1[4]) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar11 = puVar5 + 3;
            puVar5[2] = 0;
          }
          else {
            uVar10 = ((long)puVar5 - (long)puVar11 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar10) {
              func_0x000104c60770();
              puVar5 = (undefined8 *)puVar3[3];
              for (puVar11 = (undefined8 *)puVar3[2]; puVar11 != puVar5; puVar11 = puVar11 + 3) {
                uVar7 = puVar11[1];
                puVar1 = (undefined8 *)*puVar11;
                if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
                  uVar7 = (ulong)*(byte *)((long)puVar11 + 0x17);
                  puVar1 = puVar11;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (uVar4,puVar1,uVar7);
              }
              return;
            }
            lVar6 = (long)puVar1[4] - (long)puVar11 >> 3;
            uVar8 = lVar6 * 0x5555555555555556;
            if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
              uVar8 = uVar10;
            }
            if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
              uVar8 = 0xaaaaaaaaaaaaaaa;
            }
            puStack_c8 = puVar3;
            func_0x000104c60784();
            puVar5 = (undefined8 *)((long)puVar3 + ((long)puVar5 - (long)puVar11));
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            puVar11 = puVar5 + 3;
            lVar6 = (long)puVar5 - (puVar1[3] - puVar1[2]);
            _memcpy(lVar6);
            puStack_e8 = (undefined1 *)puVar1[2];
            puVar1[2] = lVar6;
            puVar1[3] = puVar11;
            uStack_d0 = puVar1[4];
            puVar1[4] = puVar3 + uVar8 * 3;
            puStack_e0 = puStack_e8;
            puStack_d8 = puStack_e8;
            func_0x000107c31938(&puStack_e8);
          }
          puVar1[3] = puVar11;
          uVar10 = uVar7;
          if (uVar7 < 0x10001) {
            uVar10 = 0x10000;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                    (puVar11 + -3,uVar10);
          puVar5 = (undefined8 *)puVar1[3];
        }
        lVar6 = (long)*(char *)((long)puVar5 + -1);
        if (lVar6 < 0) {
          lVar6 = puVar5[-2];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                  (puVar5 + -3,lVar6 + uVar7,0);
        _vsnprintf((long)(puVar5 + -3) + lVar6,uVar7 + 1,param_2,auStack_70);
        return;
      }
      lVar6 = (long)*(undefined8 **)(param_1 + 0x20) - (long)puVar11 >> 3;
      uVar10 = lVar6 * 0x5555555555555556;
      if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
        uVar10 = uVar7;
      }
      if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar10 = 0xaaaaaaaaaaaaaaa;
      }
      puStack_48 = puVar1;
      func_0x000104c60784();
      puVar5 = (undefined8 *)((long)puVar1 + ((long)puVar5 - (long)puVar11));
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar11 = puVar5 + 3;
      lVar6 = (long)puVar5 - (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
      _memcpy(lVar6);
      uStack_68 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6;
      *(undefined8 **)(param_1 + 0x18) = puVar11;
      uStack_50 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar1 + uVar10 * 3;
      uStack_60 = uStack_68;
      uStack_58 = uStack_68;
      func_0x000107c31938(&uStack_68);
    }
    *(undefined8 **)(param_1 + 0x18) = puVar11;
    uVar7 = param_3;
    if (param_3 < 0x10001) {
      uVar7 = 0x10000;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar11 + -3,uVar7);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5 + -3,param_2,param_3);
  return;
}



/* Entry: 109f6fc48; end: 109f6fca3;  */

void FUN_109f6fc48(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != puVar3; puVar2 = puVar2 + 3) {
    uVar1 = puVar2[1];
    puVar4 = (undefined8 *)*puVar2;
    if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
      puVar4 = puVar2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,puVar4,uVar1);
  }
  return;
}



/* Entry: 109f6fca4; end: 109f6fce7;  */

undefined1  [16] FUN_109f6fca4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * -0x5555555555555555;
  auVar1._0_8_ = *(long *)(param_1 + 0x10);
  return auVar1;
}



/* Entry: 109f6fce8; end: 109f6fd1b;  */

void FUN_109f6fce8(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x000109f6fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



/* Entry: 109f6fd1c; end: 109f6fd7f;  */

undefined8 * FUN_109f6fd1c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110b93738;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1 + 2);
  return param_1;
}



/* Entry: 109f6fd80; end: 109f6fdf7;  */

undefined8 * FUN_109f6fd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b93738;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 109f6fdf8; end: 109f6fdff;  */

void FUN_109f6fdf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_1 + 0x10);
  return;
}



/* Entry: 109f6fe00; end: 109f6fe9b;  */

void FUN_109f6fe00(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uStack_49;
  
  puVar1 = &uStack_49;
  _vsnprintf(puVar1,1,param_2,&stack0x00000000);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  lVar3 = (long)*(char *)(param_1 + 0x27);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (puVar2,lVar3 + (int)puVar1,0);
  if (*(char *)(param_1 + 0x27) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  _vsnprintf((long)puVar2 + lVar3,(long)(int)puVar1 + 1,param_2,&stack0x00000000);
  return;
}


