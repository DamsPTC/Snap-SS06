/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108657878; end: 108657887;  */

undefined8 FUN_108657878(void)

{
  return 0xffffffff;
}



/* Entry: 108657888; end: 10865790b;  */

long FUN_108657888(long param_1)

{
  func_0x000107c279a4(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10865790c; end: 108657a03;  */

void FUN_10865790c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108657a04; end: 108657b47;  */

void FUN_108657a04(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long *plStack_48;
  
  plVar2 = (long *)0x19f;
  func_0x000107c2b474();
  plStack_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar6 = *plVar2;
    lVar3 = lVar6;
    func_0x000107c2b454();
    lStack_50 = lVar3;
    if ((lVar3 == 0) ||
       (lVar4 = lVar6, func_0x000107c2b488(lVar6,lVar3,param_2,param_3,0), (int)lVar4 == 0)) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      uVar1 = 0x21;
      if (param_4 == 0) {
        uVar1 = 0x41;
      }
      func_0x000107c27fdc(&lStack_70,uVar1);
      uVar5 = 2;
      if (param_4 == 0) {
        uVar5 = 4;
      }
      func_0x000107c2b484(lVar6,lVar3,uVar5,lStack_70,lStack_68 - lStack_70,0);
      if (lVar6 == 0) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[1] = lStack_68;
        *param_1 = lStack_70;
        param_1[2] = lStack_60;
        lStack_68 = 0;
        lStack_60 = 0;
        lStack_70 = 0;
      }
      *(bool *)(param_1 + 3) = lVar6 != 0;
      func_0x000107c27914(&lStack_70);
    }
    FUN_108657bb0(&lStack_50);
  }
  FUN_108657b70(&plStack_48);
  return;
}



/* Entry: 108657b48; end: 108657b6f;  */

/* WARNING: Removing unreachable block (ram,0x000108657a7c) */
/* WARNING: Removing unreachable block (ram,0x000108657a94) */

void FUN_108657b48(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long *plStack_48;
  
  if (param_3 != 0x41) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  plVar1 = (long *)0x19f;
  func_0x000107c2b474();
  plStack_48 = plVar1;
  if (plVar1 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    lVar4 = *plVar1;
    lVar2 = lVar4;
    func_0x000107c2b454();
    lStack_50 = lVar2;
    if ((lVar2 == 0) ||
       (lVar3 = lVar4, func_0x000107c2b488(lVar4,lVar2,param_2,0x41,0), (int)lVar3 == 0)) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      func_0x000107c27fdc(&lStack_70,0x21);
      func_0x000107c2b484(lVar4,lVar2,2,lStack_70,lStack_68 - lStack_70,0);
      if (lVar4 == 0) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        param_1[1] = lStack_68;
        *param_1 = lStack_70;
        param_1[2] = lStack_60;
        lStack_68 = 0;
        lStack_60 = 0;
        lStack_70 = 0;
      }
      *(bool *)(param_1 + 3) = lVar4 != 0;
      func_0x000107c27914(&lStack_70);
    }
    FUN_108657bb0(&lStack_50);
  }
  FUN_108657b70(&plStack_48);
  return;
}



/* Entry: 108657b70; end: 108657b97;  */

undefined8 FUN_108657b70(undefined8 param_1)

{
  FUN_108657b98(param_1,0);
  return param_1;
}



/* Entry: 108657b98; end: 108657baf;  */

/* WARNING: Possible PIC construction at 0x000100414b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100414b88) */

void FUN_108657b98(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = (int)puVar2 + 0x20;
    func_0x00010021f0b0();
    if (iVar1 != 0) {
      if ((puVar2[5] != 0) && (pcVar3 = *(code **)(puVar2[5] + 0x18), pcVar3 != (code *)0x0)) {
        (*pcVar3)(puVar2);
      }
      func_0x000100411da0(*puVar2);
      func_0x0001004cb584(puVar2[1]);
      if (puVar2[2] != 0) {
        plVar4 = (long *)(puVar2[2] + -8);
        if (*plVar4 + 8 != 0) {
          func_0x000107c60ee4(plVar4,*plVar4 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar4);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 108657bb0; end: 108657bdf;  */

long * FUN_108657bb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c2b458();
  }
  return param_1;
}



/* Entry: 108657be0; end: 108657beb;  */

void FUN_108657be0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 108657bec; end: 108657dc3;  */

void FUN_108657bec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  long *plStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  puVar3 = &uStack_e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x19f;
  func_0x000107c2b44c();
  puVar4 = puVar1;
  puStack_88 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c2b454();
    puStack_90 = puVar2;
    func_0x000107c2b338(param_4,param_5,0);
    lStack_98 = param_4;
    func_0x000107c2b454();
    ppuStack_c8 = &puStack_88;
    ppuStack_c0 = &puStack_90;
    plStack_b8 = &lStack_98;
    ppuStack_b0 = &puStack_a0;
    puStack_a8 = &uStack_79;
    puStack_a0 = puVar4;
    if (puVar2 == (undefined8 *)0x0) {
      FUN_108658010();
    }
    else {
      func_0x000107c2b488(puVar1,puVar2,param_2,param_3,0);
      if ((int)puVar1 == 1) {
        if (lStack_98 == 0) {
          FUN_108658010();
          puVar4 = puVar1;
        }
        else if (puStack_a0 == (undefined8 *)0x0) {
          FUN_108658010();
          puVar4 = puVar1;
        }
        else {
          puVar4 = puStack_88;
          func_0x000107c2b468(puStack_88,puStack_a0,0,puStack_90,lStack_98,0);
          if ((int)puVar4 == 1) {
            puVar4 = puStack_88;
            func_0x000107c2b484(puStack_88,puStack_a0,2,&uStack_79,0x21,0);
            if (puVar4 == (undefined8 *)0x21) {
              func_0x000107c282ec(&uStack_e0,auStack_78,&lStack_58);
              FUN_108658010();
              param_1[1] = uStack_d8;
              *param_1 = uStack_e0;
              param_1[2] = uStack_d0;
              uStack_d8 = 0;
              uStack_d0 = 0;
              uStack_e0 = 0;
              *(undefined1 *)(param_1 + 3) = 1;
              func_0x000107c27914();
              puVar4 = puVar3;
              goto LAB_108657d70;
            }
            FUN_108658010();
          }
          else {
            FUN_108658010();
          }
        }
      }
      else {
        FUN_108658010();
        puVar4 = puVar1;
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_108657d70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914(&uStack_e0);
  __Unwind_Resume();
  if (*(long *)*puVar4 != 0) {
    func_0x000107c2b448();
  }
  if (*(long *)puVar4[1] != 0) {
    func_0x000107c2b458();
  }
  if (*(long *)puVar4[2] != 0) {
    func_0x000107c2b31c();
  }
  if (*(long *)puVar4[3] != 0) {
    func_0x000107c2b458();
  }
  puVar4 = (undefined8 *)puVar4[4];
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  return;
}



/* Entry: 108657dc4; end: 108657e2f;  */

void FUN_108657dc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)*param_1 != 0) {
    func_0x000107c2b448();
  }
  if (*(long *)param_1[1] != 0) {
    func_0x000107c2b458();
  }
  if (*(long *)param_1[2] != 0) {
    func_0x000107c2b31c();
  }
  if (*(long *)param_1[3] != 0) {
    func_0x000107c2b458();
  }
  puVar1 = (undefined8 *)param_1[4];
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 108657e30; end: 108657e87;  */

ulong FUN_108657e30(byte *param_1,undefined8 param_2)

{
  undefined4 uStack_38;
  undefined1 uStack_34;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b43c(param_1,param_2,&uStack_38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return (ulong)CONCAT14(uStack_34,uStack_38);
  }
  ___stack_chk_fail();
  return (ulong)*param_1 << 0x20 | (ulong)param_1[1] << 0x18 | (ulong)param_1[2] << 0x10 |
         (ulong)param_1[3] << 8 | (ulong)param_1[4];
}



/* Entry: 108657e88; end: 108657eb3;  */

ulong FUN_108657e88(byte *param_1)

{
  return (ulong)*param_1 << 0x20 | (ulong)param_1[1] << 0x18 | (ulong)param_1[2] << 0x10 |
         (ulong)param_1[3] << 8 | (ulong)param_1[4];
}



/* Entry: 108657eb4; end: 108657eef;  */

void FUN_108657eb4(long *param_1)

{
  long lVar1;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  lVar1 = *param_1;
  FUN_108657e30(lVar1,param_1[1] - lVar1);
  uStack_18 = (undefined4)lVar1;
  uStack_14 = (undefined1)((ulong)lVar1 >> 0x20);
  FUN_108657e88(&uStack_18);
  return;
}



/* Entry: 108657ef0; end: 10865800f;  */

undefined8 * FUN_108657ef0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 auStack_58 [3];
  
  if (*param_2 == param_2[1]) {
    puVar2 = &UNK_10f4afc22;
    func_0x00010002b82c(param_1,&UNK_10f4afc22);
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
  uVar1 = (param_2[1] - *param_2) / 0x18;
  if (0x31 < uVar1) {
    uVar1 = 0x32;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_1,uVar1 * 0x25 + -1);
  for (lVar4 = 0; uVar1 * 0x18 - lVar4 != 0; lVar4 = lVar4 + 0x18) {
    if (lVar4 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f4afc23);
    }
    func_0x000107c29e04(auStack_58,*param_2 + lVar4);
    func_0x000107c27fc4(param_1,auStack_58);
    puVar3 = auStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
  }
  return puVar3;
}



/* Entry: 108658010; end: 108658017;  */

void FUN_108658010(void)

{
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  if (*in_stack_00000018 != 0) {
    func_0x000107c2b448();
  }
  if (*in_stack_00000020 != 0) {
    func_0x000107c2b458();
  }
  if (*in_stack_00000028 != 0) {
    func_0x000107c2b31c();
  }
  if (*in_stack_00000030 != 0) {
    func_0x000107c2b458();
  }
  *(undefined1 *)(in_stack_00000038 + 4) = 0;
  in_stack_00000038[1] = 0;
  *in_stack_00000038 = 0;
  in_stack_00000038[3] = 0;
  in_stack_00000038[2] = 0;
  return;
}



/* Entry: 108658018; end: 1086580ff;  */

void FUN_108658018(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  
  ppuStack_c8 = &ppuStack_c8;
  uStack_b8 = 0;
  lVar2 = param_3;
  ppuStack_c0 = ppuStack_c8;
  while (lVar2 = *(long *)(lVar2 + 8), lVar2 != param_3) {
    FUN_1086596d4(&ppuStack_c8,lVar2 + 0x10);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uStack_b0 = param_4;
  lStack_a8 = param_2;
  func_0x00010865abec(auStack_a0,&ppuStack_c8);
  func_0x000107c288a8(auStack_78,param_2 + 0x10);
  FUN_10865ace0(auStack_70,auStack_a0);
  FUN_10865ac3c(param_1,auStack_70,uVar1);
  func_0x00010865ac10(auStack_70);
  func_0x00010865ac10(auStack_a0);
  FUN_10865a014(&ppuStack_c8);
  return;
}



/* Entry: 108658100; end: 108658b57;  */

void FUN_108658100(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *puVar18;
  undefined8 *extraout_x8_06;
  uint extraout_w9;
  uint extraout_w9_00;
  ulong uVar19;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  long *plVar20;
  ulong extraout_x10;
  long *plVar21;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x12;
  long *plVar22;
  long lVar23;
  long extraout_x14;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  uint uVar30;
  long *plVar31;
  long lStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_68;
  
  puVar11 = (undefined8 *)0xd0;
  __Znwm();
  *puVar11 = FUN_10865c87c;
  puVar11[1] = FUN_10865cba4;
  plVar1 = puVar11 + 4;
  puVar11[0x15] = param_1;
  plVar27 = puVar11 + 2;
  FUN_10865aae0();
  func_0x00010865d1dc();
  plVar13 = puVar11 + 7;
  *plVar13 = 0;
  plVar2 = puVar11 + 10;
  plVar16 = puVar11 + 0x17;
  *plVar16 = 0;
  plVar3 = puVar11 + 0xd;
  plVar12 = puVar11 + 0x13;
  plVar17 = puVar11 + 0x14;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = plVar2;
  puVar18 = puVar11 + 0xb;
  *puVar18 = plVar2;
  puVar11[0xc] = 0;
  puVar11[0x18] = 0;
  plVar25 = param_2;
  while (plVar25 = (long *)plVar25[1], plVar25 != param_2) {
    func_0x000107c29ee4(&lStack_88,plVar25 + 2);
    plVar27 = &lStack_88;
    FUN_1086a5fbc();
    if (((ulong)plVar27 & 1) == 0) {
      plVar28 = plVar16;
      func_0x000108659f30(plVar16,plVar25 + 2);
      plVar27 = plVar28;
      func_0x00010865d530();
      if (((ulong)plVar28 & 1) == 0) {
        plVar28 = param_1 + 0x14;
        FUN_10865b210(plVar28,plVar25 + 2);
        if (plVar28 == (long *)0x0) {
          plVar27 = plVar13;
          func_0x00010065d008(plVar13,plVar25 + 2);
        }
        else {
          plVar27 = plVar2;
          FUN_108658b9c(plVar2,plVar28[5]);
        }
      }
    }
    else {
      func_0x00010865d530();
    }
  }
  if (puVar11[7] != puVar11[8]) {
    plVar16 = param_1;
    FUN_108658bd8(puVar11 + 0x12,param_1,plVar13,param_3);
    plVar28 = puVar11 + 0xe;
    *plVar28 = (long)plVar3;
    puVar11[0xd] = puVar11 + 0xd;
    puVar11[0xf] = 0;
    plVar4 = (long *)puVar11[8];
    plVar27 = param_1 + 0x16;
    for (plVar25 = (long *)puVar11[7]; plVar25 != plVar4; plVar25 = plVar25 + 3) {
      *plVar17 = puVar11[0x12];
      if (puVar11[0x12] != 0) {
        do {
          func_0x000107c31d08();
        } while (extraout_w10 != 0);
      }
      lVar14 = param_1[0x1a];
      lVar23 = param_1[0x19];
      puVar11[0x11] = param_1[0x1a];
      puVar11[0x10] = lVar23;
      if (lVar14 != 0) {
        plVar16 = (long *)(lVar14 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_108659334(plVar12,plVar25,plVar17,param_3,puVar11 + 0x10);
      func_0x000107c288a4(puVar11 + 0x10);
      func_0x000107c27f9c(plVar17);
      FUN_108658b9c(plVar2,*plVar12);
      plVar20 = plVar25;
      FUN_108848654();
      plVar31 = (long *)param_1[0x15];
      plVar16 = plVar20;
      if (plVar31 != (long *)0x0) {
        uVar29 = (long)plVar31 - 1;
        uVar30 = (uint)plVar31;
        if (((ulong)plVar31 & uVar29) == 0) {
          param_2 = (long *)((ulong)(uVar30 - 1) & (ulong)plVar20);
        }
        else {
          param_2 = plVar20;
          if (plVar31 <= plVar20) {
            uVar7 = 0;
            if (uVar30 != 0) {
              uVar7 = (uint)plVar20 / uVar30;
            }
            param_2 = (long *)(ulong)((uint)plVar20 - uVar7 * uVar30);
          }
        }
        plVar26 = *(long **)(param_1[0x14] + (long)param_2 * 8);
        if (plVar26 != (long *)0x0) {
          do {
            while( true ) {
              plVar26 = (long *)*plVar26;
              if (plVar26 == (long *)0x0) goto LAB_108658394;
              plVar15 = (long *)plVar26[1];
              if (plVar15 != plVar20) break;
              plVar16 = plVar26 + 2;
              func_0x0001006760a8(plVar16,plVar25);
              if (((ulong)plVar16 & 1) != 0) goto LAB_10865866c;
            }
            if (((ulong)plVar31 & uVar29) == 0) {
              plVar15 = (long *)((ulong)plVar15 & uVar29);
            }
            else if (plVar31 <= plVar15) {
              uVar19 = 0;
              if (plVar31 != (long *)0x0) {
                uVar19 = (ulong)plVar15 / (ulong)plVar31;
              }
              plVar15 = (long *)((long)plVar15 - uVar19 * (long)plVar31);
            }
          } while (plVar15 == param_2);
        }
      }
LAB_108658394:
      func_0x00010865d460();
      puVar11[4] = plVar16;
      puVar11[5] = plVar27;
      puVar11[6] = 0;
      *plVar16 = 0;
      plVar16[1] = (long)plVar20;
      func_0x000107c27994(plVar16 + 2,plVar25);
      lVar14 = *plVar12;
      plVar16[5] = lVar14;
      if (lVar14 != 0) {
        do {
          func_0x000107c31d08();
        } while (extraout_w10_00 != 0);
      }
      *(undefined1 *)(puVar11 + 6) = 1;
      if ((plVar31 == (long *)0x0) ||
         (*(float *)(param_1 + 0x18) * (float)plVar31 < (float)(param_1[0x17] + 1))) {
        uVar29 = 1;
        if ((long *)0x2 < plVar31) {
          uVar29 = (ulong)(((ulong)plVar31 & (long)plVar31 - 1U) != 0);
        }
        plVar16 = (long *)(uVar29 | (long)plVar31 << 1);
        plVar31 = (long *)(long)((float)(param_1[0x17] + 1) / *(float *)(param_1 + 0x18));
        if (plVar16 <= plVar31) {
          plVar16 = plVar31;
        }
        if ((long)plVar16 - 1U == 0) {
          plVar16 = (long *)0x2;
        }
        else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        plVar31 = (long *)param_1[0x15];
        if (plVar31 < plVar16) {
LAB_108658454:
          if ((ulong)plVar16 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_108658a70;
          }
          lVar14 = (long)plVar16 << 3;
          __Znwm(lVar14);
          FUN_10865b2ec(param_1 + 0x14,lVar14);
          param_1[0x15] = (long)plVar16;
          lVar14 = param_1[0x14];
          for (plVar31 = (long *)0x0; plVar16 != plVar31; plVar31 = (long *)((long)plVar31 + 1)) {
            *(undefined8 *)(lVar14 + (long)plVar31 * 8) = 0;
          }
          plVar26 = (long *)*plVar27;
          plVar31 = plVar16;
          if (plVar26 != (long *)0x0) {
            plVar15 = (long *)plVar26[1];
            uVar19 = (long)plVar16 - 1;
            uVar29 = 0;
            if (plVar16 != (long *)0x0) {
              uVar29 = (ulong)plVar15 / (ulong)plVar16;
            }
            plVar21 = plVar15;
            if (plVar16 <= plVar15) {
              plVar21 = (long *)((long)plVar15 - uVar29 * (long)plVar16);
            }
            if (((ulong)plVar16 & uVar19) == 0) {
              plVar21 = (long *)((ulong)plVar15 & uVar19);
            }
            *(long **)(lVar14 + (long)plVar21 * 8) = plVar27;
            while (plVar15 = plVar26, plVar26 = (long *)*plVar15, plVar26 != (long *)0x0) {
              plVar22 = (long *)plVar26[1];
              if (((ulong)plVar16 & uVar19) == 0) {
                plVar22 = (long *)((ulong)plVar22 & uVar19);
              }
              else if (plVar16 <= plVar22) {
                uVar29 = 0;
                if (plVar16 != (long *)0x0) {
                  uVar29 = (ulong)plVar22 / (ulong)plVar16;
                }
                plVar22 = (long *)((long)plVar22 - uVar29 * (long)plVar16);
              }
              if (plVar22 != plVar21) {
                if (*(long *)(lVar14 + (long)plVar22 * 8) == 0) {
                  *(long **)(lVar14 + (long)plVar22 * 8) = plVar15;
                  plVar21 = plVar22;
                }
                else {
                  *plVar15 = *plVar26;
                  *plVar26 = **(undefined8 **)(lVar14 + (long)plVar22 * 8);
                  **(long **)(lVar14 + (long)plVar22 * 8) = (long)plVar26;
                  plVar26 = plVar15;
                }
              }
            }
          }
        }
        else if (plVar16 < plVar31) {
          plVar26 = (long *)(long)((float)(ulong)param_1[0x17] / *(float *)(param_1 + 0x18));
          if ((plVar31 < (long *)0x3) || (((ulong)plVar31 & (long)plVar31 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar26) {
            plVar26 = (long *)(1L << (-LZCOUNT((long)plVar26 + -1) & 0x3fU));
          }
          if (plVar16 <= plVar26) {
            plVar16 = plVar26;
          }
          if (plVar16 < plVar31) {
            if (plVar16 != (long *)0x0) goto LAB_108658454;
            FUN_10865b2ec(param_1 + 0x14,0);
            param_1[0x15] = 0;
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = (long *)param_1[0x15];
          }
        }
        if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
          param_2 = (long *)((ulong)((int)plVar31 - 1) & (ulong)plVar20);
        }
        else {
          param_2 = plVar20;
          if (plVar31 <= plVar20) {
            uVar29 = 0;
            if (plVar31 != (long *)0x0) {
              uVar29 = (ulong)plVar20 / (ulong)plVar31;
            }
            param_2 = (long *)((long)plVar20 - uVar29 * (long)plVar31);
          }
        }
      }
      lVar14 = param_1[0x14];
      plVar20 = *(long **)(lVar14 + (long)param_2 * 8);
      plVar16 = (long *)*plVar1;
      if (plVar20 == (long *)0x0) {
        *plVar16 = *plVar27;
        *plVar27 = (long)plVar16;
        *(long **)(lVar14 + (long)param_2 * 8) = plVar27;
        if (*plVar16 != 0) {
          plVar20 = *(long **)(*plVar16 + 8);
          if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
            plVar20 = (long *)((ulong)plVar20 & (long)plVar31 - 1U);
          }
          else if (plVar31 <= plVar20) {
            uVar29 = 0;
            if (plVar31 != (long *)0x0) {
              uVar29 = (ulong)plVar20 / (ulong)plVar31;
            }
            plVar20 = (long *)((long)plVar20 - uVar29 * (long)plVar31);
          }
          *(long **)(lVar14 + (long)plVar20 * 8) = plVar16;
        }
      }
      else {
        *plVar16 = *plVar20;
        *plVar20 = (long)plVar16;
      }
      *plVar1 = 0;
      param_1[0x17] = param_1[0x17] + 1;
      FUN_10865b304();
      plVar16 = plVar3;
      FUN_1086596d4(plVar3,plVar25);
LAB_10865866c:
      func_0x00010865d570();
    }
    plVar27 = (long *)*puVar18;
    uVar10 = plVar27 == plVar2;
    if ((bool)uVar10) {
      func_0x00010bcd3464(plVar12);
    }
    else {
      lVar14 = 0;
      for (plVar17 = plVar27; plVar17 != plVar2; plVar17 = (long *)plVar17[1]) {
        lVar14 = lVar14 + 1;
      }
      FUN_10865b428(&lStack_88);
      FUN_10865b464(&uStack_68,lVar14);
      uVar8 = uStack_68;
      uStack_68 = 0;
      FUN_10865b56c(lStack_78 + 0x18,uVar8);
      func_0x00010865b5d0(&uStack_68);
      *(long *)(lStack_78 + 8) = lVar14;
      func_0x000107c2887c(lStack_78,auStack_80);
      lVar14 = 0;
      for (; uVar10 = plVar27 == plVar2, !(bool)uVar10; plVar27 = (long *)plVar27[1]) {
        FUN_10865b4a4(lStack_78,lVar14,plVar27 + 2);
        lVar14 = lVar14 + 1;
      }
      *plVar12 = lStack_88;
      lStack_88 = 0;
      plVar16 = &lStack_88;
      FUN_10865b628();
    }
    *plVar1 = *plVar12;
    do {
      func_0x000107c31d08();
    } while (extraout_w10_01 != 0);
    func_0x000107c31d54(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x19) = 0;
      func_0x00010865d510();
      if (*plVar16 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010865d368();
      plVar27 = extraout_x8;
      do {
        if (*plVar27 == 0) {
          func_0x000107c31d1c();
          plVar27 = extraout_x8_01;
          uVar30 = extraout_w10_03;
          uVar29 = extraout_x11_00;
        }
        else {
          func_0x00010865d0b4();
          plVar27 = extraout_x8_00;
          uVar30 = extraout_w10_02;
          uVar29 = extraout_x11;
        }
        if ((uVar29 & 1) != 0) {
          func_0x00010865cf74();
          if ((bool)uVar10) {
            func_0x00010865cf40();
            func_0x00010865ced8();
            func_0x00010865ce84();
          }
          func_0x00010865ce5c();
          puVar18 = extraout_x8_06;
LAB_1086589e4:
          *puVar18 = 0;
          return;
        }
      } while ((uVar30 >> 1 & 1) == 0);
    }
    func_0x000107c28834(plVar1);
    func_0x000107c27f9c(plVar1);
    func_0x00010865d570();
    while( true ) {
      plVar28 = (long *)*plVar28;
      uVar10 = plVar28 == plVar3;
      if ((bool)uVar10) break;
      plVar27 = (long *)(puVar11[0x15] + 0xa0);
      FUN_10865b210(plVar27,plVar28 + 2);
      if (plVar27 != (long *)0x0) {
        func_0x00010865d41c();
        if ((bool)uVar10) {
          uVar29 = extraout_x12 & extraout_x8_02;
        }
        else {
          uVar29 = extraout_x8_02;
          if (extraout_x9 <= extraout_x8_02) {
            uVar29 = 0;
            if (extraout_x9 != 0) {
              uVar29 = extraout_x8_02 / extraout_x9;
            }
            uVar29 = extraout_x8_02 - uVar29 * extraout_x9;
          }
        }
        lVar14 = *plVar27;
        lVar23 = *(long *)(extraout_x14 + 0xa0);
        plVar12 = *(long **)(lVar23 + uVar29 * 8);
        do {
          plVar17 = plVar12;
          plVar12 = (long *)*plVar17;
        } while ((long *)*plVar17 != plVar27);
        if (plVar17 == (long *)(extraout_x14 + 0xb0)) {
LAB_108658868:
          if (lVar14 == 0) {
LAB_10865889c:
            *(undefined8 *)(lVar23 + uVar29 * 8) = 0;
            lVar14 = *plVar27;
            goto LAB_1086588a4;
          }
          uVar19 = *(ulong *)(lVar14 + 8);
          if ((extraout_x9 & extraout_x12) == 0) {
            uVar24 = uVar19 & extraout_x12;
          }
          else {
            uVar24 = uVar19;
            if (extraout_x9 <= uVar19) {
              uVar24 = 0;
              if (extraout_x9 != 0) {
                uVar24 = uVar19 / extraout_x9;
              }
              uVar24 = uVar19 - uVar24 * extraout_x9;
            }
          }
          if (uVar24 != uVar29) goto LAB_10865889c;
LAB_1086588ac:
          if ((extraout_x9 & extraout_x12) == 0) {
            uVar19 = uVar19 & extraout_x12;
          }
          else if (extraout_x9 <= uVar19) {
            uVar24 = 0;
            if (extraout_x9 != 0) {
              uVar24 = uVar19 / extraout_x9;
            }
            uVar19 = uVar19 - uVar24 * extraout_x9;
          }
          if (uVar19 != uVar29) {
            *(long **)(lVar23 + uVar19 * 8) = plVar17;
          }
        }
        else {
          uVar19 = plVar17[1];
          if ((extraout_x9 & extraout_x12) == 0) {
            uVar19 = uVar19 & extraout_x12;
          }
          else if (extraout_x9 <= uVar19) {
            uVar24 = 0;
            if (extraout_x9 != 0) {
              uVar24 = uVar19 / extraout_x9;
            }
            uVar19 = uVar19 - uVar24 * extraout_x9;
          }
          if (uVar19 != uVar29) goto LAB_108658868;
LAB_1086588a4:
          if (lVar14 != 0) {
            uVar19 = *(ulong *)(lVar14 + 8);
            goto LAB_1086588ac;
          }
        }
        func_0x00010865d230();
        *(undefined1 *)(puVar11 + 6) = 1;
        *(undefined4 *)((long)puVar11 + 0x31) = 0;
        *(undefined4 *)((long)puVar11 + 0x34) = 0;
        FUN_10865b304(plVar1);
      }
      plVar28 = plVar28 + 1;
    }
    plVar27 = plVar3;
    FUN_10865a014();
    func_0x00010865d0c0();
  }
  puVar11[4] = puVar11 + 4;
  puVar11[5] = plVar1;
  puVar11[6] = 0;
  func_0x00010865d510();
  plVar12 = plVar27;
  do {
    plVar17 = (long *)*puVar18;
    puVar11[0x16] = plVar17;
    if (plVar17 == plVar2) {
      FUN_108659714(puVar11 + 2,plVar1);
      FUN_10865a078(plVar1);
      FUN_10865a0dc(plVar2);
      func_0x000107c27a04(plVar13);
      func_0x00010865cfe4();
      func_0x00010865d010();
      return;
    }
    puVar11[0x12] = plVar17[2];
    uVar10 = 0;
    do {
      func_0x000107c31d08();
    } while (extraout_w10_04 != 0);
    func_0x000107c31d54(puVar11[0x12]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar11 + 0x19) = 1;
      lVar14 = puVar11[0x12];
      if (*plVar27 == 0) {
        func_0x000107c3a5c0();
      }
      plVar17 = (long *)(lVar14 + 0x10);
      do {
        if (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          uVar10 = cVar5 == '\0';
          uVar30 = 0;
          if ((bool)uVar10) goto LAB_1086589c4;
        }
        else {
          func_0x00010865d600();
          plVar17 = extraout_x8_03;
          uVar30 = extraout_w9;
          if ((extraout_x10 & 1) != 0) {
LAB_1086589c4:
            func_0x000107c31d14();
            if ((bool)uVar10) {
              func_0x00010865cf40();
              func_0x00010865cf20();
              func_0x00010865cea4();
              *(long **)(lVar14 + 0x90) = plVar12;
            }
            func_0x00010865cef8();
            puVar18 = extraout_x8_05;
            goto LAB_1086589e4;
          }
        }
      } while ((uVar30 >> 1 & 1) == 0);
    }
    func_0x00010865d648();
    if ((extraout_w9_00 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(plVar3,extraout_x8_04 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr();
LAB_108658a70:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x108658a74);
      (*pcVar9)();
    }
    plVar12 = plVar1;
    func_0x0001086596f4(plVar1,extraout_x8_04 + 0x98);
    lVar14 = puVar11[0x16];
    func_0x00010865d0c0();
    puVar18 = (undefined8 *)(lVar14 + 8);
  } while( true );
}



/* Entry: 108658b58; end: 108658b9b;  */

void FUN_108658b58(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000107c31d74();
  return;
}



/* Entry: 108658b9c; end: 108658bd7;  */

void FUN_108658b9c(void)

{
  undefined8 *puVar1;
  int extraout_w10;
  long unaff_x20;
  
  func_0x000107c31d9c();
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = unaff_x20;
  if (unaff_x20 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  func_0x00010865cfc4();
  return;
}



/* Entry: 108658bd8; end: 108659333;  */

void FUN_108658bd8(long param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long lVar11;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x8_08;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 auStack_88 [4];
  undefined4 uStack_68;
  
  puVar7 = (undefined8 *)0x208;
  __Znwm();
  *puVar7 = FUN_10865bf98;
  puVar7[1] = FUN_10865c5e4;
  *(undefined4 *)(puVar7 + 0x40) = param_3;
  puVar7[0x3d] = param_1;
  puVar7[0x3e] = param_2;
  puVar8 = puVar7 + 2;
  func_0x00010865ba40(puVar8);
  func_0x00010865d4e8();
  func_0x00010865d40c();
  uStack_68 = 0x235;
  func_0x00010865d564();
  func_0x000107c2884c(puVar7 + 0x2c,puVar8);
  func_0x0001006a64d4(puVar7 + 0xe,param_1 + 200,puVar7 + 0x2c,0,0);
  puVar8 = puVar7 + 0x2c;
  func_0x000107c2882c(puVar8);
  func_0x00010865d1e8();
  plVar12 = *(long **)(param_1 + 200);
  func_0x00010865d40c();
  uStack_68 = 0x236;
  func_0x00010865d564();
  (**(code **)(*plVar12 + 0x78))(plVar12,puVar8,(param_2[1] - *param_2) / 0x18);
  plVar1 = puVar7 + 0x31;
  func_0x00010865d1e8();
  *(undefined1 *)(puVar7 + 0x31) = 0;
  *(undefined1 *)(puVar7 + 0x34) = 0;
  func_0x00010865cee8();
  lVar11 = 0;
  plVar10 = plVar12;
  do {
    puVar7[0x3f] = lVar11;
    func_0x00010865d460();
    plVar13 = plVar10 + 1;
    plVar10[2] = 0;
    *plVar13 = 0;
    *plVar10 = (long)&PTR_FUN_110a60c38;
    plVar15 = plVar10 + 3;
    *plVar15 = (long)&PTR_FUN_110a5fea0;
    plVar10[4] = 0;
    puVar7[4] = 0;
    func_0x00010865d000();
    func_0x00010865d348();
    FUN_10865b888(puVar7 + 0x18);
    func_0x00010865d0e8();
    func_0x00010865d120();
    func_0x000107c27fec(puVar7 + 0x18);
    func_0x00010865d4bc();
    func_0x00010865d4b0();
    puVar8 = puVar7 + 5;
    func_0x000107c27f98(puVar8);
    func_0x00010865d000();
    *plVar15 = (long)&PTR_FUN_110a60c88;
    puVar7[0x38] = plVar15;
    puVar7[0x39] = plVar10;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    func_0x00010865d188(&PTR_FUN_110a609a8);
    func_0x00010865d4dc();
    func_0x000107c2884c(puVar7 + 0x27,puVar8);
    func_0x00010865d1b0(puVar7[0x3d]);
    func_0x00010865d330();
    func_0x00010865d108();
    func_0x00010865d314();
    FUN_108647df0(puVar7 + 0x35);
    lVar2 = ((long *)puVar7[0x3e])[1];
    for (lVar11 = *(long *)puVar7[0x3e]; uVar6 = lVar11 == lVar2, !(bool)uVar6;
        lVar11 = lVar11 + 0x18) {
      func_0x00010865d474();
      func_0x00010865d4d0();
      func_0x00010865d340();
    }
    plVar9 = *(long **)(puVar7[0x3d] + 0x70);
    puVar7[0x18] = plVar15;
    puVar7[0x19] = plVar10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    (**(code **)(*plVar9 + 0x40))(plVar9,puVar7 + 0x35,puVar7 + 0x18);
    func_0x00010865d338();
    lVar11 = plVar10[4];
    puVar7[0x3b] = lVar11;
    if (lVar11 != 0) {
      do {
        func_0x000107c31d08();
      } while (extraout_w10 != 0);
    }
    plVar10 = (long *)puVar7[0x3d];
    func_0x00010865d468();
    puVar7[0x18] = puVar7[0x3a];
    do {
      func_0x000107c31d08();
    } while (extraout_w10_00 != 0);
    func_0x000107c31d54(puVar7[0x18]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar7 + 0x204) = 0;
      lVar11 = puVar7[0x18];
      if (*plVar12 == 0) {
        func_0x000107c3a5c0();
      }
      plVar13 = (long *)(lVar11 + 0x10);
      do {
        if (*plVar13 == 0) {
          func_0x00010865d3ec();
          plVar13 = extraout_x8_00;
          uVar5 = extraout_w9_00;
          uVar14 = extraout_x10_00;
        }
        else {
          func_0x00010865d600();
          plVar13 = extraout_x8;
          uVar5 = extraout_w9;
          uVar14 = extraout_x10;
        }
        if ((uVar14 & 1) != 0) goto LAB_1086590f4;
      } while ((uVar5 >> 1 & 1) == 0);
    }
    plVar10 = puVar7 + 0x18;
    FUN_1086597b4();
    cVar3 = *(char *)(puVar7 + 0x34);
    uVar6 = cVar3 == (char)plVar10[3];
    if ((bool)uVar6) {
      uVar6 = plVar1 == plVar10;
      if ((!(bool)uVar6) && (cVar3 != '\0')) {
        uVar14 = plVar10[1] - *plVar10;
        lVar11 = puVar7[0x31];
        uVar6 = uVar14 == puVar7[0x33] - lVar11;
        if ((ulong)(puVar7[0x33] - lVar11) < uVar14) {
          if (lVar11 != 0) {
            FUN_10864c7a8(plVar1);
            __ZdlPv(*plVar1);
            *plVar1 = 0;
            puVar7[0x32] = 0;
            puVar7[0x33] = 0;
          }
          plVar10 = plVar1;
          FUN_10864cbcc(plVar1,(long)uVar14 >> 6);
          FUN_10865a4ac(plVar1,plVar10);
        }
        else {
          uVar6 = uVar14 == puVar7[0x32] - lVar11;
          if (uVar14 <= (ulong)(puVar7[0x32] - lVar11)) {
            func_0x00010865d4fc();
            FUN_10864c7b0(plVar1,plVar10);
            goto LAB_108658f7c;
          }
          func_0x00010865d4f0();
        }
        func_0x00010865d5c8(plVar1);
      }
    }
    else if (cVar3 == '\0') {
      FUN_10865a3f4(plVar1);
    }
    else {
      func_0x00010864c738(plVar1);
      *(undefined1 *)(puVar7 + 0x34) = 0;
    }
LAB_108658f7c:
    func_0x00010865d030();
    func_0x00010865d120();
    func_0x00010865d260();
    func_0x00010865d5f4();
    plVar13 = *(long **)(extraout_x8_01 + 200);
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    func_0x00010865d188(&PTR_FUN_110a609a8);
    puVar8 = puVar7 + 0x18;
    FUN_108659854(puVar8);
    func_0x00010865d130();
    FUN_108659af8();
    plVar10 = puVar7 + 0x1d;
    func_0x000107c2884c(plVar10,puVar8);
    func_0x00010865d5d4(*(undefined8 *)(*plVar13 + 0x50));
    func_0x00010865d2d4();
    func_0x00010865d108();
    func_0x00010865d270();
    func_0x00010865d0c8();
    func_0x00010865d2ac();
    if ((*(byte *)(puVar7 + 0x34) & 1) != 0) {
LAB_108659138:
      func_0x00010865d5f4();
      plVar10 = *(long **)(extraout_x8_08 + 200);
      func_0x00010865d40c();
      uStack_68 = 0x235;
      puVar8 = auStack_88;
      FUN_108659854(puVar8);
      func_0x00010865d130();
      FUN_108659af8();
      func_0x000107c2884c(puVar7 + 0x22,puVar8);
      func_0x00010865d59c(*(undefined8 *)(*plVar10 + 0x50));
      func_0x00010865d3d4();
      func_0x00010865d1e8();
      func_0x00010865d690();
      break;
    }
    func_0x00010865d434();
    uVar14 = extraout_x8_02 + 1;
    (*extraout_x9)();
    if ((uVar14 & 1) == 0) goto LAB_108659138;
    func_0x00010865d69c();
    func_0x00010865d480();
    func_0x00010865d140();
    do {
      func_0x000107c31d08();
    } while (extraout_w10_01 != 0);
    func_0x000107c31d54(puVar7[4]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar7 + 0x204) = 1;
      lVar11 = puVar7[4];
      if (*plVar12 == 0) {
        func_0x000107c3a5c0();
      }
      plVar13 = (long *)(lVar11 + 0x10);
      do {
        if (*plVar13 == 0) {
          func_0x00010865d3ec();
          plVar13 = extraout_x8_04;
          uVar5 = extraout_w9_02;
          uVar14 = extraout_x10_02;
        }
        else {
          func_0x00010865d600();
          plVar13 = extraout_x8_03;
          uVar5 = extraout_w9_01;
          uVar14 = extraout_x10_01;
        }
        if ((uVar14 & 1) != 0) goto LAB_1086590f4;
      } while ((uVar5 >> 1 & 1) == 0);
    }
    func_0x00010865d358();
    func_0x00010865d000();
    func_0x00010865d030();
    func_0x00010865d620();
    (*extraout_x9_00)(puVar7 + 0x3c);
    func_0x00010865d2fc();
    func_0x00010865d140();
    do {
      func_0x000107c31d08();
    } while (extraout_w10_02 != 0);
    func_0x000107c31d54(puVar7[4]);
    if ((extraout_w8_01 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar7 + 0x204) = 2;
      lVar11 = puVar7[4];
      if (*plVar12 == 0) {
        func_0x000107c3a5c0();
      }
      plVar13 = (long *)(lVar11 + 0x10);
      do {
        if (*plVar13 == 0) {
          func_0x00010865d3ec();
          plVar13 = extraout_x8_06;
          uVar5 = extraout_w9_04;
          uVar14 = extraout_x10_04;
        }
        else {
          func_0x00010865d600();
          plVar13 = extraout_x8_05;
          uVar5 = extraout_w9_03;
          uVar14 = extraout_x10_03;
        }
        if ((uVar14 & 1) != 0) {
LAB_1086590f4:
          func_0x000107c31d14();
          if ((bool)uVar6) {
            func_0x00010865cf40();
            func_0x00010865cf20();
            func_0x00010865cea4();
            *(long **)(lVar11 + 0x90) = plVar10;
          }
          func_0x00010865cef8();
          *extraout_x8_07 = 0;
          return;
        }
      } while ((uVar5 >> 1 & 1) == 0);
    }
    func_0x00010865d358();
    func_0x00010865d000();
    func_0x00010865d030();
    func_0x00010865d5c0();
    lVar11 = puVar7[0x3f] + 1;
  } while( true );
  while (((uint)auStack_88[0] >> 1 & 1) == 0) {
    auStack_88[0] = 0;
    plVar10 = plVar13 + 2;
    func_0x00010865cf68(plVar10,auStack_88);
    if ((int)plVar10 != 0) {
      func_0x00010865d580();
      func_0x00010865d670();
      if ((bool)uVar6) {
        lVar11 = *plVar1;
        plVar13[0x14] = puVar7[0x32];
        plVar13[0x13] = lVar11;
        plVar13[0x15] = puVar7[0x33];
        *plVar1 = 0;
        puVar7[0x32] = 0;
        puVar7[0x33] = 0;
        *(undefined1 *)(plVar13 + 0x16) = 1;
      }
      *(undefined1 *)(plVar13 + 0x17) = 1;
      func_0x00010865cf50();
      break;
    }
  }
  func_0x00010865d094();
  FUN_10865a894(plVar1);
  func_0x00010865d278();
  func_0x00010865cfe4();
  func_0x00010865d010();
  return;
}



/* Entry: 108659334; end: 1086596d3;  */

void FUN_108659334(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 extraout_w8;
  byte bVar9;
  uint extraout_w8_00;
  long *plVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long alStack_90 [9];
  long lStack_48;
  long extraout_x8_01;
  
  plVar8 = alStack_90;
  puVar4 = (undefined8 *)0x148;
  __Znwm();
  *puVar4 = FUN_10865c65c;
  puVar4[1] = FUN_10865c84c;
  *(undefined4 *)(puVar4 + 0x28) = param_4;
  puVar4[0x26] = *param_3;
  puVar4[0x27] = param_2;
  *param_3 = 0;
  uVar17 = *param_5;
  puVar4[0x25] = param_5[1];
  puVar4[0x24] = uVar17;
  *param_5 = 0;
  param_5[1] = 0;
  puVar5 = (undefined8 *)0xe0;
  __Znwm();
  puVar6 = puVar5;
  func_0x000107c31dc0();
  func_0x000107c31510();
  *puVar6 = &PTR_DAT_110a60bf8;
  *(undefined1 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  alStack_90[0] = 0;
  lStack_48 = 0;
  plVar13 = &lStack_48;
  func_0x000107c27f98();
  func_0x000107c31dac();
  puVar4[3] = puVar5;
  puVar4[2] = puVar5;
  func_0x00010865d1c8();
  alStack_90[0] = puVar4[2];
  if (alStack_90[0] != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  *param_1 = alStack_90[0];
  alStack_90[0] = 0;
  func_0x000107c31dac();
  puVar4[0x1e] = puVar4[0x26];
  do {
    func_0x000107c31d08();
  } while (extraout_w10_00 != 0);
  func_0x000107c31d54(puVar4[0x1e]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)((long)puVar4 + 0x144) = 0;
    lVar14 = puVar4[0x1e];
    func_0x00010865cee8();
    lVar16 = *plVar13;
    if (lVar16 == 0) {
      func_0x000107c3a5c0();
      lVar16 = *plVar13;
    }
    plVar10 = (long *)(lVar14 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x000107c31d1c();
        plVar10 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x00010865d0b4();
        plVar10 = extraout_x8;
        uVar2 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        pbVar12 = *(byte **)(lVar14 + 0x90);
        bVar9 = pbVar12[1];
        bVar3 = *pbVar12 <= bVar9;
        if (bVar9 == *pbVar12) {
          func_0x00010865cf40();
          uVar1 = extraout_w8;
          if (bVar3) {
            uVar1 = extraout_w9;
          }
          func_0x00010865ced8();
          bVar9 = 0;
          *(undefined1 *)plVar13 = uVar1;
          *(undefined1 *)((long)plVar13 + 1) = 0;
          plVar13[1] = 0;
          *(long **)(pbVar12 + 8) = plVar13;
          *(long **)(lVar14 + 0x90) = plVar13;
        }
        func_0x00010865cf88(bVar9);
        *(long *)(extraout_x8_01 + 0x20) = lVar16;
        *(char *)(*(long *)(lVar14 + 0x90) + 1) = *(char *)(*(long *)(lVar14 + 0x90) + 1) + '\x01';
        *(undefined8 *)(lVar14 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar13 = puVar4 + 0x1e;
  FUN_1086597b4();
  func_0x00010865d360();
  if ((*(byte *)(plVar13 + 3) & 1) == 0) {
    FUN_108847238(puVar4 + 0x1b,puVar4[0x27]);
    func_0x00010865d198();
    func_0x00010865d39c();
    func_0x00010865d070();
    func_0x00010865d110();
    FUN_108648f24(puVar4 + 5);
    FUN_108648f24(puVar4 + 0x13);
    puVar4 = puVar4 + 0x1b;
  }
  else {
    FUN_108847238(puVar4 + 0x1e,puVar4[0x27]);
    lVar16 = plVar13[1];
    for (lVar14 = *plVar13; lVar15 = lVar16, lVar14 != lVar16; lVar14 = lVar14 + 0x40) {
      uVar7 = 0;
      FUN_10865a140(alStack_90,lVar14);
      func_0x00010865d524();
      func_0x00010865d110();
      lVar15 = lVar14;
      if ((uVar7 & 1) != 0) break;
    }
    if (lVar15 == plVar13[1]) {
      plVar13 = (long *)puVar4[0x24];
      if (plVar13 != (long *)0x0) {
        func_0x00010865d20c();
        FUN_108659854(alStack_90);
        func_0x000107c2884c(puVar4 + 9,plVar8);
        func_0x00010865d498(*(undefined8 *)(*plVar13 + 0x50));
        func_0x00010865d30c();
        func_0x00010865d384();
      }
      func_0x00010865d48c();
      func_0x00010865d170();
      func_0x00010865d38c();
      func_0x00010865d070();
      func_0x00010865d110();
      FUN_108648f24(puVar4 + 0xf);
      FUN_108648f24(puVar4 + 0x17);
      func_0x000107c27914(puVar4 + 0x21);
    }
    else {
      lVar14 = puVar4[3];
      do {
        alStack_90[0] = 0;
        lVar16 = lVar14 + 0x10;
        func_0x00010865cf68(lVar16,alStack_90);
        if ((int)lVar16 != 0) {
          FUN_10865b77c(lVar14 + 0x98);
          FUN_10865a140(lVar14 + 0x98,lVar15);
          *(undefined1 *)(lVar14 + 0xd8) = 1;
          *(undefined8 *)(lVar14 + 0x10) = 2;
          func_0x00010865d538(lVar14);
          break;
        }
      } while (((uint)alStack_90[0] >> 1 & 1) == 0);
      func_0x00010865d548();
    }
    puVar4 = puVar4 + 0x1e;
  }
  func_0x000107c27914(puVar4);
  func_0x00010865cfe4();
  func_0x00010865d2f4();
  func_0x00010865d2ec();
  func_0x00010865d010();
  return;
}



/* Entry: 1086596d4; end: 108659713;  */

void FUN_1086596d4(void)

{
  func_0x00010865d60c();
  FUN_10865b344();
  func_0x00010865cfc4();
  return;
}



/* Entry: 108659714; end: 1086597b3;  */

/* WARNING: Removing unreachable block (ram,0x00010865974c) */

void FUN_108659714(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  lVar13 = *(long *)(param_1 + 8);
  plVar8 = param_2;
  do {
    iVar6 = (int)lVar13 + 0x10;
    func_0x00010865cf30();
  } while (iVar6 == 0);
  puVar2 = (undefined8 *)(lVar13 + 0x98);
  puVar7 = puVar2;
  func_0x00010865b0f4();
  *(undefined8 **)(lVar13 + 0x98) = puVar2;
  *(undefined8 **)(lVar13 + 0xa0) = puVar2;
  *(undefined8 *)(lVar13 + 0xa8) = 0;
  lVar9 = param_2[2];
  if (lVar9 != 0) {
    lVar3 = *param_2;
    plVar14 = (long *)param_2[1];
    plVar11 = *(long **)(lVar3 + 8);
    lVar12 = *plVar14;
    *(long **)(lVar12 + 8) = plVar11;
    *plVar11 = lVar12;
    lVar12 = *(long *)(lVar13 + 0x98);
    *(long **)(lVar12 + 8) = plVar14;
    *plVar14 = lVar12;
    *(long *)(lVar13 + 0x98) = lVar3;
    *(undefined8 **)(lVar3 + 8) = puVar2;
    *(long *)(lVar13 + 0xa8) = lVar9;
    param_2[2] = 0;
  }
  *(undefined1 *)(lVar13 + 0xb0) = 1;
  func_0x00010865cf98();
  func_0x00010865d684();
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)*puVar7;
  if (plVar14 != (long *)0x0) {
    puVar1 = (ulong *)(plVar14 + 1);
    do {
      uVar10 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar10 - 0x200000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uVar10 >> 0x21 == 1) {
      (**(code **)(*plVar14 + 0x10))(plVar14,1,puVar7);
      do {
        uVar10 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar10 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  *puVar7 = plVar8;
  return;
}



/* Entry: 1086597b4; end: 1086597eb;  */

long FUN_1086597b4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000107c31d90();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010865d0a0();
  func_0x00010865d3e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086597e4);
  (*pcVar1)();
}



/* Entry: 1086597ec; end: 108659853;  */

/* WARNING: Removing unreachable block (ram,0x000108659824) */

void FUN_1086597ec(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(param_1 + 8);
  do {
    iVar4 = (int)lVar7 + 0x10;
    func_0x00010865cf30();
  } while (iVar4 == 0);
  FUN_10865b77c(lVar7 + 0x98);
  plVar5 = (long *)(lVar7 + 0x98);
  FUN_10864cabc();
  *(undefined1 *)(lVar7 + 0xd8) = 1;
  func_0x00010865cf98();
  func_0x00010865d684();
  if (param_2 != 0) {
    plVar8 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)*plVar5;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar5);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar5 = param_2;
  return;
}



/* Entry: 108659854; end: 1086598c7;  */

void FUN_108659854(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010865d5e0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010865d6b0();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010865d5a8();
  func_0x00010865d088();
  return;
}



/* Entry: 1086598c8; end: 108659907;  */

void FUN_1086598c8(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000107c31d74();
  return;
}



/* Entry: 108659908; end: 108659af7;  */

void FUN_108659908(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *puVar2 = FUN_10865bcdc;
  puVar2[1] = FUN_10865bdb8;
  lVar6 = *param_2;
  puVar2[4] = lVar6;
  *param_2 = 0;
  func_0x00010865ba40(puVar2 + 2);
  func_0x00010865d4e8();
  puVar2[7] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  plVar3 = (long *)(param_1 + 0x10);
  FUN_108659b90(puVar2 + 6,plVar3,puVar2 + 7,*(undefined8 *)(param_1 + 8));
  func_0x000107c31de4(puVar2[6]);
  do {
    func_0x000107c31d08();
  } while (extraout_w10_00 != 0);
  func_0x000107c31d54(puVar2[5]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 8) = 0;
    lVar6 = puVar2[5];
    func_0x00010865cee8();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31d98();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x000107c31d1c();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x00010865d0b4();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x000107c31d14();
        if ((bool)in_ZR) {
          func_0x00010865cf40();
          func_0x00010865cf20();
          func_0x00010865cea4();
          *(long **)(lVar6 + 0x90) = plVar3;
        }
        func_0x00010865cef8();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1086597b4(puVar2 + 5);
  func_0x00010865d3b4();
  func_0x00010865d008();
  func_0x00010865d038();
  func_0x00010865d3cc();
  func_0x00010865cfe4();
  func_0x00010865d1d4();
  func_0x00010865d010();
  return;
}



/* Entry: 108659af8; end: 108659b6b;  */

void FUN_108659af8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010865d5e0();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010865d6b0();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010865d5a8();
  func_0x00010865d088();
  return;
}



/* Entry: 108659b6c; end: 108659b8f;  */

void FUN_108659b6c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x00010865d65c();
  FUN_10865b954();
  func_0x00010865d684();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 108659b90; end: 108659ec7;  */

void FUN_108659b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar8;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 uStack_60;
  long alStack_58 [2];
  long lStack_48;
  
  func_0x000107c31de0();
  lVar6 = 0x50;
  __Znwm();
  lVar10 = lVar6;
  func_0x000107c31ddc(FUN_10865baf0);
  *(long *)(lVar10 + 0x40) = unaff_x21;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  func_0x00010865ba40(lVar6 + 0x10);
  func_0x00010865d4e8();
  func_0x000107c314e0(lVar6 + 0x28,*(undefined8 *)(unaff_x21 + 0x10),param_3 * 1000000);
  func_0x000107c31dcc();
  func_0x000107c28878(&uStack_60,3);
  uVar2 = uStack_60;
  uStack_60 = 0;
  func_0x000107c28888(lStack_48 + 0x18,uVar2);
  func_0x000107c28890(&uStack_60);
  func_0x000107c31dc8(3,lStack_48);
  FUN_10865ba74(lStack_48,0);
  lVar10 = alStack_58[0];
  uStack_60 = 0;
  alStack_58[0] = 0;
  *(long *)(lVar6 + 0x38) = lVar10;
  func_0x000107c31dac();
  plVar7 = alStack_58;
  func_0x000107c2889c();
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar6 + 0x38);
  do {
    func_0x000107c31d08();
  } while (extraout_w10_00 != 0);
  func_0x000107c31d54(*(undefined8 *)(lVar6 + 0x30));
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar6 + 0x48) = 0;
    lVar10 = *(long *)(lVar6 + 0x30);
    func_0x000107c31d2c();
    if (*plVar7 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31d98();
    plVar8 = extraout_x8_00;
    do {
      if (*plVar8 == 0) {
        func_0x000107c31d1c();
        plVar8 = extraout_x8_02;
        uVar1 = extraout_w10_02;
        uVar9 = extraout_w11_00;
      }
      else {
        func_0x00010865d0b4();
        plVar8 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar9 = extraout_w11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000107c31d14();
        if ((bool)in_ZR) {
          func_0x00010865cf40();
          func_0x00010865cf20();
          func_0x00010865cea4();
          *(long **)(lVar10 + 0x90) = plVar7;
        }
        func_0x000107c31d24();
        goto LAB_108659ddc;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  plVar7 = (long *)(lVar6 + 0x30);
  func_0x000107c28870();
  lVar10 = *plVar7;
  func_0x00010865d038();
  func_0x00010865d268();
  if (lVar10 == 2) {
    func_0x00010865d128();
    func_0x00010865cfec();
    FUN_10865aaac(plVar7,alStack_58);
    func_0x00010865cfb0();
    ___cxa_throw(plVar7);
  }
  else {
    uVar4 = lVar10 != 0;
    uVar5 = lVar10 == 1;
    if (!(bool)uVar5) {
      *(undefined8 *)(lVar6 + 0x30) = *unaff_x20;
      do {
        func_0x000107c31d08();
      } while (extraout_w10_03 != 0);
      func_0x000107c31d54(*(undefined8 *)(lVar6 + 0x30));
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x48) = 1;
        func_0x000107c31d2c();
        lVar10 = *plVar7;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar7;
        }
        func_0x000107c31d98();
        plVar8 = extraout_x8_03;
        do {
          if (*plVar8 == 0) {
            func_0x000107c31d1c();
            plVar8 = extraout_x8_05;
            uVar1 = extraout_w10_05;
            uVar9 = extraout_w11_02;
          }
          else {
            func_0x00010865d0b4();
            plVar8 = extraout_x8_04;
            uVar1 = extraout_w10_04;
            uVar9 = extraout_w11_01;
          }
          if ((uVar9 & 1) != 0) {
            func_0x000107c31d14();
            if ((bool)uVar5) {
              func_0x00010865cf40();
              uVar5 = extraout_w8;
              if ((bool)uVar4) {
                uVar5 = extraout_w9;
              }
              func_0x00010865ced8();
              *(undefined1 *)plVar7 = uVar5;
              func_0x00010865cec0(0);
            }
            func_0x00010865cf88();
            *(long *)(extraout_x8_06 + 0x20) = lVar10;
LAB_108659ddc:
            func_0x000107c31d10();
            *extraout_x8_07 = 0;
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      FUN_1086597b4(lVar6 + 0x30);
      func_0x00010865d3b4();
      func_0x00010865d038();
      func_0x00010865d008();
      func_0x00010865cfe4();
      func_0x00010865d1d4();
      func_0x00010865d010();
      return;
    }
    func_0x00010865d128();
    func_0x00010865d4a4();
    func_0x00010865d634();
    ___cxa_throw(plVar7);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108659e34);
  (*pcVar3)();
}



/* Entry: 108659ec8; end: 108659ecf;  */

void FUN_108659ec8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  iVar1 = (int)param_2 + 0x50;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x10);
  }
  lVar2 = *(long *)(param_2 + 0x58);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108659ed0; end: 108659f17;  */

void FUN_108659ed0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  iVar1 = (int)param_2 + 0x40;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2);
  }
  lVar2 = *(long *)(param_2 + 0x48);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108659f18; end: 108659f1b;  */

undefined8 * FUN_108659f18(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a60a60;
  func_0x000107c288a4(param_1 + 0x19);
  plVar2 = (long *)param_1[0x16];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10865a934(lVar1);
    func_0x00010865d540();
  }
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c28858(param_1 + 0x12);
  func_0x000107c2885c(param_1 + 0x10);
  func_0x000107c286cc(param_1 + 0xe);
  FUN_10865a95c(param_1 + 2);
  return param_1;
}



/* Entry: 108659f1c; end: 108659f7b;  */

void FUN_108659f1c(void)

{
  FUN_10865a8b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108659f7c; end: 10865a013;  */

long FUN_108659f7c(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107c31d9c();
  func_0x000107c27ac8();
  func_0x000107c27ab8(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  func_0x000107c27994(lStack_48);
  lStack_48 = lStack_48 + 0x18;
  func_0x000107c27ab4();
  lVar1 = unaff_x19[1];
  func_0x000107c27ac0(auStack_58);
  return lVar1;
}



/* Entry: 10865a014; end: 10865a053;  */

void FUN_10865a014(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010865d2b4();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10865a054();
    }
  }
  return;
}



/* Entry: 10865a054; end: 10865a077;  */

void FUN_10865a054(undefined8 param_1,long param_2)

{
  func_0x000107c27914(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10865a078; end: 10865a0b7;  */

void FUN_10865a078(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010865d2b4();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10865a0b8();
    }
  }
  return;
}



/* Entry: 10865a0b8; end: 10865a0db;  */

void FUN_10865a0b8(undefined8 param_1,long param_2)

{
  func_0x00010864c7e8(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10865a0dc; end: 10865a13f;  */

void FUN_10865a0dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar1 = (long *)plVar3[1];
      func_0x000107c27f9c(plVar3 + 2);
      func_0x00010865d540();
      plVar3 = plVar1;
    }
  }
  return;
}



/* Entry: 10865a140; end: 10865a17b;  */

void FUN_10865a140(long param_1)

{
  long unaff_x20;
  
  func_0x000107c31d9c();
  func_0x000107c27994();
  FUN_10865a17c(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10865a17c; end: 10865a1a3;  */

undefined4 * FUN_10865a17c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_10865a1a4(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10865a1a4; end: 10865a1db;  */

undefined1 * FUN_10865a1a4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10865a1dc();
  return param_1;
}



/* Entry: 10865a1dc; end: 10865a1ef;  */

void FUN_10865a1dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10865a20c();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10865a1f0; end: 10865a20b;  */

void FUN_10865a1f0(long param_1)

{
  FUN_10865a20c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10865a20c; end: 10865a247;  */

undefined8 * FUN_10865a20c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10865a248(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x38);
  return param_1;
}



/* Entry: 10865a248; end: 10865a2ab;  */

void FUN_10865a248(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010865d1fc();
    FUN_10865a2ac();
    func_0x00010865d254();
    FUN_10865a2f8();
  }
  uStack_38 = 1;
  FUN_10865a3c8(&uStack_40);
  return;
}



/* Entry: 10865a2ac; end: 10865a2f7;  */

void FUN_10865a2ac(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    func_0x000108649388();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
  }
  else {
    FUN_10864929c();
    plVar1 = param_1 + 2;
    FUN_10865a32c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10865a2f8; end: 10865a32b;  */

void FUN_10865a2f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10865a32c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10865a32c; end: 10865a33f;  */

void FUN_10865a32c(void)

{
  FUN_10865a340();
  return;
}



/* Entry: 10865a340; end: 10865a3c7;  */

long FUN_10865a340(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1086564c4(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_1086494ec(&uStack_60);
  return param_4;
}



/* Entry: 10865a3c8; end: 10865a3f3;  */

long FUN_10865a3c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108648f78(param_1);
  }
  return param_1;
}



/* Entry: 10865a3f4; end: 10865a40f;  */

void FUN_10865a3f4(long param_1)

{
  FUN_10865a7e8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10865a410; end: 10865a4ab;  */

void FUN_10865a410(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x40) {
    func_0x00010865d254();
    FUN_10865a140();
    lVar1 = lStack_48 + 0x40;
  }
  uStack_58 = 1;
  FUN_10864cb04(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10865a4ac; end: 10865a4e3;  */

long * FUN_10865a4ac(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = param_1 + 2;
    func_0x00010864ca7c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 8);
    return plVar1;
  }
  FUN_10864c92c();
  func_0x000107c31de0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x40) {
    func_0x00010865d254();
    FUN_10865a52c();
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* Entry: 10865a4e4; end: 10865a52b;  */

long FUN_10865a4e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c31de0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x40) {
    func_0x00010865d254();
    FUN_10865a52c();
    param_3 = param_3 + 0x40;
  }
  return param_3;
}



/* Entry: 10865a52c; end: 10865a57f;  */

void FUN_10865a52c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31dbc();
  func_0x000107c27cfc();
  func_0x00010865a558(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10865a580; end: 10865a5a7;  */

undefined8 * FUN_10865a580(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        FUN_108648f44();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return param_1;
    }
    FUN_10865a20c();
    *(undefined1 *)(param_1 + 3) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      FUN_10865a600(param_1,*param_2,param_2[1]);
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10865a5a8; end: 10865a5db;  */

undefined8 * FUN_10865a5a8(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10865a600(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10865a5dc; end: 10865a5ff;  */

void FUN_10865a5dc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108648f44();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10865a600; end: 10865a60f;  */

void FUN_10865a600(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x38;
  if ((ulong)((param_1[2] - *param_1) / 0x38) < uVar1) {
    FUN_10865a700(param_1);
    plVar2 = param_1;
    FUN_1086495d8(param_1,uVar1);
    FUN_10865a2ac(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x38)) {
      FUN_10865a738(param_2);
      lVar3 = param_1[1];
      while (lVar3 != param_3) {
        lVar3 = lVar3 + -0x38;
        func_0x000108648ff4();
      }
      param_1[1] = param_3;
      return;
    }
    FUN_10865a738(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  FUN_10865a32c(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10865a610; end: 10865a6ff;  */

void FUN_10865a610(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x38) < param_4) {
    FUN_10865a700(param_1);
    plVar1 = param_1;
    FUN_1086495d8(param_1,param_4);
    FUN_10865a2ac(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x38)) {
      FUN_10865a738(param_2);
      lVar2 = param_1[1];
      while (lVar2 != param_3) {
        lVar2 = lVar2 + -0x38;
        func_0x000108648ff4();
      }
      param_1[1] = param_3;
      return;
    }
    FUN_10865a738(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  FUN_10865a32c(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10865a700; end: 10865a737;  */

void FUN_10865a700(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108648fb4();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10865a738; end: 10865a763;  */

void FUN_10865a738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10865a764(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10865a764; end: 10865a7b3;  */

void FUN_10865a764(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010865d1fc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x00010865d254();
    FUN_10865a7b4();
  }
  return;
}



/* Entry: 10865a7b4; end: 10865a7e7;  */

void FUN_10865a7b4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31dbc();
  func_0x000107c27cfc();
  func_0x000107c27cfc(unaff_x20 + 0x18,unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10865a7e8; end: 10865a867;  */

undefined8 * FUN_10865a7e8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    FUN_10865a4ac(param_1,lVar3 >> 6);
    FUN_10865a410(param_1,lVar1,lVar2);
  }
  uStack_38 = 1;
  FUN_10865a868(&puStack_40);
  return param_1;
}



/* Entry: 10865a868; end: 10865a893;  */

long FUN_10865a868(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010864c76c(param_1);
  }
  return param_1;
}



/* Entry: 10865a894; end: 10865a8b3;  */

void FUN_10865a894(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010864c738();
  }
  return;
}



/* Entry: 10865a8b4; end: 10865a933;  */

undefined8 * FUN_10865a8b4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a60a60;
  func_0x000107c288a4(param_1 + 0x19);
  plVar2 = (long *)param_1[0x16];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10865a934(lVar1);
    func_0x00010865d540();
  }
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c28858(param_1 + 0x12);
  func_0x000107c2885c(param_1 + 0x10);
  func_0x000107c286cc(param_1 + 0xe);
  FUN_10865a95c(param_1 + 2);
  return param_1;
}



/* Entry: 10865a934; end: 10865a95b;  */

long FUN_10865a934(long param_1)

{
  long lStack_28;
  
  func_0x000107c27f9c(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10865a95c; end: 10865a9b7;  */

void FUN_10865a95c(long param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_108659ed0(auStack_28);
  func_0x00010bcd32f8(auStack_28);
  func_0x000107c31d74();
  FUN_10865a9b8(param_1 + 0x48);
  FUN_10865a9b8(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000107c28868(param_1 + 0x10);
  func_0x000107c27c20(param_1);
  return;
}



/* Entry: 10865a9b8; end: 10865a9d3;  */

void FUN_10865a9b8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c31d60();
  plVar5 = (long *)*unaff_x19;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
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
  return;
}



/* Entry: 10865a9d4; end: 10865a9db;  */

void FUN_10865a9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10865a9dc; end: 10865a9ef;  */

void FUN_10865a9dc(void)

{
  FUN_10865aa08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865a9f0; end: 10865a9f3;  */

undefined8 * FUN_10865a9f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865a9f4; end: 10865aa07;  */

void FUN_10865a9f4(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865aa08; end: 10865aaab;  */

undefined8 * FUN_10865aa08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a60ad0;
  func_0x00010865aa38(param_1 + 0x15);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865aaac; end: 10865aadf;  */

void FUN_10865aaac(void)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  func_0x000107c31da8(&UNK_110a60b40);
  return;
}



/* Entry: 10865aae0; end: 10865ab13;  */

undefined8 * FUN_10865aae0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10865ab14(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  func_0x00010865d1c8();
  return param_1;
}



/* Entry: 10865ab14; end: 10865ab4b;  */

void FUN_10865ab14(void)

{
  __Znwm(0xb8);
  func_0x000107c31dc0();
  FUN_10865ab4c();
  func_0x00010865d374();
  func_0x000107c31d74();
  return;
}



/* Entry: 10865ab4c; end: 10865ab73;  */

void FUN_10865ab4c(long param_1)

{
  func_0x000107c31510();
  func_0x000107c31da8(&UNK_110a60b68);
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 10865ab74; end: 10865ab77;  */

undefined8 * FUN_10865ab74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60b78;
  func_0x00010865abbc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865ab78; end: 10865ab8b;  */

void FUN_10865ab78(void)

{
  FUN_10865ab8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10865ab8c; end: 10865ac3b;  */

undefined8 * FUN_10865ab8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a60b78;
  func_0x00010865abbc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10865ac3c; end: 10865acdf;  */

void FUN_10865ac3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_10865cd10;
  puVar1[1] = FUN_10865ce24;
  FUN_10865ace0(puVar1 + 4,param_1);
  FUN_10865aae0(puVar1 + 2);
  func_0x00010865d1dc();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0,puVar1);
  return;
}



/* Entry: 10865ace0; end: 10865ad07;  */

void FUN_10865ace0(long param_1,long param_2)

{
  func_0x00010865abec();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10865ad08; end: 10865ae3f;  */

void FUN_10865ad08(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_10865cc8c;
  puVar2[1] = FUN_10865cce4;
  FUN_10865aae0(puVar2 + 2);
  func_0x00010865d1dc();
  FUN_10865ae9c(puVar2 + 5);
  puVar2[4] = puVar2[5];
  do {
    func_0x000107c31d08();
  } while (extraout_w10 != 0);
  func_0x000107c31d54(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010865cee8();
    if (*param_1 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010865d368();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31d1c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010865d0b4();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010865cf74();
        if ((bool)in_ZR) {
          func_0x00010865cf40();
          func_0x00010865ced8();
          func_0x00010865ce84();
        }
        func_0x00010865ce5c();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_10865ae40(puVar2 + 4);
  func_0x00010865d3ac();
  func_0x00010865d000();
  func_0x00010865d008();
  func_0x00010865cfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10865ae40; end: 10865ae77;  */

long FUN_10865ae40(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000107c31d90();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010865d0a0();
  func_0x00010865d3e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10865ae70);
  (*pcVar1)();
}



/* Entry: 10865ae78; end: 10865ae9b;  */

void FUN_10865ae78(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x00010865d65c();
  FUN_10865b064();
  func_0x00010865d684();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
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
  *param_1 = param_2;
  return;
}



/* Entry: 10865ae9c; end: 10865b063;  */

void FUN_10865ae9c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long *plVar5;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar5 = *(long **)(param_2 + 0x20);
  puVar2 = (undefined8 *)0xb0;
  __Znwm();
  *puVar2 = FUN_10865cbfc;
  puVar2[1] = FUN_10865cc5c;
  FUN_10865aae0(puVar2 + 2);
  FUN_108658b58(param_1,puVar2 + 2);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110a609a8;
  uStack_60 = 0;
  uStack_48 = 0x234;
  pppuVar3 = &ppuStack_68;
  FUN_108659854(pppuVar3,*(undefined4 *)(param_2 + 0x18));
  func_0x000107c2884c(puVar2 + 0xe,pppuVar3);
  func_0x0001006a64d4(puVar2 + 4,plVar5 + 0x19,puVar2 + 0xe,1,0);
  func_0x000107c2882c(puVar2 + 0xe);
  func_0x00010865d3dc();
  FUN_108658100(puVar2 + 0x14,plVar5,param_2,*(undefined4 *)(param_2 + 0x18));
  puVar2[0x13] = puVar2[0x14];
  do {
    func_0x000107c31d08();
  } while (extraout_w10 != 0);
  func_0x000107c31d54(puVar2[0x13]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x15) = 0;
    func_0x00010865cee8();
    if (*plVar5 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010865d368();
    plVar5 = extraout_x8;
    do {
      if (*plVar5 == 0) {
        func_0x000107c31d1c();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010865d0b4();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010865cf74();
        if ((bool)in_ZR) {
          func_0x00010865cf40();
          func_0x00010865ced8();
          func_0x00010865ce84();
        }
        func_0x00010865ce5c();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_10865ae40(puVar2 + 0x13);
  func_0x00010865d3ac();
  func_0x00010865d118();
  func_0x00010865d280();
  func_0x00010865d0c8();
  func_0x00010865cfe4();
  func_0x00010865d010();
  return;
}



/* Entry: 10865b064; end: 10865b0c7;  */

/* WARNING: Removing unreachable block (ram,0x00010865b09c) */

long FUN_10865b064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c31dbc();
  do {
    lVar1 = unaff_x20 + 0x10;
    func_0x00010865cf30();
  } while ((int)lVar1 == 0);
  FUN_10865b0c8(unaff_x20 + 0x98,param_3);
  func_0x00010865cf98();
  return lVar1;
}



/* Entry: 10865b0c8; end: 10865b123;  */

void FUN_10865b0c8(void)

{
  func_0x000107c31dbc();
  func_0x00010865b0f4();
  FUN_10865b124();
  return;
}



/* Entry: 10865b124; end: 10865b13f;  */

void FUN_10865b124(long param_1)

{
  FUN_10865b140();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10865b140; end: 10865b197;  */

void FUN_10865b140(long param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c31d9c();
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  while (param_2 = *(long *)(param_2 + 8), param_2 != unaff_x20) {
    func_0x0001086596f4();
  }
  return;
}



/* Entry: 10865b198; end: 10865b1cb;  */

long FUN_10865b198(long param_1,undefined8 param_2)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10865b1cc(param_1,param_1,param_2);
  return param_1;
}



/* Entry: 10865b1cc; end: 10865b20f;  */

void FUN_10865b1cc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = param_3[2];
  if (lVar3 != 0) {
    lVar1 = *param_3;
    plVar2 = (long *)param_3[1];
    plVar4 = *(long **)(lVar1 + 8);
    lVar5 = *plVar2;
    *(long **)(lVar5 + 8) = plVar4;
    *plVar4 = lVar5;
    lVar5 = *param_2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    *param_2 = lVar1;
    *(long **)(lVar1 + 8) = param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar3;
    param_3[2] = 0;
  }
  return;
}



/* Entry: 10865b210; end: 10865b2eb;  */

long FUN_10865b210(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x0001006760a8(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}


