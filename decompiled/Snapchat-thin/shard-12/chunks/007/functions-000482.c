/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10969b590; end: 10969b5cf;  */

long FUN_10969b590(long param_1)

{
  FUN_10969b43c();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969b5d0; end: 10969b667;  */

undefined8 * FUN_10969b5d0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b02048;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x28);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b020c0;
  return param_1;
}



/* Entry: 10969b668; end: 10969b767;  */

undefined8 * FUN_10969b668(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
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
  *param_1 = &PTR_FUN_110b02048;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x28);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b020c0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_1092d76e8(&uStack_50,param_2,param_2 + param_3,(long)param_3);
  lVar3 = param_1[1];
  lVar2 = *(long *)(lVar3 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar3 + 0x10) = lVar2;
    __ZdlPv();
    *(long *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  *(undefined8 *)(lVar3 + 0x10) = uStack_48;
  *(undefined8 *)(lVar3 + 8) = uStack_50;
  *(undefined8 *)(lVar3 + 0x18) = uStack_40;
  return param_1;
}



/* Entry: 10969b768; end: 10969b7db;  */

ulong FUN_10969b768(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar2 + 0x20);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = (ulong)(*(long *)(lVar2 + 0x10) - (lVar3 + *(long *)(lVar2 + 8))) / param_3;
  }
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  lVar4 = uVar1 * param_3;
  if (lVar4 != 0) {
    _memcpy(param_2,*(long *)(lVar2 + 8) + lVar3,lVar4);
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(lVar2 + 0x20);
  }
  *(long *)(lVar2 + 0x20) = lVar3 + lVar4;
  return uVar1;
}



/* Entry: 10969b7dc; end: 10969ba77;  */

/* WARNING: Removing unreachable block (ram,0x00010969b9e8) */
/* WARNING: Removing unreachable block (ram,0x00010969b9fc) */
/* WARNING: Removing unreachable block (ram,0x00010969ba0c) */
/* WARNING: Removing unreachable block (ram,0x00010969ba18) */
/* WARNING: Removing unreachable block (ram,0x00010969ba30) */

undefined8 * FUN_10969b7dc(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  
  uVar13 = (long)param_4 * param_3;
  lVar12 = param_1[1];
  lVar7 = *(long *)(lVar12 + 0x20);
  lVar6 = *(long *)(lVar12 + 8);
  puVar15 = *(undefined1 **)(lVar12 + 0x10);
  uVar4 = (long)puVar15 - (lVar7 + lVar6);
  uVar5 = uVar13;
  if (uVar4 <= uVar13) {
    uVar5 = uVar4;
  }
  puVar3 = param_1;
  if (uVar5 != 0) {
    puVar3 = (undefined8 *)(lVar6 + lVar7);
    _memcpy(puVar3,param_2,uVar5);
    lVar12 = param_1[1];
    lVar6 = *(long *)(lVar12 + 8);
    puVar15 = *(undefined1 **)(lVar12 + 0x10);
  }
  lVar14 = uVar13 - uVar5;
  if (0 < lVar14) {
    lVar1 = param_2 + uVar5;
    lVar16 = (long)puVar15 - lVar6;
    lVar2 = lVar6 + lVar16;
    if (*(long *)(lVar12 + 0x18) - (long)puVar15 < lVar14) {
      puVar15 = puVar15 + (lVar14 - lVar6);
      if ((long)puVar15 < 0) {
        FUN_109274940();
        *puVar3 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar3);
        return puVar3;
      }
      uVar5 = *(long *)(lVar12 + 0x18) - lVar6;
      puVar9 = (undefined1 *)(uVar5 * 2);
      if (puVar9 < puVar15 || (long)puVar9 - (long)puVar15 == 0) {
        puVar9 = puVar15;
      }
      if (0x3ffffffffffffffe < uVar5) {
        puVar9 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar9 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)0x0;
      }
      else {
        puVar15 = puVar9;
        __Znwm();
      }
      puVar10 = puVar15 + lVar16;
      _memcpy(puVar10,lVar1,lVar14);
      _memcpy(puVar10 + lVar14,lVar2,0);
      *(long *)(lVar12 + 0x10) = lVar2;
      _memcpy(puVar15,lVar6,lVar16);
      *(undefined1 **)(lVar12 + 8) = puVar15;
      *(undefined1 **)(lVar12 + 0x10) = puVar10 + lVar14;
      *(undefined1 **)(lVar12 + 0x18) = puVar15 + (long)puVar9;
      if (lVar6 != 0) {
        __ZdlPv(lVar6);
      }
    }
    else if (lVar14 < 1) {
      puVar9 = puVar15 + -lVar14;
      puVar10 = puVar15;
      puVar11 = puVar15;
      if (puVar9 < puVar15) {
        do {
          puVar8 = puVar9 + 1;
          puVar10 = puVar11 + 1;
          *puVar11 = *puVar9;
          puVar9 = puVar8;
          puVar11 = puVar10;
        } while (puVar8 != puVar15);
      }
      *(undefined1 **)(lVar12 + 0x10) = puVar10;
      if (puVar15 != (undefined1 *)(lVar2 + lVar14)) {
        _memmove((undefined1 *)(lVar2 + lVar14),lVar2);
      }
      _memmove(lVar2,lVar1,lVar14);
    }
    else {
      if (lVar1 != param_2 + uVar13) {
        puVar10 = puVar15 + (uVar13 - uVar5);
        lVar6 = uVar5 - (long)puVar15;
        puVar9 = puVar15;
        do {
          *puVar9 = puVar15[param_2 + lVar6];
          puVar15 = puVar15 + 1;
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar15);
      }
      *(undefined1 **)(lVar12 + 0x10) = puVar15;
    }
  }
  *(ulong *)(param_1[1] + 0x20) = lVar7 + uVar13;
  return param_4;
}



/* Entry: 10969ba78; end: 10969baab;  */

void FUN_10969ba78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969baac; end: 10969bac3;  */

undefined8 FUN_10969baac(void)

{
  return 1;
}



/* Entry: 10969bac4; end: 10969bb23;  */

long FUN_10969bac4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10969bb24; end: 10969bbcf;  */

/* WARNING: Possible PIC construction at 0x000109697944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109697948) */

undefined8 * FUN_10969bb24(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  
  lVar8 = param_2[1];
  pcVar4 = (char *)(lVar8 + 8);
  uVar5 = (ulong)*(char *)(lVar8 + 0x1f);
  if ((long)uVar5 < 0) {
    uVar5 = (ulong)*(uint *)(lVar8 + 0x10);
    if (uVar5 != 0) {
      pcVar4 = *(char **)pcVar4;
      goto LAB_10969bb48;
    }
  }
  else if (*(char *)(lVar8 + 0x1f) != '\0') {
LAB_10969bb48:
    pcVar6 = pcVar4 + (long)(int)uVar5 + -1;
    if ((*pcVar6 == '\\') || (*pcVar6 == '/')) {
      pcVar6 = pcVar4 + (long)(int)uVar5 + -2;
    }
    lVar8 = (long)pcVar6 - (long)pcVar4;
    do {
      if (pcVar6 == pcVar4) goto code_r0x000107c2ace8;
      pcVar6 = pcVar6 + -1;
      lVar8 = lVar8 + -1;
    } while ((*pcVar6 != '\\') && (*pcVar6 != '/'));
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x109697948;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = lVar8;
code_r0x000107c2ace8:
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *param_1 = &PTR_FUN_110b01d60;
    puVar3 = (undefined8 *)0x28;
    func_0x000107c610a0();
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 3) = 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 4;
      *puVar3 = &PTR_DAT_110b00de0;
    }
    *param_1 = &PTR_FUN_110b00af0;
    param_1[1] = puVar3;
    puVar3 = param_1;
    func_0x000100033474(param_1,0x20);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_110b01c08;
    puVar3[1] = 0;
    return param_1;
  }
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  if (param_1[1] != 0) {
    piVar7 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return param_2;
}



/* Entry: 10969bbd0; end: 10969bc5f;  */

void FUN_10969bbd0(long *param_1,long *param_2,undefined1 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uStack_31;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  func_0x000104c4f768(param_1,uVar1 + 1,&uStack_31);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  if (uVar1 != 0) {
    plVar3 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar3 = param_2;
    }
    _memmove(plVar2,plVar3,uVar1);
  }
  *(undefined1 *)((long)plVar2 + uVar1) = param_3;
  ((undefined1 *)((long)plVar2 + uVar1))[1] = 0;
  return;
}



/* Entry: 10969bc60; end: 10969bd0f;  */

undefined8 * FUN_10969bc60(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b02128;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x70);
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR_FUN_110b02298;
  return param_1;
}



/* Entry: 10969bd10; end: 10969c9cb;  */

void FUN_10969bd10(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  undefined **ppuVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined4 uVar26;
  float fVar27;
  undefined *puVar28;
  long *plVar29;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3[1] == 0) {
    lVar11 = param_1[1];
    bVar10 = 0x6e;
    if (*(char *)(lVar11 + 0x10) == '\x01') {
      uVar14 = *(uint *)(lVar11 + 0x14) ^ *(uint *)(lVar11 + 0x14) << 5;
      uVar14 = uVar14 ^ uVar14 >> 0x11;
      *(uint *)(lVar11 + 0x14) = uVar14 ^ uVar14 << 0xd;
      bVar10 = (byte)uVar14 ^ 0x6e;
    }
    ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,bVar10);
    (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
  }
  else {
    iVar7 = *(int *)(param_1[1] + 8);
    *(int *)(param_1[1] + 8) = iVar7 + 1;
    if (iVar7 == 0) {
      plVar8 = param_1;
      FUN_10969e0b4(param_1,0x113735bb0);
      lVar11 = *plVar8;
      *(char *)(param_1[1] + 0x10) = (char)lVar11;
      if ((char)lVar11 == '\x01') {
        uVar14 = uRam0000000113735bbc;
        uVar1 = uRam0000000113735bc0;
        if ((bRam0000000113735ba8 & 1) == 0) {
          iVar7 = 0x13735ba8;
          ___cxa_guard_acquire();
          uVar14 = uRam0000000113735bbc;
          uVar1 = uRam0000000113735bc0;
          if (iVar7 != 0) {
            FUN_1096ea29c(0x113735bb8);
            ___cxa_guard_release(0x113735ba8);
            uVar14 = uRam0000000113735bbc;
            uVar1 = uRam0000000113735bc0;
          }
        }
        do {
          uRam0000000113735bc0 = uRam0000000113735bc4;
          uRam0000000113735bbc = uVar1;
          uRam0000000113735bb8 = uRam0000000113735bb8 ^ uRam0000000113735bb8 << 0xb;
          uVar4 = (uRam0000000113735bb8 ^ uRam0000000113735bb8 >> 8) - uRam0000000113735bc0;
          uRam0000000113735bc4 = uVar4 ^ uRam0000000113735bc0 >> 0x13;
          uRam0000000113735bb8 = uVar14;
          uVar14 = uRam0000000113735bbc;
          uVar1 = uRam0000000113735bc0;
        } while (uVar4 == uRam0000000113735bc0 >> 0x13);
        ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,uRam0000000113735bc4);
        *(uint *)(param_1[1] + 0x14) = uRam0000000113735bc4;
        plStack_90 = (long *)CONCAT71(plStack_90._1_7_,0x53);
        (**(code **)(*param_2 + 0x48))(param_2,&plStack_90,1,1);
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,4,1);
      }
    }
    uStack_88 = 1;
    plStack_90 = param_1;
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_a0);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_80);
    plVar8 = plStack_78;
    ppuStack_80 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_80);
    if (plStack_98 == plVar8) {
      ppuStack_80 = &PTR_FUN_110b02180;
      plVar29 = param_3;
      func_0x000109696c8c(param_3,&ppuStack_80);
      if ((int)plVar29 == 0) goto LAB_10969bf5c;
      lVar11 = param_1[1];
      if (*(char *)(lVar11 + 0x10) == '\x01') {
        uVar14 = *(uint *)(lVar11 + 0x14) ^ *(uint *)(lVar11 + 0x14) << 5;
        uVar14 = uVar14 ^ uVar14 >> 0x11;
        *(uint *)(lVar11 + 0x14) = uVar14 ^ uVar14 << 0xd;
        ppuStack_80 = (undefined **)(CONCAT71(ppuStack_80._1_7_,(char)uVar14) ^ 0x73);
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
        ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (param_3 == (long *)0x0) {
          func_0x000107c2acdc();
        }
        plStack_78 = (long *)param_3[1];
        if (plStack_78 != (long *)0x0) {
          plVar8 = plStack_78 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_80 = &PTR_FUN_110b00af0;
        FUN_10969c9cc(param_2,&ppuStack_80,param_1[1] + 0x14);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
      }
      else {
        ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,0x73);
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
        ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (param_3 == (long *)0x0) {
          func_0x000107c2acdc();
        }
        plStack_78 = (long *)param_3[1];
        if (plStack_78 != (long *)0x0) {
          plVar8 = plStack_78 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = (int)*plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_80 = &PTR_FUN_110b00af0;
        FUN_109697ca4(param_2,&ppuStack_80);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
      }
    }
    else {
LAB_10969bf5c:
      lVar11 = param_1[1];
      plVar29 = (long *)(lVar11 + 0x18);
      uVar12 = param_3[1];
      plVar23 = (long *)(uVar12 >> 3);
      plVar25 = *(long **)(lVar11 + 0x20);
      if (plVar25 == (long *)0x0) {
        uVar26 = (undefined4)*(undefined8 *)(lVar11 + 0x30);
        plVar16 = plStack_98;
      }
      else {
        uVar15 = (long)plVar25 - 1;
        if (((ulong)plVar25 & uVar15) == 0) {
          plVar16 = (long *)(uVar15 & (ulong)plVar23);
        }
        else {
          plVar16 = plVar23;
          if (plVar25 <= plVar23) {
            uVar5 = 0;
            if (plVar25 != (long *)0x0) {
              uVar5 = (ulong)plVar23 / (ulong)plVar25;
            }
            plVar16 = (long *)((long)plVar23 - uVar5 * (long)plVar25);
          }
        }
        plVar19 = *(long **)(*plVar29 + (long)plVar16 * 8);
        if (plVar19 != (long *)0x0) {
          for (plVar19 = (long *)*plVar19; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            plVar20 = (long *)plVar19[1];
            if (plVar20 == plVar23) {
              if (plVar19[3] == uVar12) {
                if (*(char *)(lVar11 + 0x10) == '\x01') {
                  uVar14 = *(uint *)(lVar11 + 0x14) ^ *(uint *)(lVar11 + 0x14) << 5;
                  uVar14 = uVar14 ^ uVar14 >> 0x11;
                  *(uint *)(lVar11 + 0x14) = uVar14 ^ uVar14 << 0xd;
                  ppuStack_80 = (undefined **)(CONCAT71(ppuStack_80._1_7_,(char)uVar14) ^ 0x72);
                  (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
                  uVar1 = *(uint *)(plVar19 + 4);
                  uVar14 = *(uint *)(param_1[1] + 0x14);
                  uVar14 = uVar14 ^ uVar14 << 5;
                  uVar14 = uVar14 ^ uVar14 >> 0x11;
                  uVar14 = uVar14 ^ uVar14 << 0xd;
                  *(uint *)(param_1[1] + 0x14) = uVar14;
                  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,uVar14 ^ uVar1);
                  (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,4,1);
                }
                else {
                  ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,0x72);
                  (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
                  (**(code **)(*param_2 + 0x48))(param_2,plVar19 + 4,4,1);
                }
                goto LAB_10969c7c4;
              }
            }
            else {
              if (((ulong)plVar25 & uVar15) == 0) {
                plVar20 = (long *)((ulong)plVar20 & uVar15);
              }
              else if (plVar25 <= plVar20) {
                uVar5 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar5 = (ulong)plVar20 / (ulong)plVar25;
                }
                plVar20 = (long *)((long)plVar20 - uVar5 * (long)plVar25);
              }
              if (plVar20 != plVar16) break;
            }
          }
        }
        uVar26 = (undefined4)*(undefined8 *)(lVar11 + 0x30);
        if (((ulong)plVar25 & uVar15) == 0) {
          plVar16 = (long *)(uVar15 & (ulong)plVar23);
        }
        else {
          plVar16 = plVar23;
          if (plVar25 <= plVar23) {
            uVar5 = 0;
            if (plVar25 != (long *)0x0) {
              uVar5 = (ulong)plVar23 / (ulong)plVar25;
            }
            plVar16 = (long *)((long)plVar23 - uVar5 * (long)plVar25);
          }
        }
        plVar19 = *(long **)(*plVar29 + (long)plVar16 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_10969c0d4;
              plVar20 = (long *)plVar19[1];
              if (plVar20 != plVar23) break;
              if (plVar19[3] == uVar12) goto LAB_10969c4b4;
            }
            if (((ulong)plVar25 & uVar15) == 0) {
              plVar20 = (long *)((ulong)plVar20 & uVar15);
            }
            else if (plVar25 <= plVar20) {
              uVar5 = 0;
              if (plVar25 != (long *)0x0) {
                uVar5 = (ulong)plVar20 / (ulong)plVar25;
              }
              plVar20 = (long *)((long)plVar20 - uVar5 * (long)plVar25);
            }
          } while (plVar20 == plVar16);
        }
      }
LAB_10969c0d4:
      ppuVar9 = (undefined **)0x28;
      __Znwm();
      plStack_70 = (long *)0x1;
      *ppuVar9 = (undefined *)0x0;
      ppuVar9[1] = (undefined *)plVar23;
      puVar28 = (undefined *)*param_3;
      ppuVar9[3] = (undefined *)param_3[1];
      ppuVar9[2] = puVar28;
      if (ppuVar9[3] != (undefined *)0x0) {
        piVar13 = (int *)(ppuVar9[3] + -8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(ppuVar9 + 4) = uVar26;
      fVar27 = (float)(*(long *)(lVar11 + 0x30) + 1);
      ppuStack_80 = ppuVar9;
      plStack_78 = plVar29;
      if ((plVar25 == (long *)0x0) || (*(float *)(lVar11 + 0x38) * (float)plVar25 < fVar27)) {
        uVar12 = 1;
        if ((long *)0x2 < plVar25) {
          uVar12 = (ulong)(((ulong)plVar25 & (long)plVar25 - 1U) != 0);
        }
        plVar16 = (long *)(uVar12 | (long)plVar25 << 1);
        plVar25 = (long *)(long)(fVar27 / *(float *)(lVar11 + 0x38));
        if (plVar16 <= plVar25) {
          plVar16 = plVar25;
        }
        if ((long)plVar16 - 1U == 0) {
          plVar16 = (long *)0x2;
        }
        else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar25 = *(long **)(lVar11 + 0x20);
        if (plVar25 < plVar16) {
LAB_10969c1a4:
          if ((ulong)plVar16 >> 0x3d != 0) goto LAB_10969c8bc;
          lVar24 = (long)plVar16 << 3;
          __Znwm();
          lVar22 = *plVar29;
          *plVar29 = lVar24;
          if (lVar22 != 0) {
            __ZdlPv();
          }
          plVar25 = (long *)0x0;
          *(long **)(lVar11 + 0x20) = plVar16;
          do {
            *(undefined8 *)(*plVar29 + (long)plVar25 * 8) = 0;
            plVar25 = (long *)((long)plVar25 + 1);
          } while (plVar16 != plVar25);
          plVar19 = *(long **)(lVar11 + 0x28);
          plVar25 = plVar16;
          if (plVar19 != (long *)0x0) {
            plVar20 = (long *)plVar19[1];
            uVar12 = (long)plVar16 - 1;
            if (((ulong)plVar16 & uVar12) == 0) {
              plVar20 = (long *)((ulong)plVar20 & uVar12);
            }
            else if (plVar16 <= plVar20) {
              uVar15 = 0;
              if (plVar16 != (long *)0x0) {
                uVar15 = (ulong)plVar20 / (ulong)plVar16;
              }
              plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar16);
            }
            *(undefined8 **)(*plVar29 + (long)plVar20 * 8) = (undefined8 *)(lVar11 + 0x28);
            plVar17 = (long *)*plVar19;
            while (plVar17 != (long *)0x0) {
              plVar21 = (long *)plVar17[1];
              if (((ulong)plVar16 & uVar12) == 0) {
                plVar21 = (long *)((ulong)plVar21 & uVar12);
              }
              else if (plVar16 <= plVar21) {
                uVar15 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar15 = (ulong)plVar21 / (ulong)plVar16;
                }
                plVar21 = (long *)((long)plVar21 - uVar15 * (long)plVar16);
              }
              plVar18 = plVar17;
              if (plVar21 != plVar20) {
                lVar24 = *plVar29;
                if (*(long *)(lVar24 + (long)plVar21 * 8) == 0) {
                  *(long **)(lVar24 + (long)plVar21 * 8) = plVar19;
                  plVar20 = plVar21;
                }
                else {
                  *plVar19 = *plVar17;
                  *plVar17 = **(undefined8 **)(lVar24 + (long)plVar21 * 8);
                  **(long **)(lVar24 + (long)plVar21 * 8) = (long)plVar17;
                  plVar18 = plVar19;
                }
              }
              plVar19 = plVar18;
              plVar17 = (long *)*plVar18;
            }
          }
        }
        else if (plVar16 < plVar25) {
          plVar19 = (long *)(long)((float)*(ulong *)(lVar11 + 0x30) / *(float *)(lVar11 + 0x38));
          if ((plVar25 < (long *)0x3) || (((ulong)plVar25 & (long)plVar25 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar19) {
            plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
          }
          if (plVar16 <= plVar19) {
            plVar16 = plVar19;
          }
          if (plVar16 < plVar25) {
            if (plVar16 != (long *)0x0) goto LAB_10969c1a4;
            lVar24 = *plVar29;
            *plVar29 = 0;
            if (lVar24 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(lVar11 + 0x20) = 0;
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = *(long **)(lVar11 + 0x20);
          }
        }
        if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
          plVar16 = (long *)((long)plVar25 - 1U & (ulong)plVar23);
        }
        else {
          plVar16 = plVar23;
          if (plVar25 <= plVar23) {
            uVar12 = 0;
            if (plVar25 != (long *)0x0) {
              uVar12 = (ulong)plVar23 / (ulong)plVar25;
            }
            plVar16 = (long *)((long)plVar23 - uVar12 * (long)plVar25);
          }
        }
      }
      lVar24 = *plVar29;
      plVar23 = *(long **)(lVar24 + (long)plVar16 * 8);
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)(lVar11 + 0x28);
        *ppuVar9 = (undefined *)*plVar23;
        *plVar23 = (long)ppuVar9;
        *(long **)(lVar24 + (long)plVar16 * 8) = plVar23;
        if (*ppuVar9 != (undefined *)0x0) {
          plVar23 = *(long **)(*ppuVar9 + 8);
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            plVar23 = (long *)((ulong)plVar23 & (long)plVar25 - 1U);
          }
          else if (plVar25 <= plVar23) {
            uVar12 = 0;
            if (plVar25 != (long *)0x0) {
              uVar12 = (ulong)plVar23 / (ulong)plVar25;
            }
            plVar23 = (long *)((long)plVar23 - uVar12 * (long)plVar25);
          }
          *(undefined ***)(*plVar29 + (long)plVar23 * 8) = ppuVar9;
        }
      }
      else {
        *ppuVar9 = (undefined *)*plVar23;
        *plVar23 = (long)ppuVar9;
      }
      *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + 1;
      lVar11 = param_1[1];
LAB_10969c4b4:
      if (*(char *)(lVar11 + 0x10) == '\x01') {
        uVar14 = *(uint *)(lVar11 + 0x14) ^ *(uint *)(lVar11 + 0x14) << 5;
        uVar14 = uVar14 ^ uVar14 >> 0x11;
        *(uint *)(lVar11 + 0x14) = uVar14 ^ uVar14 << 0xd;
        ppuStack_80 = (undefined **)(CONCAT71(ppuStack_80._1_7_,(char)uVar14) ^ 0x6f);
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
        FUN_1096975b0(&ppuStack_80,&ppuStack_a0);
        FUN_10969c9cc(param_2,&ppuStack_80,param_1[1] + 0x14);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
      }
      else {
        ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,0x6f);
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
        FUN_1096975b0(&ppuStack_80,&ppuStack_a0);
        FUN_109697ca4(param_2,&ppuStack_80);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
      }
      ppuStack_80 = &PTR_FUN_110b02300;
      plStack_78 = param_1;
      plStack_70 = param_2;
      func_0x000109696c8c(param_3,&ppuStack_80);
      lVar11 = param_1[1];
      bVar10 = 0x65;
      if (*(char *)(lVar11 + 0x10) == '\x01') {
        uVar14 = *(uint *)(lVar11 + 0x14) ^ *(uint *)(lVar11 + 0x14) << 5;
        uVar14 = uVar14 ^ uVar14 >> 0x11;
        *(uint *)(lVar11 + 0x14) = uVar14 ^ uVar14 << 0xd;
        bVar10 = (byte)uVar14 ^ 0x65;
      }
      ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,bVar10);
      (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_80,1,1);
      plVar29 = param_3;
      ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
      if (plVar29 == (long *)0x0) {
        func_0x000107c2acdc();
      }
      plVar29 = (long *)plVar29[1];
      plStack_78 = plVar29;
      if (plVar29 == (long *)0x0) {
        ppuStack_80 = &PTR_FUN_110b01468;
      }
      else {
        plVar25 = plVar29 + -1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar3) {
            *(int *)plVar25 = (int)*plVar25 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        ppuStack_80 = &PTR_FUN_110b01468;
        ppuStack_b0 = (undefined **)
                      CONCAT44(ppuStack_b0._4_4_,(int)((ulong)(plVar29[2] - plVar29[1]) >> 4));
        (**(code **)(*param_2 + 0x48))(param_2,&ppuStack_b0,4,1);
        lVar11 = plVar29[1];
        if (0xffffffff < (plVar29[2] - lVar11) * 0x10000000) {
          lVar22 = 0;
          lVar24 = 0;
          do {
            (**(code **)(*param_1 + 0x20))(param_1,param_2,lVar11 + lVar22);
            lVar24 = lVar24 + 1;
            lVar11 = plVar29[1];
            lVar22 = lVar22 + 0x10;
          } while (lVar24 < (int)((ulong)(plVar29[2] - lVar11) >> 4));
        }
      }
      if (plStack_98 == plVar8) {
        if (*(char *)(param_1[1] + 0x10) == '\x01') {
          plVar8 = param_3;
          ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
          if (plVar8 == (long *)0x0) {
            func_0x000107c2acdc();
          }
          lStack_a8 = plVar8[1];
          if (lStack_a8 != 0) {
            piVar13 = (int *)(lStack_a8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_b0 = &PTR_FUN_110b00af0;
          FUN_10969c9cc(param_2,&ppuStack_b0,param_1[1] + 0x14);
          ppuStack_b0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_b0);
        }
        else {
          plVar8 = param_3;
          ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
          if (plVar8 == (long *)0x0) {
            func_0x000107c2acdc();
          }
          lStack_a8 = plVar8[1];
          if (lStack_a8 != 0) {
            piVar13 = (int *)(lStack_a8 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_b0 = &PTR_FUN_110b00af0;
          FUN_109697ca4(param_2,&ppuStack_b0);
          ppuStack_b0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_b0);
        }
      }
      (**(code **)(*param_3 + 0x10))(param_3,param_2,param_1);
      ppuStack_80 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_80);
    }
LAB_10969c7c4:
    ppuStack_a0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_a0);
    lVar11 = param_1[1];
    iVar7 = *(int *)(lVar11 + 8) + -1;
    *(int *)(lVar11 + 8) = iVar7;
    if (iVar7 == 0) {
      FUN_10969e730(lVar11 + 0x18);
      *(undefined1 *)(param_1[1] + 0x10) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10969c8bc:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10969c8c4);
  (*pcVar6)();
}



/* Entry: 10969c9cc; end: 10969ccaf;  */

void FUN_10969c9cc(long *param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte abStack_90 [4];
  uint uStack_8c;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  byte abStack_62 [2];
  
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  abStack_90[0] = 0;
  uStack_8c = 0;
  plStack_88 = &lStack_80;
  lVar8 = (long)*(char *)(*(long *)(param_2 + 8) + 0x1f);
  if (lVar8 < 0) {
    lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  }
  uVar2 = (uint)lVar8 & 1;
  uVar6 = -uVar2;
  if (-1 < (int)(uint)lVar8) {
    uVar6 = uVar2;
  }
  FUN_10969e150(abStack_90,uVar6 & 0xff,1);
  lVar8 = *(long *)(param_2 + 8);
  uVar9 = (ulong)*(char *)(lVar8 + 0x1f);
  if ((long)uVar9 < 0) {
    pbVar12 = *(byte **)(lVar8 + 8);
    uVar9 = *(ulong *)(lVar8 + 0x10);
  }
  else {
    pbVar12 = (byte *)(lVar8 + 8);
  }
  if ((uVar9 & 0xffffffff) != 0) {
    pbVar1 = pbVar12 + (int)uVar9;
    do {
      plVar5 = plStack_88;
      bVar4 = *pbVar12;
      uVar6 = (uint)bVar4;
      uVar2 = bVar4 + 0x45;
      if (0x2f < bVar4) {
        uVar2 = uVar6 + 4;
      }
      uVar7 = uVar6 + 4;
      if (0x40 < uVar6) {
        uVar7 = uVar6 - 0x27;
      }
      if (0x39 < uVar6) {
        uVar2 = uVar7;
      }
      uVar7 = (uint)bVar4;
      uVar6 = uVar7 + 0x1a;
      if (0x60 < uVar7) {
        uVar6 = uVar7 - 0x61;
      }
      uVar3 = uVar7;
      if (uVar7 < 0x7b) {
        uVar3 = uVar6;
      }
      if (0x5a < uVar7) {
        uVar2 = uVar3;
      }
      uVar6 = uStack_8c + (uVar2 >> 6);
      uVar7 = uVar6 & 7;
      if (-1 < (int)-uVar6) {
        uVar7 = -(-uVar6 & 7);
      }
      if (7 < (int)uVar6) {
        abStack_62[0] = abStack_90[0];
        uStack_8c = uVar7;
        FUN_1093ae29c(plStack_88,abStack_62);
        abStack_90[0] = 0;
        if (0xf < uVar6) {
          uVar6 = (uVar6 >> 3) + 1;
          do {
            abStack_62[0] = 0;
            FUN_1093ae29c(plVar5,abStack_62);
            uVar6 = uVar6 - 1;
          } while (2 < uVar6);
        }
        abStack_90[0] = 0;
      }
      abStack_90[0] = abStack_90[0] | (byte)(1 << (ulong)(uVar7 & 0x1f));
      uStack_8c = uVar7 + 1;
      if (uStack_8c == 8) {
        abStack_62[0] = abStack_90[0];
        FUN_1093ae29c(plStack_88,abStack_62);
        abStack_90[0] = 0;
        uStack_8c = 0;
      }
      FUN_10969e150(abStack_90,uVar2 & 0x3f,6);
      pbVar12 = pbVar12 + 1;
    } while (pbVar12 != pbVar1);
  }
  if (uStack_8c != 0) {
    abStack_62[0] = abStack_90[0];
    FUN_1093ae29c(plStack_88,abStack_62);
    abStack_90[0] = 0;
    uStack_8c = 0;
  }
  FUN_10969e1d0(param_3,lStack_80,lStack_78 - lStack_80);
  uVar11 = lStack_78 - lStack_80;
  uVar9 = uVar11;
  if (0x7f < uVar11) {
    do {
      abStack_62[0] = (byte)uVar9 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,abStack_62,1,1);
      uVar11 = uVar9 >> 7;
      uVar10 = uVar9 >> 0xe;
      uVar9 = uVar11;
    } while (uVar10 != 0);
  }
  abStack_62[0] = (byte)uVar11;
  (**(code **)(*param_1 + 0x48))(param_1,abStack_62,1,1);
  (**(code **)(*param_1 + 0x48))(param_1,lStack_80,1,(long)((int)lStack_78 - (int)lStack_80));
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  return;
}



/* Entry: 10969ccb0; end: 10969cdf3;  */

void FUN_10969ccb0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar3 = param_1;
  if ((param_2 == (undefined8 *)0x0) ||
     (___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0), puVar3 = param_2,
     param_2 == (undefined8 *)0x0)) {
    param_2 = puVar3;
    func_0x000107c2acdc();
  }
  uVar5 = *param_2;
  param_1[1] = param_2[1];
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
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 10969cdf4; end: 10969d8d3;  */

void FUN_10969cdf4(long *param_1,undefined **param_2,long *param_3)

{
  undefined8 ****ppppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *****pppppuVar6;
  long lVar7;
  code *pcVar8;
  undefined8 ****ppppuVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuStack_138;
  long lStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined8 ***pppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined ****ppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  byte abStack_81 [25];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096969b8(param_2,0x11382aa08);
  plVar10 = param_3;
  (**(code **)(*param_3 + 0x40))(param_3,abStack_81,1,1);
  if ((int)plVar10 == 1) {
    puVar13 = param_2[1];
    if (puVar13[0x10] == '\x01') {
      uVar12 = *(uint *)(puVar13 + 0x14) ^ *(uint *)(puVar13 + 0x14) << 5;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      *(uint *)(puVar13 + 0x14) = uVar12 ^ uVar12 << 0xd;
      abStack_81[0] = abStack_81[0] ^ (byte)uVar12;
    }
    func_0x000107c2ace8(&ppuStack_a0);
    if (0x6e < abStack_81[0]) {
      if (abStack_81[0] != 0x6f) {
        if (abStack_81[0] == 0x72) {
          (**(code **)(*param_3 + 0x40))(param_3,&ppppuStack_c8,4,1);
          if ((int)param_3 == 1) {
            puVar13 = param_2[1];
            uVar12 = (uint)ppppuStack_c8;
            if (puVar13[0x10] == '\x01') {
              uVar12 = *(uint *)(puVar13 + 0x14) ^ *(uint *)(puVar13 + 0x14) << 5;
              uVar12 = uVar12 ^ uVar12 >> 0x11;
              uVar12 = uVar12 ^ uVar12 << 0xd;
              *(uint *)(puVar13 + 0x14) = uVar12;
              uVar12 = uVar12 ^ (uint)ppppuStack_c8;
              ppppuStack_c8 = (undefined ****)CONCAT44(ppppuStack_c8._4_4_,uVar12);
            }
            if (uVar12 < *(uint *)(puVar13 + 0x68)) {
              plVar10 = (long *)(*(long *)(*(long *)(puVar13 + 0x48) +
                                          (*(long *)(puVar13 + 0x60) + (ulong)uVar12 >> 8) * 8) +
                                (*(long *)(puVar13 + 0x60) + (ulong)uVar12 & 0xff) * 0x10);
              lVar16 = *plVar10;
              param_1[1] = plVar10[1];
              *param_1 = lVar16;
              if (param_1[1] != 0) {
                piVar14 = (int *)(param_1[1] + -8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                  if (bVar4) {
                    *piVar14 = *piVar14 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              goto LAB_10969d0b8;
            }
            FUN_10969eddc(param_2);
          }
          else {
            FUN_10969ed4c(param_2);
          }
          goto LAB_10969d0a8;
        }
        if (abStack_81[0] != 0x73) goto LAB_10969cf14;
      }
      if (param_2[1][0x10] != '\x01') {
        plVar10 = param_3;
        FUN_109697d7c(param_3,&ppuStack_a0);
        if (((ulong)plVar10 & 1) != 0) goto LAB_10969cfd0;
        FUN_10969ed4c(param_2);
        goto LAB_10969d0a8;
      }
      plVar10 = param_3;
      FUN_10969d8d4(param_3,&ppuStack_a0,param_2[1] + 0x14);
      if (((ulong)plVar10 & 1) == 0) {
        FUN_10969ed4c(param_2);
        goto LAB_10969d0a8;
      }
LAB_10969cfd0:
      if (abStack_81[0] == 0x73) {
        param_1[1] = lStack_98;
        *param_1 = (long)ppuStack_a0;
        if (param_1[1] != 0) {
          piVar14 = (int *)(param_1[1] + -8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = *piVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        goto LAB_10969d0b8;
      }
      uVar15 = (ulong)*(char *)(lStack_98 + 0x1f);
      if ((long)uVar15 < 0) {
        uVar15 = *(ulong *)(lStack_98 + 0x10);
        if (0x7ffffffffffffff7 < uVar15) goto LAB_10969d758;
        lVar16 = *(long *)(lStack_98 + 8);
      }
      else {
        lVar16 = lStack_98 + 8;
      }
      if (uVar15 < 0x17) {
        uStack_d0 = CONCAT17((char)uVar15,(undefined7)uStack_d0);
        ppppuVar9 = &pppuStack_e0;
        if (uVar15 != 0) goto LAB_10969d158;
      }
      else {
        ppppuVar1 = (undefined8 ****)0x19;
        if ((uVar15 | 7) != 0x17) {
          ppppuVar1 = (undefined8 ****)((uVar15 | 7) + 1);
        }
        ppppuVar9 = ppppuVar1;
        __Znwm();
        uStack_d0 = (ulong)ppppuVar1 | 0x8000000000000000;
        pppuStack_e0 = ppppuVar9;
        uStack_d8 = uVar15;
LAB_10969d158:
        _memmove(ppppuVar9,lVar16,uVar15);
      }
      *(undefined1 *)((long)ppppuVar9 + uVar15) = 0;
      func_0x000107c2ace4(&ppppuStack_c8,&pppuStack_e0);
      uVar15 = uStack_c0;
      pppppuVar6 = (undefined *****)ppppuStack_c8;
      if (-1 < (char)bStack_b1) {
        uVar15 = (ulong)bStack_b1;
        pppppuVar6 = &ppppuStack_c8;
      }
      FUN_109697928(&ppuStack_b0,pppppuVar6,uVar15);
      lVar16 = lStack_a8;
      lStack_a8 = lStack_98;
      lStack_98 = lVar16;
      ppuStack_a0 = ppuStack_b0;
      ppuStack_b0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_b0);
      if ((char)bStack_b1 < '\0') {
        __ZdlPv(ppppuStack_c8);
      }
      if ((long)uStack_d0 < 0) {
        __ZdlPv(pppuStack_e0);
      }
      if (abStack_81[0] != 0x6f) {
        *param_1 = (long)&PTR_FUN_110b01d60;
        goto LAB_10969d0b4;
      }
      plVar10 = (long *)(lStack_98 + 8);
      if (*(char *)(lStack_98 + 0x1f) < '\0') {
        plVar10 = (long *)*plVar10;
      }
      FUN_1096977e4(&ppppuStack_c8);
      FUN_1096978cc();
      if (uStack_c0 != *(ulong *)((long)plVar10 + 8)) {
        puVar13 = param_2[1];
        *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
        lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
        ppuStack_b0 = param_2;
        if (*(code **)(uStack_c0 + 0x58) == (code *)0x0) {
          ppuStack_f0 = &PTR_FUN_110b01d60;
          lStack_e8 = 0;
        }
        else {
          (**(code **)(uStack_c0 + 0x58))(&ppuStack_f0);
        }
        FUN_10969dc30(puVar13 + 0x40,&ppuStack_f0);
        FUN_10969664c(&ppuStack_f0);
        puVar13 = param_2[1];
        uVar15 = (*(long *)(puVar13 + 0x68) + *(long *)(puVar13 + 0x60)) - 1;
        plVar10 = (long *)(*(long *)(*(long *)(puVar13 + 0x48) + (uVar15 >> 8) * 8) +
                          (uVar15 & 0xff) * 0x10);
        while (plVar11 = param_3, (**(code **)(*param_3 + 0x40))(param_3,abStack_81,1,1),
              (int)plVar11 == 1) {
          puVar13 = param_2[1];
          if (puVar13[0x10] == '\x01') {
            uVar12 = *(uint *)(puVar13 + 0x14) ^ *(uint *)(puVar13 + 0x14) << 5;
            uVar12 = uVar12 ^ uVar12 >> 0x11;
            *(uint *)(puVar13 + 0x14) = uVar12 ^ uVar12 << 0xd;
            uVar12 = abStack_81[0] ^ uVar12;
            abStack_81[0] = (byte)uVar12;
          }
          else {
            uVar12 = (uint)abStack_81[0];
          }
          if ((uVar12 & 0xff) != 0x70) {
            if ((uVar12 & 0xff) != 0x65) {
              FUN_10969eddc(param_2);
              goto LAB_10969d61c;
            }
            func_0x00010969cd28(&ppuStack_f0,plVar10);
            if (lStack_e8 == 0) goto LAB_10969d5b8;
            plVar11 = param_3;
            (**(code **)(*param_3 + 0x40))(param_3,&ppuStack_110,4,1);
            if ((int)plVar11 != 1) {
              FUN_10969ed4c(param_2);
              goto LAB_10969d654;
            }
            iVar5 = (int)ppuStack_110;
            goto joined_r0x00010969d560;
          }
          func_0x000107c2ace8(&ppuStack_f0);
          func_0x000107c2ace8(&ppuStack_100);
          if (param_2[1][0x10] == '\x01') {
            plVar11 = param_3;
            FUN_10969d8d4(param_3,&ppuStack_f0,param_2[1] + 0x14);
            if ((((ulong)plVar11 & 1) == 0) ||
               (plVar11 = param_3, FUN_10969d8d4(param_3,&ppuStack_100,param_2[1] + 0x14),
               ((ulong)plVar11 & 1) == 0)) goto LAB_10969d5f8;
          }
          else {
            plVar11 = param_3;
            FUN_109697d7c(param_3,&ppuStack_f0);
            if (((int)plVar11 == 0) ||
               (plVar11 = param_3, FUN_109697d7c(param_3,&ppuStack_100), (int)plVar11 == 0)) {
LAB_10969d5f8:
              FUN_10969ed4c(param_2);
              goto LAB_10969d600;
            }
          }
          plVar11 = (long *)(lStack_e8 + 8);
          if (*(char *)(lStack_e8 + 0x1f) < '\0') {
            plVar11 = (long *)*plVar11;
          }
          FUN_1096977e4(&ppuStack_110);
          FUN_1096978cc();
          if (lStack_108 == *(long *)((long)plVar11 + 8)) {
            FUN_10969eddc(param_2);
            *param_1 = (long)&PTR_FUN_110b01d60;
            param_1[1] = 0;
LAB_10969d668:
            FUN_109696618(&ppuStack_110);
            goto LAB_10969d670;
          }
          plVar11 = (long *)(lStack_f8 + 8);
          if (*(char *)(lStack_f8 + 0x1f) < '\0') {
            plVar11 = (long *)*plVar11;
          }
          FUN_10969777c(&plStack_118,&ppuStack_110,plVar11);
          if (plStack_118 == (long *)0x0) {
            ppuStack_110 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_110);
            ppuStack_100 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_100);
            ppuStack_f0 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_f0);
          }
          else {
            plVar11 = plStack_118;
            (**(code **)(*plStack_118 + 0x78))(&ppuStack_128);
            FUN_1096978cc();
            if (lStack_120 == plVar11[1]) {
LAB_10969d468:
              func_0x000107c2ace8(&ppuStack_138);
              plVar11 = param_3;
              if (param_2[1][0x10] == '\x01') {
                FUN_10969d8d4(param_3,&ppuStack_138,param_2[1] + 0x14);
              }
              else {
                FUN_109697d7c(param_3,&ppuStack_138);
              }
              if (((ulong)plVar11 & 1) == 0) {
                FUN_10969eddc(param_2);
                *param_1 = (long)&PTR_FUN_110b01d60;
                param_1[1] = 0;
                FUN_109696618(&ppuStack_138);
LAB_10969d660:
                FUN_109696618(&ppuStack_128);
                goto LAB_10969d668;
              }
              FUN_1096967f4(plVar10,&plStack_118,&ppuStack_138);
              ppuStack_138 = &PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppuStack_138);
            }
            else {
              func_0x000107c2accc();
              func_0x00010969659c(&ppuStack_138);
              lVar7 = lStack_120;
              lVar16 = lStack_130;
              ppuStack_138 = &PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppuStack_138);
              if (lVar7 == lVar16) goto LAB_10969d468;
              (**(code **)(*param_2 + 0x28))(&ppuStack_138,param_2,param_3);
              FUN_109696b6c(plVar10,&plStack_118,&ppuStack_138);
              FUN_10969664c(&ppuStack_138);
              puVar13 = param_2[1] + -0x20;
              func_0x0001096966c0(puVar13,uRam000000011382aa08);
              if (puVar13 != (undefined *)0x0) {
                *param_1 = (long)&PTR_FUN_110b01d60;
                param_1[1] = 0;
                goto LAB_10969d660;
              }
            }
            ppuStack_128 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_128);
            ppuStack_110 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_110);
            ppuStack_100 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_100);
            ppuStack_f0 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_f0);
          }
        }
        FUN_10969ed4c(param_2);
LAB_10969d61c:
        *param_1 = (long)&PTR_FUN_110b01d60;
        param_1[1] = 0;
        goto LAB_10969d680;
      }
      FUN_10969eddc(param_2);
      *param_1 = (long)&PTR_FUN_110b01d60;
      param_1[1] = 0;
      goto LAB_10969d688;
    }
    if (abStack_81[0] == 0x53) {
      plVar10 = param_3;
      (**(code **)(*param_3 + 0x40))(param_3,&ppppuStack_c8,4,1);
      if ((int)plVar10 != 1) {
        FUN_10969eddc(param_2);
        goto LAB_10969d0a8;
      }
      puVar13 = param_2[1];
      uVar2 = puVar13[0x10];
      puVar13[0x10] = 1;
      *(uint *)(puVar13 + 0x14) = (uint)ppppuStack_c8;
      (**(code **)(*param_2 + 0x28))(param_1,param_2,param_3);
      param_2[1][0x10] = uVar2;
    }
    else {
      if (abStack_81[0] != 0x6e) {
LAB_10969cf14:
        FUN_10969eddc(param_2);
      }
LAB_10969d0a8:
      *param_1 = (long)&PTR_FUN_110b01d60;
LAB_10969d0b4:
      param_1[1] = 0;
    }
    goto LAB_10969d0b8;
  }
  FUN_10969ed4c(param_2);
  *param_1 = (long)&PTR_FUN_110b01d60;
  param_1[1] = 0;
  goto LAB_10969d0cc;
joined_r0x00010969d560:
  if (iVar5 == 0) goto LAB_10969d5b8;
  (**(code **)(*param_2 + 0x28))(&ppuStack_100,param_2,param_3);
  FUN_1096985c0(lStack_e8 + 8,&ppuStack_100);
  FUN_10969664c(&ppuStack_100);
  puVar13 = param_2[1] + -0x20;
  func_0x0001096966c0(puVar13,uRam000000011382aa08);
  if (puVar13 != (undefined *)0x0) goto LAB_10969d654;
  iVar5 = (int)ppuStack_110 + -1;
  ppuStack_110 = (undefined **)CONCAT44(ppuStack_110._4_4_,iVar5);
  goto joined_r0x00010969d560;
LAB_10969d5b8:
  func_0x00010969ccb0(&ppuStack_100,plVar10);
  if (lStack_f8 == 0) {
LAB_10969d6e4:
    plVar11 = plVar10;
    (**(code **)(*plVar10 + 0x18))(plVar10,param_3,param_2);
    if (((ulong)plVar11 & 1) == 0) {
      puVar13 = param_2[1] + -0x20;
      func_0x0001096966c0(puVar13,uRam000000011382aa08);
      if (puVar13 == (undefined *)0x0) {
        FUN_10969eddc(param_2);
      }
      goto LAB_10969d600;
    }
    lVar16 = *plVar10;
    param_1[1] = plVar10[1];
    *param_1 = lVar16;
    if (param_1[1] != 0) {
      piVar14 = (int *)(param_1[1] + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar4) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    func_0x000107c2acd4(plVar10);
    plVar11 = param_3;
    if (param_2[1][0x10] == '\x01') {
      FUN_10969d8d4(param_3,&ppuStack_100,param_2[1] + 0x14);
    }
    else {
      FUN_109697d7c(param_3,&ppuStack_100);
    }
    if (((ulong)plVar11 & 1) != 0) {
      if (plVar10[1] != lStack_f8) {
        func_0x000107c2acd4(plVar10);
        plVar10[1] = lStack_f8;
        *plVar10 = (long)ppuStack_100;
        if (plVar10[1] != 0) {
          piVar14 = (int *)(plVar10[1] + -8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar4) {
              *piVar14 = *piVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      goto LAB_10969d6e4;
    }
    FUN_10969ed4c(param_2);
LAB_10969d600:
    *param_1 = (long)&PTR_FUN_110b01d60;
    param_1[1] = 0;
  }
LAB_10969d670:
  FUN_109696618(&ppuStack_100);
  goto LAB_10969d678;
LAB_10969d654:
  *param_1 = (long)&PTR_FUN_110b01d60;
  param_1[1] = 0;
LAB_10969d678:
  FUN_109696618(&ppuStack_f0);
LAB_10969d680:
  FUN_10969df78(&ppuStack_b0);
LAB_10969d688:
  ppppuStack_c8 = (undefined ****)&PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppppuStack_c8);
LAB_10969d0b8:
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
LAB_10969d0cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10969d758:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10969d760);
  (*pcVar8)();
}



/* Entry: 10969d8d4; end: 10969dc2f;  */

byte * FUN_10969d8d4(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  long *plVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  byte bStack_89;
  byte abStack_88 [4];
  uint uStack_84;
  byte *pbStack_80;
  byte bStack_78;
  undefined7 uStack_77;
  undefined8 uStack_60;
  byte bStack_51;
  
  plVar6 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_78,1,1);
  if ((int)plVar6 == 1) {
    uVar12 = 0;
    uVar14 = 0;
    do {
      uVar12 = ((ulong)bStack_78 & 0x7f) << (uVar14 & 0x3f) | uVar12;
      if (-1 < (char)bStack_78) {
        FUN_109246310(&bStack_78,uVar12);
        uStack_60 = 0;
        (**(code **)(*param_1 + 0x40))(param_1,CONCAT71(uStack_77,bStack_78),1,(long)(int)uVar12);
        if ((int)param_1 != (int)uVar12) {
          pbVar11 = (byte *)0x0;
          goto LAB_10969dbe4;
        }
        FUN_10969e1d0(param_3,CONCAT71(uStack_77,bStack_78),uVar12);
        abStack_88[0] = 0;
        uStack_84 = 0;
        pbStack_80 = &bStack_78;
        pbVar11 = abStack_88;
        func_0x00010969e2a8(pbVar11,&bStack_89,1);
        if ((int)pbVar11 == 0) goto LAB_10969dbe4;
        ppppppuStack_a8 = (undefined8 *******)0x0;
        uStack_a0 = 0;
        uStack_98 = 0;
        goto LAB_10969da0c;
      }
      uVar14 = uVar14 + 7;
      plVar6 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_78,1,1);
    } while ((int)plVar6 == 1);
  }
  return (byte *)0x0;
LAB_10969da0c:
  uVar8 = (uint)abStack_88[0];
  if (uVar8 == 0) {
    lVar9 = *(long *)pbStack_80;
    uVar12 = *(long *)(pbStack_80 + 8) - lVar9;
    uVar14 = *(ulong *)(pbStack_80 + 0x18);
    uVar8 = uStack_84;
    while( true ) {
      if (uVar12 <= uVar14) goto LAB_10969db60;
      uVar1 = uVar14 + 1;
      *(ulong *)(pbStack_80 + 0x18) = uVar1;
      uVar10 = (uint)*(byte *)(lVar9 + uVar14);
      if (uVar10 != 0) break;
      uVar8 = uVar8 + 8;
      uVar14 = uVar1;
    }
    uVar10 = (uVar10 & 0xaaaaaaaa) >> 1 | (uVar10 & 0x55555555) << 1;
    uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
    uVar10 = (uint)LZCOUNT((uVar10 >> 4 | (uVar10 & 0xf0f0f0f) << 4) << 0x18);
    uVar8 = uVar10 + uVar8;
    abStack_88[0] = (*(byte *)(lVar9 + uVar14) >> (ulong)(uVar10 & 0x1f)) >> 1;
    uStack_84 = 7 - uVar10;
    if (0x16 < (int)uVar8) {
      if (uVar10 == 7) {
        if (uVar12 <= uVar1) goto LAB_10969db60;
        *(ulong *)(pbStack_80 + 0x18) = uVar14 + 2;
        uVar8 = (uint)*(byte *)(lVar9 + uVar14 + 1);
      }
      else {
        if (uVar12 <= uVar1) {
LAB_10969db60:
          uVar8 = (uint)uStack_a0;
          if (-1 < uStack_98) {
            uVar8 = (uint)uStack_98._7_1_;
          }
          if ((uVar8 & 1) != (uint)bStack_89) {
            lVar9 = (long)*(char *)(*(long *)(param_2 + 8) + 0x1f);
            if (lVar9 < 0) {
              lVar9 = *(long *)(*(long *)(param_2 + 8) + 0x10);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&ppppppuStack_a8,(long)((int)lVar9 + -1),0);
          }
          uVar14 = uStack_a0;
          pppppppuVar5 = (undefined8 *******)ppppppuStack_a8;
          if (-1 < (char)uStack_98._7_1_) {
            uVar14 = (ulong)uStack_98._7_1_;
            pppppppuVar5 = &ppppppuStack_a8;
          }
          FUN_109697984(param_2,pppppppuVar5,uVar14);
          if (uStack_98 < 0) {
            __ZdlPv(ppppppuStack_a8);
          }
LAB_10969dbe4:
          if (CONCAT71(uStack_77,bStack_78) == 0) {
            return pbVar11;
          }
          __ZdlPv();
          return pbVar11;
        }
        *(ulong *)(pbStack_80 + 0x18) = uVar14 + 2;
        bVar4 = *(byte *)(lVar9 + uVar14 + 1);
        uVar8 = (uint)bVar4 << (ulong)(uStack_84 & 0x1f) | (uint)abStack_88[0];
        abStack_88[0] = bVar4 >> (ulong)(uVar10 + 1 & 0x1f);
      }
    }
  }
  else {
    uVar8 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
    uVar8 = (uint)LZCOUNT((uVar8 >> 4 | (uVar8 & 0xf0f0f0f) << 4) << 0x18);
    abStack_88[0] = (abStack_88[0] >> (ulong)(uVar8 & 0x1f)) >> 1;
    uStack_84 = uStack_84 + ~uVar8;
  }
  pbVar7 = abStack_88;
  func_0x00010969e2a8(pbVar7,&bStack_51,6);
  if (((ulong)pbVar7 & 1) == 0) goto LAB_10969db60;
  bVar4 = bStack_51 | (byte)(uVar8 << 6);
  uVar8 = (uint)bStack_51 | uVar8 << 6 & 0xff;
  cVar13 = -0x45;
  if (0x74 < uVar8) {
    cVar13 = -0x1a;
  }
  bVar3 = bVar4;
  if (uVar8 < 0x7b) {
    bVar3 = cVar13 + bVar4;
  }
  cVar13 = 'a';
  if (0x19 < uVar8) {
    cVar13 = '\'';
  }
  bVar2 = bVar4 - 4;
  if (uVar8 < 0x34) {
    bVar2 = cVar13 + bVar4;
  }
  if (uVar8 < 0x45) {
    bVar3 = bVar2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (&ppppppuStack_a8,(int)(char)bVar3);
  goto LAB_10969da0c;
}



/* Entry: 10969dc30; end: 10969df77;  */

void FUN_10969dc30(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar16 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)param_1[2];
  uVar9 = (long)puVar12 - (long)puVar16;
  uVar8 = 0;
  if (uVar9 != 0) {
    uVar8 = ((long)puVar12 - (long)puVar16) * 0x20 - 1;
  }
  uVar1 = param_1[4];
  uVar10 = param_1[5] + uVar1;
  if (uVar8 != uVar10) goto LAB_10969defc;
  if (uVar1 < 0x100) {
    puVar13 = (undefined8 *)param_1[3];
    puVar14 = (undefined8 *)*param_1;
    if (uVar9 < (ulong)((long)puVar13 - (long)puVar14)) {
      uVar5 = 0x1000;
      puVar7 = param_2;
      __Znwm();
      if (puVar13 == puVar12) {
        if (puVar16 == puVar14) {
          uVar8 = (long)puVar13 - (long)puVar16 >> 2;
          if (puVar12 == puVar16) {
            uVar8 = 1;
          }
          lVar11 = uVar8 * 2;
          FUN_10969ec24();
          puVar16 = (undefined8 *)(uVar8 + (lVar11 + 6U & 0xfffffffffffffff8));
          lVar11 = param_1[2] - (long)param_1[1];
          puVar12 = puVar16;
          if (lVar11 != 0) {
            puVar12 = (undefined8 *)((long)puVar16 + lVar11);
            puVar13 = (undefined8 *)param_1[1];
            puVar14 = puVar16;
            do {
              *puVar14 = *puVar13;
              lVar11 = lVar11 + -8;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar11 != 0);
          }
          uVar9 = *param_1;
          *param_1 = uVar8;
          param_1[1] = (ulong)puVar16;
          param_1[2] = (ulong)puVar12;
          param_1[3] = uVar8 + (long)puVar7 * 8;
          if (uVar9 != 0) {
            __ZdlPv(uVar9);
            puVar16 = (undefined8 *)param_1[1];
          }
        }
        puVar16[-1] = uVar5;
        uVar8 = param_1[1];
        param_1[1] = uVar8 - 8;
        uVar5 = *(undefined8 *)(uVar8 - 8);
        param_1[1] = uVar8;
        goto LAB_10969dc90;
      }
      *puVar12 = uVar5;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar7 = (undefined8 *)((long)puVar13 - (long)puVar14 >> 2);
      if (puVar13 == puVar14) {
        puVar7 = (undefined8 *)0x1;
      }
      puVar15 = param_2;
      FUN_10969ec24();
      uVar5 = 0x1000;
      puVar6 = puVar15;
      __Znwm();
      puVar13 = (undefined8 *)((long)puVar7 + uVar9);
      puVar14 = puVar7 + (long)puVar15;
      puVar4 = puVar7;
      if (uVar9 == (long)puVar15 * 8) {
        if ((long)uVar9 < 1) {
          puVar13 = (undefined8 *)((long)puVar13 - (long)puVar7 >> 2);
          if (puVar12 == puVar16) {
            puVar13 = (undefined8 *)0x1;
          }
          puVar4 = puVar13;
          FUN_10969ec24();
          puVar13 = puVar4 + ((ulong)puVar13 >> 2);
          puVar14 = puVar4 + (long)puVar6;
          if (puVar7 != (undefined8 *)0x0) {
            __ZdlPv(puVar7);
          }
        }
        else {
          lVar11 = ((long)puVar13 - (long)puVar7 >> 3) + 1;
          puVar13 = puVar13 + -((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
        }
      }
      puVar16 = puVar13 + 1;
      *puVar13 = uVar5;
      puVar12 = (undefined8 *)param_1[2];
      puVar7 = puVar4;
      if (puVar12 != (undefined8 *)param_1[1]) {
        do {
          puVar4 = puVar7;
          puVar15 = puVar13;
          if (puVar13 == puVar7) {
            if (puVar16 < puVar14) {
              lVar11 = ((long)puVar14 - (long)puVar16 >> 3) + 1;
              lVar2 = (long)puVar16 - (long)puVar7;
              lVar3 = (long)puVar16 - (long)puVar7;
              puVar16 = puVar16 + ((ulong)(lVar11 - (lVar11 >> 0x3f)) >> 1);
              puVar15 = (undefined8 *)((long)puVar16 - lVar2);
              if (lVar3 != 0) {
                _memmove(puVar15,puVar13,lVar3);
                puVar6 = puVar13;
              }
            }
            else {
              puVar15 = (undefined8 *)((long)puVar14 - (long)puVar7 >> 2);
              if ((long)puVar14 - (long)puVar7 == 0) {
                puVar15 = (undefined8 *)0x1;
              }
              puVar4 = puVar15;
              FUN_10969ec24();
              puVar15 = (undefined8 *)((long)puVar4 + ((long)puVar15 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar11 = (long)puVar16 - (long)puVar7;
              puVar16 = puVar15;
              if (lVar11 != 0) {
                puVar16 = (undefined8 *)((long)puVar15 + lVar11);
                puVar14 = puVar15;
                do {
                  *puVar14 = *puVar13;
                  lVar11 = lVar11 + -8;
                  puVar14 = puVar14 + 1;
                  puVar13 = puVar13 + 1;
                } while (lVar11 != 0);
              }
              puVar14 = puVar4 + (long)puVar6;
              if (puVar7 != (undefined8 *)0x0) {
                __ZdlPv(puVar7);
              }
            }
          }
          puVar12 = puVar12 + -1;
          puVar13 = puVar15 + -1;
          *puVar13 = *puVar12;
          puVar7 = puVar4;
        } while (puVar12 != (undefined8 *)param_1[1]);
      }
      uVar8 = *param_1;
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar13;
      param_1[2] = (ulong)puVar16;
      param_1[3] = (ulong)puVar14;
      if (uVar8 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar1 - 0x100;
    uVar5 = *puVar16;
    param_1[1] = (ulong)(puVar16 + 1);
LAB_10969dc90:
    FUN_10969eb28(param_1,uVar5);
  }
  puVar16 = (undefined8 *)param_1[1];
  uVar10 = param_1[5] + param_1[4];
LAB_10969defc:
  lVar11 = puVar16[uVar10 >> 8];
  *(undefined ***)(lVar11 + (uVar10 & 0xff) * 0x10) = &PTR_FUN_110b01d60;
  uVar5 = *param_2;
  puVar16 = (undefined8 *)(lVar11 + (uVar10 & 0xff) * 0x10);
  puVar16[1] = param_2[1];
  *puVar16 = uVar5;
  param_2[1] = 0;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 10969df78; end: 10969e0b3;  */

long * FUN_10969df78(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if ((char)param_1[1] != '\x01') {
    return param_1;
  }
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 8);
  iVar2 = *(int *)(lVar8 + 0xc) + -1;
  *(int *)(lVar8 + 0xc) = iVar2;
  if (iVar2 != 0) {
    return param_1;
  }
  puVar11 = *(undefined8 **)(lVar8 + 0x48);
  puVar4 = puVar11;
  if (*(undefined8 **)(lVar8 + 0x50) != puVar11) {
    uVar6 = *(ulong *)(lVar8 + 0x60);
    plVar9 = puVar11 + (uVar6 >> 8);
    puVar10 = (undefined8 *)(*plVar9 + (uVar6 & 0xff) * 0x10);
    uVar6 = *(long *)(lVar8 + 0x68) + uVar6;
    puVar1 = (undefined8 *)(puVar11[uVar6 >> 8] + (uVar6 & 0xff) * 0x10);
    puVar4 = *(undefined8 **)(lVar8 + 0x50);
    if (puVar10 != puVar1) {
      do {
        puVar11 = puVar10 + 2;
        (**(code **)*puVar10)(puVar10);
        if ((long)puVar11 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          puVar11 = (undefined8 *)*plVar9;
        }
        puVar10 = puVar11;
      } while (puVar11 != puVar1);
      puVar11 = *(undefined8 **)(lVar8 + 0x48);
      puVar4 = *(undefined8 **)(lVar8 + 0x50);
    }
  }
  *(undefined8 *)(lVar8 + 0x68) = 0;
  lVar5 = (long)puVar4 - (long)puVar11;
  while (uVar6 = lVar5 >> 3, 2 < uVar6) {
    __ZdlPv(*puVar11);
    puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x48) + 8);
    *(undefined8 **)(lVar8 + 0x48) = puVar11;
    lVar5 = *(long *)(lVar8 + 0x50) - (long)puVar11;
  }
  if (uVar6 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar6 != 2) goto LAB_10969e090;
    uVar3 = 0x100;
  }
  *(undefined8 *)(lVar8 + 0x60) = uVar3;
LAB_10969e090:
  *(undefined1 *)(*(long *)(lVar7 + 8) + 0x10) = 0;
  return param_1;
}



/* Entry: 10969e0b4; end: 10969e103;  */

void FUN_10969e0b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010969e100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 10969e104; end: 10969e137;  */

void FUN_10969e104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969e138; end: 10969e14f;  */

bool FUN_10969e138(undefined8 param_1,undefined8 param_2,long *param_3)

{
  return *param_3 == 0;
}



/* Entry: 10969e150; end: 10969e1cf;  */

void FUN_10969e150(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bStack_21;
  
  param_2 = param_2 & (-1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
  uVar1 = *(uint *)(param_1 + 4);
  bStack_21 = *param_1 | (byte)(param_2 << (ulong)(uVar1 & 0x1f));
  *param_1 = bStack_21;
  *(uint *)(param_1 + 4) = uVar1 + param_3;
  if (7 < (int)(uVar1 + param_3)) {
    FUN_1093ae29c(*(undefined8 *)(param_1 + 8),&bStack_21);
    *param_1 = (byte)(param_2 >> (ulong)(-uVar1 & 7));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -8;
  }
  return;
}



/* Entry: 10969e1d0; end: 10969e37b;  */

void FUN_10969e1d0(uint *param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = *param_1 ^ *param_1 << 5;
  uVar3 = uVar3 ^ uVar3 >> 0x11;
  uVar3 = uVar3 ^ uVar3 << 0xd;
  *param_1 = uVar3;
  if (((ulong)param_2 & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar3 = uVar3 ^ uVar3 << 0x11;
      uVar3 = uVar3 ^ uVar3 >> 0xf;
      uVar3 = uVar3 ^ uVar3 << 0x14;
      *param_2 = uVar3 ^ *param_2;
      param_2 = param_2 + 1;
    }
    if (param_3 != 0) {
      uVar3 = uVar3 ^ uVar3 << 0x11;
      uVar3 = uVar3 ^ uVar3 >> 0xf;
      uVar3 = uVar3 ^ uVar3 << 0x14;
      do {
        *(byte *)param_2 = (byte)*param_2 ^ (byte)uVar3;
        uVar3 = uVar3 >> 8;
        param_3 = param_3 - 1;
        param_2 = (uint *)((long)param_2 + 1);
      } while (param_3 != 0);
    }
  }
  else {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar3 = uVar3 ^ uVar3 << 0x11;
      uVar1 = uVar3 ^ uVar3 >> 0xf;
      uVar3 = uVar1 ^ uVar1 << 0x14;
      uVar2 = *param_2;
      bVar4 = (byte)uVar1;
      *param_2 = CONCAT13((byte)(uVar2 >> 0x18) ^ bVar4,
                          CONCAT12((byte)(uVar2 >> 0x10) ^ bVar4,
                                   CONCAT11((byte)(uVar2 >> 8) ^ bVar4,(byte)uVar2 ^ bVar4)));
      param_2 = param_2 + 1;
    }
    if (param_3 != 0) {
      uVar3 = uVar3 ^ uVar3 << 0x11;
      uVar3 = uVar3 ^ uVar3 >> 0xf;
      uVar3 = uVar3 ^ uVar3 << 0x14;
      do {
        *(byte *)param_2 = (byte)*param_2 ^ (byte)uVar3;
        uVar3 = uVar3 >> 8;
        param_3 = param_3 - 1;
        param_2 = (uint *)((long)param_2 + 1);
      } while (param_3 != 0);
    }
  }
  return;
}



/* Entry: 10969e37c; end: 10969e3c3;  */

void FUN_10969e37c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 10969e3c4; end: 10969e41b;  */

undefined8 * FUN_10969e3c4(undefined8 *param_1)

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



/* Entry: 10969e41c; end: 10969e473;  */

void FUN_10969e41c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02158;
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



/* Entry: 10969e474; end: 10969e4bf;  */

void FUN_10969e474(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_10969bc60(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 10969e4c0; end: 10969e4ef;  */

bool FUN_10969e4c0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02158,0);
  return param_1 != 0;
}



/* Entry: 10969e4f0; end: 10969e54f;  */

long FUN_10969e4f0(long param_1)

{
  FUN_10969e550(param_1 + 0x40);
  FUN_10969e6a4(param_1 + 0x18);
  return param_1;
}



/* Entry: 10969e550; end: 10969e6a3;  */

long * FUN_10969e550(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar8 = puVar6;
  if (puVar2 != puVar6) {
    uVar4 = param_1[4];
    plVar7 = puVar6 + (uVar4 >> 8);
    puVar5 = (undefined8 *)(*plVar7 + (uVar4 & 0xff) * 0x10);
    puVar1 = (undefined8 *)(puVar6[param_1[5] + uVar4 >> 8] + (param_1[5] + uVar4 & 0xff) * 0x10);
    puVar8 = puVar2;
    if (puVar5 != puVar1) {
      do {
        puVar6 = puVar5 + 2;
        (**(code **)*puVar5)(puVar5);
        if ((long)puVar6 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          puVar6 = (undefined8 *)*plVar7;
        }
        puVar5 = puVar6;
      } while (puVar6 != puVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar8 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar8 - (long)puVar6;
  while (uVar4 = lVar3 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar8 = puVar2;
    lVar3 = (long)puVar2 - (long)puVar6;
  }
  if (uVar4 == 1) {
    lVar3 = 0x80;
  }
  else {
    if (uVar4 != 2) goto LAB_10969e648;
    lVar3 = 0x100;
  }
  param_1[4] = lVar3;
LAB_10969e648:
  if (puVar6 != puVar8) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar8);
    puVar8 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar8) {
    param_1[2] = (long)puVar2 + ((long)puVar8 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10969e6a4; end: 10969e6db;  */

long * FUN_10969e6a4(long *param_1)

{
  long lVar1;
  
  FUN_10969e6dc(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10969e6dc; end: 10969e72f;  */

void FUN_10969e6dc(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    param_1[2] = (long)&PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10969e730; end: 10969e783;  */

void FUN_10969e730(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_10969e6dc(param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10969e784; end: 10969e7db;  */

void FUN_10969e784(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      *(undefined ***)(lVar1 + 0x10) = &PTR_FUN_110b01d60;
      func_0x000107c2acd4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10969e7dc; end: 10969eb1f;  */

undefined8 FUN_10969e7dc(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined **appuStack_60 [2];
  
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    return 1;
  }
  if ((*(byte *)(plVar2 + 2) >> 2 & 1) == 0) {
    return 1;
  }
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x70))(appuStack_60);
  lVar3 = plVar4[1];
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    uVar1 = *(uint *)(lVar3 + 0x14) ^ *(uint *)(lVar3 + 0x14) << 5;
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    *(uint *)(lVar3 + 0x14) = uVar1 ^ uVar1 << 0xd;
    ppuStack_70 = (undefined **)(CONCAT71(ppuStack_70._1_7_,(char)uVar1) ^ 0x70);
    (**(code **)(*plVar2 + 0x48))(plVar2,&ppuStack_70,1,1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    FUN_1096975b0(&ppuStack_70,appuStack_60);
    FUN_10969c9cc(uVar5,&ppuStack_70,plVar4[1] + 0x14);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(*param_3 + 8);
    uVar5 = uVar7;
    _strlen(uVar7);
    FUN_109697928(&ppuStack_70,uVar7,uVar5);
    FUN_10969c9cc(uVar6,&ppuStack_70,plVar4[1] + 0x14);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
  }
  else {
    ppuStack_70 = (undefined **)CONCAT71(ppuStack_70._1_7_,0x70);
    (**(code **)(*plVar2 + 0x48))(plVar2,&ppuStack_70,1,1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    FUN_1096975b0(&ppuStack_70,appuStack_60);
    FUN_109697ca4(uVar5,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(*param_3 + 8);
    uVar5 = uVar7;
    _strlen(uVar7);
    FUN_109697928(&ppuStack_70,uVar7,uVar5);
    FUN_109697ca4(uVar6,&ppuStack_70);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
  }
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x78))(&ppuStack_70);
  FUN_1096978cc();
  if (lStack_68 != plVar2[1]) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_80);
    ppuStack_80 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_80);
    if (lStack_68 != lStack_78) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      FUN_109696a64(&ppuStack_80,param_2,param_3);
      (**(code **)(*plVar4 + 0x20))(plVar4,uVar5,&ppuStack_80);
      ppuStack_80 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_80);
      goto LAB_10969ea50;
    }
  }
  FUN_109696764(&ppuStack_80,param_2,param_3);
  if (*(char *)(plVar4[1] + 0x10) == '\x01') {
    FUN_10969c9cc(*(undefined8 *)(param_1 + 0x10),&ppuStack_80,plVar4[1] + 0x14);
  }
  else {
    FUN_109697ca4(*(undefined8 *)(param_1 + 0x10),&ppuStack_80);
  }
  ppuStack_80 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_80);
LAB_10969ea50:
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
  appuStack_60[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  return 1;
}



/* Entry: 10969eb20; end: 10969eb27;  */

void FUN_10969eb20(void)

{
  return;
}



/* Entry: 10969eb28; end: 10969ec23;  */

void FUN_10969eb28(ulong *param_1,undefined8 param_2)

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
      FUN_10969ec24();
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



/* Entry: 10969ec24; end: 10969ec57;  */

void FUN_10969ec24(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 10969ec58; end: 10969ecdf;  */

void FUN_10969ec58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 10969ece0; end: 10969ed37;  */

void FUN_10969ece0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02158;
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



/* Entry: 10969ed38; end: 10969ed4b;  */

void FUN_10969ed38(void)

{
  return;
}



/* Entry: 10969ed4c; end: 10969eddb;  */

void FUN_10969ed4c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if ((bRam000000011382a9e8 & 1) == 0) {
    iVar5 = 0x1382a9e8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_109697928(0x11382a9d8,&UNK_10f57c197,0x19);
      ___cxa_guard_release(0x11382a9e8);
    }
  }
  lVar6 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar6,puRam000000011382aa08);
  puVar4 = puRam000000011382aa08;
  if ((lVar6 == 0) || (puVar8 = *(undefined8 **)(lVar6 + 8), puVar8 == (undefined8 *)0x0)) {
    lVar6 = *(long *)(param_1 + 8) + -0x20;
    puVar8 = puRam000000011382aa08;
    (**(code **)*puRam000000011382aa08)();
    FUN_109696718(lVar6,puVar4);
    *(undefined8 **)(lVar6 + 8) = puVar8;
    *puVar8 = &PTR_FUN_110b01d60;
    uVar3 = uRam000000011382a9d8;
    puVar8[1] = lRam000000011382a9e0;
    *puVar8 = uVar3;
    if (puVar8[1] != 0) {
      piVar7 = (int *)(puVar8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar8 = &PTR_FUN_110b00af0;
  }
  else if (puVar8[1] != lRam000000011382a9e0) {
    func_0x000107c2acd4(puVar8);
    uVar3 = uRam000000011382a9d8;
    puVar8[1] = lRam000000011382a9e0;
    *puVar8 = uVar3;
    if (puVar8[1] != 0) {
      piVar7 = (int *)(puVar8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10969eddc; end: 10969eea7;  */

void FUN_10969eddc(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((bRam000000011382aa00 & 1) == 0) {
    iVar4 = 0x1382aa00;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c2ace8(0x11382a9f0);
      lVar5 = lRam000000011382a9f8;
      if (*(char *)(lRam000000011382a9f8 + 0x1f) < '\0') {
        *(undefined8 *)(lRam000000011382a9f8 + 0x10) = 0x15;
        puVar7 = *(undefined8 **)(lVar5 + 8);
      }
      else {
        puVar7 = (undefined8 *)(lRam000000011382a9f8 + 8);
        *(undefined1 *)(lRam000000011382a9f8 + 0x1f) = 0x15;
      }
      puVar7[1] = 0x652074616d726f66;
      *puVar7 = 0x2064696c61766e49;
      *(undefined8 *)((long)puVar7 + 0xd) = 0x2e726f7272652074;
      *(undefined1 *)((long)puVar7 + 0x15) = 0;
      ___cxa_guard_release(0x11382aa00);
    }
  }
  lVar5 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar5,puRam000000011382aa08);
  puVar7 = puRam000000011382aa08;
  if ((lVar5 == 0) || (puVar8 = *(undefined8 **)(lVar5 + 8), puVar8 == (undefined8 *)0x0)) {
    lVar5 = *(long *)(param_1 + 8) + -0x20;
    puVar8 = puRam000000011382aa08;
    (**(code **)*puRam000000011382aa08)();
    FUN_109696718(lVar5,puVar7);
    *(undefined8 **)(lVar5 + 8) = puVar8;
    *puVar8 = &PTR_FUN_110b01d60;
    uVar3 = uRam000000011382a9f0;
    puVar8[1] = lRam000000011382a9f8;
    *puVar8 = uVar3;
    if (puVar8[1] != 0) {
      piVar6 = (int *)(puVar8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar8 = &PTR_FUN_110b00af0;
  }
  else if (puVar8[1] != lRam000000011382a9f8) {
    func_0x000107c2acd4(puVar8);
    uVar3 = uRam000000011382a9f0;
    puVar8[1] = lRam000000011382a9f8;
    *puVar8 = uVar3;
    if (puVar8[1] != 0) {
      piVar6 = (int *)(puVar8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 10969eea8; end: 10969eedb;  */

undefined8 * FUN_10969eea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10969eedc; end: 10969ef0f;  */

void FUN_10969eedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969ef10; end: 10969ef2b;  */

void FUN_10969ef10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 10969ef2c; end: 10969ef73;  */

void FUN_10969ef2c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 10969ef74; end: 10969efcb;  */

undefined8 * FUN_10969ef74(undefined8 *param_1)

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



/* Entry: 10969efcc; end: 10969f023;  */

void FUN_10969efcc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02448;
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



/* Entry: 10969f024; end: 10969f09b;  */

void FUN_10969f024(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b02418;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 10969f09c; end: 10969f0cb;  */

bool FUN_10969f09c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02448,0);
  return param_1 != 0;
}



/* Entry: 10969f0cc; end: 10969f0df;  */

void FUN_10969f0cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 10969f0e0; end: 10969f10f;  */

void FUN_10969f0e0(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 10969f110; end: 10969f14b;  */

void FUN_10969f110(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 10969f14c; end: 10969f1ab;  */

undefined8 FUN_10969f14c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
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
  return 1;
}



/* Entry: 10969f1ac; end: 10969f1d7;  */

undefined8 FUN_10969f1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10969f1d8; end: 10969f203;  */

void FUN_10969f1d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02448;
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



/* Entry: 10969f204; end: 10969f2eb;  */

undefined8 * FUN_10969f204(undefined8 *param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar3 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar4 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar4;
    func_0x000107c2acd4();
    param_2 = pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = &PTR_FUN_110b01d60;
  puVar2 = (undefined8 *)0x28;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  *param_2 = &PTR_FUN_110b02600;
  param_2[1] = puVar2;
  puVar2 = param_2;
  func_0x000107c2acd0(param_2,200);
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  puVar2[0x16] = 0;
  puVar2[0x15] = 0;
  puVar2[0x18] = 0;
  puVar2[0x17] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 7) = 0x3f800000;
  puVar2[0x11] = 0xd246130105dbbb47;
  puVar2[0x10] = 0xe6c42dd13e2fe533;
  puVar2[0x13] = 0x490937907ac0d137;
  puVar2[0x12] = 0xded7a745ba18c0ed;
  puVar2[0x15] = 0x5b99974b04e472e8;
  puVar2[0x14] = 0x70f3bfd1d2578627;
  puVar2[0x17] = 0x27d0a676ca5ae546;
  puVar2[0x16] = 0x98adcc52713d1e05;
  puVar2[9] = 0x1f2c3450c4f6c973;
  puVar2[8] = 0x9de452ffb170797f;
  puVar2[0xb] = 0xea909de47d62ced8;
  puVar2[10] = 0x52cd7670d8e49219;
  puVar2[0xd] = 0x11eac5340be837aa;
  puVar2[0xc] = 0x98acaf948027427a;
  puVar2[0xf] = 0x452a890a8f72230b;
  puVar2[0xe] = 0xddb743f5e5e2ebff;
  *puVar2 = &PTR_FUN_110b02770;
  return param_2;
}



/* Entry: 10969f2ec; end: 10969f3db;  */

undefined8 * FUN_10969f2ec(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_110b02600;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,200);
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[0x11] = 0xd246130105dbbb47;
  puVar1[0x10] = 0xe6c42dd13e2fe533;
  puVar1[0x13] = 0x490937907ac0d137;
  puVar1[0x12] = 0xded7a745ba18c0ed;
  puVar1[0x15] = 0x5b99974b04e472e8;
  puVar1[0x14] = 0x70f3bfd1d2578627;
  puVar1[0x17] = 0x27d0a676ca5ae546;
  puVar1[0x16] = 0x98adcc52713d1e05;
  puVar1[9] = 0x1f2c3450c4f6c973;
  puVar1[8] = 0x9de452ffb170797f;
  puVar1[0xb] = 0xea909de47d62ced8;
  puVar1[10] = 0x52cd7670d8e49219;
  puVar1[0xd] = 0x11eac5340be837aa;
  puVar1[0xc] = 0x98acaf948027427a;
  puVar1[0xf] = 0x452a890a8f72230b;
  puVar1[0xe] = 0xddb743f5e5e2ebff;
  *puVar1 = &PTR_FUN_110b02770;
  return param_1;
}



/* Entry: 10969f3dc; end: 10969f4f7;  */

void FUN_10969f3dc(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong auStack_30 [2];
  
  *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
  FUN_10969f4f8(param_1,param_3);
  lVar4 = 0;
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = lVar3 + 0x40;
  uVar6 = *(uint *)(lVar3 + 0xc0);
  do {
    uVar7 = *(ulong *)(lVar5 + (long)(int)uVar6 * 8);
    uVar6 = uVar6 + 1 & 0xf;
    uVar8 = *(ulong *)(lVar5 + (ulong)uVar6 * 8);
    uVar8 = uVar8 ^ uVar8 << 0x1f;
    uVar7 = uVar7 >> 0x1e ^ uVar8 >> 0xb ^ uVar7 ^ uVar8;
    *(ulong *)(lVar5 + (ulong)uVar6 * 8) = uVar7;
    *(ulong *)((long)auStack_30 + lVar4) = uVar7;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x10);
  *(uint *)(lVar3 + 0xc0) = uVar6;
  iVar1 = *(int *)(lVar3 + 8) + -1;
  *(int *)(lVar3 + 8) = iVar1;
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar3 + 0x20);
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar3 + 0x18) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      FUN_1096a1490(uVar2);
      lVar3 = *(long *)(param_1 + 8);
    }
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0xd246130105dbbb47;
    *(undefined8 *)(lVar3 + 0x80) = 0xe6c42dd13e2fe533;
    *(undefined8 *)(lVar3 + 0x98) = 0x490937907ac0d137;
    *(undefined8 *)(lVar3 + 0x90) = 0xded7a745ba18c0ed;
    *(undefined8 *)(lVar3 + 0xa8) = 0x5b99974b04e472e8;
    *(undefined8 *)(lVar3 + 0xa0) = 0x70f3bfd1d2578627;
    *(undefined8 *)(lVar3 + 0xb8) = 0x27d0a676ca5ae546;
    *(undefined8 *)(lVar3 + 0xb0) = 0x98adcc52713d1e05;
    *(undefined8 *)(lVar3 + 0x48) = 0x1f2c3450c4f6c973;
    *(undefined8 *)(lVar3 + 0x40) = 0x9de452ffb170797f;
    *(undefined8 *)(lVar3 + 0x58) = 0xea909de47d62ced8;
    *(undefined8 *)(lVar3 + 0x50) = 0x52cd7670d8e49219;
    *(undefined8 *)(lVar3 + 0x68) = 0x11eac5340be837aa;
    *(undefined8 *)(lVar3 + 0x60) = 0x98acaf948027427a;
    *(undefined8 *)(lVar3 + 0x78) = 0x452a890a8f72230b;
    *(undefined8 *)(lVar3 + 0x70) = 0xddb743f5e5e2ebff;
    *(undefined4 *)(lVar3 + 0xc0) = 0;
  }
  (**(code **)(*param_2 + 0x48))(param_2,auStack_30,8,2);
  return;
}



/* Entry: 10969f4f8; end: 10969fed7;  */

void FUN_10969f4f8(undefined **param_1,long *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined **unaff_x23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined **ppuVar27;
  long lVar28;
  undefined **ppuVar29;
  char *pcVar30;
  char *pcVar31;
  undefined **ppuStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  
  puVar24 = param_1[1];
  puVar1 = puVar24 + 0x40;
  puVar9 = (undefined *)param_2[1];
  if (puVar9 == (undefined *)0x0) {
    uVar12 = (ulong)*(int *)(puVar24 + 0xc0);
    *(ulong *)(puVar1 + uVar12 * 8) = *(ulong *)(puVar1 + uVar12 * 8) ^ 0xffffffffffffffff;
    iVar14 = 4;
    do {
      iVar8 = (int)uVar12;
      uVar3 = iVar8 + 1U & 0xf;
      uVar12 = (ulong)uVar3;
      uVar20 = *(ulong *)(puVar1 + uVar12 * 8) ^ *(ulong *)(puVar1 + uVar12 * 8) << 0x1f;
      *(ulong *)(puVar1 + uVar12 * 8) =
           *(ulong *)(puVar1 + (long)iVar8 * 8) >> 0x1e ^ uVar20 >> 0xb ^
           *(ulong *)(puVar1 + (long)iVar8 * 8) ^ uVar20;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    *(uint *)(puVar24 + 0xc0) = uVar3;
    return;
  }
  ppuVar2 = (undefined **)(puVar24 + 0x18);
  ppuVar27 = (undefined **)((ulong)puVar9 >> 3);
  ppuVar29 = *(undefined ***)(puVar24 + 0x20);
  if (ppuVar29 != (undefined **)0x0) {
    uVar12 = (long)ppuVar29 - 1;
    if (((ulong)ppuVar29 & uVar12) == 0) {
      unaff_x23 = (undefined **)(uVar12 & (ulong)ppuVar27);
    }
    else {
      unaff_x23 = ppuVar27;
      if (ppuVar29 <= ppuVar27) {
        uVar20 = 0;
        if (ppuVar29 != (undefined **)0x0) {
          uVar20 = (ulong)ppuVar27 / (ulong)ppuVar29;
        }
        unaff_x23 = (undefined **)((long)ppuVar27 - uVar20 * (long)ppuVar29);
      }
    }
    if (*(undefined8 **)(*ppuVar2 + (long)unaff_x23 * 8) != (undefined8 *)0x0) {
      for (ppuVar22 = (undefined **)**(undefined8 **)(*ppuVar2 + (long)unaff_x23 * 8);
          ppuVar22 != (undefined **)0x0; ppuVar22 = (undefined **)*ppuVar22) {
        ppuVar15 = (undefined **)ppuVar22[1];
        if (ppuVar15 == ppuVar27) {
          if (ppuVar22[3] == puVar9) {
            bVar6 = false;
            ppuVar15 = param_1;
            goto LAB_10969f8b0;
          }
        }
        else {
          if (((ulong)ppuVar29 & uVar12) == 0) {
            ppuVar15 = (undefined **)((ulong)ppuVar15 & uVar12);
          }
          else if (ppuVar29 <= ppuVar15) {
            uVar20 = 0;
            if (ppuVar29 != (undefined **)0x0) {
              uVar20 = (ulong)ppuVar15 / (ulong)ppuVar29;
            }
            ppuVar15 = (undefined **)((long)ppuVar15 - uVar20 * (long)ppuVar29);
          }
          if (ppuVar15 != unaff_x23) break;
        }
      }
    }
  }
  ppuVar22 = (undefined **)0x28;
  __Znwm();
  uStack_70 = 1;
  *ppuVar22 = (undefined *)0x0;
  ppuVar22[1] = (undefined *)ppuVar27;
  puVar9 = (undefined *)*param_2;
  ppuVar22[3] = (undefined *)param_2[1];
  ppuVar22[2] = puVar9;
  if (ppuVar22[3] != (undefined *)0x0) {
    piVar13 = (int *)(ppuVar22[3] + -8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuVar22[4] = *(undefined **)(puVar24 + 0x10);
  ppuVar15 = ppuVar22;
  ppuStack_80 = ppuVar22;
  ppuStack_78 = ppuVar2;
  if ((ppuVar29 != (undefined **)0x0) &&
     ((float)(*(long *)(puVar24 + 0x30) + 1) <= *(float *)(puVar24 + 0x38) * (float)ppuVar29))
  goto LAB_10969f838;
  uVar12 = 1;
  if ((undefined **)0x2 < ppuVar29) {
    uVar12 = (ulong)(((ulong)ppuVar29 & (long)ppuVar29 - 1U) != 0);
  }
  ppuVar10 = (undefined **)(uVar12 | (long)ppuVar29 << 1);
  ppuVar29 = (undefined **)
             (long)((float)(*(long *)(puVar24 + 0x30) + 1) / *(float *)(puVar24 + 0x38));
  if (ppuVar10 <= ppuVar29) {
    ppuVar10 = ppuVar29;
  }
  if ((long)ppuVar10 - 1U == 0) {
    ppuVar10 = (undefined **)0x2;
  }
  else if (((ulong)ppuVar10 & (long)ppuVar10 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppuVar15 = ppuVar10;
  }
  ppuVar29 = *(undefined ***)(puVar24 + 0x20);
  if (ppuVar29 < ppuVar10) {
LAB_10969f6c0:
    if ((ulong)ppuVar10 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10969fe0c);
      (*pcVar7)();
    }
    puVar9 = (undefined *)((long)ppuVar10 << 3);
    __Znwm();
    ppuVar15 = (undefined **)*ppuVar2;
    *ppuVar2 = puVar9;
    if (ppuVar15 != (undefined **)0x0) {
      __ZdlPv();
    }
    ppuVar29 = (undefined **)0x0;
    *(undefined ***)(puVar24 + 0x20) = ppuVar10;
    do {
      *(undefined8 *)(*ppuVar2 + (long)ppuVar29 * 8) = 0;
      ppuVar29 = (undefined **)((long)ppuVar29 + 1);
    } while (ppuVar10 != ppuVar29);
    plVar23 = *(long **)(puVar24 + 0x28);
    ppuVar29 = ppuVar10;
    if (plVar23 != (long *)0x0) {
      ppuVar16 = (undefined **)plVar23[1];
      uVar12 = (long)ppuVar10 - 1;
      if (((ulong)ppuVar10 & uVar12) == 0) {
        ppuVar16 = (undefined **)((ulong)ppuVar16 & uVar12);
      }
      else if (ppuVar10 <= ppuVar16) {
        uVar20 = 0;
        if (ppuVar10 != (undefined **)0x0) {
          uVar20 = (ulong)ppuVar16 / (ulong)ppuVar10;
        }
        ppuVar16 = (undefined **)((long)ppuVar16 - uVar20 * (long)ppuVar10);
      }
      *(undefined **)(*ppuVar2 + (long)ppuVar16 * 8) = puVar24 + 0x28;
      plVar17 = (long *)*plVar23;
      while (plVar17 != (long *)0x0) {
        ppuVar19 = (undefined **)plVar17[1];
        if (((ulong)ppuVar10 & uVar12) == 0) {
          ppuVar19 = (undefined **)((ulong)ppuVar19 & uVar12);
        }
        else if (ppuVar10 <= ppuVar19) {
          uVar20 = 0;
          if (ppuVar10 != (undefined **)0x0) {
            uVar20 = (ulong)ppuVar19 / (ulong)ppuVar10;
          }
          ppuVar19 = (undefined **)((long)ppuVar19 - uVar20 * (long)ppuVar10);
        }
        plVar18 = plVar17;
        if (ppuVar19 != ppuVar16) {
          puVar9 = *ppuVar2;
          if (*(long *)(puVar9 + (long)ppuVar19 * 8) == 0) {
            *(long **)(puVar9 + (long)ppuVar19 * 8) = plVar23;
            ppuVar16 = ppuVar19;
          }
          else {
            *plVar23 = *plVar17;
            *plVar17 = **(undefined8 **)(puVar9 + (long)ppuVar19 * 8);
            **(long **)(puVar9 + (long)ppuVar19 * 8) = (long)plVar17;
            plVar18 = plVar23;
          }
        }
        plVar23 = plVar18;
        plVar17 = (long *)*plVar18;
      }
    }
  }
  else if (ppuVar10 < ppuVar29) {
    ppuVar15 = (undefined **)(long)((float)*(ulong *)(puVar24 + 0x30) / *(float *)(puVar24 + 0x38));
    if ((ppuVar29 < (undefined **)0x3) || (((ulong)ppuVar29 & (long)ppuVar29 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined **)0x1 < ppuVar15) {
      ppuVar15 = (undefined **)(1L << (-LZCOUNT((long)ppuVar15 + -1) & 0x3fU));
    }
    if (ppuVar10 <= ppuVar15) {
      ppuVar10 = ppuVar15;
    }
    if (ppuVar10 < ppuVar29) {
      if (ppuVar10 != (undefined **)0x0) goto LAB_10969f6c0;
      ppuVar15 = (undefined **)*ppuVar2;
      *ppuVar2 = (undefined *)0x0;
      if (ppuVar15 != (undefined **)0x0) {
        __ZdlPv();
      }
      *(undefined8 *)(puVar24 + 0x20) = 0;
      ppuVar29 = (undefined **)0x0;
    }
    else {
      ppuVar29 = *(undefined ***)(puVar24 + 0x20);
    }
  }
  if (((ulong)ppuVar29 & (long)ppuVar29 - 1U) == 0) {
    unaff_x23 = (undefined **)((long)ppuVar29 - 1U & (ulong)ppuVar27);
  }
  else {
    unaff_x23 = ppuVar27;
    if (ppuVar29 <= ppuVar27) {
      uVar12 = 0;
      if (ppuVar29 != (undefined **)0x0) {
        uVar12 = (ulong)ppuVar27 / (ulong)ppuVar29;
      }
      unaff_x23 = (undefined **)((long)ppuVar27 - uVar12 * (long)ppuVar29);
    }
  }
LAB_10969f838:
  puVar9 = *ppuVar2;
  plVar23 = *(long **)(puVar9 + (long)unaff_x23 * 8);
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)(puVar24 + 0x28);
    *ppuVar22 = (undefined *)*plVar23;
    *plVar23 = (long)ppuVar22;
    *(long **)(puVar9 + (long)unaff_x23 * 8) = plVar23;
    if (*ppuVar22 != (undefined *)0x0) {
      ppuVar27 = *(undefined ***)(*ppuVar22 + 8);
      if (((ulong)ppuVar29 & (long)ppuVar29 - 1U) == 0) {
        ppuVar27 = (undefined **)((ulong)ppuVar27 & (long)ppuVar29 - 1U);
      }
      else if (ppuVar29 <= ppuVar27) {
        uVar12 = 0;
        if (ppuVar29 != (undefined **)0x0) {
          uVar12 = (ulong)ppuVar27 / (ulong)ppuVar29;
        }
        ppuVar27 = (undefined **)((long)ppuVar27 - uVar12 * (long)ppuVar29);
      }
      *(undefined ***)(*ppuVar2 + (long)ppuVar27 * 8) = ppuVar22;
    }
  }
  else {
    *ppuVar22 = (undefined *)*plVar23;
    *plVar23 = (long)ppuVar22;
  }
  *(long *)(puVar24 + 0x30) = *(long *)(puVar24 + 0x30) + 1;
  bVar6 = true;
LAB_10969f8b0:
  uVar12 = (ulong)*(int *)(puVar24 + 0xc0);
  *(ulong *)(puVar1 + uVar12 * 8) = *(ulong *)(puVar1 + uVar12 * 8) ^ (ulong)ppuVar22[4];
  iVar14 = 4;
  do {
    iVar8 = (int)uVar12;
    uVar3 = iVar8 + 1U & 0xf;
    uVar12 = (ulong)uVar3;
    uVar20 = *(ulong *)(puVar1 + uVar12 * 8) ^ *(ulong *)(puVar1 + uVar12 * 8) << 0x1f;
    *(ulong *)(puVar1 + uVar12 * 8) =
         *(ulong *)(puVar1 + (long)iVar8 * 8) >> 0x1e ^ uVar20 >> 0xb ^
         *(ulong *)(puVar1 + (long)iVar8 * 8) ^ uVar20;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  *(uint *)(puVar24 + 0xc0) = uVar3;
  if (bVar6) {
    *(long *)(param_1[1] + 0x10) = *(long *)(param_1[1] + 0x10) + 1;
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_a0);
    FUN_1096978cc();
    if (ppuStack_98 == (undefined **)ppuVar15[1]) {
      FUN_10969ff0c(puVar1,0xfffffffe);
    }
    else {
      FUN_1096975b0(&ppuStack_b0,&ppuStack_a0);
      FUN_10969ff5c(puVar1,uStack_a8);
      func_0x000107c2accc();
      func_0x00010969659c(&ppuStack_80);
      ppuVar2 = ppuStack_78;
      ppuStack_80 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_80);
      if (ppuStack_98 == ppuVar2) {
        plVar23 = param_2;
        ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
        if (plVar23 == (long *)0x0) {
          func_0x000107c2acdc();
        }
        ppuStack_78 = (undefined **)plVar23[1];
        ppuStack_80 = (undefined **)*plVar23;
        if (ppuStack_78 != (undefined **)0x0) {
          piVar13 = (int *)((long)ppuStack_78 + -8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = *piVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar12 = (ulong)*(char *)((long)ppuStack_78 + 0x1f);
        if ((long)uVar12 < 0) {
          puVar21 = *(undefined1 **)((long)ppuStack_78 + 8);
          uVar12 = *(ulong *)((long)ppuStack_78 + 0x10);
        }
        else {
          puVar21 = (undefined1 *)((long)ppuStack_78 + 8);
        }
        if ((uVar12 & 0xffffffff) != 0) {
          lVar25 = (long)(int)uVar12;
          do {
            FUN_10969ffc0(puVar1,*puVar21);
            lVar25 = lVar25 + -1;
            puVar21 = puVar21 + 1;
          } while (lVar25 != 0);
        }
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
      }
      ppuStack_80 = (undefined **)0x0;
      ppuStack_78 = (undefined **)0x0;
      uStack_70 = 0;
      pppuStack_88 = &ppuStack_80;
      ppuStack_90 = &PTR_FUN_110b02658;
      func_0x000109696c8c(param_2,&ppuStack_90);
      lVar25 = 0;
      if (ppuStack_78 != ppuStack_80) {
        lVar25 = LZCOUNT((long)ppuStack_78 - (long)ppuStack_80 >> 3) * -2 + 0x7e;
      }
      FUN_1096a02e0(ppuStack_80,ppuStack_78,lVar25,1);
      ppuVar2 = ppuStack_78;
      uVar12 = (ulong)*(int *)(puVar24 + 0xc0);
      *(ulong *)(puVar1 + uVar12 * 8) =
           *(ulong *)(puVar1 + uVar12 * 8) ^ (long)ppuStack_78 - (long)ppuStack_80 >> 3;
      iVar14 = 4;
      do {
        iVar8 = (int)uVar12;
        uVar3 = iVar8 + 1U & 0xf;
        uVar12 = (ulong)uVar3;
        uVar20 = *(ulong *)(puVar1 + uVar12 * 8) ^ *(ulong *)(puVar1 + uVar12 * 8) << 0x1f;
        *(ulong *)(puVar1 + uVar12 * 8) =
             *(ulong *)(puVar1 + (long)iVar8 * 8) >> 0x1e ^ uVar20 >> 0xb ^
             *(ulong *)(puVar1 + (long)iVar8 * 8) ^ uVar20;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      *(uint *)(puVar24 + 0xc0) = uVar3;
      for (ppuVar29 = ppuStack_80; ppuVar29 != ppuVar2; ppuVar29 = ppuVar29 + 1) {
        plVar23 = (long *)*ppuVar29;
        plStack_b8 = plVar23;
        (**(code **)(*plVar23 + 0x70))(&ppuStack_c8,plVar23);
        FUN_1096975b0(&ppuStack_90,&ppuStack_c8);
        FUN_10969ff5c(puVar1,pppuStack_88);
        ppuStack_90 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_90);
        ppuStack_c8 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_c8);
        pcVar30 = (char *)plVar23[1];
        cVar5 = *pcVar30;
        pcVar31 = pcVar30;
        while (cVar5 != '\0') {
          FUN_10969ffc0(puVar1);
          pcVar31 = pcVar31 + 1;
          cVar5 = *pcVar31;
        }
        uVar12 = (ulong)*(int *)(puVar24 + 0xc0);
        *(ulong *)(puVar1 + uVar12 * 8) =
             *(ulong *)(puVar1 + uVar12 * 8) ^ (long)pcVar31 - (long)pcVar30;
        iVar14 = 4;
        do {
          iVar8 = (int)uVar12;
          uVar3 = iVar8 + 1U & 0xf;
          uVar12 = (ulong)uVar3;
          uVar20 = *(ulong *)(puVar1 + uVar12 * 8) ^ *(ulong *)(puVar1 + uVar12 * 8) << 0x1f;
          *(ulong *)(puVar1 + uVar12 * 8) =
               *(ulong *)(puVar1 + (long)iVar8 * 8) >> 0x1e ^ uVar20 >> 0xb ^
               *(ulong *)(puVar1 + (long)iVar8 * 8) ^ uVar20;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        *(uint *)(puVar24 + 0xc0) = uVar3;
        (**(code **)(*plVar23 + 0x78))(&ppuStack_90);
        FUN_1096978cc();
        if (pppuStack_88 == (undefined ***)plVar23[1]) {
          FUN_109696764(&ppuStack_c8,param_2,&plStack_b8);
          FUN_10969f4f8(param_1,&ppuStack_c8);
          ppuStack_c8 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_c8);
        }
        else {
          FUN_109696a64(&ppuStack_c8,param_2,&plStack_b8);
          FUN_10969f4f8(param_1,&ppuStack_c8);
          ppuStack_c8 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_c8);
        }
        ppuStack_90 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_90);
      }
      plVar23 = param_2;
      ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
      if (plVar23 == (long *)0x0) {
        func_0x000107c2acdc();
      }
      lVar25 = plVar23[1];
      pppuStack_88 = (undefined ***)lVar25;
      if (lVar25 == 0) {
        ppuStack_90 = &PTR_FUN_110b01468;
      }
      else {
        piVar13 = (int *)(lVar25 + -8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppuStack_90 = &PTR_FUN_110b01468;
        FUN_10969ff0c(puVar1,(ulong)(*(long *)(lVar25 + 0x10) - *(long *)(lVar25 + 8)) >> 4);
        lVar11 = *(long *)(lVar25 + 8);
        if (0xffffffff < (*(long *)(lVar25 + 0x10) - lVar11) * 0x10000000) {
          lVar26 = 0;
          lVar28 = 0;
          do {
            FUN_10969f4f8(param_1,lVar11 + lVar26);
            lVar28 = lVar28 + 1;
            lVar11 = *(long *)(lVar25 + 8);
            lVar26 = lVar26 + 0x10;
          } while (lVar28 < (int)((ulong)(*(long *)(lVar25 + 0x10) - lVar11) >> 4));
        }
      }
      FUN_10969b5d0(&ppuStack_c8);
      (**(code **)(*param_2 + 0x10))(param_2,&ppuStack_c8,param_1);
      puVar21 = *(undefined1 **)(lStack_c0 + 8);
      puVar4 = *(undefined1 **)(lStack_c0 + 0x10);
      uVar12 = (ulong)*(int *)(puVar24 + 0xc0);
      *(ulong *)(puVar1 + uVar12 * 8) =
           *(ulong *)(puVar1 + uVar12 * 8) ^ (long)puVar4 - (long)puVar21;
      iVar14 = 4;
      do {
        iVar8 = (int)uVar12;
        uVar3 = iVar8 + 1U & 0xf;
        uVar12 = (ulong)uVar3;
        uVar20 = *(ulong *)(puVar1 + uVar12 * 8) ^ *(ulong *)(puVar1 + uVar12 * 8) << 0x1f;
        *(ulong *)(puVar1 + uVar12 * 8) =
             *(ulong *)(puVar1 + (long)iVar8 * 8) >> 0x1e ^ uVar20 >> 0xb ^
             *(ulong *)(puVar1 + (long)iVar8 * 8) ^ uVar20;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      *(uint *)(puVar24 + 0xc0) = uVar3;
      for (; puVar21 != puVar4; puVar21 = puVar21 + 1) {
        FUN_10969ffc0(puVar1,*puVar21);
      }
      FUN_10969ff0c(puVar1,0);
      ppuStack_c8 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_c8);
      ppuStack_90 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_90);
      if (ppuStack_80 != (undefined **)0x0) {
        ppuStack_78 = ppuStack_80;
        __ZdlPv();
      }
      ppuStack_b0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_b0);
    }
    ppuStack_a0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_a0);
  }
  return;
}



/* Entry: 10969fed8; end: 10969ff0b;  */

void FUN_10969fed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10969ff0c; end: 10969ff5b;  */

void FUN_10969ff0c(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(int *)(param_1 + 0x80);
  *(ulong *)(param_1 + uVar2 * 8) = *(ulong *)(param_1 + uVar2 * 8) ^ (long)param_2;
  iVar3 = 4;
  do {
    uVar4 = *(ulong *)(param_1 + (long)(int)uVar2 * 8);
    uVar1 = (int)uVar2 + 1U & 0xf;
    uVar2 = (ulong)uVar1;
    uVar5 = *(ulong *)(param_1 + uVar2 * 8);
    uVar5 = uVar5 ^ uVar5 << 0x1f;
    *(ulong *)(param_1 + uVar2 * 8) = uVar4 >> 0x1e ^ uVar5 >> 0xb ^ uVar4 ^ uVar5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(uint *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 10969ff5c; end: 10969ffbf;  */

void FUN_10969ff5c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  uVar1 = (ulong)*(char *)(param_2 + 0x1f);
  if ((long)uVar1 < 0) {
    puVar2 = *(undefined1 **)(param_2 + 8);
    uVar1 = *(ulong *)(param_2 + 0x10);
  }
  else {
    puVar2 = (undefined1 *)(param_2 + 8);
  }
  FUN_10969ff0c(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar1 = uVar1 & 0x7fffffff;
    do {
      FUN_10969ffc0(param_1,*puVar2);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10969ffc0; end: 1096a000f;  */

void FUN_10969ffc0(long param_1,char param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(int *)(param_1 + 0x80);
  *(ulong *)(param_1 + uVar2 * 8) = *(ulong *)(param_1 + uVar2 * 8) ^ (long)param_2;
  iVar3 = 4;
  do {
    uVar4 = *(ulong *)(param_1 + (long)(int)uVar2 * 8);
    uVar1 = (int)uVar2 + 1U & 0xf;
    uVar2 = (ulong)uVar1;
    uVar5 = *(ulong *)(param_1 + uVar2 * 8);
    uVar5 = uVar5 ^ uVar5 << 0x1f;
    *(ulong *)(param_1 + uVar2 * 8) = uVar4 >> 0x1e ^ uVar5 >> 0xb ^ uVar4 ^ uVar5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(uint *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 1096a0010; end: 1096a0067;  */

void FUN_1096a0010(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      *(undefined ***)(lVar1 + 0x10) = &PTR_FUN_110b01d60;
      func_0x000107c2acd4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1096a0068; end: 1096a010b;  */

undefined8 FUN_1096a0068(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **appuStack_30 [2];
  
  plVar1 = (long *)*param_3;
  if ((plVar1 != (long *)0x0) && ((*(byte *)(plVar1 + 2) >> 2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x70))(appuStack_30);
    plVar3 = *(long **)(param_1 + 8);
    plVar1 = (long *)plVar3[1];
    if (plVar1 < (long *)plVar3[2]) {
      plVar2 = plVar1 + 1;
      *plVar1 = *param_3;
    }
    else {
      plVar2 = plVar3;
      FUN_1096a0114(plVar3,param_3);
    }
    plVar3[1] = (long)plVar2;
    appuStack_30[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_30);
  }
  return 1;
}



/* Entry: 1096a010c; end: 1096a0113;  */

void FUN_1096a010c(void)

{
  return;
}



/* Entry: 1096a0114; end: 1096a022b;  */

long * FUN_1096a0114(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_1;
      FUN_1096a02ac();
    }
    puStack_50 = (undefined8 *)((long)plVar9 + lVar10);
    plStack_40 = plVar9 + uVar7;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *param_2;
    plStack_58 = plVar9;
    FUN_1096a022c(param_1,&plStack_58);
    plVar9 = (long *)param_1[1];
    if (puStack_48 != puStack_50) {
      puStack_48 = (undefined8 *)
                   ((long)puStack_48 +
                   ((long)puStack_50 + (7 - (long)puStack_48) & 0xfffffffffffffff8U));
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar9;
  }
  FUN_1096a0298();
  if (puStack_48 != puStack_50) {
    puStack_48 = (undefined8 *)
                 ((long)puStack_48 +
                 (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar4));
  puVar5 = puVar2;
  for (puVar8 = puVar3; puVar4 != puVar8; puVar8 = puVar8 + 1) {
    *puVar5 = *puVar8;
    puVar5 = puVar5 + 1;
  }
  param_2[1] = puVar2;
  lVar10 = *param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  param_2[1] = lVar10;
  lVar10 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar10;
  lVar10 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar10;
  *param_2 = param_2[1];
  return param_1;
}



/* Entry: 1096a022c; end: 1096a0297;  */

void FUN_1096a022c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar2 + (param_2[1] - (long)puVar3));
  puVar4 = puVar1;
  for (puVar6 = puVar2; puVar3 != puVar6; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    puVar4 = puVar4 + 1;
  }
  param_2[1] = puVar1;
  lVar5 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1096a0298; end: 1096a02ab;  */

/* WARNING: Possible PIC construction at 0x0001096a08c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096a08cc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08dc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08fc) */
/* WARNING: Removing unreachable block (ram,0x0001096a0914) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1096a0298(undefined8 param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar17;
  ulong uVar18;
  undefined8 *unaff_x24;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  code *pcVar23;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  undefined8 ******ppppppuStack_20;
  code *pcStack_18;
  
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  ppuVar5 = (undefined8 **)&stack0xffffffffffffffd0;
  pcStack_18 = FUN_1096a02ac;
  if ((ulong)param_2 >> 0x3d == 0) {
    ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
    __Znwm((long)param_2 << 3);
    return;
  }
  ppppppuStack_20 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x000104c4f740();
  pcStack_38 = FUN_1096a02e0;
  puVar11 = unaff_x23;
  pppppppuStack_40 = &ppppppuStack_20;
LAB_1096a0310:
  puVar14 = param_2 + -1;
  puStack_a0 = param_2 + -2;
  puVar13 = param_2 + -3;
  puVar12 = puVar6;
LAB_1096a0324:
  do {
    puVar6 = puVar12;
    uVar20 = (long)param_2 - (long)puVar6 >> 3;
    if (uVar20 - 2 != 0 && 1 < (long)uVar20) {
      if (uVar20 != 3) {
        puVar12 = puVar14;
        pppppppuVar22 = pppppppuStack_40;
        pcVar23 = pcStack_38;
        if (uVar20 != 4) {
          if (uVar20 != 5) goto LAB_1096a0360;
          ppuVar5 = &puStack_a0;
          puVar12 = puVar6 + 3;
          unaff_x19 = puVar6;
          unaff_x20 = param_2;
          unaff_x21 = puVar14;
          unaff_x22 = param_3;
          unaff_x23 = puVar11;
          unaff_x24 = puVar13;
          pppppppuVar22 = &pppppppuStack_40;
          pcVar23 = (code *)0x1096a08cc;
        }
        puVar7 = puVar6 + 2;
        puVar13 = puVar6 + 1;
        *(undefined8 **)((long)ppuVar5 + -0x40) = unaff_x24;
        *(undefined8 **)((long)ppuVar5 + -0x38) = unaff_x23;
        *(long *)((long)ppuVar5 + -0x30) = unaff_x22;
        *(undefined8 **)((long)ppuVar5 + -0x28) = unaff_x21;
        *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
        *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
        *(undefined8 ********)((long)ppuVar5 + -0x10) = pppppppuVar22;
        *(code **)((long)ppuVar5 + -8) = pcVar23;
        puVar11 = puVar13;
        FUN_1096a0cf0(puVar13,puVar6);
        puVar14 = puVar7;
        FUN_1096a0cf0(puVar7,puVar13);
        if (((ulong)puVar11 & 1) == 0) {
          if ((int)puVar14 != 0) {
            uVar15 = *puVar13;
            *puVar13 = *puVar7;
            *puVar7 = uVar15;
            puVar11 = puVar13;
            FUN_1096a0cf0(puVar13,puVar6);
            if ((int)puVar11 != 0) {
              uVar15 = *puVar6;
              *puVar6 = *puVar13;
              *puVar13 = uVar15;
            }
          }
        }
        else {
          uVar15 = *puVar6;
          if ((int)puVar14 == 0) {
            *puVar6 = *puVar13;
            *puVar13 = uVar15;
            puVar11 = puVar7;
            FUN_1096a0cf0(puVar7,puVar13);
            if ((int)puVar11 == 0) goto LAB_1096a0f34;
            uVar15 = *puVar13;
            *puVar13 = *puVar7;
          }
          else {
            *puVar6 = *puVar7;
          }
          *puVar7 = uVar15;
        }
LAB_1096a0f34:
        puVar11 = puVar12;
        FUN_1096a0cf0(puVar12,puVar7);
        if ((int)puVar11 != 0) {
          uVar15 = *puVar7;
          *puVar7 = *puVar12;
          *puVar12 = uVar15;
          puVar11 = puVar7;
          FUN_1096a0cf0(puVar7,puVar13);
          if ((int)puVar11 != 0) {
            uVar15 = *puVar13;
            *puVar13 = *puVar7;
            *puVar7 = uVar15;
            puVar11 = puVar13;
            FUN_1096a0cf0(puVar13,puVar6);
            if ((int)puVar11 != 0) {
              uVar15 = *puVar6;
              *puVar6 = *puVar13;
              *puVar13 = uVar15;
            }
          }
        }
        return;
      }
      puVar11 = puVar6 + 1;
      FUN_1096a0cf0(puVar11,puVar6);
      puVar12 = puVar14;
      FUN_1096a0cf0(puVar14,puVar6 + 1);
      if (((ulong)puVar11 & 1) == 0) {
        if ((int)puVar12 == 0) {
          return;
        }
        uVar15 = puVar6[1];
        puVar6[1] = *puVar14;
        *puVar14 = uVar15;
        puVar11 = puVar6 + 1;
        FUN_1096a0cf0(puVar11,puVar6);
        if ((int)puVar11 == 0) {
          return;
        }
        uVar15 = *puVar6;
        *puVar6 = puVar6[1];
        puVar6[1] = uVar15;
        return;
      }
      uVar15 = *puVar6;
      if ((int)puVar12 == 0) {
        *puVar6 = puVar6[1];
        puVar6[1] = uVar15;
        puVar11 = puVar14;
        FUN_1096a0cf0(puVar14,puVar6 + 1);
        if ((int)puVar11 == 0) {
          return;
        }
        uVar15 = puVar6[1];
        puVar6[1] = *puVar14;
        goto LAB_1096a0968;
      }
LAB_1096a0960:
      *puVar6 = *puVar14;
LAB_1096a0968:
      *puVar14 = uVar15;
      return;
    }
    if (uVar20 < 2) {
      return;
    }
    if (uVar20 == 2) {
      puVar11 = puVar14;
      FUN_1096a0cf0(puVar14,puVar6);
      if ((int)puVar11 == 0) {
        return;
      }
      uVar15 = *puVar6;
      goto LAB_1096a0960;
    }
LAB_1096a0360:
    if ((long)uVar20 < 0x18) {
      puVar11 = puVar6 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar6 == param_2 || puVar11 == param_2) {
          return;
        }
        puVar12 = puVar6 + -1;
        do {
          puVar14 = puVar11;
          puVar11 = puVar14;
          FUN_1096a0cf0(puVar14,puVar6);
          if ((int)puVar11 != 0) {
            uStack_98 = *puVar14;
            puVar6 = puVar12;
            do {
              puVar13 = puVar6;
              puVar13[2] = puVar13[1];
              puVar11 = &uStack_98;
              FUN_1096a0cf0(puVar11,puVar13);
              puVar6 = puVar13 + -1;
            } while (((ulong)puVar11 & 1) != 0);
            puVar13[1] = uStack_98;
          }
          puVar12 = puVar12 + 1;
          puVar11 = puVar14 + 1;
          puVar6 = puVar14;
        } while (puVar14 + 1 != param_2);
        return;
      }
      if (puVar6 == param_2 || puVar11 == param_2) {
        return;
      }
      lVar21 = 0;
      puVar12 = puVar6;
      break;
    }
    if (param_3 == 0) {
      if (puVar6 == param_2) {
        return;
      }
      uVar18 = uVar20 - 2 >> 1;
      uVar16 = uVar18;
      goto LAB_1096a0a40;
    }
    puVar12 = puVar6 + (uVar20 >> 1);
    if (uVar20 < 0x81) {
      puVar7 = puVar6;
      FUN_1096a0cf0(puVar6,puVar12);
      puVar8 = puVar14;
      FUN_1096a0cf0(puVar14,puVar6);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar8 != 0) {
          uVar15 = *puVar6;
          *puVar6 = *puVar14;
          *puVar14 = uVar15;
          puVar7 = puVar6;
          FUN_1096a0cf0(puVar6,puVar12);
          if ((int)puVar7 != 0) {
            uVar15 = *puVar12;
            *puVar12 = *puVar6;
            *puVar6 = uVar15;
          }
        }
      }
      else {
        uVar15 = *puVar12;
        if ((int)puVar8 == 0) {
          *puVar12 = *puVar6;
          *puVar6 = uVar15;
          puVar12 = puVar14;
          FUN_1096a0cf0(puVar14,puVar6);
          if ((int)puVar12 == 0) goto LAB_1096a0680;
          uVar15 = *puVar6;
          *puVar6 = *puVar14;
        }
        else {
          *puVar12 = *puVar14;
        }
        *puVar14 = uVar15;
      }
    }
    else {
      puVar7 = puVar12;
      FUN_1096a0cf0(puVar12,puVar6);
      puVar8 = puVar14;
      FUN_1096a0cf0(puVar14,puVar12);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar8 != 0) {
          uVar15 = *puVar12;
          *puVar12 = *puVar14;
          *puVar14 = uVar15;
          puVar7 = puVar12;
          FUN_1096a0cf0(puVar12,puVar6);
          if ((int)puVar7 != 0) {
            uVar15 = *puVar6;
            *puVar6 = *puVar12;
            *puVar12 = uVar15;
          }
        }
      }
      else {
        uVar15 = *puVar6;
        if ((int)puVar8 == 0) {
          *puVar6 = *puVar12;
          *puVar12 = uVar15;
          puVar7 = puVar14;
          FUN_1096a0cf0(puVar14,puVar12);
          if ((int)puVar7 == 0) goto LAB_1096a0480;
          uVar15 = *puVar12;
          *puVar12 = *puVar14;
        }
        else {
          *puVar6 = *puVar14;
        }
        *puVar14 = uVar15;
      }
LAB_1096a0480:
      puVar10 = puVar12 + -1;
      puVar7 = puVar10;
      FUN_1096a0cf0(puVar10,puVar6 + 1);
      puVar8 = puStack_a0;
      FUN_1096a0cf0(puStack_a0,puVar10);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar8 != 0) {
          uVar15 = *puVar10;
          *puVar10 = *puStack_a0;
          *puStack_a0 = uVar15;
          puVar7 = puVar10;
          FUN_1096a0cf0(puVar10,puVar6 + 1);
          if ((int)puVar7 != 0) {
            uVar15 = puVar6[1];
            puVar6[1] = *puVar10;
            *puVar10 = uVar15;
          }
        }
      }
      else {
        uVar15 = puVar6[1];
        if ((int)puVar8 == 0) {
          puVar6[1] = *puVar10;
          *puVar10 = uVar15;
          puVar7 = puStack_a0;
          FUN_1096a0cf0(puStack_a0,puVar10);
          if ((int)puVar7 == 0) goto LAB_1096a0558;
          uVar15 = *puVar10;
          *puVar10 = *puStack_a0;
        }
        else {
          puVar6[1] = *puStack_a0;
        }
        *puStack_a0 = uVar15;
      }
LAB_1096a0558:
      puVar7 = puVar12 + 1;
      FUN_1096a0cf0(puVar7,puVar6 + 2);
      puVar8 = puVar13;
      FUN_1096a0cf0(puVar13,puVar12 + 1);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar8 != 0) {
          uVar15 = puVar12[1];
          puVar12[1] = *puVar13;
          *puVar13 = uVar15;
          puVar7 = puVar12 + 1;
          FUN_1096a0cf0(puVar7,puVar6 + 2);
          if ((int)puVar7 != 0) {
            uVar15 = puVar6[2];
            puVar6[2] = puVar12[1];
            puVar12[1] = uVar15;
          }
        }
      }
      else {
        uVar15 = puVar6[2];
        if ((int)puVar8 == 0) {
          puVar6[2] = puVar12[1];
          puVar12[1] = uVar15;
          puVar7 = puVar13;
          FUN_1096a0cf0(puVar13,puVar12 + 1);
          if ((int)puVar7 == 0) goto LAB_1096a05f0;
          uVar15 = puVar12[1];
          puVar12[1] = *puVar13;
        }
        else {
          puVar6[2] = *puVar13;
        }
        *puVar13 = uVar15;
      }
LAB_1096a05f0:
      puVar8 = puVar12;
      FUN_1096a0cf0(puVar12,puVar10);
      puVar7 = puVar12 + 1;
      FUN_1096a0cf0(puVar7,puVar12);
      if (((ulong)puVar8 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar15 = *puVar12;
          *puVar12 = puVar12[1];
          puVar12[1] = uVar15;
          puVar7 = puVar12;
          FUN_1096a0cf0(puVar12,puVar10);
          if ((int)puVar7 != 0) {
            uVar15 = puVar12[-1];
            puVar12[-1] = *puVar12;
            *puVar12 = uVar15;
          }
        }
      }
      else {
        uVar15 = *puVar10;
        if ((int)puVar7 == 0) {
          puVar12[-1] = *puVar12;
          *puVar12 = uVar15;
          puVar7 = puVar12 + 1;
          FUN_1096a0cf0(puVar7,puVar12);
          if ((int)puVar7 != 0) {
            uVar15 = *puVar12;
            *puVar12 = puVar12[1];
            puVar12[1] = uVar15;
          }
        }
        else {
          *puVar10 = puVar12[1];
          puVar12[1] = uVar15;
        }
      }
      uVar15 = *puVar6;
      *puVar6 = *puVar12;
      *puVar12 = uVar15;
    }
LAB_1096a0680:
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      uStack_98 = *puVar6;
LAB_1096a06a4:
      lVar21 = 0;
      do {
        lVar21 = lVar21 + 8;
        puVar9 = (undefined *)(lVar21 + (long)puVar6);
        FUN_1096a0cf0(puVar9,&uStack_98);
      } while (((ulong)puVar9 & 1) != 0);
      puVar11 = (undefined8 *)((long)puVar6 + lVar21);
      puVar7 = param_2;
      if (lVar21 == 8) {
        do {
          if (puVar7 <= puVar11) break;
          puVar7 = puVar7 + -1;
          puVar12 = puVar7;
          FUN_1096a0cf0(puVar7,&uStack_98);
        } while (((ulong)puVar12 & 1) == 0);
      }
      else {
        do {
          puVar7 = puVar7 + -1;
          puVar12 = puVar7;
          FUN_1096a0cf0(puVar7,&uStack_98);
        } while ((int)puVar12 == 0);
      }
      puVar12 = puVar11;
      puVar8 = puVar7;
      if (puVar11 < puVar7) {
        do {
          uVar15 = *puVar12;
          *puVar12 = *puVar8;
          *puVar8 = uVar15;
          do {
            puVar12 = puVar12 + 1;
            puVar10 = puVar12;
            FUN_1096a0cf0(puVar12,&uStack_98);
          } while (((ulong)puVar10 & 1) != 0);
          do {
            puVar8 = puVar8 + -1;
            puVar10 = puVar8;
            FUN_1096a0cf0(puVar8,&uStack_98);
          } while ((int)puVar10 == 0);
        } while (puVar12 < puVar8);
      }
      puVar8 = puVar12 + -1;
      if (puVar8 != puVar6) {
        *puVar6 = *puVar8;
      }
      *puVar8 = uStack_98;
      if (puVar7 <= puVar11) {
        puVar7 = puVar6;
        func_0x0001096a0fa8(puVar6,puVar8);
        puVar10 = puVar12;
        func_0x0001096a0fa8(puVar12,param_2);
        if ((int)puVar10 != 0) goto LAB_1096a08ac;
        if (((ulong)puVar7 & 1) != 0) goto LAB_1096a0324;
      }
      FUN_1096a02e0(puVar6,puVar8,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_1096a0324;
    }
    puVar12 = puVar6 + -1;
    FUN_1096a0cf0(puVar12,puVar6);
    uStack_98 = *puVar6;
    if (((ulong)puVar12 & 1) != 0) goto LAB_1096a06a4;
    puVar7 = &uStack_98;
    FUN_1096a0cf0(puVar7,puVar14);
    puVar12 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      do {
        puVar12 = puVar12 + 1;
        if (param_2 <= puVar12) break;
        puVar7 = &uStack_98;
        FUN_1096a0cf0(puVar7,puVar12);
      } while ((int)puVar7 == 0);
    }
    else {
      do {
        puVar12 = puVar12 + 1;
        puVar7 = &uStack_98;
        FUN_1096a0cf0(puVar7,puVar12);
      } while (((ulong)puVar7 & 1) == 0);
    }
    puVar7 = param_2;
    if (puVar12 < param_2) {
      do {
        puVar7 = puVar7 + -1;
        puVar8 = &uStack_98;
        FUN_1096a0cf0(puVar8,puVar7);
      } while (((ulong)puVar8 & 1) != 0);
    }
    while (puVar12 < puVar7) {
      uVar15 = *puVar12;
      *puVar12 = *puVar7;
      *puVar7 = uVar15;
      do {
        puVar12 = puVar12 + 1;
        puVar8 = &uStack_98;
        FUN_1096a0cf0(puVar8,puVar12);
      } while ((int)puVar8 == 0);
      do {
        puVar7 = puVar7 + -1;
        puVar8 = &uStack_98;
        FUN_1096a0cf0(puVar8,puVar7);
      } while (((ulong)puVar8 & 1) != 0);
    }
    puVar7 = puVar12 + -1;
    if (puVar7 != puVar6) {
      *puVar6 = *puVar7;
    }
    param_4 = 0;
    *puVar7 = uStack_98;
  } while( true );
LAB_1096a09c0:
  puVar14 = puVar11;
  puVar11 = puVar14;
  FUN_1096a0cf0(puVar14,puVar12);
  if ((int)puVar11 != 0) {
    uStack_98 = *puVar14;
    lVar4 = lVar21;
    do {
      lVar17 = lVar4;
      ((undefined8 *)((long)puVar6 + lVar17))[1] = *(undefined8 *)((long)puVar6 + lVar17);
      puVar11 = puVar6;
      if (lVar17 == 0) goto LAB_1096a0a14;
      puVar11 = &uStack_98;
      FUN_1096a0cf0(puVar11,(undefined *)(lVar17 + -8 + (long)puVar6));
      lVar4 = lVar17 + -8;
    } while (((ulong)puVar11 & 1) != 0);
    puVar11 = (undefined8 *)((long)puVar6 + lVar17);
LAB_1096a0a14:
    *puVar11 = uStack_98;
  }
  lVar21 = lVar21 + 8;
  puVar11 = puVar14 + 1;
  puVar12 = puVar14;
  if (puVar14 + 1 == param_2) {
    return;
  }
  goto LAB_1096a09c0;
LAB_1096a0a40:
  do {
    if ((long)uVar16 <= (long)uVar18) {
      uVar2 = uVar16 << 1 | 1;
      puVar11 = puVar6 + uVar2;
      uVar1 = uVar16 * 2 + 2;
      puVar12 = puVar11;
      uVar19 = uVar2;
      if ((long)uVar1 < (long)uVar20) {
        puVar14 = puVar11;
        FUN_1096a0cf0(puVar11,puVar11 + 1);
        puVar12 = puVar11 + 1;
        uVar19 = uVar1;
        if ((int)puVar14 == 0) {
          puVar12 = puVar11;
          uVar19 = uVar2;
        }
      }
      puVar11 = puVar6 + uVar16;
      puVar14 = puVar12;
      FUN_1096a0cf0(puVar12,puVar11);
      if (((ulong)puVar14 & 1) == 0) {
        uStack_98 = *puVar11;
        do {
          puVar14 = puVar12;
          *puVar11 = *puVar14;
          if ((long)uVar18 < (long)uVar19) break;
          uVar2 = uVar19 << 1 | 1;
          puVar11 = puVar6 + uVar2;
          uVar1 = uVar19 * 2 + 2;
          puVar12 = puVar11;
          uVar19 = uVar2;
          if ((long)uVar1 < (long)uVar20) {
            puVar13 = puVar11;
            FUN_1096a0cf0(puVar11,puVar11 + 1);
            puVar12 = puVar11 + 1;
            uVar19 = uVar1;
            if ((int)puVar13 == 0) {
              puVar12 = puVar11;
              uVar19 = uVar2;
            }
          }
          puVar13 = puVar12;
          FUN_1096a0cf0(puVar12,&uStack_98);
          puVar11 = puVar14;
        } while ((int)puVar13 == 0);
        *puVar14 = uStack_98;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  do {
    uVar16 = 0;
    uVar15 = *puVar6;
    puVar11 = puVar6;
    do {
      puVar12 = puVar11 + uVar16 + 1;
      uVar1 = uVar16 << 1 | 1;
      uVar18 = uVar16 * 2 + 2;
      puVar14 = puVar12;
      uVar2 = uVar1;
      if ((long)uVar18 < (long)uVar20) {
        puVar13 = puVar12;
        FUN_1096a0cf0(puVar12,puVar11 + uVar16 + 2);
        puVar14 = puVar11 + uVar16 + 2;
        uVar2 = uVar18;
        if ((int)puVar13 == 0) {
          puVar14 = puVar12;
          uVar2 = uVar1;
        }
      }
      uVar16 = uVar2;
      *puVar11 = *puVar14;
      puVar11 = puVar14;
    } while ((long)uVar16 <= (long)(uVar20 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar14 == param_2) {
      *puVar14 = uVar15;
    }
    else {
      *puVar14 = *param_2;
      *param_2 = uVar15;
      lVar21 = (long)((long)puVar14 + (8 - (long)puVar6)) >> 3;
      if (1 < lVar21) {
        uVar16 = lVar21 - 2U >> 1;
        puVar11 = puVar6 + uVar16;
        puVar12 = puVar11;
        FUN_1096a0cf0(puVar11,puVar14);
        if ((int)puVar12 != 0) {
          uStack_98 = *puVar14;
          do {
            puVar12 = puVar11;
            *puVar14 = *puVar12;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            puVar11 = puVar6 + uVar16;
            puVar13 = puVar11;
            FUN_1096a0cf0(puVar11,&uStack_98);
            puVar14 = puVar12;
          } while (((ulong)puVar13 & 1) != 0);
          *puVar12 = uStack_98;
        }
      }
    }
    bVar3 = (long)uVar20 < 3;
    uVar20 = uVar20 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_1096a08ac:
  param_2 = puVar8;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_1096a0310;
}



/* Entry: 1096a02ac; end: 1096a02df;  */

/* WARNING: Possible PIC construction at 0x0001096a08c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096a08cc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08dc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08fc) */
/* WARNING: Removing unreachable block (ram,0x0001096a0914) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1096a02ac(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar15;
  ulong uVar16;
  undefined8 *unaff_x24;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *******pppppppuVar20;
  code *pcVar21;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 *******pppppppuStack_30;
  code *pcStack_28;
  
  ppuVar5 = (undefined8 **)&stack0xffffffffffffffe0;
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  pcStack_28 = FUN_1096a02e0;
  puVar9 = unaff_x23;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
LAB_1096a0310:
  puVar12 = param_2 + -1;
  puStack_90 = param_2 + -2;
  puVar11 = param_2 + -3;
  puVar10 = param_1;
LAB_1096a0324:
  do {
    param_1 = puVar10;
    uVar18 = (long)param_2 - (long)param_1 >> 3;
    if (uVar18 - 2 != 0 && 1 < (long)uVar18) {
      if (uVar18 != 3) {
        puVar10 = puVar12;
        pppppppuVar20 = pppppppuStack_30;
        pcVar21 = pcStack_28;
        if (uVar18 != 4) {
          if (uVar18 != 5) goto LAB_1096a0360;
          ppuVar5 = &puStack_90;
          puVar10 = param_1 + 3;
          unaff_x19 = param_1;
          unaff_x20 = param_2;
          unaff_x21 = puVar12;
          unaff_x22 = param_3;
          unaff_x23 = puVar9;
          unaff_x24 = puVar11;
          pppppppuVar20 = &pppppppuStack_30;
          pcVar21 = (code *)0x1096a08cc;
        }
        puVar6 = param_1 + 2;
        puVar11 = param_1 + 1;
        *(undefined8 **)((long)ppuVar5 + -0x40) = unaff_x24;
        *(undefined8 **)((long)ppuVar5 + -0x38) = unaff_x23;
        *(long *)((long)ppuVar5 + -0x30) = unaff_x22;
        *(undefined8 **)((long)ppuVar5 + -0x28) = unaff_x21;
        *(undefined8 **)((long)ppuVar5 + -0x20) = unaff_x20;
        *(undefined8 **)((long)ppuVar5 + -0x18) = unaff_x19;
        *(undefined8 ********)((long)ppuVar5 + -0x10) = pppppppuVar20;
        *(code **)((long)ppuVar5 + -8) = pcVar21;
        puVar9 = puVar11;
        FUN_1096a0cf0(puVar11,param_1);
        puVar12 = puVar6;
        FUN_1096a0cf0(puVar6,puVar11);
        if (((ulong)puVar9 & 1) == 0) {
          if ((int)puVar12 != 0) {
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar13;
            puVar9 = puVar11;
            FUN_1096a0cf0(puVar11,param_1);
            if ((int)puVar9 != 0) {
              uVar13 = *param_1;
              *param_1 = *puVar11;
              *puVar11 = uVar13;
            }
          }
        }
        else {
          uVar13 = *param_1;
          if ((int)puVar12 == 0) {
            *param_1 = *puVar11;
            *puVar11 = uVar13;
            puVar9 = puVar6;
            FUN_1096a0cf0(puVar6,puVar11);
            if ((int)puVar9 == 0) goto LAB_1096a0f34;
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
          }
          else {
            *param_1 = *puVar6;
          }
          *puVar6 = uVar13;
        }
LAB_1096a0f34:
        puVar9 = puVar10;
        FUN_1096a0cf0(puVar10,puVar6);
        if ((int)puVar9 != 0) {
          uVar13 = *puVar6;
          *puVar6 = *puVar10;
          *puVar10 = uVar13;
          puVar9 = puVar6;
          FUN_1096a0cf0(puVar6,puVar11);
          if ((int)puVar9 != 0) {
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar13;
            puVar9 = puVar11;
            FUN_1096a0cf0(puVar11,param_1);
            if ((int)puVar9 != 0) {
              uVar13 = *param_1;
              *param_1 = *puVar11;
              *puVar11 = uVar13;
            }
          }
        }
        return;
      }
      puVar9 = param_1 + 1;
      FUN_1096a0cf0(puVar9,param_1);
      puVar10 = puVar12;
      FUN_1096a0cf0(puVar12,param_1 + 1);
      if (((ulong)puVar9 & 1) == 0) {
        if ((int)puVar10 == 0) {
          return;
        }
        uVar13 = param_1[1];
        param_1[1] = *puVar12;
        *puVar12 = uVar13;
        puVar9 = param_1 + 1;
        FUN_1096a0cf0(puVar9,param_1);
        if ((int)puVar9 == 0) {
          return;
        }
        uVar13 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar13;
        return;
      }
      uVar13 = *param_1;
      if ((int)puVar10 == 0) {
        *param_1 = param_1[1];
        param_1[1] = uVar13;
        puVar9 = puVar12;
        FUN_1096a0cf0(puVar12,param_1 + 1);
        if ((int)puVar9 == 0) {
          return;
        }
        uVar13 = param_1[1];
        param_1[1] = *puVar12;
        goto LAB_1096a0968;
      }
LAB_1096a0960:
      *param_1 = *puVar12;
LAB_1096a0968:
      *puVar12 = uVar13;
      return;
    }
    if (uVar18 < 2) {
      return;
    }
    if (uVar18 == 2) {
      puVar9 = puVar12;
      FUN_1096a0cf0(puVar12,param_1);
      if ((int)puVar9 == 0) {
        return;
      }
      uVar13 = *param_1;
      goto LAB_1096a0960;
    }
LAB_1096a0360:
    if ((long)uVar18 < 0x18) {
      puVar9 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar9 == param_2) {
          return;
        }
        puVar10 = param_1 + -1;
        do {
          puVar12 = puVar9;
          puVar9 = puVar12;
          FUN_1096a0cf0(puVar12,param_1);
          if ((int)puVar9 != 0) {
            uStack_88 = *puVar12;
            puVar9 = puVar10;
            do {
              puVar6 = puVar9;
              puVar6[2] = puVar6[1];
              puVar11 = &uStack_88;
              FUN_1096a0cf0(puVar11,puVar6);
              puVar9 = puVar6 + -1;
            } while (((ulong)puVar11 & 1) != 0);
            puVar6[1] = uStack_88;
          }
          puVar10 = puVar10 + 1;
          puVar9 = puVar12 + 1;
          param_1 = puVar12;
        } while (puVar12 + 1 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar9 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar10 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar18 - 2 >> 1;
      uVar14 = uVar16;
      goto LAB_1096a0a40;
    }
    puVar10 = param_1 + (uVar18 >> 1);
    if (uVar18 < 0x81) {
      puVar6 = param_1;
      FUN_1096a0cf0(param_1,puVar10);
      puVar7 = puVar12;
      FUN_1096a0cf0(puVar12,param_1);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *param_1;
          *param_1 = *puVar12;
          *puVar12 = uVar13;
          puVar6 = param_1;
          FUN_1096a0cf0(param_1,puVar10);
          if ((int)puVar6 != 0) {
            uVar13 = *puVar10;
            *puVar10 = *param_1;
            *param_1 = uVar13;
          }
        }
      }
      else {
        uVar13 = *puVar10;
        if ((int)puVar7 == 0) {
          *puVar10 = *param_1;
          *param_1 = uVar13;
          puVar10 = puVar12;
          FUN_1096a0cf0(puVar12,param_1);
          if ((int)puVar10 == 0) goto LAB_1096a0680;
          uVar13 = *param_1;
          *param_1 = *puVar12;
        }
        else {
          *puVar10 = *puVar12;
        }
        *puVar12 = uVar13;
      }
    }
    else {
      puVar6 = puVar10;
      FUN_1096a0cf0(puVar10,param_1);
      puVar7 = puVar12;
      FUN_1096a0cf0(puVar12,puVar10);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar13;
          puVar6 = puVar10;
          FUN_1096a0cf0(puVar10,param_1);
          if ((int)puVar6 != 0) {
            uVar13 = *param_1;
            *param_1 = *puVar10;
            *puVar10 = uVar13;
          }
        }
      }
      else {
        uVar13 = *param_1;
        if ((int)puVar7 == 0) {
          *param_1 = *puVar10;
          *puVar10 = uVar13;
          puVar6 = puVar12;
          FUN_1096a0cf0(puVar12,puVar10);
          if ((int)puVar6 == 0) goto LAB_1096a0480;
          uVar13 = *puVar10;
          *puVar10 = *puVar12;
        }
        else {
          *param_1 = *puVar12;
        }
        *puVar12 = uVar13;
      }
LAB_1096a0480:
      puVar8 = puVar10 + -1;
      puVar6 = puVar8;
      FUN_1096a0cf0(puVar8,param_1 + 1);
      puVar7 = puStack_90;
      FUN_1096a0cf0(puStack_90,puVar8);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *puVar8;
          *puVar8 = *puStack_90;
          *puStack_90 = uVar13;
          puVar6 = puVar8;
          FUN_1096a0cf0(puVar8,param_1 + 1);
          if ((int)puVar6 != 0) {
            uVar13 = param_1[1];
            param_1[1] = *puVar8;
            *puVar8 = uVar13;
          }
        }
      }
      else {
        uVar13 = param_1[1];
        if ((int)puVar7 == 0) {
          param_1[1] = *puVar8;
          *puVar8 = uVar13;
          puVar6 = puStack_90;
          FUN_1096a0cf0(puStack_90,puVar8);
          if ((int)puVar6 == 0) goto LAB_1096a0558;
          uVar13 = *puVar8;
          *puVar8 = *puStack_90;
        }
        else {
          param_1[1] = *puStack_90;
        }
        *puStack_90 = uVar13;
      }
LAB_1096a0558:
      puVar6 = puVar10 + 1;
      FUN_1096a0cf0(puVar6,param_1 + 2);
      puVar7 = puVar11;
      FUN_1096a0cf0(puVar11,puVar10 + 1);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = puVar10[1];
          puVar10[1] = *puVar11;
          *puVar11 = uVar13;
          puVar6 = puVar10 + 1;
          FUN_1096a0cf0(puVar6,param_1 + 2);
          if ((int)puVar6 != 0) {
            uVar13 = param_1[2];
            param_1[2] = puVar10[1];
            puVar10[1] = uVar13;
          }
        }
      }
      else {
        uVar13 = param_1[2];
        if ((int)puVar7 == 0) {
          param_1[2] = puVar10[1];
          puVar10[1] = uVar13;
          puVar6 = puVar11;
          FUN_1096a0cf0(puVar11,puVar10 + 1);
          if ((int)puVar6 == 0) goto LAB_1096a05f0;
          uVar13 = puVar10[1];
          puVar10[1] = *puVar11;
        }
        else {
          param_1[2] = *puVar11;
        }
        *puVar11 = uVar13;
      }
LAB_1096a05f0:
      puVar7 = puVar10;
      FUN_1096a0cf0(puVar10,puVar8);
      puVar6 = puVar10 + 1;
      FUN_1096a0cf0(puVar6,puVar10);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uVar13 = *puVar10;
          *puVar10 = puVar10[1];
          puVar10[1] = uVar13;
          puVar6 = puVar10;
          FUN_1096a0cf0(puVar10,puVar8);
          if ((int)puVar6 != 0) {
            uVar13 = puVar10[-1];
            puVar10[-1] = *puVar10;
            *puVar10 = uVar13;
          }
        }
      }
      else {
        uVar13 = *puVar8;
        if ((int)puVar6 == 0) {
          puVar10[-1] = *puVar10;
          *puVar10 = uVar13;
          puVar6 = puVar10 + 1;
          FUN_1096a0cf0(puVar6,puVar10);
          if ((int)puVar6 != 0) {
            uVar13 = *puVar10;
            *puVar10 = puVar10[1];
            puVar10[1] = uVar13;
          }
        }
        else {
          *puVar8 = puVar10[1];
          puVar10[1] = uVar13;
        }
      }
      uVar13 = *param_1;
      *param_1 = *puVar10;
      *puVar10 = uVar13;
    }
LAB_1096a0680:
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      uStack_88 = *param_1;
LAB_1096a06a4:
      lVar19 = 0;
      do {
        lVar19 = lVar19 + 8;
        uVar18 = lVar19 + (long)param_1;
        FUN_1096a0cf0(uVar18,&uStack_88);
      } while ((uVar18 & 1) != 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar19);
      puVar6 = param_2;
      if (lVar19 == 8) {
        do {
          if (puVar6 <= puVar9) break;
          puVar6 = puVar6 + -1;
          puVar10 = puVar6;
          FUN_1096a0cf0(puVar6,&uStack_88);
        } while (((ulong)puVar10 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar6 + -1;
          puVar10 = puVar6;
          FUN_1096a0cf0(puVar6,&uStack_88);
        } while ((int)puVar10 == 0);
      }
      puVar10 = puVar9;
      puVar7 = puVar6;
      if (puVar9 < puVar6) {
        do {
          uVar13 = *puVar10;
          *puVar10 = *puVar7;
          *puVar7 = uVar13;
          do {
            puVar10 = puVar10 + 1;
            puVar8 = puVar10;
            FUN_1096a0cf0(puVar10,&uStack_88);
          } while (((ulong)puVar8 & 1) != 0);
          do {
            puVar7 = puVar7 + -1;
            puVar8 = puVar7;
            FUN_1096a0cf0(puVar7,&uStack_88);
          } while ((int)puVar8 == 0);
        } while (puVar10 < puVar7);
      }
      puVar7 = puVar10 + -1;
      if (puVar7 != param_1) {
        *param_1 = *puVar7;
      }
      *puVar7 = uStack_88;
      if (puVar6 <= puVar9) {
        puVar6 = param_1;
        func_0x0001096a0fa8(param_1,puVar7);
        puVar8 = puVar10;
        func_0x0001096a0fa8(puVar10,param_2);
        if ((int)puVar8 != 0) goto LAB_1096a08ac;
        if (((ulong)puVar6 & 1) != 0) goto LAB_1096a0324;
      }
      FUN_1096a02e0(param_1,puVar7,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_1096a0324;
    }
    puVar10 = param_1 + -1;
    FUN_1096a0cf0(puVar10,param_1);
    uStack_88 = *param_1;
    if (((ulong)puVar10 & 1) != 0) goto LAB_1096a06a4;
    puVar6 = &uStack_88;
    FUN_1096a0cf0(puVar6,puVar12);
    puVar10 = param_1;
    if (((ulong)puVar6 & 1) == 0) {
      do {
        puVar10 = puVar10 + 1;
        if (param_2 <= puVar10) break;
        puVar6 = &uStack_88;
        FUN_1096a0cf0(puVar6,puVar10);
      } while ((int)puVar6 == 0);
    }
    else {
      do {
        puVar10 = puVar10 + 1;
        puVar6 = &uStack_88;
        FUN_1096a0cf0(puVar6,puVar10);
      } while (((ulong)puVar6 & 1) == 0);
    }
    puVar6 = param_2;
    if (puVar10 < param_2) {
      do {
        puVar6 = puVar6 + -1;
        puVar7 = &uStack_88;
        FUN_1096a0cf0(puVar7,puVar6);
      } while (((ulong)puVar7 & 1) != 0);
    }
    while (puVar10 < puVar6) {
      uVar13 = *puVar10;
      *puVar10 = *puVar6;
      *puVar6 = uVar13;
      do {
        puVar10 = puVar10 + 1;
        puVar7 = &uStack_88;
        FUN_1096a0cf0(puVar7,puVar10);
      } while ((int)puVar7 == 0);
      do {
        puVar6 = puVar6 + -1;
        puVar7 = &uStack_88;
        FUN_1096a0cf0(puVar7,puVar6);
      } while (((ulong)puVar7 & 1) != 0);
    }
    puVar6 = puVar10 + -1;
    if (puVar6 != param_1) {
      *param_1 = *puVar6;
    }
    param_4 = 0;
    *puVar6 = uStack_88;
  } while( true );
LAB_1096a09c0:
  puVar12 = puVar9;
  puVar9 = puVar12;
  FUN_1096a0cf0(puVar12,puVar10);
  if ((int)puVar9 != 0) {
    uStack_88 = *puVar12;
    lVar4 = lVar19;
    do {
      lVar15 = lVar4;
      ((undefined8 *)((long)param_1 + lVar15))[1] = *(undefined8 *)((long)param_1 + lVar15);
      puVar9 = param_1;
      if (lVar15 == 0) goto LAB_1096a0a14;
      puVar9 = &uStack_88;
      FUN_1096a0cf0(puVar9,lVar15 + -8 + (long)param_1);
      lVar4 = lVar15 + -8;
    } while (((ulong)puVar9 & 1) != 0);
    puVar9 = (undefined8 *)((long)param_1 + lVar15);
LAB_1096a0a14:
    *puVar9 = uStack_88;
  }
  lVar19 = lVar19 + 8;
  puVar9 = puVar12 + 1;
  puVar10 = puVar12;
  if (puVar12 + 1 == param_2) {
    return;
  }
  goto LAB_1096a09c0;
LAB_1096a0a40:
  do {
    if ((long)uVar14 <= (long)uVar16) {
      uVar2 = uVar14 << 1 | 1;
      puVar9 = param_1 + uVar2;
      uVar1 = uVar14 * 2 + 2;
      puVar10 = puVar9;
      uVar17 = uVar2;
      if ((long)uVar1 < (long)uVar18) {
        puVar12 = puVar9;
        FUN_1096a0cf0(puVar9,puVar9 + 1);
        puVar10 = puVar9 + 1;
        uVar17 = uVar1;
        if ((int)puVar12 == 0) {
          puVar10 = puVar9;
          uVar17 = uVar2;
        }
      }
      puVar9 = param_1 + uVar14;
      puVar12 = puVar10;
      FUN_1096a0cf0(puVar10,puVar9);
      if (((ulong)puVar12 & 1) == 0) {
        uStack_88 = *puVar9;
        do {
          puVar12 = puVar10;
          *puVar9 = *puVar12;
          if ((long)uVar16 < (long)uVar17) break;
          uVar2 = uVar17 << 1 | 1;
          puVar9 = param_1 + uVar2;
          uVar1 = uVar17 * 2 + 2;
          puVar10 = puVar9;
          uVar17 = uVar2;
          if ((long)uVar1 < (long)uVar18) {
            puVar11 = puVar9;
            FUN_1096a0cf0(puVar9,puVar9 + 1);
            puVar10 = puVar9 + 1;
            uVar17 = uVar1;
            if ((int)puVar11 == 0) {
              puVar10 = puVar9;
              uVar17 = uVar2;
            }
          }
          puVar11 = puVar10;
          FUN_1096a0cf0(puVar10,&uStack_88);
          puVar9 = puVar12;
        } while ((int)puVar11 == 0);
        *puVar12 = uStack_88;
      }
    }
    bVar3 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar3);
  do {
    uVar14 = 0;
    uVar13 = *param_1;
    puVar9 = param_1;
    do {
      puVar10 = puVar9 + uVar14 + 1;
      uVar1 = uVar14 << 1 | 1;
      uVar16 = uVar14 * 2 + 2;
      puVar12 = puVar10;
      uVar2 = uVar1;
      if ((long)uVar16 < (long)uVar18) {
        puVar11 = puVar10;
        FUN_1096a0cf0(puVar10,puVar9 + uVar14 + 2);
        puVar12 = puVar9 + uVar14 + 2;
        uVar2 = uVar16;
        if ((int)puVar11 == 0) {
          puVar12 = puVar10;
          uVar2 = uVar1;
        }
      }
      uVar14 = uVar2;
      *puVar9 = *puVar12;
      puVar9 = puVar12;
    } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar12 == param_2) {
      *puVar12 = uVar13;
    }
    else {
      *puVar12 = *param_2;
      *param_2 = uVar13;
      lVar19 = (long)puVar12 + (8 - (long)param_1) >> 3;
      if (1 < lVar19) {
        uVar14 = lVar19 - 2U >> 1;
        puVar9 = param_1 + uVar14;
        puVar10 = puVar9;
        FUN_1096a0cf0(puVar9,puVar12);
        if ((int)puVar10 != 0) {
          uStack_88 = *puVar12;
          do {
            puVar10 = puVar9;
            *puVar12 = *puVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar9 = param_1 + uVar14;
            puVar11 = puVar9;
            FUN_1096a0cf0(puVar9,&uStack_88);
            puVar12 = puVar10;
          } while (((ulong)puVar11 & 1) != 0);
          *puVar10 = uStack_88;
        }
      }
    }
    bVar3 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_1096a08ac:
  param_2 = puVar7;
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  goto LAB_1096a0310;
}



/* Entry: 1096a02e0; end: 1096a0cef;  */

/* WARNING: Possible PIC construction at 0x0001096a08c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001096a08cc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08dc) */
/* WARNING: Removing unreachable block (ram,0x0001096a08fc) */
/* WARNING: Removing unreachable block (ram,0x0001096a0914) */

void FUN_1096a02e0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar15;
  ulong uVar16;
  undefined8 *unaff_x24;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar9 = unaff_x23;
LAB_1096a0310:
  puVar12 = param_2 + -1;
  puStack_70 = param_2 + -2;
  puVar11 = param_2 + -3;
  puVar10 = param_1;
LAB_1096a0324:
  do {
    param_1 = puVar10;
    uVar18 = (long)param_2 - (long)param_1 >> 3;
    if (uVar18 - 2 != 0 && 1 < (long)uVar18) {
      if (uVar18 != 3) {
        puVar10 = puVar12;
        if (uVar18 != 4) {
          if (uVar18 != 5) goto LAB_1096a0360;
          unaff_x30 = 0x1096a08cc;
          register0x00000008 = (BADSPACEBASE *)&puStack_70;
          puVar10 = param_1 + 3;
          unaff_x19 = param_1;
          unaff_x20 = param_2;
          unaff_x21 = puVar12;
          unaff_x22 = param_3;
          unaff_x23 = puVar9;
          unaff_x24 = puVar11;
          unaff_x29 = puVar1;
        }
        puVar6 = param_1 + 2;
        puVar11 = param_1 + 1;
        *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        puVar9 = puVar11;
        FUN_1096a0cf0(puVar11,param_1);
        puVar12 = puVar6;
        FUN_1096a0cf0(puVar6,puVar11);
        if (((ulong)puVar9 & 1) == 0) {
          if ((int)puVar12 != 0) {
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar13;
            puVar9 = puVar11;
            FUN_1096a0cf0(puVar11,param_1);
            if ((int)puVar9 != 0) {
              uVar13 = *param_1;
              *param_1 = *puVar11;
              *puVar11 = uVar13;
            }
          }
        }
        else {
          uVar13 = *param_1;
          if ((int)puVar12 == 0) {
            *param_1 = *puVar11;
            *puVar11 = uVar13;
            puVar9 = puVar6;
            FUN_1096a0cf0(puVar6,puVar11);
            if ((int)puVar9 == 0) goto LAB_1096a0f34;
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
          }
          else {
            *param_1 = *puVar6;
          }
          *puVar6 = uVar13;
        }
LAB_1096a0f34:
        puVar9 = puVar10;
        FUN_1096a0cf0(puVar10,puVar6);
        if ((int)puVar9 != 0) {
          uVar13 = *puVar6;
          *puVar6 = *puVar10;
          *puVar10 = uVar13;
          puVar9 = puVar6;
          FUN_1096a0cf0(puVar6,puVar11);
          if ((int)puVar9 != 0) {
            uVar13 = *puVar11;
            *puVar11 = *puVar6;
            *puVar6 = uVar13;
            puVar9 = puVar11;
            FUN_1096a0cf0(puVar11,param_1);
            if ((int)puVar9 != 0) {
              uVar13 = *param_1;
              *param_1 = *puVar11;
              *puVar11 = uVar13;
            }
          }
        }
        return;
      }
      puVar9 = param_1 + 1;
      FUN_1096a0cf0(puVar9,param_1);
      puVar10 = puVar12;
      FUN_1096a0cf0(puVar12,param_1 + 1);
      if (((ulong)puVar9 & 1) == 0) {
        if ((int)puVar10 == 0) {
          return;
        }
        uVar13 = param_1[1];
        param_1[1] = *puVar12;
        *puVar12 = uVar13;
        puVar9 = param_1 + 1;
        FUN_1096a0cf0(puVar9,param_1);
        if ((int)puVar9 == 0) {
          return;
        }
        uVar13 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar13;
        return;
      }
      uVar13 = *param_1;
      if ((int)puVar10 == 0) {
        *param_1 = param_1[1];
        param_1[1] = uVar13;
        puVar9 = puVar12;
        FUN_1096a0cf0(puVar12,param_1 + 1);
        if ((int)puVar9 == 0) {
          return;
        }
        uVar13 = param_1[1];
        param_1[1] = *puVar12;
        goto LAB_1096a0968;
      }
LAB_1096a0960:
      *param_1 = *puVar12;
LAB_1096a0968:
      *puVar12 = uVar13;
      return;
    }
    if (uVar18 < 2) {
      return;
    }
    if (uVar18 == 2) {
      puVar9 = puVar12;
      FUN_1096a0cf0(puVar12,param_1);
      if ((int)puVar9 == 0) {
        return;
      }
      uVar13 = *param_1;
      goto LAB_1096a0960;
    }
LAB_1096a0360:
    if ((long)uVar18 < 0x18) {
      puVar9 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar9 == param_2) {
          return;
        }
        puVar10 = param_1 + -1;
        do {
          puVar12 = puVar9;
          puVar9 = puVar12;
          FUN_1096a0cf0(puVar12,param_1);
          if ((int)puVar9 != 0) {
            uStack_68 = *puVar12;
            puVar9 = puVar10;
            do {
              puVar6 = puVar9;
              puVar6[2] = puVar6[1];
              puVar11 = &uStack_68;
              FUN_1096a0cf0(puVar11,puVar6);
              puVar9 = puVar6 + -1;
            } while (((ulong)puVar11 & 1) != 0);
            puVar6[1] = uStack_68;
          }
          puVar10 = puVar10 + 1;
          puVar9 = puVar12 + 1;
          param_1 = puVar12;
        } while (puVar12 + 1 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar9 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar10 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar18 - 2 >> 1;
      uVar14 = uVar16;
      goto LAB_1096a0a40;
    }
    puVar10 = param_1 + (uVar18 >> 1);
    if (uVar18 < 0x81) {
      puVar6 = param_1;
      FUN_1096a0cf0(param_1,puVar10);
      puVar7 = puVar12;
      FUN_1096a0cf0(puVar12,param_1);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *param_1;
          *param_1 = *puVar12;
          *puVar12 = uVar13;
          puVar6 = param_1;
          FUN_1096a0cf0(param_1,puVar10);
          if ((int)puVar6 != 0) {
            uVar13 = *puVar10;
            *puVar10 = *param_1;
            *param_1 = uVar13;
          }
        }
      }
      else {
        uVar13 = *puVar10;
        if ((int)puVar7 == 0) {
          *puVar10 = *param_1;
          *param_1 = uVar13;
          puVar10 = puVar12;
          FUN_1096a0cf0(puVar12,param_1);
          if ((int)puVar10 == 0) goto LAB_1096a0680;
          uVar13 = *param_1;
          *param_1 = *puVar12;
        }
        else {
          *puVar10 = *puVar12;
        }
        *puVar12 = uVar13;
      }
    }
    else {
      puVar6 = puVar10;
      FUN_1096a0cf0(puVar10,param_1);
      puVar7 = puVar12;
      FUN_1096a0cf0(puVar12,puVar10);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *puVar10;
          *puVar10 = *puVar12;
          *puVar12 = uVar13;
          puVar6 = puVar10;
          FUN_1096a0cf0(puVar10,param_1);
          if ((int)puVar6 != 0) {
            uVar13 = *param_1;
            *param_1 = *puVar10;
            *puVar10 = uVar13;
          }
        }
      }
      else {
        uVar13 = *param_1;
        if ((int)puVar7 == 0) {
          *param_1 = *puVar10;
          *puVar10 = uVar13;
          puVar6 = puVar12;
          FUN_1096a0cf0(puVar12,puVar10);
          if ((int)puVar6 == 0) goto LAB_1096a0480;
          uVar13 = *puVar10;
          *puVar10 = *puVar12;
        }
        else {
          *param_1 = *puVar12;
        }
        *puVar12 = uVar13;
      }
LAB_1096a0480:
      puVar8 = puVar10 + -1;
      puVar6 = puVar8;
      FUN_1096a0cf0(puVar8,param_1 + 1);
      puVar7 = puStack_70;
      FUN_1096a0cf0(puStack_70,puVar8);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = *puVar8;
          *puVar8 = *puStack_70;
          *puStack_70 = uVar13;
          puVar6 = puVar8;
          FUN_1096a0cf0(puVar8,param_1 + 1);
          if ((int)puVar6 != 0) {
            uVar13 = param_1[1];
            param_1[1] = *puVar8;
            *puVar8 = uVar13;
          }
        }
      }
      else {
        uVar13 = param_1[1];
        if ((int)puVar7 == 0) {
          param_1[1] = *puVar8;
          *puVar8 = uVar13;
          puVar6 = puStack_70;
          FUN_1096a0cf0(puStack_70,puVar8);
          if ((int)puVar6 == 0) goto LAB_1096a0558;
          uVar13 = *puVar8;
          *puVar8 = *puStack_70;
        }
        else {
          param_1[1] = *puStack_70;
        }
        *puStack_70 = uVar13;
      }
LAB_1096a0558:
      puVar6 = puVar10 + 1;
      FUN_1096a0cf0(puVar6,param_1 + 2);
      puVar7 = puVar11;
      FUN_1096a0cf0(puVar11,puVar10 + 1);
      if (((ulong)puVar6 & 1) == 0) {
        if ((int)puVar7 != 0) {
          uVar13 = puVar10[1];
          puVar10[1] = *puVar11;
          *puVar11 = uVar13;
          puVar6 = puVar10 + 1;
          FUN_1096a0cf0(puVar6,param_1 + 2);
          if ((int)puVar6 != 0) {
            uVar13 = param_1[2];
            param_1[2] = puVar10[1];
            puVar10[1] = uVar13;
          }
        }
      }
      else {
        uVar13 = param_1[2];
        if ((int)puVar7 == 0) {
          param_1[2] = puVar10[1];
          puVar10[1] = uVar13;
          puVar6 = puVar11;
          FUN_1096a0cf0(puVar11,puVar10 + 1);
          if ((int)puVar6 == 0) goto LAB_1096a05f0;
          uVar13 = puVar10[1];
          puVar10[1] = *puVar11;
        }
        else {
          param_1[2] = *puVar11;
        }
        *puVar11 = uVar13;
      }
LAB_1096a05f0:
      puVar7 = puVar10;
      FUN_1096a0cf0(puVar10,puVar8);
      puVar6 = puVar10 + 1;
      FUN_1096a0cf0(puVar6,puVar10);
      if (((ulong)puVar7 & 1) == 0) {
        if ((int)puVar6 != 0) {
          uVar13 = *puVar10;
          *puVar10 = puVar10[1];
          puVar10[1] = uVar13;
          puVar6 = puVar10;
          FUN_1096a0cf0(puVar10,puVar8);
          if ((int)puVar6 != 0) {
            uVar13 = puVar10[-1];
            puVar10[-1] = *puVar10;
            *puVar10 = uVar13;
          }
        }
      }
      else {
        uVar13 = *puVar8;
        if ((int)puVar6 == 0) {
          puVar10[-1] = *puVar10;
          *puVar10 = uVar13;
          puVar6 = puVar10 + 1;
          FUN_1096a0cf0(puVar6,puVar10);
          if ((int)puVar6 != 0) {
            uVar13 = *puVar10;
            *puVar10 = puVar10[1];
            puVar10[1] = uVar13;
          }
        }
        else {
          *puVar8 = puVar10[1];
          puVar10[1] = uVar13;
        }
      }
      uVar13 = *param_1;
      *param_1 = *puVar10;
      *puVar10 = uVar13;
    }
LAB_1096a0680:
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      uStack_68 = *param_1;
LAB_1096a06a4:
      lVar19 = 0;
      do {
        lVar19 = lVar19 + 8;
        uVar18 = lVar19 + (long)param_1;
        FUN_1096a0cf0(uVar18,&uStack_68);
      } while ((uVar18 & 1) != 0);
      puVar9 = (undefined8 *)((long)param_1 + lVar19);
      puVar6 = param_2;
      if (lVar19 == 8) {
        do {
          if (puVar6 <= puVar9) break;
          puVar6 = puVar6 + -1;
          puVar10 = puVar6;
          FUN_1096a0cf0(puVar6,&uStack_68);
        } while (((ulong)puVar10 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar6 + -1;
          puVar10 = puVar6;
          FUN_1096a0cf0(puVar6,&uStack_68);
        } while ((int)puVar10 == 0);
      }
      puVar10 = puVar9;
      puVar7 = puVar6;
      if (puVar9 < puVar6) {
        do {
          uVar13 = *puVar10;
          *puVar10 = *puVar7;
          *puVar7 = uVar13;
          do {
            puVar10 = puVar10 + 1;
            puVar8 = puVar10;
            FUN_1096a0cf0(puVar10,&uStack_68);
          } while (((ulong)puVar8 & 1) != 0);
          do {
            puVar7 = puVar7 + -1;
            puVar8 = puVar7;
            FUN_1096a0cf0(puVar7,&uStack_68);
          } while ((int)puVar8 == 0);
        } while (puVar10 < puVar7);
      }
      puVar7 = puVar10 + -1;
      if (puVar7 != param_1) {
        *param_1 = *puVar7;
      }
      *puVar7 = uStack_68;
      if (puVar6 <= puVar9) {
        puVar6 = param_1;
        func_0x0001096a0fa8(param_1,puVar7);
        puVar8 = puVar10;
        func_0x0001096a0fa8(puVar10,param_2);
        if ((int)puVar8 != 0) goto LAB_1096a08ac;
        if (((ulong)puVar6 & 1) != 0) goto LAB_1096a0324;
      }
      FUN_1096a02e0(param_1,puVar7,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_1096a0324;
    }
    puVar10 = param_1 + -1;
    FUN_1096a0cf0(puVar10,param_1);
    uStack_68 = *param_1;
    if (((ulong)puVar10 & 1) != 0) goto LAB_1096a06a4;
    puVar6 = &uStack_68;
    FUN_1096a0cf0(puVar6,puVar12);
    puVar10 = param_1;
    if (((ulong)puVar6 & 1) == 0) {
      do {
        puVar10 = puVar10 + 1;
        if (param_2 <= puVar10) break;
        puVar6 = &uStack_68;
        FUN_1096a0cf0(puVar6,puVar10);
      } while ((int)puVar6 == 0);
    }
    else {
      do {
        puVar10 = puVar10 + 1;
        puVar6 = &uStack_68;
        FUN_1096a0cf0(puVar6,puVar10);
      } while (((ulong)puVar6 & 1) == 0);
    }
    puVar6 = param_2;
    if (puVar10 < param_2) {
      do {
        puVar6 = puVar6 + -1;
        puVar7 = &uStack_68;
        FUN_1096a0cf0(puVar7,puVar6);
      } while (((ulong)puVar7 & 1) != 0);
    }
    while (puVar10 < puVar6) {
      uVar13 = *puVar10;
      *puVar10 = *puVar6;
      *puVar6 = uVar13;
      do {
        puVar10 = puVar10 + 1;
        puVar7 = &uStack_68;
        FUN_1096a0cf0(puVar7,puVar10);
      } while ((int)puVar7 == 0);
      do {
        puVar6 = puVar6 + -1;
        puVar7 = &uStack_68;
        FUN_1096a0cf0(puVar7,puVar6);
      } while (((ulong)puVar7 & 1) != 0);
    }
    puVar6 = puVar10 + -1;
    if (puVar6 != param_1) {
      *param_1 = *puVar6;
    }
    param_4 = 0;
    *puVar6 = uStack_68;
  } while( true );
LAB_1096a09c0:
  puVar12 = puVar9;
  puVar9 = puVar12;
  FUN_1096a0cf0(puVar12,puVar10);
  if ((int)puVar9 != 0) {
    uStack_68 = *puVar12;
    lVar5 = lVar19;
    do {
      lVar15 = lVar5;
      ((undefined8 *)((long)param_1 + lVar15))[1] = *(undefined8 *)((long)param_1 + lVar15);
      puVar9 = param_1;
      if (lVar15 == 0) goto LAB_1096a0a14;
      puVar9 = &uStack_68;
      FUN_1096a0cf0(puVar9,lVar15 + -8 + (long)param_1);
      lVar5 = lVar15 + -8;
    } while (((ulong)puVar9 & 1) != 0);
    puVar9 = (undefined8 *)((long)param_1 + lVar15);
LAB_1096a0a14:
    *puVar9 = uStack_68;
  }
  lVar19 = lVar19 + 8;
  puVar9 = puVar12 + 1;
  puVar10 = puVar12;
  if (puVar12 + 1 == param_2) {
    return;
  }
  goto LAB_1096a09c0;
LAB_1096a0a40:
  do {
    if ((long)uVar14 <= (long)uVar16) {
      uVar3 = uVar14 << 1 | 1;
      puVar9 = param_1 + uVar3;
      uVar2 = uVar14 * 2 + 2;
      puVar10 = puVar9;
      uVar17 = uVar3;
      if ((long)uVar2 < (long)uVar18) {
        puVar12 = puVar9;
        FUN_1096a0cf0(puVar9,puVar9 + 1);
        puVar10 = puVar9 + 1;
        uVar17 = uVar2;
        if ((int)puVar12 == 0) {
          puVar10 = puVar9;
          uVar17 = uVar3;
        }
      }
      puVar9 = param_1 + uVar14;
      puVar12 = puVar10;
      FUN_1096a0cf0(puVar10,puVar9);
      if (((ulong)puVar12 & 1) == 0) {
        uStack_68 = *puVar9;
        do {
          puVar12 = puVar10;
          *puVar9 = *puVar12;
          if ((long)uVar16 < (long)uVar17) break;
          uVar3 = uVar17 << 1 | 1;
          puVar9 = param_1 + uVar3;
          uVar2 = uVar17 * 2 + 2;
          puVar10 = puVar9;
          uVar17 = uVar3;
          if ((long)uVar2 < (long)uVar18) {
            puVar11 = puVar9;
            FUN_1096a0cf0(puVar9,puVar9 + 1);
            puVar10 = puVar9 + 1;
            uVar17 = uVar2;
            if ((int)puVar11 == 0) {
              puVar10 = puVar9;
              uVar17 = uVar3;
            }
          }
          puVar11 = puVar10;
          FUN_1096a0cf0(puVar10,&uStack_68);
          puVar9 = puVar12;
        } while ((int)puVar11 == 0);
        *puVar12 = uStack_68;
      }
    }
    bVar4 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar4);
  do {
    uVar14 = 0;
    uVar13 = *param_1;
    puVar9 = param_1;
    do {
      puVar10 = puVar9 + uVar14 + 1;
      uVar2 = uVar14 << 1 | 1;
      uVar16 = uVar14 * 2 + 2;
      puVar12 = puVar10;
      uVar3 = uVar2;
      if ((long)uVar16 < (long)uVar18) {
        puVar11 = puVar10;
        FUN_1096a0cf0(puVar10,puVar9 + uVar14 + 2);
        puVar12 = puVar9 + uVar14 + 2;
        uVar3 = uVar16;
        if ((int)puVar11 == 0) {
          puVar12 = puVar10;
          uVar3 = uVar2;
        }
      }
      uVar14 = uVar3;
      *puVar9 = *puVar12;
      puVar9 = puVar12;
    } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar12 == param_2) {
      *puVar12 = uVar13;
    }
    else {
      *puVar12 = *param_2;
      *param_2 = uVar13;
      lVar19 = (long)puVar12 + (8 - (long)param_1) >> 3;
      if (1 < lVar19) {
        uVar14 = lVar19 - 2U >> 1;
        puVar9 = param_1 + uVar14;
        puVar10 = puVar9;
        FUN_1096a0cf0(puVar9,puVar12);
        if ((int)puVar10 != 0) {
          uStack_68 = *puVar12;
          do {
            puVar10 = puVar9;
            *puVar12 = *puVar10;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar9 = param_1 + uVar14;
            puVar11 = puVar9;
            FUN_1096a0cf0(puVar9,&uStack_68);
            puVar12 = puVar10;
          } while (((ulong)puVar11 & 1) != 0);
          *puVar10 = uStack_68;
        }
      }
    }
    bVar4 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_1096a08ac:
  param_2 = puVar7;
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  goto LAB_1096a0310;
}



/* Entry: 1096a0cf0; end: 1096a0e77;  */

ulong FUN_1096a0cf0(long *param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined **appuStack_80 [2];
  undefined **appuStack_70 [2];
  undefined **ppuStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  (**(code **)(*(long *)*param_1 + 0x70))(&ppuStack_50);
  (**(code **)(*(long *)*param_2 + 0x70))(&ppuStack_60);
  ppuStack_60 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  if (lStack_48 == lStack_58) {
    pppuVar1 = *(undefined ****)(*param_1 + 8);
    _strcmp(pppuVar1,*(undefined8 *)(*param_2 + 8));
  }
  else {
    (**(code **)(*(long *)*param_1 + 0x70))(&ppuStack_60);
    FUN_1096975b0(&ppuStack_50,&ppuStack_60);
    (**(code **)(*(long *)*param_2 + 0x70))(appuStack_80);
    FUN_1096975b0(appuStack_70,appuStack_80);
    pppuVar1 = &ppuStack_50;
    FUN_109697c4c(pppuVar1,appuStack_70);
    appuStack_70[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_70);
    appuStack_80[0] = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(appuStack_80);
    ppuStack_50 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_50);
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
  }
  return (ulong)pppuVar1 >> 0x1f & 1;
}



/* Entry: 1096a0e78; end: 1096a1277;  */

void FUN_1096a0e78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = param_2;
  FUN_1096a0cf0(param_2,param_1);
  puVar2 = param_3;
  FUN_1096a0cf0(param_3,param_2);
  if (((ulong)puVar1 & 1) == 0) {
    if ((int)puVar2 != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      puVar1 = param_2;
      FUN_1096a0cf0(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  else {
    uVar3 = *param_1;
    if ((int)puVar2 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      puVar1 = param_3;
      FUN_1096a0cf0(param_3,param_2);
      if ((int)puVar1 == 0) goto LAB_1096a0f34;
      uVar3 = *param_2;
      *param_2 = *param_3;
    }
    else {
      *param_1 = *param_3;
    }
    *param_3 = uVar3;
  }
LAB_1096a0f34:
  puVar1 = param_4;
  FUN_1096a0cf0(param_4,param_3);
  if ((int)puVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    puVar1 = param_3;
    FUN_1096a0cf0(param_3,param_2);
    if ((int)puVar1 != 0) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      puVar1 = param_2;
      FUN_1096a0cf0(param_2,param_1);
      if ((int)puVar1 != 0) {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return;
}



/* Entry: 1096a1278; end: 1096a1293;  */

void FUN_1096a1278(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096a1294; end: 1096a12db;  */

void FUN_1096a1294(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096a12dc; end: 1096a1333;  */

undefined8 * FUN_1096a12dc(undefined8 *param_1)

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



/* Entry: 1096a1334; end: 1096a138b;  */

void FUN_1096a1334(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b02630;
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



/* Entry: 1096a138c; end: 1096a13d7;  */

void FUN_1096a138c(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_10969f2ec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096a13d8; end: 1096a1407;  */

bool FUN_1096a13d8(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b02630,0);
  return param_1 != 0;
}



/* Entry: 1096a1408; end: 1096a148f;  */

long FUN_1096a1408(long param_1)

{
  func_0x0001096a1458(param_1 + 0x18);
  return param_1;
}



/* Entry: 1096a1490; end: 1096a14e3;  */

void FUN_1096a1490(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    param_1[2] = (long)&PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 1096a14e4; end: 1096a154f;  */

void FUN_1096a14e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **appuStack_30 [2];
  
  FUN_10969a674(appuStack_30,param_2);
  FUN_1096a1550(appuStack_30,param_3,0);
  appuStack_30[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_30);
  return;
}



/* Entry: 1096a1550; end: 1096a204f;  */

void FUN_1096a1550(long *param_1,long *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined **ppuStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  char cStack_c9;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined ***pppuStack_80;
  long **pplStack_78;
  char *pcStack_70;
  
  plVar5 = param_1;
  iVar13 = param_3;
  if (0 < param_3) {
    do {
      ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,9);
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_90,1,1);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (param_2[1] == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,&UNK_10f57c279,1,7);
    ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,10);
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_90,1,1);
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
  }
  func_0x000107c2accc();
  func_0x00010969659c(&ppuStack_a0);
  FUN_1096978cc();
  if (lStack_98 == plVar5[1]) {
    (**(code **)(*param_1 + 0x48))(param_1,&UNK_10f57c281,1,0xc);
    ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,10);
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_90,1,1);
    (**(code **)(*param_1 + 0x30))(param_1);
    goto LAB_1096a1ea0;
  }
  FUN_1096975b0(&ppuStack_b0,&ppuStack_a0);
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  cStack_c9 = '\x01';
  ppuStack_90 = (undefined **)CONCAT71(ppuStack_90._1_7_,0x3c);
  (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_90,1,1);
  plVar5 = (long *)(lStack_a8 + 8);
  if (*(char *)(lStack_a8 + 0x1f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  FUN_1096a3084(param_1,plVar5);
  ppuStack_90 = &PTR_FUN_110b02830;
  pppuStack_80 = &ppuStack_a0;
  pplStack_78 = &plStack_c8;
  pcStack_70 = &cStack_c9;
  plStack_88 = param_1;
  func_0x000109696c8c(param_2,&ppuStack_90);
  plVar5 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
  if (plVar5 == (long *)0x0) {
    func_0x000107c2acdc();
  }
  lVar16 = plVar5[1];
  if (lVar16 != 0) {
    piVar7 = (int *)(lVar16 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_90 = &PTR_FUN_110b01468;
  plVar5 = param_2;
  plStack_88 = (long *)lVar16;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  if (plVar5 == (long *)0x0) {
    func_0x000107c2acdc();
  }
  lVar17 = plVar5[1];
  if (lVar17 == 0) {
    if (lVar16 != 0) goto LAB_1096a17d8;
  }
  else {
    piVar7 = (int *)(lVar17 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_1096a17d8:
    cStack_c9 = '\0';
  }
  ppuStack_e0 = &PTR_FUN_110b00af0;
  lStack_d8 = lVar17;
  FUN_10969b5d0(&ppuStack_f0);
  FUN_109699e44(&ppuStack_100,&ppuStack_f0);
  FUN_10969bc60(&ppuStack_110);
  (**(code **)(*param_2 + 0x10))(param_2,&ppuStack_100,&ppuStack_110);
  ppuStack_110 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_110);
  ppuStack_100 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_100);
  if ((cStack_c9 == '\x01') && (*(long *)(lStack_e8 + 0x10) == *(long *)(lStack_e8 + 8))) {
    (**(code **)(*param_1 + 0x48))(param_1,&UNK_10f57c28e,1,2);
    ppuStack_100 = (undefined **)CONCAT71(ppuStack_100._1_7_,10);
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  else {
    ppuStack_100._0_1_ = 0x3e;
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
    if (lVar17 == 0) {
      ppuStack_100._0_1_ = 10;
      (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    plVar5 = plStack_c0;
    if (plStack_c8 != plStack_c0) {
      iVar13 = param_3 + 1;
      plVar11 = plStack_c8;
      do {
        (**(code **)(*(long *)*plVar11 + 0x70))(&ppuStack_100);
        if ((*(byte *)(*plVar11 + 0x10) >> 1 & 1) == 0) {
          iVar14 = iVar13;
          if (-1 < param_3) {
            do {
              ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,9);
              (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_110,1,1);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,0x3c);
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_110,1,1);
          if (lStack_f8 != lStack_98) {
            func_0x000107c2accc();
            func_0x00010969659c(&ppuStack_110);
            lVar12 = lStack_f8;
            lVar8 = lStack_108;
            ppuStack_110 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_110);
            if (lVar12 != lVar8) {
              FUN_1096975b0(&ppuStack_110,&ppuStack_100);
              plVar6 = (long *)(lStack_108 + 8);
              if (*(char *)(lStack_108 + 0x1f) < '\0') {
                plVar6 = (long *)*plVar6;
              }
              FUN_1096a3084(param_1,plVar6);
              ppuStack_110 = &PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppuStack_110);
            }
          }
          ppuStack_110._0_1_ = 0x2e;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_110,1,1);
          uVar15 = *(ulong *)(*plVar11 + 8);
          uVar3 = uVar15;
          _strlen(uVar15);
          (**(code **)(*param_1 + 0x48))(param_1,uVar15,1,uVar3 & 0xffffffff);
          ppuStack_110._0_1_ = 0x3e;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_110,1,1);
          ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,10);
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_110,1,1);
          (**(code **)(*param_1 + 0x30))(param_1);
          FUN_109696a64(&ppuStack_110,param_2,plVar11);
          FUN_1096a3124(param_1,&ppuStack_110,param_3 + 2);
          iVar14 = iVar13;
          if (-1 < param_3) {
            do {
              ppuStack_120 = (undefined **)CONCAT71(ppuStack_120._1_7_,9);
              (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_120,1,1);
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          (**(code **)(*param_1 + 0x48))(param_1,&UNK_10f57c291,1,2);
          if (lStack_f8 != lStack_98) {
            func_0x000107c2accc();
            func_0x00010969659c(&ppuStack_120);
            lVar12 = lStack_f8;
            lVar8 = lStack_118;
            ppuStack_120 = &PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppuStack_120);
            if (lVar12 != lVar8) {
              FUN_1096975b0(&ppuStack_120,&ppuStack_100);
              plVar6 = (long *)(lStack_118 + 8);
              if (*(char *)(lStack_118 + 0x1f) < '\0') {
                plVar6 = (long *)*plVar6;
              }
              FUN_1096a3084(param_1,plVar6);
              ppuStack_120 = &PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppuStack_120);
            }
          }
          ppuStack_120._0_1_ = 0x2e;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_120,1,1);
          uVar15 = *(ulong *)(*plVar11 + 8);
          uVar3 = uVar15;
          _strlen(uVar15);
          (**(code **)(*param_1 + 0x48))(param_1,uVar15,1,uVar3 & 0xffffffff);
          ppuStack_120._0_1_ = 0x3e;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_120,1,1);
          ppuStack_120 = (undefined **)CONCAT71(ppuStack_120._1_7_,10);
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_120,1,1);
          (**(code **)(*param_1 + 0x30))(param_1);
          ppuStack_110 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_110);
        }
        else {
          FUN_109696a64(&ppuStack_110,param_2,plVar11);
          FUN_1096a3124(param_1,&ppuStack_110,iVar13);
          ppuStack_110 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_110);
        }
        ppuStack_100._0_1_ = 0x60;
        ppuStack_100._1_7_ = 0x110b01d;
        func_0x000107c2acd4(&ppuStack_100);
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar5);
    }
    if ((lVar16 != 0) &&
       (lVar8 = *(long *)(lVar16 + 8), 0xffffffff < (*(long *)(lVar16 + 0x10) - lVar8) * 0x10000000)
       ) {
      lVar10 = 0;
      lVar12 = 0;
      do {
        FUN_1096a1550(param_1,lVar8 + lVar10,param_3 + 1);
        lVar12 = lVar12 + 1;
        lVar8 = *(long *)(lVar16 + 8);
        lVar10 = lVar10 + 0x10;
      } while (lVar12 < (int)((ulong)(*(long *)(lVar16 + 0x10) - lVar8) >> 4));
    }
    if (*(long *)(lStack_e8 + 0x10) != *(long *)(lStack_e8 + 8)) {
      if (-1 < param_3) {
        iVar13 = param_3 + 1;
        do {
          ppuStack_100._0_1_ = 9;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      ppuStack_100._0_1_ = 0;
      (*(code *)ppuStack_f0[9])(&ppuStack_f0,&ppuStack_100,1,1);
      uVar15 = *(ulong *)(lStack_e8 + 8);
      uVar3 = uVar15;
      _strlen(uVar15);
      (**(code **)(*param_1 + 0x48))(param_1,uVar15,1,uVar3 & 0xffffffff);
      ppuStack_100._0_1_ = 10;
      (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    if (lVar17 == 0) {
      if (0 < param_3) {
        do {
          ppuStack_100._0_1_ = 9;
          (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
    else {
      puVar9 = (ulong *)(lVar17 + 8);
      if (*(char *)(lVar17 + 0x1f) < '\0') {
        puVar9 = (ulong *)*puVar9;
      }
      puVar4 = puVar9;
      _strlen(puVar9);
      (**(code **)(*param_1 + 0x48))(param_1,puVar9,1,(ulong)puVar4 & 0xffffffff);
    }
    (**(code **)(*param_1 + 0x48))(param_1,&UNK_10f57c291,1,2);
    plVar5 = (long *)(lStack_a8 + 8);
    if (*(char *)(lStack_a8 + 0x1f) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    FUN_1096a3084(param_1,plVar5);
    ppuStack_100._0_1_ = 0x3e;
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
    ppuStack_100 = (undefined **)CONCAT71(ppuStack_100._1_7_,10);
    (**(code **)(*param_1 + 0x48))(param_1,&ppuStack_100,1,1);
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
  ppuStack_e0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_e0);
  ppuStack_90 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_90);
  if (plStack_c8 != (long *)0x0) {
    plStack_c0 = plStack_c8;
    __ZdlPv();
  }
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
LAB_1096a1ea0:
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  return;
}



/* Entry: 1096a2050; end: 1096a2167;  */

void FUN_1096a2050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined **appuStack_b0 [2];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  FUN_1096a2168(param_2,0x11382aa10);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_90 = param_3;
  FUN_1096a3598(auStack_58,param_2);
  ppuStack_a0 = &PTR_FUN_110b01d60;
  uStack_98 = 0;
  func_0x000107c2accc();
  func_0x00010969659c(appuStack_b0);
  puVar1 = &uStack_90;
  FUN_1096a21f0(puVar1,&ppuStack_a0,appuStack_b0);
  appuStack_b0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_b0);
  if (((ulong)puVar1 & 1) == 0) {
    *param_1 = &PTR_FUN_110b01d60;
    param_1[1] = 0;
  }
  else {
    param_1[1] = uStack_98;
    *param_1 = ppuStack_a0;
    uStack_98 = 0;
  }
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  FUN_1096a3b24(auStack_58);
  FUN_1096a3b98(&uStack_88);
  return;
}



/* Entry: 1096a2168; end: 1096a21ef;  */

undefined8 * FUN_1096a2168(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  }
  return puVar2;
}



/* Entry: 1096a21f0; end: 1096a301b;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_1096a21f0(undefined ********param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined *******pppppppuVar10;
  long *plVar11;
  ulong uVar12;
  undefined *******pppppppuVar13;
  char *pcVar14;
  long lVar15;
  undefined ********ppppppppuVar16;
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined ********ppppppppuStack_150;
  undefined *******pppppppuStack_148;
  undefined **ppuStack_140;
  undefined *******pppppppuStack_138;
  undefined **ppuStack_130;
  undefined *******pppppppuStack_128;
  undefined *******pppppppuStack_120;
  long lStack_118;
  undefined1 uStack_109;
  undefined ********ppppppppuStack_108;
  undefined ********ppppppppuStack_100;
  undefined *******pppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  undefined *******pppppppuStack_e8;
  long lStack_e0;
  undefined ********ppppppppuStack_d0;
  undefined *******pppppppuStack_c8;
  undefined8 uStack_c0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar16 = param_1;
  func_0x0001096a3c30();
  if ((int)ppppppppuVar16 == 0) {
    param_1 = (undefined ********)0x0;
    goto LAB_1096a2dcc;
  }
  FUN_1096a3d14(&pppppppuStack_120,param_1);
  func_0x000107c31940(&ppppppppuStack_d0,&UNK_10dfdb975);
  uVar12 = (ulong)*(char *)(lStack_118 + 0x1f);
  if ((long)uVar12 < 0) {
    pcVar14 = *(char **)(lStack_118 + 8);
    uVar12 = *(ulong *)(lStack_118 + 0x10);
  }
  else {
    pcVar14 = (char *)(lStack_118 + 8);
  }
  if ((uVar12 & 0xffffffff) != 0) {
    lVar15 = (long)(int)uVar12;
    do {
      cVar1 = *pcVar14;
      if (cVar1 == ':') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&ppppppppuStack_d0,0x3a);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&ppppppppuStack_d0,(long)cVar1);
      pcVar14 = pcVar14 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  ppppppppuVar16 = ppppppppuStack_d0;
  if (-1 < (long)uStack_c0) {
    ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
  }
  piVar7 = (int *)((long)ppppppppuVar16 + 4);
  FUN_1096977e4(&ppppppppuStack_f0);
  FUN_1096978cc();
  if (pppppppuStack_e8 == *(undefined ********)(piVar7 + 2)) {
    ppppppppuVar16 = ppppppppuStack_d0;
    if (-1 < (long)uStack_c0) {
      ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
    }
    FUN_1096977e4(&ppuStack_130,ppppppppuVar16);
  }
  else {
    pppppppuStack_128 = pppppppuStack_e8;
    if (pppppppuStack_e8 != (undefined *******)0x0) {
      pppppppuVar10 = pppppppuStack_e8 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
        if (bVar2) {
          *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppuStack_130 = &PTR_FUN_110b00f28;
  }
  ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
  ppppppppuVar16 = (undefined ********)&ppppppppuStack_f0;
  func_0x000107c2acd4();
  if ((long)uStack_c0 < 0) {
    ppppppppuVar16 = ppppppppuStack_d0;
    __ZdlPv();
  }
  FUN_1096978cc();
  if (pppppppuStack_128 == ppppppppuVar16[1]) {
    param_1 = (undefined ********)0x0;
  }
  else {
    if (pppppppuStack_128[0xb] == (undefined ******)0x0) {
      ppppppppuStack_d0 = (undefined ********)&PTR_FUN_110b01d60;
      pppppppuStack_c8 = (undefined *******)0x0;
    }
    else {
      (*(code *)pppppppuStack_128[0xb])(&ppppppppuStack_d0);
    }
    pppppppuVar10 = (undefined *******)param_2[1];
    param_2[1] = (long)pppppppuStack_c8;
    *param_2 = (long)ppppppppuStack_d0;
    ppppppppuStack_d0 = (undefined ********)&PTR_FUN_110b01d60;
    pppppppuStack_c8 = pppppppuVar10;
    func_0x000107c2acd4(&ppppppppuStack_d0);
    func_0x000107c2accc();
    func_0x00010969659c(&ppppppppuStack_d0);
    pppppppuVar13 = pppppppuStack_c8;
    pppppppuVar10 = pppppppuStack_128;
    ppppppppuStack_d0 = (undefined ********)&PTR_FUN_110b01d60;
    ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
    func_0x000107c2acd4();
    if (pppppppuVar10 == pppppppuVar13) {
      plVar11 = (long *)(lStack_118 + 8);
      if (*(char *)(lStack_118 + 0x1f) < '\0') {
        plVar11 = (long *)*plVar11;
      }
      FUN_1096a3e04(param_1,plVar11);
      ppppppppuStack_d0 = (undefined ********)CONCAT71(ppppppppuStack_d0._1_7_,0x3c);
      func_0x00010538e93c(param_1 + 1,&ppppppppuStack_d0);
      FUN_1096a3e64(param_1,param_2);
    }
    else {
      func_0x000107c2acdc();
      pppppppuStack_138 = ppppppppuVar16[1];
      if (pppppppuStack_138 != (undefined *******)0x0) {
        pppppppuVar10 = pppppppuStack_138 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
          if (bVar2) {
            *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      bVar2 = false;
      ppuStack_140 = &PTR_FUN_110b00af0;
      do {
        FUN_1096a42a8(&ppppppppuStack_d0,param_1);
        pppppppuVar10 = pppppppuStack_c8;
        if (-1 < (long)uStack_c0) {
          pppppppuVar10 = (undefined *******)(uStack_c0 >> 0x38);
        }
        if (pppppppuVar10 == (undefined *******)0x0) {
          iVar6 = 2;
        }
        else {
          ppppppppuVar16 = param_1;
          FUN_1096a43c0(param_1,"=");
          if (((ulong)ppppppppuVar16 & 1) == 0) {
            iVar6 = 1;
          }
          else {
            FUN_1096a4474(&ppppppppuStack_100,param_1);
            ppppppppuVar16 = ppppppppuStack_d0;
            pppppppuVar10 = pppppppuStack_c8;
            if (-1 < (long)uStack_c0) {
              ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
              pppppppuVar10 = (undefined *******)(uStack_c0 >> 0x38);
            }
            if ((pppppppuVar10 == (undefined *******)0x0) ||
               (ppppppppuVar8 = ppppppppuVar16, _memchr(ppppppppuVar16,0x2e),
               ppppppppuVar8 == (undefined ********)0x0)) {
LAB_1096a252c:
              ppppppppuStack_108 = (undefined ********)0x0;
              FUN_1096975f4(&ppppppppuStack_f0,&ppuStack_130,ppppppppuVar16);
              ppppppppuStack_108 = ppppppppuStack_f0;
              if (ppppppppuStack_f0 == (undefined ********)0x0) {
                ppppppppuVar16 = ppppppppuStack_d0;
                if (-1 < (long)uStack_c0) {
                  ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
                }
                lVar15 = *(long *)(param_3 + 8) + 0x20;
                FUN_109698e78(lVar15,ppppppppuVar16);
                if (lVar15 == 0) {
                  ppppppppuStack_108 = (undefined ********)0x0;
                }
                else {
                  ppppppppuStack_108 = *(undefined *********)(lVar15 + 8);
                }
joined_r0x0001096a2578:
                if (ppppppppuStack_108 == (undefined ********)0x0) {
                  iVar6 = 3;
                  goto LAB_1096a2708;
                }
              }
              func_0x000107c2accc();
              func_0x00010969659c(&ppppppppuStack_f0);
              func_0x000107c2accc();
              func_0x00010969659c(&ppppppppuStack_150);
              pppppppuVar13 = pppppppuStack_e8;
              pppppppuVar10 = pppppppuStack_148;
              ppppppppuStack_150 = (undefined ********)&PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppppppppuStack_150);
              ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppppppppuStack_f0);
              if (pppppppuVar13 == pppppppuVar10) {
                if ((long)uStack_c0 < 0) {
                  ppppppppuVar16 = ppppppppuStack_d0;
                  if (pppppppuStack_c8 == (undefined *******)0x4) goto LAB_1096a2604;
                }
                else if (uStack_c0._7_1_ == '\x04') {
                  ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
LAB_1096a2604:
                  if (*(int *)ppppppppuVar16 == 0x656d614e) {
                    ppppppppuVar16 = (undefined ********)&ppppppppuStack_100;
                    ___dynamic_cast(ppppppppuVar16,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
                    if (ppppppppuVar16 == (undefined ********)0x0) {
                      func_0x000107c2acdc();
                    }
                    pppppppuVar10 = ppppppppuVar16[1];
                    if (pppppppuVar10 != (undefined *******)0x0) {
                      pppppppuVar13 = pppppppuVar10 + -1;
                      do {
                        cVar1 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar13,0x10);
                        if (bVar3) {
                          *(int *)pppppppuVar13 = *(int *)pppppppuVar13 + 1;
                          cVar1 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar1 != '\0');
                    }
                    pppppppuStack_e8 = pppppppuStack_138;
                    ppuStack_140 = &PTR_FUN_110b00af0;
                    ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
                    pppppppuStack_138 = pppppppuVar10;
                    func_0x000107c2acd4(&ppppppppuStack_f0);
                  }
                }
                ppppppppuVar16 = (undefined ********)&ppppppppuStack_100;
                ___dynamic_cast(ppppppppuVar16,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
                if (ppppppppuVar16 == (undefined ********)0x0) {
                  func_0x000107c2acdc();
                }
                ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
                pppppppuStack_e8 = ppppppppuVar16[1];
                if (pppppppuStack_e8 != (undefined *******)0x0) {
                  pppppppuVar10 = pppppppuStack_e8 + -1;
                  do {
                    cVar1 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
                    if (bVar3) {
                      *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                }
                ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b00af0;
                FUN_1096967f4(param_2,&ppppppppuStack_108,&ppppppppuStack_f0);
                ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
                func_0x000107c2acd4(&ppppppppuStack_f0);
              }
              else {
                FUN_109696b6c(param_2,&ppppppppuStack_108,&ppppppppuStack_100);
              }
              iVar6 = 0;
              if (((ulong)ppppppppuStack_108[2] & 2) != 0) {
                bVar2 = true;
              }
            }
            else {
              lVar15 = (long)ppppppppuVar8 - (long)ppppppppuVar16;
              ppppppppuStack_108 = (undefined ********)0x0;
              if (lVar15 == -1) goto LAB_1096a252c;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&ppppppppuStack_f0,&ppppppppuStack_d0,0,lVar15,&uStack_109);
              ppppppppuVar16 = (undefined ********)&ppppppppuStack_150;
              FUN_1096a46e8(ppppppppuVar16,&ppppppppuStack_f0);
              if (lStack_e0 < 0) {
                ppppppppuVar16 = ppppppppuStack_f0;
                __ZdlPv();
              }
              FUN_1096978cc();
              if (pppppppuStack_148 != ppppppppuVar16[1]) {
                ppppppppuVar16 = ppppppppuStack_d0;
                if (-1 < (long)uStack_c0) {
                  ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
                }
                pppppppuVar10 = pppppppuStack_148 + 4;
                FUN_109698e78(pppppppuVar10,(long)ppppppppuVar16 + lVar15 + 1);
                if (pppppppuVar10 == (undefined *******)0x0) {
                  ppppppppuStack_108 = (undefined ********)0x0;
                }
                else {
                  ppppppppuStack_108 = (undefined ********)pppppppuVar10[1];
                }
                ppppppppuStack_150 = (undefined ********)&PTR_FUN_110b01d60;
                func_0x000107c2acd4(&ppppppppuStack_150);
                goto joined_r0x0001096a2578;
              }
              ppppppppuStack_150 = (undefined ********)&PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppppppppuStack_150);
              iVar6 = 1;
            }
LAB_1096a2708:
            ppppppppuStack_100 = (undefined ********)&PTR_FUN_110b01d60;
            func_0x000107c2acd4(&ppppppppuStack_100);
          }
        }
        if ((long)uStack_c0 < 0) {
          __ZdlPv(ppppppppuStack_d0);
        }
      } while ((iVar6 == 0) || (iVar6 == 3));
      if (iVar6 == 2) {
        ppppppppuVar16 = param_1;
        FUN_1096a43c0(param_1,&UNK_10f57c28e);
        if (((ulong)ppppppppuVar16 & 1) == 0) {
          ppppppppuVar16 = param_1;
          FUN_1096a43c0(param_1,">");
          puVar4 = PTR___DefaultRuneLocale_11034bcf8;
          if ((int)ppppppppuVar16 == 0) goto LAB_1096a2da4;
LAB_1096a28cc:
          do {
            ppppppppuVar16 = param_1;
            func_0x0001096a3c30();
            if ((int)ppppppppuVar16 == 0) break;
            bVar3 = false;
            ppppppppuStack_d0 = (undefined ********)0x0;
            pppppppuStack_c8 = (undefined *******)0x0;
            uStack_c0 = 0;
            ppppppppuStack_f0 = (undefined ********)0x0;
            pppppppuStack_e8 = (undefined *******)0x0;
            lStack_e0 = 0;
            while( true ) {
              ppppppppuVar16 = param_1;
              FUN_1096a4c8c();
              uVar5 = (uint)ppppppppuVar16;
              if ((int)uVar5 < 0) {
                ppppppppuVar8 = ppppppppuVar16;
                ___maskrune(ppppppppuVar16,0x4000);
              }
              else {
                ppppppppuVar8 =
                     (undefined ********)
                     (ulong)(*(uint *)(puVar4 + ((ulong)ppppppppuVar16 & 0xffffffff) * 4 + 0x3c) &
                            0x4000);
              }
              if ((int)ppppppppuVar8 != 0) break;
              if (uVar5 == 0x2e) {
                bVar3 = true;
              }
              else {
                if (((uVar5 & 0xff) == 0x2f) || ((uVar5 & 0xff) == 0x3e)) break;
                ppppppppuVar8 = (undefined ********)&ppppppppuStack_f0;
                if (!bVar3) {
                  ppppppppuVar8 = (undefined ********)&ppppppppuStack_d0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (ppppppppuVar8,ppppppppuVar16);
              }
              func_0x0001096a4d18(param_1);
            }
            if (bVar3) {
              pppppppuVar10 = pppppppuStack_c8;
              if (-1 < (long)uStack_c0) {
                pppppppuVar10 = (undefined *******)(uStack_c0 >> 0x38);
              }
              if (pppppppuVar10 == (undefined *******)0x0) {
                func_0x000107c2accc();
                func_0x00010969659c(&ppppppppuStack_100);
              }
              else {
                ppppppppuVar8 = (undefined ********)&ppppppppuStack_100;
                FUN_1096a46e8(ppppppppuVar8,&ppppppppuStack_d0);
              }
              FUN_1096978cc();
              if (pppppppuStack_f8 == ppppppppuVar8[1]) {
LAB_1096a2ab8:
                bVar3 = false;
              }
              else {
                func_0x0001096a4dcc(param_1);
                ppppppppuVar16 = param_1;
                FUN_1096a43c0(param_1,">");
                if ((int)ppppppppuVar16 == 0) goto LAB_1096a2ab8;
                ppppppppuVar16 = ppppppppuStack_f0;
                if (-1 < lStack_e0) {
                  ppppppppuVar16 = (undefined ********)&ppppppppuStack_f0;
                }
                FUN_10969777c(&ppppppppuStack_150,&ppppppppuStack_100,ppppppppuVar16);
                ppppppppuVar16 = ppppppppuStack_150;
                ppppppppuStack_108 = ppppppppuStack_150;
                FUN_1096a49fc(param_1,param_2,&ppppppppuStack_108);
                ppppppppuVar8 = param_1;
                FUN_1096a43c0(param_1,&UNK_10f57c291);
                if ((int)ppppppppuVar8 == 0) goto LAB_1096a2ab8;
                ppppppppuVar8 = ppppppppuStack_d0;
                if (-1 < (long)uStack_c0) {
                  ppppppppuVar8 = (undefined ********)&ppppppppuStack_d0;
                }
                ppppppppuVar9 = param_1;
                FUN_1096a43c0(param_1,ppppppppuVar8);
                if (((int)ppppppppuVar9 == 0) ||
                   (ppppppppuVar8 = param_1, FUN_1096a43c0(param_1,&DAT_10f62a9de),
                   (int)ppppppppuVar8 == 0)) goto LAB_1096a2ab8;
                ppppppppuVar8 = ppppppppuStack_f0;
                if (-1 < lStack_e0) {
                  ppppppppuVar8 = (undefined ********)&ppppppppuStack_f0;
                }
                ppppppppuVar9 = param_1;
                FUN_1096a43c0(param_1,ppppppppuVar8);
                if (((int)ppppppppuVar9 == 0) ||
                   (ppppppppuVar8 = param_1, FUN_1096a43c0(param_1,">"),
                   ((ulong)ppppppppuVar8 & 1) == 0)) goto LAB_1096a2ab8;
                if (((ulong)ppppppppuVar16[2] & 2) != 0) {
                  bVar2 = true;
                }
                bVar3 = true;
              }
              ppppppppuStack_100 = (undefined ********)&PTR_FUN_110b01d60;
              func_0x000107c2acd4(&ppppppppuStack_100);
            }
            else {
              ppppppppuVar16 = ppppppppuStack_d0;
              if (-1 < (long)uStack_c0) {
                ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
              }
              FUN_1096a3e04(param_1,ppppppppuVar16);
              ppppppppuStack_100 = (undefined ********)CONCAT71(ppppppppuStack_100._1_7_,0x3c);
              func_0x00010538e93c(param_1 + 1,&ppppppppuStack_100);
              bVar3 = false;
            }
            if (lStack_e0 < 0) {
              __ZdlPv(ppppppppuStack_f0);
            }
            if ((long)uStack_c0 < 0) {
              __ZdlPv(ppppppppuStack_d0);
              if (!bVar3) break;
              goto LAB_1096a28cc;
            }
          } while (bVar3);
          plVar11 = param_2;
          ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
          if (plVar11 == (long *)0x0) {
            func_0x000107c2acdc();
          }
          pppppppuStack_e8 = (undefined *******)plVar11[1];
          if (pppppppuStack_e8 == (undefined *******)0x0) {
LAB_1096a2b88:
            ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01468;
            if ((!bVar2) &&
               (FUN_1096976f4(&ppppppppuStack_d0,&ppuStack_130),
               ppppppppuStack_d0 != (undefined ********)0x0)) {
              ppppppppuStack_100 = ppppppppuStack_d0;
              FUN_1096a49fc(param_1,param_2,&ppppppppuStack_100);
            }
          }
          else {
            pppppppuVar10 = pppppppuStack_e8 + -1;
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
              if (bVar3) {
                *(int *)pppppppuVar10 = *(int *)pppppppuVar10 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01468;
            if (pppppppuStack_e8 == (undefined *******)0x0) goto LAB_1096a2b88;
            func_0x000107c2accc();
            func_0x00010969659c(&ppppppppuStack_d0);
            FUN_1096a4858(param_1,&ppppppppuStack_f0,&ppppppppuStack_d0);
            FUN_109696618(&ppppppppuStack_d0);
          }
          func_0x000107c2ace8(&ppppppppuStack_d0);
          if (*(char *)((long)pppppppuStack_c8 + 0x1f) < '\0') {
            pppppppuStack_c8[2] = (undefined ******)0x6;
            pppppppuVar10 = (undefined *******)pppppppuStack_c8[1];
          }
          else {
            pppppppuVar10 = pppppppuStack_c8 + 1;
            *(undefined1 *)((long)pppppppuStack_c8 + 0x1f) = 6;
          }
          *(undefined2 *)((long)pppppppuVar10 + 4) = 0x676e;
          *(undefined4 *)pppppppuVar10 = 0x69727453;
          *(undefined1 *)((long)pppppppuVar10 + 6) = 0;
          pppppppuVar10 = (undefined *******)&pppppppuStack_120;
          FUN_109697c4c(pppppppuVar10,&ppppppppuStack_d0);
          ppppppppuStack_d0 = (undefined ********)&PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppppppppuStack_d0);
          if ((int)pppppppuVar10 == 0) {
            ppppppppuStack_d0 = (undefined ********)0x0;
            pppppppuStack_c8 = (undefined *******)0x0;
            uStack_c0 = 0;
            while (ppppppppuVar16 = param_1, FUN_1096a4c8c(), (int)ppppppppuVar16 != 0x3c) {
              ppppppppuVar16 = param_1;
              func_0x0001096a4d18(param_1);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (&ppppppppuStack_d0,ppppppppuVar16);
            }
            pppppppuVar10 = pppppppuStack_c8;
            ppppppppuVar16 = ppppppppuStack_d0;
            if (-1 < (long)uStack_c0) {
              pppppppuVar10 = (undefined *******)(uStack_c0 >> 0x38);
              ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
            }
            FUN_109697984(param_2,ppppppppuVar16,pppppppuVar10);
            if ((long)uStack_c0 < 0) {
              __ZdlPv(ppppppppuStack_d0);
            }
          }
          else {
            FUN_10969b5d0(&ppppppppuStack_d0);
            func_0x0001096a4dcc(param_1);
            while( true ) {
              ppppppppuVar16 = param_1;
              FUN_1096a4c8c();
              iVar6 = (int)ppppppppuVar16;
              if (iVar6 < 0) {
                ___maskrune(ppppppppuVar16,0x4000);
                uVar5 = (uint)ppppppppuVar16;
              }
              else {
                uVar5 = *(uint *)(puVar4 + ((ulong)ppppppppuVar16 & 0xffffffff) * 4 + 0x3c) & 0x4000
                ;
              }
              if ((uVar5 != 0) || (iVar6 == 0x3c)) break;
              ppppppppuVar16 = param_1;
              func_0x0001096a4d18();
              ppppppppuStack_100 =
                   (undefined ********)CONCAT71(ppppppppuStack_100._1_7_,(char)ppppppppuVar16);
              (*(code *)ppppppppuStack_d0[9])(&ppppppppuStack_d0,&ppppppppuStack_100,1,1);
            }
            pppppppuStack_c8[4] = (undefined ******)0x0;
            FUN_109699e44(&ppppppppuStack_100,&ppppppppuStack_d0);
            FUN_10969bc60(&ppppppppuStack_150);
            (**(code **)(*param_2 + 0x18))(param_2,&ppppppppuStack_100,&ppppppppuStack_150);
            FUN_109696618(&ppppppppuStack_150);
            FUN_109696618(&ppppppppuStack_100);
            FUN_109696618(&ppppppppuStack_d0);
          }
          ppppppppuVar16 = param_1;
          FUN_1096a43c0(param_1,&UNK_10f57c291);
          if ((int)ppppppppuVar16 != 0) {
            plVar11 = (long *)(lStack_118 + 8);
            if (*(char *)(lStack_118 + 0x1f) < '\0') {
              plVar11 = (long *)*plVar11;
            }
            ppppppppuVar16 = param_1;
            FUN_1096a43c0(param_1,plVar11);
            if (((int)ppppppppuVar16 != 0) &&
               (ppppppppuVar16 = param_1, FUN_1096a43c0(param_1,">"),
               ((ulong)ppppppppuVar16 & 1) != 0)) {
              FUN_109696618(&ppppppppuStack_f0);
              goto LAB_1096a2790;
            }
          }
          ppppppppuStack_f0 = (undefined ********)&PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppppppppuStack_f0);
          goto LAB_1096a2da4;
        }
LAB_1096a2790:
        FUN_1096a4f30(&ppppppppuStack_d0,param_2);
        if (pppppppuStack_c8 == (undefined *******)0x0) {
LAB_1096a2808:
          if (pppppppuStack_138 != (undefined *******)0x0) {
            pppppppuVar10 = pppppppuStack_138 + 1;
            if (*(char *)((long)pppppppuStack_138 + 0x1f) < '\0') {
              pppppppuVar10 = (undefined *******)*pppppppuVar10;
            }
            func_0x000107c31940(auStack_168,pppppppuVar10);
            FUN_1096a4fc4(param_1 + 7,auStack_168,auStack_168,param_2);
            if (cStack_151 < '\0') {
              __ZdlPv(auStack_168[0]);
            }
          }
        }
        else {
          ppppppppuVar16 = (undefined ********)&ppppppppuStack_d0;
          func_0x000109693cdc(ppppppppuVar16,0x11382a8f8);
          if (*(char *)ppppppppuVar16 != '\x01') goto LAB_1096a2808;
          (*(code *)ppppppppuStack_d0[4])(&ppppppppuStack_f0,&ppppppppuStack_d0);
          pppppppuVar10 = (undefined *******)param_2[1];
          ppppppppuVar16 = (undefined ********)*param_2;
          param_2[1] = (long)pppppppuStack_e8;
          *param_2 = (long)ppppppppuStack_f0;
          ppppppppuStack_f0 = ppppppppuVar16;
          pppppppuStack_e8 = pppppppuVar10;
          FUN_10969664c(&ppppppppuStack_f0);
          if (pppppppuStack_138 != (undefined *******)0x0) {
            FUN_109693ff4(param_2,0x11382a930,&ppuStack_140);
            goto LAB_1096a2808;
          }
        }
        ppppppppuStack_d0 = (undefined ********)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppppppppuStack_d0);
        param_1 = (undefined ********)0x1;
      }
      else {
LAB_1096a2da4:
        param_1 = (undefined ********)0x0;
      }
      ppuStack_140 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_140);
    }
  }
  ppuStack_130 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_130);
  pppppppuStack_120 = (undefined *******)&PTR_FUN_110b01d60;
  ppppppppuVar16 = &pppppppuStack_120;
  func_0x000107c2acd4(ppppppppuVar16);
LAB_1096a2dcc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_109696618(&ppppppppuStack_f0);
    FUN_109696618(&ppuStack_140);
    FUN_109696618(&ppuStack_130);
    do {
      do {
        FUN_109696618(&pppppppuStack_120);
        __Unwind_Resume(ppppppppuVar16);
      } while (-1 < (long)uStack_c0);
      __ZdlPv(ppppppppuStack_d0);
    } while( true );
  }
  return param_1;
}



/* Entry: 1096a301c; end: 1096a304f;  */

undefined8 * FUN_1096a301c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096a3050; end: 1096a3083;  */

void FUN_1096a3050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096a3084; end: 1096a3123;  */

void FUN_1096a3084(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char cStack_31;
  
  lVar2 = param_2;
  _strncmp(param_2,&UNK_10dfdb975,4);
  lVar1 = 4;
  if ((int)lVar2 != 0) {
    lVar1 = 0;
  }
  pcVar3 = (char *)(param_2 + lVar1);
  do {
    cStack_31 = *pcVar3;
    if (cStack_31 == ':') {
      pcVar4 = pcVar3 + 1;
      if (pcVar3[1] != ':') {
        pcVar4 = pcVar3;
      }
    }
    else {
      pcVar4 = pcVar3;
      if (cStack_31 == '\0') {
        return;
      }
    }
    (**(code **)(*param_1 + 0x48))(param_1,&cStack_31,1,1);
    pcVar3 = pcVar4 + 1;
  } while( true );
}



/* Entry: 1096a3124; end: 1096a322b;  */

void FUN_1096a3124(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  undefined **ppuStack_40;
  long lStack_38;
  
  lVar4 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110afd8d8,0);
  if (lVar4 == 0) {
    func_0x000107c2acdc();
  }
  lStack_38 = *(long *)(lVar4 + 8);
  if (lStack_38 == 0) {
    ppuStack_40 = &PTR_FUN_110b01468;
    FUN_1096a1550(param_1,param_2,param_3);
  }
  else {
    piVar5 = (int *)(lStack_38 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_40 = &PTR_FUN_110b01468;
    lVar4 = *(long *)(lStack_38 + 8);
    for (uVar1 = (*(long *)(lStack_38 + 0x10) - lVar4) * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
        uVar1 != 0; uVar1 = uVar1 - 0x10) {
      FUN_1096a1550(param_1,lVar4,param_3);
      lVar4 = lVar4 + 0x10;
    }
  }
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return;
}



/* Entry: 1096a322c; end: 1096a358f;  */

undefined8 FUN_1096a322c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  plVar2 = (long *)*param_3;
  if (plVar2 == (long *)0x0) {
    return 1;
  }
  if ((*(byte *)(plVar2 + 2) >> 2 & 1) == 0) {
    return 1;
  }
  (**(code **)(*plVar2 + 0x78))(&ppuStack_50);
  FUN_1096978cc();
  if (lStack_48 != plVar2[1]) {
    FUN_109696a64(&ppuStack_70,param_2,param_3);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_60);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_80);
    lVar1 = lStack_58;
    ppuStack_80 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_80);
    ppuStack_60 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_60);
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    if (lVar1 != lStack_78) {
      **(undefined1 **)(param_1 + 0x20) = 0;
      plVar6 = *(long **)(param_1 + 0x18);
      plVar2 = (long *)plVar6[1];
      if (plVar2 < (long *)plVar6[2]) {
        plVar5 = plVar2 + 1;
        *plVar2 = *param_3;
      }
      else {
        plVar5 = plVar6;
        FUN_1096a0114(plVar6,param_3);
      }
      plVar6[1] = (long)plVar5;
      goto LAB_1096a34dc;
    }
  }
  ppuStack_60 = (undefined **)CONCAT71(ppuStack_60._1_7_,0x20);
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&ppuStack_60,1,1);
  (**(code **)(*(long *)*param_3 + 0x70))(&ppuStack_60);
  if (lStack_58 != *(long *)(*(long *)(param_1 + 0x10) + 8)) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_70);
    lVar1 = lStack_68;
    ppuStack_70 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_70);
    if (lStack_58 != lVar1) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      FUN_1096975b0(&ppuStack_70,&ppuStack_60);
      plVar2 = (long *)(lStack_68 + 8);
      if (*(char *)(lStack_68 + 0x1f) < '\0') {
        plVar2 = (long *)*plVar2;
      }
      FUN_1096a3084(uVar8,plVar2);
      ppuStack_70 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_70);
      ppuStack_70 = (undefined **)CONCAT71(ppuStack_70._1_7_,0x2e);
      (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&ppuStack_70,1,1);
    }
  }
  plVar2 = *(long **)(param_1 + 8);
  uVar9 = *(ulong *)(*param_3 + 8);
  uVar3 = uVar9;
  _strlen(uVar9);
  (**(code **)(*plVar2 + 0x48))(plVar2,uVar9,1,uVar3 & 0xffffffff);
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&UNK_10f57c294,1,2);
  plVar2 = *(long **)(param_1 + 8);
  FUN_109696764(&ppuStack_70,param_2,param_3);
  puVar7 = (ulong *)(lStack_68 + 8);
  if (*(char *)(lStack_68 + 0x1f) < '\0') {
    puVar7 = (ulong *)*puVar7;
  }
  puVar4 = puVar7;
  _strlen(puVar7);
  (**(code **)(*plVar2 + 0x48))(plVar2,puVar7,1,(ulong)puVar4 & 0xffffffff);
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&DAT_10f3b3c06,1,1);
  ppuStack_60 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_60);
LAB_1096a34dc:
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  return 1;
}



/* Entry: 1096a3590; end: 1096a3597;  */

void FUN_1096a3590(void)

{
  return;
}



/* Entry: 1096a3598; end: 1096a360b;  */

undefined8 * FUN_1096a3598(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1096a360c(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1096a3818(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 1096a360c; end: 1096a36db;  */

undefined1  [16] FUN_1096a360c(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  plVar11 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar11 = param_2;
  }
  plVar15 = (long *)param_1[1];
  if (param_2 >= plVar15 && param_2 != plVar15) {
LAB_1096a3654:
    plVar11 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar11 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        plVar11 = param_1;
        func_0x000107c31944();
        plVar6 = (long *)param_1[1];
        if (plVar6 != (long *)0x0) {
          uVar7 = (long)plVar6 - 1;
          if (((ulong)plVar6 & uVar7) == 0) {
            unaff_x25 = (long *)(uVar7 & (ulong)plVar11);
          }
          else {
            unaff_x25 = plVar11;
            if (plVar6 <= plVar11) {
              uVar10 = 0;
              if (plVar6 != (long *)0x0) {
                uVar10 = (ulong)plVar11 / (ulong)plVar6;
              }
              unaff_x25 = (long *)((long)plVar11 - uVar10 * (long)plVar6);
            }
          }
          puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            for (plVar15 = (long *)*puVar8; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
              plVar12 = (long *)plVar15[1];
              if (plVar12 == plVar11) {
                plVar12 = param_1;
                func_0x000104c4fbc4(param_1,plVar15 + 2,param_2);
                if (((ulong)plVar12 & 1) != 0) {
                  uVar5 = 0;
                  goto LAB_1096a3a54;
                }
              }
              else {
                if (((ulong)plVar6 & uVar7) == 0) {
                  plVar12 = (long *)((ulong)plVar12 & uVar7);
                }
                else if (plVar6 <= plVar12) {
                  uVar10 = 0;
                  if (plVar6 != (long *)0x0) {
                    uVar10 = (ulong)plVar12 / (ulong)plVar6;
                  }
                  plVar12 = (long *)((long)plVar12 - uVar10 * (long)plVar6);
                }
                if (plVar12 != unaff_x25) break;
              }
            }
          }
        }
        plVar15 = (long *)0x38;
        __Znwm();
        *plVar15 = 0;
        plVar15[1] = (long)plVar11;
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(plVar15 + 2,*param_3,param_3[1]);
        }
        else {
          lVar4 = *param_3;
          plVar15[3] = param_3[1];
          plVar15[2] = lVar4;
          plVar15[4] = param_3[2];
        }
        lVar4 = param_3[3];
        plVar15[6] = param_3[4];
        plVar15[5] = lVar4;
        if (plVar15[6] != 0) {
          piVar9 = (int *)(plVar15[6] + -8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar2) {
              *piVar9 = *piVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if ((plVar6 == (long *)0x0) ||
           (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))) {
          uVar7 = 1;
          if ((long *)0x2 < plVar6) {
            uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
          }
          uVar7 = uVar7 | (long)plVar6 << 1;
          uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar7 <= uVar10) {
            uVar7 = uVar10;
          }
          FUN_1096a360c(param_1,uVar7);
          plVar6 = (long *)param_1[1];
          if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar11);
          }
          else {
            unaff_x25 = plVar11;
            if (plVar6 <= plVar11) {
              uVar7 = 0;
              if (plVar6 != (long *)0x0) {
                uVar7 = (ulong)plVar11 / (ulong)plVar6;
              }
              unaff_x25 = (long *)((long)plVar11 - uVar7 * (long)plVar6);
            }
          }
        }
        lVar4 = *param_1;
        plVar11 = *(long **)(lVar4 + (long)unaff_x25 * 8);
        if (plVar11 == (long *)0x0) {
          plVar11 = param_1 + 2;
          *plVar15 = *plVar11;
          *plVar11 = (long)plVar15;
          *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar11;
          if (*plVar15 != 0) {
            plVar11 = *(long **)(*plVar15 + 8);
            if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)plVar6 - 1U);
            }
            else if (plVar6 <= plVar11) {
              uVar7 = 0;
              if (plVar6 != (long *)0x0) {
                uVar7 = (ulong)plVar11 / (ulong)plVar6;
              }
              plVar11 = (long *)((long)plVar11 - uVar7 * (long)plVar6);
            }
            *(long **)(*param_1 + (long)plVar11 * 8) = plVar15;
          }
        }
        else {
          *plVar15 = *plVar11;
          *plVar11 = (long)plVar15;
        }
        param_1[3] = param_1[3] + 1;
        uVar5 = 1;
LAB_1096a3a54:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar15;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar15 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar7);
        }
        else if (param_2 <= plVar15) {
          uVar10 = 0;
          if (param_2 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)param_2;
          }
          plVar15 = (long *)((long)plVar15 - uVar10 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar15 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar6;
        while (plVar12 != (long *)0x0) {
          plVar14 = (long *)plVar12[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar7);
          }
          else if (param_2 <= plVar14) {
            uVar10 = 0;
            if (param_2 != (long *)0x0) {
              uVar10 = (ulong)plVar14 / (ulong)param_2;
            }
            plVar14 = (long *)((long)plVar14 - uVar10 * (long)param_2);
          }
          plVar13 = plVar12;
          if (plVar14 != plVar15) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar14 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar14 * 8) = plVar6;
              plVar15 = plVar14;
            }
            else {
              *plVar6 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + (long)plVar14 * 8);
              **(long **)(lVar3 + (long)plVar14 * 8) = (long)plVar12;
              plVar13 = plVar6;
            }
          }
          plVar6 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    auVar17._8_8_ = plVar11;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar15) {
    plVar11 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar11) {
      plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
    }
    if (param_2 <= plVar11) {
      param_2 = plVar11;
    }
    if (param_2 < plVar15) goto LAB_1096a3654;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar11;
  return auVar16;
}



/* Entry: 1096a36dc; end: 1096a3817;  */

undefined1  [16] FUN_1096a36dc(long *param_1,ulong param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar16 = param_2;
  if (param_2 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      __ZdlPv();
      uVar16 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      plVar12 = param_1;
      func_0x000107c31944();
      plVar13 = (long *)param_1[1];
      if (plVar13 != (long *)0x0) {
        uVar16 = (long)plVar13 - 1;
        if (((ulong)plVar13 & uVar16) == 0) {
          unaff_x25 = (long *)(uVar16 & (ulong)plVar12);
        }
        else {
          unaff_x25 = plVar12;
          if (plVar13 <= plVar12) {
            uVar7 = 0;
            if (plVar13 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar13;
            }
            unaff_x25 = (long *)((long)plVar12 - uVar7 * (long)plVar13);
          }
        }
        puVar9 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            plVar10 = (long *)plVar15[1];
            if (plVar10 == plVar12) {
              plVar10 = param_1;
              func_0x000104c4fbc4(param_1,plVar15 + 2,param_2);
              if (((ulong)plVar10 & 1) != 0) {
                uVar6 = 0;
                goto LAB_1096a3a54;
              }
            }
            else {
              if (((ulong)plVar13 & uVar16) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar16);
              }
              else if (plVar13 <= plVar10) {
                uVar7 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar7 = (ulong)plVar10 / (ulong)plVar13;
                }
                plVar10 = (long *)((long)plVar10 - uVar7 * (long)plVar13);
              }
              if (plVar10 != unaff_x25) break;
            }
          }
        }
      }
      plVar15 = (long *)0x38;
      __Znwm();
      *plVar15 = 0;
      plVar15[1] = (long)plVar12;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(plVar15 + 2,*param_3,param_3[1]);
      }
      else {
        lVar5 = *param_3;
        plVar15[3] = param_3[1];
        plVar15[2] = lVar5;
        plVar15[4] = param_3[2];
      }
      lVar5 = param_3[3];
      plVar15[6] = param_3[4];
      plVar15[5] = lVar5;
      if (plVar15[6] != 0) {
        piVar11 = (int *)(plVar15[6] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = *piVar11 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if ((plVar13 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar13 < (float)(param_1[3] + 1))) {
        uVar16 = 1;
        if ((long *)0x2 < plVar13) {
          uVar16 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
        }
        uVar16 = uVar16 | (long)plVar13 << 1;
        uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar16 <= uVar7) {
          uVar16 = uVar7;
        }
        FUN_1096a360c(param_1,uVar16);
        plVar13 = (long *)param_1[1];
        if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar12);
        }
        else {
          unaff_x25 = plVar12;
          if (plVar13 <= plVar12) {
            uVar16 = 0;
            if (plVar13 != (long *)0x0) {
              uVar16 = (ulong)plVar12 / (ulong)plVar13;
            }
            unaff_x25 = (long *)((long)plVar12 - uVar16 * (long)plVar13);
          }
        }
      }
      lVar5 = *param_1;
      plVar12 = *(long **)(lVar5 + (long)unaff_x25 * 8);
      if (plVar12 == (long *)0x0) {
        plVar12 = param_1 + 2;
        *plVar15 = *plVar12;
        *plVar12 = (long)plVar15;
        *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar12;
        if (*plVar15 != 0) {
          plVar12 = *(long **)(*plVar15 + 8);
          if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
            plVar12 = (long *)((ulong)plVar12 & (long)plVar13 - 1U);
          }
          else if (plVar13 <= plVar12) {
            uVar16 = 0;
            if (plVar13 != (long *)0x0) {
              uVar16 = (ulong)plVar12 / (ulong)plVar13;
            }
            plVar12 = (long *)((long)plVar12 - uVar16 * (long)plVar13);
          }
          *(long **)(*param_1 + (long)plVar12 * 8) = plVar15;
        }
      }
      else {
        *plVar15 = *plVar12;
        *plVar12 = (long)plVar15;
      }
      param_1[3] = param_1[3] + 1;
      uVar6 = 1;
LAB_1096a3a54:
      auVar18._8_8_ = uVar6;
      auVar18._0_8_ = plVar15;
      return auVar18;
    }
    lVar4 = param_2 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar7 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
    plVar12 = (long *)param_1[2];
    if (plVar12 != (long *)0x0) {
      uVar7 = plVar12[1];
      uVar8 = param_2 - 1;
      if ((param_2 & uVar8) == 0) {
        uVar7 = uVar7 & uVar8;
      }
      else if (param_2 <= uVar7) {
        uVar14 = 0;
        if (param_2 != 0) {
          uVar14 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar14 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar13 = (long *)*plVar12;
      while (plVar13 != (long *)0x0) {
        uVar14 = plVar13[1];
        if ((param_2 & uVar8) == 0) {
          uVar14 = uVar14 & uVar8;
        }
        else if (param_2 <= uVar14) {
          uVar3 = 0;
          if (param_2 != 0) {
            uVar3 = uVar14 / param_2;
          }
          uVar14 = uVar14 - uVar3 * param_2;
        }
        plVar15 = plVar13;
        if (uVar14 != uVar7) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar14 * 8) == 0) {
            *(long **)(lVar4 + uVar14 * 8) = plVar12;
            uVar7 = uVar14;
          }
          else {
            *plVar12 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar4 + uVar14 * 8);
            **(long **)(lVar4 + uVar14 * 8) = (long)plVar13;
            plVar15 = plVar12;
          }
        }
        plVar12 = plVar15;
        plVar13 = (long *)*plVar15;
      }
    }
  }
  auVar17._8_8_ = uVar16;
  auVar17._0_8_ = lVar5;
  return auVar17;
}



/* Entry: 1096a3818; end: 1096a3a93;  */

undefined1  [16] FUN_1096a3818(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *unaff_x25;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  plVar9 = param_1;
  func_0x000107c31944();
  plVar11 = (long *)param_1[1];
  if (plVar11 != (long *)0x0) {
    uVar12 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar12) == 0) {
      unaff_x25 = (long *)(uVar12 & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar11 <= plVar9) {
        uVar8 = 0;
        if (plVar11 != (long *)0x0) {
          uVar8 = (ulong)plVar9 / (ulong)plVar11;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar8 * (long)plVar11);
      }
    }
    puVar4 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar4; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        plVar5 = (long *)plVar10[1];
        if (plVar5 == plVar9) {
          plVar5 = param_1;
          func_0x000104c4fbc4(param_1,plVar10 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1096a3a54;
          }
        }
        else {
          if (((ulong)plVar11 & uVar12) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar12);
          }
          else if (plVar11 <= plVar5) {
            uVar8 = 0;
            if (plVar11 != (long *)0x0) {
              uVar8 = (ulong)plVar5 / (ulong)plVar11;
            }
            plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar11);
          }
          if (plVar5 != unaff_x25) break;
        }
      }
    }
  }
  plVar10 = (long *)0x38;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = (long)plVar9;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar10 + 2,*param_3,param_3[1]);
  }
  else {
    lVar7 = *param_3;
    plVar10[3] = param_3[1];
    plVar10[2] = lVar7;
    plVar10[4] = param_3[2];
  }
  lVar7 = param_3[3];
  plVar10[6] = param_3[4];
  plVar10[5] = lVar7;
  if (plVar10[6] != 0) {
    piVar6 = (int *)(plVar10[6] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((plVar11 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar11 < (float)(param_1[3] + 1))) {
    uVar12 = 1;
    if ((long *)0x2 < plVar11) {
      uVar12 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
    }
    uVar12 = uVar12 | (long)plVar11 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar12 <= uVar8) {
      uVar12 = uVar8;
    }
    FUN_1096a360c(param_1,uVar12);
    plVar11 = (long *)param_1[1];
    if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar11 - 1U & (ulong)plVar9);
    }
    else {
      unaff_x25 = plVar9;
      if (plVar11 <= plVar9) {
        uVar12 = 0;
        if (plVar11 != (long *)0x0) {
          uVar12 = (ulong)plVar9 / (ulong)plVar11;
        }
        unaff_x25 = (long *)((long)plVar9 - uVar12 * (long)plVar11);
      }
    }
  }
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + (long)unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
    *(long **)(lVar7 + (long)unaff_x25 * 8) = plVar9;
    if (*plVar10 != 0) {
      plVar9 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar9) {
        uVar12 = 0;
        if (plVar11 != (long *)0x0) {
          uVar12 = (ulong)plVar9 / (ulong)plVar11;
        }
        plVar9 = (long *)((long)plVar9 - uVar12 * (long)plVar11);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_1096a3a54:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar10;
  return auVar13;
}



/* Entry: 1096a3a94; end: 1096a3adb;  */

void FUN_1096a3a94(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1096a3adc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1096a3adc; end: 1096a3b23;  */

void FUN_1096a3adc(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}


