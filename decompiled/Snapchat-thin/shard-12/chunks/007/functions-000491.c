/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096c82e0; end: 1096c836f;  */

undefined8 * FUN_1096c82e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b06fb0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b070e8;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096c8370; end: 1096c83c7;  */

undefined8 FUN_1096c8370(long param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_1096e5140(&uStack_40);
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 8) != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 8);
    __ZdlPv();
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  *(undefined8 *)(lVar1 + 8) = uStack_40;
  *(undefined8 *)(lVar1 + 0x18) = uStack_30;
  return 1;
}



/* Entry: 1096c83c8; end: 1096c84a3;  */

undefined8 FUN_1096c83c8(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  
  FUN_1096e4e0c(param_2,0x11382aac8);
  pcVar4 = param_1;
  FUN_10969e0b4(param_1,0x113735ca0);
  pcVar6 = (char *)*param_2;
  if (*pcVar4 == '\x01') {
    FUN_1096c3944(param_2,pcVar6);
  }
  else {
    pcVar7 = (char *)param_2[1];
    for (; pcVar6 != pcVar7; pcVar6 = pcVar6 + 0x50) {
      piVar2 = *(int **)(*(long *)(param_1 + 8) + 0x10);
      for (piVar8 = *(int **)(*(long *)(param_1 + 8) + 8); piVar8 != piVar2; piVar8 = piVar8 + 1) {
        iVar3 = *piVar8;
        lVar1 = *(long *)(*(long *)(pcVar6 + 0x10) + 8);
        pcVar5 = pcVar4;
        if ((iVar3 < (int)((ulong)(*(long *)(*(long *)(pcVar6 + 0x10) + 0x10) - lVar1) >> 4)) &&
           (*(long *)(lVar1 + (long)iVar3 * 0x10 + 8) != 0)) {
          func_0x000107c2acdc();
          pcVar5 = pcVar6;
          FUN_1096e4d6c(pcVar6,(long)iVar3,pcVar4);
        }
        pcVar4 = pcVar5;
      }
    }
  }
  return 1;
}



/* Entry: 1096c84a4; end: 1096c84d7;  */

undefined8 * FUN_1096c84a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096c84d8; end: 1096c850b;  */

void FUN_1096c84d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096c850c; end: 1096c857b;  */

void FUN_1096c850c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096c857c; end: 1096c85d3;  */

void FUN_1096c857c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b06ff8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096c85d4; end: 1096c861f;  */

void FUN_1096c85d4(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096c82e0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096c8620; end: 1096c864f;  */

bool FUN_1096c8620(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b06ff8,0);
  return param_1 != 0;
}



/* Entry: 1096c8650; end: 1096c86af;  */

long FUN_1096c8650(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096c86b0; end: 1096c88af;  */

void FUN_1096c86b0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **appuStack_40 [2];
  
  appuStack_40[0] = (undefined **)CONCAT71(appuStack_40[0]._1_7_,2);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
  uVar5 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_109697928(appuStack_40,puVar2,uVar5);
  FUN_109697ca4(param_1,appuStack_40);
  appuStack_40[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_40);
  uVar4 = (long)(param_2[4] - param_2[3]) >> 4;
  uVar5 = uVar4;
  if (0x7f < uVar4) {
    do {
      appuStack_40[0] = (undefined **)(CONCAT71(appuStack_40[0]._1_7_,(char)uVar5) | 0x80);
      (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
      uVar4 = uVar5 >> 7;
      uVar3 = uVar5 >> 0xe;
      uVar5 = uVar4;
    } while (uVar3 != 0);
  }
  appuStack_40[0] = (undefined **)CONCAT71(appuStack_40[0]._1_7_,(char)uVar4);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
  lVar1 = param_2[4];
  for (lVar6 = param_2[3]; lVar6 != lVar1; lVar6 = lVar6 + 0x10) {
    (**(code **)(*param_1 + 0x48))(param_1,lVar6,0x10,1);
  }
  FUN_1096ca950(param_1,param_2 + 6);
  FUN_1096ca950(param_1,param_2 + 9);
  uVar4 = (long)(param_2[0xd] - param_2[0xc]) >> 2;
  uVar5 = uVar4;
  if (0x7f < uVar4) {
    do {
      appuStack_40[0] = (undefined **)(CONCAT71(appuStack_40[0]._1_7_,(char)uVar5) | 0x80);
      (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
      uVar4 = uVar5 >> 7;
      uVar3 = uVar5 >> 0xe;
      uVar5 = uVar4;
    } while (uVar3 != 0);
  }
  appuStack_40[0] = (undefined **)CONCAT71(appuStack_40[0]._1_7_,(char)uVar4);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
  lVar1 = param_2[0xd];
  for (lVar6 = param_2[0xc]; lVar6 != lVar1; lVar6 = lVar6 + 4) {
    (**(code **)(*param_1 + 0x48))(param_1,lVar6,4,1);
  }
  return;
}



/* Entry: 1096c88b0; end: 1096c8c6b;  */

void FUN_1096c88b0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  byte bStack_45;
  byte bStack_44;
  undefined1 uStack_43;
  byte bStack_42;
  byte bStack_41;
  
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_45,1,1);
  if ((int)plVar5 == 1) {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar10 = ((ulong)bStack_45 & 0x7f) << (uVar7 & 0x3f) | uVar10;
      iVar9 = (int)uVar10;
      if (-1 < (char)bStack_45) {
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,&bStack_44,1,1);
        if ((int)plVar5 != 1) goto LAB_1096c8a7c;
        uVar10 = 0;
        uVar7 = 0;
        goto LAB_1096c8a40;
      }
      uVar7 = uVar7 + 7;
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_45,1,1);
    } while ((int)plVar5 == 1);
  }
  bVar4 = false;
  iVar9 = 0;
LAB_1096c893c:
  FUN_1095649e4(param_2 + 6,1);
  FUN_1095649e4(param_2 + 9,1);
  FUN_1096c8c6c(param_2 + 3,1);
  iVar6 = 0;
  if (bVar4) {
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,param_2[3],0x10,1);
    if ((int)plVar5 == 1) {
      plVar5 = param_1;
      FUN_1096caa6c(param_1,&uStack_43,param_2[6],param_2[9]);
      iVar6 = (int)plVar5;
    }
    else {
      iVar6 = 0;
    }
  }
  if (iVar9 == 0) {
    FUN_1096c8c9c(param_2 + 0xc,1);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2[0xc],4,1);
    }
  }
  else if (iVar6 != 0) {
LAB_1096c89a8:
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
    if ((int)plVar5 == 1) {
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar10 = ((ulong)bStack_41 & 0x7f) << (uVar7 & 0x3f) | uVar10;
        if (-1 < (char)bStack_41) {
          FUN_1096c8c9c(param_2 + 0xc,uVar10);
          lVar8 = param_2[0xc];
          lVar2 = param_2[0xd];
          if (lVar8 == lVar2) {
            return;
          }
          do {
            plVar5 = param_1;
            (**(code **)(*param_1 + 0x40))(param_1,lVar8,4,1);
            lVar8 = lVar8 + 4;
          } while (((ulong)plVar5 & 0xffffffff) == 1 && lVar8 != lVar2);
          return;
        }
        uVar7 = uVar7 + 7;
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
      } while ((int)plVar5 == 1);
    }
  }
  return;
LAB_1096c8a40:
  uVar10 = ((ulong)bStack_44 & 0x7f) << (uVar7 & 0x3f) | uVar10;
  if ((char)bStack_44 < '\0') goto code_r0x0001096c8a54;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_2,uVar10,0);
  puVar1 = (undefined8 *)*param_2;
  uVar3 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uVar3 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,puVar1,1,(long)(int)uVar3);
  bVar4 = (uint)plVar5 == uVar3;
  if (1 < iVar9) {
    if ((uint)plVar5 != uVar3) {
      return;
    }
    plVar5 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
    if ((int)plVar5 != 1) {
      return;
    }
    uVar10 = 0;
    uVar7 = 0;
    while (uVar10 = ((ulong)bStack_42 & 0x7f) << (uVar7 & 0x3f) | uVar10, (char)bStack_42 < '\0') {
      uVar7 = uVar7 + 7;
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
      if ((int)plVar5 != 1) {
        return;
      }
    }
    FUN_1096c8c6c(param_2 + 3,uVar10);
    lVar2 = param_2[4];
    for (lVar8 = param_2[3]; lVar8 != lVar2; lVar8 = lVar8 + 0x10) {
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,lVar8,0x10,1);
      if ((int)plVar5 != 1) {
        return;
      }
    }
    plVar5 = param_1;
    func_0x0001096cac18(param_1,param_2 + 6);
    if ((int)plVar5 == 0) {
      return;
    }
    plVar5 = param_1;
    func_0x0001096cac18(param_1,param_2 + 9);
    if (((ulong)plVar5 & 1) == 0) {
      return;
    }
    goto LAB_1096c89a8;
  }
  goto LAB_1096c893c;
code_r0x0001096c8a54:
  uVar7 = uVar7 + 7;
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_44,1,1);
  if ((int)plVar5 != 1) goto LAB_1096c8a7c;
  goto LAB_1096c8a40;
LAB_1096c8a7c:
  bVar4 = false;
  if (1 < iVar9) {
    return;
  }
  goto LAB_1096c893c;
}



/* Entry: 1096c8c6c; end: 1096c8c9b;  */

undefined1  [16] FUN_1096c8c6c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar7 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  param_2 = param_2 - uVar7;
  plVar2 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar2 >> 4) < param_2) {
    lVar10 = (long)plVar2 - *param_1;
    uVar7 = param_2 + (lVar10 >> 4);
    if (uVar7 >> 0x3c != 0) {
      FUN_1096ca5d0();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      if (param_2 >> 0x3c == 0) {
        lVar4 = param_2 << 4;
        __Znwm(lVar4);
        auVar13._8_8_ = param_2;
        auVar13._0_8_ = lVar4;
        return auVar13;
      }
      func_0x000104c4f740();
      puVar5 = (undefined8 *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (param_2 < 0x1c71c71c71c71c8) {
        lVar4 = param_2 * 0x90;
        __Znwm(lVar4);
        auVar14._8_8_ = param_2;
        auVar14._0_8_ = lVar4;
        return auVar14;
      }
      func_0x000104c4f740();
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      func_0x000107c2ace8(puVar5 + 0xf);
      puVar5[0x11] = 0;
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = puVar5;
      return auVar15;
    }
    uVar6 = param_1[2] - *param_1;
    uVar8 = (long)uVar6 >> 3;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1096ca5e4();
    }
    lVar10 = (long)plVar2 + lVar10;
    _bzero(lVar10,param_2 * 0x10);
    lVar4 = *param_1;
    lVar9 = lVar10 - (param_1[1] - lVar4);
    _memcpy(lVar9);
    lVar3 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10 + param_2 * 0x10;
    param_1[2] = (long)(plVar2 + uVar8 * 2);
    plVar1 = (long *)0x0;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar16._8_8_ = lVar4;
      auVar16._0_8_ = lVar3;
      return auVar16;
    }
  }
  else {
    lVar4 = 0;
    plVar1 = param_1;
    if (param_2 != 0) {
      lVar4 = param_2 * 0x10;
      plVar1 = plVar2;
      _bzero(plVar2,lVar4);
      plVar2 = plVar2 + param_2 * 2;
    }
    param_1[1] = (long)plVar2;
  }
  auVar12._8_8_ = lVar4;
  auVar12._0_8_ = plVar1;
  return auVar12;
}



/* Entry: 1096c8c9c; end: 1096c8d9f;  */

/* WARNING: Removing unreachable block (ram,0x0001096c8f7c) */
/* WARNING: Removing unreachable block (ram,0x0001096c9058) */

ulong * FUN_1096c8c9c(ulong *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong auStack_238 [5];
  long *plStack_210;
  ulong uStack_208;
  undefined8 **ppuStack_200;
  undefined8 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined1 uStack_19a;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined2 uStack_180;
  undefined4 uStack_17e;
  undefined1 uStack_17a;
  undefined2 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined1 uStack_16a;
  undefined4 uStack_168;
  undefined2 uStack_164;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined8 auStack_130 [3];
  undefined8 auStack_118 [3];
  undefined8 uStack_100;
  char cStack_e9;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long alStack_d0 [3];
  byte bStack_b8;
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar17 = *param_1;
  puVar5 = (ulong *)param_1[1];
  uVar14 = (long)((long)puVar5 - uVar17) >> 2;
  if (uVar14 < param_2) {
    uVar14 = param_2 - uVar14;
    if ((ulong)((long)(param_1[2] - (long)puVar5) >> 2) < uVar14) {
      if (param_2 >> 0x3e == 0) {
        uVar13 = param_1[2] - uVar17;
        uVar15 = (long)uVar13 >> 1;
        if (uVar15 <= param_2) {
          uVar15 = param_2;
        }
        if (0x7ffffffffffffffb < uVar13) {
          uVar15 = 0x3fffffffffffffff;
        }
        puVar6 = param_1;
        FUN_10937dfb0();
        uVar13 = *param_1;
        lVar16 = param_1[1] - uVar13;
        lVar8 = (long)puVar6 + ((long)puVar5 - uVar17);
        _bzero(lVar8,uVar14 * 4);
        uVar17 = lVar8 - lVar16;
        _memcpy(uVar17,uVar13,lVar16);
        puVar5 = (ulong *)*param_1;
        *param_1 = uVar17;
        param_1[1] = lVar8 + uVar14 * 4;
        param_1[2] = (long)puVar6 + uVar15 * 4;
        if (puVar5 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return puVar5;
      }
      FUN_10937df9c();
      pcStack_48 = FUN_1096c8da0;
      lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *param_1 = param_2;
      puVar5 = param_1 + 1;
      *puVar5 = 0;
      uStack_e8 = 0;
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      lVar8 = *(long *)(param_2 + 0x30);
      uVar17 = param_2;
      puStack_50 = &stack0xfffffffffffffff0;
      if (*(long *)(param_2 + 0x38) != lVar8) {
        lVar18 = 0;
        lVar16 = 0;
        uVar14 = 0;
        do {
          puVar7 = puStack_e0;
          if (puStack_e0 < puStack_d8) {
            FUN_1094c8300(puStack_e0,lVar8 + lVar18,*(long *)(uVar17 + 0x18) + lVar16);
            puVar7 = puVar7 + 0xb;
          }
          else {
            puVar7 = &uStack_e8;
            FUN_1094c81b8(puVar7,lVar8 + lVar18,*(long *)(uVar17 + 0x18) + lVar16);
          }
          uVar14 = uVar14 + 1;
          uVar17 = *param_1;
          lVar8 = *(long *)(uVar17 + 0x30);
          lVar16 = lVar16 + 0x10;
          lVar18 = lVar18 + 0x18;
          puStack_e0 = puVar7;
        } while (uVar14 < (ulong)((*(long *)(uVar17 + 0x38) - lVar8 >> 3) * -0x5555555555555555));
      }
      FUN_109378950(auStack_130,&uStack_e8,uVar17 + 0x48);
      lVar8 = 0x110;
      __Znwm();
      FUN_1093f2800();
      plVar9 = (long *)0x20;
      lStack_140 = lVar8;
      __Znwm();
      *plVar9 = (long)&PTR_FUN_110b07150;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar9[3] = lVar8;
      puStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0x3f800000;
      uStack_19a = 0;
      uStack_190 = 0;
      lStack_188 = 0;
      uStack_198 = 0;
      uStack_180 = 0x200;
      uStack_17e = 0;
      uStack_17a = 0;
      uStack_178 = 1;
      uStack_174 = 0;
      uStack_170 = 0x10000;
      uStack_16c = 0x100;
      uStack_16a = 1;
      uStack_168 = 0x1000000;
      uStack_164 = 1;
      uStack_160 = 0x100;
      uStack_158 = 100000;
      uStack_150 = 0;
      uStack_14c = 1;
      uStack_148 = 0;
      uStack_19c = 0;
      plVar12 = (long *)(*(long *)(*param_1 + 0x80) + 8);
      if (*(char *)(*(long *)(*param_1 + 0x80) + 0x1f) < '\0') {
        plVar12 = (long *)*plVar12;
      }
      plStack_138 = plVar9;
      func_0x000107c31940(alStack_d0,plVar12);
      func_0x000109d05694(&uStack_1c8,&plStack_1d8,alStack_d0);
      plVar12 = (long *)0x120;
      __Znwm();
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_FUN_110af4c20;
      func_0x000109d0a180(alStack_d0,&lStack_140);
      func_0x000109d03aac(plVar12 + 3,auStack_130,1,alStack_d0,param_2 + 0x60,&puStack_1b8,2);
      (*(code *)(&PTR_FUN_110af4bf0)[bStack_b8])(alStack_d0);
      plStack_1d8 = plVar12 + 3;
      plStack_1d0 = plVar12;
      func_0x000109d03fe8(&plStack_1e0,uStack_1c8,&plStack_1d8,0);
      FUN_10938ab98(alStack_d0,&plStack_1e0);
      if (plStack_1e0 != (long *)0x0) {
        plVar9 = plStack_1e0 + 1;
        do {
          lVar8 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_1e0 + 0x10))();
        }
      }
      lVar8 = alStack_d0[0];
      alStack_d0[0] = 0;
      FUN_10938cda4(puVar5,lVar8);
      lVar8 = alStack_d0[0];
      if (*puVar5 != 0) {
        alStack_d0[0] = 0;
        if (lVar8 != 0) {
          func_0x000109cda590();
          __ZdlPv();
        }
        plVar9 = plStack_1d0;
        if (plStack_1d0 != (long *)0x0) {
          plVar1 = plStack_1d0 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (plStack_1c0 != (long *)0x0) {
          plVar9 = plStack_1c0 + 1;
          do {
            lVar8 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c0);
          }
        }
        if (lStack_188 < 0) {
          __ZdlPv(uStack_198);
        }
        if (puStack_1b8 != (undefined8 *)0x0) {
          __ZdlPv();
        }
        plVar9 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar1 = plStack_138 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        if (cStack_e9 < '\0') {
          __ZdlPv(uStack_100);
        }
        puStack_1b8 = auStack_118;
        FUN_109378cec(&puStack_1b8);
        puStack_1b8 = auStack_130;
        FUN_109378cec(&puStack_1b8);
        puStack_1b8 = &uStack_e8;
        ppuVar10 = &puStack_1b8;
        FUN_109378cec();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x00010938ac64(alStack_d0);
        func_0x00010938d5a8(&plStack_1d8);
        func_0x000109d0503c(&uStack_1c8);
        func_0x000105673ce8(&puStack_1b8);
        FUN_10938ccf4(&lStack_140);
        func_0x000105673d28(auStack_130);
        puStack_1b8 = &uStack_e8;
        FUN_109378cec(&puStack_1b8);
        lVar8 = 0;
        FUN_10938cda4(auStack_130,0);
        ppuVar11 = ppuVar10;
        __Unwind_Resume();
        pcStack_1e8 = FUN_1096c9300;
        plStack_210 = plVar12;
        uStack_208 = param_2;
        ppuStack_200 = ppuVar10;
        puStack_1f8 = auStack_130;
        ppuStack_1f0 = &puStack_50;
        func_0x000109cdb2c4(auStack_238,ppuVar11[1]);
        puVar5 = auStack_238;
        FUN_10938e710(puVar5,(*ppuVar11)[9]);
        if (puVar5 != (ulong *)0x0) {
          func_0x000109d0e828(extraout_x8,puVar5 + 5,lVar8 + 0x18,0);
          puVar5 = auStack_238;
          func_0x000109379fe8(puVar5);
          return puVar5;
        }
        FUN_109262df8(&UNK_10f57d64a);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c9384);
        (*pcVar4)();
      }
      func_0x000105688514(&UNK_10f57d549);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1096c91c4);
      (*pcVar4)();
    }
    puVar6 = puVar5;
    _bzero(puVar5,uVar14 * 4);
    uVar17 = (long)puVar5 + uVar14 * 4;
  }
  else {
    if (uVar14 <= param_2) {
      return param_1;
    }
    uVar17 = uVar17 + param_2 * 4;
    puVar6 = param_1;
  }
  param_1[1] = uVar17;
  return puVar6;
}



/* Entry: 1096c8da0; end: 1096c92ff;  */

/* WARNING: Removing unreachable block (ram,0x0001096c8f7c) */
/* WARNING: Removing unreachable block (ram,0x0001096c9058) */

long * FUN_1096c8da0(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long alStack_1f8 [5];
  long *plStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined1 uStack_15a;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined2 uStack_140;
  undefined4 uStack_13e;
  undefined1 uStack_13a;
  undefined2 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined1 uStack_12a;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 auStack_f0 [3];
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long alStack_90 [3];
  byte bStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = param_2;
  plVar9 = param_1 + 1;
  *plVar9 = 0;
  uStack_a8 = 0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  lVar5 = *(long *)(param_2 + 0x30);
  lVar11 = param_2;
  if (*(long *)(param_2 + 0x38) != lVar5) {
    lVar12 = 0;
    lVar13 = 0;
    uVar14 = 0;
    do {
      puVar4 = puStack_a0;
      if (puStack_a0 < puStack_98) {
        FUN_1094c8300(puStack_a0,lVar5 + lVar12,*(long *)(lVar11 + 0x18) + lVar13);
        puVar4 = puVar4 + 0xb;
      }
      else {
        puVar4 = &uStack_a8;
        FUN_1094c81b8(puVar4,lVar5 + lVar12,*(long *)(lVar11 + 0x18) + lVar13);
      }
      uVar14 = uVar14 + 1;
      lVar11 = *param_1;
      lVar5 = *(long *)(lVar11 + 0x30);
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0x18;
      puStack_a0 = puVar4;
    } while (uVar14 < (ulong)((*(long *)(lVar11 + 0x38) - lVar5 >> 3) * -0x5555555555555555));
  }
  FUN_109378950(auStack_f0,&uStack_a8,lVar11 + 0x48);
  lVar5 = 0x110;
  __Znwm();
  FUN_1093f2800();
  plVar6 = (long *)0x20;
  lStack_100 = lVar5;
  __Znwm();
  *plVar6 = (long)&PTR_FUN_110b07150;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[3] = lVar5;
  puStack_178 = (undefined8 *)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0x3f800000;
  uStack_15a = 0;
  uStack_150 = 0;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_140 = 0x200;
  uStack_13e = 0;
  uStack_13a = 0;
  uStack_138 = 1;
  uStack_134 = 0;
  uStack_130 = 0x10000;
  uStack_12c = 0x100;
  uStack_12a = 1;
  uStack_128 = 0x1000000;
  uStack_124 = 1;
  uStack_120 = 0x100;
  uStack_118 = 100000;
  uStack_110 = 0;
  uStack_10c = 1;
  uStack_108 = 0;
  uStack_15c = 0;
  plVar10 = (long *)(*(long *)(*param_1 + 0x80) + 8);
  if (*(char *)(*(long *)(*param_1 + 0x80) + 0x1f) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  plStack_f8 = plVar6;
  func_0x000107c31940(alStack_90,plVar10);
  func_0x000109d05694(&uStack_188,&plStack_198,alStack_90);
  plVar10 = (long *)0x120;
  __Znwm();
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110af4c20;
  func_0x000109d0a180(alStack_90,&lStack_100);
  func_0x000109d03aac(plVar10 + 3,auStack_f0,1,alStack_90,param_2 + 0x60,&puStack_178,2);
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_78])(alStack_90);
  plStack_198 = plVar10 + 3;
  plStack_190 = plVar10;
  func_0x000109d03fe8(&plStack_1a0,uStack_188,&plStack_198,0);
  FUN_10938ab98(alStack_90,&plStack_1a0);
  if (plStack_1a0 != (long *)0x0) {
    plVar6 = plStack_1a0 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_1a0 + 0x10))();
    }
  }
  lVar5 = alStack_90[0];
  alStack_90[0] = 0;
  FUN_10938cda4(plVar9,lVar5);
  lVar5 = alStack_90[0];
  if (*plVar9 == 0) {
    func_0x000105688514(&UNK_10f57d549);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1096c91c4);
    (*pcVar3)();
  }
  alStack_90[0] = 0;
  if (lVar5 != 0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  plVar9 = plStack_190;
  if (plStack_190 != (long *)0x0) {
    plVar6 = plStack_190 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plStack_180 != (long *)0x0) {
    plVar9 = plStack_180 + 1;
    do {
      lVar5 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
    }
  }
  if (lStack_148 < 0) {
    __ZdlPv(uStack_158);
  }
  if (puStack_178 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  plVar9 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar6 = plStack_f8 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (cStack_a9 < '\0') {
    __ZdlPv(uStack_c0);
  }
  puStack_178 = auStack_d8;
  FUN_109378cec(&puStack_178);
  puStack_178 = auStack_f0;
  FUN_109378cec(&puStack_178);
  puStack_178 = &uStack_a8;
  ppuVar7 = &puStack_178;
  FUN_109378cec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010938ac64(alStack_90);
    func_0x00010938d5a8(&plStack_198);
    func_0x000109d0503c(&uStack_188);
    func_0x000105673ce8(&puStack_178);
    FUN_10938ccf4(&lStack_100);
    func_0x000105673d28(auStack_f0);
    puStack_178 = &uStack_a8;
    FUN_109378cec(&puStack_178);
    lVar5 = 0;
    FUN_10938cda4(auStack_f0,0);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    pcStack_1a8 = FUN_1096c9300;
    plStack_1d0 = plVar10;
    lStack_1c8 = param_2;
    ppuStack_1c0 = ppuVar7;
    puStack_1b8 = auStack_f0;
    puStack_1b0 = &stack0xfffffffffffffff0;
    func_0x000109cdb2c4(alStack_1f8,ppuVar8[1]);
    plVar9 = alStack_1f8;
    FUN_10938e710(plVar9,(*ppuVar8)[9]);
    if (plVar9 == (long *)0x0) {
      FUN_109262df8(&UNK_10f57d64a);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1096c9384);
      (*pcVar3)();
    }
    func_0x000109d0e828(extraout_x8,plVar9 + 5,lVar5 + 0x18,0);
    plVar9 = alStack_1f8;
    func_0x000109379fe8(plVar9);
    return plVar9;
  }
  return param_1;
}



/* Entry: 1096c9300; end: 1096c9397;  */

void FUN_1096c9300(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  
  func_0x000109cdb2c4(auStack_58,param_2[1],param_3,1);
  puVar2 = auStack_58;
  FUN_10938e710(puVar2,*(undefined8 *)(*param_2 + 0x48));
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000109d0e828(param_1,puVar2 + 0x28,param_3 + 0x18,0);
    func_0x000109379fe8(auStack_58);
    return;
  }
  FUN_109262df8(&UNK_10f57d64a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1096c9384);
  (*pcVar1)();
}



/* Entry: 1096c9398; end: 1096c945b;  */

void FUN_1096c9398(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x000109cdb3f0(*(undefined8 *)(param_2 + 8),param_3,1);
  uStack_38 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x40);
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    func_0x000109d0e828(auStack_88,plVar1 + 5,&uStack_38,0);
    plVar1[7] = uStack_78;
    plVar1[6] = uStack_80;
    plVar1[8] = uStack_70;
    func_0x0001093783c0(plVar1 + 9,auStack_68);
    func_0x00010937843c(plVar1 + 0xb,auStack_58);
    func_0x000105675c90(auStack_88);
  }
  return;
}



/* Entry: 1096c945c; end: 1096c96df;  */

undefined4 FUN_1096c945c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined **ppuStack_40;
  long lStack_38;
  
  func_0x000107c2ace8(&ppuStack_40);
  if (*(char *)(lStack_38 + 0x1f) < '\0') {
    *(undefined8 *)(lStack_38 + 0x10) = 6;
    puVar3 = *(undefined4 **)(lStack_38 + 8);
  }
  else {
    puVar3 = (undefined4 *)(lStack_38 + 8);
    *(undefined1 *)(lStack_38 + 0x1f) = 6;
  }
  *(undefined2 *)(puVar3 + 1) = 0x4e4e;
  *puVar3 = 0x4442494c;
  *(undefined1 *)((long)puVar3 + 6) = 0;
  uVar1 = param_1;
  FUN_109697c4c(param_1,&ppuStack_40);
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  if ((int)uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    func_0x000107c2ace8(&ppuStack_40);
    if (*(char *)(lStack_38 + 0x1f) < '\0') {
      *(undefined8 *)(lStack_38 + 0x10) = 6;
      puVar3 = *(undefined4 **)(lStack_38 + 8);
    }
    else {
      puVar3 = (undefined4 *)(lStack_38 + 8);
      *(undefined1 *)(lStack_38 + 0x1f) = 6;
    }
    *(undefined2 *)(puVar3 + 1) = 0x4c4d;
    *puVar3 = 0x45524f43;
    *(undefined1 *)((long)puVar3 + 6) = 0;
    uVar1 = param_1;
    FUN_109697c4c(param_1,&ppuStack_40);
    ppuStack_40 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_40);
    if ((int)uVar1 == 0) {
      uVar2 = 2;
    }
    else {
      func_0x000107c2ace8(&ppuStack_40);
      if (*(char *)(lStack_38 + 0x1f) < '\0') {
        *(undefined8 *)(lStack_38 + 0x10) = 7;
        puVar3 = *(undefined4 **)(lStack_38 + 8);
      }
      else {
        puVar3 = (undefined4 *)(lStack_38 + 8);
        *(undefined1 *)(lStack_38 + 0x1f) = 7;
      }
      *(undefined4 *)((long)puVar3 + 3) = 0x4e4f4741;
      *puVar3 = 0x41584548;
      *(undefined1 *)((long)puVar3 + 7) = 0;
      uVar1 = param_1;
      FUN_109697c4c(param_1,&ppuStack_40);
      ppuStack_40 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_40);
      if ((int)uVar1 == 0) {
        uVar2 = 0x10;
      }
      else {
        func_0x000107c2ace8(&ppuStack_40);
        if (*(char *)(lStack_38 + 0x1f) < '\0') {
          *(undefined8 *)(lStack_38 + 0x10) = 7;
          puVar3 = *(undefined4 **)(lStack_38 + 8);
        }
        else {
          puVar3 = (undefined4 *)(lStack_38 + 8);
          *(undefined1 *)(lStack_38 + 0x1f) = 7;
        }
        *(undefined4 *)((long)puVar3 + 3) = 0x4d52415f;
        *puVar3 = 0x5f4e4e54;
        *(undefined1 *)((long)puVar3 + 7) = 0;
        uVar1 = param_1;
        FUN_109697c4c(param_1,&ppuStack_40);
        ppuStack_40 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_40);
        if ((int)uVar1 == 0) {
          uVar2 = 0x20;
        }
        else {
          func_0x000107c2ace8(&ppuStack_40);
          if (*(char *)(lStack_38 + 0x1f) < '\0') {
            *(undefined8 *)(lStack_38 + 0x10) = 7;
            puVar3 = *(undefined4 **)(lStack_38 + 8);
          }
          else {
            puVar3 = (undefined4 *)(lStack_38 + 8);
            *(undefined1 *)(lStack_38 + 0x1f) = 7;
          }
          *(undefined4 *)((long)puVar3 + 3) = 0x5054485f;
          *puVar3 = 0x5f4e4e51;
          *(undefined1 *)((long)puVar3 + 7) = 0;
          FUN_109697c4c(param_1,&ppuStack_40);
          ppuStack_40 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_40);
          uVar2 = 0x80;
          if ((int)param_1 != 0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 1096c96e0; end: 1096c9883;  */

void FUN_1096c96e0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 uStack_164;
  undefined **appuStack_160 [2];
  char cStack_149;
  undefined **appuStack_148 [2];
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  byte abStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  func_0x000107c31940(appuStack_160,plVar2);
  FUN_1096c9884(appuStack_148,appuStack_160,0x18);
  if (cStack_149 < '\0') {
    __ZdlPv(appuStack_160[0]);
  }
  func_0x000107c2ace8(appuStack_160);
  while( true ) {
    FUN_109697a38(appuStack_148,appuStack_160);
    if ((abStack_128[(long)appuStack_148[0][-3]] & 5) != 0) break;
    uVar1 = (int)appuStack_160;
    FUN_1096c945c();
    uStack_164 = uVar1;
    func_0x0001094d25f0(param_1,&uStack_164);
  }
  appuStack_160[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_160);
  appuStack_148[0] = &PTR_SUB_1108a5a38;
  ppuStack_138 = &PTR_DAT_1108a5a60;
  appuStack_c8[0] = &PTR_DAT_1108a5a88;
  ppuStack_130 = &PTR_DAT_11088d7b0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(abStack_128);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_148,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return;
}



/* Entry: 1096c9884; end: 1096c9957;  */

undefined8 * FUN_1096c9884(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_109242ea0(param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 1096c9958; end: 1096c9b67;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001096c9de0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1096c9958(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [11];
  undefined1 auVar5 [14];
  undefined *puVar6;
  unkbyte9 Var7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  long *extraout_x8;
  ulong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  ulong *puVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined **ppuStack_430;
  long lStack_428;
  undefined **ppuStack_420;
  long lStack_418;
  long **pplStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  long *plStack_3a0;
  long *plStack_398;
  ulong uStack_390;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  uint auStack_268 [98];
  undefined **appuStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar22 = (long *)*plVar22;
  }
  uStack_b0 = 0;
  appuStack_e0[0] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfe0;
  ppuStack_288 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfb8;
  uStack_280 = 0;
  __ZNSt3__18ios_base4initEPv(appuStack_e0,auStack_278);
  uStack_58 = 0;
  uStack_50 = 0xffffffff;
  ppuStack_288 = &PTR_DAT_11087cf48;
  appuStack_e0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28024(auStack_278);
  puVar11 = auStack_278;
  func_0x000107c28028(puVar11,plVar22,0xc);
  if (puVar11 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              ((undefined *)((long)&ppuStack_288 + (long)ppuStack_288[-3]),
               *(uint *)((long)auStack_268 + (long)ppuStack_288[-3]) | 4);
  }
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(&ppuStack_288,0,2);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(&uStack_310,&ppuStack_288);
  uVar9 = uStack_290;
  func_0x000104c59120(param_1,uStack_290,0x20);
  uStack_290 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
            (&ppuStack_288,&uStack_310);
  plVar22 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar22 = param_1;
  }
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(&ppuStack_288,plVar22,uVar9);
  ppuStack_288 = &PTR_DAT_11087cf48;
  appuStack_e0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_278);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_288,&PTR_PTR_11087cf88);
  pppuVar12 = appuStack_e0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2803c(&ppuStack_288);
  __Unwind_Resume();
  uVar18 = (long)pppuVar12[1][2] - (long)pppuVar12[1][1];
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  plStack_398 = (long *)((ulong)plStack_398 & 0xffffffffffffff00);
  if ((uVar18 >> 4 & 0xffffffff) != 0) {
    uVar18 = (long)(uVar18 * 0x10000000) >> 0x20;
    if (0x1c71c71c71c71c7 < uVar18) {
      FUN_1096ca618();
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1096ca398);
      (*pcVar10)();
    }
    plVar22 = extraout_x8;
    uVar16 = uVar18;
    plStack_3a0 = extraout_x8;
    FUN_1096ca62c();
    *extraout_x8 = (long)plVar22;
    extraout_x8[1] = (long)plVar22;
    extraout_x8[2] = (long)(plVar22 + uVar16 * 0x12);
    plVar1 = plVar22 + uVar18 * 0x12;
    lVar23 = uVar18 * 0x90;
    do {
      FUN_1096ca674(plVar22);
      plVar22 = plVar22 + 0x12;
      lVar23 = lVar23 + -0x90;
    } while (lVar23 != 0);
    extraout_x8[1] = (long)plVar1;
    puVar17 = pppuVar12[1][1];
    if (0xffffffff < ((long)pppuVar12[1][2] - (long)puVar17) * 0x10000000) {
      lVar23 = 0;
      do {
        lVar21 = *extraout_x8;
        func_0x000107c2ace8(&ppuStack_430);
        if (*(char *)(lStack_428 + 0x1f) < '\0') {
          *(undefined8 *)(lStack_428 + 0x10) = 9;
          puVar20 = *(undefined8 **)(lStack_428 + 8);
        }
        else {
          puVar20 = (undefined8 *)(lStack_428 + 8);
          *(undefined1 *)(lStack_428 + 0x1f) = 9;
        }
        *(undefined2 *)(puVar20 + 1) = 0x43;
        *puVar20 = 0x57484e7475706e49;
        plVar22 = (long *)(puVar17 + lVar23 * 0x10 + 8);
        lVar13 = *plVar22 + 0x20;
        FUN_109695c64(lVar13,&ppuStack_430);
        if (lVar13 == 0) {
          ppuStack_420 = &PTR_FUN_110b01d60;
          lStack_418 = 0;
        }
        else {
          lStack_418 = *(long *)(lVar13 + 0x28);
          ppuStack_420 = *(undefined ***)(lVar13 + 0x20);
          if (lStack_418 != 0) {
            piVar19 = (int *)(lStack_418 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar14 = &ppuStack_420;
        ___dynamic_cast(pppuVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar14 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_408 = pppuVar14[1];
        if (ppuStack_408 != (undefined **)0x0) {
          ppuVar15 = ppuStack_408 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pplStack_410 = (long **)&PTR_FUN_110b00af0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        ppuStack_400 = (undefined **)0x0;
        puVar17 = (undefined *)(long)*(char *)((long)ppuStack_408 + 0x1f);
        if ((long)puVar17 < 0) {
          ppuVar15 = (undefined **)ppuStack_408[1];
          puVar17 = ppuStack_408[2];
        }
        else {
          ppuVar15 = ppuStack_408 + 1;
        }
        FUN_1096ea330(&plStack_3a0,ppuVar15,puVar17,0x20);
        plVar8 = plStack_398;
        for (plVar1 = plStack_3a0; plVar1 != plVar8; plVar1 = plVar1 + 2) {
          FUN_109697928(&ppuStack_3e0,*plVar1,plVar1[1]);
          FUN_1096e8bf4(&ppuStack_3c0,&ppuStack_3e0);
          ppuStack_3e0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_3e0);
          if ((long)ppuStack_3b8 - (long)ppuStack_3c0 != 0x10) {
            ppuStack_3e0 = (undefined **)&UNK_10f57d5af;
            puStack_3d8 = &UNK_10f57d5bd;
            uStack_3d0 = 0x94;
            FUN_109699380(&ppuStack_3e0);
          }
          puVar6 = ppuStack_3c0[1];
          uVar29 = (undefined1)((ulong)puVar6 >> 0x18);
          puVar17 = *ppuStack_3c0;
          Var7 = *(unkbyte9 *)ppuStack_3c0;
          auVar4[9] = (char)((ulong)puVar6 >> 8);
          auVar4._0_9_ = *(unkbyte9 *)ppuStack_3c0;
          auVar4[10] = (char)((ulong)puVar6 >> 0x10);
          auVar5[0xb] = uVar29;
          auVar5._0_11_ = auVar4;
          auVar5[0xc] = (char)((ulong)puVar6 >> 0x20);
          auVar5[0xd] = (char)((ulong)puVar6 >> 0x28);
          uVar25 = (undefined1)((unkuint9)Var7 >> 0x20);
          uVar26 = (undefined1)((unkuint9)Var7 >> 0x28);
          uVar27 = (undefined1)((unkuint9)Var7 >> 0x30);
          uVar28 = (undefined1)((unkuint9)Var7 >> 0x38);
          puStack_3d8 = (undefined *)
                        CONCAT17((char)((ulong)puVar17 >> 0x18),
                                 CONCAT16((char)((ulong)puVar17 >> 0x10),
                                          CONCAT15((char)((ulong)puVar17 >> 8),
                                                   CONCAT14((char)puVar17,
                                                            CONCAT13((char)((ulong)puVar6 >> 0x38),
                                                                     CONCAT12((char)((ulong)puVar6
                                                                                    >> 0x30),
                                                                              auVar5._12_2_))))));
          ppuStack_3e0 = (undefined **)
                         CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,CONCAT13(
                                                  uVar29,auVar4._8_3_)))));
          func_0x0001096ca888(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,(int)
                                                  puVar17)))),(int)Var7,&ppuStack_400,&ppuStack_3e0)
          ;
          if (ppuStack_3c0 != (undefined **)0x0) {
            ppuStack_3b8 = ppuStack_3c0;
            __ZdlPv();
          }
        }
        if (plStack_3a0 != (long *)0x0) {
          plStack_398 = plStack_3a0;
          __ZdlPv(plStack_3a0);
        }
        puVar24 = (ulong *)(lVar21 + lVar23 * 0x90);
        uVar18 = puVar24[3];
        if (uVar18 != 0) {
          puVar24[4] = uVar18;
          __ZdlPv();
          puVar24[3] = 0;
          puVar24[4] = 0;
          puVar24[5] = 0;
        }
        puVar24[4] = uStack_3f8;
        puVar24[3] = (ulong)ppuStack_400;
        puVar24[5] = uStack_3f0;
        ppuStack_400 = (undefined **)0x0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        pplStack_410 = (long **)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pplStack_410);
        ppuStack_420 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_420);
        ppuStack_430 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_430);
        func_0x000107c2ace8(&ppuStack_400);
        if (*(char *)(uStack_3f8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_3f8 + 0x10) = 0xf;
          puVar20 = *(undefined8 **)(uStack_3f8 + 8);
        }
        else {
          puVar20 = (undefined8 *)(uStack_3f8 + 8);
          *(undefined1 *)(uStack_3f8 + 0x1f) = 0xf;
        }
        *puVar20 = 0x79614c7475706e49;
        *(undefined8 *)((long)puVar20 + 7) = 0x73656d614e726579;
        *(undefined1 *)((long)puVar20 + 0xf) = 0;
        lVar21 = *plVar22 + 0x20;
        FUN_109695c64(lVar21,&ppuStack_400);
        if (lVar21 == 0) {
          ppuStack_3e0 = &PTR_FUN_110b01d60;
          puStack_3d8 = (undefined *)0x0;
        }
        else {
          puStack_3d8 = *(undefined **)(lVar21 + 0x28);
          ppuStack_3e0 = *(undefined ***)(lVar21 + 0x20);
          if (puStack_3d8 != (undefined *)0x0) {
            piVar19 = (int *)((long)puStack_3d8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar14 = &ppuStack_3e0;
        ___dynamic_cast(pppuVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar14 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        ppuStack_3b8 = pppuVar14[1];
        if (ppuStack_3b8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_3b8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_3c0 = &PTR_FUN_110b00af0;
        FUN_1096e8de4(&plStack_3a0,&ppuStack_3c0);
        func_0x000107c3193c(puVar24 + 6);
        puVar24[7] = (ulong)plStack_398;
        puVar24[6] = (ulong)plStack_3a0;
        puVar24[8] = uStack_390;
        plStack_3a0 = (long *)0x0;
        plStack_398 = (long *)0x0;
        uStack_390 = 0;
        pplStack_410 = &plStack_3a0;
        func_0x000104c607c8(&pplStack_410);
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3c0);
        ppuStack_3e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3e0);
        ppuStack_400 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_400);
        func_0x000107c2ace8(&ppuStack_400);
        if (*(char *)(uStack_3f8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_3f8 + 0x10) = 0x10;
          puVar20 = *(undefined8 **)(uStack_3f8 + 8);
        }
        else {
          puVar20 = (undefined8 *)(uStack_3f8 + 8);
          *(undefined1 *)(uStack_3f8 + 0x1f) = 0x10;
        }
        puVar20[1] = 0x73656d614e726579;
        *puVar20 = 0x614c74757074754f;
        *(undefined1 *)(puVar20 + 2) = 0;
        lVar21 = *plVar22 + 0x20;
        FUN_109695c64(lVar21,&ppuStack_400);
        if (lVar21 == 0) {
          ppuStack_3e0 = &PTR_FUN_110b01d60;
          puStack_3d8 = (undefined *)0x0;
        }
        else {
          puStack_3d8 = *(undefined **)(lVar21 + 0x28);
          ppuStack_3e0 = *(undefined ***)(lVar21 + 0x20);
          if (puStack_3d8 != (undefined *)0x0) {
            piVar19 = (int *)((long)puStack_3d8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar14 = &ppuStack_3e0;
        ___dynamic_cast(pppuVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar14 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        ppuStack_3b8 = pppuVar14[1];
        if (ppuStack_3b8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_3b8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_3c0 = &PTR_FUN_110b00af0;
        FUN_1096e8de4(&plStack_3a0,&ppuStack_3c0);
        func_0x000107c3193c(puVar24 + 9);
        puVar24[10] = (ulong)plStack_398;
        puVar24[9] = (ulong)plStack_3a0;
        puVar24[0xb] = uStack_390;
        plStack_3a0 = (long *)0x0;
        plStack_398 = (long *)0x0;
        uStack_390 = 0;
        pplStack_410 = &plStack_3a0;
        func_0x000104c607c8(&pplStack_410);
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3c0);
        ppuStack_3e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3e0);
        ppuStack_400 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_400);
        func_0x000107c2ace8(&ppuStack_400);
        if (*(char *)(uStack_3f8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_3f8 + 0x10) = 0x13;
          puVar20 = *(undefined8 **)(uStack_3f8 + 8);
        }
        else {
          puVar20 = (undefined8 *)(uStack_3f8 + 8);
          *(undefined1 *)(uStack_3f8 + 0x1f) = 0x13;
        }
        *(undefined4 *)((long)puVar20 + 0xf) = 0x7473694c;
        puVar20[1] = 0x4c797469726f6972;
        *puVar20 = 0x50646e656b636142;
        *(undefined1 *)((long)puVar20 + 0x13) = 0;
        lVar21 = *plVar22 + 0x20;
        FUN_109695c64(lVar21,&ppuStack_400);
        if (lVar21 == 0) {
          ppuStack_3e0 = &PTR_FUN_110b01d60;
          puStack_3d8 = (undefined *)0x0;
        }
        else {
          puStack_3d8 = *(undefined **)(lVar21 + 0x28);
          ppuStack_3e0 = *(undefined ***)(lVar21 + 0x20);
          if (puStack_3d8 != (undefined *)0x0) {
            piVar19 = (int *)((long)puStack_3d8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar14 = &ppuStack_3e0;
        ___dynamic_cast(pppuVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar14 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_3b8 = pppuVar14[1];
        if (ppuStack_3b8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_3b8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_3c0 = &PTR_FUN_110b00af0;
        FUN_1096c96e0(&plStack_3a0,&ppuStack_3c0);
        uVar18 = puVar24[0xc];
        if (uVar18 != 0) {
          puVar24[0xd] = uVar18;
          __ZdlPv();
          puVar24[0xc] = 0;
          puVar24[0xd] = 0;
          puVar24[0xe] = 0;
        }
        puVar24[0xd] = (ulong)plStack_398;
        puVar24[0xc] = (ulong)plStack_3a0;
        puVar24[0xe] = uStack_390;
        plStack_3a0 = (long *)0x0;
        plStack_398 = (long *)0x0;
        uStack_390 = 0;
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3c0);
        ppuStack_3e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3e0);
        ppuStack_400 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_400);
        func_0x000107c2ace8(&ppuStack_400);
        if (*(char *)(uStack_3f8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_3f8 + 0x10) = 9;
          puVar20 = *(undefined8 **)(uStack_3f8 + 8);
        }
        else {
          puVar20 = (undefined8 *)(uStack_3f8 + 8);
          *(undefined1 *)(uStack_3f8 + 0x1f) = 9;
        }
        *(undefined2 *)(puVar20 + 1) = 0x68;
        *puVar20 = 0x7461506c65646f4d;
        lVar21 = *plVar22 + 0x20;
        FUN_109695c64(lVar21,&ppuStack_400);
        if (lVar21 == 0) {
          ppuStack_3e0 = &PTR_FUN_110b01d60;
          puStack_3d8 = (undefined *)0x0;
        }
        else {
          puStack_3d8 = *(undefined **)(lVar21 + 0x28);
          ppuStack_3e0 = *(undefined ***)(lVar21 + 0x20);
          if (puStack_3d8 != (undefined *)0x0) {
            piVar19 = (int *)((long)puStack_3d8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar3) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar14 = &ppuStack_3e0;
        ___dynamic_cast(pppuVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar14 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_3b8 = pppuVar14[1];
        if (ppuStack_3b8 != (undefined **)0x0) {
          ppuVar15 = ppuStack_3b8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *(int *)ppuVar15 = *(int *)ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_3c0 = &PTR_FUN_110b00af0;
        FUN_1096c9958(&plStack_3a0,&ppuStack_3c0);
        if (*(char *)((long)puVar24 + 0x17) < '\0') {
          __ZdlPv(*puVar24);
        }
        puVar24[2] = uStack_390;
        puVar24[1] = (ulong)plStack_398;
        *puVar24 = (ulong)plStack_3a0;
        uStack_390 = uStack_390 & 0xffffffffffffff;
        plStack_3a0 = (long *)((ulong)plStack_3a0 & 0xffffffffffffff00);
        ppuStack_3c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3c0);
        ppuStack_3e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_3e0);
        ppuStack_400 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_400);
        lVar23 = lVar23 + 1;
        puVar17 = pppuVar12[1][1];
      } while (lVar23 < (int)((ulong)((long)pppuVar12[1][2] - (long)puVar17) >> 4));
    }
  }
  return;
}



/* Entry: 1096c9b68; end: 1096ca4d3;  */

void FUN_1096c9b68(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  long lVar17;
  undefined **ppuStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  long **pplStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 (*pauStack_b0) [12];
  undefined1 (*pauStack_a8) [12];
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  
  uVar10 = *(long *)(*(long *)(param_2 + 8) + 0x10) - *(long *)(*(long *)(param_2 + 8) + 8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plStack_88 = (long *)((ulong)plStack_88 & 0xffffffffffffff00);
  if ((uVar10 >> 4 & 0xffffffff) != 0) {
    uVar10 = (long)(uVar10 * 0x10000000) >> 0x20;
    plStack_90 = param_1;
    if (0x1c71c71c71c71c7 < uVar10) {
      FUN_1096ca618();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1096ca398);
      (*pcVar5)();
    }
    plVar15 = param_1;
    uVar8 = uVar10;
    FUN_1096ca62c();
    *param_1 = (long)plVar15;
    param_1[1] = (long)plVar15;
    param_1[2] = (long)(plVar15 + uVar8 * 0x12);
    plVar1 = plVar15 + uVar10 * 0x12;
    lVar14 = uVar10 * 0x90;
    do {
      FUN_1096ca674(plVar15);
      plVar15 = plVar15 + 0x12;
      lVar14 = lVar14 + -0x90;
    } while (lVar14 != 0);
    param_1[1] = (long)plVar1;
    lVar14 = *(long *)(*(long *)(param_2 + 8) + 8);
    if (0xffffffff < (*(long *)(*(long *)(param_2 + 8) + 0x10) - lVar14) * 0x10000000) {
      lVar17 = 0;
      do {
        lVar13 = *param_1;
        func_0x000107c2ace8(&ppuStack_120);
        if (*(char *)(lStack_118 + 0x1f) < '\0') {
          *(undefined8 *)(lStack_118 + 0x10) = 9;
          puVar12 = *(undefined8 **)(lStack_118 + 8);
        }
        else {
          puVar12 = (undefined8 *)(lStack_118 + 8);
          *(undefined1 *)(lStack_118 + 0x1f) = 9;
        }
        *(undefined2 *)(puVar12 + 1) = 0x43;
        *puVar12 = 0x57484e7475706e49;
        plVar15 = (long *)(lVar14 + lVar17 * 0x10 + 8);
        lVar14 = *plVar15 + 0x20;
        FUN_109695c64(lVar14,&ppuStack_120);
        if (lVar14 == 0) {
          ppuStack_110 = &PTR_FUN_110b01d60;
          lStack_108 = 0;
        }
        else {
          lStack_108 = *(long *)(lVar14 + 0x28);
          ppuStack_110 = *(undefined ***)(lVar14 + 0x20);
          if (lStack_108 != 0) {
            piVar11 = (int *)(lStack_108 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar6 = &ppuStack_110;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_f8 = pppuVar6[1];
        if (ppuStack_f8 != (undefined **)0x0) {
          ppuVar7 = ppuStack_f8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pplStack_100 = (long **)&PTR_FUN_110b00af0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        ppuStack_f0 = (undefined **)0x0;
        puVar9 = (undefined *)(long)*(char *)((long)ppuStack_f8 + 0x1f);
        if ((long)puVar9 < 0) {
          ppuVar7 = (undefined **)ppuStack_f8[1];
          puVar9 = ppuStack_f8[2];
        }
        else {
          ppuVar7 = ppuStack_f8 + 1;
        }
        FUN_1096ea330(&plStack_90,ppuVar7,puVar9,0x20);
        plVar4 = plStack_88;
        for (plVar1 = plStack_90; plVar1 != plVar4; plVar1 = plVar1 + 2) {
          FUN_109697928(&ppuStack_d0,*plVar1,plVar1[1]);
          FUN_1096e8bf4(&pauStack_b0,&ppuStack_d0);
          ppuStack_d0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_d0);
          if ((long)pauStack_a8 - (long)pauStack_b0 != 0x10) {
            ppuStack_d0 = (undefined **)&UNK_10f57d5af;
            puStack_c8 = &UNK_10f57d5bd;
            uStack_c0 = 0x94;
            FUN_109699380(&ppuStack_d0);
          }
          puStack_c8 = (undefined *)
                       CONCAT44((int)*(undefined8 *)*pauStack_b0,
                                (int)((ulong)*(undefined8 *)(*pauStack_b0 + 8) >> 0x20));
          ppuStack_d0 = (undefined **)CONCAT44(SUB124(*pauStack_b0,4),SUB124(*pauStack_b0,8));
          func_0x0001096ca888(SUB124(*pauStack_b0,8),SUB124(*pauStack_b0,0),&ppuStack_f0,
                              &ppuStack_d0);
          if (pauStack_b0 != (undefined1 (*) [12])0x0) {
            pauStack_a8 = pauStack_b0;
            __ZdlPv();
          }
        }
        if (plStack_90 != (long *)0x0) {
          plStack_88 = plStack_90;
          __ZdlPv(plStack_90);
        }
        puVar16 = (ulong *)(lVar13 + lVar17 * 0x90);
        uVar10 = puVar16[3];
        if (uVar10 != 0) {
          puVar16[4] = uVar10;
          __ZdlPv();
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16[5] = 0;
        }
        puVar16[4] = uStack_e8;
        puVar16[3] = (ulong)ppuStack_f0;
        puVar16[5] = uStack_e0;
        ppuStack_f0 = (undefined **)0x0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        pplStack_100 = (long **)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pplStack_100);
        ppuStack_110 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_110);
        ppuStack_120 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_120);
        func_0x000107c2ace8(&ppuStack_f0);
        if (*(char *)(uStack_e8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_e8 + 0x10) = 0xf;
          puVar12 = *(undefined8 **)(uStack_e8 + 8);
        }
        else {
          puVar12 = (undefined8 *)(uStack_e8 + 8);
          *(undefined1 *)(uStack_e8 + 0x1f) = 0xf;
        }
        *puVar12 = 0x79614c7475706e49;
        *(undefined8 *)((long)puVar12 + 7) = 0x73656d614e726579;
        *(undefined1 *)((long)puVar12 + 0xf) = 0;
        lVar14 = *plVar15 + 0x20;
        FUN_109695c64(lVar14,&ppuStack_f0);
        if (lVar14 == 0) {
          ppuStack_d0 = &PTR_FUN_110b01d60;
          puStack_c8 = (undefined *)0x0;
        }
        else {
          puStack_c8 = *(undefined **)(lVar14 + 0x28);
          ppuStack_d0 = *(undefined ***)(lVar14 + 0x20);
          if (puStack_c8 != (undefined *)0x0) {
            piVar11 = (int *)((long)puStack_c8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar6 = &ppuStack_d0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        pauStack_a8 = (undefined1 (*) [12])pppuVar6[1];
        if (pauStack_a8 != (undefined1 (*) [12])0x0) {
          ppuVar7 = (undefined **)((long)pauStack_a8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b00af0;
        FUN_1096e8de4(&plStack_90,&pauStack_b0);
        func_0x000107c3193c(puVar16 + 6);
        puVar16[7] = (ulong)plStack_88;
        puVar16[6] = (ulong)plStack_90;
        puVar16[8] = uStack_80;
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        uStack_80 = 0;
        pplStack_100 = &plStack_90;
        func_0x000104c607c8(&pplStack_100);
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pauStack_b0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        func_0x000107c2ace8(&ppuStack_f0);
        if (*(char *)(uStack_e8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_e8 + 0x10) = 0x10;
          puVar12 = *(undefined8 **)(uStack_e8 + 8);
        }
        else {
          puVar12 = (undefined8 *)(uStack_e8 + 8);
          *(undefined1 *)(uStack_e8 + 0x1f) = 0x10;
        }
        puVar12[1] = 0x73656d614e726579;
        *puVar12 = 0x614c74757074754f;
        *(undefined1 *)(puVar12 + 2) = 0;
        lVar14 = *plVar15 + 0x20;
        FUN_109695c64(lVar14,&ppuStack_f0);
        if (lVar14 == 0) {
          ppuStack_d0 = &PTR_FUN_110b01d60;
          puStack_c8 = (undefined *)0x0;
        }
        else {
          puStack_c8 = *(undefined **)(lVar14 + 0x28);
          ppuStack_d0 = *(undefined ***)(lVar14 + 0x20);
          if (puStack_c8 != (undefined *)0x0) {
            piVar11 = (int *)((long)puStack_c8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar6 = &ppuStack_d0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        pauStack_a8 = (undefined1 (*) [12])pppuVar6[1];
        if (pauStack_a8 != (undefined1 (*) [12])0x0) {
          ppuVar7 = (undefined **)((long)pauStack_a8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b00af0;
        FUN_1096e8de4(&plStack_90,&pauStack_b0);
        func_0x000107c3193c(puVar16 + 9);
        puVar16[10] = (ulong)plStack_88;
        puVar16[9] = (ulong)plStack_90;
        puVar16[0xb] = uStack_80;
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        uStack_80 = 0;
        pplStack_100 = &plStack_90;
        func_0x000104c607c8(&pplStack_100);
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pauStack_b0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        func_0x000107c2ace8(&ppuStack_f0);
        if (*(char *)(uStack_e8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_e8 + 0x10) = 0x13;
          puVar12 = *(undefined8 **)(uStack_e8 + 8);
        }
        else {
          puVar12 = (undefined8 *)(uStack_e8 + 8);
          *(undefined1 *)(uStack_e8 + 0x1f) = 0x13;
        }
        *(undefined4 *)((long)puVar12 + 0xf) = 0x7473694c;
        puVar12[1] = 0x4c797469726f6972;
        *puVar12 = 0x50646e656b636142;
        *(undefined1 *)((long)puVar12 + 0x13) = 0;
        lVar14 = *plVar15 + 0x20;
        FUN_109695c64(lVar14,&ppuStack_f0);
        if (lVar14 == 0) {
          ppuStack_d0 = &PTR_FUN_110b01d60;
          puStack_c8 = (undefined *)0x0;
        }
        else {
          puStack_c8 = *(undefined **)(lVar14 + 0x28);
          ppuStack_d0 = *(undefined ***)(lVar14 + 0x20);
          if (puStack_c8 != (undefined *)0x0) {
            piVar11 = (int *)((long)puStack_c8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar6 = &ppuStack_d0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        pauStack_a8 = (undefined1 (*) [12])pppuVar6[1];
        if (pauStack_a8 != (undefined1 (*) [12])0x0) {
          ppuVar7 = (undefined **)((long)pauStack_a8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b00af0;
        FUN_1096c96e0(&plStack_90,&pauStack_b0);
        uVar10 = puVar16[0xc];
        if (uVar10 != 0) {
          puVar16[0xd] = uVar10;
          __ZdlPv();
          puVar16[0xc] = 0;
          puVar16[0xd] = 0;
          puVar16[0xe] = 0;
        }
        puVar16[0xd] = (ulong)plStack_88;
        puVar16[0xc] = (ulong)plStack_90;
        puVar16[0xe] = uStack_80;
        plStack_90 = (long *)0x0;
        plStack_88 = (long *)0x0;
        uStack_80 = 0;
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pauStack_b0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        func_0x000107c2ace8(&ppuStack_f0);
        if (*(char *)(uStack_e8 + 0x1f) < '\0') {
          *(undefined8 *)(uStack_e8 + 0x10) = 9;
          puVar12 = *(undefined8 **)(uStack_e8 + 8);
        }
        else {
          puVar12 = (undefined8 *)(uStack_e8 + 8);
          *(undefined1 *)(uStack_e8 + 0x1f) = 9;
        }
        *(undefined2 *)(puVar12 + 1) = 0x68;
        *puVar12 = 0x7461506c65646f4d;
        lVar14 = *plVar15 + 0x20;
        FUN_109695c64(lVar14,&ppuStack_f0);
        if (lVar14 == 0) {
          ppuStack_d0 = &PTR_FUN_110b01d60;
          puStack_c8 = (undefined *)0x0;
        }
        else {
          puStack_c8 = *(undefined **)(lVar14 + 0x28);
          ppuStack_d0 = *(undefined ***)(lVar14 + 0x20);
          if (puStack_c8 != (undefined *)0x0) {
            piVar11 = (int *)((long)puStack_c8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar3) {
                *piVar11 = *piVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        pppuVar6 = &ppuStack_d0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        pauStack_a8 = (undefined1 (*) [12])pppuVar6[1];
        if (pauStack_a8 != (undefined1 (*) [12])0x0) {
          piVar11 = (int *)(pauStack_a8[-1] + 4);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b00af0;
        FUN_1096c9958(&plStack_90,&pauStack_b0);
        if (*(char *)((long)puVar16 + 0x17) < '\0') {
          __ZdlPv(*puVar16);
        }
        puVar16[2] = uStack_80;
        puVar16[1] = (ulong)plStack_88;
        *puVar16 = (ulong)plStack_90;
        uStack_80 = uStack_80 & 0xffffffffffffff;
        plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
        pauStack_b0 = (undefined1 (*) [12])&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&pauStack_b0);
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        lVar17 = lVar17 + 1;
        lVar14 = *(long *)(*(long *)(param_2 + 8) + 8);
      } while (lVar17 < (int)((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x10) - lVar14) >> 4));
    }
  }
  return;
}



/* Entry: 1096ca4d4; end: 1096ca5cf;  */

undefined1  [16] FUN_1096ca4d4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar10 = (long)plVar3 - *param_1;
    uVar1 = param_2 + (lVar10 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_1096ca5d0();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      if (param_2 >> 0x3c == 0) {
        lVar5 = param_2 << 4;
        __Znwm(lVar5);
        auVar12._8_8_ = param_2;
        auVar12._0_8_ = lVar5;
        return auVar12;
      }
      func_0x000104c4f740();
      puVar6 = (undefined8 *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if (param_2 < 0x1c71c71c71c71c8) {
        lVar5 = param_2 * 0x90;
        __Znwm(lVar5);
        auVar13._8_8_ = param_2;
        auVar13._0_8_ = lVar5;
        return auVar13;
      }
      func_0x000104c4f740();
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
      puVar6[0x11] = 0;
      puVar6[0x10] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      func_0x000107c2ace8(puVar6 + 0xf);
      puVar6[0x11] = 0;
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = puVar6;
      return auVar14;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_1096ca5e4();
    }
    lVar10 = (long)plVar3 + lVar10;
    _bzero(lVar10,param_2 << 4);
    lVar5 = *param_1;
    lVar9 = lVar10 - (param_1[1] - lVar5);
    _memcpy(lVar9);
    lVar4 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10 + param_2 * 0x10;
    param_1[2] = (long)(plVar3 + uVar8 * 2);
    plVar2 = (long *)0x0;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar15._8_8_ = lVar5;
      auVar15._0_8_ = lVar4;
      return auVar15;
    }
  }
  else {
    lVar5 = 0;
    plVar2 = param_1;
    if (param_2 != 0) {
      lVar5 = param_2 << 4;
      plVar2 = plVar3;
      _bzero(plVar3,lVar5);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 1096ca5d0; end: 1096ca5e3;  */

undefined1  [16] FUN_1096ca5d0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1c71c71c71c71c8) {
    lVar1 = param_2 * 0x90;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  func_0x000107c2ace8(puVar2 + 0xf);
  puVar2[0x11] = 0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 1096ca5e4; end: 1096ca617;  */

undefined1  [16] FUN_1096ca5e4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1c71c71c71c71c8) {
    lVar1 = param_2 * 0x90;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  func_0x000107c2ace8(puVar2 + 0xf);
  puVar2[0x11] = 0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 1096ca618; end: 1096ca62b;  */

undefined1  [16] FUN_1096ca618(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1c71c71c71c71c8) {
    lVar2 = param_2 * 0x90;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  func_0x000107c2ace8(puVar1 + 0xf);
  puVar1[0x11] = 0;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1096ca62c; end: 1096ca673;  */

undefined1  [16] FUN_1096ca62c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x1c71c71c71c71c8) {
    lVar1 = param_2 * 0x90;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2ace8(param_1 + 0xf);
  param_1[0x11] = 0;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1096ca674; end: 1096ca723;  */

undefined8 * FUN_1096ca674(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000107c2ace8(param_1 + 0xf);
  param_1[0x11] = 0;
  return param_1;
}



/* Entry: 1096ca724; end: 1096ca793;  */

void FUN_1096ca724(long *param_1)

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
        lVar2 = lVar2 + -0x90;
        FUN_1096ca794(lVar2);
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



/* Entry: 1096ca794; end: 1096ca82f;  */

void FUN_1096ca794(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  lVar1 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar1 != 0) {
    FUN_1096ca830();
  }
  param_1[0xf] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  puStack_28 = param_1 + 9;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 6;
  func_0x000104c607c8(&puStack_28);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return;
}



/* Entry: 1096ca830; end: 1096ca94f;  */

void FUN_1096ca830(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(long *)(param_2 + 8);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    FUN_10938cda4(lVar1 + 8,0);
    __ZdlPv(lVar1);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1096ca950; end: 1096caa6b;  */

void FUN_1096ca950(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **appuStack_40 [2];
  
  uVar5 = (param_2[1] - *param_2 >> 3) * -0x5555555555555555;
  uVar6 = uVar5;
  if (0x7f < uVar5) {
    do {
      appuStack_40[0] = (undefined **)(CONCAT71(appuStack_40[0]._1_7_,(char)uVar6) | 0x80);
      (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
      uVar5 = uVar6 >> 7;
      uVar4 = uVar6 >> 0xe;
      uVar6 = uVar5;
    } while (uVar4 != 0);
  }
  appuStack_40[0] = (undefined **)CONCAT71(appuStack_40[0]._1_7_,(char)uVar5);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_40,1,1);
  puVar2 = (undefined8 *)param_2[1];
  for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 3) {
    uVar6 = puVar1[1];
    puVar3 = (undefined8 *)*puVar1;
    if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)puVar1 + 0x17);
      puVar3 = puVar1;
    }
    FUN_109697928(appuStack_40,puVar3,uVar6);
    FUN_109697ca4(param_1,appuStack_40);
    appuStack_40[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_40);
  }
  return;
}



/* Entry: 1096caa6c; end: 1096cad9b;  */

bool FUN_1096caa6c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  byte bStack_42;
  byte bStack_41;
  
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
  if ((int)plVar3 == 1) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((ulong)bStack_42 & 0x7f) << (uVar5 & 0x3f) | uVar4;
      if (-1 < (char)bStack_42) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_3,uVar4,0);
        puVar1 = (undefined8 *)*param_3;
        uVar2 = (uint)param_3[1];
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          puVar1 = param_3;
          uVar2 = (uint)*(byte *)((long)param_3 + 0x17);
        }
        plVar3 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,puVar1,1,(long)(int)uVar2);
        if ((uint)plVar3 == uVar2) {
          plVar3 = param_1;
          (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
          if ((int)plVar3 != 1) {
            return false;
          }
          uVar4 = 0;
          uVar5 = 0;
          do {
            uVar4 = ((ulong)bStack_41 & 0x7f) << (uVar5 & 0x3f) | uVar4;
            if (-1 < (char)bStack_41) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                        (param_4,uVar4,0);
              puVar1 = (undefined8 *)*param_4;
              uVar2 = (uint)param_4[1];
              if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
                puVar1 = param_4;
                uVar2 = (uint)*(byte *)((long)param_4 + 0x17);
              }
              (**(code **)(*param_1 + 0x40))(param_1,puVar1,1,(long)(int)uVar2);
              return (uint)param_1 == uVar2;
            }
            uVar5 = uVar5 + 7;
            plVar3 = param_1;
            (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
          } while ((int)plVar3 == 1);
          return false;
        }
        return false;
      }
      uVar5 = uVar5 + 7;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
    } while ((int)plVar3 == 1);
  }
  return false;
}



/* Entry: 1096cad9c; end: 1096cad9f;  */

void FUN_1096cad9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096cada0; end: 1096cadb3;  */

void FUN_1096cada0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096cadb4; end: 1096cadcb;  */

void FUN_1096cadb4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001096cadc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1096cadcc; end: 1096cae03;  */

undefined8 FUN_1096cadcc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b071a0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1096cae04; end: 1096cae07;  */

void FUN_1096cae04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096cae08; end: 1096cb157;  */

long * FUN_1096cae08(undefined4 *param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long *plStack_70;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    FUN_1096ba1fc(&uStack_78,param_2);
    uStack_40 = (undefined4)
                ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x20) -
                        *(long *)(*(long *)(param_2 + 8) + 0x18)) >> 3);
    uStack_3c = 2;
    puVar5 = (undefined4 *)CONCAT44(uStack_74,uStack_78);
    plStack_58 = (long *)0x0;
    uStack_50 = 0;
    plStack_60 = (long *)0x0;
    FUN_1092d1c20(&plStack_60,&uStack_40,&lStack_38,2);
    uVar11 = 1;
    for (plVar8 = plStack_60; iVar10 = (int)uVar11, plVar8 != plStack_58;
        plVar8 = (long *)((long)plVar8 + 4)) {
      uVar11 = (ulong)(uint)((int)*plVar8 * iVar10);
    }
    puVar4 = (undefined8 *)(((-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2) - 4 | 0xc) + 4);
    func_0x000109699314(puVar4,0x10);
    if (0 < iVar10) {
      uVar7 = iVar10 + 1;
      puVar2 = puVar4;
      do {
        *(undefined4 *)puVar2 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar2 = (undefined8 *)((long)puVar2 + 4);
        puVar5 = puVar5 + 1;
      } while (1 < uVar7);
    }
    *param_1 = 0x18;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puStack_48 = puVar4;
    FUN_109683e94(param_1 + 4,plStack_60,plStack_58,(long)plStack_58 - (long)plStack_60 >> 2);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    FUN_10967fc88(param_1);
    puVar4 = puStack_48;
    plVar8 = *(long **)(param_1 + 2);
    puVar5 = param_1;
    FUN_10967fc04(param_1);
    _memcpy(plVar8,puVar4,(long)(int)puVar5);
    puVar2 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      _free(puVar2[-1]);
    }
    if (plStack_60 != (long *)0x0) {
      plStack_58 = plStack_60;
      __ZdlPv();
    }
    plVar6 = (long *)CONCAT44(uStack_74,uStack_78);
    plVar1 = plVar6;
    if (plVar6 == (long *)0x0) goto LAB_1096cb070;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x18);
    uStack_78 = (undefined4)((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x20) - (long)puVar4) >> 3);
    plStack_58 = (long *)0x0;
    uStack_50 = 0;
    plStack_60 = (long *)0x0;
    FUN_1092d1c20(&plStack_60,&uStack_78,&uStack_74,1);
    uVar11 = 1;
    for (plVar8 = plStack_60; iVar10 = (int)uVar11, plVar8 != plStack_58;
        plVar8 = (long *)((long)plVar8 + 4)) {
      uVar11 = (ulong)(uint)((int)*plVar8 * iVar10);
    }
    puVar2 = (undefined8 *)(-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
    func_0x000109699314(puVar2,4);
    if (0 < iVar10) {
      uVar7 = iVar10 + 1;
      puVar3 = puVar2;
      do {
        *puVar3 = *puVar4;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (1 < uVar7);
    }
    *param_1 = 0x28;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puStack_48 = puVar2;
    FUN_109683e94(param_1 + 4,plStack_60,plStack_58,(long)plStack_58 - (long)plStack_60 >> 2);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    FUN_10967fc88(param_1);
    puVar4 = puStack_48;
    plVar8 = *(long **)(param_1 + 2);
    puVar5 = param_1;
    FUN_10967fc04(param_1);
    _memcpy(plVar8,puVar4,(long)(int)puVar5);
    puVar2 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      _free(puVar2[-1]);
    }
    plVar6 = plStack_60;
    if (plStack_60 == (long *)0x0) goto LAB_1096cb070;
    plStack_58 = plStack_60;
    plVar1 = plStack_70;
  }
  plStack_70 = plVar1;
  __ZdlPv();
LAB_1096cb070:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_1092bc814(puVar4);
    if (*plVar8 != 0) {
      *(long *)(param_1 + 6) = *plVar8;
      __ZdlPv();
    }
    FUN_109683d60(&plStack_60);
    if ((long *)CONCAT44(uStack_74,uStack_78) != (long *)0x0) {
      plStack_70 = (long *)CONCAT44(uStack_74,uStack_78);
      __ZdlPv();
    }
    __Unwind_Resume();
    lVar9 = plVar6[3];
    plVar6[3] = 0;
    if (lVar9 != 0) {
      _free(*(undefined8 *)(lVar9 + -8));
    }
    if (*plVar6 != 0) {
      plVar6[1] = *plVar6;
      __ZdlPv();
    }
    return plVar6;
  }
  return plVar6;
}



/* Entry: 1096cb158; end: 1096cb19b;  */

long * FUN_1096cb158(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    _free(*(undefined8 *)(lVar1 + -8));
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096cb19c; end: 1096cb6df;  */

void FUN_1096cb19c(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long **pplVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  undefined8 uStack_c0;
  float *pfStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  int *piStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_3 + 8);
  fVar12 = *(float *)(lVar10 + 8);
  fVar14 = *(float *)(lVar10 + 0xc);
  fVar15 = 1.0 / (fVar14 * fVar14 + fVar12 * fVar12);
  fVar12 = fVar12 * fVar15;
  fVar16 = -(fVar14 * fVar15);
  fVar18 = *(float *)(lVar10 + 0x10);
  fVar20 = *(float *)(lVar10 + 0x14);
  FUN_1096a5b40(param_2,0x11382aa18);
  fVar14 = fVar12;
  _hypotf(fVar12,fVar16);
  fVar15 = *(float *)(param_2 + 8);
  fVar19 = *(float *)(param_2 + 0xc);
  FUN_109683da4(fVar14 * *(float *)(param_2 + 4),&piStack_d0,0,0);
  plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,0x18);
  uStack_a8 = 0;
  piStack_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_109683e94(&piStack_a0,piStack_d0,piStack_c8,(long)piStack_c8 - (long)piStack_d0 >> 2);
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  FUN_10967fc88(&plStack_b0);
  uVar5 = uStack_a8;
  pfVar7 = pfStack_b8;
  pplVar6 = &plStack_b0;
  FUN_10967fc04(pplVar6);
  _memcpy(uVar5,pfVar7,(long)(int)pplVar6);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_d8 = 0;
  lVar10 = 0x38;
  uStack_e0 = param_1;
  __Znwm();
  *param_1 = lVar10;
  param_1[1] = lVar10;
  param_1[2] = lVar10 + 0x38;
  FUN_109682614();
  plVar13 = plStack_80;
  param_1[1] = lVar10 + 0x38;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (piStack_a0 != (int *)0x0) {
    piStack_98 = piStack_a0;
    __ZdlPv();
  }
  pfVar7 = pfStack_b8;
  pfStack_b8 = (float *)0x0;
  if (pfVar7 != (float *)0x0) {
    _free(*(undefined8 *)((long)pfVar7 + -8));
  }
  if (piStack_d0 != (int *)0x0) {
    piStack_c8 = piStack_d0;
    __ZdlPv();
  }
  fVar17 = (fVar20 * fVar16 - fVar18 * fVar12) + -(fVar19 * fVar16) + fVar12 * fVar15;
  fVar14 = (-(fVar12 * fVar20) - fVar18 * fVar16) + fVar16 * fVar15 + fVar12 * fVar19;
  if (param_4 == 0) {
    uStack_e0 = (long *)CONCAT44(uStack_e0._4_4_,2);
    piStack_c8 = (int *)0x0;
    uStack_c0 = 0;
    piStack_d0 = (int *)0x0;
    FUN_1092d1c20(&piStack_d0,&uStack_e0,(long)&uStack_e0 + 4,1);
    uVar11 = 1;
    for (piVar8 = piStack_d0; piVar8 != piStack_c8; piVar8 = piVar8 + 1) {
      uVar11 = (ulong)(uint)(*piVar8 * (int)uVar11);
    }
    pfVar7 = (float *)(((-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2) - 4 | 0xc) + 4);
    func_0x000109699314(pfVar7,0x10);
    pfStack_b8 = pfVar7;
    if (0 < (int)uVar11) {
      _bzero(pfVar7,uVar11 << 2);
    }
    *pfVar7 = fVar17;
    pfVar7[1] = fVar14;
    plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,0x18);
    uStack_a8 = 0;
    piStack_a0 = (int *)0x0;
    piStack_98 = (int *)0x0;
    uStack_90 = 0;
    FUN_109683e94(&piStack_a0,piStack_d0,piStack_c8,(long)piStack_c8 - (long)piStack_d0 >> 2);
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    FUN_10967fc88(&plStack_b0);
    uVar5 = uStack_a8;
    pfVar7 = pfStack_b8;
    pplVar6 = &plStack_b0;
    FUN_10967fc04(pplVar6);
    _memcpy(uVar5,pfVar7,(long)(int)pplVar6);
    pfVar7 = pfStack_b8;
    pfStack_b8 = (float *)0x0;
    if (pfVar7 != (float *)0x0) {
      _free(*(undefined8 *)(pfVar7 + -2));
    }
    if (piStack_d0 != (int *)0x0) {
      piStack_c8 = piStack_d0;
      __ZdlPv();
    }
    pplVar6 = &plStack_b0;
    FUN_1096cb6e0(param_1);
    plVar13 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    piVar8 = piStack_a0;
    if (piStack_a0 == (int *)0x0) goto LAB_1096cb590;
    piStack_98 = piStack_a0;
  }
  else {
    piStack_d0 = (int *)0x0;
    piStack_c8 = (int *)0x0;
    uStack_c0 = 0;
    pfVar7 = (float *)0x8;
    func_0x000109699314(8,4);
    *pfVar7 = fVar17;
    pfVar7[1] = fVar14;
    plStack_b0 = (long *)CONCAT44(plStack_b0._4_4_,0x28);
    uStack_90 = 0;
    piStack_98 = (int *)0x0;
    piStack_a0 = (int *)0x0;
    uStack_a8 = 0;
    pfStack_b8 = pfVar7;
    FUN_109683e94(&piStack_a0,0,0,0);
    uStack_88 = 0;
    plStack_80 = (long *)0x0;
    FUN_10967fc88(&plStack_b0);
    uVar5 = uStack_a8;
    pplVar6 = &plStack_b0;
    FUN_10967fc04(pplVar6);
    _memcpy(uVar5,pfVar7,(long)(int)pplVar6);
    pplVar6 = &plStack_b0;
    FUN_1096cb6e0(param_1);
    plVar13 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (piStack_a0 != (int *)0x0) {
      piStack_98 = piStack_a0;
      __ZdlPv();
    }
    if (pfStack_b8 != (float *)0x0) {
      _free(*(undefined8 *)(pfStack_b8 + -2));
    }
    piVar8 = piStack_d0;
    if (piStack_d0 == (int *)0x0) goto LAB_1096cb590;
  }
  __ZdlPv();
LAB_1096cb590:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x00010967fe64(&plStack_b0);
    plStack_b0 = plVar13;
    FUN_109682a18(&plStack_b0);
    __Unwind_Resume();
    puVar2 = *(undefined8 **)(piVar8 + 2);
    if (puVar2 < *(undefined8 **)(piVar8 + 4)) {
      plVar13 = *pplVar6;
      puVar2[1] = pplVar6[1];
      *puVar2 = plVar13;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0;
      plVar13 = pplVar6[2];
      puVar2[3] = pplVar6[3];
      puVar2[2] = plVar13;
      puVar2[4] = pplVar6[4];
      pplVar6[2] = (long *)0x0;
      pplVar6[3] = (long *)0x0;
      pplVar6[4] = (long *)0x0;
      plVar13 = pplVar6[5];
      puVar2[6] = pplVar6[6];
      puVar2[5] = plVar13;
      pplVar6[5] = (long *)0x0;
      pplVar6[6] = (long *)0x0;
      piVar9 = (int *)(puVar2 + 7);
    }
    else {
      piVar9 = piVar8;
      FUN_1096cb750();
    }
    *(int **)(piVar8 + 2) = piVar9;
    return;
  }
  return;
}



/* Entry: 1096cb6e0; end: 1096cb74f;  */

void FUN_1096cb6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    uVar2 = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar2;
    puVar1[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    uVar2 = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[5] = uVar2;
    param_2[5] = 0;
    param_2[6] = 0;
    puVar1 = puVar1 + 7;
  }
  else {
    puVar1 = param_1;
    FUN_1096cb750();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 1096cb750; end: 1096cb8ab;  */

long * FUN_1096cb750(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109682694();
    }
    plStack_50 = (long *)((long)plVar2 + lVar7);
    uVar8 = *param_2;
    plStack_50[1] = param_2[1];
    *plStack_50 = uVar8;
    plStack_50[3] = 0;
    plStack_50[4] = 0;
    plStack_50[2] = 0;
    uVar8 = param_2[2];
    plStack_50[3] = param_2[3];
    plStack_50[2] = uVar8;
    plStack_50[4] = param_2[4];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    uVar8 = param_2[5];
    plStack_50[6] = param_2[6];
    plStack_50[5] = uVar8;
    param_2[5] = 0;
    param_2[6] = 0;
    plVar1 = plStack_50 + 7;
    lVar7 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar6 * 7;
    func_0x0001096826dc(param_1,*param_1,param_1[1],lVar7);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar6 * 7);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010968279c(&plStack_58);
    return plVar1;
  }
  FUN_109682680();
  func_0x00010968279c(&plStack_58);
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_110b01d60;
  puVar3 = (undefined8 *)0x28;
  _malloc();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 3) = 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = &PTR_DAT_110b00de0;
  }
  *param_1 = (long)&PTR_FUN_110b071c8;
  param_1[1] = (long)puVar3;
  plVar2 = param_1;
  func_0x000107c2acd0(param_1,0x78);
  plVar2[0xe] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[1] = 0;
  *plVar2 = (long)&PTR_FUN_110b072d8;
  return param_1;
}



/* Entry: 1096cb8ac; end: 1096cb957;  */

undefined8 * FUN_1096cb8ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b071c8;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x78);
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b072d8;
  return param_1;
}



/* Entry: 1096cb958; end: 1096cc31b;  */

void FUN_1096cb958(undefined8 *param_1,long param_2,undefined1 (*param_3) [16],long *param_4,
                  int param_5)

{
  long lVar1;
  float *pfVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  short *psVar13;
  uint uVar14;
  short *psVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  short *psVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  short *psVar28;
  undefined8 *puVar29;
  short *psVar30;
  float *pfVar31;
  long lVar32;
  undefined8 *puVar33;
  float *pfVar34;
  long lVar35;
  long lVar36;
  undefined1 auVar37 [16];
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined **appuStack_120 [2];
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f0;
  long lStack_e8;
  short *psStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar39 = *(undefined8 *)*param_3;
  param_1[1] = *(undefined8 *)(*param_3 + 8);
  *param_1 = uVar39;
  *(int *)(param_1 + 2) = param_5;
  if (param_5 == 1) {
    lVar36 = *(long *)(param_2 + 8);
    uStack_12c = (undefined4)*(undefined8 *)*param_3;
    fStack_130 = -(float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    auVar37 = NEON_ext(*param_3,*param_3,8,1);
    uStack_138 = auVar37._8_8_;
    uStack_140 = auVar37._0_8_;
    FUN_1096a8b90(appuStack_120,param_4,&uStack_140);
    iVar21 = *(int *)(lVar36 + 0xc) + 1;
    fStack_b8 = -(2.0 / (float)iVar21);
    fStack_ac = 6.2831855 / (float)iVar21;
    fStack_c0 = (2.0 / (float)iVar21) * 0.5 + -0.6931472;
    fStack_bc = (1.0 / (float)iVar21 + -1.0) * 3.1415927;
    uStack_b4 = 0;
    uStack_b0 = 0;
    FUN_1096cd2b0(&psStack_e0,iVar21 * iVar21);
    FUN_1096a909c(appuStack_120,*(int *)(lVar36 + 0xc),*(int *)(lVar36 + 0xc) + 1,&fStack_c0,
                  (ulong)(lStack_d8 - (long)psStack_e0) >> 1 & 0xffffffff,psStack_e0);
    iVar17 = *(int *)(lVar36 + 0xc);
    iVar21 = iVar17 + 1;
    if (-1 < iVar17) {
      psVar24 = psStack_e0 +
                ((long)(int)((ulong)(lStack_d8 - (long)psStack_e0) >> 1) - (long)iVar21);
      psVar13 = psStack_e0;
      lVar35 = (long)iVar21;
      do {
        *psVar24 = *psVar13;
        lVar35 = lVar35 + -1;
        psVar24 = psVar24 + 1;
        psVar13 = psVar13 + 1;
      } while (lVar35 != 0);
    }
    FUN_1096aca74(&puStack_110,iVar17 * iVar17);
    puVar25 = puStack_110;
    lVar35 = (long)*(int *)(lVar36 + 0xc);
    FUN_1096aca74(&lStack_a8,lVar35);
    uVar22 = (ulong)*(uint *)(lVar36 + 0xc);
    if (0 < (int)*(uint *)(lVar36 + 0xc)) {
      lVar26 = 0;
      puVar29 = puVar25;
      psVar24 = psStack_e0;
      do {
        uVar9 = (uint)uVar22;
        if (0 < (int)uVar9) {
          fVar40 = *(float *)(*(long *)(lVar36 + 0x18) + lVar26 * 4);
          psVar13 = psVar24;
          uVar27 = uVar22;
          pfVar10 = (float *)(lStack_a8 + 4);
          do {
            psVar30 = psVar13 + 1;
            sVar3 = *psVar13;
            psVar13 = psVar13 + iVar21;
            sVar4 = *psVar13;
            pfVar10[-1] = fVar40 * (float)((int)*psVar30 - (int)sVar3);
            *pfVar10 = fVar40 * (float)((int)sVar4 - (int)sVar3);
            pfVar10 = pfVar10 + 2;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
          if (uVar9 - 1 != 0) {
            lVar32 = *(long *)(lVar36 + 0x60) + (ulong)(uVar9 - 1) * -8;
            lVar23 = lStack_a8;
            uVar27 = uVar22;
            do {
              iVar17 = 0;
              uVar16 = uVar27 >> 1;
              uVar14 = (uint)uVar27;
              do {
                if (1 < uVar14) {
                  lVar19 = 0;
                  lVar1 = lVar23 + uVar16 * 8;
                  do {
                    pfVar10 = (float *)(lVar23 + lVar19);
                    fVar40 = *pfVar10;
                    fVar41 = pfVar10[1];
                    fVar42 = *(float *)(lVar1 + lVar19);
                    fVar43 = *(float *)(lVar1 + lVar19 + 4);
                    *pfVar10 = fVar40 + fVar42;
                    pfVar10[1] = fVar41 + fVar43;
                    fVar40 = fVar40 - fVar42;
                    fVar41 = fVar41 - fVar43;
                    fVar42 = *(float *)(lVar32 + lVar19);
                    fVar43 = ((float *)(lVar32 + lVar19))[1];
                    *(float *)(lVar1 + lVar19) = -(fVar41 * fVar43) + fVar42 * fVar40;
                    *(float *)(lVar1 + lVar19 + 4) = fVar40 * fVar43 + fVar42 * fVar41;
                    lVar19 = lVar19 + 8;
                  } while (uVar16 * 8 != lVar19);
                }
                lVar23 = lVar23 + (uVar16 & 0x3fffffff) * 0x10;
                iVar17 = iVar17 + (uVar14 & 0x7ffffffe);
              } while (iVar17 < (int)uVar9);
              lVar23 = lVar23 + uVar22 * -8;
              lVar32 = lVar32 + uVar16 * 8;
              uVar27 = uVar16;
            } while (3 < uVar14);
          }
          lVar23 = 0;
          puVar33 = puVar29;
          do {
            *puVar33 = *(undefined8 *)(lStack_a8 + lVar23 * 8);
            lVar23 = lVar23 + 1;
            uVar9 = *(uint *)(lVar36 + 0xc);
            uVar22 = (ulong)uVar9;
            puVar33 = puVar33 + lVar35;
          } while (lVar23 < (int)uVar9);
        }
        lVar26 = lVar26 + 1;
        psVar24 = psVar24 + 1;
        puVar29 = puVar29 + 1;
      } while (lVar26 < (int)uVar9);
      iVar21 = (int)uVar22;
      if (0 < iVar21) {
        uVar27 = 0;
        lVar26 = *(long *)(lVar36 + 0x60);
        iVar17 = *(int *)(lVar36 + 0x50);
        pfVar10 = (float *)((long)puVar25 + 4);
        pfVar31 = (float *)(*(long *)(lVar36 + 0x30) + 4);
        fVar40 = 1.1754944e-38;
        do {
          pfVar12 = pfVar10;
          uVar16 = uVar22;
          pfVar34 = pfVar31;
          if (iVar21 != 1) {
            puVar29 = puVar25 + uVar27 * lVar35;
            uVar11 = uVar22;
            lVar36 = lVar26 + (ulong)(iVar21 - 1) * -8;
            do {
              iVar18 = 0;
              uVar8 = uVar11 >> 1;
              uVar9 = (uint)uVar11;
              lVar23 = uVar8 * 8;
              do {
                if (1 < uVar9) {
                  lVar32 = 0;
                  do {
                    pfVar2 = (float *)((long)puVar29 + lVar32);
                    fVar41 = *pfVar2;
                    fVar42 = pfVar2[1];
                    fVar43 = *(float *)((long)puVar29 + lVar32 + lVar23);
                    fVar38 = *(float *)((long)puVar29 + lVar32 + lVar23 + 4);
                    *pfVar2 = fVar41 + fVar43;
                    pfVar2[1] = fVar42 + fVar38;
                    fVar41 = fVar41 - fVar43;
                    fVar42 = fVar42 - fVar38;
                    fVar43 = *(float *)(lVar36 + lVar32);
                    fVar38 = ((float *)(lVar36 + lVar32))[1];
                    *(float *)((long)puVar29 + lVar32 + lVar23) =
                         -(fVar42 * fVar38) + fVar43 * fVar41;
                    *(float *)((long)puVar29 + lVar32 + lVar23 + 4) =
                         fVar41 * fVar38 + fVar43 * fVar42;
                    lVar32 = lVar32 + 8;
                  } while (lVar23 != lVar32);
                }
                puVar29 = puVar29 + (uVar8 & 0x3fffffff) * 2;
                iVar18 = iVar18 + (uVar9 & 0x7ffffffe);
              } while (iVar18 < iVar21);
              puVar29 = puVar29 + -uVar22;
              lVar36 = lVar36 + uVar8 * 8;
              uVar11 = uVar8;
            } while (3 < uVar9);
          }
          do {
            fVar42 = -(*pfVar12 * *pfVar34) + pfVar34[-1] * pfVar12[-1];
            fVar41 = pfVar12[-1] * *pfVar34 + pfVar34[-1] * *pfVar12;
            pfVar12[-1] = fVar42;
            *pfVar12 = fVar41;
            fVar40 = fVar40 + fVar41 * fVar41 + fVar42 * fVar42;
            uVar16 = uVar16 - 1;
            pfVar12 = pfVar12 + 2;
            pfVar34 = pfVar34 + 2;
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          pfVar10 = pfVar10 + lVar35 * 2;
          pfVar31 = pfVar31 + (long)iVar17 * 2;
        } while (uVar27 != uVar22);
        uVar27 = 0;
        uVar16 = uVar22;
        puVar29 = puVar25;
        do {
          do {
            *puVar25 = CONCAT44((float)((ulong)*puVar25 >> 0x20) * ((float)uVar22 / SQRT(fVar40)),
                                (float)*puVar25 * ((float)uVar22 / SQRT(fVar40)));
            uVar16 = uVar16 - 1;
            puVar25 = puVar25 + 1;
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          puVar25 = puVar29 + lVar35;
          uVar16 = uVar22;
          puVar29 = puVar25;
        } while (uVar27 != uVar22);
      }
    }
    if (lStack_a8 != 0) {
      uStack_a0 = lStack_a8;
      _free(*(undefined8 *)(lStack_a8 + -8));
    }
    if (psStack_e0 != (short *)0x0) {
      _free(*(undefined8 *)(psStack_e0 + -4));
    }
    param_1[4] = uStack_108;
    param_1[3] = puStack_110;
    param_1[5] = uStack_100;
    uStack_108 = 0;
    uStack_100 = 0;
    puStack_110 = (undefined8 *)0x0;
    appuStack_120[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_120);
  }
  else if (param_5 == 0) {
    lVar36 = *(long *)(param_2 + 8);
    fVar41 = *(float *)*param_3;
    fVar40 = *(float *)(*param_3 + 4);
    uVar39 = *(undefined8 *)(*param_3 + 8);
    lStack_e8 = param_4[1];
    ppuStack_f0 = (undefined **)*param_4;
    if (lStack_e8 != 0) {
      piVar20 = (int *)(lStack_e8 + -8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    fVar42 = *(float *)(lVar36 + 8);
    fVar43 = *(float *)(lVar36 + 0x14);
    uVar7 = *(undefined8 *)(lVar36 + 0x10);
    iVar21 = *(int *)(lVar36 + 0xc) + 1;
    FUN_1096cd2b0(&fStack_c0,iVar21 * iVar21);
    fStack_94 = fVar41 * fVar42;
    fVar41 = fVar40 * fVar42;
    fStack_98 = -(fVar40 * fVar42);
    fVar40 = (float)uVar7;
    lStack_a8 = CONCAT44((float)((ulong)uVar39 >> 0x20) -
                         (fVar40 * fVar41 + (float)((ulong)uVar7 >> 0x20) * fStack_94),
                         (float)uVar39 - (-fVar43 * fVar41 + fVar40 * fStack_94));
    uStack_a0 = CONCAT44(fVar41,fStack_94);
    psVar13 = (short *)CONCAT44(fStack_bc,fStack_c0);
    (*(code *)ppuStack_f0[9])
              (&ppuStack_f0,*(int *)(lVar36 + 0xc) + 1,*(int *)(lVar36 + 0xc) + 1,&lStack_a8,
               (ulong)(CONCAT44(uStack_b4,fStack_b8) - (long)psVar13) >> 1 & 0xffffffff,psVar13);
    iVar21 = *(int *)(lVar36 + 0xc);
    FUN_1096aca74(&psStack_e0,iVar21 * iVar21);
    psVar24 = psStack_e0;
    lVar35 = (long)*(int *)(lVar36 + 0xc);
    FUN_1096aca74(&lStack_a8,lVar35);
    uVar22 = (ulong)*(uint *)(lVar36 + 0xc);
    if (0 < (int)*(uint *)(lVar36 + 0xc)) {
      lVar26 = 0;
      psVar28 = psVar24;
      psVar30 = psVar13;
      do {
        uVar9 = (uint)uVar22;
        if (0 < (int)uVar9) {
          fVar40 = (*(float **)(lVar36 + 0x18))[lVar26];
          pfVar10 = (float *)(lStack_a8 + 4);
          psVar15 = psVar30;
          uVar27 = uVar22;
          pfVar31 = *(float **)(lVar36 + 0x18);
          do {
            sVar3 = *psVar15;
            fVar41 = (float)((int)psVar15[1] - (int)sVar3);
            pfVar10[-1] = fVar41;
            psVar15 = (short *)((long)psVar15 +
                               (-(ulong)(iVar21 + 1U >> 0x1f) & 0xfffffffe00000000 |
                               (ulong)(iVar21 + 1U) << 1));
            fVar42 = (float)((int)*psVar15 - (int)sVar3);
            *pfVar10 = fVar42;
            fVar43 = fVar40 * *pfVar31;
            pfVar10[-1] = fVar43 * fVar41;
            *pfVar10 = fVar43 * fVar42;
            pfVar10 = pfVar10 + 2;
            uVar27 = uVar27 - 1;
            pfVar31 = pfVar31 + 1;
          } while (uVar27 != 0);
          if (uVar9 - 1 != 0) {
            lVar32 = *(long *)(lVar36 + 0x60) + (ulong)(uVar9 - 1) * -8;
            lVar23 = lStack_a8;
            uVar27 = uVar22;
            do {
              iVar17 = 0;
              uVar16 = uVar27 >> 1;
              uVar14 = (uint)uVar27;
              do {
                if (1 < uVar14) {
                  lVar19 = 0;
                  lVar1 = lVar23 + uVar16 * 8;
                  do {
                    pfVar10 = (float *)(lVar23 + lVar19);
                    fVar40 = *pfVar10;
                    fVar41 = pfVar10[1];
                    fVar42 = *(float *)(lVar1 + lVar19);
                    fVar43 = *(float *)(lVar1 + lVar19 + 4);
                    *pfVar10 = fVar40 + fVar42;
                    pfVar10[1] = fVar41 + fVar43;
                    fVar40 = fVar40 - fVar42;
                    fVar41 = fVar41 - fVar43;
                    fVar42 = *(float *)(lVar32 + lVar19);
                    fVar43 = ((float *)(lVar32 + lVar19))[1];
                    *(float *)(lVar1 + lVar19) = -(fVar41 * fVar43) + fVar42 * fVar40;
                    *(float *)(lVar1 + lVar19 + 4) = fVar40 * fVar43 + fVar42 * fVar41;
                    lVar19 = lVar19 + 8;
                  } while (uVar16 * 8 != lVar19);
                }
                lVar23 = lVar23 + (uVar16 & 0x3fffffff) * 0x10;
                iVar17 = iVar17 + (uVar14 & 0x7ffffffe);
              } while (iVar17 < (int)uVar9);
              lVar23 = lVar23 + uVar22 * -8;
              lVar32 = lVar32 + uVar16 * 8;
              uVar27 = uVar16;
            } while (3 < uVar14);
          }
          lVar23 = 0;
          psVar15 = psVar28;
          do {
            *(undefined8 *)psVar15 = *(undefined8 *)(lStack_a8 + lVar23 * 8);
            lVar23 = lVar23 + 1;
            uVar9 = *(uint *)(lVar36 + 0xc);
            uVar22 = (ulong)uVar9;
            psVar15 = psVar15 + lVar35 * 4;
          } while (lVar23 < (int)uVar9);
        }
        lVar26 = lVar26 + 1;
        psVar30 = psVar30 + 1;
        psVar28 = psVar28 + 4;
      } while (lVar26 < (int)uVar9);
      iVar21 = (int)uVar22;
      if (0 < iVar21) {
        uVar27 = 0;
        lVar26 = *(long *)(lVar36 + 0x60);
        iVar17 = *(int *)(lVar36 + 0x50);
        pfVar10 = (float *)(psVar24 + 2);
        pfVar31 = (float *)(*(long *)(lVar36 + 0x30) + 4);
        fVar40 = 1.1754944e-38;
        do {
          pfVar12 = pfVar10;
          uVar16 = uVar22;
          pfVar34 = pfVar31;
          if (iVar21 != 1) {
            psVar30 = psVar24 + uVar27 * lVar35 * 4;
            uVar11 = uVar22;
            lVar36 = lVar26 + (ulong)(iVar21 - 1) * -8;
            do {
              iVar18 = 0;
              uVar8 = uVar11 >> 1;
              uVar9 = (uint)uVar11;
              lVar23 = uVar8 * 8;
              do {
                if (1 < uVar9) {
                  lVar32 = 0;
                  do {
                    pfVar2 = (float *)((long)psVar30 + lVar32);
                    fVar41 = *pfVar2;
                    fVar42 = pfVar2[1];
                    fVar43 = *(float *)((long)psVar30 + lVar32 + lVar23);
                    fVar38 = *(float *)((long)psVar30 + lVar32 + lVar23 + 4);
                    *pfVar2 = fVar41 + fVar43;
                    pfVar2[1] = fVar42 + fVar38;
                    fVar41 = fVar41 - fVar43;
                    fVar42 = fVar42 - fVar38;
                    fVar43 = *(float *)(lVar36 + lVar32);
                    fVar38 = ((float *)(lVar36 + lVar32))[1];
                    *(float *)((long)psVar30 + lVar32 + lVar23) =
                         -(fVar42 * fVar38) + fVar43 * fVar41;
                    *(float *)((long)psVar30 + lVar32 + lVar23 + 4) =
                         fVar41 * fVar38 + fVar43 * fVar42;
                    lVar32 = lVar32 + 8;
                  } while (lVar23 != lVar32);
                }
                psVar30 = psVar30 + (uVar8 & 0x3fffffff) * 8;
                iVar18 = iVar18 + (uVar9 & 0x7ffffffe);
              } while (iVar18 < iVar21);
              psVar30 = psVar30 + uVar22 * -4;
              lVar36 = lVar36 + uVar8 * 8;
              uVar11 = uVar8;
            } while (3 < uVar9);
          }
          do {
            fVar42 = -(*pfVar12 * *pfVar34) + pfVar34[-1] * pfVar12[-1];
            fVar41 = pfVar12[-1] * *pfVar34 + pfVar34[-1] * *pfVar12;
            pfVar12[-1] = fVar42;
            *pfVar12 = fVar41;
            fVar40 = fVar40 + fVar41 * fVar41 + fVar42 * fVar42;
            uVar16 = uVar16 - 1;
            pfVar12 = pfVar12 + 2;
            pfVar34 = pfVar34 + 2;
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          pfVar10 = pfVar10 + lVar35 * 2;
          pfVar31 = pfVar31 + (long)iVar17 * 2;
        } while (uVar27 != uVar22);
        uVar27 = 0;
        uVar16 = uVar22;
        psVar30 = psVar24;
        do {
          do {
            *(ulong *)psVar24 =
                 CONCAT44((float)((ulong)*(undefined8 *)psVar24 >> 0x20) *
                          ((float)uVar22 / SQRT(fVar40)),
                          (float)*(undefined8 *)psVar24 * ((float)uVar22 / SQRT(fVar40)));
            uVar16 = uVar16 - 1;
            psVar24 = psVar24 + 4;
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          psVar24 = psVar30 + lVar35 * 4;
          uVar16 = uVar22;
          psVar30 = psVar24;
        } while (uVar27 != uVar22);
      }
    }
    if (lStack_a8 != 0) {
      uStack_a0 = lStack_a8;
      _free(*(undefined8 *)(lStack_a8 + -8));
    }
    if (psVar13 != (short *)0x0) {
      _free(*(undefined8 *)(psVar13 + -4));
    }
    param_1[4] = lStack_d8;
    param_1[3] = psStack_e0;
    param_1[5] = uStack_d0;
    lStack_d8 = 0;
    uStack_d0 = 0;
    psStack_e0 = (short *)0x0;
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
  }
  return;
}



/* Entry: 1096cc31c; end: 1096cc8ff;  */

void FUN_1096cc31c(float *param_1,long param_2,long param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  
  lVar17 = *(long *)(param_2 + 8);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  pfVar2 = *(float **)(param_3 + 0x18);
  lVar16 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x28) = 0;
  uVar7 = lVar16 - (long)pfVar2;
  if (0 < (int)(uVar7 >> 3)) {
    uVar7 = uVar7 >> 3 & 0x7fffffff;
    pfVar8 = (float *)(*(long *)(param_4 + 6) + 4);
    pfVar10 = pfVar2 + 1;
    do {
      fVar19 = pfVar10[-1];
      fVar20 = pfVar8[-1];
      fVar21 = *pfVar8;
      pfVar10[-1] = *pfVar10 * fVar21 + fVar20 * fVar19;
      *pfVar10 = fVar19 * fVar21 - fVar20 * *pfVar10;
      pfVar8 = pfVar8 + 2;
      pfVar10 = pfVar10 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = *(uint *)(lVar17 + 0xc);
  lVar16 = (long)(int)uVar3;
  FUN_1096aca74(&puStack_c0,lVar16);
  uVar7 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    lVar9 = 0;
    do {
      iVar24 = 0;
      lVar13 = 0;
      do {
        puStack_c0[lVar13] = *(undefined8 *)(pfVar2 + lVar9 * 2 + (long)iVar24 * 2);
        lVar13 = lVar13 + 1;
        iVar24 = iVar24 + uVar3;
      } while (lVar16 != lVar13);
      puVar12 = puStack_c0;
      uVar11 = uVar7;
      if (uVar3 != 1) {
        lVar13 = *(long *)(lVar17 + 0x60);
        uVar18 = 1;
        do {
          iVar24 = 0;
          lVar13 = lVar13 + uVar18 * -8;
          uVar14 = (uint)uVar18;
          uVar4 = uVar14 * 2;
          lVar5 = uVar18 * 8;
          do {
            if (0 < (int)uVar14) {
              lVar6 = 0;
              do {
                pfVar8 = (float *)((long)puVar12 + lVar6);
                fVar19 = *pfVar8;
                fVar20 = pfVar8[1];
                pfVar10 = (float *)(lVar13 + 4 + lVar6);
                fVar21 = *(float *)((long)puVar12 + lVar6 + lVar5);
                fVar26 = pfVar10[-1];
                fVar23 = *pfVar10;
                fVar27 = *(float *)((long)puVar12 + lVar6 + lVar5 + 4);
                fVar28 = fVar23 * fVar27 + fVar26 * fVar21;
                fVar21 = -(fVar23 * fVar21) + fVar26 * fVar27;
                *pfVar8 = fVar19 + fVar28;
                pfVar8[1] = fVar20 + fVar21;
                *(float *)((long)puVar12 + lVar6 + lVar5) = fVar19 - fVar28;
                *(float *)((long)puVar12 + lVar6 + lVar5 + 4) = fVar20 - fVar21;
                lVar6 = lVar6 + 8;
              } while (lVar5 != lVar6);
            }
            puVar12 = (undefined8 *)
                      ((long)puVar12 +
                      (-(ulong)((uVar14 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                      (ulong)uVar4 << 3));
            iVar24 = iVar24 + uVar4;
          } while (iVar24 < (int)uVar3);
          puVar12 = puVar12 + -uVar7;
          uVar18 = (ulong)uVar4;
        } while ((int)uVar4 < (int)uVar3);
      }
      do {
        *puVar12 = CONCAT44((float)((ulong)*puVar12 >> 0x20) * (1.0 / (float)uVar3),
                            (float)*puVar12 * (1.0 / (float)uVar3));
        uVar11 = uVar11 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar11 != 0);
      iVar24 = 0;
      puVar12 = puStack_c0;
      lVar13 = lVar16;
      do {
        *(undefined8 *)(pfVar2 + lVar9 * 2 + (long)iVar24 * 2) = *puVar12;
        iVar24 = iVar24 + uVar3;
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar13 != 0);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar16);
  }
  uVar4 = *(uint *)(lVar17 + 0xc);
  if (0 < (int)uVar4) {
    uVar11 = 0;
    lVar9 = *(long *)(lVar17 + 0x60);
    do {
      pfVar8 = pfVar2 + uVar11 * lVar16 * 2;
      if (1 < (int)uVar3) {
        lVar13 = lVar9;
        uVar18 = 1;
        do {
          iVar24 = 0;
          lVar13 = lVar13 + uVar18 * -8;
          uVar15 = (uint)uVar18;
          uVar14 = uVar15 * 2;
          lVar5 = uVar18 * 8;
          do {
            if (0 < (int)uVar15) {
              lVar6 = 0;
              do {
                pfVar10 = (float *)((long)pfVar8 + lVar6);
                fVar19 = *pfVar10;
                fVar20 = pfVar10[1];
                pfVar1 = (float *)(lVar13 + 4 + lVar6);
                fVar21 = *(float *)((long)pfVar8 + lVar6 + lVar5);
                fVar26 = pfVar1[-1];
                fVar23 = *pfVar1;
                fVar27 = *(float *)((long)pfVar8 + lVar6 + lVar5 + 4);
                fVar28 = fVar23 * fVar27 + fVar26 * fVar21;
                fVar21 = -(fVar23 * fVar21) + fVar26 * fVar27;
                *pfVar10 = fVar19 + fVar28;
                pfVar10[1] = fVar20 + fVar21;
                *(float *)((long)pfVar8 + lVar6 + lVar5) = fVar19 - fVar28;
                *(float *)((long)pfVar8 + lVar6 + lVar5 + 4) = fVar20 - fVar21;
                lVar6 = lVar6 + 8;
              } while (lVar5 != lVar6);
            }
            pfVar8 = (float *)((long)pfVar8 +
                              (-(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                              (ulong)uVar14 << 3));
            iVar24 = iVar24 + uVar14;
          } while (iVar24 < (int)uVar3);
          pfVar8 = pfVar8 + uVar7 * -2;
          uVar18 = (ulong)uVar14;
        } while ((int)uVar14 < (int)uVar3);
      }
      uVar18 = uVar7;
      if (0 < (int)uVar3) {
        do {
          *(ulong *)pfVar8 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar8 >> 0x20) * (1.0 / (float)(int)uVar3),
                        (float)*(undefined8 *)pfVar8 * (1.0 / (float)(int)uVar3));
          uVar18 = uVar18 - 1;
          pfVar8 = pfVar8 + 2;
        } while (uVar18 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    puStack_b8 = puStack_c0;
    _free(puStack_c0[-1]);
  }
  uVar3 = *(uint *)(lVar17 + 0xc);
  uVar7 = (ulong)uVar3;
  fVar19 = 0.65;
  if ((int)uVar3 < 1) {
    uVar31 = 0;
    fVar23 = 0.0;
    fVar21 = 0.0;
    fVar20 = 0.0;
    uVar32 = 0;
  }
  else {
    uVar11 = 0;
    fVar19 = 0.65;
    pfVar8 = pfVar2;
    uVar18 = uVar7;
    pfVar10 = pfVar2;
    do {
      do {
        fVar20 = *pfVar8;
        if (*pfVar8 <= fVar19) {
          fVar20 = fVar19;
        }
        fVar19 = fVar20;
        uVar18 = uVar18 - 1;
        pfVar8 = pfVar8 + 2;
      } while (uVar18 != 0);
      uVar11 = uVar11 + 1;
      pfVar8 = pfVar10 + lVar16 * 2;
      uVar18 = uVar7;
      pfVar10 = pfVar8;
    } while (uVar11 != uVar7);
    uVar11 = 0;
    uVar31 = 0;
    fVar23 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar26 = 0.0;
    uVar32 = 0;
    pfVar8 = pfVar2;
    do {
      uVar18 = 0;
      uVar4 = 0;
      if (uVar3 >> 1 <= uVar11) {
        uVar4 = uVar3;
      }
      fVar27 = (float)(int)((int)uVar11 - uVar4);
      pfVar10 = pfVar8;
      do {
        fVar30 = *pfVar10;
        fVar28 = (fVar30 - fVar19) * 20.0;
        if (-4.0 <= fVar28) {
          _expf();
          uVar4 = 0;
          if (uVar3 >> 1 <= uVar18) {
            uVar4 = uVar3;
          }
          fVar23 = (float)(int)((int)uVar18 - uVar4);
          uVar32 = CONCAT44((float)((ulong)uVar32 >> 0x20) + (fVar27 * fVar27 + 0.25) * fVar28,
                            (float)uVar32 + (fVar23 * fVar23 + 0.25) * fVar28);
          fVar21 = fVar21 + (fVar27 * fVar23 + 0.0) * fVar28;
          uVar31 = CONCAT44((float)((ulong)uVar31 >> 0x20) + fVar27 * fVar28,
                            (float)uVar31 + fVar23 * fVar28);
          fVar30 = fVar30 + -0.65;
          fVar23 = 0.0;
          if (0.0 <= fVar30) {
            fVar23 = fVar30;
          }
          fVar23 = fVar26 + fVar28 * fVar23;
          fVar20 = fVar20 + fVar28;
          fVar26 = fVar23;
        }
        uVar18 = uVar18 + 1;
        pfVar10 = pfVar10 + 2;
      } while (uVar7 != uVar18);
      uVar11 = uVar11 + 1;
      pfVar8 = pfVar8 + lVar16 * 2;
    } while (uVar11 != uVar7);
  }
  fVar19 = (0.65 - fVar19) * 20.0;
  _expf();
  fVar20 = fVar20 + ((float)(uVar3 * uVar3) / 256.0) * fVar19;
  param_1[5] = fVar23 / (fVar20 * 0.35000002);
  fVar20 = 1.0 / fVar20;
  fVar23 = (float)uVar31 * fVar20;
  fVar26 = (float)((ulong)uVar31 >> 0x20) * fVar20;
  fVar19 = fVar26 * fVar26;
  dVar22 = (double)CONCAT44((float)((ulong)uVar32 >> 0x20) * fVar20,(float)uVar32 * fVar20) -
           (double)CONCAT17((char)((uint)fVar19 >> 0x18),
                            CONCAT16((char)((uint)fVar19 >> 0x10),
                                     CONCAT15((char)((uint)fVar19 >> 8),
                                              CONCAT14(SUB41(fVar19,0),fVar23 * fVar23))));
  iVar24 = -(uint)(SUB84(dVar22,0) < 0.0);
  iVar25 = -(uint)((float)((ulong)dVar22 >> 0x20) < 0.0);
  fVar27 = (float)CONCAT13((byte)((ulong)dVar22 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)((ulong)dVar22 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)((ulong)dVar22 >> 8) & ~(byte)((uint)iVar24 >> 8)
                                             ,SUB81(dVar22,0) & ~(byte)iVar24)));
  uVar31 = CONCAT17((byte)((ulong)dVar22 >> 0x38) & ~(byte)((uint)iVar25 >> 0x18),
                    CONCAT16((byte)((ulong)dVar22 >> 0x30) & ~(byte)((uint)iVar25 >> 0x10),
                             CONCAT15((byte)((ulong)dVar22 >> 0x28) & ~(byte)((uint)iVar25 >> 8),
                                      CONCAT14((byte)((ulong)dVar22 >> 0x20) & ~(byte)iVar25,fVar27)
                                     )));
  fVar19 = fVar21 * fVar20 - fVar23 * fVar26;
  *param_1 = fVar19;
  *(undefined8 *)(param_1 + 1) = uVar31;
  *(ulong *)(param_1 + 3) = CONCAT44(fVar26,fVar23);
  if (param_4[4] == 0.0) {
    fVar28 = *(float *)(lVar17 + 8) * *param_4;
    fVar21 = *(float *)(lVar17 + 8) * param_4[1];
    fVar30 = fVar28 * fVar28;
    fVar29 = fVar21 * fVar21;
    fVar33 = (fVar19 + fVar19) * fVar28 * fVar21;
    fVar20 = (float)((ulong)uVar31 >> 0x20);
    *param_1 = fVar19 * (fVar30 - fVar29) + fVar28 * fVar21 * (fVar27 - fVar20);
    param_1[1] = (fVar29 * fVar20 + fVar30 * fVar27) - fVar33;
    fVar19 = fVar26 * fVar28 + fVar21 * fVar23;
    param_1[2] = fVar33 + fVar30 * fVar20 + fVar29 * fVar27;
    param_1[3] = -(fVar26 * fVar21) + fVar28 * fVar23;
  }
  else {
    if (param_4[4] != 1.4013e-45) goto LAB_1096cc8ac;
    fVar19 = 1.0 / (float)(int)(uVar3 + 1);
    param_1[3] = -((fVar19 + fVar19) * fVar23);
    fVar19 = fVar26 * fVar19 * 6.2831855;
  }
  param_1[4] = fVar19;
LAB_1096cc8ac:
  if (pfVar2 != (float *)0x0) {
    _free(*(undefined8 *)(pfVar2 + -2));
  }
  return;
}



/* Entry: 1096cc900; end: 1096cc9f7;  */

void FUN_1096cc900(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uStack_34;
  undefined1 uStack_32;
  byte bStack_31;
  
  lVar2 = *(long *)(param_1 + 8);
  uStack_34 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,2,1);
  uVar3 = (long)*(int *)(lVar2 + 0xc) << 1 ^ (long)*(int *)(lVar2 + 0xc) >> 0x3f;
  uVar4 = uVar3;
  if (0x7f < uVar3) {
    do {
      bStack_31 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_31,1,1);
      uVar3 = uVar4 >> 7;
      uVar1 = uVar4 >> 0xe;
      uVar4 = uVar3;
    } while (uVar1 != 0);
  }
  uStack_32 = (undefined1)uVar3;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_32,1,1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar2 + 0x70,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar2 + 0x74,4,1);
  return;
}



/* Entry: 1096cc9f8; end: 1096cd247;  */

undefined8 FUN_1096cc9f8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  float *pfVar9;
  long lVar10;
  int iVar11;
  float *pfVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  long lStack_120;
  float *pfStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  long lStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  undefined2 uStack_b2;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  lVar22 = *(long *)(param_1 + 8);
  uStack_b2 = 0;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&uStack_b2,2,1);
  if (((int)plVar8 == 1) &&
     (plVar8 = param_2, (**(code **)(*param_2 + 0x40))(param_2,&fStack_130,1,1), (int)plVar8 == 1))
  {
    uVar20 = 0;
    uVar23 = 0;
    do {
      uVar20 = ((ulong)fStack_130._0_1_ & 0x7f) << (uVar23 & 0x3f) | uVar20;
      if (-1 < (char)fStack_130._0_1_) {
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&fStack_b8,4,1);
        if ((int)plVar8 != 1) {
          return 0;
        }
        (**(code **)(*param_2 + 0x40))(param_2,&fStack_bc,4,1);
        if ((int)param_2 != 1) {
          return 0;
        }
        uVar23 = -(uVar20 & 1) ^ uVar20 >> 1;
        uVar14 = (uint)uVar23;
        fStack_130 = 1.0 / (float)(int)uVar14;
        fStack_128 = (float)(int)uVar14 / 2.0;
        pfStack_118 = (float *)0x0;
        uStack_110 = 0;
        lStack_120 = 0;
        uStack_12c = uVar14;
        fStack_124 = fStack_128;
        if (uVar14 != 0) {
          lVar18 = (long)(int)uVar14;
          FUN_1096ab0e4(&lStack_120,lVar18);
          pfVar9 = pfStack_118 + lVar18;
          lVar18 = lVar18 << 2;
          pfVar12 = pfStack_118;
          do {
            *pfVar12 = (float)(int)uVar14;
            lVar18 = lVar18 + -4;
            pfVar12 = pfVar12 + 1;
            pfStack_118 = pfVar9;
          } while (lVar18 != 0);
        }
        lStack_108 = 0;
        lStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = uVar14;
        uStack_ec = uVar14;
        uStack_e8 = uVar14;
        FUN_1096aca74(&lStack_b0,uVar14 * uVar14);
        if (lStack_108 != 0) {
          lStack_100 = lStack_108;
          _free(*(undefined8 *)(lStack_108 + -8));
        }
        lStack_100 = lStack_a8;
        lStack_108 = lStack_b0;
        uStack_f8 = uStack_a0;
        lStack_e0 = 0;
        pfStack_d8 = (float *)0x0;
        pfStack_d0 = (float *)0x0;
        iVar11 = uVar14 - 1;
        if (iVar11 != 0) {
          if ((int)uVar14 < 1) {
            FUN_1096abde8();
LAB_1096cd1d8:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1096cd1dc);
            (*pcVar7)();
          }
          pfVar9 = (float *)((long)iVar11 << 3);
          func_0x000109699314(pfVar9,4);
          lVar18 = (long)pfVar9 - ((long)pfStack_d8 - lStack_e0);
          _memcpy(lVar18);
          pfStack_d8 = pfVar9;
          pfStack_d0 = pfVar9 + (long)iVar11 * 2;
          if (lStack_e0 != 0) {
            puVar1 = (undefined8 *)(lStack_e0 + -8);
            lStack_e0 = lVar18;
            _free(*puVar1);
            lVar18 = lStack_e0;
          }
          lStack_e0 = lVar18;
          uVar25 = 0;
          uVar5 = uVar14 >> 1;
          dVar29 = 6.283185307179586;
          do {
            pfVar9 = pfStack_d8;
            dVar28 = (6.283185307179586 / (double)(uVar23 & 0xffffffff)) * (double)uVar25;
            ___sincos_stret();
            fVar32 = (float)dVar29;
            if (pfVar9 < pfStack_d0) {
              pfVar12 = pfVar9 + 2;
              *pfVar9 = fVar32;
              pfVar9[1] = (float)dVar28;
              lVar18 = lStack_e0;
            }
            else {
              lVar18 = (long)pfVar9 - lStack_e0;
              uVar20 = (lVar18 >> 3) + 1;
              if (uVar20 >> 0x3d != 0) {
                FUN_1096abde8();
                goto LAB_1096cd1d8;
              }
              uVar26 = (long)pfStack_d0 - lStack_e0 >> 2;
              if (uVar26 <= uVar20) {
                uVar26 = uVar20;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pfStack_d0 - lStack_e0)) {
                uVar26 = 0x1fffffffffffffff;
              }
              lVar19 = uVar26 << 3;
              func_0x000109699314(lVar19,4);
              pfVar9 = (float *)(lVar19 + lVar18);
              pfVar2 = (float *)(lVar19 + uVar26 * 8);
              *pfVar9 = fVar32;
              pfVar9[1] = (float)dVar28;
              pfVar12 = pfVar9 + 2;
              lVar18 = (long)pfVar9 - ((long)pfStack_d8 - lStack_e0);
              _memcpy(lVar18);
              pfStack_d0 = pfVar2;
              if (lStack_e0 != 0) {
                puVar1 = (undefined8 *)(lStack_e0 + -8);
                lStack_e0 = lVar18;
                pfStack_d8 = pfVar12;
                _free(*puVar1);
                lVar18 = lStack_e0;
              }
            }
            lStack_e0 = lVar18;
            uVar25 = uVar25 + 1;
            pfStack_d8 = pfVar12;
          } while (uVar5 != uVar25);
          if (3 < (int)uVar14) {
            iVar11 = 2;
            do {
              lVar18 = 0;
              pfStack_d8 = pfVar12;
              do {
                uVar21 = *(undefined8 *)(lStack_e0 + lVar18 * 8);
                if (pfStack_d8 < pfStack_d0) {
                  pfVar12 = pfStack_d8 + 2;
                  *(undefined8 *)pfStack_d8 = uVar21;
                  lVar19 = lStack_e0;
                }
                else {
                  lVar19 = (long)pfStack_d8 - lStack_e0;
                  uVar20 = (lVar19 >> 3) + 1;
                  if (uVar20 >> 0x3d != 0) {
                    FUN_1096abde8();
                    goto LAB_1096cd1d8;
                  }
                  uVar26 = (long)pfStack_d0 - lStack_e0 >> 2;
                  if (uVar26 <= uVar20) {
                    uVar26 = uVar20;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pfStack_d0 - lStack_e0)) {
                    uVar26 = 0x1fffffffffffffff;
                  }
                  lVar24 = uVar26 << 3;
                  func_0x000109699314(lVar24,4);
                  puVar1 = (undefined8 *)(lVar24 + lVar19);
                  pfVar9 = (float *)(lVar24 + uVar26 * 8);
                  pfVar12 = (float *)(puVar1 + 1);
                  *puVar1 = uVar21;
                  lVar19 = (long)puVar1 - ((long)pfStack_d8 - lStack_e0);
                  _memcpy(lVar19);
                  pfStack_d0 = pfVar9;
                  if (lStack_e0 != 0) {
                    puVar1 = (undefined8 *)(lStack_e0 + -8);
                    lStack_e0 = lVar19;
                    pfStack_d8 = pfVar12;
                    _free(*puVar1);
                    lVar19 = lStack_e0;
                  }
                }
                lStack_e0 = lVar19;
                lVar18 = lVar18 + iVar11;
                pfStack_d8 = pfVar12;
              } while (lVar18 < (long)(ulong)uVar5);
              iVar11 = iVar11 * 2;
            } while (iVar11 <= (int)uVar5);
          }
        }
        uVar25 = uStack_e8;
        lVar19 = lStack_108;
        lVar18 = lStack_120;
        fStack_c8 = fStack_b8;
        fStack_c4 = fStack_bc;
        lVar24 = (long)(int)uStack_e8;
        if (0 < (int)uVar14) {
          iVar11 = 0;
          uVar20 = 0;
          do {
            fVar31 = (float)(uVar20 & 0xffffffff) / fStack_128 + -1.0;
            fVar27 = (1.0 / (fStack_b8 * fStack_b8 + fStack_b8 * fStack_b8)) * -(fVar31 * fVar31);
            _expf();
            fVar32 = fStack_124;
            uVar26 = 0;
            *(float *)(lVar18 + uVar20 * 4) = fVar27;
            pfVar9 = (float *)(lVar19 + (long)iVar11 * 8);
            do {
              fVar27 = (float)(uVar26 & 0xffffffff) / fVar32 + -1.0;
              fVar27 = -((fVar27 * fVar27 + fVar31 * fVar31) *
                        (1.0 / (fStack_bc * fStack_bc + fStack_bc * fStack_bc)));
              _expf();
              *pfVar9 = fVar27;
              uVar26 = uVar26 + 1;
              pfVar9 = pfVar9 + 2;
            } while ((uVar23 & 0x7fffffff) != uVar26);
            uVar20 = uVar20 + 1;
            iVar11 = iVar11 + uVar25;
          } while (uVar20 != (uVar23 & 0x7fffffff));
        }
        uVar5 = uStack_ec;
        uVar14 = uStack_f0;
        uVar23 = (ulong)uStack_f0;
        uVar20 = (ulong)uStack_ec;
        lVar18 = (long)(int)uStack_ec;
        FUN_1096aca74(&lStack_b0,lVar18);
        if (0 < (int)uVar5) {
          lVar13 = 0;
          uVar26 = uVar23;
          if (uVar23 < 2) {
            uVar26 = 1;
          }
          do {
            if (0 < (int)uVar14) {
              iVar11 = 0;
              uVar15 = 0;
              lVar3 = lVar19 + lVar13 * 8;
              do {
                *(undefined8 *)(lStack_b0 + uVar15 * 8) = *(undefined8 *)(lVar3 + (long)iVar11 * 8);
                uVar15 = uVar15 + 1;
                iVar11 = iVar11 + uVar25;
              } while (uVar23 != uVar15);
              if (uVar14 != 1) {
                pfVar9 = pfStack_d8 + (ulong)(uVar14 - 1) * -2;
                lVar16 = lStack_b0;
                uVar15 = uVar23;
                do {
                  iVar11 = 0;
                  uVar6 = uVar15 >> 1;
                  uVar17 = (uint)uVar15;
                  do {
                    if (1 < uVar17) {
                      lVar10 = 0;
                      lVar4 = lVar16 + uVar6 * 8;
                      do {
                        pfVar12 = (float *)(lVar16 + lVar10);
                        fVar32 = *pfVar12;
                        fVar27 = pfVar12[1];
                        fVar31 = *(float *)(lVar4 + lVar10);
                        fVar30 = *(float *)(lVar4 + lVar10 + 4);
                        *pfVar12 = fVar32 + fVar31;
                        pfVar12[1] = fVar27 + fVar30;
                        fVar32 = fVar32 - fVar31;
                        fVar27 = fVar27 - fVar30;
                        fVar31 = *(float *)((long)pfVar9 + lVar10);
                        fVar30 = ((float *)((long)pfVar9 + lVar10))[1];
                        *(float *)(lVar4 + lVar10) = -(fVar27 * fVar30) + fVar31 * fVar32;
                        *(float *)(lVar4 + lVar10 + 4) = fVar32 * fVar30 + fVar31 * fVar27;
                        lVar10 = lVar10 + 8;
                      } while (uVar6 * 8 != lVar10);
                    }
                    lVar16 = lVar16 + (uVar6 & 0x3fffffff) * 0x10;
                    iVar11 = iVar11 + (uVar17 & 0x7ffffffe);
                  } while (iVar11 < (int)uVar14);
                  lVar16 = lVar16 + uVar23 * -8;
                  pfVar9 = pfVar9 + uVar6 * 2;
                  uVar15 = uVar6;
                } while (3 < uVar17);
              }
              iVar11 = 0;
              lVar16 = 0;
              do {
                *(undefined8 *)(lVar3 + (long)iVar11 * 8) = *(undefined8 *)(lStack_b0 + lVar16);
                lVar16 = lVar16 + 8;
                iVar11 = iVar11 + uVar25;
              } while (uVar26 * 8 - lVar16 != 0);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar18);
        }
        if (0 < (int)uStack_12c) {
          uVar23 = 0;
          do {
            if (1 < (int)uVar5) {
              lVar18 = lVar19 + uVar23 * lVar24 * 8;
              uVar26 = uVar20;
              pfVar9 = pfStack_d8 + (ulong)(uVar5 - 1) * -2;
              do {
                iVar11 = 0;
                uVar15 = uVar26 >> 1;
                uVar14 = (uint)uVar26;
                do {
                  if (1 < uVar14) {
                    lVar13 = 0;
                    lVar3 = lVar18 + uVar15 * 8;
                    do {
                      pfVar12 = (float *)(lVar18 + lVar13);
                      fVar32 = *pfVar12;
                      fVar27 = pfVar12[1];
                      fVar31 = *(float *)(lVar3 + lVar13);
                      fVar30 = *(float *)(lVar3 + lVar13 + 4);
                      *pfVar12 = fVar32 + fVar31;
                      pfVar12[1] = fVar27 + fVar30;
                      fVar32 = fVar32 - fVar31;
                      fVar27 = fVar27 - fVar30;
                      fVar31 = *(float *)((long)pfVar9 + lVar13);
                      fVar30 = ((float *)((long)pfVar9 + lVar13))[1];
                      *(float *)(lVar3 + lVar13) = -(fVar27 * fVar30) + fVar31 * fVar32;
                      *(float *)(lVar3 + lVar13 + 4) = fVar32 * fVar30 + fVar31 * fVar27;
                      lVar13 = lVar13 + 8;
                    } while (uVar15 * 8 != lVar13);
                  }
                  lVar18 = lVar18 + (uVar15 & 0x3fffffff) * 0x10;
                  iVar11 = iVar11 + (uVar14 & 0x7ffffffe);
                } while (iVar11 < (int)uVar5);
                lVar18 = lVar18 + uVar20 * -8;
                pfVar9 = pfVar9 + uVar15 * 2;
                uVar26 = uVar15;
              } while (3 < uVar14);
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != uStack_12c);
        }
        if (lStack_b0 != 0) {
          lStack_a8 = lStack_b0;
          _free(*(undefined8 *)(lStack_b0 + -8));
        }
        lVar18 = *(long *)(lVar22 + 0x18);
        *(ulong *)(lVar22 + 8) = CONCAT44(uStack_12c,fStack_130);
        *(ulong *)(lVar22 + 0x10) = CONCAT44(fStack_124,fStack_128);
        if (lVar18 != 0) {
          *(long *)(lVar22 + 0x20) = lVar18;
          _free(*(undefined8 *)(lVar18 + -8));
          *(long *)(lVar22 + 0x18) = 0;
          *(undefined8 *)(lVar22 + 0x20) = 0;
          *(undefined8 *)(lVar22 + 0x28) = 0;
        }
        lVar18 = *(long *)(lVar22 + 0x30);
        *(float **)(lVar22 + 0x20) = pfStack_118;
        *(long *)(lVar22 + 0x18) = lStack_120;
        *(undefined8 *)(lVar22 + 0x28) = uStack_110;
        lStack_120 = 0;
        pfStack_118 = (float *)0x0;
        uStack_110 = 0;
        if (lVar18 != 0) {
          *(long *)(lVar22 + 0x38) = lVar18;
          _free(*(undefined8 *)(lVar18 + -8));
          *(long *)(lVar22 + 0x30) = 0;
          *(undefined8 *)(lVar22 + 0x38) = 0;
          *(undefined8 *)(lVar22 + 0x40) = 0;
        }
        lVar18 = *(long *)(lVar22 + 0x58);
        *(long *)(lVar22 + 0x38) = lStack_100;
        *(long *)(lVar22 + 0x30) = lStack_108;
        *(undefined8 *)(lVar22 + 0x40) = uStack_f8;
        lStack_108 = 0;
        lStack_100 = 0;
        uStack_f8 = 0;
        *(ulong *)(lVar22 + 0x48) = CONCAT44(uStack_ec,uStack_f0);
        *(uint *)(lVar22 + 0x50) = uStack_e8;
        if (lVar18 != 0) {
          *(long *)(lVar22 + 0x60) = lVar18;
          _free(*(undefined8 *)(lVar18 + -8));
          *(long *)(lVar22 + 0x58) = 0;
          *(undefined8 *)(lVar22 + 0x60) = 0;
          *(undefined8 *)(lVar22 + 0x68) = 0;
        }
        *(float **)(lVar22 + 0x60) = pfStack_d8;
        *(long *)(lVar22 + 0x58) = lStack_e0;
        *(float **)(lVar22 + 0x68) = pfStack_d0;
        lStack_e0 = 0;
        pfStack_d8 = (float *)0x0;
        pfStack_d0 = (float *)0x0;
        *(ulong *)(lVar22 + 0x70) = CONCAT44(fStack_c4,fStack_c8);
        if (lStack_108 != 0) {
          lStack_100 = lStack_108;
          _free(*(undefined8 *)(lStack_108 + -8));
        }
        if (lStack_120 != 0) {
          pfStack_118 = (float *)lStack_120;
          _free(*(undefined8 *)(lStack_120 + -8));
        }
        return 1;
      }
      uVar23 = uVar23 + 7;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&fStack_130,1,1);
    } while ((int)plVar8 == 1);
  }
  return 0;
}



/* Entry: 1096cd248; end: 1096cd27b;  */

undefined8 * FUN_1096cd248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cd27c; end: 1096cd2af;  */

void FUN_1096cd27c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cd2b0; end: 1096cd33f;  */

long * FUN_1096cd2b0(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    lVar1 = (param_2 * 2 - 2U | 0xe) + 2;
    func_0x000109699314(lVar1,0x10);
    *param_1 = lVar1;
    param_1[2] = lVar1 + param_2 * 2;
    _bzero();
    param_1[1] = lVar1 + param_2 * 2;
  }
  return param_1;
}



/* Entry: 1096cd340; end: 1096cd35b;  */

void FUN_1096cd340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096cd35c; end: 1096cd3a3;  */

void FUN_1096cd35c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cd3a4; end: 1096cd3fb;  */

undefined8 * FUN_1096cd3a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cd3fc; end: 1096cd453;  */

void FUN_1096cd3fc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b071e8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cd454; end: 1096cd49f;  */

void FUN_1096cd454(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096cb8ac(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cd4a0; end: 1096cd4cf;  */

bool FUN_1096cd4a0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b071e8,0);
  return param_1 != 0;
}



/* Entry: 1096cd4d0; end: 1096cd587;  */

long FUN_1096cd4d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x60) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x20) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  return param_1;
}



/* Entry: 1096cd588; end: 1096cd58b;  */

void FUN_1096cd588(void)

{
  return;
}



/* Entry: 1096cd58c; end: 1096cd68b;  */

void FUN_1096cd58c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar4 = *(undefined8 **)(*(long *)(param_4 + 8) + 8);
  ppuStack_50 = &PTR_FUN_110b01d60;
  lStack_48 = 0;
  if (puVar4[1] != 0) {
    func_0x000107c2acd4(&ppuStack_50);
    lStack_48 = puVar4[1];
    ppuStack_50 = (undefined **)*puVar4;
    if (lStack_48 != 0) {
      piVar3 = (int *)(lStack_48 + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_3,&ppuStack_50,param_5);
  func_0x000107c2acec(param_1);
  *param_1 = &PTR_FUN_110afd8b8;
  FUN_1096985c0(param_1[1] + 8,&ppuStack_50);
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  return;
}



/* Entry: 1096cd68c; end: 1096cd68f;  */

void FUN_1096cd68c(void)

{
  return;
}



/* Entry: 1096cd690; end: 1096cd6c3;  */

undefined8 * FUN_1096cd690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cd6c4; end: 1096cd6f7;  */

void FUN_1096cd6c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cd6f8; end: 1096cd70b;  */

void FUN_1096cd6f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096cd70c; end: 1096cd73b;  */

void FUN_1096cd70c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096cd73c; end: 1096cd773;  */

void FUN_1096cd73c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096cd774; end: 1096cd79f;  */

void FUN_1096cd774(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07378;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cd7a0; end: 1096cd8db;  */

void FUN_1096cd7a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar4 = 0x10b07378;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b07468;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar4 = 0x10b07378;
    func_0x00010969659c(&ppuStack_60);
    uVar5 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar5;
    func_0x000107c2acd4();
    param_2 = pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)0x28;
  _malloc();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 3) = 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = &PTR_DAT_110b00de0;
  }
  *param_2 = &PTR_FUN_110b07340;
  param_2[1] = puVar3;
  return;
}



/* Entry: 1096cd8dc; end: 1096cd92b;  */

void FUN_1096cd8dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b07340;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1096cd92c; end: 1096cd9a3;  */

void FUN_1096cd92c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b07340;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096cd9a4; end: 1096cd9d3;  */

bool FUN_1096cd9a4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b07378,0);
  return param_1 != 0;
}



/* Entry: 1096cd9d4; end: 1096cda2f;  */

void FUN_1096cd9d4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b07340;
  return;
}



/* Entry: 1096cda30; end: 1096cda77;  */

void FUN_1096cda30(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096cda78; end: 1096cdae7;  */

undefined8 * FUN_1096cda78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096cdae8; end: 1096cdb3f;  */

void FUN_1096cdae8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07378;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cdb40; end: 1096cdc07;  */

void FUN_1096cdb40(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar4,puRam0000000113735cb0);
  puVar3 = puRam0000000113735cb0;
  if ((lVar4 == 0) || (puVar5 = *(undefined8 **)(lVar4 + 8), puVar5 == (undefined8 *)0x0)) {
    lVar4 = *(long *)(param_1 + 8) + -0x20;
    puVar5 = puRam0000000113735cb0;
    (**(code **)*puRam0000000113735cb0)();
    FUN_109696718(lVar4,puVar3);
    *(undefined8 **)(lVar4 + 8) = puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    func_0x000107c2acec(puVar5);
    *puVar5 = &PTR_FUN_110b03cc8;
  }
  plVar2 = *(long **)(puVar5[1] + 8);
  uVar1 = (*(long *)(puVar5[1] + 0x10) - (long)plVar2) * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
  for (; uVar1 != 0; uVar1 = uVar1 - 0x10) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    plVar2 = plVar2 + 2;
  }
  return;
}



/* Entry: 1096cdc08; end: 1096cdd77;  */

void FUN_1096cdc08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lVar3 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar3,plRam0000000113735cb0);
  if ((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 8), plVar4 == (long *)0x0)) {
    plVar4 = plRam0000000113735cb0;
    (**(code **)(*plRam0000000113735cb0 + 0x30))();
  }
  plVar5 = *(long **)(plVar4[1] + 8);
  uVar6 = (*(long *)(plVar4[1] + 0x10) - (long)plVar5) * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
  if (uVar6 != 0) {
    bVar1 = false;
    dVar8 = 0.0;
    do {
      func_0x000109696564(&ppuStack_80,plVar5);
      func_0x000107c2accc();
      func_0x00010969659c(&ppuStack_90);
      lVar2 = lStack_78;
      lVar3 = lStack_88;
      ppuStack_90 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_90);
      ppuStack_80 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_80);
      dVar7 = dVar8;
      if (lVar2 != lVar3) {
        dVar7 = NAN;
      }
      dVar9 = 0.0;
      if (lVar2 != lVar3) {
        dVar9 = dVar8;
      }
      *(double *)(param_4 + 0x20) = dVar7;
      (**(code **)(*plVar5 + 0x30))(plVar5,param_2,param_3,param_4);
      dVar7 = *(double *)(param_4 + 0x20);
      bVar1 = (bool)(!NAN(dVar7) | bVar1);
      dVar8 = dVar9 + dVar7;
      if (NAN(dVar7)) {
        dVar8 = dVar9;
      }
      uVar6 = uVar6 - 0x10;
      plVar5 = plVar5 + 2;
    } while (uVar6 != 0);
    if (bVar1) {
      *(double *)(param_4 + 0x20) = dVar8;
    }
  }
  return;
}



/* Entry: 1096cdd78; end: 1096cddab;  */

undefined8 * FUN_1096cdd78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cddac; end: 1096cdddf;  */

void FUN_1096cddac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cdde0; end: 1096cddf3;  */

void FUN_1096cdde0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096cddf4; end: 1096cde23;  */

void FUN_1096cddf4(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096cde24; end: 1096cde5b;  */

void FUN_1096cde24(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096cde5c; end: 1096cde87;  */

void FUN_1096cde5c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b07568;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096cde88; end: 1096cdf6f;  */

void FUN_1096cde88(undefined8 *param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b03ce8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    FUN_1096ae150("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b03ce8;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c2acec();
  *param_2 = &PTR_FUN_110b03cc8;
  return;
}



/* Entry: 1096cdf70; end: 1096cdf93;  */

void FUN_1096cdf70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2acec();
  *param_1 = &PTR_FUN_110b03cc8;
  return;
}



/* Entry: 1096cdf94; end: 1096ce00b;  */

void FUN_1096cdf94(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b07530;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ce00c; end: 1096ce03b;  */

bool FUN_1096ce00c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b07568,0);
  return param_1 != 0;
}



/* Entry: 1096ce03c; end: 1096ce07b;  */

void FUN_1096ce03c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b03cc8;
  return;
}



/* Entry: 1096ce07c; end: 1096ce0f7;  */

undefined8 * FUN_1096ce07c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b07658;
  param_1[1] = puVar1;
  FUN_1096ce0f8(param_1);
  return param_1;
}



/* Entry: 1096ce0f8; end: 1096ce197;  */

void FUN_1096ce0f8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x40);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  *(undefined4 *)(param_1 + 1) = 1;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[2] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[3] = puVar3[1];
  param_1[2] = uVar5;
  if (param_1[3] != 0) {
    piVar4 = (int *)(param_1[3] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[2] = &PTR_FUN_110b051b8;
  param_1[4] = &PTR_FUN_110b01d60;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_110b01d60;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_110b07a30;
  return;
}



/* Entry: 1096ce198; end: 1096ce1b3;  */

void FUN_1096ce198(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001096ce1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 0x20))();
    return;
  }
  return;
}



/* Entry: 1096ce1b4; end: 1096ce58f;  */

void FUN_1096ce1b4(long param_1,undefined ***param_2,undefined ***param_3,undefined ***param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  int *piVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  double dVar23;
  undefined4 uStack_114;
  ulong uStack_110;
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_1 + 8);
  ppuVar12 = param_3[1];
  pppuVar11 = param_3;
  pppuStack_e0 = param_2;
  lStack_d8 = param_1;
  if (((long)ppuVar12[4] - (long)ppuVar12[3] & 0x7fffffff8U) == 0) {
    puStack_a8 = ppuVar12[2];
    ppuStack_b0 = (undefined **)ppuVar12[1];
    if (ppuVar12 != *(undefined ***)(lVar21 + 0x18)) {
      func_0x000107c2acd4(param_3);
      ppuVar12 = *(undefined ***)(lVar21 + 0x10);
      param_3[1] = *(undefined ***)(lVar21 + 0x18);
      *param_3 = ppuVar12;
      if (param_3[1] != (undefined **)0x0) {
        ppuVar12 = param_3[1] + -1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
          if (bVar7) {
            *(int *)ppuVar12 = *(int *)ppuVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    FUN_1096b9f58(param_3);
    ppuVar12 = param_3[1];
    ppuVar12[2] = puStack_a8;
    ppuVar12[1] = (undefined *)ppuStack_b0;
  }
  ppuVar12 = &PTR_FUN_110b05928;
  if (((ulong)param_4[2] & 1) == 0) {
    func_0x000107c2acec(&ppuStack_b0);
    uVar20 = 1;
  }
  else {
    uVar5 = *(uint *)(*(long *)(lStack_d8 + 8) + 8);
    uVar20 = (ulong)uVar5;
    func_0x000107c2acec(&ppuStack_b0);
    ppuStack_b0 = &PTR_FUN_110b05928;
    if ((int)uVar5 < 1) {
      dVar23 = 0.0;
      goto LAB_1096ce418;
    }
  }
  ppuStack_b0 = &PTR_FUN_110b05928;
  iVar22 = 0;
  dVar23 = 0.0;
  do {
    if (*(long *)(lVar21 + 0x18) == 0) {
      ppuVar15 = (undefined **)0x7ff8000000000000;
      param_4[4] = (undefined **)0x7ff8000000000000;
      if (*(long *)(*(long *)(lStack_d8 + 8) + 0x28) != 0) {
        plVar8 = (long *)(*(long *)(lStack_d8 + 8) + 0x20);
        pppuVar11 = param_3;
        (**(code **)(*plVar8 + 0x30))(plVar8,pppuStack_e0,param_3,param_4);
        goto LAB_1096ce3e0;
      }
    }
    else {
      ppuStack_b8 = (undefined **)param_3[1][2];
      ppuStack_c0 = (undefined **)param_3[1][1];
      FUN_1096b9f58(param_3);
      puVar1 = param_3[1][3];
      ppuVar12 = (undefined **)
                 ((ulong)ppuVar12 & 0xffffffff00000000 |
                 (ulong)((long)param_3[1][4] - (long)puVar1) >> 3 & 0xffffffff);
      FUN_1096c0c44(lVar21 + 0x10,ppuVar12,puVar1,&ppuStack_c0);
      puVar1 = param_3[1][3];
      puVar3 = param_3[1][4];
      lVar14 = *(long *)(*(long *)(lVar21 + 0x18) + 0x18);
      lVar4 = *(long *)(*(long *)(lVar21 + 0x18) + 0x20);
      FUN_1096b9f58(param_3);
      FUN_1096b9118(param_3[1] + 3,(lVar4 - lVar14) * 0x20000000 >> 0x20);
      FUN_1096b9f58(param_3);
      puVar2 = param_3[1][3];
      uVar13 = (long)param_3[1][4] - (long)puVar2;
      iVar18 = (int)((ulong)((long)puVar3 - (long)puVar1) >> 3);
      if (iVar18 < (int)(uVar13 >> 3)) {
        lVar14 = ((long)(uVar13 * 0x20000000) >> 0x20) - (long)iVar18;
        puVar17 = (undefined8 *)(puVar2 + (long)iVar18 * 8);
        puVar19 = (undefined8 *)(*(long *)(*(long *)(lVar21 + 0x18) + 0x18) + (long)iVar18 * 8);
        do {
          *puVar17 = *puVar19;
          lVar14 = lVar14 + -1;
          puVar17 = puVar17 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar14 != 0);
      }
      FUN_1096b9f58(param_3);
      ppuVar15 = param_3[1];
      ppuVar15[2] = (undefined *)ppuStack_b8;
      ppuVar15[1] = (undefined *)ppuStack_c0;
      param_4[4] = (undefined **)0x7ff8000000000000;
      plVar8 = (long *)(*(long *)(lStack_d8 + 8) + 0x20);
      pppuVar11 = param_3;
      (**(code **)(*plVar8 + 0x30))(plVar8,pppuStack_e0,param_3,param_4);
LAB_1096ce3e0:
      ppuVar15 = param_4[4];
    }
    param_2 = param_3;
    FUN_1096985c0(puStack_a8 + 8);
    dVar23 = dVar23 + (double)ppuVar15;
    iVar22 = iVar22 + 1;
  } while (iVar22 != (int)uVar20);
LAB_1096ce418:
  lVar21 = *(long *)(lStack_d8 + 8);
  if (*(long *)(lVar21 + 0x38) == 0) {
    FUN_1096c07e0(&ppuStack_c0,&ppuStack_b0);
    ppuVar12 = param_3[1];
    param_3[1] = ppuStack_b8;
    *param_3 = ppuStack_c0;
    ppuStack_c0 = &PTR_FUN_110b01d60;
    ppuStack_b8 = ppuVar12;
    func_0x000107c2acd4(&ppuStack_c0);
  }
  else {
    puStack_c8 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      piVar16 = (int *)(puStack_a8 + -8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar7) {
          *piVar16 = *piVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppuStack_d0 = &PTR_FUN_110b05928;
    param_2 = &ppuStack_d0;
    pppuVar11 = param_4;
    (**(code **)(*(long *)(lVar21 + 0x30) + 0x20))(&ppuStack_c0,lVar21 + 0x30);
    ppuVar12 = param_3[1];
    param_3[1] = ppuStack_b8;
    *param_3 = ppuStack_c0;
    ppuStack_c0 = &PTR_FUN_110b01d60;
    ppuStack_b8 = ppuVar12;
    func_0x000107c2acd4(&ppuStack_c0);
    ppuStack_d0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_d0);
  }
  if (NAN(dVar23)) {
    ppuVar12 = (undefined **)0x7ff8000000000000;
  }
  else {
    ppuVar12 = (undefined **)(dVar23 / (double)(int)uVar20);
  }
  param_4[4] = ppuVar12;
  ppuStack_b0 = &PTR_FUN_110b01d60;
  pppuVar9 = &ppuStack_b0;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  pppuVar10 = pppuVar9;
  __Unwind_Resume();
  ppuStack_108 = &PTR_FUN_110b01d60;
  pcStack_e8 = FUN_1096ce590;
  uStack_114 = 7;
  uStack_110 = uVar20;
  pppuStack_100 = param_3;
  pppuStack_f8 = pppuVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  (*(code *)(*param_2)[9])(param_2,&uStack_114,4,1);
  (*(code *)(*param_2)[9])(param_2,pppuVar10[1] + 1,4,1);
  ppuVar12 = pppuVar10[1];
  (*(code *)(*pppuVar11)[4])(pppuVar11,param_2,ppuVar12 + 2);
  (*(code *)(*pppuVar11)[4])(pppuVar11,param_2,ppuVar12 + 4);
  (*(code *)(*pppuVar11)[4])(pppuVar11,param_2,ppuVar12 + 6);
  return;
}



/* Entry: 1096ce590; end: 1096ce653;  */

void FUN_1096ce590(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined4 uStack_34;
  
  uStack_34 = 7;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,4,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,4,1);
  lVar1 = *(long *)(param_1 + 8);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,lVar1 + 0x10);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,lVar1 + 0x20);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,lVar1 + 0x30);
  return;
}



/* Entry: 1096ce654; end: 1096ced8f;  */

void FUN_1096ce654(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined **ppuVar13;
  undefined8 *extraout_x8;
  int *piVar14;
  uint uVar15;
  long lVar16;
  undefined **unaff_x22;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined2 uStack_fa;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_e4 = 0;
  piVar14 = &iStack_e4;
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,piVar14,4,1);
  iVar10 = (int)piVar14;
  if (iStack_e4 < 7) {
    uStack_ec = 1;
    uStack_e8 = 0x3f800000;
    uStack_f4 = 0;
    uStack_f0 = 1;
    uStack_f8 = 0x3f800000;
    uStack_fa = 0;
    if (((ulong)plVar8 & 0xffffffff) == 1) {
      puVar11 = &uStack_e8;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar11,4,1);
      iVar10 = (int)puVar11;
      if ((int)plVar8 != 1) goto LAB_1096ce850;
      puVar11 = &uStack_f8;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar11,4,1);
      iVar10 = (int)puVar11;
      if ((int)plVar8 != 1) goto LAB_1096ce850;
      puVar11 = &uStack_f0;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar11,4,1);
      iVar10 = (int)puVar11;
      bVar3 = (int)plVar8 == 1;
    }
    else {
LAB_1096ce850:
      bVar3 = false;
    }
    if (iStack_e4 == 6) {
      if (!bVar3) goto LAB_1096ceb48;
      lVar5 = *(long *)(param_1 + 8) + 8;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,lVar5,4,1);
      iVar10 = (int)lVar5;
      bVar3 = (int)plVar8 == 1;
    }
    else {
      *(undefined4 *)(*(long *)(param_1 + 8) + 8) = uStack_f0;
    }
    bVar4 = (bool)(iStack_e4 < 3 & bVar3);
    if ((2 < iStack_e4) && (bVar3)) {
      puVar11 = &uStack_ec;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar11,4,1);
      iVar10 = (int)puVar11;
      if ((int)plVar8 != 1) goto LAB_1096ceb48;
      puVar12 = &uStack_fa;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar12,1,1);
      iVar10 = (int)puVar12;
      bVar4 = (int)plVar8 == 1;
    }
    bVar3 = (bool)(iStack_e4 < 1 & bVar4);
    if ((0 < iStack_e4) && (bVar4)) {
      puVar11 = &uStack_f4;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,puVar11,4,1);
      iVar10 = (int)puVar11;
      bVar3 = (int)plVar8 == 1;
    }
    if ((iStack_e4 < 4) || (!bVar3)) {
      if ((bool)(iStack_e4 < 4 & bVar3)) {
LAB_1096ceab0:
        (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
        pppuVar6 = &ppuStack_e0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110afd8f0,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuVar18 = pppuVar6[1];
        ppuStack_d0 = *pppuVar6;
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar13 = ppuVar18 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        unaff_x22 = &PTR_FUN_110b01d60;
        ppuStack_e0 = &PTR_FUN_110b01d60;
        ppuStack_c8 = ppuVar18;
        func_0x000107c2acd4(&ppuStack_e0);
        lVar5 = param_3[1] + -0x20;
        uVar17 = uRam000000011382aa08;
        func_0x0001096966c0();
        iVar10 = (int)uVar17;
        if (lVar5 == 0) {
          puVar7 = ppuVar18[1];
          if (((long)ppuVar18[2] - (long)puVar7 & 0xffffffff0U) != 0) {
            if ((puVar7 == (undefined *)0x0) ||
               (___dynamic_cast(puVar7,&PTR_DAT_110b01d40,&PTR_DAT_110b05200,0),
               puVar7 == (undefined *)0x0)) {
              func_0x000107c2acdc();
            }
            lVar5 = *(long *)(puVar7 + 8);
            if (lVar5 != 0) {
              piVar14 = (int *)(lVar5 + -8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar3) {
                  *piVar14 = *piVar14 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            lVar16 = *(long *)(param_1 + 8);
            uStack_d8 = *(undefined8 *)(lVar16 + 0x18);
            *(long *)(lVar16 + 0x18) = lVar5;
            *(undefined ***)(lVar16 + 0x10) = &PTR_FUN_110b051b8;
            ppuStack_e0 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_e0);
          }
          ppuStack_d0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_d0);
LAB_1096cec10:
          lVar5 = *(long *)(param_1 + 8);
          (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
          FUN_1093e0930(&ppuStack_d0,&ppuStack_e0);
          ppuVar18 = *(undefined ***)(lVar5 + 0x28);
          *(undefined ***)(lVar5 + 0x28) = ppuStack_c8;
          *(undefined ***)(lVar5 + 0x20) = ppuStack_d0;
          unaff_x22 = &PTR_FUN_110b01d60;
          ppuStack_d0 = &PTR_FUN_110b01d60;
          ppuStack_c8 = ppuVar18;
          func_0x000107c2acd4(&ppuStack_d0);
          ppuStack_e0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_e0);
          lVar5 = param_3[1] + -0x20;
          uVar17 = uRam000000011382aa08;
          func_0x0001096966c0();
          iVar10 = (int)uVar17;
          uVar15 = 0;
          if (lVar5 == 0) {
            uVar15 = (uint)(iStack_e4 < 2);
          }
          plVar8 = (long *)(ulong)uVar15;
          if ((iStack_e4 < 2) || (lVar5 != 0)) goto LAB_1096ceb4c;
          param_1 = *(long *)(param_1 + 8);
          (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
          FUN_1096cf858(&ppuStack_d0,&ppuStack_e0);
          ppuVar18 = *(undefined ***)(param_1 + 0x38);
          *(undefined ***)(param_1 + 0x38) = ppuStack_c8;
          *(undefined ***)(param_1 + 0x30) = ppuStack_d0;
          ppuStack_d0 = &PTR_FUN_110b01d60;
          ppuStack_c8 = ppuVar18;
          func_0x000107c2acd4(&ppuStack_d0);
          ppuStack_e0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_e0);
          goto LAB_1096cecf0;
        }
        ppuStack_d0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_d0);
      }
    }
    else {
      lVar5 = (long)&uStack_fa + 1;
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,lVar5,1,1);
      iVar10 = (int)lVar5;
      if ((int)plVar8 == 1) {
        if (iStack_e4 < 5) goto LAB_1096ceab0;
        func_0x000107c2acec(&ppuStack_110);
        ppuStack_110 = &PTR_FUN_110b05928;
        (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
        pppuVar6 = &ppuStack_e0;
        ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b05948,0);
        if (pppuVar6 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        ppuVar18 = pppuVar6[1];
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar13 = ppuVar18 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_c8 = ppuStack_108;
        ppuStack_110 = &PTR_FUN_110b05928;
        ppuStack_d0 = &PTR_FUN_110b01d60;
        ppuStack_108 = ppuVar18;
        func_0x000107c2acd4(&ppuStack_d0);
        ppuStack_e0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_e0);
        unaff_x22 = (undefined **)(param_3[1] + -0x20);
        uVar17 = uRam000000011382aa08;
        func_0x0001096966c0();
        iVar10 = (int)uVar17;
        puVar1 = (undefined8 *)ppuStack_108[1];
        if ((((long)ppuStack_108[2] - (long)puVar1 & 0xffffffff0U) != 0) &&
           (lVar5 = *(long *)(param_1 + 8), *(long *)(lVar5 + 0x18) != puVar1[1])) {
          func_0x000107c2acd4(lVar5 + 0x10);
          uVar17 = *puVar1;
          *(undefined8 *)(lVar5 + 0x18) = puVar1[1];
          *(undefined8 *)(lVar5 + 0x10) = uVar17;
          if (*(long *)(lVar5 + 0x18) != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0x18) + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        ppuStack_110 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_110);
        if (unaff_x22 == (undefined **)0x0) goto LAB_1096cec10;
      }
    }
  }
  else if (((ulong)plVar8 & 0xffffffff) == 1) {
    lVar5 = *(long *)(param_1 + 8) + 8;
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,lVar5,4,1);
    iVar10 = (int)lVar5;
    if ((int)plVar8 == 1) {
      param_1 = *(long *)(param_1 + 8);
      plVar8 = param_2;
      plVar9 = param_3;
      FUN_1096cf738(param_2,param_3,param_1 + 0x10);
      iVar10 = (int)plVar9;
      if ((int)plVar8 == 0) goto LAB_1096ceb4c;
      (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
      FUN_1093e0930(&ppuStack_d0,&ppuStack_e0);
      ppuVar18 = *(undefined ***)(param_1 + 0x28);
      *(undefined ***)(param_1 + 0x28) = ppuStack_c8;
      *(undefined ***)(param_1 + 0x20) = ppuStack_d0;
      unaff_x22 = &PTR_FUN_110b01d60;
      ppuStack_d0 = &PTR_FUN_110b01d60;
      ppuStack_c8 = ppuVar18;
      func_0x000107c2acd4(&ppuStack_d0);
      ppuStack_e0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e0);
      lVar5 = param_3[1] + -0x20;
      uVar17 = uRam000000011382aa08;
      func_0x0001096966c0();
      iVar10 = (int)uVar17;
      if (lVar5 != 0) goto LAB_1096ceb48;
      (**(code **)(*param_3 + 0x28))(&ppuStack_e0,param_3,param_2);
      FUN_1096cf858(&ppuStack_d0,&ppuStack_e0);
      ppuVar18 = *(undefined ***)(param_1 + 0x38);
      *(undefined ***)(param_1 + 0x38) = ppuStack_c8;
      *(undefined ***)(param_1 + 0x30) = ppuStack_d0;
      ppuStack_d0 = &PTR_FUN_110b01d60;
      ppuStack_c8 = ppuVar18;
      func_0x000107c2acd4(&ppuStack_d0);
      ppuStack_e0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e0);
LAB_1096cecf0:
      unaff_x22 = &PTR_FUN_110b01d60;
      lVar5 = param_3[1] + -0x20;
      uVar17 = uRam000000011382aa08;
      func_0x0001096966c0();
      iVar10 = (int)uVar17;
      plVar8 = (long *)(ulong)(lVar5 == 0);
      goto LAB_1096ceb4c;
    }
  }
LAB_1096ceb48:
  plVar8 = (long *)0x0;
LAB_1096ceb4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (iVar10 != 0) {
      func_0x000104bd46a0();
    }
    plVar9 = plVar8;
    __Unwind_Resume();
    pcStack_118 = FUN_1096ced90;
    ppuStack_140 = unaff_x22;
    lStack_138 = param_1;
    plStack_130 = param_2;
    plStack_128 = plVar8;
    puStack_120 = &stack0xfffffffffffffff0;
    FUN_1096ce07c(&ppuStack_150);
    lVar5 = lStack_148;
    lVar16 = *(long *)(plVar9[1] + 0x10);
    *(undefined4 *)(lStack_148 + 8) = *(undefined4 *)(lVar16 + 8);
    if (*(long *)(lStack_148 + 0x18) != *(long *)(lVar16 + 0x18)) {
      func_0x000107c2acd4(lStack_148 + 0x10);
      uVar17 = *(undefined8 *)(lVar16 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar16 + 0x18);
      *(undefined8 *)(lVar5 + 0x10) = uVar17;
      if (*(long *)(lVar5 + 0x18) != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0x18) + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (*(long *)(lVar5 + 0x28) != *(long *)(lVar16 + 0x28)) {
      func_0x000107c2acd4(lVar5 + 0x20);
      uVar17 = *(undefined8 *)(lVar16 + 0x20);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
      *(undefined8 *)(lVar5 + 0x20) = uVar17;
      if (*(long *)(lVar5 + 0x28) != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0x28) + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (*(long *)(lVar5 + 0x38) != *(long *)(lVar16 + 0x38)) {
      func_0x000107c2acd4(lVar5 + 0x30);
      uVar17 = *(undefined8 *)(lVar16 + 0x30);
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
      *(undefined8 *)(lVar5 + 0x30) = uVar17;
      if (*(long *)(lVar5 + 0x38) != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0x38) + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    extraout_x8[1] = lStack_148;
    *extraout_x8 = ppuStack_150;
    if (extraout_x8[1] != 0) {
      piVar14 = (int *)(extraout_x8[1] + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_150 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_150);
    return;
  }
  return;
}



/* Entry: 1096ced90; end: 1096ceedf;  */

void FUN_1096ced90(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_40;
  long lStack_38;
  
  FUN_1096ce07c(&ppuStack_40);
  lVar3 = lStack_38;
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  *(undefined4 *)(lStack_38 + 8) = *(undefined4 *)(lVar5 + 8);
  if (*(long *)(lStack_38 + 0x18) != *(long *)(lVar5 + 0x18)) {
    func_0x000107c2acd4(lStack_38 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar6;
    if (*(long *)(lVar3 + 0x18) != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0x18) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (*(long *)(lVar3 + 0x28) != *(long *)(lVar5 + 0x28)) {
    func_0x000107c2acd4(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    if (*(long *)(lVar3 + 0x28) != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0x28) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (*(long *)(lVar3 + 0x38) != *(long *)(lVar5 + 0x38)) {
    func_0x000107c2acd4(lVar3 + 0x30);
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar5 + 0x38);
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    if (*(long *)(lVar3 + 0x38) != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0x38) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  param_1[1] = lStack_38;
  *param_1 = ppuStack_40;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096ceee0; end: 1096cef13;  */

undefined8 * FUN_1096ceee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cef14; end: 1096cef47;  */

void FUN_1096cef14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cef48; end: 1096cef7b;  */

undefined8 * FUN_1096cef48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096cef7c; end: 1096cefaf;  */

void FUN_1096cef7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096cefb0; end: 1096cefcb;  */

void FUN_1096cefb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}


