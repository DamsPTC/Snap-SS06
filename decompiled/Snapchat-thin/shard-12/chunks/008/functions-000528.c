/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109848e00; end: 109848f67;  */

void FUN_109848e00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = &PTR_FUN_110b14b98;
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[2] = 0;
        uVar2 = puVar1[2];
        param_4[3] = puVar1[3];
        param_4[2] = uVar2;
        param_4[4] = puVar1[4];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[2] = 0;
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar1 + 5);
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 6;
        (**(code **)*param_2)(param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 109848f68; end: 109848fbb;  */

void FUN_109848f68(long *param_1)

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



/* Entry: 109848fbc; end: 109849257;  */

long FUN_109848fbc(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = param_1 + 1000;
  func_0x000109848f28(&lStack_28);
  lStack_28 = param_1 + 0x3d0;
  func_0x000109848f28(&lStack_28);
  if (*(long *)(param_1 + 0x3b8) != 0) {
    *(long *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3b8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x3a0) != 0) {
    *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a0);
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x378);
  *(long *)(param_1 + 0x380) = lVar1;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(long *)(param_1 + 0x390) = lVar1;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x350);
  *(long *)(param_1 + 0x358) = lVar1;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(long *)(param_1 + 0x368) = lVar1;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x328);
  *(long *)(param_1 + 0x330) = lVar1;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(long *)(param_1 + 0x340) = lVar1;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109849258; end: 1098492b3;  */

void FUN_109849258(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  while (plVar2 != param_2) {
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    *plVar2 = 0;
    if (lVar1 != 0) {
      func_0x000109846568(plVar2);
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1098492b4; end: 10984933f;  */

void FUN_1098492b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)puVar3[1];
  puVar1 = puVar4;
  if (puVar2 != puVar4) {
    do {
      puVar2 = puVar2 + -6;
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar4);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar3[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 109849340; end: 10984945f;  */

long * FUN_109849340(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_109849460(param_1 + 4,param_2,param_3,(param_3 - param_2 >> 3) * -0x5555555555555555);
  *(undefined4 *)(param_1 + 7) = 0;
  lVar3 = param_1[5] - param_1[4];
  if (lVar3 == 0) {
    uVar2 = 0;
    lVar3 = *param_1;
    uVar5 = param_1[1] - lVar3;
  }
  else {
    uVar2 = 0;
    lVar3 = (lVar3 >> 3) * -0x5555555555555555;
    piVar4 = (int *)(param_1[4] + 0x14);
    do {
      uVar1 = (uint)uVar2;
      if ((uint)uVar2 <= (uint)(*piVar4 * piVar4[-1])) {
        uVar1 = *piVar4 * piVar4[-1];
      }
      uVar2 = (ulong)uVar1;
      piVar4 = piVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *param_1;
    uVar5 = param_1[1] - lVar3;
    if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
      func_0x000107c27d58(param_1,uVar2 - uVar5);
      lVar3 = *param_1;
      goto LAB_109849414;
    }
  }
  if (uVar2 < uVar5) {
    param_1[1] = lVar3 + uVar2;
  }
LAB_109849414:
  param_1[3] = lVar3;
  return param_1;
}



/* Entry: 109849460; end: 1098494db;  */

void FUN_109849460(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    FUN_109848af8(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      puVar1 = puVar1 + 3;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1098494dc; end: 1098495d7;  */

uint * FUN_1098494dc(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar17 = lVar7 + 4;
    param_2[2] = lVar17;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar17);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xe;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x18;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x22;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x38);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x3e);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_109849c70(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar14 = puVar12[1];
            uVar3 = puVar12[2];
            uVar15 = (ulong)uVar3;
            func_0x00010984a424(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_1098499d0:
              puVar12 = (uint *)0x0;
              goto LAB_1098499d4;
            }
            uVar18 = 0;
            if (param_1[3] - 1 != uVar14) {
              uVar18 = uVar14 + 1;
            }
            if (param_1[3] <= uVar18) goto LAB_1098499d0;
            plVar11 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
            lVar17 = *(long *)(param_1 + 0x3e);
            uVar5 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar18 * 4);
            uVar14 = *param_1;
            if (uVar14 == uVar5) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar17 + (ulong)uVar18 * 4) =
                       *(int *)(lVar17 + (ulong)uVar18 * 4) + (1 << (ulong)(uVar14 + ~uVar5 & 0x1f))
                  ;
                  uStack_a4 = 0;
                  FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_a4);
                  iVar16 = (uVar2 >> 1) - uStack_a4;
                  if (uStack_a4 <= uVar2 >> 1) {
                    iVar6 = uVar2 - iVar16;
                    iVar13 = iVar16;
                    if (iVar16 != iVar6) {
                      puVar12 = *(uint **)(param_1 + 0x28);
                      if (puVar12 != *(uint **)(param_1 + 0x24)) {
                        uVar14 = param_1[0x2a];
                        uVar5 = *puVar12;
                        uVar2 = uVar14 + 1;
                        param_1[0x2a] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0x28) = puVar12 + 1;
                          param_1[0x2a] = 0;
                        }
                        iVar13 = iVar6;
                        if ((uVar5 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0)
                        goto LAB_109849960;
                      }
                      iVar13 = iVar16;
                      iVar16 = iVar6;
                    }
LAB_109849960:
                    lVar9 = *(long *)(param_1 + 0x3e);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar17 = *plVar11;
                    *(int *)(lVar17 + (ulong)uVar18 * 4) = *(int *)(lVar17 + (ulong)uVar18 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar17,lVar7,lVar7 - lVar17 >> 2);
                    if (iVar16 != 0) {
                      iStack_b0 = iVar16;
                      uStack_ac = uVar18;
                      uStack_a8 = uVar3;
                      func_0x00010984a498(&lStack_a0,&iStack_b0);
                    }
                    if (iVar13 != 0) {
                      iStack_b0 = iVar13;
                      uStack_ac = uVar18;
                      uStack_a8 = uVar1;
                      func_0x00010984a498(&lStack_a0,&iStack_b0);
                    }
                    goto LAB_1098499bc;
                  }
                }
                goto LAB_1098499d0;
              }
              puVar12 = *(uint **)(param_1 + 0x32);
              *puVar12 = uVar18;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar14 = 0;
                  if (uVar18 != (int)uVar8 - 1U) {
                    uVar14 = uVar18 + 1;
                  }
                  puVar12[uVar10] = uVar14;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar18 = uVar14;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar14 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0x32);
                    lVar9 = *(long *)(param_1 + 0x2c);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar16 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar10 * 4);
                      if (iVar16 != 0) {
                        puVar12 = param_1 + 0xe;
                        FUN_109849b44(puVar12,iVar16,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_1098499d0;
                        lVar7 = *(long *)(param_1 + 0x32);
                        lVar9 = *(long *)(param_1 + 0x2c);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0x2c);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar2);
              }
            }
LAB_1098499bc:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_1098499d4:
        FUN_10984a54c(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 1098495d8; end: 109849a27;  */

undefined8 FUN_1098495d8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x38);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x3e);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_109849c70(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar14 = puVar7[1];
      uVar3 = puVar7[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984a424(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_1098499d0:
        uVar12 = 0;
        goto LAB_1098499d4;
      }
      uVar18 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar18 = uVar14 + 1;
      }
      if (param_1[3] <= uVar18) goto LAB_1098499d0;
      plVar11 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
      lVar17 = *(long *)(param_1 + 0x3e);
      uVar4 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar18 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
            *(int *)(lVar17 + (ulong)uVar18 * 4) =
                 *(int *)(lVar17 + (ulong)uVar18 * 4) + (1 << (ulong)(uVar14 + ~uVar4 & 0x1f));
            uStack_a4 = 0;
            FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_a4);
            iVar16 = (uVar2 >> 1) - uStack_a4;
            if (uStack_a4 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar16;
              iVar13 = iVar16;
              if (iVar16 != iVar5) {
                puVar7 = *(uint **)(param_1 + 0x28);
                if (puVar7 != *(uint **)(param_1 + 0x24)) {
                  uVar14 = param_1[0x2a];
                  uVar4 = *puVar7;
                  uVar2 = uVar14 + 1;
                  param_1[0x2a] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x28) = puVar7 + 1;
                    param_1[0x2a] = 0;
                  }
                  iVar13 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_109849960;
                }
                iVar13 = iVar16;
                iVar16 = iVar5;
              }
LAB_109849960:
              lVar9 = *(long *)(param_1 + 0x3e);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar17 = *plVar11;
              *(int *)(lVar17 + (ulong)uVar18 * 4) = *(int *)(lVar17 + (ulong)uVar18 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar17,lVar6,lVar6 - lVar17 >> 2);
              if (iVar16 != 0) {
                iStack_b0 = iVar16;
                uStack_ac = uVar18;
                uStack_a8 = uVar3;
                func_0x00010984a498(&lStack_a0,&iStack_b0);
              }
              if (iVar13 != 0) {
                iStack_b0 = iVar13;
                uStack_ac = uVar18;
                uStack_a8 = uVar1;
                func_0x00010984a498(&lStack_a0,&iStack_b0);
              }
              goto LAB_1098499bc;
            }
          }
          goto LAB_1098499d0;
        }
        puVar7 = *(uint **)(param_1 + 0x32);
        *puVar7 = uVar18;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar14 = 0;
            if (uVar18 != (int)uVar8 - 1U) {
              uVar14 = uVar18 + 1;
            }
            puVar7[uVar10] = uVar14;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar18 = uVar14;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0x32);
              lVar9 = *(long *)(param_1 + 0x2c);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar16 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar10 * 4);
                if (iVar16 != 0) {
                  puVar7 = param_1 + 0xe;
                  FUN_109849b44(puVar7,iVar16,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_1098499d0;
                  lVar6 = *(long *)(param_1 + 0x32);
                  lVar9 = *(long *)(param_1 + 0x2c);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0x2c);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_1098499bc:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_1098499d4:
  FUN_10984a54c(&lStack_a0);
  return uVar12;
}



/* Entry: 109849a28; end: 109849b43;  */

long FUN_109849a28(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != lVar1) {
    uVar3 = 0;
    do {
      puVar7 = (undefined8 *)(lVar1 + uVar3 * 0x18);
      puVar5 = (undefined8 *)*puVar7;
      uVar6 = (ulong)*(uint *)(param_1 + 0x38);
      if ((*(byte *)((long)puVar5 + 100) & 1) == 0) {
        uVar6 = (ulong)*(uint *)(puVar5[9] + uVar6 * 4);
      }
      if (*(uint *)(puVar5 + 0xc) <= uVar6) {
        return param_1;
      }
      lVar1 = *param_2 + (ulong)*(uint *)(puVar7 + 1) * 4;
      lVar2 = lVar1;
      if ((*(uint *)(puVar7 + 2) < 4) &&
         (lVar2 = *(long *)(param_1 + 0x18), *(int *)((long)puVar7 + 0x14) != 0)) {
        uVar4 = 0;
        do {
          _memcpy(lVar2,lVar1);
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + (ulong)*(uint *)(puVar7 + 2);
          lVar1 = lVar1 + 4;
        } while (uVar4 < *(uint *)((long)puVar7 + 0x14));
        lVar2 = *(long *)(param_1 + 0x18);
      }
      _memcpy(*(long *)*puVar5 + puVar5[5] * uVar6,lVar2);
      uVar3 = uVar3 + 1;
      lVar1 = *(long *)(param_1 + 0x20);
      uVar6 = (*(long *)(param_1 + 0x28) - lVar1 >> 3) * -0x5555555555555555;
    } while (uVar3 <= uVar6 && uVar6 - uVar3 != 0);
  }
  return param_1;
}



/* Entry: 109849b44; end: 109849bef;  */

undefined8 FUN_109849b44(long param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar4 = param_2 - (0x20 - uVar1);
  if (iVar4 == 0 || param_2 < (int)(0x20 - uVar1)) {
    piVar5 = *(int **)(param_1 + 0x18);
    if (piVar5 == *(int **)(param_1 + 8)) {
      return 0;
    }
    *param_3 = (uint)(*piVar5 << (ulong)(uVar1 & 0x1f)) >> (ulong)(-param_2 & 0x1f);
    param_2 = *(int *)(param_1 + 0x20) + param_2;
    *(int *)(param_1 + 0x20) = param_2;
    if (param_2 == 0x20) {
      *(int **)(param_1 + 0x18) = piVar5 + 1;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    piVar5 = *(int **)(param_1 + 0x18);
    if (*(int **)(param_1 + 8) == piVar5 + 1) {
      return 0;
    }
    iVar2 = *piVar5;
    *(int *)(param_1 + 0x20) = iVar4;
    uVar3 = piVar5[1];
    *(int **)(param_1 + 0x18) = piVar5 + 1;
    *param_3 = uVar3 >> (ulong)(-iVar4 & 0x1f) |
               (uint)(iVar2 << (ulong)(uVar1 & 0x1f)) >> (ulong)(-param_2 & 0x1f);
  }
  return 1;
}



/* Entry: 109849bf0; end: 109849c6f;  */

undefined8 * FUN_109849bf0(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109265f60(param_1);
    puVar2 = (undefined4 *)param_1[1];
    lVar4 = param_2 << 2;
    uVar1 = *param_3;
    puVar3 = puVar2;
    do {
      *puVar3 = uVar1;
      lVar4 = lVar4 + -4;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 109849c70; end: 109849d23;  */

void FUN_109849c70(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_109849d24(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 109849d24; end: 109849ed3;  */

void FUN_109849d24(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984a3f0();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984a1e4(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984a2e8(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x000109849fd8(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984a0dc(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_109849ed4(param_1,&plStack_60);
  return;
}



/* Entry: 109849ed4; end: 10984a0db;  */

void FUN_109849ed4(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984a3f0();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984a0dc; end: 10984a1e3;  */

void FUN_10984a0dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984a3f0();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984a1e4; end: 10984a2e7;  */

void FUN_10984a1e4(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984a3f0();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984a2e8; end: 10984a3ef;  */

void FUN_10984a2e8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984a3f0();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984a3f0; end: 10984a54b;  */

undefined1  [16] FUN_10984a3f0(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984a54c; end: 10984a5e3;  */

long * FUN_10984a54c(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984a5c8;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984a5c8:
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



/* Entry: 10984a5e4; end: 10984a62f;  */

long * FUN_10984a5e4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984a630; end: 10984a6e7;  */

undefined8 * FUN_10984a630(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10984a6e8(param_1);
    puVar2 = (undefined8 *)param_1[1];
    puVar1 = puVar2 + param_2 * 3;
    param_2 = param_2 * 0x18;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      FUN_109378600(puVar2,*param_3,param_3[1],param_3[1] - *param_3 >> 2);
      puVar2 = puVar2 + 3;
      param_2 = param_2 + -0x18;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  return param_1;
}



/* Entry: 10984a6e8; end: 10984a773;  */

/* WARNING: Possible PIC construction at 0x00010984a70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010984a710) */

undefined1  [16] FUN_10984a6e8(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_109452bbc();
  }
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar8 = (long)param_2 * 0x18;
    __Znwm(lVar8);
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar8;
    return auVar22;
  }
  func_0x000104c4f740();
  plVar16 = param_2;
  if (param_2[2] + 4 <= param_2[1]) {
    uVar7 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar7;
    lVar11 = param_2[2];
    lVar8 = lVar11 + 4;
    param_2[2] = lVar8;
    if ((uVar7 < 0x21) && (lVar11 + 8 <= param_2[1])) {
      uVar7 = *(uint *)(*param_2 + lVar8);
      param_1[1] = uVar7;
      param_2[2] = param_2[2] + 4;
      if (uVar7 == 0) {
        puVar9 = (uint *)0x1;
        goto LAB_10984a7f4;
      }
      if (uVar7 <= param_4) {
        param_1[2] = 0;
        puVar9 = param_1 + 4;
        FUN_10985d744(puVar9,param_2);
        if ((int)puVar9 != 0) {
          puVar9 = param_1 + 0xe;
          plVar16 = param_2;
          FUN_10985d744(puVar9,param_2);
          if ((int)puVar9 != 0) {
            puVar9 = param_1 + 0x18;
            plVar16 = param_2;
            FUN_10985d744(puVar9,param_2);
            if ((int)puVar9 != 0) {
              puVar9 = param_1 + 0x22;
              FUN_10985d744(puVar9,param_2);
              plVar16 = param_2;
              if ((int)puVar9 != 0) {
                uVar7 = param_1[1];
                uStack_ac = 0;
                FUN_109849bf0(&lStack_e0,param_1[3],&uStack_ac);
                plVar16 = *(long **)(param_1 + 0x38);
                if (*plVar16 != 0) {
                  plVar16[1] = *plVar16;
                  __ZdlPv();
                  *plVar16 = 0;
                  plVar16[1] = 0;
                  plVar16[2] = 0;
                }
                plVar16[1] = lStack_d8;
                *plVar16 = lStack_e0;
                plVar16[2] = lStack_d0;
                uStack_ac = 0;
                FUN_109849bf0(&lStack_e0,param_1[3],&uStack_ac);
                plVar16 = *(long **)(param_1 + 0x3e);
                if (*plVar16 != 0) {
                  plVar16[1] = *plVar16;
                  __ZdlPv();
                  *plVar16 = 0;
                  plVar16[1] = 0;
                  plVar16[2] = 0;
                }
                plVar16[1] = lStack_d8;
                *plVar16 = lStack_e0;
                plVar16[2] = lStack_d0;
                uStack_a8 = 0;
                uStack_c8 = 0;
                lStack_d0 = 0;
                lStack_b8 = 0;
                lStack_c0 = 0;
                lStack_d8 = 0;
                lStack_e0 = 0;
                puVar9 = &uStack_ac;
                uStack_ac = uVar7;
                FUN_10984acc0(&lStack_e0,puVar9);
                uVar17 = 1;
                if (lStack_b8 != 0) {
                  do {
                    lStack_b8 = lStack_b8 + -1;
                    puVar9 = (uint *)(*(long *)(lStack_d8 +
                                               ((ulong)(lStack_c0 + lStack_b8) / 0x155) * 8) +
                                     ((ulong)(lStack_c0 + lStack_b8) % 0x155) * 0xc);
                    uVar3 = *puVar9;
                    uVar19 = puVar9[1];
                    uVar4 = puVar9[2];
                    uVar20 = (ulong)uVar4;
                    puVar9 = (uint *)0x1;
                    func_0x00010984b474(&lStack_e0,1);
                    if (uVar7 < uVar3) {
LAB_10984ac68:
                      uVar17 = 0;
                      goto LAB_10984ac6c;
                    }
                    uVar21 = 0;
                    if (param_1[3] - 1 != uVar19) {
                      uVar21 = uVar19 + 1;
                    }
                    if (param_1[3] <= uVar21) goto LAB_10984ac68;
                    puVar2 = (uint *)(*(long *)(param_1 + 0x38) + uVar20 * 0x18);
                    lVar8 = *(long *)(param_1 + 0x3e);
                    uVar18 = *(uint *)(*(long *)(lVar8 + uVar20 * 0x18) + (ulong)uVar21 * 4);
                    uVar19 = *param_1;
                    if (uVar19 == uVar18) {
                      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                        puVar9 = puVar2;
                        FUN_109849a28(param_3,puVar2);
                        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                        param_1[2] = param_1[2] + 1;
                      }
                    }
                    else {
                      if (2 < uVar3) {
                        if (param_1[2] <= param_1[1]) {
                          uVar1 = uVar4 + 1;
                          FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,
                                        *(long *)puVar2,*(long *)(puVar2 + 2),
                                        *(long *)(puVar2 + 2) - *(long *)puVar2 >> 2);
                          lVar8 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                          *(int *)(lVar8 + (ulong)uVar21 * 4) =
                               *(int *)(lVar8 + (ulong)uVar21 * 4) +
                               (1 << (ulong)(uVar19 + ~uVar18 & 0x1f));
                          uStack_e4 = 0;
                          puVar9 = (uint *)(ulong)((uint)LZCOUNT(uVar3) ^ 0x1f);
                          FUN_109849b44(param_1 + 4,puVar9,&uStack_e4);
                          uVar19 = (uVar3 >> 1) - uStack_e4;
                          if (uStack_e4 <= uVar3 >> 1) {
                            uVar3 = uVar3 - uVar19;
                            uVar18 = uVar19;
                            if (uVar19 != uVar3) {
                              puVar9 = *(uint **)(param_1 + 0x28);
                              if (puVar9 != *(uint **)(param_1 + 0x24)) {
                                uVar5 = param_1[0x2a];
                                uVar6 = *puVar9;
                                uVar18 = uVar5 + 1;
                                param_1[0x2a] = uVar18;
                                if (uVar18 == 0x20) {
                                  *(uint **)(param_1 + 0x28) = puVar9 + 1;
                                  param_1[0x2a] = 0;
                                }
                                uVar18 = uVar3;
                                if ((uVar6 & 0x80000000U >> (ulong)(uVar5 & 0x1f)) != 0)
                                goto LAB_10984abf8;
                              }
                              uVar18 = uVar19;
                              uVar19 = uVar3;
                            }
LAB_10984abf8:
                            lVar11 = *(long *)(param_1 + 0x3e);
                            puVar14 = (undefined8 *)(lVar11 + (ulong)uVar4 * 0x18);
                            puVar9 = (uint *)*puVar14;
                            puVar9[uVar21] = puVar9[uVar21] + 1;
                            lVar8 = puVar14[1];
                            FUN_1093784d8(lVar11 + (ulong)uVar1 * 0x18,puVar9,lVar8,
                                          lVar8 - (long)puVar9 >> 2);
                            if (uVar19 != 0) {
                              puVar9 = &uStack_f0;
                              uStack_f0 = uVar19;
                              uStack_ec = uVar21;
                              uStack_e8 = uVar4;
                              func_0x00010984b4e8(&lStack_e0,puVar9);
                            }
                            if (uVar18 != 0) {
                              puVar9 = &uStack_f0;
                              uStack_f0 = uVar18;
                              uStack_ec = uVar21;
                              uStack_e8 = uVar1;
                              func_0x00010984b4e8(&lStack_e0,puVar9);
                            }
                            goto LAB_10984ac54;
                          }
                        }
                        goto LAB_10984ac68;
                      }
                      puVar10 = *(uint **)(param_1 + 0x32);
                      *puVar10 = uVar21;
                      uVar12 = (ulong)param_1[3];
                      if (1 < param_1[3]) {
                        uVar15 = 1;
                        do {
                          uVar19 = 0;
                          if (uVar21 != (int)uVar12 - 1U) {
                            uVar19 = uVar21 + 1;
                          }
                          puVar10[uVar15] = uVar19;
                          uVar15 = uVar15 + 1;
                          uVar12 = (ulong)param_1[3];
                          uVar21 = uVar19;
                        } while (uVar15 < uVar12);
                      }
                      if (uVar3 != 0) {
                        uVar19 = 0;
                        do {
                          if (param_1[3] != 0) {
                            uVar12 = 0;
                            lVar11 = *(long *)(param_1 + 0x32);
                            lVar13 = *(long *)(param_1 + 0x2c);
                            do {
                              *(undefined4 *)(lVar13 + (ulong)*(uint *)(lVar11 + uVar12 * 4) * 4) =
                                   0;
                              uVar15 = (ulong)*(uint *)(lVar11 + uVar12 * 4);
                              uVar4 = *param_1 -
                                      *(int *)(*(long *)(lVar8 + uVar20 * 0x18) + uVar15 * 4);
                              puVar9 = (uint *)(ulong)uVar4;
                              if (uVar4 != 0) {
                                puVar10 = param_1 + 0xe;
                                FUN_109849b44(puVar10,puVar9,lVar13 + uVar15 * 4);
                                if ((int)puVar10 == 0) goto LAB_10984ac68;
                                lVar11 = *(long *)(param_1 + 0x32);
                                lVar13 = *(long *)(param_1 + 0x2c);
                                uVar15 = (ulong)*(uint *)(lVar11 + uVar12 * 4);
                              }
                              *(uint *)(lVar13 + uVar15 * 4) =
                                   *(uint *)(lVar13 + uVar15 * 4) |
                                   *(uint *)(*(long *)puVar2 + uVar15 * 4);
                              uVar12 = uVar12 + 1;
                            } while (uVar12 < param_1[3]);
                          }
                          puVar9 = param_1 + 0x2c;
                          FUN_109849a28(param_3,puVar9);
                          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                          param_1[2] = param_1[2] + 1;
                          uVar19 = uVar19 + 1;
                        } while (uVar19 != uVar3);
                      }
                    }
LAB_10984ac54:
                  } while (lStack_b8 != 0);
                  uVar17 = 1;
                }
LAB_10984ac6c:
                FUN_10984b59c(&lStack_e0);
                auVar24._8_8_ = puVar9;
                auVar24._0_8_ = uVar17;
                return auVar24;
              }
            }
          }
        }
        goto LAB_10984a7f4;
      }
    }
  }
  puVar9 = (uint *)0x0;
LAB_10984a7f4:
  auVar23._8_8_ = plVar16;
  auVar23._0_8_ = puVar9;
  return auVar23;
}



/* Entry: 10984a774; end: 10984a86f;  */

uint * FUN_10984a774(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar17 = lVar7 + 4;
    param_2[2] = lVar17;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar17);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xe;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x18;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x22;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x38);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x3e);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_10984acc0(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar14 = puVar12[1];
            uVar3 = puVar12[2];
            uVar15 = (ulong)uVar3;
            func_0x00010984b474(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_10984ac68:
              puVar12 = (uint *)0x0;
              goto LAB_10984ac6c;
            }
            uVar18 = 0;
            if (param_1[3] - 1 != uVar14) {
              uVar18 = uVar14 + 1;
            }
            if (param_1[3] <= uVar18) goto LAB_10984ac68;
            plVar11 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
            lVar17 = *(long *)(param_1 + 0x3e);
            uVar5 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar18 * 4);
            uVar14 = *param_1;
            if (uVar14 == uVar5) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar17 + (ulong)uVar18 * 4) =
                       *(int *)(lVar17 + (ulong)uVar18 * 4) + (1 << (ulong)(uVar14 + ~uVar5 & 0x1f))
                  ;
                  uStack_a4 = 0;
                  FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_a4);
                  iVar16 = (uVar2 >> 1) - uStack_a4;
                  if (uStack_a4 <= uVar2 >> 1) {
                    iVar6 = uVar2 - iVar16;
                    iVar13 = iVar16;
                    if (iVar16 != iVar6) {
                      puVar12 = *(uint **)(param_1 + 0x28);
                      if (puVar12 != *(uint **)(param_1 + 0x24)) {
                        uVar14 = param_1[0x2a];
                        uVar5 = *puVar12;
                        uVar2 = uVar14 + 1;
                        param_1[0x2a] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0x28) = puVar12 + 1;
                          param_1[0x2a] = 0;
                        }
                        iVar13 = iVar6;
                        if ((uVar5 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0)
                        goto LAB_10984abf8;
                      }
                      iVar13 = iVar16;
                      iVar16 = iVar6;
                    }
LAB_10984abf8:
                    lVar9 = *(long *)(param_1 + 0x3e);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar17 = *plVar11;
                    *(int *)(lVar17 + (ulong)uVar18 * 4) = *(int *)(lVar17 + (ulong)uVar18 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar17,lVar7,lVar7 - lVar17 >> 2);
                    if (iVar16 != 0) {
                      iStack_b0 = iVar16;
                      uStack_ac = uVar18;
                      uStack_a8 = uVar3;
                      func_0x00010984b4e8(&lStack_a0,&iStack_b0);
                    }
                    if (iVar13 != 0) {
                      iStack_b0 = iVar13;
                      uStack_ac = uVar18;
                      uStack_a8 = uVar1;
                      func_0x00010984b4e8(&lStack_a0,&iStack_b0);
                    }
                    goto LAB_10984ac54;
                  }
                }
                goto LAB_10984ac68;
              }
              puVar12 = *(uint **)(param_1 + 0x32);
              *puVar12 = uVar18;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar14 = 0;
                  if (uVar18 != (int)uVar8 - 1U) {
                    uVar14 = uVar18 + 1;
                  }
                  puVar12[uVar10] = uVar14;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar18 = uVar14;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar14 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0x32);
                    lVar9 = *(long *)(param_1 + 0x2c);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar16 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar10 * 4);
                      if (iVar16 != 0) {
                        puVar12 = param_1 + 0xe;
                        FUN_109849b44(puVar12,iVar16,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_10984ac68;
                        lVar7 = *(long *)(param_1 + 0x32);
                        lVar9 = *(long *)(param_1 + 0x2c);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0x2c);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar2);
              }
            }
LAB_10984ac54:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_10984ac6c:
        FUN_10984b59c(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984a870; end: 10984acbf;  */

undefined8 FUN_10984a870(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x38);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x3e);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984acc0(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar14 = puVar7[1];
      uVar3 = puVar7[2];
      uVar15 = (ulong)uVar3;
      func_0x00010984b474(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_10984ac68:
        uVar12 = 0;
        goto LAB_10984ac6c;
      }
      uVar18 = 0;
      if (param_1[3] - 1 != uVar14) {
        uVar18 = uVar14 + 1;
      }
      if (param_1[3] <= uVar18) goto LAB_10984ac68;
      plVar11 = (long *)(*(long *)(param_1 + 0x38) + uVar15 * 0x18);
      lVar17 = *(long *)(param_1 + 0x3e);
      uVar4 = *(uint *)(*(long *)(lVar17 + uVar15 * 0x18) + (ulong)uVar18 * 4);
      uVar14 = *param_1;
      if (uVar14 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x18);
            *(int *)(lVar17 + (ulong)uVar18 * 4) =
                 *(int *)(lVar17 + (ulong)uVar18 * 4) + (1 << (ulong)(uVar14 + ~uVar4 & 0x1f));
            uStack_a4 = 0;
            FUN_109849b44(param_1 + 4,(uint)LZCOUNT(uVar2) ^ 0x1f,&uStack_a4);
            iVar16 = (uVar2 >> 1) - uStack_a4;
            if (uStack_a4 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar16;
              iVar13 = iVar16;
              if (iVar16 != iVar5) {
                puVar7 = *(uint **)(param_1 + 0x28);
                if (puVar7 != *(uint **)(param_1 + 0x24)) {
                  uVar14 = param_1[0x2a];
                  uVar4 = *puVar7;
                  uVar2 = uVar14 + 1;
                  param_1[0x2a] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x28) = puVar7 + 1;
                    param_1[0x2a] = 0;
                  }
                  iVar13 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar14 & 0x1f)) != 0) goto LAB_10984abf8;
                }
                iVar13 = iVar16;
                iVar16 = iVar5;
              }
LAB_10984abf8:
              lVar9 = *(long *)(param_1 + 0x3e);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar17 = *plVar11;
              *(int *)(lVar17 + (ulong)uVar18 * 4) = *(int *)(lVar17 + (ulong)uVar18 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar17,lVar6,lVar6 - lVar17 >> 2);
              if (iVar16 != 0) {
                iStack_b0 = iVar16;
                uStack_ac = uVar18;
                uStack_a8 = uVar3;
                func_0x00010984b4e8(&lStack_a0,&iStack_b0);
              }
              if (iVar13 != 0) {
                iStack_b0 = iVar13;
                uStack_ac = uVar18;
                uStack_a8 = uVar1;
                func_0x00010984b4e8(&lStack_a0,&iStack_b0);
              }
              goto LAB_10984ac54;
            }
          }
          goto LAB_10984ac68;
        }
        puVar7 = *(uint **)(param_1 + 0x32);
        *puVar7 = uVar18;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar14 = 0;
            if (uVar18 != (int)uVar8 - 1U) {
              uVar14 = uVar18 + 1;
            }
            puVar7[uVar10] = uVar14;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar18 = uVar14;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar14 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0x32);
              lVar9 = *(long *)(param_1 + 0x2c);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar16 = *param_1 - *(int *)(*(long *)(lVar17 + uVar15 * 0x18) + uVar10 * 4);
                if (iVar16 != 0) {
                  puVar7 = param_1 + 0xe;
                  FUN_109849b44(puVar7,iVar16,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_10984ac68;
                  lVar6 = *(long *)(param_1 + 0x32);
                  lVar9 = *(long *)(param_1 + 0x2c);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0x2c);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar2);
        }
      }
LAB_10984ac54:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_10984ac6c:
  FUN_10984b59c(&lStack_a0);
  return uVar12;
}



/* Entry: 10984acc0; end: 10984ad73;  */

void FUN_10984acc0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984ad74(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984ad74; end: 10984af23;  */

void FUN_10984ad74(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984b440();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984b234(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984b338(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984b028(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984b12c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984af24(param_1,&plStack_60);
  return;
}



/* Entry: 10984af24; end: 10984b12b;  */

void FUN_10984af24(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984b440();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984b12c; end: 10984b233;  */

void FUN_10984b12c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984b440();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984b234; end: 10984b337;  */

void FUN_10984b234(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984b440();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984b338; end: 10984b43f;  */

void FUN_10984b338(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984b440();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984b440; end: 10984b59b;  */

undefined1  [16] FUN_10984b440(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984b59c; end: 10984b633;  */

long * FUN_10984b59c(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984b618;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984b618:
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



/* Entry: 10984b634; end: 10984b67f;  */

long * FUN_10984b634(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984b680; end: 10984b77b;  */

uint * FUN_10984b680(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar18 = lVar7 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        FUN_10985d80c(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 10;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x14;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x1e;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x34);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x3a);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_10984bbd0(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar15 = puVar12[1];
            uVar3 = puVar12[2];
            uVar16 = (ulong)uVar3;
            func_0x00010984c384(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_10984bb78:
              puVar12 = (uint *)0x0;
              goto LAB_10984bb7c;
            }
            uVar19 = 0;
            if (param_1[3] - 1 != uVar15) {
              uVar19 = uVar15 + 1;
            }
            if (param_1[3] <= uVar19) goto LAB_10984bb78;
            plVar11 = (long *)(*(long *)(param_1 + 0x34) + uVar16 * 0x18);
            lVar18 = *(long *)(param_1 + 0x3a);
            uVar6 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
            uVar15 = *param_1;
            if (uVar15 == uVar6) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  uVar13 = 0;
                  lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar18 + (ulong)uVar19 * 4) =
                       *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar6 & 0x1f))
                  ;
                  uVar15 = (uint)LZCOUNT(uVar2) ^ 0x1f;
                  do {
                    uVar6 = (int)param_1 + 0x10;
                    FUN_10985d980();
                    uVar13 = uVar6 | uVar13 << 1;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                  iVar17 = (uVar2 >> 1) - uVar13;
                  if (uVar13 <= uVar2 >> 1) {
                    iVar5 = uVar2 - iVar17;
                    iVar14 = iVar17;
                    if (iVar17 != iVar5) {
                      puVar12 = *(uint **)(param_1 + 0x24);
                      if (puVar12 != *(uint **)(param_1 + 0x20)) {
                        uVar15 = param_1[0x26];
                        uVar6 = *puVar12;
                        uVar2 = uVar15 + 1;
                        param_1[0x26] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0x24) = puVar12 + 1;
                          param_1[0x26] = 0;
                        }
                        iVar14 = iVar5;
                        if ((uVar6 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0)
                        goto LAB_10984bb08;
                      }
                      iVar14 = iVar17;
                      iVar17 = iVar5;
                    }
LAB_10984bb08:
                    lVar9 = *(long *)(param_1 + 0x3a);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar18 = *plVar11;
                    *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar7,lVar7 - lVar18 >> 2);
                    if (iVar17 != 0) {
                      iStack_ac = iVar17;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar3;
                      func_0x00010984c3f8(&lStack_a0,&iStack_ac);
                    }
                    if (iVar14 != 0) {
                      iStack_ac = iVar14;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar1;
                      func_0x00010984c3f8(&lStack_a0,&iStack_ac);
                    }
                    goto LAB_10984bb64;
                  }
                }
                goto LAB_10984bb78;
              }
              puVar12 = *(uint **)(param_1 + 0x2e);
              *puVar12 = uVar19;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar15 = 0;
                  if (uVar19 != (int)uVar8 - 1U) {
                    uVar15 = uVar19 + 1;
                  }
                  puVar12[uVar10] = uVar15;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar19 = uVar15;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar15 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0x2e);
                    lVar9 = *(long *)(param_1 + 0x28);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar17 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                      if (iVar17 != 0) {
                        puVar12 = param_1 + 10;
                        FUN_109849b44(puVar12,iVar17,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_10984bb78;
                        lVar7 = *(long *)(param_1 + 0x2e);
                        lVar9 = *(long *)(param_1 + 0x28);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0x28);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar2);
              }
            }
LAB_10984bb64:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_10984bb7c:
        FUN_10984c4ac(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984b77c; end: 10984bbcf;  */

undefined8 FUN_10984b77c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x34);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x3a);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984bbd0(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar15 = puVar7[1];
      uVar3 = puVar7[2];
      uVar16 = (ulong)uVar3;
      func_0x00010984c384(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_10984bb78:
        uVar12 = 0;
        goto LAB_10984bb7c;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar15) {
        uVar19 = uVar15 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_10984bb78;
      plVar11 = (long *)(*(long *)(param_1 + 0x34) + uVar16 * 0x18);
      lVar18 = *(long *)(param_1 + 0x3a);
      uVar5 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
      uVar15 = *param_1;
      if (uVar15 == uVar5) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            uVar13 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar19 * 4) =
                 *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar5 & 0x1f));
            uVar15 = (uint)LZCOUNT(uVar2) ^ 0x1f;
            do {
              uVar5 = (int)param_1 + 0x10;
              FUN_10985d980();
              uVar13 = uVar5 | uVar13 << 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            iVar17 = (uVar2 >> 1) - uVar13;
            if (uVar13 <= uVar2 >> 1) {
              iVar4 = uVar2 - iVar17;
              iVar14 = iVar17;
              if (iVar17 != iVar4) {
                puVar7 = *(uint **)(param_1 + 0x24);
                if (puVar7 != *(uint **)(param_1 + 0x20)) {
                  uVar15 = param_1[0x26];
                  uVar5 = *puVar7;
                  uVar2 = uVar15 + 1;
                  param_1[0x26] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x24) = puVar7 + 1;
                    param_1[0x26] = 0;
                  }
                  iVar14 = iVar4;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0) goto LAB_10984bb08;
                }
                iVar14 = iVar17;
                iVar17 = iVar4;
              }
LAB_10984bb08:
              lVar9 = *(long *)(param_1 + 0x3a);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar11;
              *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar6,lVar6 - lVar18 >> 2);
              if (iVar17 != 0) {
                iStack_ac = iVar17;
                uStack_a8 = uVar19;
                uStack_a4 = uVar3;
                func_0x00010984c3f8(&lStack_a0,&iStack_ac);
              }
              if (iVar14 != 0) {
                iStack_ac = iVar14;
                uStack_a8 = uVar19;
                uStack_a4 = uVar1;
                func_0x00010984c3f8(&lStack_a0,&iStack_ac);
              }
              goto LAB_10984bb64;
            }
          }
          goto LAB_10984bb78;
        }
        puVar7 = *(uint **)(param_1 + 0x2e);
        *puVar7 = uVar19;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar15 = 0;
            if (uVar19 != (int)uVar8 - 1U) {
              uVar15 = uVar19 + 1;
            }
            puVar7[uVar10] = uVar15;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar19 = uVar15;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar15 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0x2e);
              lVar9 = *(long *)(param_1 + 0x28);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar17 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                if (iVar17 != 0) {
                  puVar7 = param_1 + 10;
                  FUN_109849b44(puVar7,iVar17,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_10984bb78;
                  lVar6 = *(long *)(param_1 + 0x2e);
                  lVar9 = *(long *)(param_1 + 0x28);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0x28);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
        }
      }
LAB_10984bb64:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_10984bb7c:
  FUN_10984c4ac(&lStack_a0);
  return uVar12;
}



/* Entry: 10984bbd0; end: 10984bc83;  */

void FUN_10984bbd0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984bc84(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984bc84; end: 10984be33;  */

void FUN_10984bc84(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984c350();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984c144(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984c248(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984bf38(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984c03c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984be34(param_1,&plStack_60);
  return;
}



/* Entry: 10984be34; end: 10984c03b;  */

void FUN_10984be34(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984c350();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984c03c; end: 10984c143;  */

void FUN_10984c03c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984c350();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984c144; end: 10984c247;  */

void FUN_10984c144(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984c350();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984c248; end: 10984c34f;  */

void FUN_10984c248(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984c350();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984c350; end: 10984c4ab;  */

undefined1  [16] FUN_10984c350(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984c4ac; end: 10984c543;  */

long * FUN_10984c4ac(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984c528;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984c528:
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



/* Entry: 10984c544; end: 10984c58f;  */

long * FUN_10984c544(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984c590; end: 10984c68b;  */

uint * FUN_10984c590(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar18 = lVar7 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        FUN_10985d80c(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 10;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x14;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0x1e;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x34);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0x3a);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_10984cae0(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar15 = puVar12[1];
            uVar3 = puVar12[2];
            uVar16 = (ulong)uVar3;
            func_0x00010984d294(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_10984ca88:
              puVar12 = (uint *)0x0;
              goto LAB_10984ca8c;
            }
            uVar19 = 0;
            if (param_1[3] - 1 != uVar15) {
              uVar19 = uVar15 + 1;
            }
            if (param_1[3] <= uVar19) goto LAB_10984ca88;
            plVar11 = (long *)(*(long *)(param_1 + 0x34) + uVar16 * 0x18);
            lVar18 = *(long *)(param_1 + 0x3a);
            uVar6 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
            uVar15 = *param_1;
            if (uVar15 == uVar6) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  uVar13 = 0;
                  lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar18 + (ulong)uVar19 * 4) =
                       *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar6 & 0x1f))
                  ;
                  uVar15 = (uint)LZCOUNT(uVar2) ^ 0x1f;
                  do {
                    uVar6 = (int)param_1 + 0x10;
                    FUN_10985d980();
                    uVar13 = uVar6 | uVar13 << 1;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                  iVar17 = (uVar2 >> 1) - uVar13;
                  if (uVar13 <= uVar2 >> 1) {
                    iVar5 = uVar2 - iVar17;
                    iVar14 = iVar17;
                    if (iVar17 != iVar5) {
                      puVar12 = *(uint **)(param_1 + 0x24);
                      if (puVar12 != *(uint **)(param_1 + 0x20)) {
                        uVar15 = param_1[0x26];
                        uVar6 = *puVar12;
                        uVar2 = uVar15 + 1;
                        param_1[0x26] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0x24) = puVar12 + 1;
                          param_1[0x26] = 0;
                        }
                        iVar14 = iVar5;
                        if ((uVar6 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0)
                        goto LAB_10984ca18;
                      }
                      iVar14 = iVar17;
                      iVar17 = iVar5;
                    }
LAB_10984ca18:
                    lVar9 = *(long *)(param_1 + 0x3a);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar18 = *plVar11;
                    *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar7,lVar7 - lVar18 >> 2);
                    if (iVar17 != 0) {
                      iStack_ac = iVar17;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar3;
                      func_0x00010984d308(&lStack_a0,&iStack_ac);
                    }
                    if (iVar14 != 0) {
                      iStack_ac = iVar14;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar1;
                      func_0x00010984d308(&lStack_a0,&iStack_ac);
                    }
                    goto LAB_10984ca74;
                  }
                }
                goto LAB_10984ca88;
              }
              puVar12 = *(uint **)(param_1 + 0x2e);
              *puVar12 = uVar19;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar15 = 0;
                  if (uVar19 != (int)uVar8 - 1U) {
                    uVar15 = uVar19 + 1;
                  }
                  puVar12[uVar10] = uVar15;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar19 = uVar15;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar15 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0x2e);
                    lVar9 = *(long *)(param_1 + 0x28);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar17 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                      if (iVar17 != 0) {
                        puVar12 = param_1 + 10;
                        FUN_109849b44(puVar12,iVar17,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_10984ca88;
                        lVar7 = *(long *)(param_1 + 0x2e);
                        lVar9 = *(long *)(param_1 + 0x28);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0x28);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar2);
              }
            }
LAB_10984ca74:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_10984ca8c:
        FUN_10984d3bc(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984c68c; end: 10984cadf;  */

undefined8 FUN_10984c68c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x34);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0x3a);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984cae0(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar15 = puVar7[1];
      uVar3 = puVar7[2];
      uVar16 = (ulong)uVar3;
      func_0x00010984d294(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_10984ca88:
        uVar12 = 0;
        goto LAB_10984ca8c;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar15) {
        uVar19 = uVar15 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_10984ca88;
      plVar11 = (long *)(*(long *)(param_1 + 0x34) + uVar16 * 0x18);
      lVar18 = *(long *)(param_1 + 0x3a);
      uVar5 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
      uVar15 = *param_1;
      if (uVar15 == uVar5) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            uVar13 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0x34) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar19 * 4) =
                 *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar5 & 0x1f));
            uVar15 = (uint)LZCOUNT(uVar2) ^ 0x1f;
            do {
              uVar5 = (int)param_1 + 0x10;
              FUN_10985d980();
              uVar13 = uVar5 | uVar13 << 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            iVar17 = (uVar2 >> 1) - uVar13;
            if (uVar13 <= uVar2 >> 1) {
              iVar4 = uVar2 - iVar17;
              iVar14 = iVar17;
              if (iVar17 != iVar4) {
                puVar7 = *(uint **)(param_1 + 0x24);
                if (puVar7 != *(uint **)(param_1 + 0x20)) {
                  uVar15 = param_1[0x26];
                  uVar5 = *puVar7;
                  uVar2 = uVar15 + 1;
                  param_1[0x26] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0x24) = puVar7 + 1;
                    param_1[0x26] = 0;
                  }
                  iVar14 = iVar4;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0) goto LAB_10984ca18;
                }
                iVar14 = iVar17;
                iVar17 = iVar4;
              }
LAB_10984ca18:
              lVar9 = *(long *)(param_1 + 0x3a);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar11;
              *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar6,lVar6 - lVar18 >> 2);
              if (iVar17 != 0) {
                iStack_ac = iVar17;
                uStack_a8 = uVar19;
                uStack_a4 = uVar3;
                func_0x00010984d308(&lStack_a0,&iStack_ac);
              }
              if (iVar14 != 0) {
                iStack_ac = iVar14;
                uStack_a8 = uVar19;
                uStack_a4 = uVar1;
                func_0x00010984d308(&lStack_a0,&iStack_ac);
              }
              goto LAB_10984ca74;
            }
          }
          goto LAB_10984ca88;
        }
        puVar7 = *(uint **)(param_1 + 0x2e);
        *puVar7 = uVar19;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar15 = 0;
            if (uVar19 != (int)uVar8 - 1U) {
              uVar15 = uVar19 + 1;
            }
            puVar7[uVar10] = uVar15;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar19 = uVar15;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar15 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0x2e);
              lVar9 = *(long *)(param_1 + 0x28);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar17 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                if (iVar17 != 0) {
                  puVar7 = param_1 + 10;
                  FUN_109849b44(puVar7,iVar17,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_10984ca88;
                  lVar6 = *(long *)(param_1 + 0x2e);
                  lVar9 = *(long *)(param_1 + 0x28);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0x28);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
        }
      }
LAB_10984ca74:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_10984ca8c:
  FUN_10984d3bc(&lStack_a0);
  return uVar12;
}



/* Entry: 10984cae0; end: 10984cb93;  */

void FUN_10984cae0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984cb94(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984cb94; end: 10984cd43;  */

void FUN_10984cb94(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984d260();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984d054(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984d158(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984ce48(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984cf4c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984cd44(param_1,&plStack_60);
  return;
}



/* Entry: 10984cd44; end: 10984cf4b;  */

void FUN_10984cd44(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984d260();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984cf4c; end: 10984d053;  */

void FUN_10984cf4c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984d260();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984d054; end: 10984d157;  */

void FUN_10984d054(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984d260();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984d158; end: 10984d25f;  */

void FUN_10984d158(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984d260();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984d260; end: 10984d3bb;  */

undefined1  [16] FUN_10984d260(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984d3bc; end: 10984d453;  */

long * FUN_10984d3bc(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984d438;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984d438:
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



/* Entry: 10984d454; end: 10984d49f;  */

long * FUN_10984d454(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984d4a0; end: 10984d603;  */

uint * FUN_10984d4a0(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar18 = lVar7 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        func_0x00010984d59c(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xca;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xd4;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xde;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0xf4);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0xfa);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_10984da68(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar15 = puVar12[1];
            uVar3 = puVar12[2];
            uVar16 = (ulong)uVar3;
            func_0x00010984e21c(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_10984da10:
              puVar12 = (uint *)0x0;
              goto LAB_10984da14;
            }
            uVar19 = 0;
            if (param_1[3] - 1 != uVar15) {
              uVar19 = uVar15 + 1;
            }
            if (param_1[3] <= uVar19) goto LAB_10984da10;
            plVar11 = (long *)(*(long *)(param_1 + 0xf4) + uVar16 * 0x18);
            lVar18 = *(long *)(param_1 + 0xfa);
            uVar5 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
            uVar15 = *param_1;
            if (uVar15 == uVar5) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  uVar17 = 0;
                  lVar18 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar18 + (ulong)uVar19 * 4) =
                       *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar5 & 0x1f))
                  ;
                  uVar16 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
                  puVar12 = param_1 + 4;
                  do {
                    uVar15 = (uint)puVar12;
                    FUN_10985d980();
                    uVar17 = uVar15 | uVar17 << 1;
                    puVar12 = puVar12 + 6;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                  iVar14 = (uVar2 >> 1) - uVar17;
                  if (uVar17 <= uVar2 >> 1) {
                    iVar6 = uVar2 - iVar14;
                    iVar13 = iVar14;
                    if (iVar14 != iVar6) {
                      puVar12 = *(uint **)(param_1 + 0xe4);
                      if (puVar12 != *(uint **)(param_1 + 0xe0)) {
                        uVar15 = param_1[0xe6];
                        uVar5 = *puVar12;
                        uVar2 = uVar15 + 1;
                        param_1[0xe6] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0xe4) = puVar12 + 1;
                          param_1[0xe6] = 0;
                        }
                        iVar13 = iVar6;
                        if ((uVar5 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0)
                        goto LAB_10984d99c;
                      }
                      iVar13 = iVar14;
                      iVar14 = iVar6;
                    }
LAB_10984d99c:
                    lVar9 = *(long *)(param_1 + 0xfa);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar18 = *plVar11;
                    *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar7,lVar7 - lVar18 >> 2);
                    if (iVar14 != 0) {
                      iStack_ac = iVar14;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar3;
                      func_0x00010984e290(&lStack_a0,&iStack_ac);
                    }
                    if (iVar13 != 0) {
                      iStack_ac = iVar13;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar1;
                      func_0x00010984e290(&lStack_a0,&iStack_ac);
                    }
                    goto LAB_10984d9fc;
                  }
                }
                goto LAB_10984da10;
              }
              puVar12 = *(uint **)(param_1 + 0xee);
              *puVar12 = uVar19;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar15 = 0;
                  if (uVar19 != (int)uVar8 - 1U) {
                    uVar15 = uVar19 + 1;
                  }
                  puVar12[uVar10] = uVar15;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar19 = uVar15;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar15 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0xee);
                    lVar9 = *(long *)(param_1 + 0xe8);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar14 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                      if (iVar14 != 0) {
                        puVar12 = param_1 + 0xca;
                        FUN_109849b44(puVar12,iVar14,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_10984da10;
                        lVar7 = *(long *)(param_1 + 0xee);
                        lVar9 = *(long *)(param_1 + 0xe8);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0xe8);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar2);
              }
            }
LAB_10984d9fc:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_10984da14:
        FUN_10984e344(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984d604; end: 10984da67;  */

undefined8 FUN_10984d604(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0xf4);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0xfa);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984da68(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar15 = puVar7[1];
      uVar3 = puVar7[2];
      uVar16 = (ulong)uVar3;
      func_0x00010984e21c(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_10984da10:
        uVar12 = 0;
        goto LAB_10984da14;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar15) {
        uVar19 = uVar15 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_10984da10;
      plVar11 = (long *)(*(long *)(param_1 + 0xf4) + uVar16 * 0x18);
      lVar18 = *(long *)(param_1 + 0xfa);
      uVar4 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
      uVar15 = *param_1;
      if (uVar15 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            uVar17 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar19 * 4) =
                 *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar4 & 0x1f));
            uVar16 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
            puVar7 = param_1 + 4;
            do {
              uVar15 = (uint)puVar7;
              FUN_10985d980();
              uVar17 = uVar15 | uVar17 << 1;
              puVar7 = puVar7 + 6;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            iVar14 = (uVar2 >> 1) - uVar17;
            if (uVar17 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar14;
              iVar13 = iVar14;
              if (iVar14 != iVar5) {
                puVar7 = *(uint **)(param_1 + 0xe4);
                if (puVar7 != *(uint **)(param_1 + 0xe0)) {
                  uVar15 = param_1[0xe6];
                  uVar4 = *puVar7;
                  uVar2 = uVar15 + 1;
                  param_1[0xe6] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar7 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar13 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0) goto LAB_10984d99c;
                }
                iVar13 = iVar14;
                iVar14 = iVar5;
              }
LAB_10984d99c:
              lVar9 = *(long *)(param_1 + 0xfa);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar11;
              *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar6,lVar6 - lVar18 >> 2);
              if (iVar14 != 0) {
                iStack_ac = iVar14;
                uStack_a8 = uVar19;
                uStack_a4 = uVar3;
                func_0x00010984e290(&lStack_a0,&iStack_ac);
              }
              if (iVar13 != 0) {
                iStack_ac = iVar13;
                uStack_a8 = uVar19;
                uStack_a4 = uVar1;
                func_0x00010984e290(&lStack_a0,&iStack_ac);
              }
              goto LAB_10984d9fc;
            }
          }
          goto LAB_10984da10;
        }
        puVar7 = *(uint **)(param_1 + 0xee);
        *puVar7 = uVar19;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar15 = 0;
            if (uVar19 != (int)uVar8 - 1U) {
              uVar15 = uVar19 + 1;
            }
            puVar7[uVar10] = uVar15;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar19 = uVar15;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar15 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0xee);
              lVar9 = *(long *)(param_1 + 0xe8);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar14 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                if (iVar14 != 0) {
                  puVar7 = param_1 + 0xca;
                  FUN_109849b44(puVar7,iVar14,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_10984da10;
                  lVar6 = *(long *)(param_1 + 0xee);
                  lVar9 = *(long *)(param_1 + 0xe8);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0xe8);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
        }
      }
LAB_10984d9fc:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_10984da14:
  FUN_10984e344(&lStack_a0);
  return uVar12;
}



/* Entry: 10984da68; end: 10984db1b;  */

void FUN_10984da68(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984db1c(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984db1c; end: 10984dccb;  */

void FUN_10984db1c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984e1e8();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984dfdc(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984e0e0(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984ddd0(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984ded4(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984dccc(param_1,&plStack_60);
  return;
}



/* Entry: 10984dccc; end: 10984ded3;  */

void FUN_10984dccc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984e1e8();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984ded4; end: 10984dfdb;  */

void FUN_10984ded4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984e1e8();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984dfdc; end: 10984e0df;  */

void FUN_10984dfdc(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984e1e8();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984e0e0; end: 10984e1e7;  */

void FUN_10984e0e0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984e1e8();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984e1e8; end: 10984e343;  */

undefined1  [16] FUN_10984e1e8(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984e344; end: 10984e3db;  */

long * FUN_10984e344(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984e3c0;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984e3c0:
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



/* Entry: 10984e3dc; end: 10984e427;  */

long * FUN_10984e3dc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984e428; end: 10984e523;  */

uint * FUN_10984e428(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar4 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar4;
    lVar7 = param_2[2];
    lVar18 = lVar7 + 4;
    param_2[2] = lVar18;
    if ((uVar4 < 0x21) && (lVar7 + 8 <= param_2[1])) {
      uVar4 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar4;
      param_2[2] = param_2[2] + 4;
      if (uVar4 == 0) {
        return (uint *)0x1;
      }
      if (uVar4 <= param_4) {
        param_1[2] = 0;
        puVar12 = param_1 + 4;
        func_0x00010984d59c(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xca;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xd4;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        puVar12 = param_1 + 0xde;
        FUN_10985d744(puVar12,param_2);
        if ((int)puVar12 == 0) {
          return puVar12;
        }
        uVar4 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0xf4);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar11 = *(long **)(param_1 + 0xfa);
        if (*plVar11 != 0) {
          plVar11[1] = *plVar11;
          __ZdlPv();
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
        }
        plVar11[1] = lStack_98;
        *plVar11 = lStack_a0;
        plVar11[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar4;
        FUN_10984e988(&lStack_a0,&uStack_6c);
        puVar12 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar12 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar2 = *puVar12;
            uVar15 = puVar12[1];
            uVar3 = puVar12[2];
            uVar16 = (ulong)uVar3;
            func_0x00010984f13c(&lStack_a0,1);
            if (uVar4 < uVar2) {
LAB_10984e930:
              puVar12 = (uint *)0x0;
              goto LAB_10984e934;
            }
            uVar19 = 0;
            if (param_1[3] - 1 != uVar15) {
              uVar19 = uVar15 + 1;
            }
            if (param_1[3] <= uVar19) goto LAB_10984e930;
            plVar11 = (long *)(*(long *)(param_1 + 0xf4) + uVar16 * 0x18);
            lVar18 = *(long *)(param_1 + 0xfa);
            uVar5 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
            uVar15 = *param_1;
            if (uVar15 == uVar5) {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                FUN_109849a28(param_3,plVar11);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar2) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar3 + 1;
                  FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                                plVar11[1] - *plVar11 >> 2);
                  uVar17 = 0;
                  lVar18 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
                  *(int *)(lVar18 + (ulong)uVar19 * 4) =
                       *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar5 & 0x1f))
                  ;
                  uVar16 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
                  puVar12 = param_1 + 4;
                  do {
                    uVar15 = (uint)puVar12;
                    FUN_10985d980();
                    uVar17 = uVar15 | uVar17 << 1;
                    puVar12 = puVar12 + 6;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                  iVar14 = (uVar2 >> 1) - uVar17;
                  if (uVar17 <= uVar2 >> 1) {
                    iVar6 = uVar2 - iVar14;
                    iVar13 = iVar14;
                    if (iVar14 != iVar6) {
                      puVar12 = *(uint **)(param_1 + 0xe4);
                      if (puVar12 != *(uint **)(param_1 + 0xe0)) {
                        uVar15 = param_1[0xe6];
                        uVar5 = *puVar12;
                        uVar2 = uVar15 + 1;
                        param_1[0xe6] = uVar2;
                        if (uVar2 == 0x20) {
                          *(uint **)(param_1 + 0xe4) = puVar12 + 1;
                          param_1[0xe6] = 0;
                        }
                        iVar13 = iVar6;
                        if ((uVar5 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0)
                        goto LAB_10984e8bc;
                      }
                      iVar13 = iVar14;
                      iVar14 = iVar6;
                    }
LAB_10984e8bc:
                    lVar9 = *(long *)(param_1 + 0xfa);
                    plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
                    lVar18 = *plVar11;
                    *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
                    lVar7 = plVar11[1];
                    FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar7,lVar7 - lVar18 >> 2);
                    if (iVar14 != 0) {
                      iStack_ac = iVar14;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar3;
                      func_0x00010984f1b0(&lStack_a0,&iStack_ac);
                    }
                    if (iVar13 != 0) {
                      iStack_ac = iVar13;
                      uStack_a8 = uVar19;
                      uStack_a4 = uVar1;
                      func_0x00010984f1b0(&lStack_a0,&iStack_ac);
                    }
                    goto LAB_10984e91c;
                  }
                }
                goto LAB_10984e930;
              }
              puVar12 = *(uint **)(param_1 + 0xee);
              *puVar12 = uVar19;
              uVar8 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar10 = 1;
                do {
                  uVar15 = 0;
                  if (uVar19 != (int)uVar8 - 1U) {
                    uVar15 = uVar19 + 1;
                  }
                  puVar12[uVar10] = uVar15;
                  uVar10 = uVar10 + 1;
                  uVar8 = (ulong)param_1[3];
                  uVar19 = uVar15;
                } while (uVar10 < uVar8);
              }
              if (uVar2 != 0) {
                uVar15 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar8 = 0;
                    lVar7 = *(long *)(param_1 + 0xee);
                    lVar9 = *(long *)(param_1 + 0xe8);
                    do {
                      *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar7 + uVar8 * 4) * 4) = 0;
                      uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      iVar14 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                      if (iVar14 != 0) {
                        puVar12 = param_1 + 0xca;
                        FUN_109849b44(puVar12,iVar14,lVar9 + uVar10 * 4);
                        if ((int)puVar12 == 0) goto LAB_10984e930;
                        lVar7 = *(long *)(param_1 + 0xee);
                        lVar9 = *(long *)(param_1 + 0xe8);
                        uVar10 = (ulong)*(uint *)(lVar7 + uVar8 * 4);
                      }
                      *(uint *)(lVar9 + uVar10 * 4) =
                           *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0xe8);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar2);
              }
            }
LAB_10984e91c:
          } while (lStack_78 != 0);
          puVar12 = (uint *)0x1;
        }
LAB_10984e934:
        FUN_10984f264(&lStack_a0);
        return puVar12;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984e524; end: 10984e987;  */

undefined8 FUN_10984e524(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0xf4);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar11 = *(long **)(param_1 + 0xfa);
  if (*plVar11 != 0) {
    plVar11[1] = *plVar11;
    __ZdlPv();
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
  }
  plVar11[1] = lStack_98;
  *plVar11 = lStack_a0;
  plVar11[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984e988(&lStack_a0,&uStack_6c);
  uVar12 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar7 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                       ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar2 = *puVar7;
      uVar15 = puVar7[1];
      uVar3 = puVar7[2];
      uVar16 = (ulong)uVar3;
      func_0x00010984f13c(&lStack_a0,1);
      if (param_2 < uVar2) {
LAB_10984e930:
        uVar12 = 0;
        goto LAB_10984e934;
      }
      uVar19 = 0;
      if (param_1[3] - 1 != uVar15) {
        uVar19 = uVar15 + 1;
      }
      if (param_1[3] <= uVar19) goto LAB_10984e930;
      plVar11 = (long *)(*(long *)(param_1 + 0xf4) + uVar16 * 0x18);
      lVar18 = *(long *)(param_1 + 0xfa);
      uVar4 = *(uint *)(*(long *)(lVar18 + uVar16 * 0x18) + (ulong)uVar19 * 4);
      uVar15 = *param_1;
      if (uVar15 == uVar4) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_109849a28(param_3,plVar11);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar2) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar3 + 1;
            FUN_1093784d8(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18,*plVar11,plVar11[1],
                          plVar11[1] - *plVar11 >> 2);
            uVar17 = 0;
            lVar18 = *(long *)(*(long *)(param_1 + 0xf4) + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + (ulong)uVar19 * 4) =
                 *(int *)(lVar18 + (ulong)uVar19 * 4) + (1 << (ulong)(uVar15 + ~uVar4 & 0x1f));
            uVar16 = (ulong)((uint)LZCOUNT(uVar2) ^ 0x1f);
            puVar7 = param_1 + 4;
            do {
              uVar15 = (uint)puVar7;
              FUN_10985d980();
              uVar17 = uVar15 | uVar17 << 1;
              puVar7 = puVar7 + 6;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            iVar14 = (uVar2 >> 1) - uVar17;
            if (uVar17 <= uVar2 >> 1) {
              iVar5 = uVar2 - iVar14;
              iVar13 = iVar14;
              if (iVar14 != iVar5) {
                puVar7 = *(uint **)(param_1 + 0xe4);
                if (puVar7 != *(uint **)(param_1 + 0xe0)) {
                  uVar15 = param_1[0xe6];
                  uVar4 = *puVar7;
                  uVar2 = uVar15 + 1;
                  param_1[0xe6] = uVar2;
                  if (uVar2 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar7 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar13 = iVar5;
                  if ((uVar4 & 0x80000000U >> (ulong)(uVar15 & 0x1f)) != 0) goto LAB_10984e8bc;
                }
                iVar13 = iVar14;
                iVar14 = iVar5;
              }
LAB_10984e8bc:
              lVar9 = *(long *)(param_1 + 0xfa);
              plVar11 = (long *)(lVar9 + (ulong)uVar3 * 0x18);
              lVar18 = *plVar11;
              *(int *)(lVar18 + (ulong)uVar19 * 4) = *(int *)(lVar18 + (ulong)uVar19 * 4) + 1;
              lVar6 = plVar11[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar6,lVar6 - lVar18 >> 2);
              if (iVar14 != 0) {
                iStack_ac = iVar14;
                uStack_a8 = uVar19;
                uStack_a4 = uVar3;
                func_0x00010984f1b0(&lStack_a0,&iStack_ac);
              }
              if (iVar13 != 0) {
                iStack_ac = iVar13;
                uStack_a8 = uVar19;
                uStack_a4 = uVar1;
                func_0x00010984f1b0(&lStack_a0,&iStack_ac);
              }
              goto LAB_10984e91c;
            }
          }
          goto LAB_10984e930;
        }
        puVar7 = *(uint **)(param_1 + 0xee);
        *puVar7 = uVar19;
        uVar8 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar10 = 1;
          do {
            uVar15 = 0;
            if (uVar19 != (int)uVar8 - 1U) {
              uVar15 = uVar19 + 1;
            }
            puVar7[uVar10] = uVar15;
            uVar10 = uVar10 + 1;
            uVar8 = (ulong)param_1[3];
            uVar19 = uVar15;
          } while (uVar10 < uVar8);
        }
        if (uVar2 != 0) {
          uVar15 = 0;
          do {
            if (param_1[3] != 0) {
              uVar8 = 0;
              lVar6 = *(long *)(param_1 + 0xee);
              lVar9 = *(long *)(param_1 + 0xe8);
              do {
                *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar6 + uVar8 * 4) * 4) = 0;
                uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                iVar14 = *param_1 - *(int *)(*(long *)(lVar18 + uVar16 * 0x18) + uVar10 * 4);
                if (iVar14 != 0) {
                  puVar7 = param_1 + 0xca;
                  FUN_109849b44(puVar7,iVar14,lVar9 + uVar10 * 4);
                  if ((int)puVar7 == 0) goto LAB_10984e930;
                  lVar6 = *(long *)(param_1 + 0xee);
                  lVar9 = *(long *)(param_1 + 0xe8);
                  uVar10 = (ulong)*(uint *)(lVar6 + uVar8 * 4);
                }
                *(uint *)(lVar9 + uVar10 * 4) =
                     *(uint *)(lVar9 + uVar10 * 4) | *(uint *)(*plVar11 + uVar10 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0xe8);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar2);
        }
      }
LAB_10984e91c:
    } while (lStack_78 != 0);
    uVar12 = 1;
  }
LAB_10984e934:
  FUN_10984f264(&lStack_a0);
  return uVar12;
}



/* Entry: 10984e988; end: 10984ea3b;  */

void FUN_10984e988(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984ea3c(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984ea3c; end: 10984ebeb;  */

void FUN_10984ea3c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10984f108();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984eefc(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984f000(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984ecf0(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984edf4(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984ebec(param_1,&plStack_60);
  return;
}



/* Entry: 10984ebec; end: 10984edf3;  */

void FUN_10984ebec(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10984f108();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984edf4; end: 10984eefb;  */

void FUN_10984edf4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10984f108();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984eefc; end: 10984efff;  */

void FUN_10984eefc(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10984f108();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984f000; end: 10984f107;  */

void FUN_10984f000(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10984f108();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 10984f108; end: 10984f263;  */

undefined1  [16] FUN_10984f108(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 10984f264; end: 10984f2fb;  */

long * FUN_10984f264(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_10984f2e0;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_10984f2e0:
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



/* Entry: 10984f2fc; end: 10984f347;  */

long * FUN_10984f2fc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984f348; end: 10984f443;  */

uint * FUN_10984f348(uint *param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  if (param_2[2] + 4 <= param_2[1]) {
    uVar5 = *(uint *)(*param_2 + param_2[2]);
    *param_1 = uVar5;
    lVar11 = param_2[2];
    lVar18 = lVar11 + 4;
    param_2[2] = lVar18;
    if ((uVar5 < 0x21) && (lVar11 + 8 <= param_2[1])) {
      uVar5 = *(uint *)(*param_2 + lVar18);
      param_1[1] = uVar5;
      param_2[2] = param_2[2] + 4;
      if (uVar5 == 0) {
        return (uint *)0x1;
      }
      if (uVar5 <= param_4) {
        param_1[2] = 0;
        puVar17 = param_1 + 4;
        func_0x00010984d59c(puVar17,param_2);
        if ((int)puVar17 == 0) {
          return puVar17;
        }
        puVar17 = param_1 + 0xca;
        FUN_10985d744(puVar17,param_2);
        if ((int)puVar17 == 0) {
          return puVar17;
        }
        puVar17 = param_1 + 0xd4;
        FUN_10985d744(puVar17,param_2);
        if ((int)puVar17 == 0) {
          return puVar17;
        }
        puVar17 = param_1 + 0xde;
        FUN_10985d744(puVar17,param_2);
        if ((int)puVar17 == 0) {
          return puVar17;
        }
        uVar5 = param_1[1];
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar16 = *(long **)(param_1 + 0xf4);
        if (*plVar16 != 0) {
          plVar16[1] = *plVar16;
          __ZdlPv();
          *plVar16 = 0;
          plVar16[1] = 0;
          plVar16[2] = 0;
        }
        plVar16[1] = lStack_98;
        *plVar16 = lStack_a0;
        plVar16[2] = lStack_90;
        uStack_6c = 0;
        FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
        plVar16 = *(long **)(param_1 + 0xfa);
        if (*plVar16 != 0) {
          plVar16[1] = *plVar16;
          __ZdlPv();
          *plVar16 = 0;
          plVar16[1] = 0;
          plVar16[2] = 0;
        }
        plVar16[1] = lStack_98;
        *plVar16 = lStack_a0;
        plVar16[2] = lStack_90;
        uStack_68 = 0;
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        uStack_6c = uVar5;
        FUN_10984f8c8(&lStack_a0,&uStack_6c);
        puVar17 = (uint *)0x1;
        if (lStack_78 != 0) {
          do {
            lStack_78 = lStack_78 + -1;
            puVar17 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                              ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
            uVar3 = *puVar17;
            uVar8 = puVar17[1];
            uVar4 = puVar17[2];
            func_0x00010985007c(&lStack_a0,1);
            if (uVar5 < uVar3) {
LAB_10984f86c:
              puVar17 = (uint *)0x0;
              goto LAB_10984f870;
            }
            lVar18 = *(long *)(param_1 + 0xf4);
            plVar16 = (long *)(*(long *)(param_1 + 0xfa) + (ulong)uVar4 * 0x18);
            puVar17 = param_1;
            FUN_1098723e8(param_1,uVar3,plVar16,uVar8);
            uVar8 = (uint)puVar17;
            if (param_1[3] <= uVar8) goto LAB_10984f86c;
            plVar2 = (long *)(lVar18 + (ulong)uVar4 * 0x18);
            uVar6 = *(uint *)(*plVar16 + ((ulong)puVar17 & 0xffffffff) * 4);
            uVar19 = *param_1;
            if (uVar19 == uVar6) {
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                FUN_109849a28(param_3,plVar2);
                *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                param_1[2] = param_1[2] + 1;
              }
            }
            else {
              if (2 < uVar3) {
                if (param_1[2] <= param_1[1]) {
                  uVar1 = uVar4 + 1;
                  lVar18 = *(long *)(param_1 + 0xf4);
                  if ((long *)(lVar18 + (ulong)uVar1 * 0x18) != plVar2) {
                    FUN_1093784d8();
                    lVar18 = *(long *)(param_1 + 0xf4);
                  }
                  uVar14 = 0;
                  lVar18 = *(long *)(lVar18 + (ulong)uVar1 * 0x18);
                  *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) =
                       *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) +
                       (1 << (ulong)(uVar19 + ~uVar6 & 0x1f));
                  uVar12 = (ulong)((uint)LZCOUNT(uVar3) ^ 0x1f);
                  puVar9 = param_1 + 4;
                  do {
                    uVar19 = (uint)puVar9;
                    FUN_10985d980();
                    uVar14 = uVar19 | uVar14 << 1;
                    puVar9 = puVar9 + 6;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                  iVar15 = (uVar3 >> 1) - uVar14;
                  if (uVar14 <= uVar3 >> 1) {
                    iVar7 = uVar3 - iVar15;
                    iVar20 = iVar15;
                    if (iVar15 != iVar7) {
                      puVar9 = *(uint **)(param_1 + 0xe4);
                      if (puVar9 != *(uint **)(param_1 + 0xe0)) {
                        uVar19 = param_1[0xe6];
                        uVar6 = *puVar9;
                        uVar3 = uVar19 + 1;
                        param_1[0xe6] = uVar3;
                        if (uVar3 == 0x20) {
                          *(uint **)(param_1 + 0xe4) = puVar9 + 1;
                          param_1[0xe6] = 0;
                        }
                        iVar20 = iVar7;
                        if ((uVar6 & 0x80000000U >> (ulong)(uVar19 & 0x1f)) != 0)
                        goto LAB_10984f7f8;
                      }
                      iVar20 = iVar15;
                      iVar15 = iVar7;
                    }
LAB_10984f7f8:
                    lVar10 = *(long *)(param_1 + 0xfa);
                    plVar16 = (long *)(lVar10 + (ulong)uVar4 * 0x18);
                    lVar18 = *plVar16;
                    *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) =
                         *(int *)(lVar18 + ((ulong)puVar17 & 0xffffffff) * 4) + 1;
                    lVar11 = plVar16[1];
                    FUN_1093784d8(lVar10 + (ulong)uVar1 * 0x18,lVar18,lVar11,lVar11 - lVar18 >> 2);
                    if (iVar15 != 0) {
                      iStack_ac = iVar15;
                      uStack_a8 = uVar8;
                      uStack_a4 = uVar4;
                      func_0x0001098500f0(&lStack_a0,&iStack_ac);
                    }
                    if (iVar20 != 0) {
                      iStack_ac = iVar20;
                      uStack_a8 = uVar8;
                      uStack_a4 = uVar1;
                      func_0x0001098500f0(&lStack_a0,&iStack_ac);
                    }
                    goto LAB_10984f858;
                  }
                }
                goto LAB_10984f86c;
              }
              puVar9 = *(uint **)(param_1 + 0xee);
              *puVar9 = uVar8;
              uVar12 = (ulong)param_1[3];
              if (1 < param_1[3]) {
                uVar13 = 1;
                do {
                  uVar8 = 0;
                  if ((int)puVar17 != (int)uVar12 + -1) {
                    uVar8 = (int)puVar17 + 1;
                  }
                  puVar17 = (uint *)(ulong)uVar8;
                  puVar9[uVar13] = uVar8;
                  uVar13 = uVar13 + 1;
                  uVar12 = (ulong)param_1[3];
                } while (uVar13 < uVar12);
              }
              if (uVar3 != 0) {
                uVar8 = 0;
                do {
                  if (param_1[3] != 0) {
                    uVar12 = 0;
                    lVar18 = *(long *)(param_1 + 0xee);
                    lVar11 = *(long *)(param_1 + 0xe8);
                    do {
                      *(undefined4 *)(lVar11 + (ulong)*(uint *)(lVar18 + uVar12 * 4) * 4) = 0;
                      uVar13 = (ulong)*(uint *)(lVar18 + uVar12 * 4);
                      iVar15 = *param_1 - *(int *)(*plVar16 + uVar13 * 4);
                      if (iVar15 != 0) {
                        puVar17 = param_1 + 0xca;
                        FUN_109849b44(puVar17,iVar15,lVar11 + uVar13 * 4);
                        if ((int)puVar17 == 0) goto LAB_10984f86c;
                        lVar18 = *(long *)(param_1 + 0xee);
                        lVar11 = *(long *)(param_1 + 0xe8);
                        uVar13 = (ulong)*(uint *)(lVar18 + uVar12 * 4);
                      }
                      *(uint *)(lVar11 + uVar13 * 4) =
                           *(uint *)(lVar11 + uVar13 * 4) | *(uint *)(*plVar2 + uVar13 * 4);
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < param_1[3]);
                  }
                  FUN_109849a28(param_3,param_1 + 0xe8);
                  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
                  param_1[2] = param_1[2] + 1;
                  uVar8 = uVar8 + 1;
                } while (uVar8 != uVar3);
              }
            }
LAB_10984f858:
          } while (lStack_78 != 0);
          puVar17 = (uint *)0x1;
        }
LAB_10984f870:
        FUN_1098501a4(&lStack_a0);
        return puVar17;
      }
    }
  }
  return (uint *)0x0;
}



/* Entry: 10984f444; end: 10984f8c7;  */

undefined8 FUN_10984f444(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  int iStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar16 = *(long **)(param_1 + 0xf4);
  if (*plVar16 != 0) {
    plVar16[1] = *plVar16;
    __ZdlPv();
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
  }
  plVar16[1] = lStack_98;
  *plVar16 = lStack_a0;
  plVar16[2] = lStack_90;
  uStack_6c = 0;
  FUN_109849bf0(&lStack_a0,param_1[3],&uStack_6c);
  plVar16 = *(long **)(param_1 + 0xfa);
  if (*plVar16 != 0) {
    plVar16[1] = *plVar16;
    __ZdlPv();
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = 0;
  }
  plVar16[1] = lStack_98;
  *plVar16 = lStack_a0;
  plVar16[2] = lStack_90;
  uStack_68 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  uStack_6c = param_2;
  FUN_10984f8c8(&lStack_a0,&uStack_6c);
  uVar17 = 1;
  if (lStack_78 != 0) {
    do {
      lStack_78 = lStack_78 + -1;
      puVar10 = (uint *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) / 0x155) * 8) +
                        ((ulong)(lStack_80 + lStack_78) % 0x155) * 0xc);
      uVar3 = *puVar10;
      uVar7 = puVar10[1];
      uVar4 = puVar10[2];
      func_0x00010985007c(&lStack_a0,1);
      if (param_2 < uVar3) {
LAB_10984f86c:
        uVar17 = 0;
        goto LAB_10984f870;
      }
      lVar18 = *(long *)(param_1 + 0xf4);
      plVar16 = (long *)(*(long *)(param_1 + 0xfa) + (ulong)uVar4 * 0x18);
      puVar10 = param_1;
      FUN_1098723e8(param_1,uVar3,plVar16,uVar7);
      uVar7 = (uint)puVar10;
      if (param_1[3] <= uVar7) goto LAB_10984f86c;
      plVar2 = (long *)(lVar18 + (ulong)uVar4 * 0x18);
      uVar5 = *(uint *)(*plVar16 + ((ulong)puVar10 & 0xffffffff) * 4);
      uVar19 = *param_1;
      if (uVar19 == uVar5) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          FUN_109849a28(param_3,plVar2);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
          param_1[2] = param_1[2] + 1;
        }
      }
      else {
        if (2 < uVar3) {
          if (param_1[2] <= param_1[1]) {
            uVar1 = uVar4 + 1;
            lVar18 = *(long *)(param_1 + 0xf4);
            if ((long *)(lVar18 + (ulong)uVar1 * 0x18) != plVar2) {
              FUN_1093784d8();
              lVar18 = *(long *)(param_1 + 0xf4);
            }
            uVar14 = 0;
            lVar18 = *(long *)(lVar18 + (ulong)uVar1 * 0x18);
            *(int *)(lVar18 + ((ulong)puVar10 & 0xffffffff) * 4) =
                 *(int *)(lVar18 + ((ulong)puVar10 & 0xffffffff) * 4) +
                 (1 << (ulong)(uVar19 + ~uVar5 & 0x1f));
            uVar11 = (ulong)((uint)LZCOUNT(uVar3) ^ 0x1f);
            puVar8 = param_1 + 4;
            do {
              uVar19 = (uint)puVar8;
              FUN_10985d980();
              uVar14 = uVar19 | uVar14 << 1;
              puVar8 = puVar8 + 6;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            iVar15 = (uVar3 >> 1) - uVar14;
            if (uVar14 <= uVar3 >> 1) {
              iVar6 = uVar3 - iVar15;
              iVar20 = iVar15;
              if (iVar15 != iVar6) {
                puVar8 = *(uint **)(param_1 + 0xe4);
                if (puVar8 != *(uint **)(param_1 + 0xe0)) {
                  uVar19 = param_1[0xe6];
                  uVar5 = *puVar8;
                  uVar3 = uVar19 + 1;
                  param_1[0xe6] = uVar3;
                  if (uVar3 == 0x20) {
                    *(uint **)(param_1 + 0xe4) = puVar8 + 1;
                    param_1[0xe6] = 0;
                  }
                  iVar20 = iVar6;
                  if ((uVar5 & 0x80000000U >> (ulong)(uVar19 & 0x1f)) != 0) goto LAB_10984f7f8;
                }
                iVar20 = iVar15;
                iVar15 = iVar6;
              }
LAB_10984f7f8:
              lVar9 = *(long *)(param_1 + 0xfa);
              plVar16 = (long *)(lVar9 + (ulong)uVar4 * 0x18);
              lVar18 = *plVar16;
              *(int *)(lVar18 + ((ulong)puVar10 & 0xffffffff) * 4) =
                   *(int *)(lVar18 + ((ulong)puVar10 & 0xffffffff) * 4) + 1;
              lVar12 = plVar16[1];
              FUN_1093784d8(lVar9 + (ulong)uVar1 * 0x18,lVar18,lVar12,lVar12 - lVar18 >> 2);
              if (iVar15 != 0) {
                iStack_ac = iVar15;
                uStack_a8 = uVar7;
                uStack_a4 = uVar4;
                func_0x0001098500f0(&lStack_a0,&iStack_ac);
              }
              if (iVar20 != 0) {
                iStack_ac = iVar20;
                uStack_a8 = uVar7;
                uStack_a4 = uVar1;
                func_0x0001098500f0(&lStack_a0,&iStack_ac);
              }
              goto LAB_10984f858;
            }
          }
          goto LAB_10984f86c;
        }
        puVar8 = *(uint **)(param_1 + 0xee);
        *puVar8 = uVar7;
        uVar11 = (ulong)param_1[3];
        if (1 < param_1[3]) {
          uVar13 = 1;
          do {
            uVar7 = 0;
            if ((int)puVar10 != (int)uVar11 + -1) {
              uVar7 = (int)puVar10 + 1;
            }
            puVar10 = (uint *)(ulong)uVar7;
            puVar8[uVar13] = uVar7;
            uVar13 = uVar13 + 1;
            uVar11 = (ulong)param_1[3];
          } while (uVar13 < uVar11);
        }
        if (uVar3 != 0) {
          uVar7 = 0;
          do {
            if (param_1[3] != 0) {
              uVar11 = 0;
              lVar18 = *(long *)(param_1 + 0xee);
              lVar12 = *(long *)(param_1 + 0xe8);
              do {
                *(undefined4 *)(lVar12 + (ulong)*(uint *)(lVar18 + uVar11 * 4) * 4) = 0;
                uVar13 = (ulong)*(uint *)(lVar18 + uVar11 * 4);
                iVar15 = *param_1 - *(int *)(*plVar16 + uVar13 * 4);
                if (iVar15 != 0) {
                  puVar10 = param_1 + 0xca;
                  FUN_109849b44(puVar10,iVar15,lVar12 + uVar13 * 4);
                  if ((int)puVar10 == 0) goto LAB_10984f86c;
                  lVar18 = *(long *)(param_1 + 0xee);
                  lVar12 = *(long *)(param_1 + 0xe8);
                  uVar13 = (ulong)*(uint *)(lVar18 + uVar11 * 4);
                }
                *(uint *)(lVar12 + uVar13 * 4) =
                     *(uint *)(lVar12 + uVar13 * 4) | *(uint *)(*plVar2 + uVar13 * 4);
                uVar11 = uVar11 + 1;
              } while (uVar11 < param_1[3]);
            }
            FUN_109849a28(param_3,param_1 + 0xe8);
            *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
            param_1[2] = param_1[2] + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar3);
        }
      }
LAB_10984f858:
    } while (lStack_78 != 0);
    uVar17 = 1;
  }
LAB_10984f870:
  FUN_1098501a4(&lStack_a0);
  return uVar17;
}



/* Entry: 10984f8c8; end: 10984f97b;  */

void FUN_10984f8c8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x155 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10984f97c(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0x155) * 8) + (uVar4 % 0x155) * 0xc);
  uVar5 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar3 = uVar5;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10984f97c; end: 10984fb2b;  */

void FUN_10984f97c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_109850048();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0xffc;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10984fe3c(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10984ff40(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0xffc;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010984fc30(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10984fd34(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10984fb2c(param_1,&plStack_60);
  return;
}



/* Entry: 10984fb2c; end: 10984fd33;  */

void FUN_10984fb2c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_109850048();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984fd34; end: 10984fe3b;  */

void FUN_10984fd34(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_109850048();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
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



/* Entry: 10984fe3c; end: 10984ff3f;  */

void FUN_10984fe3c(ulong *param_1,undefined8 *param_2)

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
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_109850048();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
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
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
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
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10984ff40; end: 109850047;  */

void FUN_10984ff40(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_109850048();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
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



/* Entry: 109850048; end: 1098501a3;  */

undefined1  [16] FUN_109850048(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar3 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x155 + -1;
  }
  uVar5 = lVar3 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  uVar4 = (uint)param_2;
  if (uVar5 < 0x155) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (uVar5 < 0x2aa) {
    uVar1 = uVar4;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = uVar1 ^ 1;
  auVar7._8_8_ = param_2;
  return auVar7;
}



/* Entry: 1098501a4; end: 10985023b;  */

long * FUN_1098501a4(long *param_1)

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
    lVar3 = 0xaa;
  }
  else {
    if (uVar2 != 2) goto LAB_109850220;
    lVar3 = 0x155;
  }
  param_1[4] = lVar3;
LAB_109850220:
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



/* Entry: 10985023c; end: 1098502f7;  */

long * FUN_10985023c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098502f8; end: 10985041f;  */

long * FUN_1098502f8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_109849460(param_1 + 4,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  *(undefined4 *)(param_1 + 7) = 0;
  lVar3 = param_1[5] - param_1[4];
  if (lVar3 == 0) {
    uVar2 = 0;
    lVar3 = *param_1;
    uVar5 = param_1[1] - lVar3;
  }
  else {
    uVar2 = 0;
    lVar3 = (lVar3 >> 3) * -0x5555555555555555;
    piVar4 = (int *)(param_1[4] + 0x14);
    do {
      uVar1 = (uint)uVar2;
      if ((uint)uVar2 <= (uint)(*piVar4 * piVar4[-1])) {
        uVar1 = *piVar4 * piVar4[-1];
      }
      uVar2 = (ulong)uVar1;
      piVar4 = piVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *param_1;
    uVar5 = param_1[1] - lVar3;
    if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
      func_0x000107c27d58(param_1,uVar2 - uVar5);
      lVar3 = *param_1;
      goto LAB_1098503d4;
    }
  }
  if (uVar2 < uVar5) {
    param_1[1] = lVar3 + uVar2;
  }
LAB_1098503d4:
  param_1[3] = lVar3;
  return param_1;
}



/* Entry: 109850420; end: 109850607;  */

undefined8 * FUN_109850420(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x16,param_2,&uStack_48);
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x19,param_2,&uStack_48);
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  uVar1 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x1c,uVar1,&uStack_48);
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    lStack_40 = CONCAT44(uStack_44,uStack_48);
    __ZdlPv();
  }
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  FUN_10984a630(param_1 + 0x1f,uVar1,&uStack_48);
  lStack_40 = CONCAT44(uStack_44,uStack_48);
  if (lStack_40 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109850608; end: 1098507d7;  */

undefined8 * FUN_109850608(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x14,param_2,&uStack_48);
  uStack_48 = 0;
  FUN_109849bf0(param_1 + 0x17,param_2,&uStack_48);
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  uVar1 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x1a,uVar1,&uStack_48);
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    lStack_40 = CONCAT44(uStack_44,uStack_48);
    __ZdlPv();
  }
  uStack_4c = 0;
  FUN_109849bf0(&uStack_48,param_2,&uStack_4c);
  FUN_10984a630(param_1 + 0x1d,uVar1,&uStack_48);
  lStack_40 = CONCAT44(uStack_44,uStack_48);
  if (lStack_40 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098507d8; end: 1098509d3;  */

undefined8 * FUN_1098507d8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long lStack_50;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((long)param_1 + 0xc) = param_2;
  lVar3 = 0x10;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x310);
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x74,param_2,&uStack_58);
  uStack_58 = 0;
  FUN_109849bf0(param_1 + 0x77,param_2,&uStack_58);
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  uVar2 = param_2 << 5 | 1;
  FUN_10984a630(param_1 + 0x7a,uVar2,&uStack_58);
  if (CONCAT44(uStack_54,uStack_58) != 0) {
    lStack_50 = CONCAT44(uStack_54,uStack_58);
    __ZdlPv();
  }
  uStack_5c = 0;
  FUN_109849bf0(&uStack_58,param_2,&uStack_5c);
  FUN_10984a630(param_1 + 0x7d,uVar2,&uStack_58);
  lStack_50 = CONCAT44(uStack_54,uStack_58);
  if (lStack_50 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098509d4; end: 109850a37;  */

undefined8 FUN_1098509d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  do {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar1 = param_2;
    func_0x000107c2abd4(param_2,plVar3 + 4);
    if (((uint)uVar1 >> 7 & 1) == 0) {
      lVar2 = (long)(plVar3 + 4);
      func_0x000107c2abd4(lVar2,param_2);
      if (((uint)lVar2 >> 7 & 1) == 0) {
        return 1;
      }
      plVar3 = plVar3 + 1;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}



/* Entry: 109850a38; end: 109850aef;  */

undefined8 FUN_109850a38(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  double dVar15;
  float fVar16;
  
  if (param_4 != 0) {
    switch(*(undefined4 *)((long)param_1 + 0x1c)) {
    case 1:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar9 = 0;
        lVar10 = param_1[5];
        lVar13 = param_1[6];
        lVar3 = *(long *)*param_1;
        pcVar4 = (char *)((long *)*param_1)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar10 * (ulong)param_2 + lVar13 + uVar9);
          if (pcVar4 <= pcVar1) {
            return 0;
          }
          *(int *)(param_4 + uVar9 * 4) = (int)*pcVar1;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 2:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar9 = 0;
        lVar10 = param_1[5];
        lVar13 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar6 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar10 * (ulong)param_2 + lVar13 + uVar9);
          if (pbVar6 <= pbVar2) {
            return 0;
          }
          *(uint *)(param_4 + uVar9 * 4) = (uint)*pbVar2;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 3:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar10)) {
            return 0;
          }
          *(int *)(param_4 + uVar9 * 4) = (int)*(short *)(lVar3 + uVar9 * 2);
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 2;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 4:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar10)) {
            return 0;
          }
          *(uint *)(param_4 + uVar9 * 4) = (uint)*(ushort *)(lVar3 + uVar9 * 2);
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 2;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 5:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar10)) {
            return 0;
          }
          *(undefined4 *)(param_4 + uVar9 * 4) = *(undefined4 *)(lVar3 + uVar9 * 4);
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 4;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 6:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((uVar5 <= (ulong)(lVar3 + lVar10)) ||
             (iVar12 = *(int *)(lVar3 + uVar9 * 4), iVar12 < 0)) {
            return 0;
          }
          *(int *)(param_4 + uVar9 * 4) = iVar12;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 4;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 7:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((uVar5 <= (ulong)(lVar3 + lVar10)) ||
             (lVar13 = *(long *)(lVar3 + uVar9 * 8), iVar12 = (int)lVar13, lVar13 != iVar12)) {
            return 0;
          }
          *(int *)(param_4 + uVar9 * 4) = iVar12;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 8;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 8:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((uVar5 <= (ulong)(lVar3 + lVar10)) ||
             (uVar14 = *(ulong *)(lVar3 + uVar9 * 8), uVar14 >> 0x1f != 0)) {
            return 0;
          }
          *(int *)(param_4 + uVar9 * 4) = (int)uVar14;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 8;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 9:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar10)) {
            return 0;
          }
          fVar16 = *(float *)(lVar3 + uVar9 * 4);
          bVar8 = true;
          if ((fVar16 < 2.1474836e+09) && (bVar8 = false, !NAN(fVar16))) {
            bVar8 = fVar16 < -2.1474836e+09;
          }
          if (bVar8 || 0x7f7fffff < (uint)ABS(fVar16)) {
            return 0;
          }
          if (*(char *)(param_1 + 4) == '\x01') {
            if (1.0 < fVar16) {
              return 0;
            }
            if (fVar16 < 0.0) {
              return 0;
            }
            fVar16 = fVar16 * 2.1474836e+09 + 0.5;
          }
          *(int *)(param_4 + uVar9 * 4) = (int)fVar16;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 4;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 10:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        lVar10 = 0;
        uVar9 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar10)) {
            return 0;
          }
          dVar15 = *(double *)(lVar3 + uVar9 * 8);
          bVar8 = true;
          if ((dVar15 < 2147483647.0) && (bVar8 = false, !NAN(dVar15))) {
            bVar8 = dVar15 < -2147483648.0;
          }
          if (bVar8 || 0x7fefffffffffffff < (ulong)ABS(dVar15)) {
            return 0;
          }
          if (*(char *)(param_1 + 4) == '\x01') {
            if (1.0 < dVar15) {
              return 0;
            }
            if (dVar15 < 0.0) {
              return 0;
            }
            dVar15 = (double)(long)(dVar15 * 2147483647.0 + 0.5);
          }
          *(int *)(param_4 + uVar9 * 4) = (int)dVar15;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
          lVar10 = lVar10 + 8;
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    case 0xb:
      param_3 = param_3 & 0xff;
      bVar7 = *(byte *)(param_1 + 3);
      uVar11 = (uint)bVar7;
      if (param_3 <= bVar7) {
        uVar11 = param_3;
      }
      if (uVar11 != 0) {
        uVar9 = 0;
        lVar10 = param_1[5];
        lVar13 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar6 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar10 * (ulong)param_2 + lVar13 + uVar9);
          if (pbVar6 <= pbVar2) {
            return 0;
          }
          *(uint *)(param_4 + uVar9 * 4) = (uint)*pbVar2;
          uVar9 = uVar9 + 1;
          bVar7 = *(byte *)(param_1 + 3);
          uVar11 = (uint)bVar7;
          if (param_3 <= bVar7) {
            uVar11 = param_3;
          }
        } while (uVar9 < uVar11);
      }
      uVar11 = (uint)bVar7;
      if (uVar11 < param_3) {
        _bzero(param_4 + (ulong)uVar11 * 4,(ulong)(~uVar11 + param_3) * 4 + 4);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109850af0; end: 10985127f;  */

undefined8 FUN_109850af0(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pcVar5 <= pcVar1) {
        return 0;
      }
      *(int *)(param_4 + uVar7 * 4) = (int)*pcVar1;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 4,(ulong)(~uVar8 + param_3) * 4 + 4);
  }
  return 1;
}



/* Entry: 109851280; end: 109851337;  */

undefined8 FUN_109851280(undefined8 *param_1,uint param_2,uint param_3,long param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  double dVar16;
  
  if (param_4 != 0) {
    switch(*(undefined4 *)((long)param_1 + 0x1c)) {
    case 1:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = param_1[5];
        lVar6 = param_1[6];
        lVar3 = *(long *)*param_1;
        pcVar4 = (char *)((long *)*param_1)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar12 * (ulong)param_2 + lVar6 + uVar11);
          if (pcVar4 <= pcVar1) {
            return 0;
          }
          *(int *)(param_4 + uVar11 * 4) = (int)*pcVar1;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 2:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = param_1[5];
        lVar6 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar7 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * (ulong)param_2 + lVar6 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          *(uint *)(param_4 + uVar11 * 4) = (uint)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 3:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          *(int *)(param_4 + uVar11 * 4) = (int)*(short *)(lVar3 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 4:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          *(uint *)(param_4 + uVar11 * 4) = (uint)*(ushort *)(lVar3 + uVar11 * 2);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 2;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 5:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          *(undefined4 *)(param_4 + uVar11 * 4) = *(undefined4 *)(lVar3 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 6:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          *(undefined4 *)(param_4 + uVar11 * 4) = *(undefined4 *)(lVar3 + uVar11 * 4);
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 7:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((uVar5 <= (ulong)(lVar3 + lVar12)) ||
             (uVar14 = *(ulong *)(lVar3 + uVar11 * 8), uVar14 >> 0x20 != 0)) {
            return 0;
          }
          *(int *)(param_4 + uVar11 * 4) = (int)uVar14;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 8:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if ((uVar5 <= (ulong)(lVar3 + lVar12)) ||
             (uVar14 = *(ulong *)(lVar3 + uVar11 * 8), uVar14 >> 0x20 != 0)) {
            return 0;
          }
          *(int *)(param_4 + uVar11 * 4) = (int)uVar14;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 9:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          fVar15 = *(float *)(lVar3 + uVar11 * 4);
          bVar9 = false;
          bVar10 = false;
          if (((uint)fVar15 < 0x80000000 && (int)ABS(fVar15) - 0x800000U >> 0x18 < 0x7f ||
              (int)fVar15 - 1U < 0x7fffff) || ABS(fVar15) == 0.0) {
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar15)) {
              bVar9 = fVar15 < 4.2949673e+09;
              bVar10 = false;
            }
          }
          if (bVar9 == bVar10) {
            return 0;
          }
          if (*(char *)(param_1 + 4) == '\x01') {
            if (1.0 < fVar15) {
              return 0;
            }
            fVar15 = fVar15 * 4.2949673e+09 + 0.5;
          }
          *(int *)(param_4 + uVar11 * 4) = (int)fVar15;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 4;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 10:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        uVar5 = ((long *)*param_1)[1];
        lVar3 = *(long *)*param_1 + param_1[5] * (ulong)param_2 + param_1[6];
        do {
          if (uVar5 <= (ulong)(lVar3 + lVar12)) {
            return 0;
          }
          dVar16 = *(double *)(lVar3 + uVar11 * 8);
          if (((0x7fffffffffffffff < (ulong)dVar16 ||
               0x3fe < (long)ABS(dVar16) + 0xfff0000000000000U >> 0x35) &&
              0xffffffffffffe < (long)dVar16 - 1U) && ABS(dVar16) != 0.0) {
            return 0;
          }
          if (4294967295.0 <= dVar16) {
            return 0;
          }
          if (*(char *)(param_1 + 4) == '\x01') {
            if (1.0 < dVar16) {
              return 0;
            }
            dVar16 = (double)(long)(dVar16 * 4294967295.0 + 0.5);
          }
          *(int *)(param_4 + uVar11 * 4) = (int)dVar16;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
          lVar12 = lVar12 + 8;
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    case 0xb:
      param_3 = param_3 & 0xff;
      bVar8 = *(byte *)(param_1 + 3);
      uVar13 = (uint)bVar8;
      if (param_3 <= bVar8) {
        uVar13 = param_3;
      }
      if (uVar13 != 0) {
        uVar11 = 0;
        lVar12 = param_1[5];
        lVar6 = param_1[6];
        lVar3 = *(long *)*param_1;
        pbVar7 = (byte *)((long *)*param_1)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * (ulong)param_2 + lVar6 + uVar11);
          if (pbVar7 <= pbVar2) {
            return 0;
          }
          *(uint *)(param_4 + uVar11 * 4) = (uint)*pbVar2;
          uVar11 = uVar11 + 1;
          bVar8 = *(byte *)(param_1 + 3);
          uVar13 = (uint)bVar8;
          if (param_3 <= bVar8) {
            uVar13 = param_3;
          }
        } while (uVar11 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < param_3) {
        _bzero(param_4 + (ulong)uVar13 * 4,(ulong)(~uVar13 + param_3) * 4 + 4);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109851338; end: 109851acb;  */

undefined8 FUN_109851338(undefined8 *param_1,ulong param_2,uint param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  
  bVar6 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar6;
  if (param_3 <= bVar6) {
    uVar8 = param_3;
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    lVar2 = param_1[5];
    lVar4 = param_1[6];
    lVar3 = *(long *)*param_1;
    pcVar5 = (char *)((long *)*param_1)[1];
    do {
      pcVar1 = (char *)(lVar3 + lVar2 * (param_2 & 0xffffffff) + lVar4 + uVar7);
      if (pcVar5 <= pcVar1) {
        return 0;
      }
      *(int *)(param_4 + uVar7 * 4) = (int)*pcVar1;
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(param_1 + 3);
      uVar8 = (uint)bVar6;
      if (param_3 <= bVar6) {
        uVar8 = param_3;
      }
    } while (uVar7 < uVar8);
  }
  uVar8 = (uint)bVar6;
  if (uVar8 < param_3) {
    _bzero(param_4 + (ulong)uVar8 * 4,(ulong)(~uVar8 + param_3) * 4 + 4);
  }
  return 1;
}



/* Entry: 109851acc; end: 109851afb;  */

undefined8 FUN_109851acc(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + (long)param_3 * 8);
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x18) = param_3;
  return 1;
}



/* Entry: 109851afc; end: 109851b6f;  */

long * FUN_109851afc(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((*(char *)(lVar1 + 0x18) != '\0') &&
     (FUN_109846678(lVar1,param_2[1] - *param_2 >> 2), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109851b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    return param_1;
  }
  return (long *)0x0;
}


