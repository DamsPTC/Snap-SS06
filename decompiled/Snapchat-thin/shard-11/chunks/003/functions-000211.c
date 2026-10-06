/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083fcf78; end: 1083fd2eb;  */

void FUN_1083fcf78(long param_1,long param_2,long *param_3,undefined4 param_4,int *param_5,
                  int param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  int iStack_e4;
  undefined1 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  
  if (*(char *)((long)param_3 + 0x2c) == '\t') {
    lVar13 = param_1;
    lVar11 = param_2;
    func_0x000108403d1c();
    for (lVar11 = lVar11 * 0x58; lVar11 != 0; lVar11 = lVar11 + -0x58) {
      func_0x000100456794(auStack_a0,param_2,&DAT_10f62a9de);
      func_0x000107c27958(auStack_b8,lVar13 + 0x40);
      func_0x00010533a9c0(&uStack_100,auStack_a0,auStack_b8);
      func_0x000108403b84(param_1,&uStack_100,*(undefined8 *)(lVar13 + 0x50));
      func_0x000108403a3c();
      func_0x000108403d5c();
      func_0x000108403d48();
      lVar13 = lVar13 + 0x58;
    }
  }
  else if (*(char *)((long)param_3 + 0x2c) == '\0') {
    lVar13 = param_1;
    func_0x000108403980(*(undefined8 *)(*param_3 + 0x60));
    lVar11 = lVar13;
    func_0x000108403974(*param_3);
    for (uVar12 = 0; ((uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU)) != uVar12;
        uVar12 = uVar12 + 1) {
      func_0x000100456794(auStack_b8,param_2,&DAT_10f62a9e8);
      __ZNSt3__19to_stringEi(auStack_d0,uVar12);
      func_0x00010533a9c0(auStack_a0,auStack_b8,auStack_d0);
      func_0x00010048a6c8(&uStack_100,auStack_a0,&DAT_10f62a9ea);
      func_0x000108403b84(param_1,&uStack_100,lVar11);
      func_0x000108403a3c();
      func_0x000108403d48();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
      func_0x000108403d5c();
    }
  }
  else {
    lVar13 = param_1;
    func_0x000108403974();
    uVar6 = (uint)lVar13;
    func_0x00010840365c();
    uVar7 = uVar6;
    func_0x000108403b94();
    uVar12 = 0;
    uVar2 = 0xffffffff;
    if (param_6 != 0) {
      uVar2 = 1;
    }
    for (; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar12; uVar12 = uVar12 + 1) {
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0x101;
      uStack_e6 = 0;
      iStack_e4 = 0;
      uStack_e0 = 4;
      uStack_dc = 0xffffff00000000;
      uStack_d4 = 0xffffffff;
      puVar8 = &uStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar8,param_2);
      uVar5 = SUB81(puVar8,0);
      func_0x000108403980(*(undefined8 *)(*param_3 + 0x60));
      uStack_e8 = CONCAT11(uStack_e8._1_1_,uVar5);
      func_0x000108403980(*(undefined8 *)(*param_3 + 0x68));
      uStack_e8 = CONCAT11(uVar5,(undefined1)uStack_e8);
      uStack_e6 = (undefined1)uVar12;
      iStack_e4 = *param_5;
      *param_5 = iStack_e4 + 1;
      uStack_e0 = (undefined1)uVar6;
      uStack_dc = CONCAT44(param_4,(undefined4)uStack_dc);
      plVar10 = *(long **)(param_1 + 0x18);
      puVar8 = (undefined8 *)plVar10[1];
      uStack_d4 = uVar2;
      if (puVar8 < (undefined8 *)plVar10[2]) {
        puVar8[2] = uStack_f0;
        puVar8[1] = uStack_f8;
        *puVar8 = uStack_100;
        func_0x000108403ad4();
        lVar13 = extraout_x8 + 0x30;
      }
      else {
        uVar1 = ((long)puVar8 - *plVar10) / 0x30 + 1;
        if (0x555555555555555 < uVar1) {
          FUN_1084029b0();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1083fd280);
          (*pcVar4)();
        }
        uVar3 = (plVar10[2] - *plVar10) / 0x30;
        uVar9 = uVar3 * 2;
        if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
          uVar9 = uVar1;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar3) {
          uVar9 = 0x555555555555555;
        }
        FUN_1084029bc(auStack_a0,uVar9);
        puStack_90[1] = uStack_f8;
        *puStack_90 = uStack_100;
        puStack_90[2] = uStack_f0;
        func_0x000108403ad4();
        puStack_90 = (undefined8 *)(extraout_x8_00 + 0x30);
        FUN_1084028ec(plVar10,auStack_a0);
        lVar13 = plVar10[1];
        FUN_108402a28(auStack_a0);
      }
      plVar10[1] = lVar13;
      func_0x000108403a3c();
    }
  }
  return;
}



/* Entry: 1083fd2ec; end: 1083fd3f3;  */

undefined1  [16]
FUN_1083fd2ec(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 auStack_78 [10];
  
  puVar2 = param_3;
  uVar5 = param_2;
  puVar6 = param_3;
  (**(code **)(*param_3 + 0x80))();
  uVar3 = 0;
  if (puVar2 != (ulong *)0x0) {
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 != (long *)0x0) {
      uVar3 = (long)puVar2 + (long)*(int *)(param_1 + 0x10);
      if ((ulong)((plVar9[2] - *plVar9) / 0x30) < uVar3) {
        if (0x555555555555555 < uVar3) {
          FUN_1084029b0();
          puVar4 = puVar2;
          FUN_1083fd478();
          if (puVar4 == (ulong *)0x0) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            uVar7 = *puVar4 & 0xffffffffffffff00;
            uVar8 = *puVar4 & 0xff;
          }
          func_0x0001083fd4e8(puVar2,uVar3,puVar6);
          auVar11._0_8_ = uVar8 | uVar7;
          auVar11[8] = puVar4 != (ulong *)0x0;
          auVar11._9_7_ = 0;
          return auVar11;
        }
        FUN_1084029bc(auStack_78,uVar3,(plVar9[1] - *plVar9) / 0x30);
        FUN_1084028ec(plVar9,auStack_78);
        FUN_108402a28(auStack_78);
      }
      auStack_78[0] = 0;
      FUN_1083fcf78(param_1,param_2,param_3,param_4,auStack_78,param_5);
      uVar5 = param_2;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 + (int)puVar2;
    uVar3 = (ulong)uVar1 | (long)puVar2 << 0x20;
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar3;
  return auVar10;
}



/* Entry: 1083fd3f4; end: 1083fd477;  */

undefined1  [16] FUN_1083fd3f4(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_48;
  
  puVar1 = param_1;
  uStack_48 = param_2;
  FUN_1083fd478(param_1,&uStack_48);
  if (puVar1 == (ulong *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *puVar1 & 0xffffffffffffff00;
    uVar3 = *puVar1 & 0xff;
  }
  func_0x0001083fd4e8(param_1,param_2,param_3);
  auVar4._0_8_ = uVar3 | uVar2;
  auVar4[8] = puVar1 != (ulong *)0x0;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1083fd478; end: 1083fd543;  */

void FUN_1083fd478(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint extraout_w8;
  long lVar4;
  int extraout_w9;
  int extraout_w9_00;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  long extraout_x13;
  long unaff_x19;
  
  func_0x0001084038d8();
  FUN_108402a70();
  func_0x000108403b14(*(undefined4 *)(unaff_x19 + 4));
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x18;
  iVar2 = extraout_w9;
  do {
    if ((uVar1 == 0) ||
       (iVar2 = *(int *)(*(long *)(unaff_x19 + 8) + (long)iVar2 * (long)(int)uVar5), iVar2 == 0)) {
      lVar4 = 0;
LAB_1083fd4d4:
      func_0x000108403c70(lVar4);
      return;
    }
    bVar3 = (int)param_2 == iVar2;
    if ((bVar3) && (func_0x000108403cf0(), bVar3)) {
      lVar4 = extraout_x13 + 8;
      goto LAB_1083fd4d4;
    }
    func_0x00010840369c();
    uVar5 = extraout_x12;
    iVar2 = extraout_w9_00;
    uVar1 = extraout_w11;
  } while( true );
}



/* Entry: 1083fd544; end: 1083fd5df;  */

undefined8 FUN_1083fd544(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x00010840389c();
  uStack_60 = param_2;
  FUN_1083fd478();
  if (param_1 == (undefined8 *)0x0) {
    uStack_58 = *(undefined8 *)(unaff_x19 + 0x18);
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x10);
    func_0x000107c27958(auStack_48,&uStack_60);
    FUN_1083fd2ec();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    func_0x000108403e84();
    FUN_1083fd3f4();
  }
  else {
    unaff_x20 = *param_1;
  }
  return unaff_x20;
}



/* Entry: 1083fd5e0; end: 1083fd9ef;  */

void FUN_1083fd5e0(undefined8 *param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  char *pcVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 == 0x25) {
    func_0x0001084037e8(param_1,param_2,*(undefined8 *)(param_3 + 0x20));
    if (lStack_48 == 0) goto LAB_1083fd810;
    FUN_1083df644();
    pcVar14 = param_3;
    func_0x000108403680();
    (*extraout_x8)();
    pcVar7 = pcVar14;
    func_0x000108403b60();
    *(long *)(pcVar7 + 0x10) = lStack_48;
    *(int *)(pcVar7 + 0x18) = (int)param_3;
  }
  else {
    if (iVar3 == 0x28) {
      FUN_1083f8c5c(&lStack_48,param_2 + 8,param_3);
      if (lStack_48 != 0) {
        FUN_1083fd5e0(&puStack_50,param_2,lStack_48,param_4);
        lVar16 = lStack_48;
        if (puStack_50 != (undefined8 *)0x0) {
          lStack_48 = 0;
          plVar13 = (long *)puStack_50[1];
          puStack_50[1] = lVar16;
          if (plVar13 == (long *)0x0) {
LAB_1083fd7ac:
            *param_1 = puStack_50;
            return;
          }
          (**(code **)(*plVar13 + 8))(plVar13);
          lVar16 = lStack_48;
        }
        *param_1 = puStack_50;
        lStack_48 = 0;
        if (lVar16 == 0) {
          return;
        }
        func_0x00010840381c();
        return;
      }
      func_0x0001084037e8();
      if (lStack_48 == 0) goto LAB_1083fd810;
      puVar10 = *(undefined8 **)(param_3 + 0x20);
      FUN_1083c6640(puVar10,&puStack_50);
      if ((int)puVar10 == 0) {
        puVar10 = (undefined8 *)0x40;
        __Znwm();
        *puVar10 = &PTR_FUN_110a476c0;
        puVar10[1] = 0;
        puVar10[3] = lStack_48;
        puVar9 = puVar10 + 4;
        *(undefined1 *)puVar9 = 0;
        *(undefined1 *)(puVar10 + 6) = 0;
        puVar10[7] = param_3;
        plVar15 = puVar10 + 2;
        *plVar15 = param_2;
        plVar13 = plVar15;
        puStack_58 = puVar10;
        FUN_10840226c(puVar9);
        (**(code **)(*(long *)puVar10[3] + 0x28))();
        if (plVar13 == (long *)0x0) {
          FUN_1083fcf3c(puVar9);
          uVar12 = puVar10[2];
          func_0x00010840371c(uVar12,*(undefined8 *)(puVar10[7] + 0x20));
          if ((int)uVar12 != 0) {
            func_0x00010840370c(puVar10[7]);
            (*extraout_x8_02)();
            uVar5 = (int)uVar12 == 1;
            if (!(bool)uVar5) {
              lVar16 = puVar10[2];
              func_0x00010840370c(puVar10[7]);
              (*extraout_x8_03)();
              func_0x000108403910(lVar16 + 0x30,uVar12);
              func_0x000108403918(*plVar15 + 0x30,0x181);
            }
            plVar13 = (long *)puVar10[3];
            (**(code **)(*plVar13 + 0x20))();
            if (plVar13 != (long *)0x0) {
              func_0x0001083fcf64(*plVar13,(int)plVar13[1],1);
              func_0x000108403918(*plVar15 + 0x30,0x16b);
            }
            func_0x000108403a14(puVar10[4]);
            if (!(bool)uVar5) {
              func_0x000108403c80();
            }
            puStack_58 = (undefined8 *)0x0;
            goto LAB_1083fd954;
          }
        }
        puVar10 = (undefined8 *)0x0;
LAB_1083fd954:
        uStack_60 = 0;
        *param_1 = puVar10;
        FUN_108403008(&uStack_60);
        FUN_108403008(&puStack_58);
        return;
      }
      func_0x000108403680();
      (*extraout_x8_01)();
      puVar9 = puStack_50;
      puVar11 = puVar10;
      func_0x000108403b60();
      puVar11[1] = 0;
      puVar11[2] = lStack_48;
      *(int *)(puVar11 + 3) = (int)puVar9 * (int)puVar10;
      *(int *)((long)puVar11 + 0x1c) = (int)puVar10;
      *puVar11 = &PTR_FUN_110a475f0;
      puStack_58 = (undefined8 *)0x0;
      *param_1 = puVar11;
      ppuVar8 = &puStack_58;
      goto LAB_1083fd76c;
    }
    if (iVar3 != 0x2f) {
      if (iVar3 == 0x32) {
        lStack_48 = *(long *)(param_3 + 0x18);
        param_2 = param_2 + 0x140;
        FUN_1083d66f4(param_2,&lStack_48);
        lVar16 = lStack_48;
        pcVar7 = (char *)0x18;
        __Znwm();
        puVar2 = &UNK_110a47510;
        if ((int)param_2 == 0) {
          puVar2 = &UNK_110a47578;
        }
        *(undefined **)pcVar7 = puVar2 + 0x10;
        pcVar7[8] = '\0';
        pcVar7[9] = '\0';
        pcVar7[10] = '\0';
        pcVar7[0xb] = '\0';
        pcVar7[0xc] = '\0';
        pcVar7[0xd] = '\0';
        pcVar7[0xe] = '\0';
        pcVar7[0xf] = '\0';
        *(long *)(pcVar7 + 0x10) = lVar16;
LAB_1083fd82c:
        *param_1 = pcVar7;
        return;
      }
      if ((int)param_4 != 0) {
        puVar9 = (undefined8 *)0x40;
        __Znwm();
        *puVar9 = &PTR_FUN_110a47728;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = param_3;
        *(undefined1 *)(puVar9 + 4) = 0;
        *(undefined1 *)(puVar9 + 6) = 0;
        puVar10 = puVar9;
        func_0x000108403680();
        uVar6 = SUB84(puVar10,0);
        (*extraout_x8_00)();
        *(undefined4 *)(puVar9 + 7) = uVar6;
        puStack_50 = puVar9;
        goto LAB_1083fd7ac;
      }
LAB_1083fd810:
      *param_1 = 0;
      return;
    }
    func_0x0001084037e8(param_1,param_2,*(undefined8 *)(param_3 + 0x18));
    if (lStack_48 == 0) goto LAB_1083fd810;
    pcVar1 = param_3 + 0x20;
    pcVar14 = (char *)(ulong)(byte)param_3[0x24];
    pcVar7 = pcVar1;
    FUN_1083fd9f0(pcVar1,pcVar14);
    if ((int)pcVar7 == 0) {
      func_0x000108403b60();
      *(undefined ***)pcVar7 = &PTR_FUN_110a47658;
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      pcVar7[0xc] = '\0';
      pcVar7[0xd] = '\0';
      pcVar7[0xe] = '\0';
      pcVar7[0xf] = '\0';
      *(long *)(pcVar7 + 0x10) = lStack_48;
      *(char **)(pcVar7 + 0x18) = pcVar1;
      goto LAB_1083fd82c;
    }
    func_0x000108403b60();
    cVar4 = *pcVar1;
    *(long *)(pcVar7 + 0x10) = lStack_48;
    *(int *)(pcVar7 + 0x18) = (int)cVar4;
  }
  *(int *)(pcVar7 + 0x1c) = (int)pcVar14;
  *(undefined ***)pcVar7 = &PTR_FUN_110a475f0;
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  pcVar7[0xc] = '\0';
  pcVar7[0xd] = '\0';
  pcVar7[0xe] = '\0';
  pcVar7[0xf] = '\0';
  puStack_50 = (undefined8 *)0x0;
  *param_1 = pcVar7;
  ppuVar8 = &puStack_50;
LAB_1083fd76c:
  func_0x000108402e64(ppuVar8);
  return;
}



/* Entry: 1083fd9f0; end: 1083fda23;  */

bool FUN_1083fd9f0(byte *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 1;
  do {
    uVar2 = uVar1;
    if (param_2 <= uVar2) break;
    uVar1 = uVar2 + 1;
  } while ((uint)param_1[uVar2] == ((uint)*param_1 + (int)uVar2 & 0xff));
  return param_2 <= uVar2;
}



/* Entry: 1083fda24; end: 1083fdaa3;  */

void FUN_1083fda24(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  
  func_0x00010840389c();
  func_0x000108403a9c();
  func_0x000108403ac0();
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x30);
  func_0x000108403784();
                    /* WARNING: Could not recover jumptable at 0x000108403d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1083fdaa4; end: 1083fe67b;  */

undefined1  [16]
FUN_1083fdaa4(long *param_1,undefined8 *****param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *****pppppuVar13;
  undefined8 *puVar14;
  code *extraout_x8;
  ulong uVar15;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar16;
  ulong extraout_x8_02;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint *puVar20;
  int extraout_w11;
  long extraout_x11;
  uint uVar21;
  int extraout_w12;
  int *piVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *****pppppuVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  undefined8 *****pppppuVar29;
  long *plVar30;
  undefined8 *****pppppuVar31;
  long lVar32;
  undefined8 *****pppppuVar33;
  long lVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  uint uStack_11c;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (param_1[10] == 0) {
    uVar28 = 0xffffffff;
  }
  else {
    FUN_1083e43a8(&ppppuStack_80,*(undefined8 *)(param_3 + 0x10));
    uVar28 = uStack_78;
    if (-1 < (long)uStack_70) {
      uVar28 = uStack_70 >> 0x38;
    }
    if (8 < uVar28) {
      pppppuVar25 = (undefined8 *****)ppppuStack_80;
      if (-1 < (long)uStack_70) {
        pppppuVar25 = &ppppuStack_80;
      }
      _memcmp(pppppuVar25,&UNK_10f48d1f5,9);
      if ((int)pppppuVar25 == 0) {
        func_0x000107c27fb4(&ppppuStack_a0,&ppppuStack_80,9,0xffffffffffffffff);
        func_0x000107c27b9c(&ppppuStack_80,&ppppuStack_a0);
        func_0x000108403a6c();
      }
    }
    lVar32 = 0;
    uVar28 = 0;
    while( true ) {
      uVar15 = uStack_70;
      uVar16 = uStack_78;
      ppppuVar10 = ppppuStack_80;
      lVar26 = param_1[10];
      puVar24 = *(undefined8 **)(lVar26 + 0x48);
      puVar27 = *(undefined8 **)(lVar26 + 0x50);
      lVar34 = (long)puVar27 - (long)puVar24;
      uVar19 = lVar34 / 0x18;
      if (uVar19 <= uVar28) break;
      uVar19 = (long)puVar24 + lVar32;
      func_0x000107c278d0(uVar19,&ppppuStack_80);
      if ((uVar19 & 1) != 0) goto LAB_1083fdcd4;
      uVar28 = uVar28 + 1;
      lVar32 = lVar32 + 0x18;
    }
    uStack_98 = uStack_78;
    ppppuStack_a0 = ppppuStack_80;
    uStack_90 = uStack_70;
    ppppuStack_80 = (undefined8 *****)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (puVar27 < *(undefined8 **)(lVar26 + 0x58)) {
      puVar27[2] = uVar15;
      puVar27[1] = uVar16;
      *puVar27 = ppppuVar10;
      uStack_98 = 0;
      uStack_90 = 0;
      ppppuStack_a0 = (undefined8 *****)0x0;
      puVar27 = puVar27 + 3;
    }
    else {
      uVar28 = uVar19 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar28) {
        FUN_108403198();
        goto LAB_1083fe5c4;
      }
      uVar15 = ((long)*(undefined8 **)(lVar26 + 0x58) - (long)puVar24) / 0x18;
      uVar16 = uVar15 * 2;
      if (uVar16 < uVar28 || uVar16 - uVar28 == 0) {
        uVar16 = uVar28;
      }
      if (0x555555555555554 < uVar15) {
        uVar16 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar16) {
        func_0x000104bd35f4();
        goto LAB_1083fe5c4;
      }
      lVar32 = uVar16 * 0x18;
      __Znwm();
      puVar1 = (undefined8 *)(lVar32 + lVar34);
      puVar1[1] = uStack_98;
      *puVar1 = ppppuStack_a0;
      puVar1[2] = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      ppppuStack_a0 = (undefined8 *****)0x0;
      puVar14 = puVar1 + (lVar34 / -0x18) * 3;
      for (puVar18 = puVar24; puVar18 != puVar27; puVar18 = puVar18 + 3) {
        uVar35 = puVar18[1];
        uVar12 = *puVar18;
        puVar14[2] = puVar18[2];
        puVar14[1] = uVar35;
        *puVar14 = uVar12;
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        puVar14 = puVar14 + 3;
      }
      for (; puVar24 != puVar27; puVar24 = puVar24 + 3) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar24);
      }
      puVar27 = puVar1 + 3;
      lVar9 = *(long *)(lVar26 + 0x48);
      *(undefined8 **)(lVar26 + 0x48) = puVar1 + (lVar34 / -0x18) * 3;
      *(undefined8 **)(lVar26 + 0x50) = puVar27;
      *(ulong *)(lVar26 + 0x58) = lVar32 + uVar16 * 0x18;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 **)(lVar26 + 0x50) = puVar27;
    func_0x000108403a6c();
    uVar28 = uVar19;
LAB_1083fdcd4:
    func_0x000108403bb4();
    if ((param_1[10] != 0) && ((char)param_1[0xb] == '\x01')) {
      func_0x000108403674(param_1 + 6,0x202,0xffffffffffffffff,(int)param_1[0x1b],uVar28);
    }
  }
  lVar32 = *(long *)(param_3 + 0x10);
  puVar27 = *(undefined8 **)(lVar32 + 0x38);
  uVar4 = *(uint *)(lVar32 + 0x40);
  uVar19 = (ulong)(int)uVar4;
  ppppuStack_f0 = (undefined8 *****)0x0;
  ppppuStack_e0 = (undefined8 *****)0x0;
  uStack_d8 = 0x100000000;
  uStack_e8 = 0x100000000;
  if (*(char *)(lVar32 + 0x56) != '\x01') {
    iVar8 = (int)param_5;
    if (iVar8 < 1) {
      if (iVar8 < 0) {
LAB_1083fe5c4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1083fe5c8);
        (*pcVar5)();
      }
    }
    else {
      FUN_1084031ec(0x3ff0000000000000,&ppppuStack_e0,param_5);
      uVar3 = iVar8 - (uint)uStack_d8;
      FUN_1084031ec(0x3ff8000000000000,&ppppuStack_e0,uVar3);
      lVar32 = (long)(int)(uint)uStack_d8;
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 + uVar3);
      pppppuVar25 = (undefined8 *****)(ppppuStack_e0 + lVar32);
      for (uVar16 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar16 != 0;
          uVar16 = uVar16 - 1) {
        *pppppuVar25 = (undefined8 ****)0x0;
        pppppuVar25 = pppppuVar25 + 1;
      }
    }
    pppppuVar25 = (undefined8 *****)0x0;
    pppppuVar33 = (undefined8 *****)0x0;
    uVar16 = 0;
    uStack_11c = 1;
LAB_1083fde14:
    iVar8 = (int)pppppuVar33;
    if (param_5 == uVar16) goto LAB_1083fe0b4;
    bVar6 = uVar16 <= uVar19;
    bVar7 = uVar19 == uVar16;
    if (bVar7) goto LAB_1083fe5c4;
    lVar32 = *(long *)(param_4 + uVar16 * 8);
    pppppuVar29 = (undefined8 *****)puVar27[uVar16];
    func_0x000108403c50(*(undefined8 *)(lVar32 + 0x10));
    if (!bVar6 || bVar7) {
      ppppuStack_80 = *(undefined8 *****)(lVar32 + 0x18);
      plVar11 = param_1 + 0xc;
      FUN_1083fe690(plVar11,&ppppuStack_80);
      if (plVar11 != (long *)0x0) {
        lVar32 = *plVar11;
        plVar11 = param_1 + 0xc;
        ppppuStack_80 = pppppuVar29;
        func_0x0001083fe700(plVar11,&ppppuStack_80);
        *(int *)plVar11 = (int)lVar32;
      }
    }
    else if ((*(uint *)(pppppuVar29 + 6) >> 5 & 1) == 0) {
      uVar15 = *(ulong *)(*param_1 + 0x20);
      pppppuVar13 = pppppuVar29;
      FUN_1083d70ac();
      pppppuVar31 = pppppuVar33;
      if (uVar15 >> 0x20 == 0) {
        lVar26 = lVar32;
        FUN_1083d64e8();
        if ((int)lVar26 != 0) {
          plVar11 = param_1;
          FUN_1083fe7bc(param_1,lVar32,0);
          if (((ulong)plVar11 & 1) == 0) goto LAB_1083fe568;
          uVar12 = *(undefined8 *)(lVar32 + 0x10);
          func_0x000108403744(uVar12);
          (*extraout_x8)();
          FUN_1083f9178(param_1 + 6,uVar12);
        }
      }
      else {
        if ((((int)pppppuVar13 == 0) && (*(int *)(lVar32 + 0xc) == 0x32)) &&
           (pppppuVar13 = *(undefined8 ******)(lVar32 + 0x18),
           (*(uint *)(pppppuVar13 + 6) >> 3 & 1) == 0)) {
          plVar11 = param_1 + 0x28;
          ppppuStack_80 = pppppuVar13;
          FUN_1083d66f4(plVar11,&ppppuStack_80);
          if (((ulong)plVar11 & 1) == 0) {
            plVar11 = param_1 + 0xe;
            FUN_1083fd544(plVar11,pppppuVar13);
            ppppuVar10 = (undefined8 ****)(param_1 + 0xe);
            pppppuVar31 = pppppuVar29;
            FUN_1083fd3f4(ppppuVar10,pppppuVar29,plVar11);
            if (iVar8 < (int)(uStack_11c >> 1)) {
              pppppuVar33 = pppppuVar25 + (long)iVar8 * 3;
              *pppppuVar33 = pppppuVar29;
              pppppuVar33[1] = ppppuVar10;
              *(char *)(pppppuVar33 + 2) = (char)pppppuVar31;
              pppppuVar33 = (undefined8 *****)(ulong)(iVar8 + 1);
              goto LAB_1083fdf00;
            }
            if (iVar8 == 0x7fffffff) {
              func_0x00010bdb1a68();
              goto LAB_1083fe5c4;
            }
            uVar15 = (ulong)(iVar8 + 1U);
            uStack_78 = 0x7fffffff;
            ppppuStack_80 = (undefined8 *****)0x18;
            pppppuVar13 = &ppppuStack_80;
            FUN_10840fe24(0x3ff8000000000000);
            pppppuVar33 = pppppuVar13 + (long)pppppuVar33 * 3;
            *pppppuVar33 = pppppuVar29;
            pppppuVar33[1] = ppppuVar10;
            *(char *)(pppppuVar33 + 2) = (char)pppppuVar31;
            if (iVar8 != 0) {
              _memcpy();
            }
            if ((uStack_11c & 1) != 0) {
              _free(pppppuVar25);
            }
            uVar15 = uVar15 / 0x18;
            if (0x7ffffffe < uVar15) {
              uVar15 = 0x7fffffff;
            }
            uStack_11c = (int)uVar15 << 1 | 1;
            pppppuVar33 = (undefined8 *****)(ulong)(iVar8 + 1U);
            pppppuVar25 = pppppuVar13;
            goto LAB_1083fdf00;
          }
        }
        plVar11 = param_1;
        func_0x00010840371c(param_1,lVar32);
        if ((int)plVar11 == 0) goto LAB_1083fe568;
        plVar11 = param_1 + 0xe;
        FUN_1083fd544(plVar11,pppppuVar29);
        func_0x0001083fe76c(param_1,plVar11);
      }
    }
    else {
      func_0x000108403e04(&ppppuStack_80,param_1,lVar32);
      pppppuVar31 = (undefined8 *****)ppppuStack_e0;
      if (((int)uVar16 < 0) || ((int)(uint)uStack_d8 <= (int)uVar16)) goto LAB_1083fe5c4;
      uVar15 = uVar16 & 0x7fffffff;
      ppppuVar10 = (undefined8 ****)ppppuStack_e0[uVar15];
      ppppuStack_e0[uVar15] = ppppuStack_80;
      pppppuVar13 = (undefined8 *****)ppppuStack_80;
      if (ppppuVar10 != (undefined8 ****)0x0) {
        func_0x00010840381c();
        pppppuVar13 = (undefined8 *****)pppppuVar31[uVar15];
      }
      if (pppppuVar13 == (undefined8 *****)0x0) {
LAB_1083fe568:
        func_0x000108403c9c();
        uStack_e8 = CONCAT44(uStack_11c,iVar8);
        ppppuStack_f0 = pppppuVar25;
        goto LAB_1083fe578;
      }
      if (((*(uint *)(pppppuVar29 + 6) ^ 0xffffffff) & 0x30) == 0) {
        plVar11 = param_1;
        func_0x0001083fda24();
        if ((int)plVar11 == 0) goto LAB_1083fe568;
        plVar11 = param_1 + 0xe;
        FUN_1083fd544(plVar11,pppppuVar29);
        func_0x0001083fe76c(param_1,plVar11);
      }
    }
LAB_1083fdf00:
    uVar16 = uVar16 + 1;
    goto LAB_1083fde14;
  }
  if ((param_1[10] != 0) && ((char)param_1[0xb] == '\x01')) {
    puVar24 = puVar27;
    for (lVar32 = uVar19 << 3; lVar32 != 0; lVar32 = lVar32 + -8) {
      lVar26 = param_1[0x1b];
      plVar11 = param_1 + 0xe;
      FUN_1083fd544(plVar11,*puVar24);
      FUN_1083fe67c(param_1 + 6,(int)lVar26,plVar11);
      puVar24 = puVar24 + 1;
    }
  }
  pppppuVar33 = (undefined8 *****)0x0;
  pppppuVar25 = (undefined8 *****)0x0;
  goto LAB_1083fe0c4;
LAB_1083fe318:
  func_0x000108403e90();
  uVar28 = extraout_x8_01;
  if (extraout_w11 == 1) goto LAB_1083fe3f0;
  goto LAB_1083fe2f4;
LAB_1083fe46c:
  func_0x000108403e90();
  uVar16 = extraout_x8_02;
  lVar32 = extraout_x11;
  if (extraout_w12 == 1) goto LAB_1083fe54c;
  goto LAB_1083fe448;
LAB_1083fe0b4:
  uStack_e8 = CONCAT44(uStack_11c,iVar8);
  pppppuVar33 = (undefined8 *****)(long)iVar8;
  ppppuStack_f0 = pppppuVar25;
LAB_1083fe0c4:
  lVar32 = param_1[0x1e];
  lVar26 = *(long *)(param_3 + 0x10);
  plVar11 = param_1 + 0xe;
  ppppuStack_80 = param_2;
  FUN_1083fd478(plVar11,&ppppuStack_80);
  if (plVar11 == (long *)0x0) {
    uStack_c8 = *(undefined8 *)(lVar26 + 0x18);
    uStack_d0 = *(undefined8 *)(lVar26 + 0x10);
    func_0x000107c27958(auStack_b8,&uStack_d0);
    func_0x0001004c3cd0(&ppppuStack_a0,&DAT_10f62a9e8,auStack_b8);
    func_0x00010048a6c8(&ppppuStack_80,&ppppuStack_a0,&UNK_10f4944ce);
    plVar30 = param_1 + 0xe;
    FUN_1083fd2ec(plVar30,&ppppuStack_80,*(undefined8 *)(lVar26 + 0x48),*(undefined4 *)(lVar26 + 8),
                  1);
    func_0x000108403bb4();
    func_0x000108403a6c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    plVar11 = param_1 + 0xe;
    func_0x0001083fd4e8(plVar11,param_2,plVar30);
  }
  else {
    plVar30 = (long *)*plVar11;
  }
  iVar8 = (int)plVar11;
  param_1[0x1e] = (long)plVar30;
  func_0x000108403d6c();
  if ((iVar8 != 0) &&
     (*(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1,
     (*(byte *)(*(long *)(param_3 + 0x10) + 0x56) & 1) == 0)) {
    func_0x0001084035f4(param_1 + 6,0x224,0xffffffffffffffff);
  }
  plVar11 = param_1;
  FUN_1083ff828(param_1,*(undefined8 *)(param_3 + 0x18));
  iVar8 = (int)plVar11;
  uVar16 = param_4;
  pppppuVar31 = param_2;
  if (iVar8 == 0) {
LAB_1083fe298:
    param_4 = uVar16;
    func_0x000108403c9c();
  }
  else {
    func_0x000108403d6c();
    if (iVar8 != 0) {
      if ((*(byte *)(*(long *)(param_3 + 0x10) + 0x56) & 1) == 0) {
        FUN_1083fa1ac(param_1 + 6);
      }
      *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + -1;
    }
    uVar15 = param_1[0x1e];
    param_1[0x1e] = lVar32;
    if ((param_1[10] != 0) && ((char)param_1[0xb] == '\x01')) {
      func_0x000108403674(param_1 + 6,0x203,0xffffffffffffffff,(int)param_1[0x1b],uVar28);
    }
    ppppuVar10 = ppppuStack_e0;
    uVar3 = (uint)uStack_d8 & ((int)(uint)uStack_d8 >> 0x1f ^ 0xffffffffU);
    for (uVar28 = 0; uVar3 != uVar28; uVar28 = uVar28 + 1) {
      if ((undefined8 ****)ppppuVar10[uVar28] != (undefined8 ****)0x0) {
        if (uVar4 <= uVar28) goto LAB_1083fe5c4;
        lVar32 = puVar27[uVar28];
        plVar11 = param_1 + 0xe;
        FUN_1083fd544(plVar11,lVar32);
        FUN_1083ffef4(param_1 + 6,plVar11);
        plVar11 = param_1;
        func_0x0001083fda64(param_1,ppppuVar10[uVar28]);
        uVar16 = param_5;
        pppppuVar31 = pppppuVar33;
        if (((ulong)plVar11 & 1) == 0) goto LAB_1083fe298;
        uVar12 = *(undefined8 *)(lVar32 + 0x20);
        func_0x000108403744(uVar12);
        (*extraout_x8_00)();
        FUN_1083f9178(param_1 + 6,uVar12);
      }
    }
    pppppuVar33 = pppppuVar25 + (long)(int)pppppuVar33 * 3;
    for (; pppppuVar25 != pppppuVar33; pppppuVar25 = pppppuVar25 + 3) {
      if (*(char *)(pppppuVar25 + 2) == '\x01') {
        FUN_1083fd3f4(param_1 + 0xe,*pppppuVar25,pppppuVar25[1]);
      }
      else {
        pppppuVar31 = (undefined8 *****)*pppppuVar25;
        pppppuVar29 = &ppppuStack_80;
        ppppuStack_80 = pppppuVar31;
        FUN_108402a70();
        uVar4 = *(uint *)((long)param_1 + 0x74);
        uVar28 = (ulong)(uVar4 - 1 & (uint)pppppuVar29);
        if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != 0) {
LAB_1083fe2f4:
          lVar32 = param_1[0xf];
          piVar22 = (int *)(lVar32 + (long)(int)uVar28 * 0x18);
          iVar8 = *piVar22;
          if (iVar8 != 0) {
            if (((int)pppppuVar29 != iVar8) || (pppppuVar31 != *(undefined8 ******)(piVar22 + 2)))
            goto LAB_1083fe318;
            *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
            uVar16 = uVar28;
            while( true ) {
              uVar4 = (int)uVar28 - 1;
              if ((int)uVar28 < 1) {
                uVar4 = *(int *)((long)param_1 + 0x74) + uVar4;
              }
              uVar28 = (ulong)uVar4;
              puVar23 = (uint *)(lVar32 + (long)(int)uVar4 * 0x18);
              uVar3 = *puVar23;
              uVar21 = (uint)uVar16;
              puVar20 = (uint *)(lVar32 + (long)(int)uVar21 * 0x18);
              if (uVar3 == 0) break;
              uVar2 = *(int *)((long)param_1 + 0x74) - 1U & uVar3;
              if ((int)uVar2 < (int)uVar4 || (int)uVar21 <= (int)uVar2) {
                if ((((int)uVar4 <= (int)uVar21) ||
                    ((int)uVar21 <= (int)uVar2 && (int)uVar2 < (int)uVar4)) &&
                   (uVar16 = uVar28, uVar21 != uVar4)) {
                  if (*puVar20 == 0) {
                    uVar12 = *(undefined8 *)(puVar23 + 2);
                    *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar23 + 4);
                    *(undefined8 *)(puVar20 + 2) = uVar12;
                  }
                  else {
                    uVar12 = *(undefined8 *)(puVar23 + 4);
                    *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar23 + 2);
                    *(undefined8 *)(puVar20 + 4) = uVar12;
                  }
                  *puVar20 = uVar3;
                  lVar32 = param_1[0xf];
                }
              }
            }
            if (*puVar20 != 0) {
              *puVar20 = 0;
            }
            uVar4 = *(uint *)((long)param_1 + 0x74);
            if ((4 < (int)uVar4) && ((int)param_1[0xe] * 4 <= (int)uVar4)) {
              FUN_108402a8c(param_1 + 0xe,uVar4 >> 1);
            }
          }
        }
      }
LAB_1083fe3f0:
    }
    uVar28 = 0;
    while( true ) {
      bVar6 = param_5 <= uVar28;
      bVar7 = uVar28 == param_5;
      if (bVar7) break;
      func_0x000108403c50(*(undefined8 *)(*(long *)(param_4 + uVar28 * 8) + 0x10));
      if (!bVar6 || bVar7) {
        if (uVar19 <= uVar28) goto LAB_1083fe5c4;
        plVar11 = puVar27 + uVar28;
        FUN_10840326c();
        uVar4 = *(uint *)((long)param_1 + 100);
        uVar16 = (ulong)(uVar4 - 1 & (uint)plVar11);
        lVar32 = puVar27[uVar28];
        if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != 0) {
LAB_1083fe448:
          lVar26 = param_1[0xd];
          piVar22 = (int *)(lVar26 + (long)(int)uVar16 * 0x18);
          iVar8 = *piVar22;
          if (iVar8 != 0) {
            if (((int)plVar11 != iVar8) || (lVar32 != *(long *)(piVar22 + 2))) goto LAB_1083fe46c;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
            uVar17 = uVar16;
            while( true ) {
              uVar4 = (int)uVar16 - 1;
              if ((int)uVar16 < 1) {
                uVar4 = *(int *)((long)param_1 + 100) + uVar4;
              }
              uVar16 = (ulong)uVar4;
              puVar23 = (uint *)(lVar26 + (long)(int)uVar4 * 0x18);
              uVar3 = *puVar23;
              uVar21 = (uint)uVar17;
              puVar20 = (uint *)(lVar26 + (long)(int)uVar21 * 0x18);
              if (uVar3 == 0) break;
              uVar2 = *(int *)((long)param_1 + 100) - 1U & uVar3;
              if ((int)uVar2 < (int)uVar4 || (int)uVar21 <= (int)uVar2) {
                if ((((int)uVar4 <= (int)uVar21) ||
                    ((int)uVar21 <= (int)uVar2 && (int)uVar2 < (int)uVar4)) &&
                   (uVar17 = uVar16, uVar21 != uVar4)) {
                  if (*puVar20 == 0) {
                    uVar12 = *(undefined8 *)(puVar23 + 2);
                    *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar23 + 4);
                    *(undefined8 *)(puVar20 + 2) = uVar12;
                    lVar26 = param_1[0xd];
                  }
                  else {
                    *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar23 + 2);
                    puVar20[4] = puVar23[4];
                  }
                  *puVar20 = uVar3;
                }
              }
            }
            if (*puVar20 != 0) {
              *puVar20 = 0;
            }
            uVar4 = *(uint *)((long)param_1 + 100);
            if ((4 < (int)uVar4) && ((int)param_1[0xc] * 4 <= (int)uVar4)) {
              FUN_108403298(param_1 + 0xc,uVar4 >> 1);
            }
          }
        }
      }
LAB_1083fe54c:
      uVar28 = uVar28 + 1;
    }
    param_1 = (long *)(uVar15 & 0xffffffffffffff00);
    pppppuVar31 = (undefined8 *****)(uVar15 & 0xff);
    param_4 = 1;
  }
LAB_1083fe578:
  FUN_1083ffefc(&ppppuStack_f0);
  FUN_1084031a4(&ppppuStack_e0);
  auVar36._0_8_ = (ulong)param_1 | (ulong)pppppuVar31;
  auVar36._8_8_ = param_4;
  return auVar36;
}



/* Entry: 1083fe67c; end: 1083fe68f;  */

void FUN_1083fe67c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = 0xffffffff;
  uStack_2c = (undefined4)param_3;
  uStack_30 = 0x201;
  uStack_20 = (undefined4)((ulong)param_3 >> 0x20);
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_24 = param_2;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083fe690; end: 1083fe7bb;  */

void FUN_1083fe690(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint extraout_w8;
  long lVar4;
  int extraout_w9;
  int extraout_w9_00;
  uint extraout_w11;
  undefined8 uVar5;
  undefined8 extraout_x12;
  long extraout_x13;
  long unaff_x19;
  
  func_0x0001084038d8();
  FUN_10840326c();
  func_0x000108403b14(*(undefined4 *)(unaff_x19 + 4));
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar5 = 0x18;
  iVar2 = extraout_w9;
  do {
    if ((uVar1 == 0) ||
       (iVar2 = *(int *)(*(long *)(unaff_x19 + 8) + (long)iVar2 * (long)(int)uVar5), iVar2 == 0)) {
      lVar4 = 0;
LAB_1083fe6ec:
      func_0x000108403c70(lVar4);
      return;
    }
    bVar3 = (int)param_2 == iVar2;
    if ((bVar3) && (func_0x000108403cf0(), bVar3)) {
      lVar4 = extraout_x13 + 8;
      goto LAB_1083fe6ec;
    }
    func_0x00010840369c();
    uVar5 = extraout_x12;
    iVar2 = extraout_w9_00;
    uVar1 = extraout_w11;
  } while( true );
}



/* Entry: 1083fe7bc; end: 1083ff80b;  */

/* WARNING: Possible PIC construction at 0x0001083ff378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108401b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010841d3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083ff31c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff144) */
/* WARNING: Removing unreachable block (ram,0x0001083ff44c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff37c) */
/* WARNING: Removing unreachable block (ram,0x00010841d3d8) */
/* WARNING: Removing unreachable block (ram,0x000108410300) */
/* WARNING: Removing unreachable block (ram,0x000108410310) */
/* WARNING: Removing unreachable block (ram,0x0001083ffdb4) */
/* WARNING: Removing unreachable block (ram,0x00010840e230) */
/* WARNING: Removing unreachable block (ram,0x00010840e24c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1083fe7bc(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                     ,code *UNRECOVERED_JUMPTABLE_00)

{
  undefined **ppuVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
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
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  uint3 uVar25;
  float *pfVar26;
  float *pfVar27;
  bool bVar28;
  undefined1 uVar29;
  uint uVar30;
  float *pfVar31;
  float *pfVar32;
  long *plVar33;
  float *pfVar34;
  undefined **ppuVar35;
  long lVar36;
  float *pfVar37;
  float *pfVar38;
  undefined *puVar39;
  undefined *puVar40;
  long *plVar41;
  float *pfVar42;
  long lVar43;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar44;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *pcVar45;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  undefined4 uVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  undefined8 unaff_x19;
  float *pfVar50;
  short *psVar51;
  undefined8 unaff_x20;
  float *pfVar52;
  ulong uVar53;
  undefined8 unaff_x21;
  uint uVar54;
  undefined8 unaff_x22;
  float *pfVar55;
  float *pfVar56;
  undefined8 unaff_x23;
  ulong unaff_x24;
  float *pfVar57;
  undefined8 uVar58;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar59;
  float *unaff_x27;
  float *unaff_x28;
  ulong uVar60;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  int iVar61;
  undefined8 extraout_d0;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  double dVar65;
  undefined8 extraout_d0_00;
  int iVar69;
  int iVar70;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  int iVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 extraout_var_09;
  float extraout_s1;
  undefined8 extraout_d1;
  undefined8 uVar72;
  undefined8 extraout_d1_02;
  undefined1 auVar73 [15];
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined1 auVar74 [16];
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float extraout_s2;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 uVar78;
  undefined8 extraout_d2_02;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined1 auVar79 [16];
  undefined8 extraout_d2_01;
  undefined8 extraout_var_18;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float extraout_s3;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined1 in_q4 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  undefined1 in_q5 [16];
  float fVar89;
  undefined1 auVar86 [16];
  float fVar92;
  undefined1 in_q6 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  int iVar93;
  float fVar94;
  undefined4 uVar95;
  int iVar98;
  float fVar99;
  int iVar100;
  float fVar101;
  undefined1 in_q7 [16];
  int iVar102;
  float fVar103;
  undefined4 unaff_s8;
  float fVar104;
  undefined4 unaff_00005104;
  undefined1 unaff_b9;
  undefined1 unaff_00005121;
  undefined1 unaff_00005122;
  undefined1 unaff_00005123;
  undefined1 unaff_00005124;
  byte bVar105;
  undefined1 unaff_00005125;
  byte bVar106;
  undefined1 unaff_00005126;
  byte bVar107;
  undefined1 unaff_00005127;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  undefined8 unaff_d10;
  undefined1 auVar117 [16];
  float fVar118;
  undefined8 unaff_d11;
  undefined1 auVar119 [12];
  undefined1 auVar120 [16];
  float fVar122;
  undefined1 unaff_b12;
  undefined1 unaff_00005181;
  undefined1 unaff_00005182;
  undefined1 unaff_00005183;
  undefined1 unaff_00005184;
  undefined1 unaff_00005185;
  undefined1 unaff_00005186;
  undefined1 unaff_00005187;
  undefined8 unaff_d13;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined8 unaff_d14;
  undefined1 auVar125 [16];
  undefined8 unaff_d15;
  byte bVar126;
  byte bVar128;
  byte bVar129;
  float in_s16;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  float in_register_00005204;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  float in_register_00005208;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  float in_register_0000520c;
  undefined1 auVar127 [16];
  byte bVar142;
  undefined1 extraout_b17;
  undefined1 uVar143;
  undefined1 extraout_b17_00;
  undefined1 extraout_b17_01;
  undefined1 extraout_var_21;
  undefined1 uVar144;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar145;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar146;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar147;
  undefined1 extraout_var_31;
  undefined1 uVar148;
  undefined1 extraout_var_32;
  undefined1 uVar149;
  undefined1 extraout_var_33;
  undefined1 uVar150;
  undefined1 in_register_00005228;
  undefined1 in_register_00005229;
  undefined1 in_register_0000522a;
  undefined1 in_register_0000522b;
  undefined1 in_register_0000522c;
  undefined1 in_register_0000522d;
  undefined1 in_register_0000522e;
  undefined1 in_register_0000522f;
  float extraout_s18;
  float extraout_s18_00;
  float extraout_var_34;
  float fVar151;
  float fVar152;
  float extraout_s19;
  float extraout_var_35;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float extraout_s21;
  float fVar157;
  float extraout_s21_00;
  float extraout_var_36;
  float fVar158;
  float fVar159;
  float extraout_var_37;
  float in_register_000052a8;
  float fVar160;
  float in_register_000052ac;
  byte in_b22;
  byte in_register_000052c1;
  byte in_register_000052c2;
  byte in_register_000052c3;
  float fVar161;
  byte in_register_000052c4;
  byte in_register_000052c5;
  byte in_register_000052c6;
  byte in_register_000052c7;
  float fVar162;
  byte in_register_000052c8;
  byte in_register_000052c9;
  byte in_register_000052ca;
  byte in_register_000052cb;
  float fVar163;
  byte in_register_000052cc;
  byte in_register_000052cd;
  byte in_register_000052ce;
  byte in_register_000052cf;
  float fVar164;
  float extraout_s23;
  float extraout_s23_00;
  float extraout_var_38;
  float fVar165;
  float extraout_var_39;
  float in_register_000052e8;
  float in_register_000052ec;
  float extraout_s24;
  float extraout_s24_00;
  float extraout_var_40;
  float extraout_var_41;
  float in_register_00005308;
  float in_register_0000530c;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar171;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  float extraout_s26;
  float extraout_s26_00;
  float extraout_var_42;
  float extraout_var_43;
  float in_register_00005348;
  float in_register_0000534c;
  float fVar172;
  float extraout_s27;
  float extraout_s27_00;
  float extraout_var_44;
  float extraout_var_45;
  float in_register_00005368;
  float fVar173;
  float in_register_0000536c;
  float fVar174;
  float fVar175;
  undefined4 extraout_s28;
  float fVar176;
  undefined4 extraout_var_46;
  float fVar177;
  float fVar178;
  undefined4 uVar179;
  undefined1 extraout_b30;
  undefined1 extraout_b30_00;
  undefined1 extraout_b30_01;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 extraout_var_61;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 in_register_000053c8;
  undefined1 in_register_000053c9;
  undefined1 in_register_000053ca;
  undefined1 in_register_000053cb;
  undefined1 in_register_000053cc;
  undefined1 in_register_000053cd;
  undefined1 in_register_000053ce;
  undefined1 in_register_000053cf;
  float fVar181;
  float fVar182;
  undefined1 auVar180 [16];
  float fVar183;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar75 [16];
  undefined1 auVar84 [16];
  undefined1 auVar96 [12];
  undefined1 auVar97 [16];
  undefined1 auVar121 [16];
  
code_r0x0001083fe7bc:
  pfVar27 = (float *)((long)register0x00000008 + -0xa0);
  pfVar26 = (float *)((long)register0x00000008 + -0xa0);
  pfVar32 = (float *)((long)register0x00000008 + -0xa0);
  pfVar37 = (float *)((long)register0x00000008 + -0xa0);
  *(ulong *)((long)register0x00000008 + -0x60) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x58) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pfVar50 = (float *)((long)register0x00000008 + -0x10);
  pfVar38 = (float *)&UNK_10df26510;
  pfVar31 = (float *)&UNK_10df265ec;
  pfVar57 = (float *)&UNK_10df26584;
  pfVar56 = param_1;
  pfVar42 = param_2;
code_r0x0001083fe7fc:
  pfVar52 = pfVar42;
  pfVar55 = (float *)0x0;
  pfVar42 = pfVar52;
  switch(pfVar52[3]) {
  case 3.50325e-44:
    goto code_r0x0001083feb9c;
  case 3.64338e-44:
    *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(pfVar52 + 6);
code_r0x0001083febc8:
    pfVar56 = param_1 + 0x18;
code_r0x0001083febd0:
    FUN_1083fe690();
code_r0x0001083febd4:
    if ((int)pfVar52[0xe] < 1) goto code_r0x0001083ff7a0;
    pfVar32 = pfVar56;
    func_0x000108403650();
    pfVar42 = pfVar56;
code_r0x0001083febf0:
    if ((int)pfVar32 == 0) goto code_r0x0001083ff774;
    bVar105 = *(byte *)(*(long *)(*(long *)(pfVar52 + 6) + 0x20) + 0x2c);
    ppuVar44 = (undefined **)(ulong)bVar105;
    if (bVar105 == 0xd) {
      func_0x000108403bec();
      func_0x0001083fae74(param_1 + 0xc,*pfVar42);
    }
    else {
code_r0x0001083fec08:
      iVar61 = (int)pfVar32;
      if ((int)ppuVar44 != 0xf) goto code_r0x0001083fec10;
      if ((int)pfVar52[0xe] < 2) {
code_r0x0001083ff7a0:
                    /* WARNING: Does not return */
        pcVar45 = (code *)SoftwareBreakpoint(1,0x1083ff7a4);
        (*pcVar45)();
      }
      func_0x000108403650();
      if (iVar61 == 0) goto code_r0x0001083ff774;
      func_0x0001084035f4(param_1 + 0xc,0x22a,0xffffffffffffffff);
      func_0x000108403bec();
      func_0x0001083fae84(param_1 + 0xc,*pfVar42);
    }
    goto code_r0x0001083ff3d8;
  case 3.78351e-44:
  case 3.92364e-44:
  case 4.06377e-44:
  case 4.90454e-44:
    func_0x00010840359c();
    if ((float *)0x1 < pfVar56) {
      func_0x000108403784();
      FUN_1084016cc();
      if (((ulong)pfVar56 & 1) != 0) break;
    }
    func_0x000108403c24();
    lVar48 = (long)param_2 << 3;
    goto code_r0x0001083fe930;
  case 4.2039e-44:
  case 4.62428e-44:
    func_0x000108403c24();
    if (param_2 == (float *)0x0) goto code_r0x0001083ff7a0;
    pfVar42 = *(float **)pfVar56;
    func_0x0001084035d4();
    if ((int)pfVar56 == 0) goto code_r0x0001083ff774;
    func_0x000108403624();
    func_0x00010840365c();
    pfVar32 = *(float **)(pfVar52 + 4);
    func_0x000108403634();
    func_0x00010840365c();
    auVar185._8_8_ = extraout_var_19;
    auVar185._0_8_ = extraout_d3;
    auVar184._8_8_ = extraout_var;
    auVar184._0_8_ = extraout_d0;
    uVar30 = (uint)pfVar32;
    uVar54 = (uint)pfVar56;
    if (uVar54 == uVar30) break;
    uVar29 = uVar54 == 3;
    if (3 < uVar54) {
      if (uVar30 == 3) goto code_r0x0001083ff458;
      goto code_r0x0001083ff774;
    }
    ppuVar44 = (undefined **)((ulong)pfVar56 & 0xff);
    uVar54 = 0xdf26612;
    fVar165 = (float)extraout_d0;
    fVar151 = (float)extraout_d2;
    fVar85 = (float)((ulong)extraout_d0 >> 0x20);
    fVar152 = (float)((ulong)extraout_d2 >> 0x20);
    fVar166 = (float)extraout_var_16;
    fVar172 = (float)((ulong)extraout_var_16 >> 0x20);
    fVar175 = (float)((ulong)extraout_var >> 0x20);
    pfVar34 = pfVar32;
    pfVar26 = param_1;
    pfVar55 = pfVar56;
    uVar143 = extraout_b17;
    uVar144 = extraout_var_21;
    uVar145 = extraout_var_24;
    uVar146 = extraout_var_27;
    uVar147 = extraout_var_30;
    uVar148 = extraout_var_31;
    uVar149 = extraout_var_32;
    uVar150 = extraout_var_33;
    fVar157 = extraout_s21;
    fVar158 = extraout_var_36;
    fVar92 = extraout_s23;
    fVar159 = extraout_var_38;
    fVar118 = extraout_s24;
    fVar160 = extraout_var_40;
    fVar87 = extraout_s26;
    fVar88 = extraout_var_42;
    fVar89 = extraout_s27;
    fVar176 = extraout_var_44;
    switch(ppuVar44) {
    default:
      if (uVar30 == 3) {
code_r0x0001083ff458:
        func_0x00010840359c();
        func_0x000108403b20();
        func_0x0001084017e4();
        plVar41 = *(long **)(pfVar42 + 4);
        puVar40 = &UNK_10df26678;
code_r0x0001083ff6e0:
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        func_0x0001084038b0(param_1,plVar41,puVar40);
        goto FUN_108400898;
      }
      if ((uVar30 & 0xff) != 2) {
        if ((uVar30 & 0xff) != 1) goto code_r0x0001083ff774;
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x0001083fea04;
      }
      func_0x00010840359c();
      uVar179 = SUB84(param_3,0);
      func_0x0001084037dc();
      iVar61 = 0x117;
      goto code_r0x0001083ff448;
    case (undefined **)0x1:
      if (uVar30 == 3) goto code_r0x0001083ff458;
      if ((uVar30 & 0xff) != 2) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          pfVar32 = *(float **)(pfVar52 + 4);
          func_0x000108403618();
          uVar179 = SUB84(param_3,0);
          func_0x0001084037dc();
          iVar61 = 0x10b;
          goto code_r0x0001083ff448;
        }
        goto code_r0x0001083ff774;
      }
      break;
    case (undefined **)0x2:
      if (uVar30 == 3) goto code_r0x0001083ff458;
      if ((uVar30 & 0xff) != 1) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          func_0x00010840359c();
          uVar179 = SUB84(param_3,0);
          func_0x0001084037dc();
          iVar61 = 0x10f;
          goto code_r0x0001083ff448;
        }
        goto code_r0x0001083ff774;
      }
      break;
    case (undefined **)0x3:
      if (uVar30 == 0) {
        FUN_1083fa660(param_1 + 0xc);
      }
      else {
        if (2 < uVar30) goto code_r0x0001083ff774;
        func_0x0001084038cc();
        func_0x000108403910();
      }
      func_0x00010840359c();
      func_0x0001084038a8();
      func_0x00010840359c();
      func_0x0001084037dc();
      FUN_1083f9008();
      break;
    case (undefined **)0x5:
      goto code_r0x0001083feb04;
    case (undefined **)0x6:
      goto code_r0x0001083feae8;
    case (undefined **)0x7:
    case (undefined **)0xf:
      goto code_r0x0001083feea4;
    case (undefined **)0x8:
      goto code_r0x0001083fea28;
    case (undefined **)0x9:
      goto code_r0x0001083feac4;
    case (undefined **)0xa:
      goto code_r0x0001083feb1c;
    case (undefined **)0xb:
      goto code_r0x0001083fec08;
    case (undefined **)0xc:
      goto code_r0x0001083feea8;
    case (undefined **)0xd:
      goto code_r0x0001083fed78;
    case (undefined **)0xe:
      goto code_r0x0001083fec80;
    case (undefined **)0x10:
code_r0x0001083fea04:
      uVar179 = SUB84(param_3,0);
      iVar61 = 0x113;
code_r0x0001083ff448:
      uVar63 = 0x1083ff44c;
      pfVar26 = (float *)((long)register0x00000008 + -0xa0);
      pfVar56 = pfVar32;
      goto SUB_1083f8fd0;
    case (undefined **)0x11:
      FUN_10840226c();
      *(undefined8 *)(pfVar32 + 8) = *(undefined8 *)(*(long *)(pfVar32 + 6) + 0xf8);
      *(float **)(*(long *)(pfVar32 + 6) + 0xf8) = pfVar32;
      return pfVar32;
    case (undefined **)0x12:
      lVar48 = *(long *)(pfVar52 + 0x12);
      pfVar50 = param_1;
      FUN_1083fffa8();
      func_0x000108403de0();
      iVar61 = (int)pfVar50;
      fVar92 = param_1[0x10];
      if ((((ulong)pfVar32 & 0x10101) == 0) && (lVar48 != 0)) {
        param_1[0x10] = (float)((int)fVar92 + 2);
        func_0x000108403878();
        func_0x0001083f98fc();
        func_0x000108403838();
        if (iVar61 != 0) {
          func_0x000108403990();
          func_0x0001083f9780();
          func_0x000108403838();
          if (iVar61 != 0) {
            func_0x0001084039dc();
            if (*(int *)(*(long *)(pfVar52 + 0x12) + 0x18) < 2) {
code_r0x0001083ffab0:
              func_0x0001084036f0();
              func_0x000108403dec();
              func_0x000108400018(param_1);
              return (float *)0x1;
            }
            func_0x0001084039d0();
            if (iVar61 != 0) {
              iVar61 = (int)*(undefined8 *)(*(long *)(pfVar52 + 0xe) + 0x10);
              func_0x000108403618();
              func_0x000108403900();
              func_0x000108403650();
              if (iVar61 != 0) {
                FUN_1083f994c(param_1 + 0xc,0,(int)fVar92 + 1);
                func_0x0001084036e4();
                goto code_r0x0001083ffab0;
              }
            }
          }
        }
        return (float *)0x0;
      }
      param_1[0x10] = (float)((int)fVar92 + 1);
      fVar118 = param_1[0x40];
      unaff_x24 = (ulong)(uint)fVar118;
      param_1[0x40] = fVar92;
      if (*(long *)(pfVar52 + 10) == 0) {
        func_0x0001084039dc();
      }
      else {
        func_0x000108403838();
        if (((ulong)pfVar50 & 1) == 0) {
          pfVar50 = (float *)0x0;
          goto code_r0x0001083ffe98;
        }
      }
      *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x88) = 0;
      *(float **)((long)register0x00000008 + -0x80) = param_1;
      *(float *)((long)register0x00000008 + -0x78) = 0.0;
      *(float *)((long)register0x00000008 + -0x74) = 0.0;
      func_0x000108403c60();
      func_0x000108403be4();
      pfVar56 = (float *)(ulong)(uint)param_1[0x10];
      param_1[0x10] = (float)((int)param_1[0x10] + 2);
      func_0x000108403990();
      func_0x0001083f97f0();
    case (undefined **)0x22:
    case (undefined **)0x24:
      fVar118 = (float)unaff_x24;
      func_0x0001083f9780();
      uVar60 = 0;
      FUN_1084001fc();
      func_0x000108403838();
      if ((uVar60 & 1) == 0) {
code_r0x0001083ffe90:
        pfVar50 = (float *)0x0;
      }
      else {
        iVar61 = (int)(float *)((long)register0x00000008 + -0x98);
        func_0x00010840024c();
        func_0x0001084039dc();
        if (*(long *)(pfVar52 + 0xe) != 0) {
          func_0x0001084039d0();
          if (iVar61 == 0) goto code_r0x0001083ffe90;
          func_0x00010840370c(*(undefined8 *)(pfVar52 + 0xe));
          (*extraout_x8_08)();
          func_0x000108403900();
        }
        func_0x000108403990();
        func_0x0001083f9780();
        if (*(long *)(pfVar52 + 0xc) != 0) {
          func_0x000108403650();
          if (iVar61 == 0) goto code_r0x0001083ffe90;
          func_0x000108400298(param_1 + 0xc);
          func_0x0001084036e4();
        }
        func_0x0001083f9830(param_1 + 0xc,(int)pfVar56 + 1);
        func_0x0001084036f0();
        func_0x000108403d80();
        func_0x000108403840();
        func_0x000108403dec();
        func_0x000108400018(param_1);
        pfVar50 = (float *)0x1;
      }
      func_0x000108403c34();
code_r0x0001083ffe98:
      param_1[0x40] = fVar118;
      return pfVar50;
    case (undefined **)0x13:
    case (undefined **)0x14:
    case (undefined **)0x18:
    case (undefined **)0x19:
    case (undefined **)0x1a:
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      fVar92 = *pfVar32;
      *(float *)((long)register0x00000008 + -0xb4) = fVar92;
      if ((int)fVar92 < 1) {
        pfVar32 = (float *)0x0;
      }
      else {
        FUN_10841021c();
      }
      return pfVar32;
    case (undefined **)0x15:
    case (undefined **)0x16:
    case (undefined **)0x17:
      if ((int)ppuVar44 == 5) {
        fVar92 = *pfVar32;
        if (fVar92 == *param_2) {
          cVar5 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar28) {
            *pfVar32 = SUB84(param_3,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar28 = cVar5 == '\0';
        }
        else {
          bVar28 = false;
          ClearExclusiveLocal();
        }
      }
      else {
        fVar92 = *pfVar32;
        if (fVar92 == *param_2) {
          cVar5 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar28) {
            *pfVar32 = SUB84(param_3,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar28 = cVar5 == '\0';
        }
        else {
          bVar28 = false;
          ClearExclusiveLocal();
        }
      }
      if (!bVar28) {
        *param_2 = fVar92;
        return (float *)0x0;
      }
      return (float *)0x1;
    case (undefined **)0x1b:
      goto code_r0x0001083ff1e8;
    case (undefined **)0x1c:
      goto code_r0x0001084042f8;
    case (undefined **)0x1d:
      func_0x000108404d5c();
      return *(float **)pfVar32;
    case (undefined **)0x1e:
      NEON_ucvtf(auVar184,4);
      uVar30 = (uint)CONCAT12((byte)((ulong)extraout_d2 >> 0x18) >> 2 &
                              (byte)((ulong)extraout_d1 >> 0x10),
                              CONCAT11((byte)(((uint)fVar151 >> 10) >> 8) &
                                       (byte)((ulong)extraout_d1 >> 8),
                                       (byte)((uint)fVar151 >> 10) & (byte)extraout_d1));
      uVar25 = CONCAT12((byte)((ulong)extraout_var_16 >> 0x18) >> 2 &
                        (byte)((ulong)extraout_var_10 >> 0x10),
                        CONCAT11((byte)(((uint)fVar166 >> 10) >> 8) &
                                 (byte)((ulong)extraout_var_10 >> 8),
                                 (byte)((uint)fVar166 >> 10) & (byte)extraout_var_10));
      auVar73._0_12_ = ZEXT312(uVar25) << 0x40;
      auVar73[0xc] = (byte)((uint)fVar172 >> 10) & (byte)((ulong)extraout_var_10 >> 0x20);
      auVar73[0xd] = (byte)(((uint)fVar172 >> 10) >> 8) & (byte)((ulong)extraout_var_10 >> 0x28);
      auVar73[0xe] = (byte)((ulong)extraout_var_16 >> 0x3a) & (byte)((ulong)extraout_var_10 >> 0x30)
      ;
      auVar74._0_4_ = uVar30 + in_q4._0_4_;
      auVar74._4_4_ =
           (uint)(uint3)(CONCAT16((byte)((ulong)extraout_d2 >> 0x3a) &
                                  (byte)((ulong)extraout_d1 >> 0x30),
                                  CONCAT15((byte)(((uint)fVar152 >> 10) >> 8) &
                                           (byte)((ulong)extraout_d1 >> 0x28),
                                           CONCAT14((byte)((uint)fVar152 >> 10) &
                                                    (byte)((ulong)extraout_d1 >> 0x20),uVar30))) >>
                        0x20) + in_q4._4_4_;
      auVar74._8_4_ = (uint)uVar25 + in_q4._8_4_;
      auVar74._12_4_ = (uint)auVar73._12_3_ + in_q4._12_4_;
      NEON_ucvtf(auVar74,4);
      uVar60 = CONCAT44((uint)fVar152 >> 0x14,(uint)fVar151 >> 0x14) & 0xfffff3fffffff3ff;
      auVar79._0_4_ = (int)uVar60 + in_q4._0_4_;
      auVar79._4_4_ = (int)(uVar60 >> 0x20) + in_q4._4_4_;
      auVar79._8_4_ = ((uint)fVar166 >> 0x14 & 0xfffff3ff) + in_q4._8_4_;
      auVar79._12_4_ = ((uint)fVar172 >> 0x14 & 0xfffff3ff) + in_q4._12_4_;
      NEON_ucvtf(auVar79,4);
      goto LAB_10840dd88;
    case (undefined **)0x1f:
      NEON_fmax(in_q7,auVar185,4);
      func_0x00010840dd18();
      auVar84._8_8_ = extraout_var_20;
      auVar84._0_8_ = extraout_d3_00;
      auVar184 = NEON_fmax(in_q6,auVar84,4);
      auVar21[1] = extraout_var_48;
      auVar21[0] = extraout_b30_00;
      auVar21[2] = extraout_var_51;
      auVar21[3] = extraout_var_54;
      auVar21[4] = extraout_var_57;
      auVar21[5] = extraout_var_59;
      auVar21[6] = extraout_var_61;
      auVar21[7] = extraout_var_63;
      auVar21[8] = in_register_000053c8;
      auVar21[9] = in_register_000053c9;
      auVar21[10] = in_register_000053ca;
      auVar21[0xb] = in_register_000053cb;
      auVar21[0xc] = in_register_000053cc;
      auVar21[0xd] = in_register_000053cd;
      auVar21[0xe] = in_register_000053ce;
      auVar21[0xf] = in_register_000053cf;
      NEON_fmin(auVar184,auVar21,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0x20:
    case (undefined **)0x21:
      _memcpy();
      *(long *)(pfVar52 + 2) = *(long *)(pfVar52 + 2) + (long)param_1;
      return pfVar32;
    case (undefined **)0x23:
    case (undefined **)0x25:
      *(undefined1 *)(ppuVar44 + 3) = 0;
      return (float *)0x0;
    case (undefined **)0x26:
      pfVar50 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar50,4);
      pfVar38 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar38,0xdf26510);
      *(float **)((long)register0x00000008 + -0x88) = pfVar38;
      FUN_1083a9268((float *)((long)register0x00000008 + 0x240),0,&UNK_10df26510,
                    (int)*(float *)((long)register0x00000008 + 0x70) * 0x53ae6118,unaff_x24);
      lVar48 = *(long *)((long)register0x00000008 + 0x240);
      if (lVar48 == 0) {
        *(float *)((long)register0x00000008 + -0x30) = 0.0;
        *(float *)((long)register0x00000008 + -0x2c) = 0.0;
        *(float *)((long)register0x00000008 + -0x28) = 0.0;
        *(float *)((long)register0x00000008 + -0x24) = 0.0;
        lVar43 = 0;
      }
      else {
        uVar63 = *(undefined8 *)(lVar48 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar48 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar63;
        lVar43 = *(long *)((long)register0x00000008 + 0x248);
        if (lVar43 == 0) {
          lVar43 = *(long *)(lVar48 + 0x10);
        }
      }
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_10df26584;
      if (pfVar50 != (float *)0x0) {
        FUN_108343a94((float *)((long)register0x00000008 + 0xf0));
        uVar63 = *(undefined8 *)((long)register0x00000008 + 0xf0);
        *(float *)((long)register0x00000008 + 0xf0) = 0.0;
        *(float *)((long)register0x00000008 + 0xf4) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 0x1d0) = uVar63;
        *(float *)((long)register0x00000008 + 0x1e0) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x1e4) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x1d8) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x1dc) = 4.2039e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0xf0));
        if (pfVar56 != (float *)0x0) {
          do {
            cVar5 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(pfVar56,0x10);
            if (bVar28) {
              *pfVar56 = (float)((int)*pfVar56 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x80) = 0.0;
        *(float *)((long)register0x00000008 + 0x84) = 0.0;
        *(float **)((long)register0x00000008 + 0x160) = pfVar56;
        *(float *)((long)register0x00000008 + 0x170) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x174) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x168) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x16c) = 2.8026e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0x80));
        FUN_108345950((float *)((long)register0x00000008 + 0x160),pfVar50,0,
                      (float *)((long)register0x00000008 + 0x1d0),unaff_x28,0);
        FUN_10810a400((float *)((long)register0x00000008 + 0x160));
        FUN_10810a400((float *)((long)register0x00000008 + 0x1d0));
      }
      *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_10df26510;
      *(float **)((long)register0x00000008 + -0x98) = pfVar56;
      *(float **)((long)register0x00000008 + -0x90) = pfVar52;
      uVar72 = *(undefined8 *)(unaff_x27 + 0x12);
      auVar184 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0xe),
                          *(undefined1 (*) [16])(unaff_x27 + 0xe),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar184._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar184._0_8_;
      uVar78 = *(undefined8 *)(unaff_x27 + 0xc);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar72;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar78;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x1d0));
      uVar63 = *(undefined8 *)unaff_x27;
      uVar62 = *(undefined8 *)(unaff_x27 + 4);
      uVar64 = *(undefined8 *)(unaff_x27 + 6);
      uVar58 = *(undefined8 *)unaff_x27;
      uVar59 = *(undefined8 *)(unaff_x27 + 6);
      *(undefined8 *)((long)register0x00000008 + 0x298) = *(undefined8 *)(unaff_x27 + 2);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar63;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar64;
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = uVar62;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x160));
      auVar184 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0x14),
                          *(undefined1 (*) [16])(unaff_x27 + 0x14),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar184._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar184._0_8_;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar58;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar72;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0xf0));
      uVar63 = *(undefined8 *)(unaff_x27 + 8);
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = *(undefined8 *)(unaff_x27 + 10);
      *(undefined8 *)((long)register0x00000008 + 0x298) = uVar63;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar59;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar78;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x80));
      uVar53 = (ulong)(uint)*(float *)((long)register0x00000008 + 0x70);
      FUN_108407868((float *)((long)register0x00000008 + 0x1d0),uVar53);
      FUN_108407868((float *)((long)register0x00000008 + 0x160),uVar53);
      lVar36 = 0;
      uVar60 = 0;
      uVar47 = *(ulong *)((long)register0x00000008 + -0x58);
      uVar49 = (ulong)((int)uVar47 + 1);
      *(ulong *)((long)register0x00000008 + -0x68) = uVar49;
      *(ulong *)((long)register0x00000008 + -0x60) = uVar53 + 1;
      *(ulong *)((long)register0x00000008 + -0x78) = uVar49 << 4;
      *(ulong *)((long)register0x00000008 + -0x70) = uVar49 << 3;
      *(long *)((long)register0x00000008 + -0x48) = lVar43 + 6;
      *(ulong *)((long)register0x00000008 + -0x40) = uVar49;
      *(ulong *)((long)register0x00000008 + -0x80) =
           ((uVar47 & 0xffffffff) * 2 + (uVar47 & 0xffffffff)) * 4;
      fVar92 = 0.0;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      lVar48 = *(long *)((long)register0x00000008 + -0x88);
      auVar184 = ZEXT816(0);
      fVar118 = 1.0 / (float)uVar53;
      while( true ) {
        uVar29 = uVar60 == *(ulong *)((long)register0x00000008 + -0x60);
        if ((bool)uVar29) break;
        *(long *)((long)register0x00000008 + 0x68) = auVar184._8_8_;
        *(long *)((long)register0x00000008 + 0x60) = auVar184._0_8_;
        auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x1d0));
        *(undefined8 *)((long)register0x00000008 + -8) = extraout_var_00;
        *(long *)((long)register0x00000008 + -0x10) = auVar184._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x78) = extraout_var_11;
        *(long *)((long)register0x00000008 + 0x70) = auVar184._8_8_;
        auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x160));
        *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_var_01;
        *(long *)((long)register0x00000008 + -0x20) = auVar184._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_12;
        *(long *)((long)register0x00000008 + 0x40) = auVar184._8_8_;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x58);
        FUN_108407868((float *)((long)register0x00000008 + 0xf0),uVar63);
        FUN_108407868((float *)((long)register0x00000008 + 0x80),uVar63);
        uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
        fVar157 = (float)uVar63;
        fVar158 = 1.0 - fVar157;
        *(ulong *)((long)register0x00000008 + -0x50) = uVar60 + 1;
        uVar62 = *(undefined8 *)((long)register0x00000008 + 0x1ac);
        uVar64 = *(undefined8 *)((long)register0x00000008 + 0x1c4);
        fVar159 = (float)*(undefined8 *)((long)register0x00000008 + 0x234) * fVar157 +
                  (float)*(undefined8 *)((long)register0x00000008 + 0x21c) * fVar158;
        fVar160 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x234) >> 0x20) *
                  fVar157 + (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x21c) >> 0x20
                                   ) * fVar158;
        *(float *)((long)register0x00000008 + -0x18) = *(float *)((long)register0x00000008 + -0x18);
        *(float *)((long)register0x00000008 + -0x14) = *(float *)((long)register0x00000008 + -0x14);
        *(ulong *)((long)register0x00000008 + -0x20) =
             CONCAT44(*(float *)((long)register0x00000008 + 0x40),
                      *(float *)((long)register0x00000008 + -0x20));
        *(float *)((long)register0x00000008 + -8) = *(float *)((long)register0x00000008 + -8);
        *(float *)((long)register0x00000008 + -4) = *(float *)((long)register0x00000008 + -4);
        *(ulong *)((long)register0x00000008 + -0x10) =
             CONCAT44(SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0),
                      *(float *)((long)register0x00000008 + -0x10));
        auVar184 = ZEXT816(0);
        psVar51 = *(short **)((long)register0x00000008 + -0x48);
        *(float *)((long)register0x00000008 + 0x58) = 0.0;
        *(float *)((long)register0x00000008 + 0x5c) = 0.0;
        *(ulong *)((long)register0x00000008 + 0x50) = (ulong)(uint)fVar158;
        for (uVar49 = 0; (uVar47 & 0xffffffff) + 1 != uVar49; uVar49 = uVar49 + 1) {
          *(long *)((long)register0x00000008 + 0x78) = auVar184._8_8_;
          *(long *)((long)register0x00000008 + 0x70) = auVar184._0_8_;
          auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0xf0));
          *(undefined8 *)((long)register0x00000008 + 0x38) = extraout_var_13;
          *(long *)((long)register0x00000008 + 0x30) = auVar184._8_8_;
          *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_02;
          *(long *)((long)register0x00000008 + 0x40) = auVar184._0_8_;
          uVar78 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x80));
          uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
          fVar87 = SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0);
          fVar88 = 1.0 - fVar87;
          uVar72 = *(undefined8 *)((long)register0x00000008 + 0x50);
          *(ulong *)(*(long *)((long)register0x00000008 + -0x28) + uVar49 * 8) =
               CONCAT44((*(float *)((long)register0x00000008 + -0xc) * fVar87 +
                         *(float *)((long)register0x00000008 + -0x1c) * fVar88 +
                        (float)((ulong)uVar78 >> 0x20) * (float)uVar63 +
                        *(float *)((long)register0x00000008 + 0x30) * (float)uVar72) -
                        (fVar160 * fVar87 +
                        ((float)((ulong)uVar64 >> 0x20) * fVar157 +
                        (float)((ulong)uVar62 >> 0x20) * fVar158) * fVar88),
                        (*(float *)((long)register0x00000008 + -0x10) * fVar87 +
                         *(float *)((long)register0x00000008 + -0x20) * fVar88 +
                        (float)uVar78 * (float)uVar63 +
                        (float)*(undefined8 *)((long)register0x00000008 + 0x40) * (float)uVar72) -
                        (fVar159 * fVar87 +
                        ((float)uVar64 * fVar157 + (float)uVar62 * fVar158) * fVar88));
          if (pfVar50 != (float *)0x0) {
            uVar63 = *(undefined8 *)pfVar50;
            uVar78 = *(undefined8 *)(pfVar50 + 4);
            uVar58 = *(undefined8 *)(pfVar50 + 8);
            uVar59 = *(undefined8 *)(pfVar50 + 10);
            uVar22 = *(undefined8 *)(pfVar50 + 0xc);
            uVar23 = *(undefined8 *)(pfVar50 + 0xe);
            *(undefined8 *)((long)register0x00000008 + 0x18) = *(undefined8 *)(pfVar50 + 6);
            *(undefined8 *)((long)register0x00000008 + 0x10) = uVar78;
            *(undefined8 *)((long)register0x00000008 + 0x28) = uVar23;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar22;
            *(undefined8 *)((long)register0x00000008 + 0x38) = uVar59;
            *(undefined8 *)((long)register0x00000008 + 0x30) = uVar58;
            *(float *)((long)register0x00000008 + 0x48) = 0.0;
            *(float *)((long)register0x00000008 + 0x4c) = 0.0;
            *(ulong *)((long)register0x00000008 + 0x40) = (ulong)(uint)fVar88;
            func_0x000108407988(uVar63,uVar72);
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 8) = extraout_var_03;
            *(undefined8 *)register0x00000008 = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar63 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x18) =
                 *(float *)((long)register0x00000008 + 8) + (float)extraout_var_04;
            *(float *)((long)register0x00000008 + 0x1c) =
                 *(float *)((long)register0x00000008 + 0xc) +
                 (float)((ulong)extraout_var_04 >> 0x20);
            *(float *)((long)register0x00000008 + 0x10) =
                 *(float *)register0x00000008 + (float)uVar63;
            *(float *)((long)register0x00000008 + 0x14) =
                 *(float *)((long)register0x00000008 + 4) + (float)((ulong)uVar63 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x20),
                                *(undefined8 *)((long)register0x00000008 + 0x50));
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_05;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar63 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x38) =
                 *(float *)((long)register0x00000008 + 0x28) + (float)extraout_var_06;
            *(float *)((long)register0x00000008 + 0x3c) =
                 *(float *)((long)register0x00000008 + 0x2c) +
                 (float)((ulong)extraout_var_06 >> 0x20);
            *(float *)((long)register0x00000008 + 0x30) =
                 *(float *)((long)register0x00000008 + 0x20) + (float)uVar63;
            *(float *)((long)register0x00000008 + 0x34) =
                 *(float *)((long)register0x00000008 + 0x24) + (float)((ulong)uVar63 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x40));
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_07;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x70));
            auVar184 = *(undefined1 (*) [16])((long)register0x00000008 + 0x40);
            uVar72 = *(undefined8 *)((long)register0x00000008 + 0x50);
            uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
            auVar185 = *(undefined1 (*) [16])((long)register0x00000008 + 0x70);
            uVar78 = func_0x0001084079ac();
            fVar88 = auVar184._0_4_;
            fVar87 = auVar185._0_4_;
            auVar184 = *(undefined1 (*) [16])((long)register0x00000008 + 0x20);
            pfVar38 = (float *)(lVar48 + uVar49 * 0x10);
            pfVar38[2] = auVar184._8_4_ + (float)extraout_var_08;
            pfVar38[3] = auVar184._12_4_ + (float)((ulong)extraout_var_08 >> 0x20);
            *pfVar38 = auVar184._0_4_ + (float)uVar78;
            pfVar38[1] = auVar184._4_4_ + (float)((ulong)uVar78 >> 0x20);
          }
          if (*(long *)((long)register0x00000008 + -0x30) != 0) {
            fVar89 = (float)uVar63;
            fVar176 = (float)uVar72;
            *(ulong *)(*(long *)((long)register0x00000008 + -0x38) + uVar49 * 8) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(pfVar42 + 4) >> 0x20) * fVar89 +
                          (float)((ulong)*(undefined8 *)(pfVar42 + 6) >> 0x20) * fVar176) * fVar87 +
                          ((float)((ulong)*(undefined8 *)(pfVar42 + 2) >> 0x20) * fVar89 +
                          (float)((ulong)*(undefined8 *)pfVar42 >> 0x20) * fVar176) * fVar88,
                          ((float)*(undefined8 *)(pfVar42 + 4) * fVar89 +
                          (float)*(undefined8 *)(pfVar42 + 6) * fVar176) * fVar87 +
                          ((float)*(undefined8 *)(pfVar42 + 2) * fVar89 +
                          (float)*(undefined8 *)pfVar42 * fVar176) * fVar88);
          }
          if (uVar60 < uVar53 && uVar49 < (uVar47 & 0xffffffff)) {
            sVar24 = (short)uVar49;
            sVar3 = (short)lVar36 + sVar24;
            psVar51[-3] = sVar3;
            psVar51[-2] = (short)lVar36 + sVar24 + 1;
            uVar72 = *(undefined8 *)((long)register0x00000008 + -0x40);
            sVar4 = (short)uVar72 + sVar24 + 1;
            psVar51[-1] = sVar4;
            *psVar51 = sVar3;
            psVar51[1] = sVar4;
            psVar51[2] = (short)uVar72 + sVar24;
          }
          fVar87 = 1.0 / (float)(uVar47 & 0xffffffff) + fVar87;
          fVar88 = 1.0;
          if (fVar87 <= 1.0) {
            fVar88 = fVar87;
          }
          if (fVar88 <= fVar92) {
            fVar88 = fVar92;
          }
          auVar184 = ZEXT416((uint)fVar88);
          psVar51 = psVar51 + 6;
        }
        fVar158 = fVar118 + (float)uVar63;
        fVar157 = 1.0;
        if (fVar158 <= 1.0) {
          fVar157 = fVar158;
        }
        *(long *)((long)register0x00000008 + -0x28) =
             *(long *)((long)register0x00000008 + -0x28) +
             *(long *)((long)register0x00000008 + -0x70);
        lVar48 = lVar48 + *(long *)((long)register0x00000008 + -0x78);
        *(long *)((long)register0x00000008 + -0x38) =
             *(long *)((long)register0x00000008 + -0x38) +
             *(long *)((long)register0x00000008 + -0x70);
        if (fVar157 <= fVar92) {
          fVar157 = fVar92;
        }
        auVar184 = ZEXT416((uint)fVar157);
        lVar36 = lVar36 + *(long *)((long)register0x00000008 + -0x68);
        uVar60 = *(ulong *)((long)register0x00000008 + -0x50);
        *(long *)((long)register0x00000008 + -0x48) =
             *(long *)((long)register0x00000008 + -0x48) +
             *(long *)((long)register0x00000008 + -0x80);
        *(long *)((long)register0x00000008 + -0x40) =
             *(long *)((long)register0x00000008 + -0x40) +
             *(long *)((long)register0x00000008 + -0x68);
      }
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x90);
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        if (*(long *)((long)register0x00000008 + 0x240) == 0) {
          uVar62 = 0;
        }
        else {
          uVar62 = *(undefined8 *)(*(long *)((long)register0x00000008 + 0x240) + 0x20);
        }
        uVar60 = *(ulong *)((long)register0x00000008 + -0xa0);
        piVar2 = *(int **)((long)register0x00000008 + -0x98);
        if (piVar2 != (int *)0x0) {
          do {
            cVar5 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar28) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x270) = 0.0;
        *(float *)((long)register0x00000008 + 0x274) = 0.0;
        *(int **)((long)register0x00000008 + 0x278) = piVar2;
        *(float *)((long)register0x00000008 + 0x280) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x284) = 2.8026e-45;
        *(ulong *)((long)register0x00000008 + 0x288) = uVar60 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x270));
        FUN_108343a94((float *)((long)register0x00000008 + 0x250));
        uVar64 = *(undefined8 *)((long)register0x00000008 + 0x250);
        *(float *)((long)register0x00000008 + 0x250) = 0.0;
        *(float *)((long)register0x00000008 + 0x254) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 600) = uVar64;
        *(float *)((long)register0x00000008 + 0x260) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x264) = 4.2039e-45;
        *(ulong *)((long)register0x00000008 + 0x268) = uVar60 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x250));
        FUN_108345950((float *)((long)register0x00000008 + 600),uVar62,0,
                      (float *)((long)register0x00000008 + 0x278),
                      *(undefined8 *)((long)register0x00000008 + -0x88),0);
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
      }
      FUN_1083a93b8(uVar63,(float *)((long)register0x00000008 + 0x240));
      pfVar50 = (float *)((long)register0x00000008 + 0x240);
      FUN_10834845c(pfVar50);
      func_0x0001084079cc();
      func_0x0001084079d8(*(undefined8 *)((long)register0x00000008 + -0xa8));
      if (!(bool)uVar29) {
        ___stack_chk_fail();
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
        FUN_10834845c((float *)((long)register0x00000008 + 0x240));
        func_0x0001084079cc();
        do {
          __Unwind_Resume(pfVar50);
        } while( true );
      }
      return pfVar50;
    case (undefined **)0x27:
      goto LAB_108401208;
    case (undefined **)0x28:
      FUN_1084025f8((float *)((long)register0x00000008 + -0x98));
      pfVar50 = (float *)((long)register0x00000008 + -0x98);
      FUN_108401e48(pfVar50,pfVar52);
      if (((ulong)pfVar50 & 1) == 0) {
        param_1[0] = 0.0;
        param_1[1] = 0.0;
      }
      else {
        FUN_1084021e0(param_1,(float *)((long)register0x00000008 + -0x98));
      }
      pfVar50 = (float *)((long)register0x00000008 + -0x98);
      FUN_10840284c(pfVar50);
      return pfVar50;
    case (undefined **)0x29:
      fVar92 = pfVar32[0x20];
      fVar118 = pfVar32[0x28];
      fVar157 = pfVar32[0x30];
      uVar63 = *(undefined8 *)(pfVar32 + 0x14);
      pfVar38 = pfVar32 + 0xc;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      *(float *)((long)register0x00000008 + -0xb8) = fVar118;
      *(float *)((long)register0x00000008 + -0xb4) = fVar92;
      *(float *)((long)register0x00000008 + -0xbc) = fVar157;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar63;
      FUN_1083fa6d0(pfVar38,(float *)((long)register0x00000008 + -0xb4),
                    (float *)((long)register0x00000008 + -0xb8),
                    (float *)((long)register0x00000008 + -0xbc),pfVar32 + 0x10,
                    (float *)((long)register0x00000008 + -200));
      return pfVar38;
    case (undefined **)0x2a:
      goto code_r0x000108400dfc;
    case (undefined **)0x2b:
      goto code_r0x0001083ff184;
    case (undefined **)0x2d:
    case (undefined **)0x2f:
    case (undefined **)0x31:
      goto code_r0x0001083ff19c;
    case (undefined **)0x33:
      goto code_r0x0001083ff1b4;
    case (undefined **)0x35:
    case (undefined **)0x37:
    case (undefined **)0x39:
      goto code_r0x0001083ff1cc;
    case (undefined **)0x3b:
      goto code_r0x0001083fef74;
    case (undefined **)0x3d:
    case (undefined **)0x3f:
      goto code_r0x0001083fef8c;
    case (undefined **)0x41:
    case (undefined **)0x49:
    case (undefined **)0x51:
    case (undefined **)0x59:
    case (undefined **)0x61:
    case (undefined **)0x69:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x85:
    case (undefined **)0x87:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
code_r0x0001083ff294:
      func_0x000108403908();
      if ((int)pfVar32 != 0) {
        func_0x00010840379c();
        (**(code **)(extraout_x8_06 + 0x50))();
        *(ulong *)((long)register0x00000008 + -0x98) = CONCAT44(unaff_00005104,unaff_s8);
        *(float **)((long)register0x00000008 + -0xa0) = pfVar52 + 4;
        *(float **)((long)register0x00000008 + -0x90) = pfVar32;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_108401ae0(param_1,(float *)((long)register0x00000008 + -0xa0),
                      *(undefined8 *)(pfVar42 + 4));
        if (((ulong)param_1 & 1) == 0) goto code_r0x0001083ff774;
        func_0x000108403908();
        pfVar55 = param_1;
        goto LAB_1083ff778;
      }
      goto code_r0x0001083ff774;
    case (undefined **)0x43:
      goto code_r0x0001083fefa0;
    case (undefined **)0x45:
    case (undefined **)0x47:
      goto code_r0x0001083fefb4;
    case (undefined **)0x4b:
      goto code_r0x0001083fefcc;
    case (undefined **)0x4d:
    case (undefined **)0x4f:
      goto code_r0x0001083fefe4;
    case (undefined **)0x53:
      goto code_r0x0001083feff8;
    case (undefined **)0x55:
      goto code_r0x0001083ff00c;
    case (undefined **)0x57:
      goto code_r0x0001083ff020;
    case (undefined **)0x5b:
      goto code_r0x0001083ff0f4;
    case (undefined **)0x5d:
      goto code_r0x0001083ff10c;
    case (undefined **)0x5f:
      goto code_r0x0001083ff124;
    case (undefined **)0x63:
      goto code_r0x0001083ff13c;
    case (undefined **)0x65:
      goto code_r0x0001083ff154;
    case (undefined **)0x67:
      goto code_r0x0001083ff16c;
    case (undefined **)0x6b:
      goto code_r0x0001083fee7c;
    case (undefined **)0x73:
      goto code_r0x0001083ff038;
    case (undefined **)0x75:
      goto code_r0x0001083ff04c;
    case (undefined **)0x77:
    case (undefined **)0x79:
      goto code_r0x0001083ff060;
    case (undefined **)0x7b:
      goto code_r0x0001083ff078;
    case (undefined **)0x7d:
      goto code_r0x0001083ff08c;
    case (undefined **)0x7f:
    case (undefined **)0x81:
      goto code_r0x0001083ff0a0;
    case (undefined **)0x83:
      goto code_r0x0001083ff0b4;
    case (undefined **)0x8b:
      goto code_r0x0001083ff0c8;
    case (undefined **)0x93:
    case (undefined **)0xc7:
    case (undefined **)0xd3:
    case (undefined **)0xe0:
      goto code_r0x00010840bb18;
    case (undefined **)0x94:
    case (undefined **)0xc8:
    case (undefined **)0xd4:
    case (undefined **)0xe1:
      pfVar50 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      auVar184 = func_0x00010c27adc0(param_1);
      _objc_release(pfVar50);
      pfVar50 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      pfVar38 = pfVar50;
      func_0x000107c318f8();
      _objc_release(pfVar50);
      if ((pfVar50 != (float *)0x0) && ((int)pfVar38 != 0)) {
        pfVar50 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = param_1;
        func_0x00010c252440();
        if ((long)pfVar38 - 3U < 2) {
          pfVar38 = param_1;
          func_0x00010c29bf00(param_1);
          _objc_retainAutoreleasedReturnValue();
          auVar185 = func_0x00010c297a00(param_1);
          _objc_release(pfVar38);
          func_0x00010be935e0(auVar184._0_8_,auVar184._8_8_,auVar185._0_8_,auVar185._8_8_,pfVar52);
        }
        else if (pfVar38 == (float *)0x2) {
          func_0x00010bf08ae0(auVar184._0_8_,auVar184._8_8_,pfVar50);
        }
        else if (pfVar38 == (float *)0x1) {
          func_0x00010c1f7b20(pfVar50);
        }
        _objc_release(pfVar50);
      }
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x95:
    case (undefined **)0xc9:
    case (undefined **)0xd5:
    case (undefined **)0xe2:
      goto code_r0x000108411b2c;
    case (undefined **)0x96:
    case (undefined **)0xca:
    case (undefined **)0xd6:
    case (undefined **)0xe3:
      pfVar31 = param_1;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
      *(float **)((long)register0x00000008 + -200) = pfVar42;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_1084132b0;
      pfVar50 = pfVar31 + 8;
      _objc_loadWeakRetained(pfVar50);
      pfVar57 = pfVar50;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      pfVar38 = pfVar31 + 8;
      _objc_loadWeakRetained(pfVar38);
      func_0x00010c154120(*(undefined8 *)(pfVar31 + 10),pfVar57);
      _objc_release(pfVar38);
      _objc_release(pfVar57);
      _objc_release(pfVar50);
      puVar40 = PTR__OBJC_CLASS___UIView_1126aec20;
      *(undefined **)((long)register0x00000008 + -0xf8) = PTR___NSConcreteStackBlock_11034bd00;
      *(float *)((long)register0x00000008 + -0xf0) = -32.0;
      *(float *)((long)register0x00000008 + -0xec) = 0.0;
      *(code **)((long)register0x00000008 + -0xe8) = FUN_1084133b8;
      *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_1108434b0;
      _objc_copyWeak((float *)((long)register0x00000008 + -0xd8),pfVar31 + 8);
      func_0x00010bf03460(0x3fd999999999999a,0,0x3feccccccccccccd,0,puVar40);
      pfVar50 = (float *)((long)register0x00000008 + -0xd8);
      _objc_destroyWeak(pfVar50);
      return pfVar50;
    case (undefined **)0x97:
    case (undefined **)0xcb:
    case (undefined **)0xd7:
    case (undefined **)0xe4:
LAB_10840dd88:
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)(pfVar32,param_2 + 2);
      return pfVar32;
    case (undefined **)0x98:
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069fe0();
      param_1 = pfVar32;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x99:
      func_0x00010bf529e0();
      if ((pfVar38 != (float *)0x0) || (uVar60 = unaff_x24, func_0x00010bf529e0(), uVar60 != 0)) {
        func_0x00010becf4e0(pfVar42);
      }
      _objc_release(unaff_x24);
      _objc_release(&UNK_10df26510);
      _objc_release(pfVar56);
      _objc_release(pfVar52);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9a:
      goto code_r0x00010841a3bc;
    case (undefined **)0x9b:
      *(int *)((long)register0x00000008 + -0xa0) = (int)ppuVar44;
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x1b6) = pfVar32;
      return pfVar32;
    case (undefined **)0x9c:
    case (undefined **)0xc3:
    case (undefined **)0xdc:
      *(float **)((long)register0x00000008 + -0x80) = pfVar50;
      *(float *)((long)register0x00000008 + -0x78) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0x74) = 1.4013e-45;
      lVar48 = (long)_DAT_1127748dc;
      _objc_retain(param_3);
      param_1 = *(float **)((long)pfVar32 + lVar48);
      *(float **)((long)pfVar32 + lVar48) = param_3;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9d:
    case (undefined **)0xc4:
    case (undefined **)0xdd:
    case (undefined **)0xb4:
      _objc_destroyWeak();
      _objc_destroyWeak(pfVar42 + 10);
      _objc_destroyWeak(pfVar42 + 8);
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x50));
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x48));
      pfVar38 = param_1;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
      *(float **)((long)register0x00000008 + -200) = pfVar42;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_108419b94;
      param_1 = pfVar38 + 8;
      _objc_loadWeakRetained(param_1);
      pfVar50 = pfVar38 + 10;
      _objc_loadWeakRetained(pfVar50);
      func_0x00010bdceda0(*(undefined8 *)(pfVar38 + 0xc),*(undefined8 *)(pfVar38 + 0xe),param_1);
      _objc_release(pfVar50);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9e:
    case (undefined **)0xc5:
    case (undefined **)0xde:
      goto code_r0x000108417fb4;
    case (undefined **)0x9f:
      func_0x00010bfc18e0();
      _objc_release(pfVar42);
      _objc_release(param_1);
      return param_1;
    case (undefined **)0xa0:
    case (undefined **)0xe8:
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x1a4) = pfVar32;
      return pfVar32;
    case (undefined **)0xa1:
    case (undefined **)0xaa:
    case (undefined **)0xb8:
    case (undefined **)0xee:
    case (undefined **)0xfb:
      return (float *)(ulong)((int)(fVar165 + (float)extraout_d1) + 0x7793U & 0xffff);
    case (undefined **)0xa2:
    case (undefined **)0xab:
    case (undefined **)0xb9:
    case (undefined **)0xef:
      *(float **)((long)register0x00000008 + -0xa0) = pfVar32;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar44;
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),
                          PTR_s_viewDidDisappear__112684c48);
      func_0x00010bf3ace0(*(undefined8 *)((long)param_1 + (long)_DAT_1127748fc));
      pfVar50 = param_1;
      func_0x00010c06d1a0();
      if (((ulong)pfVar50 & 1) == 0) {
        iVar61 = (int)*(undefined8 *)((long)param_1 + (long)_DAT_112774908);
        func_0x00010c06d1a0();
        if ((((ulong)pfVar52 & 1) != 0) || (iVar61 == 0)) goto LAB_108412258;
      }
      else if (((ulong)pfVar52 & 1) != 0) goto LAB_108412258;
      lVar48 = (long)param_1 + (long)_DAT_112774920;
      _objc_loadWeakRetained(lVar48);
      func_0x00010c154120(0);
      _objc_release(lVar48);
LAB_108412258:
      *(undefined1 *)((long)param_1 + (long)_DAT_112774924) = 0;
      func_0x00010be55a20(param_1);
      return param_1;
    case (undefined **)0xa3:
    case (undefined **)0xac:
    case (undefined **)0xba:
    case (undefined **)0xf0:
      goto LAB_1084136b0;
    case (undefined **)0xa4:
    case (undefined **)0xad:
    case (undefined **)0xbb:
    case (undefined **)0xf1:
      goto code_r0x00010841378c;
    case (undefined **)0xa5:
    case (undefined **)0xae:
    case (undefined **)0xbc:
    case (undefined **)0xf2:
                    /* WARNING: Could not recover jumptable at 0x00010840b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(extraout_d0,in_q5._0_8_);
      return pfVar32;
    case (undefined **)0xa6:
    case (undefined **)0xaf:
    case (undefined **)0xbd:
    case (undefined **)0xf3:
      _objc_release(pfVar52);
      return (float *)(ulong)(0.0 <= (double)CONCAT44(unaff_00005104,unaff_s8));
    case (undefined **)0xa7:
      goto code_r0x000108411ab8;
    case (undefined **)0xa8:
    case (undefined **)0xb6:
    case (undefined **)0xbf:
    case (undefined **)0xcd:
    case (undefined **)0xec:
    case (undefined **)0xf9:
      return pfVar32;
    case (undefined **)0xa9:
    case (undefined **)0xb7:
    case (undefined **)0xce:
    case (undefined **)0xed:
    case (undefined **)0xfa:
      goto code_r0x00010841bf90;
    case (undefined **)0xb0:
      fVar87 = 2.1158898e-37;
      fVar88 = *(float *)(ppuVar44 + 1);
      fVar168 = *(float *)((long)ppuVar44 + 0xc);
      iVar61 = -(uint)(fVar165 == 0.0);
      iVar69 = -(uint)(fVar85 == 0.0);
      iVar70 = -(uint)((float)extraout_var == 0.0);
      iVar71 = -(uint)(fVar175 == 0.0);
      auVar184 = ZEXT216(0);
      auVar185 = NEON_fmov(0x3f800000,4);
      iVar93 = -(uint)((float)CONCAT13(extraout_var_53,
                                       CONCAT12(extraout_var_50,
                                                CONCAT11(extraout_var_47,extraout_b30))) ==
                      auVar185._0_4_);
      iVar98 = -(uint)((float)CONCAT13(extraout_var_62,
                                       CONCAT12(extraout_var_60,
                                                CONCAT11(extraout_var_58,extraout_var_56))) ==
                      auVar185._4_4_);
      iVar100 = -(uint)((float)CONCAT13(in_register_000053cb,
                                        CONCAT12(in_register_000053ca,
                                                 CONCAT11(in_register_000053c9,in_register_000053c8)
                                                )) == auVar185._8_4_);
      iVar102 = -(uint)((float)CONCAT13(in_register_000053cf,
                                        CONCAT12(in_register_000053ce,
                                                 CONCAT11(in_register_000053cd,in_register_000053cc)
                                                )) == auVar185._12_4_);
      auVar66[0] = ~(byte)iVar61 & ~(byte)iVar93;
      auVar66[1] = ~(byte)((uint)iVar61 >> 8) & ~(byte)((uint)iVar93 >> 8);
      auVar66[2] = ~(byte)((uint)iVar61 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
      auVar66[3] = ~(byte)((uint)iVar61 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
      auVar66[4] = ~(byte)iVar69 & ~(byte)iVar98;
      auVar66[5] = ~(byte)((uint)iVar69 >> 8) & ~(byte)((uint)iVar98 >> 8);
      auVar66[6] = ~(byte)((uint)iVar69 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
      auVar66[7] = ~(byte)((uint)iVar69 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
      auVar66[8] = ~(byte)iVar70 & ~(byte)iVar100;
      auVar66[9] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar100 >> 8);
      auVar66[10] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10);
      auVar66[0xb] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18);
      auVar66[0xc] = ~(byte)iVar71 & ~(byte)iVar102;
      auVar66[0xd] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar102 >> 8);
      auVar66[0xe] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10);
      auVar66[0xf] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18);
      auVar18[1] = extraout_var_47;
      auVar18[0] = extraout_b30;
      auVar18[2] = extraout_var_50;
      auVar18[3] = extraout_var_53;
      auVar18[4] = extraout_var_56;
      auVar18[5] = extraout_var_58;
      auVar18[6] = extraout_var_60;
      auVar18[7] = extraout_var_62;
      auVar18[8] = in_register_000053c8;
      auVar18[9] = in_register_000053c9;
      auVar18[10] = in_register_000053ca;
      auVar18[0xb] = in_register_000053cb;
      auVar18[0xc] = in_register_000053cc;
      auVar18[0xd] = in_register_000053cd;
      auVar18[0xe] = in_register_000053ce;
      auVar18[0xf] = in_register_000053cf;
      auVar186 = NEON_ucvtf(auVar18,4);
      fVar103 = 1.1920929e-07;
      fVar94 = 1.1920929e-07;
      fVar99 = 1.1920929e-07;
      fVar101 = 1.1920929e-07;
      bVar139 = 0xff;
      bVar140 = 0xff;
      bVar141 = 0x7f;
      bVar142 = 0;
      bVar126 = 0xff;
      bVar128 = 0xff;
      bVar129 = 0x7f;
      bVar130 = 0;
      bVar131 = 0xff;
      bVar132 = 0xff;
      bVar133 = 0x7f;
      bVar134 = 0;
      bVar135 = 0xff;
      bVar136 = 0xff;
      bVar137 = 0x7f;
      bVar138 = 0;
      fVar158 = (float)(CONCAT12(extraout_var_50,CONCAT11(extraout_var_47,extraout_b30)) & 0x7fffff
                       | 0x3f000000);
      fVar159 = (float)(CONCAT12(extraout_var_60,CONCAT11(extraout_var_58,extraout_var_56)) &
                        0x7fffff | 0x3f000000);
      fVar160 = (float)(CONCAT12(in_register_000053ca,
                                 CONCAT11(in_register_000053c9,in_register_000053c8)) & 0x7fffff |
                       0x3f000000);
      fVar89 = (float)(CONCAT12(in_register_000053ce,
                                CONCAT11(in_register_000053cd,in_register_000053cc)) & 0x7fffff |
                      0x3f000000);
      fVar92 = -124.22552;
      fVar118 = -1.4980303;
      fVar156 = 0.35208872;
      fVar153 = 0.35208872;
      fVar154 = 0.35208872;
      fVar155 = 0.35208872;
      fVar157 = 1.72588;
      fVar176 = ((auVar186._0_4_ * 1.1920929e-07 + -124.22552 + fVar158 * -1.4980303) -
                1.72588 / (fVar158 + 0.35208872)) * fVar168;
      fVar165 = ((auVar186._4_4_ * 1.1920929e-07 + -124.22552 + fVar159 * -1.4980303) -
                1.72588 / (fVar159 + 0.35208872)) * fVar168;
      fVar85 = ((auVar186._8_4_ * 1.1920929e-07 + -124.22552 + fVar160 * -1.4980303) -
               1.72588 / (fVar160 + 0.35208872)) * fVar168;
      fVar89 = ((auVar186._12_4_ * 1.1920929e-07 + -124.22552 + fVar89 * -1.4980303) -
               1.72588 / (fVar89 + 0.35208872)) * fVar168;
      fVar164 = 121.274055;
      fVar161 = 121.274055;
      fVar162 = 121.274055;
      fVar163 = 121.274055;
      fVar158 = -1.4901291;
      fVar159 = 4.8425255;
      fVar160 = 27.728024;
      fVar173 = 8388608.0;
      fVar174 = 8388608.0;
      auVar14._4_4_ =
           (fVar165 + 121.274055 + (fVar165 - (float)(int)fVar165) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar165 - (float)(int)fVar165))) * 8388608.0;
      auVar14._0_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar14._8_4_ =
           (fVar85 + 121.274055 + (fVar85 - (float)(int)fVar85) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar85 - (float)(int)fVar85))) * 8388608.0;
      auVar14._12_4_ =
           (fVar89 + 121.274055 + (fVar89 - (float)(int)fVar89) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar89 - (float)(int)fVar89))) * 8388608.0;
      auVar186 = NEON_fmax(auVar14,auVar184,4);
      uVar46 = 0x4eff0000;
      auVar15._8_4_ = 0x4eff0000;
      auVar15._0_8_ = 0x4eff00004eff0000;
      auVar15._12_4_ = 0x4eff0000;
      auVar186 = NEON_fmin(auVar186,auVar15,4);
      auVar180._0_4_ = (int)auVar186._0_4_;
      auVar180._4_4_ = (int)auVar186._4_4_;
      auVar180._8_4_ = (int)auVar186._8_4_;
      auVar180._12_4_ = (int)auVar186._12_4_;
      auVar19[1] = extraout_var_47;
      auVar19[0] = extraout_b30;
      auVar19[2] = extraout_var_50;
      auVar19[3] = extraout_var_53;
      auVar19[4] = extraout_var_56;
      auVar19[5] = extraout_var_58;
      auVar19[6] = extraout_var_60;
      auVar19[7] = extraout_var_62;
      auVar19[8] = in_register_000053c8;
      auVar19[9] = in_register_000053c9;
      auVar19[10] = in_register_000053ca;
      auVar19[0xb] = in_register_000053cb;
      auVar19[0xc] = in_register_000053cc;
      auVar19[0xd] = in_register_000053cd;
      auVar19[0xe] = in_register_000053ce;
      auVar19[0xf] = in_register_000053cf;
      auVar67[1] = extraout_var_47;
      auVar67[0] = extraout_b30;
      auVar67[2] = extraout_var_50;
      auVar67[3] = extraout_var_53;
      auVar67[4] = extraout_var_56;
      auVar67[5] = extraout_var_58;
      auVar67[6] = extraout_var_60;
      auVar67[7] = extraout_var_62;
      auVar67[8] = in_register_000053c8;
      auVar67[9] = in_register_000053c9;
      auVar67[10] = in_register_000053ca;
      auVar67[0xb] = in_register_000053cb;
      auVar67[0xc] = in_register_000053cc;
      auVar67[0xd] = in_register_000053cd;
      auVar67[0xe] = in_register_000053ce;
      auVar67[0xf] = in_register_000053cf;
      auVar67 = auVar67 ^ (auVar19 ^ auVar180) & auVar66;
      fVar89 = auVar67._4_4_ * fVar88 + 2.1158898e-37;
      fVar176 = auVar67._8_4_ * fVar88 + 2.1158898e-37;
      fVar165 = auVar67._12_4_ * fVar88 + 2.1158898e-37;
      auVar20[4] = SUB41(fVar89,0);
      auVar20._0_4_ = auVar67._0_4_ * fVar88 + 2.1158898e-37;
      auVar20[5] = (char)((uint)fVar89 >> 8);
      auVar20[6] = (char)((uint)fVar89 >> 0x10);
      auVar20[7] = (char)((uint)fVar89 >> 0x18);
      auVar20[8] = SUB41(fVar176,0);
      auVar20[9] = (char)((uint)fVar176 >> 8);
      auVar20[10] = (char)((uint)fVar176 >> 0x10);
      auVar20[0xb] = (char)((uint)fVar176 >> 0x18);
      auVar20[0xc] = SUB41(fVar165,0);
      auVar20[0xd] = (char)((uint)fVar165 >> 8);
      auVar20[0xe] = (char)((uint)fVar165 >> 0x10);
      auVar20[0xf] = (char)((uint)fVar165 >> 0x18);
      auVar186 = NEON_fmax(auVar20,auVar184,4);
      fVar88 = *(float *)(ppuVar44 + 2);
      fVar104 = *(float *)((long)ppuVar44 + 0x14);
      auVar68._0_4_ = auVar186._0_4_ / (fVar88 + auVar67._0_4_ * fVar104);
      auVar68._4_4_ = auVar186._4_4_ / (fVar88 + auVar67._4_4_ * fVar104);
      auVar68._8_4_ = auVar186._8_4_ / (fVar88 + auVar67._8_4_ * fVar104);
      auVar68._12_4_ = auVar186._12_4_ / (fVar88 + auVar67._12_4_ * fVar104);
      NEON_scvtf(auVar68,4);
      fVar175 = fVar118;
      fVar151 = fVar157;
      fVar152 = fVar158;
      fVar166 = fVar159;
      fVar172 = fVar160;
      uVar179 = uVar46;
      fVar177 = fVar92;
      fVar178 = fVar87;
      fVar167 = fVar87;
      fVar171 = fVar87;
      fVar181 = fVar88;
      fVar182 = fVar88;
      fVar183 = fVar88;
      func_0x00010840dfdc();
      func_0x00010840de7c();
      auVar76._0_4_ = ABS((float)extraout_d1_00);
      auVar76._4_4_ = ABS((float)((ulong)extraout_d1_00 >> 0x20));
      auVar76._8_4_ = ABS((float)extraout_var_14);
      auVar76._12_4_ = ABS((float)((ulong)extraout_var_14 >> 0x20));
      auVar186 = NEON_ucvtf(auVar76,4);
      fVar89 = auVar186._0_4_ * fVar94;
      fVar176 = auVar186._4_4_ * fVar99;
      fVar165 = auVar186._8_4_ * fVar101;
      fVar85 = auVar186._12_4_ * fVar103;
      func_0x00010840dfdc();
      auVar120._0_4_ = fVar89 * fVar168;
      auVar120._4_4_ = fVar176 * fVar168;
      auVar120._8_4_ = fVar165 * fVar168;
      auVar120._12_4_ = fVar85 * fVar168;
      func_0x00010840de7c();
      auVar75._8_8_ = extraout_var_15;
      auVar75._0_8_ = extraout_d1_01;
      auVar76 = auVar76 ^ (auVar76 ^ auVar120) & auVar75;
      fVar89 = (float)CONCAT13(extraout_var_28,
                               CONCAT12(extraout_var_25,CONCAT11(extraout_var_22,extraout_b17_00)));
      auVar117._0_4_ = fVar87 + auVar76._0_4_ * fVar89;
      auVar117._4_4_ = fVar178 + auVar76._4_4_ * fVar89;
      auVar117._8_4_ = fVar167 + auVar76._8_4_ * fVar89;
      auVar117._12_4_ = fVar171 + auVar76._12_4_ * fVar89;
      auVar186 = NEON_fmax(auVar117,auVar184,4);
      auVar77._0_4_ = auVar186._0_4_ / (fVar88 + auVar76._0_4_ * fVar104);
      auVar77._4_4_ = auVar186._4_4_ / (fVar181 + auVar76._4_4_ * fVar104);
      auVar77._8_4_ = auVar186._8_4_ / (fVar182 + auVar76._8_4_ * fVar104);
      auVar77._12_4_ = auVar186._12_4_ / (fVar183 + auVar76._12_4_ * fVar104);
      NEON_scvtf(auVar77,4);
      func_0x00010840dfdc();
      func_0x00010840de7c();
      fVar89 = ABS((float)extraout_d2_01);
      fVar122 = (float)((ulong)extraout_d2_01 >> 0x20);
      fVar176 = ABS(fVar122);
      bVar105 = SUB41(fVar176,0);
      bVar106 = (byte)((uint)fVar176 >> 8);
      bVar107 = (byte)((uint)fVar176 >> 0x10);
      bVar108 = (byte)((uint)fVar176 >> 0x18);
      fVar165 = ABS((float)extraout_var_18);
      bVar109 = SUB41(fVar165,0);
      bVar110 = (byte)((uint)fVar165 >> 8);
      bVar111 = (byte)((uint)fVar165 >> 0x10);
      bVar112 = (byte)((uint)fVar165 >> 0x18);
      fVar83 = (float)((ulong)extraout_var_18 >> 0x20);
      fVar85 = ABS(fVar83);
      bVar113 = SUB41(fVar85,0);
      bVar114 = (byte)((uint)fVar85 >> 8);
      bVar115 = (byte)((uint)fVar85 >> 0x10);
      bVar116 = (byte)((uint)fVar85 >> 0x18);
      iVar61 = -(uint)((float)extraout_d2_01 == 0.0);
      iVar69 = -(uint)(fVar122 == 0.0);
      iVar70 = -(uint)((float)extraout_var_18 == 0.0);
      iVar71 = -(uint)(fVar83 == 0.0);
      iVar93 = -(uint)(fVar89 == auVar185._0_4_);
      iVar98 = -(uint)(fVar176 == auVar185._4_4_);
      iVar100 = -(uint)(fVar165 == auVar185._8_4_);
      iVar102 = -(uint)(fVar85 == auVar185._12_4_);
      auVar80[0] = ~(byte)iVar61 & ~(byte)iVar93;
      auVar80[1] = ~(byte)((uint)iVar61 >> 8) & ~(byte)((uint)iVar93 >> 8);
      auVar80[2] = ~(byte)((uint)iVar61 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
      auVar80[3] = ~(byte)((uint)iVar61 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
      auVar80[4] = ~(byte)iVar69 & ~(byte)iVar98;
      auVar80[5] = ~(byte)((uint)iVar69 >> 8) & ~(byte)((uint)iVar98 >> 8);
      auVar80[6] = ~(byte)((uint)iVar69 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
      auVar80[7] = ~(byte)((uint)iVar69 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
      auVar80[8] = ~(byte)iVar70 & ~(byte)iVar100;
      auVar80[9] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar100 >> 8);
      auVar80[10] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10);
      auVar80[0xb] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18);
      auVar80[0xc] = ~(byte)iVar71 & ~(byte)iVar102;
      auVar80[0xd] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar102 >> 8);
      auVar80[0xe] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10);
      auVar80[0xf] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18);
      auVar9[4] = bVar105;
      auVar9._0_4_ = fVar89;
      auVar9[5] = bVar106;
      auVar9[6] = bVar107;
      auVar9[7] = bVar108;
      auVar9[8] = bVar109;
      auVar9[9] = bVar110;
      auVar9[10] = bVar111;
      auVar9[0xb] = bVar112;
      auVar9[0xc] = bVar113;
      auVar9[0xd] = bVar114;
      auVar9[0xe] = bVar115;
      auVar9[0xf] = bVar116;
      auVar185 = NEON_ucvtf(auVar9,4);
      uVar95 = CONCAT13((byte)((uint)fVar89 >> 0x18) & bVar130,
                        CONCAT12((byte)((uint)fVar89 >> 0x10) & bVar129,
                                 CONCAT11((byte)((uint)fVar89 >> 8) & bVar128,
                                          SUB41(fVar89,0) & bVar126)));
      auVar119._0_8_ =
           CONCAT17(bVar108 & bVar134,
                    CONCAT16(bVar107 & bVar133,
                             CONCAT15(bVar106 & bVar132,CONCAT14(bVar105 & bVar131,uVar95))));
      auVar119[8] = bVar109 & bVar135;
      auVar119[9] = bVar110 & bVar136;
      auVar119[10] = bVar111 & bVar137;
      auVar119[0xb] = bVar112 & bVar138;
      auVar121[0xc] = bVar113 & bVar139;
      auVar121._0_12_ = auVar119;
      auVar121[0xd] = bVar114 & bVar140;
      auVar121[0xe] = bVar115 & bVar141;
      auVar121[0xf] = bVar116 & bVar142;
      uVar60 = CONCAT44((int)((ulong)auVar119._0_8_ >> 0x20),uVar95) | 0x3f0000003f000000;
      fVar85 = (float)(auVar119._8_4_ | 0x3f000000);
      fVar122 = (float)(auVar121._12_4_ | 0x3f000000);
      fVar176 = (float)uVar60;
      fVar165 = (float)(uVar60 >> 0x20);
      fVar176 = ((auVar185._0_4_ * fVar94 + extraout_s18_00 + extraout_s19 * fVar176) -
                extraout_s21_00 / (fVar176 + fVar153)) * fVar168;
      fVar165 = ((auVar185._4_4_ * fVar99 + extraout_var_34 + extraout_var_35 * fVar165) -
                extraout_var_37 / (fVar165 + fVar154)) * fVar168;
      fVar85 = ((auVar185._8_4_ * fVar101 + fVar92 + fVar118 * fVar85) -
               fVar157 / (fVar85 + fVar155)) * fVar168;
      fVar168 = ((auVar185._12_4_ * fVar103 + fVar177 + fVar175 * fVar122) -
                fVar151 / (fVar122 + fVar156)) * fVar168;
      auVar169._0_4_ =
           (fVar176 + fVar161 + extraout_s23_00 * (fVar176 - (float)(int)fVar176) +
           extraout_s26_00 / (extraout_s24_00 - (fVar176 - (float)(int)fVar176))) * extraout_s27_00;
      auVar169._4_4_ =
           (fVar165 + fVar162 + extraout_var_39 * (fVar165 - (float)(int)fVar165) +
           extraout_var_43 / (extraout_var_41 - (fVar165 - (float)(int)fVar165))) * extraout_var_45;
      auVar169._8_4_ =
           (fVar85 + fVar163 + fVar158 * (fVar85 - (float)(int)fVar85) +
           fVar160 / (fVar159 - (fVar85 - (float)(int)fVar85))) * fVar173;
      auVar169._12_4_ =
           (fVar168 + fVar164 + fVar152 * (fVar168 - (float)(int)fVar168) +
           fVar172 / (fVar166 - (fVar168 - (float)(int)fVar168))) * fVar174;
      auVar185 = NEON_fmax(auVar169,auVar184,4);
      auVar16._4_4_ = extraout_var_46;
      auVar16._0_4_ = extraout_s28;
      auVar16._8_4_ = uVar46;
      auVar16._12_4_ = uVar179;
      auVar185 = NEON_fmin(auVar185,auVar16,4);
      auVar170._0_4_ = (int)auVar185._0_4_;
      auVar170._4_4_ = (int)auVar185._4_4_;
      auVar170._8_4_ = (int)auVar185._8_4_;
      auVar170._12_4_ = (int)auVar185._12_4_;
      auVar10[4] = bVar105;
      auVar10._0_4_ = fVar89;
      auVar10[5] = bVar106;
      auVar10[6] = bVar107;
      auVar10[7] = bVar108;
      auVar10[8] = bVar109;
      auVar10[9] = bVar110;
      auVar10[10] = bVar111;
      auVar10[0xb] = bVar112;
      auVar10[0xc] = bVar113;
      auVar10[0xd] = bVar114;
      auVar10[0xe] = bVar115;
      auVar10[0xf] = bVar116;
      auVar81[4] = bVar105;
      auVar81._0_4_ = fVar89;
      auVar81[5] = bVar106;
      auVar81[6] = bVar107;
      auVar81[7] = bVar108;
      auVar81[8] = bVar109;
      auVar81[9] = bVar110;
      auVar81[10] = bVar111;
      auVar81[0xb] = bVar112;
      auVar81[0xc] = bVar113;
      auVar81[0xd] = bVar114;
      auVar81[0xe] = bVar115;
      auVar81[0xf] = bVar116;
      auVar81 = auVar81 ^ (auVar10 ^ auVar170) & auVar80;
      fVar89 = (float)CONCAT13(extraout_var_29,
                               CONCAT12(extraout_var_26,CONCAT11(extraout_var_23,extraout_b17_01)));
      auVar90._0_4_ = fVar87 + auVar81._0_4_ * fVar89;
      auVar90._4_4_ = fVar178 + auVar81._4_4_ * fVar89;
      auVar90._8_4_ = fVar167 + auVar81._8_4_ * fVar89;
      auVar90._12_4_ = fVar171 + auVar81._12_4_ * fVar89;
      auVar185 = NEON_fmax(auVar90,auVar184,4);
      auVar82._0_4_ = auVar185._0_4_ / (fVar88 + auVar81._0_4_ * fVar104);
      auVar82._4_4_ = auVar185._4_4_ / (fVar181 + auVar81._4_4_ * fVar104);
      auVar82._8_4_ = auVar185._8_4_ / (fVar182 + auVar81._8_4_ * fVar104);
      auVar82._12_4_ = auVar185._12_4_ / (fVar183 + auVar81._12_4_ * fVar104);
      auVar185 = NEON_scvtf(auVar82,4);
      uVar95 = CONCAT13((byte)((uint)auVar82._0_4_ >> 0x18) & bVar130,
                        CONCAT12((byte)((uint)auVar82._0_4_ >> 0x10) & bVar129,
                                 CONCAT11((byte)((uint)auVar82._0_4_ >> 8) & bVar128,
                                          SUB41(auVar82._0_4_,0) & bVar126)));
      auVar96._0_8_ =
           CONCAT17((byte)((uint)auVar82._4_4_ >> 0x18) & bVar134,
                    CONCAT16((byte)((uint)auVar82._4_4_ >> 0x10) & bVar133,
                             CONCAT15((byte)((uint)auVar82._4_4_ >> 8) & bVar132,
                                      CONCAT14(SUB41(auVar82._4_4_,0) & bVar131,uVar95))));
      auVar96[8] = SUB41(auVar82._8_4_,0) & bVar135;
      auVar96[9] = (byte)((uint)auVar82._8_4_ >> 8) & bVar136;
      auVar96[10] = (byte)((uint)auVar82._8_4_ >> 0x10) & bVar137;
      auVar96[0xb] = (byte)((uint)auVar82._8_4_ >> 0x18) & bVar138;
      auVar97[0xc] = SUB41(auVar82._12_4_,0) & bVar139;
      auVar97._0_12_ = auVar96;
      auVar97[0xd] = (byte)((uint)auVar82._12_4_ >> 8) & bVar140;
      auVar97[0xe] = (byte)((uint)auVar82._12_4_ >> 0x10) & bVar141;
      auVar97[0xf] = (byte)((uint)auVar82._12_4_ >> 0x18) & bVar142;
      uVar60 = CONCAT44((int)((ulong)auVar96._0_8_ >> 0x20),uVar95) | 0x3f0000003f000000;
      fVar176 = (float)(auVar96._8_4_ | 0x3f000000);
      fVar165 = (float)(auVar97._12_4_ | 0x3f000000);
      fVar88 = (float)uVar60;
      fVar89 = (float)(uVar60 >> 0x20);
      fVar87 = (float)CONCAT13(extraout_var_55,
                               CONCAT12(extraout_var_52,CONCAT11(extraout_var_49,extraout_b30_01)));
      fVar88 = ((auVar185._0_4_ * fVar94 + extraout_s18_00 + extraout_s19 * fVar88) -
               extraout_s21_00 / (fVar88 + fVar153)) * fVar87;
      fVar89 = ((auVar185._4_4_ * fVar99 + extraout_var_34 + extraout_var_35 * fVar89) -
               extraout_var_37 / (fVar89 + fVar154)) * fVar87;
      fVar92 = ((auVar185._8_4_ * fVar101 + fVar92 + fVar118 * fVar176) -
               fVar157 / (fVar176 + fVar155)) * fVar87;
      fVar87 = ((auVar185._12_4_ * fVar103 + fVar177 + fVar175 * fVar165) -
               fVar151 / (fVar165 + fVar156)) * fVar87;
      auVar91._0_4_ =
           (fVar88 + fVar161 + extraout_s23_00 * (fVar88 - (float)(int)fVar88) +
           extraout_s26_00 / (extraout_s24_00 - (fVar88 - (float)(int)fVar88))) * extraout_s27_00;
      auVar91._4_4_ =
           (fVar89 + fVar162 + extraout_var_39 * (fVar89 - (float)(int)fVar89) +
           extraout_var_43 / (extraout_var_41 - (fVar89 - (float)(int)fVar89))) * extraout_var_45;
      auVar91._8_4_ =
           (fVar92 + fVar163 + fVar158 * (fVar92 - (float)(int)fVar92) +
           fVar160 / (fVar159 - (fVar92 - (float)(int)fVar92))) * fVar173;
      auVar91._12_4_ =
           (fVar87 + fVar164 + fVar152 * (fVar87 - (float)(int)fVar87) +
           fVar172 / (fVar166 - (fVar87 - (float)(int)fVar87))) * fVar174;
      auVar184 = NEON_fmax(auVar91,auVar184,4);
      auVar17._4_4_ = extraout_var_46;
      auVar17._0_4_ = extraout_s28;
      auVar17._8_4_ = uVar46;
      auVar17._12_4_ = uVar179;
      NEON_fmin(auVar184,auVar17,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xb1:
      return pfVar32;
    case (undefined **)0xb2:
      goto LAB_10841bf94;
    case (undefined **)0xb3:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      if (pfRam000000011372b608 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar50 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
        func_0x00010c2289e0();
        pfRam000000011372b608 = pfVar50;
      }
      return pfRam000000011372b608;
    case (undefined **)0xb5:
      goto code_r0x000108411b74;
    case (undefined **)0xbe:
      in_s16 = 2.1158898e-37;
      fVar92 = ABS(fVar165) * extraout_s18 + 2.1158898e-37;
      fVar118 = ABS(fVar85) * extraout_s18 + 2.1158898e-37;
      fVar159 = ABS((float)extraout_var) * extraout_s18 + 2.1158898e-37;
      fVar160 = ABS(fVar175) * extraout_s18 + 2.1158898e-37;
      uVar143 = 0;
      uVar144 = 0;
      uVar145 = 0;
      uVar146 = 0;
      uVar147 = 0;
      uVar148 = 0;
      uVar149 = 0;
      uVar150 = 0;
      in_register_00005228 = 0;
      in_register_00005229 = 0;
      in_register_0000522a = 0;
      in_register_0000522b = 0;
      in_register_0000522c = 0;
      in_register_0000522d = 0;
      in_register_0000522e = 0;
      in_register_0000522f = 0;
      NEON_fmov(0x3f800000,4);
      auVar186[4] = SUB41(fVar118,0);
      auVar186._0_4_ = fVar92;
      auVar186[5] = (char)((uint)fVar118 >> 8);
      auVar186[6] = (char)((uint)fVar118 >> 0x10);
      auVar186[7] = (char)((uint)fVar118 >> 0x18);
      auVar186[8] = SUB41(fVar159,0);
      auVar186[9] = (char)((uint)fVar159 >> 8);
      auVar186[10] = (char)((uint)fVar159 >> 0x10);
      auVar186[0xb] = (char)((uint)fVar159 >> 0x18);
      auVar186[0xc] = SUB41(fVar160,0);
      auVar186[0xd] = (char)((uint)fVar160 >> 8);
      auVar186[0xe] = (char)((uint)fVar160 >> 0x10);
      auVar186[0xf] = (char)((uint)fVar160 >> 0x18);
      auVar184 = NEON_scvtf(auVar186,4);
      fVar157 = 1.1920929e-07;
      fVar158 = 1.1920929e-07;
      in_register_000052a8 = 1.1920929e-07;
      in_register_000052ac = 1.1920929e-07;
      in_register_000052cc = 0xff;
      in_register_000052cd = 0xff;
      in_register_000052ce = 0x7f;
      in_register_000052cf = 0;
      in_b22 = 0xff;
      in_register_000052c1 = 0xff;
      in_register_000052c2 = 0x7f;
      in_register_000052c3 = 0;
      in_register_000052c4 = 0xff;
      in_register_000052c5 = 0xff;
      in_register_000052c6 = 0x7f;
      in_register_000052c7 = 0;
      in_register_000052c8 = 0xff;
      in_register_000052c9 = 0xff;
      in_register_000052ca = 0x7f;
      in_register_000052cb = 0;
      fVar87 = (float)(SUB43(fVar92,0) & 0x7fffff | 0x3f000000);
      fVar88 = (float)(SUB43(fVar118,0) & 0x7fffff | 0x3f000000);
      in_register_00005348 = (float)(SUB43(fVar159,0) & 0x7fffff | 0x3f000000);
      in_register_0000534c = (float)(SUB43(fVar160,0) & 0x7fffff | 0x3f000000);
      fVar92 = -124.22552;
      fVar118 = -1.4980303;
      fVar89 = auVar184._0_4_ * 1.1920929e-07 + -124.22552 + fVar87 * -1.4980303;
      fVar176 = auVar184._4_4_ * 1.1920929e-07 + -124.22552 + fVar88 * -1.4980303;
      in_register_00005368 =
           auVar184._8_4_ * 1.1920929e-07 + -124.22552 + in_register_00005348 * -1.4980303;
      in_register_0000536c =
           auVar184._12_4_ * 1.1920929e-07 + -124.22552 + in_register_0000534c * -1.4980303;
      uVar54 = 0x44f9;
      fVar159 = fVar92;
      in_register_000052e8 = fVar92;
      in_register_000052ec = fVar92;
      fVar160 = fVar118;
      in_register_00005308 = fVar118;
      in_register_0000530c = fVar118;
      in_register_00005204 = in_s16;
      in_register_00005208 = in_s16;
      in_register_0000520c = in_s16;
code_r0x00010840bb18:
      fVar165 = (float)(uVar54 & 0xffff | 0x3eb40000);
      uVar60 = CONCAT44(uVar54,uVar54) & 0xffff0000ffff;
      fVar167 = (float)((uint)uVar60 | 0x3eb40000);
      fVar171 = (float)((uint)(uVar60 >> 0x20) | 0x3eb40000);
      fVar85 = in_q5._0_4_;
      fVar175 = fVar85 * (fVar89 - 1.72588 / (fVar87 + fVar167));
      fVar87 = in_q5._4_4_;
      fVar176 = fVar87 * (fVar176 - 1.72588 / (fVar88 + fVar171));
      fVar88 = in_q5._8_4_;
      fVar177 = fVar88 * (in_register_00005368 - 1.72588 / (in_register_00005348 + fVar165));
      fVar89 = in_q5._12_4_;
      fVar178 = fVar89 * (in_register_0000536c - 1.72588 / (in_register_0000534c + fVar165));
      auVar123._0_4_ =
           (fVar175 + 121.274055 + (fVar175 - (float)(int)fVar175) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar175 - (float)(int)fVar175))) * 8388608.0;
      auVar123._4_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar123._8_4_ =
           (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
      auVar123._12_4_ =
           (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
      auVar11[1] = uVar144;
      auVar11[0] = uVar143;
      auVar11[2] = uVar145;
      auVar11[3] = uVar146;
      auVar11[4] = uVar147;
      auVar11[5] = uVar148;
      auVar11[6] = uVar149;
      auVar11[7] = uVar150;
      auVar11[8] = in_register_00005228;
      auVar11[9] = in_register_00005229;
      auVar11[10] = in_register_0000522a;
      auVar11[0xb] = in_register_0000522b;
      auVar11[0xc] = in_register_0000522c;
      auVar11[0xd] = in_register_0000522d;
      auVar11[0xe] = in_register_0000522e;
      auVar11[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar123,auVar11,4);
      auVar6._8_4_ = 0x4eff0000;
      auVar6._0_8_ = 0x4eff00004eff0000;
      auVar6._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar6,4);
      auVar124._0_4_ = in_s16 + ABS((float)extraout_d1) * extraout_s18;
      auVar124._4_4_ =
           in_register_00005204 + ABS((float)((ulong)extraout_d1 >> 0x20)) * extraout_s18;
      auVar124._8_4_ = in_register_00005208 + ABS((float)extraout_var_10) * extraout_s18;
      auVar124._12_4_ =
           in_register_0000520c + ABS((float)((ulong)extraout_var_10 >> 0x20)) * extraout_s18;
      auVar184 = NEON_scvtf(auVar124,4);
      uVar30 = CONCAT13((byte)((uint)auVar124._0_4_ >> 0x18) & in_register_000052c3,
                        CONCAT12((byte)((uint)auVar124._0_4_ >> 0x10) & in_register_000052c2,
                                 CONCAT11((byte)((uint)auVar124._0_4_ >> 8) & in_register_000052c1,
                                          SUB41(auVar124._0_4_,0) & in_b22)));
      uVar54 = CONCAT13((byte)((uint)auVar124._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar124._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar124._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar124._8_4_,0) & in_register_000052c8)));
      fVar176 = (float)(uVar30 | 0x3f000000);
      fVar175 = (float)((uint)(CONCAT17((byte)((uint)auVar124._4_4_ >> 0x18) & in_register_000052c7,
                                        CONCAT16((byte)((uint)auVar124._4_4_ >> 0x10) &
                                                 in_register_000052c6,
                                                 CONCAT15((byte)((uint)auVar124._4_4_ >> 8) &
                                                          in_register_000052c5,
                                                          CONCAT14(SUB41(auVar124._4_4_,0) &
                                                                   in_register_000052c4,uVar30))))
                              >> 0x20) | 0x3f000000);
      fVar177 = (float)(uVar54 | 0x3f000000);
      fVar178 = (float)((uint)(CONCAT17((byte)((uint)auVar124._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar124._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar124._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar124._12_4_,0) &
                                                                    in_register_000052cc,uVar54))))
                              >> 0x20) | 0x3f000000);
      fVar176 = fVar85 * ((auVar184._0_4_ * fVar157 + fVar92 + fVar118 * fVar176) -
                         1.72588 / (fVar176 + fVar167));
      fVar175 = fVar87 * ((auVar184._4_4_ * fVar158 + fVar159 + fVar160 * fVar175) -
                         1.72588 / (fVar175 + fVar171));
      fVar177 = fVar88 * ((auVar184._8_4_ * in_register_000052a8 + in_register_000052e8 +
                          in_register_00005308 * fVar177) - 1.72588 / (fVar177 + fVar165));
      fVar178 = fVar89 * ((auVar184._12_4_ * in_register_000052ac + in_register_000052ec +
                          in_register_0000530c * fVar178) - 1.72588 / (fVar178 + fVar165));
      auVar125._0_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar125._4_4_ =
           (fVar175 + 121.274055 + (fVar175 - (float)(int)fVar175) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar175 - (float)(int)fVar175))) * 8388608.0;
      auVar125._8_4_ =
           (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
      auVar125._12_4_ =
           (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
      auVar12[1] = uVar144;
      auVar12[0] = uVar143;
      auVar12[2] = uVar145;
      auVar12[3] = uVar146;
      auVar12[4] = uVar147;
      auVar12[5] = uVar148;
      auVar12[6] = uVar149;
      auVar12[7] = uVar150;
      auVar12[8] = in_register_00005228;
      auVar12[9] = in_register_00005229;
      auVar12[10] = in_register_0000522a;
      auVar12[0xb] = in_register_0000522b;
      auVar12[0xc] = in_register_0000522c;
      auVar12[0xd] = in_register_0000522d;
      auVar12[0xe] = in_register_0000522e;
      auVar12[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar125,auVar12,4);
      auVar7._8_4_ = 0x4eff0000;
      auVar7._0_8_ = 0x4eff00004eff0000;
      auVar7._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar7,4);
      auVar127._0_4_ = in_s16 + ABS(fVar151) * extraout_s18;
      auVar127._4_4_ = in_register_00005204 + ABS(fVar152) * extraout_s18;
      auVar127._8_4_ = in_register_00005208 + ABS(fVar166) * extraout_s18;
      auVar127._12_4_ = in_register_0000520c + ABS(fVar172) * extraout_s18;
      auVar184 = NEON_scvtf(auVar127,4);
      uVar30 = CONCAT13((byte)((uint)auVar127._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar127._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar127._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar127._8_4_,0) & in_register_000052c8)));
      fVar176 = (float)(CONCAT13((byte)((uint)auVar127._0_4_ >> 0x18) & in_register_000052c3,
                                 CONCAT12((byte)((uint)auVar127._0_4_ >> 0x10) &
                                          in_register_000052c2,
                                          CONCAT11((byte)((uint)auVar127._0_4_ >> 8) &
                                                   in_register_000052c1,
                                                   SUB41(auVar127._0_4_,0) & in_b22))) | 0x3f000000)
      ;
      fVar175 = (float)(CONCAT13((byte)((uint)auVar127._4_4_ >> 0x18) & in_register_000052c7,
                                 CONCAT12((byte)((uint)auVar127._4_4_ >> 0x10) &
                                          in_register_000052c6,
                                          CONCAT11((byte)((uint)auVar127._4_4_ >> 8) &
                                                   in_register_000052c5,
                                                   SUB41(auVar127._4_4_,0) & in_register_000052c4)))
                       | 0x3f000000);
      fVar151 = (float)(uVar30 | 0x3f000000);
      fVar152 = (float)((uint)(CONCAT17((byte)((uint)auVar127._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar127._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar127._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar127._12_4_,0) &
                                                                    in_register_000052cc,uVar30))))
                              >> 0x20) | 0x3f000000);
      fVar85 = fVar85 * ((auVar184._0_4_ * fVar157 + fVar92 + fVar118 * fVar176) -
                        1.72588 / (fVar176 + fVar167));
      fVar87 = fVar87 * ((auVar184._4_4_ * fVar158 + fVar159 + fVar160 * fVar175) -
                        1.72588 / (fVar175 + fVar171));
      fVar88 = fVar88 * ((auVar184._8_4_ * in_register_000052a8 + in_register_000052e8 +
                         in_register_00005308 * fVar151) - 1.72588 / (fVar151 + fVar165));
      fVar89 = fVar89 * ((auVar184._12_4_ * in_register_000052ac + in_register_000052ec +
                         in_register_0000530c * fVar152) - 1.72588 / (fVar152 + fVar165));
      auVar86._0_4_ =
           (fVar85 + 121.274055 + (fVar85 - (float)(int)fVar85) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar85 - (float)(int)fVar85))) * 8388608.0;
      auVar86._4_4_ =
           (fVar87 + 121.274055 + (fVar87 - (float)(int)fVar87) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar87 - (float)(int)fVar87))) * 8388608.0;
      auVar86._8_4_ =
           (fVar88 + 121.274055 + (fVar88 - (float)(int)fVar88) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar88 - (float)(int)fVar88))) * 8388608.0;
      auVar86._12_4_ =
           (fVar89 + 121.274055 + (fVar89 - (float)(int)fVar89) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar89 - (float)(int)fVar89))) * 8388608.0;
      auVar13[1] = uVar144;
      auVar13[0] = uVar143;
      auVar13[2] = uVar145;
      auVar13[3] = uVar146;
      auVar13[4] = uVar147;
      auVar13[5] = uVar148;
      auVar13[6] = uVar149;
      auVar13[7] = uVar150;
      auVar13[8] = in_register_00005228;
      auVar13[9] = in_register_00005229;
      auVar13[10] = in_register_0000522a;
      auVar13[0xb] = in_register_0000522b;
      auVar13[0xc] = in_register_0000522c;
      auVar13[0xd] = in_register_0000522d;
      auVar13[0xe] = in_register_0000522e;
      auVar13[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar86,auVar13,4);
      auVar8._8_4_ = 0x4eff0000;
      auVar8._0_8_ = 0x4eff00004eff0000;
      auVar8._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar8,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xc0:
      goto code_r0x000108418fa8;
    case (undefined **)0xc1:
      func_0x00010bf00dc0();
      func_0x00010c2289e0();
      *(float **)(pfVar52 + 0x192) = pfVar32;
      return pfVar32;
    case (undefined **)0xc2:
    case (undefined **)0xdb:
      pfVar42 = (float *)0x11372b000;
      if (pfRam000000011372b720 != (float *)0x0) {
        return pfRam000000011372b720;
      }
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108417fb4:
      func_0x00010bf00dc0();
      func_0x00010c229040();
      func_0x00010c228780(pfVar32);
      *(float **)(pfVar42 + 0x1c8) = pfVar32;
      return pfVar32;
    case (undefined **)0xc6:
    case (undefined **)0xd2:
    case (undefined **)0xdf:
      goto code_r0x0001083feaf4;
    case (undefined **)0xcc:
      pfVar34 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar52 = pfVar32;
code_r0x000108411ab8:
      func_0x00010bf20c00();
      func_0x00010c013de0(pfVar52);
      func_0x00010c182b00(param_1);
      _objc_release(pfVar52);
      _objc_release(pfVar34);
      pfVar38 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar38);
      pfVar52 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = param_1;
      func_0x00010bf4dce0(param_1);
code_r0x000108411b2c:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(pfVar52);
      _objc_release(pfVar32);
      _objc_release(pfVar52);
      pfVar52 = (float *)PTR_PTR_1126b56b0;
      _objc_opt_new();
      pfVar42 = (float *)PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      pfVar32 = param_1;
code_r0x000108411b74:
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
code_r0x000108411b80:
      func_0x00010bf20c00();
      func_0x00010c014040(pfVar42);
      func_0x00010c1ed580(param_1);
      _objc_release(pfVar42);
      _objc_release(pfVar32);
      pfVar32 = param_1;
      func_0x00010c13cf80(param_1);
code_r0x000108411bc0:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0700();
      _objc_release(pfVar32);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167a20();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2026e0();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181fc0();
      _objc_release(pfVar38);
      puVar40 = PTR_PTR_1126b1150;
      _objc_alloc();
      func_0x00010c03fd60();
      lVar48 = (long)(int)unaff_x27[0xc];
      uVar63 = *(undefined8 *)((long)param_1 + lVar48);
      *(undefined **)((long)param_1 + lVar48) = puVar40;
      _objc_release(uVar63);
      func_0x00010bef9980(*(undefined8 *)((long)param_1 + lVar48));
      func_0x00010c18b5e0(*(undefined8 *)((long)param_1 + lVar48));
      func_0x00010c17e720(*(undefined8 *)((long)param_1 + lVar48));
      fVar92 = unaff_x27[8];
      func_0x00010c1e6360(*(undefined8 *)((long)param_1 + lVar48));
      puVar40 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      func_0x00010c178280();
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar31 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(pfVar38);
      _objc_release(pfVar31);
      _objc_release(pfVar38);
      uVar62 = *(undefined8 *)((long)param_1 + unaff_x24);
      func_0x00010c0d6280(uVar62);
      _objc_retainAutoreleasedReturnValue();
      uVar63 = uVar62;
      func_0x00010c154720();
      _objc_retainAutoreleasedReturnValue();
      uVar64 = *(undefined8 *)((long)param_1 + (long)(int)fVar92);
      func_0x00010c11da20(uVar64);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139c0(uVar63);
      _objc_release(uVar64);
      _objc_release(uVar63);
      _objc_release(uVar62);
      *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xd]) = 0;
      pfVar38 = param_1;
      func_0x00010be0d940();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x78) =
           &PTR____CFConstantStringClassReference_110ed7978;
      *(undefined ***)((long)register0x00000008 + -0x70) =
           &PTR____CFConstantStringClassReference_110ed79f8;
      puVar39 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar38);
      _objc_release(puVar39);
      *(undefined ***)((long)register0x00000008 + -0x88) =
           &PTR____CFConstantStringClassReference_110ed79b8;
      pfVar31 = param_1;
      func_0x00010c073ce0();
      ppuVar44 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
      if ((int)pfVar31 == 0) {
        ppuVar44 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
      }
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar44;
      puVar39 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar38);
      _objc_release(puVar39);
      uVar63 = *(undefined8 *)((long)param_1 + (long)(int)*unaff_x27);
      pfVar31 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar38;
      func_0x00010bf51e00(pfVar38);
      func_0x00010bf7dbc0(uVar63);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xe]) = 1;
      _objc_release(pfVar38);
      _objc_release(puVar40);
      pfVar31 = pfVar52;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68))
      {
        ___stack_chk_fail();
        *(float **)((long)register0x00000008 + -0xd0) = pfVar38;
        *(undefined **)((long)register0x00000008 + -200) = puVar40;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
        *(code **)((long)register0x00000008 + -0xa8) = FUN_108411f7c;
        *(float **)((long)register0x00000008 + -0xe0) = pfVar31;
        *(undefined **)((long)register0x00000008 + -0xd8) = PTR_PTR_1126fc748;
        _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xe0),
                            PTR_s_viewWillAppear__1126853f0);
        func_0x00010beaf700(pfVar31);
        pfVar38 = *(float **)((long)pfVar31 + (long)_DAT_112774908);
        func_0x00010c0d6280(pfVar38);
        _objc_retainAutoreleasedReturnValue();
        pfVar50 = pfVar38;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        uVar62 = *(undefined8 *)((long)pfVar31 + (long)_DAT_1127748e4);
        func_0x00010bf5fc60(uVar62);
        _objc_retainAutoreleasedReturnValue();
        uVar63 = uVar62;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139c0(pfVar50);
        _objc_release(uVar63);
        _objc_release(uVar62);
        _objc_release(pfVar50);
        _objc_release(pfVar38);
        return pfVar38;
      }
      return pfVar31;
    case (undefined **)0xcf:
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar44;
      pfVar42 = *(float **)((long)pfVar52 + (long)ppuVar44);
      func_0x00010c15ffa0(pfVar42);
      _objc_retainAutoreleasedReturnValue();
code_r0x00010841378c:
      func_0x00010c1d0640(param_1);
      _objc_release(pfVar42);
      lVar48 = (long)(int)pfVar56[0xd];
      uVar62 = *(undefined8 *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar63 = uVar62;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(uVar63);
      _objc_release(uVar62);
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      ppuVar35 = *(undefined ***)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar44 = ppuVar35;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      uVar64 = *(undefined8 *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar62 = uVar64;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      lVar36 = *(long *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = lVar36;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      lVar43 = lVar48;
      func_0x00010c08fa60();
      uVar63 = 1;
      if (lVar43 != 0) {
        uVar63 = 2;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar44 != (undefined **)0x0) {
        ppuVar1 = ppuVar44;
      }
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar62;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar63;
      *(undefined ***)((long)register0x00000008 + -0xa0) = ppuVar1;
      puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      _objc_release(lVar48);
      _objc_release(lVar36);
      _objc_release(uVar62);
      _objc_release(uVar64);
      _objc_release(ppuVar44);
      _objc_release(ppuVar35);
      uVar63 = *(undefined8 *)((long)pfVar52 + (long)_DAT_1127748f8);
      func_0x00010c09ea00(uVar63);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = PTR_PTR_1126b6598;
      func_0x00010bf51c80();
      func_0x00010bf33ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar40;
      func_0x00010bfc6400();
      _objc_release(puVar40);
      *(undefined **)((long)register0x00000008 + -0xa0) = puVar39;
      puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c08bda0();
      func_0x00010c0df780(puVar40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      _objc_release(uVar63);
      goto _objc_autoreleaseReturnValue;
    case (undefined **)0xd0:
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108418fa8:
code_r0x000108418fbc:
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x20e) = pfVar32;
      return pfVar32;
    case (undefined **)0xd1:
      return pfVar32;
    case (undefined **)0xd8:
code_r0x0001084136ac:
      goto LAB_108413708;
    case (undefined **)0xd9:
      goto code_r0x000108418fbc;
    case (undefined **)0xda:
      pfVar50 = (float *)((long)register0x00000008 + -0x70);
      pcVar45 = (code *)0x10841d3d8;
      goto code_r0x000109189420;
    case (undefined **)0xe5:
      return pfVar32;
    case (undefined **)0xe6:
      goto code_r0x00010841a3c4;
    case (undefined **)0xe7:
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),ppuVar44[0x129]);
      if (pfVar37 != (float *)0x0) {
        puVar40 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_opt_new();
        lVar48 = (long)_DAT_11277495c;
        uVar63 = *(undefined8 *)((long)pfVar37 + lVar48);
        *(undefined **)((long)pfVar37 + lVar48) = puVar40;
        _objc_release(uVar63);
        puVar40 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(puVar40);
        puVar40 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(puVar40);
        ppuVar44 = &PTR____CFConstantStringClassReference_110ea8fd8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(ppuVar44);
        func_0x00010c21e900(*(undefined8 *)((long)pfVar37 + lVar48));
        func_0x00010c1cfce0(*(undefined8 *)((long)pfVar37 + lVar48));
        func_0x00010befbb60(pfVar37);
      }
      return pfVar37;
    case (undefined **)0xe9:
      *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_var;
      *(undefined8 *)((long)register0x00000008 + -0x80) = extraout_d0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_var;
      *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_d0;
      _objc_retain(pfVar52);
      pfVar31 = pfVar52;
      func_0x00010bf52a60();
      if (pfVar31 != (float *)0x0) {
        lVar48 = **(long **)((long)register0x00000008 + -0x90);
        do {
          pfVar57 = (float *)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x90) != lVar48) {
              _objc_enumerationMutation(pfVar52);
            }
            func_0x00010c067ec0(*(undefined8 *)
                                 (*(long *)((long)register0x00000008 + -0x98) + (long)pfVar57 * 8));
            func_0x00010befc800(unaff_x24);
            pfVar57 = (float *)((long)pfVar57 + 1);
          } while (pfVar31 != pfVar57);
          pfVar31 = pfVar52;
          func_0x00010bf52a60();
        } while (pfVar31 != (float *)0x0);
      }
      _objc_release(pfVar52);
      pfVar31 = pfVar38;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      if (pfVar31 == (float *)0x0) {
        ppuVar44 = &PTR_PTR_1126b2000;
code_r0x00010841a3c4:
        puVar40 = ppuVar44[0x6f];
        _objc_opt_new(puVar40);
        func_0x00010c183080(&UNK_10df26510);
        _objc_release(puVar40);
      }
      else {
        func_0x00010c183080(&UNK_10df26510);
code_r0x00010841a3bc:
      }
      _objc_release(pfVar31);
      pfVar31 = pfVar56;
      func_0x00010c0d3c80(pfVar56);
      pfVar57 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = pfVar57;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6a60();
      _objc_release(pfVar32);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = param_1;
      func_0x00010c0d3c80(param_1);
      pfVar57 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = pfVar57;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6a80();
      _objc_release(pfVar32);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar31;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6960();
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = pfVar42;
      func_0x00010c0d3c80(pfVar42);
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar38;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c69a0();
      _objc_release(pfVar57);
      _objc_release(pfVar38);
      _objc_release(pfVar31);
      _objc_release(unaff_x24);
      _objc_release(pfVar56);
      _objc_release(pfVar42);
      _objc_release(pfVar52);
      pfVar38 = param_1;
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
      {
        return pfVar38;
      }
      pcVar45 = FUN_10841a57c;
      ___stack_chk_fail();
      pfVar32 = param_1;
code_r0x000109189420:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = pfVar32;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = pcVar45;
      func_0x000107c3094c(param_2,(float *)((long)register0x00000008 + -200),
                          (float *)((long)register0x00000008 + -0xd0));
      if ((int)param_2 == 0) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)PTR_PTR_1126afad0;
        _objc_alloc_init(PTR_PTR_1126afad0);
        func_0x00010c1a85a0();
        func_0x00010c1c0fe0(param_1);
      }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return param_1;
    case (undefined **)0xea:
      return pfVar32;
    case (undefined **)0xeb:
      goto code_r0x000108411bc0;
    case (undefined **)0xf4:
                    /* WARNING: Could not recover jumptable at 0x00010840b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return pfVar32;
    case (undefined **)0xf5:
      return param_1;
    case (undefined **)0xf6:
      return pfVar32;
    case (undefined **)0xf7:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      pfVar50 = pfRam000000011372b698;
      if (pfRam000000011372b698 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar50 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
      }
      pfRam000000011372b698 = pfVar50;
      return pfVar50;
    case (undefined **)0xf8:
      goto code_r0x000108411b80;
    case (undefined **)0xfd:
      func_0x000108403810();
      func_0x0001084039e4();
      func_0x0001083f91a8();
      pfVar56 = param_1 + 0xc;
      iVar61 = 0x135;
      uVar179 = 1;
      pfVar50 = *(float **)((long)register0x00000008 + -0x90);
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x88);
      pfVar26 = (float *)((long)register0x00000008 + -0x80);
      goto SUB_1083f8fd0;
    case (undefined **)0xfe:
      _objc_retain(pfVar42);
      pfVar50 = param_1;
      func_0x00010c0720c0();
      if ((int)pfVar50 != 0) {
        pfVar50 = pfVar56;
        func_0x00010c153720(pfVar56);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = pfVar50;
        func_0x00010c0d6280();
        _objc_retainAutoreleasedReturnValue();
        pfVar31 = pfVar38;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c193b00();
        _objc_release(pfVar31);
        _objc_release(pfVar38);
        _objc_release(pfVar50);
        func_0x00010be01ce0(pfVar56);
        goto code_r0x0001084136ac;
      }
LAB_1084136b0:
      pfVar50 = pfVar56;
      func_0x00010be0d940(pfVar56);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      uVar63 = *(undefined8 *)((long)pfVar56 + (long)_DAT_1127748e0);
      pfVar38 = pfVar50;
      func_0x00010bf51e00(pfVar50);
      func_0x00010bf7dbc0(uVar63);
      _objc_release(pfVar38);
      _objc_release(pfVar50);
LAB_108413708:
      _objc_release(pfVar42);
      _objc_release(pfVar52);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0xff:
      func_0x00010c182300();
      param_1 = pfVar42;
      goto code_r0x00010bdbf3e4;
    }
    break;
  case 4.34403e-44:
    func_0x000108403784();
    FUN_1084016cc();
    pfVar32 = pfVar56;
code_r0x0001083feac4:
    iVar61 = (int)pfVar32;
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x0001084038cc();
      func_0x0001084017e4();
      func_0x000108403650();
      if (iVar61 == 0) goto code_r0x0001083ff774;
      func_0x000108403778();
      func_0x000108403bbc();
code_r0x0001083feae8:
      func_0x000108403764(*(undefined8 *)(pfVar52 + 4));
code_r0x0001083feaf4:
      func_0x000108403878();
      func_0x0001083fa470();
    }
    break;
  case 4.48416e-44:
    pfVar32 = pfVar56;
code_r0x0001083feb04:
    iVar61 = (int)pfVar32;
    func_0x000108403650();
    if (iVar61 == 0) goto code_r0x0001083ff774;
    func_0x000108403bbc(**(undefined8 **)(*(long *)(pfVar52 + 6) + 0x10));
code_r0x0001083feb1c:
    func_0x000108403764(*(undefined8 *)(*(long *)(pfVar52 + 6) + 0x10));
    func_0x000108403778();
    func_0x000108403bbc();
    func_0x000108403764(*(undefined8 *)(pfVar52 + 4));
    func_0x000108403878();
    FUN_1083fa4fc();
    break;
  case 4.76441e-44:
code_r0x0001083fec78:
    iVar61 = (int)pfVar56;
    func_0x000108403650();
    if (iVar61 == 0) goto code_r0x0001083ff774;
code_r0x0001083fec80:
    func_0x00010840359c();
    func_0x0001084038a8();
  case 5.04467e-44:
    break;
  case 5.1848e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) == 0) goto code_r0x0001083ff774;
    func_0x000108403784();
    FUN_1083fda24();
code_r0x0001083fecc4:
    func_0x000108403868();
    pcVar45 = extraout_x8_03;
code_r0x0001083feccc:
    (*pcVar45)();
    pfVar55 = pfVar56;
  default:
    goto LAB_1083ff778;
  case 5.46506e-44:
    bVar105 = *(byte *)(*(long *)(pfVar52 + 6) + 0x54);
    unaff_x24 = (ulong)bVar105;
    if (bVar105 == 0xff) {
      pfVar55 = *(float **)(param_1 + 0x3a);
      *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(*(long *)(pfVar52 + 6) + 0x28);
code_r0x0001083fece0:
      param_1[0x10] = (float)((int)param_1[0x10] + 1);
code_r0x0001083fecec:
      func_0x000108403878();
      func_0x0001083f98fc();
code_r0x0001083fecf8:
      func_0x000108403784();
code_r0x0001083fed04:
      iVar61 = (int)pfVar56;
      FUN_1083fdaa4();
      if (((ulong)param_2 & 1) == 0) goto code_r0x0001083ff774;
      func_0x000108403938();
      if (iVar61 != 0) goto code_r0x0001083fed1c;
code_r0x0001083fed24:
      *(float **)(param_1 + 0x3a) = pfVar55;
      func_0x0001084036f0();
code_r0x0001083fed2c:
      break;
    }
    fVar92 = pfVar52[0xe];
    if (fVar92 != 1.4013e-45) {
      pfVar32 = pfVar56;
      if (fVar92 == 2.8026e-45) goto code_r0x0001083fed74;
      if (fVar92 == 4.2039e-45) {
        lVar48 = **(long **)(pfVar52 + 0xc);
        lVar43 = (*(long **)(pfVar52 + 0xc))[2];
        iVar61 = (int)(char)bVar105;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar50 = param_1;
        func_0x0001084038b0();
        *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
        *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
        *(float *)((long)register0x00000008 + -0xd0) = 0.0;
        *(float *)((long)register0x00000008 + -0xcc) = 0.0;
        *(float **)((long)register0x00000008 + -200) = pfVar52;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
        if (iVar61 == 0x51) {
          func_0x00010840392c();
          iVar61 = (int)pfVar50;
          FUN_108401ae0();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403790();
          FUN_108401ae0();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x00010840359c();
          func_0x0001084037dc();
LAB_1084019ec:
          func_0x0001083f9180();
          return (float *)0x1;
        }
        if (iVar61 == 0x1c) {
          uVar62 = *(undefined8 *)(lVar48 + 0x10);
          func_0x000108403618();
          uVar63 = uVar62;
          func_0x0001084036c8();
          if ((int)uVar63 == 0) {
            return (float *)0x0;
          }
          iVar61 = (int)pfVar50 + 0x30;
          FUN_1083fa660();
          func_0x0001084035d4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403cfc();
          func_0x0001083f91a8();
          func_0x000108403918(pfVar50 + 0xc,0x1d7);
          func_0x000108403910(pfVar50 + 0xc,0x80000000);
          func_0x000108403918(pfVar50 + 0xc,0xfb);
          func_0x0001084038a8();
          FUN_1083f9008(pfVar50 + 0xc,0x106,uVar62);
          return (float *)0x1;
        }
        if (iVar61 == 0x38) {
          iVar61 = (int)*(undefined8 *)(lVar43 + 0x10);
          func_0x000108403634();
          func_0x00010840365c();
          if (iVar61 == 0) {
            func_0x000108403784();
            FUN_108401ae0();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            uVar63 = *(undefined8 *)(lVar48 + 0x10);
            FUN_10840082c(uVar63,&UNK_10df26728);
            if ((int)uVar63 == 0x22d) {
              return (float *)0x0;
            }
            func_0x000108403a44();
            func_0x0001084037dc();
          }
          else {
            iVar61 = (int)*(undefined8 *)(lVar43 + 0x10);
            func_0x000108403634();
            func_0x00010840365c();
            if (iVar61 != 3) {
              return (float *)0x0;
            }
            func_0x0001084035c4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x000108403618(*(undefined8 *)(lVar48 + 0x10));
            func_0x0001084037dc();
          }
          goto LAB_1084019ec;
        }
        if (iVar61 == 0x47) {
          iVar61 = (int)*(undefined8 *)(lVar48 + 0x10);
          func_0x000108403618();
          func_0x0001084036c8();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403990(4);
          func_0x0001084017e4();
          func_0x0001084035d4();
          if (iVar61 != 0) {
            func_0x000108403990();
            func_0x0001084017e4();
            func_0x0001084035c4();
            if (iVar61 != 0) {
              func_0x0001083f9210(pfVar50 + 0xc);
              func_0x000108403990();
              func_0x0001083f9178();
              return (float *)0x1;
            }
            return (float *)0x0;
          }
          return (float *)0x0;
        }
        if (iVar61 != 0xe) {
          return (float *)0x0;
        }
        func_0x0001084036c8();
        iVar61 = (int)pfVar50;
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403790();
        FUN_108401ae0();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403908();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403784();
        FUN_108401ae0();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        plVar41 = *(long **)(lVar48 + 0x10);
        puVar40 = &UNK_10df26708;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        pfVar52 = *(float **)((long)register0x00000008 + -0xc0);
        param_1 = *(float **)((long)register0x00000008 + -0xb8);
        pfVar56 = *(float **)((long)register0x00000008 + -0xd0);
        pfVar42 = *(float **)((long)register0x00000008 + -200);
        goto FUN_108400898;
      }
      goto code_r0x0001083ff774;
    }
    pfVar55 = (float *)0x0;
    pfVar42 = (float *)**(undefined8 **)(pfVar52 + 0xc);
    param_3 = (float *)0x1;
    switch(unaff_x24) {
    case 0:
      func_0x000108403624();
      func_0x00010840365c();
      if ((int)pfVar56 != 0) {
code_r0x0001083ff0b4:
        iVar61 = 0x11b;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      }
      func_0x0001084035d4();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
        func_0x000108401aa4(param_1,pfVar56);
        goto code_r0x0001083ff730;
      }
      break;
    case 1:
    case 5:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x31:
      goto LAB_1083ff778;
    case 2:
      pfVar32 = param_1;
code_r0x0001083ff0a0:
      iVar61 = 0x132;
      goto code_r0x0001083ff2ec;
    case 3:
      func_0x000108403668();
      pfVar32 = pfVar56;
code_r0x0001083ff04c:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff060:
code_r0x0001083ff07c:
        func_0x0001084008ec();
        goto code_r0x0001083ff730;
      }
      break;
    case 4:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff078:
        goto code_r0x0001083ff07c;
      }
      break;
    case 6:
      iVar61 = 0x131;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 8:
      param_2 = (float *)0x133;
      pfVar32 = param_1;
code_r0x0001083ff1b4:
      iVar61 = (int)param_2;
      goto code_r0x0001083ff2ec;
    case 0xd:
      param_2 = (float *)0x123;
      pfVar32 = param_1;
code_r0x0001083ff0c8:
      iVar61 = (int)param_2;
      goto code_r0x0001083ff2ec;
    case 0x10:
      iVar61 = 0x12f;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x12:
      func_0x000108403624();
      uVar63 = func_0x000108403a20(0x2900ffffff);
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar63;
      pfVar32 = pfVar56;
      ppuVar44 = extraout_x8_05;
code_r0x0001083ff1cc:
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar44 + 2;
      uVar63 = 0x404ca5dc20000000;
      goto code_r0x0001083ff1e0;
    case 0x1a:
code_r0x0001083ff154:
      iVar61 = 0x138;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x1b:
code_r0x0001083ff16c:
      iVar61 = 0x137;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x1f:
    case 0x20:
    case 0x29:
      goto code_r0x0001083fe7fc;
    case 0x21:
      iVar61 = 0x11f;
      pfVar32 = param_1;
code_r0x0001083ff2ec:
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
      pfVar31 = pfVar42;
      func_0x0001084038b0();
      pfVar26 = (float *)((long)register0x00000008 + -0xd0);
      *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
      *(float **)((long)register0x00000008 + -200) = pfVar42;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
      pfVar50 = (float *)((long)register0x00000008 + -0xb0);
      pfVar38 = pfVar32;
      func_0x00010840371c();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      uVar179 = (undefined4)*(undefined8 *)(pfVar31 + 4);
      func_0x000108403618();
      pfVar56 = pfVar32 + 0xc;
      uVar63 = 0x108401b84;
SUB_1083f8fd0:
      if ((iVar61 - 0x10bU < 0x30) &&
         ((1L << ((ulong)(iVar61 - 0x10bU) & 0x3f) & 0xf5f811111111U) != 0)) {
        *(float **)((long)pfVar26 + -0x10) = pfVar50;
        *(undefined8 *)((long)pfVar26 + -8) = uVar63;
        *(int *)((long)pfVar26 + -0x30) = iVar61;
        *(undefined4 *)((long)pfVar26 + -0x2c) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x28) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x24) = uVar179;
        *(undefined4 *)((long)pfVar26 + -0x20) = 0;
        *(undefined4 *)((long)pfVar26 + -0x1c) = 0;
        fVar92 = pfVar56[6];
        *(undefined4 *)((long)pfVar26 + -0x18) = 0;
        *(float *)((long)pfVar26 + -0x14) = fVar92;
        FUN_1083f8ee0();
        return pfVar56;
      }
      return pfVar56;
    case 0x23:
      func_0x000108403668();
      pfVar32 = pfVar56;
code_r0x0001083ff124:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
        func_0x000108403810();
        func_0x0001084035e4();
        func_0x0001084037dc();
code_r0x0001083ff13c:
        pfVar56 = pfVar32;
        uVar179 = SUB84(param_3,0);
        iVar61 = 0x11f;
        uVar63 = 0x1083ff144;
        pfVar26 = (float *)((long)register0x00000008 + -0xa0);
        goto SUB_1083f8fd0;
      }
      break;
    case 0x25:
code_r0x0001083fee80:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        bVar28 = bVar105 == 0x25;
        goto code_r0x0001083fee90;
      }
      break;
    case 0x2a:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
code_r0x0001083ff0f4:
        pfVar32 = *(float **)(pfVar42 + 4);
        FUN_10840082c(pfVar32,&UNK_10df266e8);
        uVar29 = (int)pfVar32 == 0x22d;
code_r0x0001083ff10c:
        uVar179 = SUB84(param_3,0);
        iVar61 = (int)pfVar42;
        if (!(bool)uVar29) {
          func_0x000108403a44();
          func_0x0001084037dc();
          goto code_r0x0001083ff448;
        }
      }
      break;
    case 0x2b:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        uVar63 = *(undefined8 *)(pfVar42 + 4);
        func_0x000108403764(uVar63);
        func_0x0001083f9220(param_1 + 0xc,uVar63);
        goto code_r0x0001083ff730;
      }
      break;
    case 0x2f:
      func_0x000108403668();
      if ((int)pfVar56 == 0) break;
      pfVar32 = *(float **)(pfVar42 + 4);
code_r0x0001083ff19c:
      goto code_r0x0001083ff4bc;
    case 0x32:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
        pfVar32 = pfVar56;
code_r0x0001083ff184:
        uVar179 = SUB84(param_3,0);
        func_0x0001084037dc();
        iVar61 = 0x13a;
        goto code_r0x0001083ff448;
      }
      break;
    case 0x33:
      func_0x000108403668();
      pfVar32 = pfVar56;
      if ((int)pfVar56 != 0) {
code_r0x0001083ff08c:
        uVar179 = SUB84(param_3,0);
        func_0x0001084035e4();
        func_0x0001084037dc();
        iVar61 = 0x139;
        goto code_r0x0001083ff448;
      }
      break;
    default:
      switch(bVar105) {
      case 0x4d:
        func_0x000108403624();
        *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
        func_0x000108403a20();
        *(long *)((long)register0x00000008 + -0x80) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x70) = pfVar56;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 0.0;
        func_0x00010840379c();
        (**(code **)(extraout_x8_00 + 0x50))();
        *(float *)((long)register0x00000008 + -0x98) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x94) = 5.74532e-44;
        *(long *)((long)register0x00000008 + -0xa0) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x90) = pfVar56;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_1084017f0(param_1,0xe,pfVar42,(float *)((long)register0x00000008 + -0x80),
                      (float *)((long)register0x00000008 + -0xa0));
        pfVar55 = param_1;
        goto LAB_1083ff778;
      case 0x4e:
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x000108403624();
          func_0x00010840365c();
          if ((int)pfVar56 == 0) {
            func_0x000108403624();
            func_0x000108403850(0x2900ffffff);
            *(float **)((long)register0x00000008 + -0x70) = pfVar56;
            *(float *)((long)register0x00000008 + -0x68) = -3.689349e+19;
            *(float *)((long)register0x00000008 + -100) = 122879.99;
            func_0x000108403804();
            if (((int)pfVar56 == 0) || (func_0x000108403908(), ((ulong)pfVar56 & 1) == 0)) break;
          }
          func_0x000108403624();
          unaff_s8 = 0xffffff;
          unaff_00005104 = 0x29;
          *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
          *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
          pfVar52 = (float *)&UNK_110a459d0;
          *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110a459e0;
          *(float **)((long)register0x00000008 + -0x70) = pfVar56;
          *(float *)((long)register0x00000008 + -0x68) = 0.0;
          *(float *)((long)register0x00000008 + -100) = -1.875;
          func_0x000108403804();
          pfVar32 = pfVar56;
          if (((ulong)pfVar56 & 1) != 0) goto code_r0x0001083ff294;
        }
        break;
      case 0x4f:
      case 0x51:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto LAB_1083ff778;
      case 0x50:
        iVar61 = 0x12e;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x52:
        iVar61 = 0x135;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x57:
        iVar61 = 0x130;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x5c:
        goto code_r0x0001083fee80;
      case 0x5d:
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x00010840379c();
          func_0x000108403bbc();
          func_0x000108403764(*(undefined8 *)(pfVar42 + 4));
          func_0x0001084039e4();
          func_0x0001083fa3ec();
          goto code_r0x0001083ff730;
        }
        break;
      case 0x5e:
        func_0x000108403668();
        uVar179 = SUB84(param_3,0);
        if ((int)pfVar56 != 0) {
          func_0x0001084035e4();
          func_0x0001084037dc();
          iVar61 = 0x113;
          uVar63 = 0x1083ff31c;
          goto SUB_1083f8fd0;
        }
        break;
      case 0x5f:
        goto code_r0x0001083fe7fc;
      default:
        if (bVar105 == 0x3b) {
          func_0x000108403668();
          if ((int)pfVar56 != 0) {
            func_0x0001084035e4();
            func_0x0001084039e4();
            FUN_1083f9e48();
            if (1 < (int)pfVar56) {
              func_0x0001084039e4();
              FUN_1083f9e48();
              func_0x0001084039e4();
              func_0x0001083f91a8();
              iVar61 = 0x135;
              uVar179 = 1;
              uVar63 = 0x1083ff37c;
              pfVar26 = (float *)((long)register0x00000008 + -0xa0);
              pfVar56 = param_1 + 0xc;
              goto SUB_1083f8fd0;
            }
            func_0x000108401aa4(param_1,1);
            plVar41 = *(long **)(pfVar42 + 4);
            puVar40 = &UNK_10df266b8;
            pfVar52 = pfVar56;
            pfVar56 = pfVar55;
            goto code_r0x0001083ff6e0;
          }
          break;
        }
        if (bVar105 == 0x3d) {
          uVar30 = 7;
          pfVar50 = pfVar42;
          goto code_r0x0001083fee34;
        }
        if (bVar105 == 0x45) {
          func_0x000108403624();
          uVar62 = func_0x000108403a20(0x2900ffffff);
          ppuVar44 = extraout_x8_04;
          goto code_r0x0001083fee0c;
        }
        goto LAB_1083ff778;
      }
    }
code_r0x0001083ff774:
    pfVar55 = (float *)0x0;
    goto LAB_1083ff778;
  case 5.60519e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) != 0) {
      func_0x000108403784();
      FUN_1083fda24();
      goto code_r0x0001083fecc4;
    }
    goto code_r0x0001083ff774;
  case 5.74532e-44:
    pfVar56 = *(float **)(pfVar52 + 4);
    uVar63 = 0x1083feb64;
    uVar62 = func_0x00010840365c();
    bVar28 = (uint)pfVar56 == 3;
    if (3 < (uint)pfVar56) goto code_r0x0001083ff7a0;
    ppuVar44 = (undefined **)((ulong)pfVar56 & 0xff);
    puVar40 = &UNK_10df26544;
    lVar48 = (ulong)*(byte *)((long)ppuVar44 + 0x10df26544) * 4 + 0x1083feb88;
    pfVar32 = pfVar56;
    pfVar26 = pfVar56;
    pfVar31 = pfVar52;
    pfVar57 = pfVar38;
    switch(ppuVar44) {
    case (undefined **)0x0:
code_r0x0001083feea4:
code_r0x0001083feea8:
      FUN_1083fa660();
      goto code_r0x0001083ff730;
    case (undefined **)0x1:
    case (undefined **)0x2:
    case (undefined **)0x4:
    case (undefined **)0x5:
    case (undefined **)0x14:
    case (undefined **)0x15:
    case (undefined **)0x7e:
    case (undefined **)0x7f:
    case (undefined **)0x80:
    case (undefined **)0x81:
    case (undefined **)0x92:
    case (undefined **)0x93:
    case (undefined **)0xa9:
    case (undefined **)0xcc:
    case (undefined **)0xcd:
    case (undefined **)0xce:
    case (undefined **)0xcf:
    case (undefined **)0xd6:
    case (undefined **)0xd7:
    case (undefined **)0xd9:
    case (undefined **)0xdb:
    case (undefined **)0xdf:
    case (undefined **)0xe1:
    case (undefined **)0xe3:
    case (undefined **)0xe5:
    case (undefined **)0xe9:
    case (undefined **)0xeb:
    case (undefined **)0xef:
    case (undefined **)0xf0:
    case (undefined **)0xf4:
    case (undefined **)0xf6:
    case (undefined **)0xfe:
    case (undefined **)0xf:
    case (undefined **)0x11:
    case (undefined **)0x13:
    case (undefined **)0x17:
    case (undefined **)0x27:
    case (undefined **)0x29:
    case (undefined **)0x2f:
    case (undefined **)0x33:
    case (undefined **)0x35:
    case (undefined **)0x3b:
    case (undefined **)0x3f:
    case (undefined **)0x8b:
    case (undefined **)0xc7:
    case (undefined **)0xdd:
    case (undefined **)0xe7:
    case (undefined **)0xed:
code_r0x0001083feb90:
      pfVar55 = (float *)0x1;
code_r0x0001083feb94:
code_r0x0001083feb98:
code_r0x0001083feec4:
      func_0x000108403910();
      goto LAB_1083ff778;
    case (undefined **)0x3:
      pfVar55 = (float *)0x1;
      goto code_r0x0001083feec4;
    default:
      goto code_r0x0001083feb90;
    case (undefined **)0xe:
      goto code_r0x0001083fed48;
    case (undefined **)0x10:
code_r0x0001083fed74:
      ppuVar44 = *(undefined ***)(pfVar52 + 0xc);
      pfVar55 = (float *)0x0;
code_r0x0001083fed78:
      iVar61 = (int)pfVar32;
      pfVar38 = (float *)*ppuVar44;
      pfVar52 = (float *)ppuVar44[1];
      iVar69 = (int)unaff_x24;
      ppuVar44 = (undefined **)(ulong)(iVar69 - 0x27U);
      if (iVar69 - 0x27U < 0x16) goto code_r0x0001083fed88;
      if (iVar69 - 0x11U < 8) {
        lVar48 = (ulong)*(ushort *)(&UNK_10df26548 + (ulong)(iVar69 - 0x11U) * 2) * 4 + 0x1083feee4;
        pfVar56 = pfVar32;
        goto code_r0x0001083feee0;
      }
      if (iVar69 == 0x53) {
        func_0x000108403c44();
        FUN_108401ae0();
        if (((iVar61 == 0) || (func_0x0001084035c4(), iVar61 == 0)) ||
           (func_0x000108403908(), iVar61 == 0)) goto code_r0x0001083ff774;
        pfVar55 = *(float **)(pfVar52 + 4);
        func_0x000108403634();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = pfVar55;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if ((int)pfVar55 != 0) {
          func_0x00010840359c();
          func_0x0001084037dc();
code_r0x0001083ff650:
          FUN_1083f9008();
        }
        goto LAB_1083ff778;
      }
      pfVar32 = param_1;
      if (iVar69 == 0x44) goto code_r0x0001083ff660;
      if (iVar69 != 0x46) {
        bVar28 = iVar69 == 8;
        goto code_r0x0001083fee70;
      }
      iVar61 = (int)*(undefined8 *)(pfVar38 + 4);
      func_0x000108403618();
      func_0x000108403c44();
      func_0x00010840371c();
      if ((iVar61 != 0) && (func_0x0001084035c4(), iVar61 != 0)) {
        func_0x000108403810();
        func_0x000108403878();
        func_0x0001083f91a8();
        FUN_1083fa660(param_1 + 0xc);
        pfVar55 = (float *)0x1;
        func_0x000108403ee0();
        func_0x000108403918();
        func_0x0001084038a8();
        func_0x000108403ee0();
        FUN_1083f9008();
        goto code_r0x0001083ff650;
      }
      goto code_r0x0001083ff774;
    case (undefined **)0x12:
      goto code_r0x0001083fed3c;
    case (undefined **)0x16:
    case (undefined **)0x42:
    case (undefined **)0x4a:
    case (undefined **)0x4e:
    case (undefined **)0x52:
    case (undefined **)0x54:
    case (undefined **)0x56:
    case (undefined **)0x58:
    case (undefined **)0x5c:
    case (undefined **)0x5e:
    case (undefined **)0x62:
    case (undefined **)0x66:
    case (undefined **)0x68:
    case (undefined **)0x6a:
    case (undefined **)0x6c:
    case (undefined **)0x6e:
    case (undefined **)0x70:
    case (undefined **)0x72:
    case (undefined **)0x78:
    case (undefined **)0x7a:
    case (undefined **)0x7c:
    case (undefined **)0x84:
    case (undefined **)0x88:
    case (undefined **)0x8c:
    case (undefined **)0x8e:
    case (undefined **)0x90:
    case (undefined **)0x98:
    case (undefined **)0x9a:
    case (undefined **)0x9c:
    case (undefined **)0xa0:
    case (undefined **)0xa2:
    case (undefined **)0xac:
    case (undefined **)0xb0:
    case (undefined **)0xb4:
    case (undefined **)0xb6:
    case (undefined **)0xb8:
    case (undefined **)0xba:
    case (undefined **)0xbe:
    case (undefined **)0xc0:
    case (undefined **)0xc2:
    case (undefined **)0xc4:
      goto code_r0x0001083fef04;
    case (undefined **)0x18:
    case (undefined **)0x1a:
    case (undefined **)0x1c:
    case (undefined **)0x1e:
    case (undefined **)0x20:
    case (undefined **)0x22:
    case (undefined **)0x24:
    case (undefined **)0x2a:
    case (undefined **)0x2c:
    case (undefined **)0x30:
    case (undefined **)0x36:
    case (undefined **)0x38:
    case (undefined **)0x3c:
      goto code_r0x0001083fed60;
    case (undefined **)0x26:
      goto code_r0x0001083fef1c;
    case (undefined **)0x28:
      goto code_r0x0001083feeec;
    case (undefined **)0x2e:
code_r0x0001083feee0:
      iVar61 = (int)pfVar56;
      switch(lVar48) {
      case 0x1083feee4:
        *(float **)((long)register0x00000008 + -0x80) = param_1;
        func_0x000108403dd8();
code_r0x0001083feeec:
        fVar92 = param_1[0x41];
        pfVar55 = (float *)(ulong)(uint)fVar92;
        *(float *)((long)register0x00000008 + -0x78) = SUB84(pfVar56,0);
        *(float *)((long)register0x00000008 + -0x74) = fVar92;
        pfVar52 = pfVar56;
code_r0x0001083feef8:
        if ((int)pfVar55 != (int)pfVar56) {
          func_0x000108403b44();
        }
code_r0x0001083fef04:
        func_0x000108403c44();
        func_0x00010840371c();
        if (((ulong)pfVar56 & 1) == 0) {
code_r0x0001083ff6f8:
          pfVar55 = (float *)0x0;
        }
        else {
          if (param_1[0x41] != SUB84(pfVar55,0)) {
code_r0x0001083fef1c:
            func_0x000108403920();
          }
code_r0x0001083fef20:
          func_0x000108403828();
          ppuVar44 = (undefined **)0x201;
code_r0x0001083fef28:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar44;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
code_r0x0001083fef34:
          fVar92 = param_1[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          bVar28 = fVar92 == SUB84(pfVar52,0);
          pfVar32 = pfVar56;
          pfVar42 = pfVar52;
          pfVar55 = (float *)(ulong)(uint)fVar92;
code_r0x0001083fef40:
          pfVar56 = pfVar55;
          if (!bVar28) {
            func_0x000108403b44();
          }
          func_0x000108403e24();
          func_0x0001084036b4();
          fVar92 = SUB84(pfVar56,0);
          if (param_1[0x41] != fVar92) {
            func_0x000108403920();
          }
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          if (fVar92 != SUB84(pfVar42,0)) {
            func_0x000108403b44();
          }
          func_0x0001084035c4();
code_r0x0001083fef74:
          if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6f8;
          if (param_1[0x41] != SUB84(pfVar56,0)) {
            func_0x000108403920();
          }
          func_0x000108403828();
code_r0x0001083fef8c:
          func_0x000108403e24();
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          pfVar52 = (float *)(ulong)(uint)param_1[0x41];
code_r0x0001083fefa0:
          *(float *)((long)register0x00000008 + -0x74) = SUB84(pfVar52,0);
          uVar29 = SUB84(pfVar52,0) == SUB84(pfVar42,0);
          if (!(bool)uVar29) {
            func_0x000108403b44();
          }
          ppuVar44 = (undefined **)0x201;
code_r0x0001083fefb4:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar44;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          func_0x000108403e44();
code_r0x0001083fefcc:
          if (!(bool)uVar29) {
            func_0x000108403e18();
          }
          func_0x000108403828();
          func_0x000108403b3c(param_1 + 0xc,0x170);
code_r0x0001083fefe4:
          fVar92 = param_1[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          uVar29 = fVar92 == SUB84(pfVar42,0);
          if (!(bool)uVar29) {
            func_0x000108403b44();
          }
code_r0x0001083feff8:
          func_0x0001083f9178(param_1 + 0xc,3);
          func_0x000108403e44();
          if (!(bool)uVar29) {
code_r0x0001083ff00c:
            func_0x000108403e18();
          }
          pfVar55 = (float *)0x1;
        }
        FUN_1083fcee8((float *)((long)register0x00000008 + -0x80));
        goto LAB_1083ff778;
      case 0x1083ff498:
        puVar40 = &UNK_10df26668;
        pfVar31 = pfVar52;
        break;
      case 0x1083ff4a4:
        func_0x000108403c44();
        FUN_108400bd4();
        if (iVar61 == 0) goto code_r0x0001083ff774;
        pfVar32 = *(float **)(pfVar38 + 4);
code_r0x0001083ff4bc:
        func_0x000108403618();
        func_0x000108401a54(param_1,pfVar32);
        goto code_r0x0001083ff730;
      case 0x1083ff4d0:
        func_0x000108403c44();
        func_0x00010840371c();
        if ((iVar61 == 0) || (func_0x0001084035c4(), iVar61 == 0)) goto code_r0x0001083ff774;
        func_0x000108403618(*(undefined8 *)(pfVar38 + 4));
        func_0x000108403b20();
        func_0x0001083f91a8();
        goto code_r0x0001083ff730;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0x32:
      goto code_r0x0001083fef34;
    case (undefined **)0x34:
      goto code_r0x0001083fef28;
    case (undefined **)0x3a:
      goto code_r0x0001083feef8;
    case (undefined **)0x3e:
      goto code_r0x0001083fef40;
    case (undefined **)0x40:
      goto code_r0x0001083fec34;
    case (undefined **)0x43:
    case (undefined **)0x4b:
    case (undefined **)0x4f:
    case (undefined **)0x53:
    case (undefined **)0x55:
    case (undefined **)0x57:
    case (undefined **)0x59:
    case (undefined **)0x5d:
    case (undefined **)0x5f:
    case (undefined **)0x63:
    case (undefined **)0x67:
    case (undefined **)0x69:
    case (undefined **)0x6b:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x73:
    case (undefined **)0x79:
    case (undefined **)0x7b:
    case (undefined **)0x7d:
    case (undefined **)0x85:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
    case (undefined **)0x99:
    case (undefined **)0x9b:
    case (undefined **)0x9d:
    case (undefined **)0xa1:
    case (undefined **)0xa3:
    case (undefined **)0xad:
    case (undefined **)0xb1:
    case (undefined **)0xb5:
    case (undefined **)0xb7:
    case (undefined **)0xb9:
    case (undefined **)0xbb:
    case (undefined **)0xbf:
    case (undefined **)0xc1:
    case (undefined **)0xc3:
    case (undefined **)0xc5:
      goto code_r0x0001083feb94;
    case (undefined **)0x44:
      goto code_r0x0001083fec28;
    case (undefined **)0x46:
      goto code_r0x0001083febd4;
    case (undefined **)0x48:
      goto code_r0x0001083febf0;
    case (undefined **)0x4c:
      goto code_r0x0001083fecec;
    case (undefined **)0x50:
      goto code_r0x0001083fed38;
    case (undefined **)0x5a:
    case (undefined **)0xdc:
    case (undefined **)0xec:
      goto code_r0x0001083fec4c;
    case (undefined **)0x60:
      goto code_r0x0001083febc8;
    case (undefined **)0x64:
      goto code_r0x0001083fed44;
    case (undefined **)0x74:
      goto code_r0x0001083fece0;
    case (undefined **)0x76:
      goto code_r0x0001083fecf8;
    case (undefined **)0x82:
      goto code_r0x0001083fed2c;
    case (undefined **)0x86:
    case (undefined **)0xd8:
      goto code_r0x0001083fecac;
    case (undefined **)0x8a:
    case (undefined **)0xc6:
code_r0x0001083fee0c:
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar62;
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar44 + 2;
      uVar63 = 0x3f91df46a0000000;
      pfVar32 = pfVar56;
code_r0x0001083ff1e0:
      *(float **)((long)register0x00000008 + -0x70) = pfVar32;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar63;
code_r0x0001083ff1e8:
      func_0x000108403790();
      FUN_108400bd4();
      pfVar55 = pfVar32;
      goto LAB_1083ff778;
    case (undefined **)0x94:
      goto code_r0x0001083fec78;
    case (undefined **)0x96:
      goto code_r0x0001083fec58;
    case (undefined **)0x9e:
code_r0x0001083fed1c:
      FUN_1083ffef4();
      goto code_r0x0001083fed24;
    case (undefined **)0xa4:
      goto code_r0x0001083fed04;
    case (undefined **)0xa6:
code_r0x0001083fec10:
      if ((int)ppuVar44 != 0xe) goto code_r0x0001083ff3d8;
    case (undefined **)0x6:
    case (undefined **)0x8:
    case (undefined **)0xa:
    case (undefined **)0xc:
      func_0x0001083f926c();
      func_0x000108403bec();
code_r0x0001083fec28:
      FUN_1083fae64(param_1 + 0xc,*pfVar42);
code_r0x0001083fec34:
code_r0x0001083ff3d8:
      func_0x000108403bec();
      goto code_r0x0001083ff730;
    case (undefined **)0xa8:
      goto code_r0x0001083fec40;
    case (undefined **)0xaa:
      goto code_r0x0001083fedcc;
    case (undefined **)0xae:
    case (undefined **)0xd2:
code_r0x0001083fed88:
      puVar40 = &UNK_10df26558;
      lVar48 = 0x1083feda0;
      pfVar31 = pfVar52;
      pfVar57 = pfVar38;
    case (undefined **)0xc8:
      pfVar38 = pfVar31;
      pfVar52 = pfVar31;
      switch(lVar48 + (ulong)*(ushort *)(puVar40 + (long)ppuVar44 * 2) * 4) {
      case 0x1083feda0:
        puVar40 = &UNK_10df266d8;
        pfVar52 = pfVar57;
        break;
      case 0x1083ff4f8:
        puVar40 = &UNK_10df266a8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff504:
        puVar40 = &UNK_10df266c8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff510:
        puVar40 = &UNK_10df26718;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff51c:
        puVar40 = &UNK_10df266c8;
        pfVar52 = pfVar57;
        break;
      case 0x1083ff534:
        puVar40 = &UNK_10df266d8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff540:
        puVar40 = &UNK_10df26708;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff54c:
        puVar40 = &UNK_10df266f8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff558:
        puVar40 = &UNK_10df26678;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0xb2:
code_r0x0001083fee70:
      pfVar56 = pfVar55;
      pfVar32 = param_1;
      pfVar55 = pfVar56;
      if (bVar28) {
code_r0x0001083fee7c:
        pfVar55 = pfVar56;
code_r0x0001083ff660:
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar31 = pfVar52;
        func_0x0001084038b0();
        *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
        *(float **)((long)register0x00000008 + -200) = pfVar42;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
        pfVar50 = pfVar32;
        func_0x00010840371c();
        if ((int)pfVar50 == 0) {
          return pfVar50;
        }
        FUN_108401ae0(pfVar32,pfVar31,*(undefined8 *)(pfVar38 + 4));
        if ((int)pfVar32 != 0) {
          func_0x0001084035e4();
          func_0x000108403b50();
          return (float *)0x1;
        }
        return pfVar32;
      }
      goto LAB_1083ff778;
    case (undefined **)0xbc:
      goto code_r0x0001083fedc0;
    case (undefined **)0xca:
code_r0x0001083fee90:
      if (bVar28) {
        func_0x0001083faec8();
      }
      else {
        func_0x0001083fae94();
      }
      goto code_r0x0001083ff730;
    case (undefined **)0xd0:
code_r0x0001083fedc8:
      ppuVar44 = *(undefined ***)(pfVar52 + 6);
code_r0x0001083fedcc:
      func_0x000108403618(ppuVar44[2]);
      func_0x000108403900();
      goto code_r0x0001083ff730;
    case (undefined **)0xd4:
    case (undefined **)0xe4:
      goto code_r0x0001083fedb0;
    case (undefined **)0xda:
      goto code_r0x0001083fec90;
    case (undefined **)0xde:
      goto code_r0x0001083febd0;
    case (undefined **)0xe0:
      goto code_r0x0001083fec6c;
    case (undefined **)0xe2:
      goto code_r0x0001083fecc4;
    case (undefined **)0xe6:
      goto code_r0x0001083fec50;
    case (undefined **)0xe8:
      goto code_r0x0001083fef20;
    case (undefined **)0xea:
      goto code_r0x0001083fee28;
    case (undefined **)0xee:
      goto code_r0x0001083febac;
    case (undefined **)0xf1:
      goto code_r0x0001083feba0;
    case (undefined **)0xf3:
      goto code_r0x0001083feb98;
    case (undefined **)0xf5:
    case (undefined **)0xf7:
    case (undefined **)0xf8:
    case (undefined **)0xf9:
    case (undefined **)0xfa:
    case (undefined **)0xfb:
    case (undefined **)0xfc:
    case (undefined **)0xfd:
    case (undefined **)0xff:
      goto code_r0x0001083feca0;
    }
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar50 = param_1;
    func_0x0001084038b0(param_1,puVar40,pfVar38,pfVar52);
    *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
    *(float **)((long)register0x00000008 + -200) = pfVar42;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar31;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    pfVar31 = pfVar50;
    func_0x00010840371c();
    if (((int)pfVar31 == 0) ||
       (FUN_108401ae0(pfVar50,pfVar52,*(undefined8 *)(pfVar38 + 4)), (int)pfVar50 == 0)) {
      return (float *)0x0;
    }
    plVar41 = *(long **)(pfVar38 + 4);
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    pfVar52 = *(float **)((long)register0x00000008 + -0xc0);
    param_1 = *(float **)((long)register0x00000008 + -0xb8);
    pfVar56 = *(float **)((long)register0x00000008 + -0xd0);
    pfVar42 = *(float **)((long)register0x00000008 + -200);
FUN_108400898:
    *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
    *(float **)((long)register0x00000008 + -200) = pfVar42;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    plVar33 = plVar41;
    FUN_10840082c(plVar41,puVar40);
    if ((int)plVar33 != 0x22d) {
      (**(code **)(*plVar41 + 0x80))(plVar41);
      func_0x000108403b50();
    }
    return (float *)(ulong)((int)plVar33 != 0x22d);
  case 6.16571e-44:
    if (((ulong)param_3 & 1) != 0) {
      func_0x000108403e04((float *)((long)register0x00000008 + -0xa0),param_1,
                          *(undefined8 *)(pfVar52 + 6));
      pfVar42 = *(float **)((long)register0x00000008 + -0xa0);
      if (pfVar42 == (float *)0x0) goto code_r0x0001083ff774;
code_r0x0001083fea28:
      func_0x000108403790();
      FUN_1083fda24();
      if (((ulong)pfVar32 & 1) == 0) {
code_r0x0001083ff6b4:
        pfVar56 = (float *)0x0;
      }
      else {
        func_0x000108403640();
        (*extraout_x8_01)();
        func_0x000108403810();
        func_0x000108403778();
        (**(code **)(extraout_x8_02 + 0x50))();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = pfVar32;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        if (*(char *)(pfVar52 + 8) == '!') {
          func_0x000108403908();
        }
        else {
          if (*(char *)(pfVar52 + 8) != ' ') goto code_r0x0001083ff7a0;
          func_0x000108403908();
        }
        iVar61 = (int)pfVar32;
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        func_0x000108403790();
        func_0x0001083fda64();
        if (iVar61 == 0) goto code_r0x0001083ff6b4;
        func_0x000108403640();
        (*extraout_x8_07)();
        func_0x000108403900();
        pfVar56 = (float *)0x1;
      }
      pcVar45 = *(code **)(*(long *)pfVar42 + 8);
      goto code_r0x0001083feccc;
    }
code_r0x0001083fee28:
    bVar105 = *(byte *)(pfVar52 + 8);
    pfVar42 = *(float **)(pfVar52 + 6);
    goto code_r0x0001083fee30;
  case 6.30584e-44:
    bVar105 = *(byte *)(pfVar52 + 6);
    pfVar42 = *(float **)(pfVar52 + 8);
code_r0x0001083fee30:
    uVar30 = (uint)bVar105;
    pfVar50 = pfVar52;
code_r0x0001083fee34:
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar38 = param_1;
    func_0x0001084038b0();
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = pfVar50;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    if ((uVar30 & 0xff) == 1) {
      func_0x0001084035c4();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      iVar61 = (int)*(undefined8 *)(pfVar42 + 4);
      func_0x000108403634();
      func_0x00010840365c();
      func_0x00010840359c();
      func_0x0001084037dc();
      if (iVar61 != 0) {
        FUN_1083f9ba0();
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x000108401ca4;
      }
    }
    else {
      if (uVar30 != 7) {
        if (uVar30 == 0x21) {
          fVar92 = pfVar42[2];
          pfVar50 = *(float **)(pfVar42 + 4);
          func_0x000108403634();
          func_0x000108403a20();
          *(float *)((long)register0x00000008 + -0xe8) = fVar92;
          *(float *)((long)register0x00000008 + -0xe4) = 5.74532e-44;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_34 + 0x10;
          uVar63 = 0xbff0000000000000;
code_r0x000108401c4c:
          *(float **)((long)register0x00000008 + -0xe0) = pfVar50;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar63;
          func_0x000108403784();
          FUN_108400bd4();
          return pfVar50;
        }
        if (uVar30 == 0x20) {
          pfVar50 = *(float **)(pfVar42 + 4);
          func_0x000108403634();
          uVar63 = func_0x000108403a20(0x2900ffffff);
          *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar63;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_33 + 0x10;
          uVar63 = 0x3ff0000000000000;
          goto code_r0x000108401c4c;
        }
        if (uVar30 != 0xb) {
          return (float *)0x0;
        }
      }
      func_0x0001084035c4();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      func_0x00010840359c();
      func_0x0001084037dc();
    }
    FUN_1083f9ba0();
    func_0x00010840359c();
    func_0x0001084037dc();
code_r0x000108401ca4:
    FUN_1083f9008();
    return (float *)0x1;
  case 6.5861e-44:
    pfVar56 = pfVar52 + 8;
code_r0x0001083fec40:
    FUN_1083fd9f0();
    pfVar55 = pfVar56;
code_r0x0001083fec4c:
    param_2 = *(float **)(pfVar52 + 6);
code_r0x0001083fec50:
    if ((int)pfVar56 == 0) {
code_r0x0001083fedac:
      func_0x000108403650();
code_r0x0001083fedb0:
      if ((int)pfVar56 == 0) goto code_r0x0001083ff774;
      uVar30 = 0;
      if (*(char *)(pfVar52 + 8) == '\0') {
        uVar30 = (uint)pfVar55;
      }
      ppuVar44 = (undefined **)(ulong)uVar30;
code_r0x0001083fedc0:
      if ((int)ppuVar44 == 1) goto code_r0x0001083fedc8;
      pfVar32 = *(float **)(*(long *)(pfVar52 + 6) + 0x10);
code_r0x0001083ff020:
      func_0x000108403618();
      FUN_1083f9ce0(param_1 + 0xc,pfVar32,pfVar52 + 8,*(undefined1 *)(pfVar52 + 9));
code_r0x0001083ff038:
      break;
    }
    ppuVar44 = (undefined **)(ulong)(uint)param_2[3];
code_r0x0001083fec58:
    if ((int)ppuVar44 != 0x32) goto code_r0x0001083fedac;
code_r0x0001083fec6c:
    goto code_r0x0001083fed68;
  case 6.72623e-44:
code_r0x0001083fec90:
    param_2 = *(float **)(pfVar52 + 6);
    param_3 = *(float **)(pfVar52 + 8);
    pfVar50 = *(float **)((long)register0x00000008 + -0x10);
    uVar63 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar56 = param_1;
code_r0x0001083feca0:
    func_0x0001084038b0();
code_r0x0001083fecac:
    *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
    *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
    *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = pfVar52;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar63;
    pfVar50 = param_2;
    FUN_1083d6c74();
    fVar92 = SUB84(pfVar50,0);
    if (fVar92 == 0.0) {
      func_0x000108403d64();
      pfVar38 = param_3;
      FUN_1083d64e8();
      pfVar31 = param_3;
      FUN_1083d6eb4();
      pfVar56[0x10] = (float)((int)pfVar56[0x10] + 1);
      fVar92 = SUB84(pfVar31,0);
      if ((((int)pfVar50 == 0) && ((int)pfVar38 == 0)) && (fVar92 != 0.0)) {
        FUN_108401ae0(pfVar56,param_2,*(undefined8 *)(param_3 + 4));
        iVar61 = (int)pfVar56;
        if (((iVar61 != 0) && (func_0x0001084035d4(), iVar61 != 0)) &&
           (func_0x0001084035c4(), iVar61 != 0)) {
          func_0x00010840359c();
          func_0x0001084037dc();
          func_0x0001083f9180();
          return (float *)0x1;
        }
        return (float *)0x0;
      }
      func_0x000108403c60();
      *(float **)((long)register0x00000008 + -0x110) = pfVar56;
      func_0x000108403dd8();
      fVar118 = pfVar56[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar92;
      *(float *)((long)register0x00000008 + -0x104) = fVar118;
      if (fVar118 != fVar92) {
        func_0x000108403920();
      }
      func_0x0001083fa1f4(pfVar56 + 0xc);
      pfVar38 = pfVar56;
      func_0x00010840371c(pfVar56,param_2);
      if (((ulong)pfVar38 & 1) != 0) {
        if (pfVar56[0x41] != fVar118) {
          pfVar56[0x41] = fVar118;
          pfVar56[0x12] = fVar118;
        }
        if (((ulong)pfVar50 & 1) == 0) {
          func_0x0001084035d4();
          if ((int)pfVar38 != 0) {
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            if (fVar118 != fVar92) {
              func_0x000108403920();
            }
            func_0x000108403d88();
            if (pfVar56[0x41] != fVar118) {
              func_0x000108403b44();
            }
            if (((ulong)pfVar31 & 1) == 0) {
              func_0x000108403cfc();
              func_0x0001083f98fc();
            }
            func_0x0001084035c4();
            if ((int)pfVar38 != 0) {
              func_0x000108403640();
              (*extraout_x8_32)();
              FUN_108400004(pfVar56 + 0xc,pfVar38);
              func_0x000108403cfc();
              func_0x0001083f9780();
              goto LAB_108401518;
            }
          }
        }
        else {
          *(float *)((long)register0x00000008 + -0x104) = fVar118;
          if (fVar118 != fVar92) {
            func_0x000108403920();
          }
          iVar61 = (int)pfVar38;
          func_0x000108403d88();
          if (pfVar56[0x41] != fVar118) {
            pfVar56[0x41] = fVar118;
            pfVar56[0x12] = fVar118;
          }
          func_0x0001084035c4();
          if (iVar61 != 0) {
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            if (fVar118 != fVar92) {
              func_0x000108403920();
            }
            pfVar50 = pfVar56 + 0xc;
            func_0x0001084002a8();
            if (pfVar56[0x41] != fVar118) {
              pfVar56[0x41] = fVar118;
              pfVar56[0x12] = fVar118;
            }
            func_0x0001084035d4();
            if ((int)pfVar50 != 0) {
              func_0x000108403640();
              (*extraout_x8_31)();
              FUN_108400004(pfVar56 + 0xc,pfVar50);
LAB_108401518:
              fVar118 = pfVar56[0x41];
              *(float *)((long)register0x00000008 + -0x104) = fVar118;
              uVar29 = fVar118 == fVar92;
              if (!(bool)uVar29) {
                func_0x000108403920();
              }
              func_0x0001084036e4();
              func_0x0001084002b0(pfVar56 + 0xc);
              func_0x000108403e44();
              if (!(bool)uVar29) {
                func_0x000108403e18();
              }
              func_0x000108403840();
              goto LAB_108401548;
            }
          }
        }
      }
    }
    else {
      fVar118 = pfVar56[0x10];
      pfVar56[0x10] = (float)((int)fVar118 + 2);
      *(float **)((long)register0x00000008 + -0x110) = pfVar56;
      func_0x000108403dd8();
      fVar157 = pfVar56[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar92;
      *(float *)((long)register0x00000008 + -0x104) = fVar157;
      if (fVar157 != fVar92) {
        func_0x000108403920();
      }
      pfVar50 = pfVar56;
      func_0x00010840371c(pfVar56,param_2);
      if (((ulong)pfVar50 & 1) != 0) {
        pfVar50 = pfVar56 + 0xc;
        FUN_1083f994c(pfVar50,0xffffffff,fVar118);
        iVar61 = (int)pfVar50;
        if (pfVar56[0x41] != fVar157) {
          pfVar56[0x41] = fVar157;
          pfVar56[0x12] = fVar157;
        }
        func_0x0001084035c4();
        if (iVar61 != 0) {
          pfVar50 = pfVar56 + 0xc;
          func_0x0001083f97f0(pfVar50,(int)fVar118 + 1);
          iVar61 = (int)pfVar50;
          func_0x000108403640();
          (*extraout_x8_30)();
          func_0x000108403900();
          func_0x000108403cfc();
          func_0x0001083f9780();
          func_0x0001084035d4();
          if (iVar61 != 0) {
            func_0x0001083f9780(pfVar56 + 0xc,(int)fVar118 + 1);
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            uVar29 = fVar118 == fVar92;
            if (!(bool)uVar29) {
              func_0x000108403920();
            }
            func_0x0001084036e4();
            func_0x000108403e44();
            if (!(bool)uVar29) {
              func_0x000108403e18();
            }
LAB_108401548:
            pfVar50 = (float *)0x1;
            goto LAB_108401554;
          }
        }
      }
    }
    pfVar50 = (float *)0x0;
LAB_108401554:
    FUN_1083fcee8((float *)((long)register0x00000008 + -0x110));
    return pfVar50;
  case 7.00649e-44:
    func_0x000108403778();
    func_0x000108403dd0();
    iVar61 = (int)pfVar56;
    if (((ulong)pfVar56 & 1) != 0) goto code_r0x0001083fe880;
    func_0x000108403778();
    func_0x000108403dc8();
    if (iVar61 != 0) goto code_r0x0001083fe880;
    goto code_r0x0001083fed5c;
  }
  goto code_r0x0001083ff730;
code_r0x0001083fe880:
  pfVar56 = pfVar52;
  FUN_1083c6784();
  param_3 = (float *)0x1;
  pfVar42 = pfVar56;
  if (pfVar56 != (float *)0x0) goto code_r0x0001083fe7fc;
  *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(pfVar52 + 6);
code_r0x0001083fed38:
  pfVar56 = param_1 + 0x50;
code_r0x0001083fed3c:
  FUN_1083d66f4();
code_r0x0001083fed44:
  if ((int)pfVar56 != 0) {
code_r0x0001083fed48:
    pfVar55 = *(float **)(pfVar52 + 6);
    FUN_1083f446c(pfVar55);
    func_0x000108403650();
    goto LAB_1083ff778;
  }
code_r0x0001083fed5c:
  func_0x00010840359c();
code_r0x0001083fed60:
  func_0x000108403784();
code_r0x0001083fed68:
  FUN_108401d78();
code_r0x0001083ff730:
  pfVar55 = (float *)0x1;
  goto LAB_1083ff778;
code_r0x0001083feb9c:
  param_2 = *(float **)(pfVar52 + 6);
code_r0x0001083feba0:
  param_3 = (float *)(ulong)*(byte *)(pfVar52 + 8);
  param_4 = *(float **)(pfVar52 + 10);
  pfVar26 = param_1;
code_r0x0001083febac:
  uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x0001084038b0();
  pfVar27 = (float *)((long)register0x00000008 + -0x130);
  *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
  *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
  *(float *)((long)register0x00000008 + -0xd0) = 0.0;
  *(float *)((long)register0x00000008 + -0xcc) = 0.0;
  *(float **)((long)register0x00000008 + -200) = pfVar52;
  *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
  *(float **)((long)register0x00000008 + -0xb8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
  pfVar42 = param_2;
  pfVar56 = param_4;
code_r0x000108400c0c:
  pfVar50 = pfVar42;
  do {
    pfVar42 = pfVar56;
    pfVar56 = pfVar50;
    uVar29 = SUB81(param_3,0);
    switch((ulong)param_3 & 0xff) {
    case 0:
    case 2:
    case 10:
    case 0xc:
    case 0xe:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
code_r0x000108400c6c:
      pfVar50 = pfVar56;
      FUN_1083c66cc(pfVar56,(float *)((long)register0x00000008 + -0x130));
      if (((int)pfVar50 == 0) ||
         (pfVar38 = pfVar42, param_2 = (float *)((long)register0x00000008 + -0x130), FUN_1083c66cc()
         , pfVar50 = pfVar42, (int)pfVar38 != 0)) {
code_r0x000108400d54:
        unaff_x27 = pfVar56 + 4;
        pfVar32 = *(float **)unaff_x27;
        pfVar57 = pfVar42 + 4;
        (**(code **)(*(long *)pfVar32 + 0x38))(pfVar32,*(undefined8 *)pfVar57);
        pfVar50 = (float *)((long)register0x00000008 + -0x130);
        if (((ulong)pfVar32 & 1) != 0) goto LAB_108400d74;
        pfVar52 = *(float **)unaff_x27;
        func_0x000108403634();
        func_0x00010840365c();
        pfVar32 = *(float **)pfVar57;
        func_0x000108403634();
        pfVar38 = param_3;
        goto code_r0x000108400dfc;
      }
      break;
    case 0x10:
    case 0x11:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
      plVar41 = *(long **)(pfVar56 + 4);
      (**(code **)(*plVar41 + 0xf0))();
      if (((ulong)plVar41 & 1) == 0) {
        plVar41 = *(long **)(pfVar56 + 4);
        (**(code **)(*plVar41 + 0xe0))();
        if ((int)plVar41 == 0) goto code_r0x000108400c6c;
      }
      FUN_1083fd5e0((float *)((long)register0x00000008 + -0x130),pfVar26,pfVar56,1);
      pfVar50 = (float *)((long)register0x00000008 + -0x110);
      FUN_1083fd5e0(pfVar50,pfVar26,pfVar42,1);
      pfVar52 = *(float **)((long)register0x00000008 + -0x130);
      lVar48 = *(long *)((long)register0x00000008 + -0x110);
      func_0x000108403784();
      FUN_1084009b0();
      if (lVar48 != 0) {
        func_0x000108403ba4();
      }
      goto LAB_10840120c;
    case 0x13:
      goto code_r0x000108400c90;
    case 0x15:
      param_3 = (float *)0x14;
      goto code_r0x000108400c0c;
    default:
      if (((uint)param_3 & 0xff) == 0x22) {
        param_1 = pfVar56;
        FUN_1083d64e8();
        if ((int)param_1 != 0) {
          func_0x00010840392c();
          iVar61 = (int)param_1;
          FUN_1083fe7bc();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          param_1 = *(float **)(pfVar56 + 4);
          func_0x000108403618();
          param_2 = param_1;
          func_0x000108403900();
        }
        func_0x000108403790();
        param_3 = (float *)0x1;
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xb8);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xd0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -200);
        unaff_x24 = *(ulong *)((long)register0x00000008 + -0xe0);
        unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0xd8);
        unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        unaff_x28 = *(float **)((long)register0x00000008 + -0x100);
        unaff_x27 = *(float **)((long)register0x00000008 + -0xf8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
        goto code_r0x0001083fe7bc;
      }
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x12:
    case 0x14:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
      goto code_r0x000108400d54;
    }
  } while( true );
code_r0x000108400c90:
  param_3 = (float *)0x12;
  goto code_r0x000108400c0c;
code_r0x0001084042f8:
  while( true ) {
    fVar118 = SUB84(param_3,0);
    fVar92 = SUB84((float *)((long)register0x00000008 + -0x110),0);
    pfVar38 = (float *)register0x00000008;
    func_0x00010838ed50();
    param_1 = (float *)((long)param_1 + -1);
    if (param_1 == (float *)0x0) break;
    uVar63 = *(undefined8 *)(pfVar42 + -1);
    fVar92 = *pfVar42;
    uVar62 = *(undefined8 *)pfVar52;
    *(float *)((long)register0x00000008 + 0x10) = (float)uVar63;
    *(float *)((long)register0x00000008 + 0x14) = -fVar92;
    func_0x000108404a80(uVar63,-fVar92,uVar62);
    *(undefined8 *)((long)register0x00000008 + 0x20) = extraout_var_17;
    *(undefined8 *)((long)register0x00000008 + 0x18) = extraout_d2_00;
    *(float *)((long)register0x00000008 + 0x28) = 0.0;
    *(float *)((long)register0x00000008 + 0x2c) = 0.0;
    *(float **)((long)register0x00000008 + 0x30) = pfVar56;
    param_3 = (float *)0x1;
    func_0x000108142084((float *)((long)register0x00000008 + 0x10),
                        (float *)((long)register0x00000008 + -0x10));
    *(float *)((long)register0x00000008 + -0x110) = extraout_s0;
    *(float *)((long)register0x00000008 + -0x10c) = extraout_s1;
    *(float *)((long)register0x00000008 + -0x108) = extraout_s2;
    *(float *)((long)register0x00000008 + -0x104) = extraout_s3;
    pfVar52 = pfVar52 + 2;
    pfVar42 = pfVar42 + 2;
  }
  func_0x000108404a6c(*(undefined8 *)((long)register0x00000008 + -0x68));
  if (!(bool)uVar29) {
    ___stack_chk_fail();
    FUN_1083a2cb4((float *)((long)register0x00000008 + 0x10));
    pfVar31 = (float *)((long)register0x00000008 + -0x110);
    func_0x0001083a261c();
    func_0x000108404a58();
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = pfVar38;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10840441c;
    if ((int)*pfVar31 < (int)fVar92) {
      *pfVar31 = fVar92;
      FUN_1084049cc(pfVar31 + 2,(long)(int)fVar92);
    }
    if ((int)pfVar31[4] < (int)fVar118) {
      pfVar31[4] = fVar118;
      FUN_1084049cc(pfVar31 + 6,(long)(int)fVar118);
    }
    pfVar31 = pfVar31 + 8;
    lVar48 = *(long *)((long)register0x00000008 + -0xc0);
    lVar43 = *(long *)((long)register0x00000008 + -0xb8);
    uVar63 = *(undefined8 *)pfVar31;
    *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
    *(float **)((long)register0x00000008 + -200) = pfVar42;
    *(long *)((long)register0x00000008 + -0xc0) = lVar48;
    *(long *)((long)register0x00000008 + -0xb8) = lVar43;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    func_0x000108341d9c(pfVar31,uVar63);
    for (lVar36 = *(long *)(pfVar31 + 2); lVar36 != lVar43; lVar36 = lVar36 + -0x60) {
      pfVar31 = (float *)(lVar36 + -0x18);
      func_0x0001081298a0(pfVar31);
    }
    *(long *)(lVar48 + 8) = lVar43;
    return pfVar31;
  }
  return pfVar38;
code_r0x00010841bf90:
  while (pfVar32 != (float *)0x0) {
    unaff_x28 = (float *)0x0;
    do {
      if (**(ulong **)((long)register0x00000008 + -0x30) != unaff_x24) {
        _objc_enumerationMutation(pfVar52);
      }
      pfVar56 = *(float **)(*(long *)((long)register0x00000008 + -0x38) + (long)unaff_x28 * 8);
      pfVar32 = pfVar56;
      func_0x00010c081660();
      if (((ulong)pfVar32 & 1) == 0) {
        pfVar38 = pfVar56;
        func_0x00010c268400();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x98) = &UNK_10df265ec;
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_10df26584;
        *(float **)((long)register0x00000008 + -0x80) = unaff_x27;
        *(float **)((long)register0x00000008 + -0x78) = pfVar56;
        *(ulong *)((long)register0x00000008 + -0x68) =
             CONCAT17(unaff_00005187,
                      CONCAT16(unaff_00005186,
                               CONCAT15(unaff_00005185,
                                        CONCAT14(unaff_00005184,
                                                 CONCAT13(unaff_00005183,
                                                          CONCAT12(unaff_00005182,
                                                                   CONCAT11(unaff_00005181,unaff_b12
                                                                           )))))));
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d10;
        *(ulong *)((long)register0x00000008 + -0x50) =
             CONCAT17(unaff_00005127,
                      CONCAT16(unaff_00005126,
                               CONCAT15(unaff_00005125,
                                        CONCAT14(unaff_00005124,
                                                 CONCAT13(unaff_00005123,
                                                          CONCAT12(unaff_00005122,
                                                                   CONCAT11(unaff_00005121,unaff_b9)
                                                                  ))))));
        *(ulong *)((long)register0x00000008 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
        _objc_retain(param_1);
        *(float **)((long)register0x00000008 + -0x70) = param_1;
        func_0x00010bf97ce0(pfVar38);
        _objc_release(pfVar38);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      unaff_x28 = (float *)((long)unaff_x28 + 1);
    } while (pfVar42 != unaff_x28);
    param_3 = (float *)((long)register0x00000008 + -0x40);
    pfVar32 = pfVar52;
    param_4 = (float *)register0x00000008;
    func_0x00010bf52a60();
    pfVar42 = pfVar32;
  }
LAB_10841bf94:
  _objc_release(pfVar52);
  pfVar32 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa0)) {
    return pfVar32;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x128) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x110) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x108) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
  *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(float **)((long)register0x00000008 + -0xd8) = pfVar38;
  *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
  *(float **)((long)register0x00000008 + -200) = pfVar42;
  *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
  *(float **)((long)register0x00000008 + -0xb8) = param_1;
  *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
  *(code **)((long)register0x00000008 + -0xa8) = FUN_10841bfec;
  *(undefined8 *)((long)register0x00000008 + -0x150) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pfVar50 = *(float **)(pfVar32 + 8);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  pfVar38 = pfVar50;
  param_1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pfVar42 = pfVar38;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pfVar38);
  _objc_release(pfVar50);
  if (pfVar42 != (float *)0x0) {
    pfVar50 = pfVar42;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    pfVar38 = pfVar50;
    func_0x00010c08fa60();
    _objc_release(pfVar50);
    if (pfVar38 != (float *)0x0) {
      *(float **)((long)register0x00000008 + -0x218) = param_2;
      *(float *)((long)register0x00000008 + -0x1e8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1ec) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1dc) = 0.0;
      *(float *)((long)register0x00000008 + -0x208) = 0.0;
      *(float *)((long)register0x00000008 + -0x204) = 0.0;
      *(float *)((long)register0x00000008 + -0x210) = 0.0;
      *(float *)((long)register0x00000008 + -0x20c) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f8) = 0.0;
      *(float *)((long)register0x00000008 + -500) = 0.0;
      *(float *)((long)register0x00000008 + -0x200) = 0.0;
      *(float *)((long)register0x00000008 + -0x1fc) = 0.0;
      _objc_retain(param_3);
      param_1 = (float *)((long)register0x00000008 + -0x210);
      param_4 = (float *)((long)register0x00000008 + -0x1d0);
      pfVar26 = param_3;
      func_0x00010bf52a60();
      if (pfVar26 != (float *)0x0) {
        lVar48 = **(long **)((long)register0x00000008 + -0x200);
        do {
          pfVar56 = (float *)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x200) != lVar48) {
              _objc_enumerationMutation(param_3);
            }
            uVar63 = *(undefined8 *)
                      (*(long *)((long)register0x00000008 + -0x208) + (long)pfVar56 * 8);
            auVar184 = func_0x00010c1281e0(*(undefined8 *)(pfVar32 + 8));
            unaff_s8 = auVar184._0_4_;
            unaff_00005104 = auVar184._4_4_;
            unaff_b9 = auVar184[8];
            unaff_00005121 = auVar184[9];
            unaff_00005122 = auVar184[10];
            unaff_00005123 = auVar184[0xb];
            unaff_00005124 = auVar184[0xc];
            unaff_00005125 = auVar184[0xd];
            unaff_00005126 = auVar184[0xe];
            unaff_00005127 = auVar184[0xf];
            unaff_d10 = func_0x00010bf34840(*(undefined8 *)(pfVar32 + 8));
            unaff_d11 = func_0x00010bf348c0(*(undefined8 *)(pfVar32 + 8));
            auVar185 = func_0x00010c23d0a0(uVar63);
            unaff_d13 = auVar185._8_8_;
            uVar29 = (undefined1)extraout_var_09;
            uVar143 = (undefined1)((ulong)extraout_var_09 >> 8);
            uVar144 = (undefined1)((ulong)extraout_var_09 >> 0x10);
            uVar145 = (undefined1)((ulong)extraout_var_09 >> 0x18);
            uVar146 = (undefined1)((ulong)extraout_var_09 >> 0x20);
            uVar147 = (undefined1)((ulong)extraout_var_09 >> 0x28);
            uVar148 = (undefined1)((ulong)extraout_var_09 >> 0x30);
            uVar149 = (undefined1)((ulong)extraout_var_09 >> 0x38);
            unaff_b12 = auVar185[0];
            unaff_00005181 = auVar185[1];
            unaff_00005182 = auVar185[2];
            unaff_00005183 = auVar185[3];
            unaff_00005184 = auVar185[4];
            unaff_00005185 = auVar185[5];
            unaff_00005186 = auVar185[6];
            unaff_00005187 = auVar185[7];
            auVar186 = func_0x00010bf345e0(uVar63);
            unaff_d15 = auVar186._8_8_;
            unaff_d14 = auVar186._0_8_;
            pfVar38 = *(float **)(pfVar32 + 8);
            uVar64 = func_0x00010c141a80();
            uVar72 = *(undefined8 *)(pfVar32 + 0xc);
            uVar78 = *(undefined8 *)(pfVar32 + 0xe);
            uVar63 = *(undefined8 *)(pfVar32 + 0x10);
            uVar62 = *(undefined8 *)(pfVar32 + 0x12);
            *(undefined8 *)((long)register0x00000008 + -0x220) = *(undefined8 *)(pfVar32 + 0x14);
            *(undefined8 *)((long)register0x00000008 + -0x228) = uVar62;
            *(undefined8 *)((long)register0x00000008 + -0x230) = uVar63;
            *(undefined8 *)((long)register0x00000008 + -0x240) = uVar72;
            *(undefined8 *)((long)register0x00000008 + -0x238) = uVar78;
            *(undefined8 *)((long)register0x00000008 + -0x248) = uVar64;
            *(float *)((long)register0x00000008 + -0x250) = 0.0;
            *(float *)((long)register0x00000008 + -0x24c) = 1.875;
            in_q4[9] = uVar143;
            in_q4[8] = uVar29;
            in_q4[10] = uVar144;
            in_q4[0xb] = uVar145;
            in_q4[0xc] = uVar146;
            in_q4[0xd] = uVar147;
            in_q4[0xe] = uVar148;
            in_q4[0xf] = uVar149;
            in_q4._0_8_ = auVar185._0_8_;
            FUN_10841b844(auVar184._0_8_,auVar184._8_8_,unaff_d10,unaff_d11,auVar185._0_8_,unaff_d13
                          ,unaff_d14,unaff_d15);
            _objc_retainAutoreleasedReturnValue();
            pfVar31 = pfVar38;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            dVar65 = (double)func_0x00010c2a5040();
            if (dVar65 <= 0.0) {
LAB_10841c2c0:
              _objc_release(pfVar31);
            }
            else {
              pfVar57 = pfVar38;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              dVar65 = (double)func_0x00010bfe0640();
              unaff_s8 = SUB84(dVar65,0);
              unaff_00005104 = (undefined4)((ulong)dVar65 >> 0x20);
              _objc_release(pfVar57);
              _objc_release(pfVar31);
              if (0.0 < dVar65) {
                pfVar31 = (float *)PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(pfVar31);
                pfVar50 = pfVar31;
                func_0x00010beedca0(pfVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(pfVar50);
                pfVar57 = pfVar42;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                pfVar50 = pfVar31;
                func_0x00010beedca0(pfVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(pfVar50);
                func_0x00010befa120(*(undefined8 *)(pfVar32 + 10));
                _objc_release(pfVar57);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(pfVar38);
            pfVar56 = (float *)((long)pfVar56 + 1);
          } while (pfVar26 != pfVar56);
          param_1 = (float *)((long)register0x00000008 + -0x210);
          param_4 = (float *)((long)register0x00000008 + -0x1d0);
          pfVar26 = param_3;
          func_0x00010bf52a60();
          pfVar50 = (float *)0x0;
        } while (pfVar26 != (float *)0x0);
      }
      _objc_release(param_3);
      param_2 = *(float **)((long)register0x00000008 + -0x218);
    }
  }
  _objc_release(pfVar42);
  _objc_release(param_3);
  pfVar42 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x150)) {
    return pfVar42;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x2d8) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x2d0) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x2c8) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x2b0) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x2a8) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x2a0) = pfVar57;
  *(float **)((long)register0x00000008 + -0x298) = pfVar31;
  *(float **)((long)register0x00000008 + -0x290) = pfVar38;
  *(float **)((long)register0x00000008 + -0x288) = pfVar50;
  *(float **)((long)register0x00000008 + -0x280) = pfVar56;
  *(float **)((long)register0x00000008 + -0x278) = pfVar32;
  *(float **)((long)register0x00000008 + -0x270) = param_3;
  *(float **)((long)register0x00000008 + -0x268) = param_2;
  *(float **)((long)register0x00000008 + -0x260) = (float *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -600) = FUN_10841c368;
  uVar63 = extraout_d2_02;
  uVar62 = extraout_d3_01;
  _objc_retain(param_1);
  _objc_retain(param_4);
  pfVar50 = param_4;
  func_0x00010c082fa0();
  if ((int)pfVar50 != 0) {
    pfVar50 = param_4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    pfVar38 = pfVar50;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pfVar38 != (float *)0x0) {
      pfVar38 = pfVar50;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      pfVar31 = pfVar38;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar31;
      func_0x00010c08fa60();
      _objc_release(pfVar31);
      if (pfVar57 != (float *)0x0) {
        puVar40 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        auVar184 = func_0x00010c128340(pfVar50);
        pfVar31 = pfVar50;
        auVar185 = func_0x00010c128320(pfVar50);
        *(undefined8 *)((long)register0x00000008 + -0x2f8) = uVar62;
        *(long *)((long)register0x00000008 + -0x2f0) = in_q4._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x308) = extraout_d1_02;
        *(undefined8 *)((long)register0x00000008 + -0x300) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0x310) = extraout_d0_00;
        *(float *)((long)register0x00000008 + -800) = 0.0;
        *(float *)((long)register0x00000008 + -0x31c) = 1.875;
        *(float *)((long)register0x00000008 + -0x318) = 0.0;
        *(float *)((long)register0x00000008 + -0x314) = 0.0;
        FUN_10841b844(auVar184._0_8_,auVar184._8_8_,auVar185._0_8_,auVar185._8_8_,0x3ff0000000000000
                      ,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        pfVar57 = pfVar31;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        dVar65 = (double)func_0x00010c2a5040();
        if (dVar65 <= 0.0) {
          _objc_release(pfVar57);
        }
        else {
          pfVar32 = pfVar31;
          func_0x00010c23d0a0(pfVar31);
          _objc_retainAutoreleasedReturnValue();
          dVar65 = (double)func_0x00010bfe0640();
          _objc_release(pfVar32);
          _objc_release(pfVar57);
          if (0.0 < dVar65) {
            func_0x00010c1695c0(puVar40);
            func_0x00010c21acc0(puVar40);
            puVar39 = puVar40;
            func_0x00010beedca0(puVar40);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar39);
            pfVar57 = pfVar38;
            func_0x00010c297e20(pfVar38);
            _objc_retainAutoreleasedReturnValue();
            puVar39 = puVar40;
            func_0x00010beedca0(puVar40);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar39);
            _objc_release(pfVar57);
            func_0x00010befa120(param_1);
          }
        }
        _objc_release(pfVar31);
        _objc_release(puVar40);
      }
      _objc_release(pfVar38);
    }
    _objc_release(pfVar50);
  }
  _objc_release(param_4);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return param_1;
  while( true ) {
    func_0x000108403650();
    lVar48 = lVar48 + -8;
    if (((ulong)pfVar56 & 1) == 0) break;
code_r0x0001083fe930:
    pfVar55 = (float *)(ulong)(lVar48 == 0);
    if (lVar48 == 0) break;
  }
LAB_1083ff778:
  func_0x0001084038b0(pfVar55,*(undefined8 *)((long)register0x00000008 + -8));
  return pfVar55;
code_r0x000108400dfc:
  param_3 = pfVar38;
  func_0x00010840365c();
  if ((int)pfVar52 != (int)pfVar32) {
    return (float *)0x0;
  }
  func_0x000108403890();
  func_0x000108403dd0();
  pfVar38 = pfVar57;
  if ((int)pfVar32 == 0) {
LAB_108400ec8:
    func_0x000108403890();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403890();
      (**(code **)(extraout_x8_16 + 0xd8))();
      pfVar50 = pfVar27;
      if ((int)pfVar32 != 0) goto LAB_108400ee4;
LAB_108400d74:
      pfVar27 = pfVar50;
      pfVar50 = (float *)0x0;
      pfVar38 = pfVar57;
      pfVar57 = unaff_x27;
    }
    else {
LAB_108400ee4:
      func_0x000108403884();
      func_0x000108403dd0();
      pfVar50 = pfVar32;
      pfVar57 = unaff_x27;
    }
    uVar30 = (uint)pfVar50;
    bVar28 = false;
    unaff_x27 = pfVar57;
  }
  else {
    func_0x000108403884();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403884();
      (**(code **)(extraout_x8_09 + 0xd8))();
      if (((ulong)pfVar32 & 1) == 0) goto LAB_108400ec8;
    }
    uVar30 = 0;
    bVar28 = true;
  }
  pfVar52 = (float *)0x0;
  pfVar57 = *(float **)pfVar57;
  if ((((uint)param_3 & 0xff) < 0x20) && ((1 << (ulong)((uint)param_3 & 0x1f) & 0xffc08000U) != 0))
  {
    pfVar50 = pfVar27;
    func_0x000108403e04(pfVar27,pfVar26,pfVar56);
    pfVar52 = *(float **)pfVar27;
    if (pfVar52 == (float *)0x0) {
      return (float *)0x0;
    }
    if (param_3 == (float *)0xf) {
      func_0x0001084035d4();
      if ((int)pfVar50 == 0) {
        pfVar26 = (float *)0x0;
      }
      else {
        func_0x000108403784();
        func_0x0001083fda64();
        pfVar26 = pfVar50;
      }
      goto LAB_108401210;
    }
    pfVar32 = (float *)((long)pfVar27 + 0x2f);
    FUN_1083cb2fc();
    *(char *)((long)pfVar27 + 0x2f) = (char)pfVar32;
    param_3 = pfVar32;
  }
  if (((uint)param_3 & 0xff) == 2) {
    func_0x000108403890();
    (**(code **)(extraout_x8_10 + 0xd8))();
    if ((int)pfVar32 == 0) {
LAB_108400efc:
      func_0x000108403890();
      (**(code **)(extraout_x8_17 + 0xd0))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_18 + 0xd8))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar61 = (int)pfVar32;
          (**(code **)(extraout_x8_19 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_20 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_21 + 0x68))();
          iVar69 = 1;
          goto LAB_108400fa8;
        }
      }
      func_0x000108403890();
      (**(code **)(extraout_x8_22 + 0xd8))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_23 + 0xd0))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar69 = (int)pfVar32;
          (**(code **)(extraout_x8_24 + 0x60))();
          func_0x000108403890();
          (**(code **)(extraout_x8_25 + 0x68))();
          func_0x000108403884();
          (**(code **)(extraout_x8_26 + 0x60))();
          iVar61 = 1;
          goto LAB_108400fa8;
        }
      }
      goto LAB_108400fe4;
    }
    func_0x000108403884();
    (**(code **)(extraout_x8_11 + 0xd8))();
    if ((int)pfVar32 == 0) goto LAB_108400efc;
    func_0x000108403890();
    iVar69 = (int)pfVar32;
    (**(code **)(extraout_x8_12 + 0x60))();
    func_0x000108403890();
    (**(code **)(extraout_x8_13 + 0x68))();
    iVar61 = iVar69;
    func_0x000108403884();
    (**(code **)(extraout_x8_14 + 0x60))();
    func_0x000108403884();
    (**(code **)(extraout_x8_15 + 0x68))();
LAB_108400fa8:
    pfVar26 = pfVar26 + 0xc;
    func_0x0001083f926c(pfVar26,iVar61 * iVar69);
    func_0x000108403784();
    FUN_108400974();
    if (((int)pfVar26 == 0) || (func_0x0001084035d4(), (int)pfVar26 == 0)) goto LAB_108401208;
    func_0x000108403cfc();
    func_0x0001083fa66c();
    goto LAB_1084011f8;
  }
LAB_108400fe4:
  if (((uVar30 & 1) == 0 && !bVar28) &&
     ((**(code **)(*(long *)pfVar57 + 0x38))(pfVar57,*(undefined8 *)pfVar38), pfVar32 = pfVar57,
     (int)pfVar57 == 0)) goto LAB_108401208;
  uVar54 = (uint)param_3 & 0xff;
  if (uVar54 != 9) {
    if ((uVar54 != 8) || (func_0x000108403d64(), (int)pfVar32 == 0)) goto LAB_1084010a0;
    uVar63 = *(undefined8 *)(pfVar42 + 4);
    pfVar27[2] = 2.3509886e-38;
    pfVar27[3] = 5.74532e-44;
    *(undefined ***)pfVar27 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar27 + 4) = uVar63;
    pfVar27[6] = 0.0;
    pfVar27[7] = 0.0;
    func_0x00010840392c();
    FUN_108401264();
    pfVar50 = pfVar32;
    goto LAB_10840120c;
  }
  func_0x000108403d64();
  if ((int)pfVar32 != 0) {
    uVar63 = *(undefined8 *)(pfVar42 + 4);
    pfVar27[2] = 2.3509886e-38;
    pfVar27[3] = 5.74532e-44;
    *(undefined ***)pfVar27 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar27 + 4) = uVar63;
    pfVar27[6] = 0.0;
    pfVar27[7] = 1.875;
    func_0x00010840392c();
    FUN_108401264();
    pfVar50 = pfVar32;
    goto LAB_10840120c;
  }
LAB_1084010a0:
  func_0x000108403784();
  FUN_108400974();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (bVar28) {
    pfVar32 = *(float **)pfVar38;
    func_0x000108403744();
    (*extraout_x8_27)();
    func_0x0001084038a8();
  }
  func_0x0001084035d4();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (uVar30 != 0) {
    pfVar32 = *(float **)unaff_x27;
    func_0x000108403744();
    (*extraout_x8_28)();
    func_0x0001084038a8();
  }
  pfVar50 = (float *)0x0;
  switch((ulong)param_3 & 0xff) {
  case 0:
    func_0x0001084036d8();
    break;
  case 1:
    func_0x0001084036d8();
    break;
  case 2:
    func_0x0001084036d8();
    break;
  case 3:
    func_0x0001084036d8();
    break;
  default:
    goto LAB_10840120c;
  case 8:
  case 0xc:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0xfb;
    goto code_r0x00010840116c;
  case 9:
  case 0xd:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0x100;
    goto code_r0x00010840116c;
  case 10:
  case 0xe:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0x106;
code_r0x00010840116c:
    pfVar26 = pfVar26 + 0xc;
    FUN_1083f9008(pfVar26,uVar63,pfVar32);
    goto LAB_1084011f8;
  case 0x10:
    func_0x0001084036d8();
    if (((ulong)pfVar32 & 1) != 0) {
code_r0x0001084011ac:
      func_0x000108403ce4();
      func_0x000108403a34();
      func_0x000108400988(pfVar26,(ulong)param_3 & 0xff,pfVar32);
      goto LAB_1084011f8;
    }
    goto LAB_108401208;
  case 0x11:
    func_0x0001084036d8();
    if ((int)pfVar32 != 0) goto code_r0x0001084011ac;
    goto LAB_108401208;
  case 0x12:
  case 0x13:
    func_0x0001084036d8();
    break;
  case 0x14:
  case 0x15:
    func_0x0001084036d8();
  }
  pfVar26 = pfVar32;
  if (((ulong)pfVar32 & 1) == 0) {
LAB_108401208:
    pfVar50 = (float *)0x0;
LAB_10840120c:
    pfVar26 = pfVar50;
    if (pfVar52 == (float *)0x0) {
      return pfVar50;
    }
  }
  else {
LAB_1084011f8:
    if (pfVar52 == (float *)0x0) {
      return (float *)0x1;
    }
    func_0x000108403784();
    func_0x0001083fda64();
  }
LAB_108401210:
  func_0x000108403868();
  (*extraout_x8_29)();
  return pfVar26;
}



/* Entry: 1083ff80c; end: 1083ff827;  */

bool FUN_1083ff80c(int param_1)

{
  FUN_1084022c0();
  return 1 < param_1;
}



/* Entry: 1083ff828; end: 1083ffef3;  */

ulong FUN_1083ff828(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [16];
  undefined1 uStack_78;
  
  func_0x0001084038d8();
  iVar7 = *(int *)(param_2 + 0xc);
  if (iVar7 != 0xc && iVar7 != 0x12) {
    param_2 = (ulong)*(uint *)(unaff_x20 + 8);
    func_0x0001084039dc();
    iVar7 = *(int *)(unaff_x20 + 0xc);
  }
  iVar3 = (int)param_1;
  uVar2 = iVar7 + -0xc == 0xc;
  uVar8 = 1;
  switch(iVar7 + -0xc) {
  case 0:
    if (*(int *)(unaff_x20 + 0x38) == 2) {
      func_0x0001084039dc();
      *(int *)(unaff_x19 + 0x2a) = (int)unaff_x19[0x2a] + 1;
    }
    else {
      param_1 = unaff_x19;
      FUN_1083fffa8();
      func_0x000108403de0();
    }
    lVar10 = (long)*(int *)(unaff_x20 + 0x30) << 3;
    do {
      if (lVar10 == 0) {
        if (*(int *)(unaff_x20 + 0x38) == 2) {
          *(int *)(unaff_x19 + 0x2a) = (int)unaff_x19[0x2a] + -1;
          return 1;
        }
        goto code_r0x0001083ffd88;
      }
      func_0x000108403838();
      lVar10 = lVar10 + -8;
    } while (((ulong)param_1 & 1) != 0);
    break;
  case 1:
    func_0x0001083f9898(unaff_x19 + 6,(int)unaff_x19[0x20]);
    FUN_1084001c4(unaff_x19 + 6);
    return 1;
  case 2:
    uVar6 = *(undefined4 *)(unaff_x19[0x1f] + 8);
    uVar5 = 0xee;
    goto code_r0x0001083ff9ac;
  case 4:
    lVar10 = unaff_x19[0x20];
    func_0x000108403b68();
    func_0x000108403be4();
    uVar8 = *(ulong *)(unaff_x20 + 0x10);
    FUN_1083d5a08();
    auStack_88[0] = 0;
    uStack_78 = 0;
    if ((uVar8 & 1) != 0) {
      FUN_1084001d4(auStack_88);
    }
    *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + 1;
    func_0x000108403990();
    func_0x0001083f9780();
    uVar8 = 0;
    FUN_1084001fc();
    func_0x000108403838();
    if ((uVar8 & 1) != 0) {
      iVar7 = (int)auStack_88;
      func_0x00010840024c();
      func_0x0001084039dc();
      func_0x000108403650();
      if (iVar7 != 0) {
        func_0x000108400298(unaff_x19 + 6);
        func_0x0001084036e4();
        func_0x000108403990();
        func_0x0001083f9830();
        func_0x0001084036f0();
        func_0x000108403d80();
        func_0x000108403840();
        uVar8 = 1;
        goto code_r0x0001083ffca4;
      }
    }
    uVar8 = 0;
code_r0x0001083ffca4:
    func_0x000108403c34();
    *(int *)(unaff_x19 + 0x20) = (int)lVar10;
    return uVar8;
  case 5:
    func_0x0001084039d0();
    if (iVar3 != 0) {
      func_0x000108403618(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10));
      func_0x000108403b20();
      goto code_r0x0001083ff990;
    }
    break;
  case 6:
    if ((*(long *)(unaff_x20 + 0x48) != 0) && (*(int *)(*(long *)(unaff_x20 + 0x48) + 0x18) == 0)) {
      return 1;
    }
    uVar8 = *(ulong *)(unaff_x20 + 0x40);
    FUN_1083d5a08();
    lVar10 = *(long *)(unaff_x20 + 0x48);
    plVar11 = unaff_x19;
    FUN_1083fffa8();
    func_0x000108403de0();
    iVar3 = (int)plVar11;
    iVar7 = (int)unaff_x19[8];
    if (((uVar8 & 0x10101) != 0) || (lVar10 == 0)) {
      *(int *)(unaff_x19 + 8) = iVar7 + 1;
      lVar10 = unaff_x19[0x20];
      *(int *)(unaff_x19 + 0x20) = iVar7;
      if (*(long *)(unaff_x20 + 0x28) == 0) {
        func_0x0001084039dc();
      }
      else {
        func_0x000108403838();
        if (((ulong)plVar11 & 1) == 0) {
          uVar8 = 0;
          goto code_r0x0001083ffe98;
        }
      }
      auStack_88[0] = 0;
      uStack_78 = 0;
      if ((uVar8 & 1) != 0) {
        FUN_1084001d4(auStack_88);
      }
      func_0x000108403c60();
      func_0x000108403be4();
      iVar7 = (int)unaff_x19[8];
      *(int *)(unaff_x19 + 8) = iVar7 + 2;
      func_0x000108403990();
      func_0x0001083f97f0();
      func_0x0001083f9780(unaff_x19 + 6,iVar7 + 1);
      uVar8 = 0;
      FUN_1084001fc();
      func_0x000108403838();
      if ((uVar8 & 1) == 0) {
code_r0x0001083ffe90:
        uVar8 = 0;
      }
      else {
        iVar3 = (int)auStack_88;
        func_0x00010840024c();
        func_0x0001084039dc();
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          func_0x0001084039d0();
          if (iVar3 == 0) goto code_r0x0001083ffe90;
          func_0x00010840370c(*(undefined8 *)(unaff_x20 + 0x38));
          (*extraout_x8)();
          func_0x000108403900();
        }
        func_0x000108403990();
        func_0x0001083f9780();
        if (*(long *)(unaff_x20 + 0x30) != 0) {
          func_0x000108403650();
          if (iVar3 == 0) goto code_r0x0001083ffe90;
          func_0x000108400298(unaff_x19 + 6);
          func_0x0001084036e4();
        }
        func_0x0001083f9830(unaff_x19 + 6,iVar7 + 1);
        func_0x0001084036f0();
        func_0x000108403d80();
        func_0x000108403840();
        func_0x000108403dec();
        func_0x000108400018();
        uVar8 = 1;
      }
      func_0x000108403c34();
code_r0x0001083ffe98:
      *(int *)(unaff_x19 + 0x20) = (int)lVar10;
      return uVar8;
    }
    *(int *)(unaff_x19 + 8) = iVar7 + 2;
    func_0x000108403878();
    func_0x0001083f98fc();
    func_0x000108403838();
    if (iVar3 != 0) {
      func_0x000108403990();
      func_0x0001083f9780();
      func_0x000108403838();
      if (iVar3 != 0) {
        func_0x0001084039dc();
        if (*(int *)(*(long *)(unaff_x20 + 0x48) + 0x18) < 2) {
code_r0x0001083ffab0:
          func_0x0001084036f0();
code_r0x0001083ffd88:
          func_0x000108403dec();
          func_0x000108400018();
          return 1;
        }
        func_0x0001084039d0();
        if (iVar3 != 0) {
          iVar3 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
          func_0x000108403618();
          func_0x000108403900();
          func_0x000108403650();
          if (iVar3 != 0) {
            FUN_1083f994c(unaff_x19 + 6,0,iVar7 + 1);
            func_0x0001084036e4();
            goto code_r0x0001083ffab0;
          }
        }
      }
    }
    break;
  case 7:
    iVar7 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    FUN_1083d6c74();
    if (iVar7 == 0) {
      func_0x000108403c60();
      iVar7 = (int)unaff_x19 + 0x30;
      func_0x0001083fa1f4();
      func_0x000108403650();
      if (iVar7 != 0) {
        func_0x000108403d88();
        func_0x000108403838();
        if (iVar7 != 0) {
          if (*(long *)(unaff_x20 + 0x20) == 0) {
code_r0x0001083ffd40:
            func_0x0001084036e4();
            func_0x0001084002b0(unaff_x19 + 6);
            func_0x000108403840();
            return 1;
          }
          iVar7 = (int)unaff_x19 + 0x30;
          func_0x0001084002a8();
          func_0x000108403838();
          if (iVar7 != 0) goto code_r0x0001083ffd40;
        }
      }
    }
    else {
      lVar10 = unaff_x19[8];
      *(int *)(unaff_x19 + 8) = (int)lVar10 + 2;
      func_0x000108403650();
      if (iVar7 != 0) {
        plVar11 = unaff_x19 + 6;
        FUN_1083f994c(plVar11,0xffffffff,(int)lVar10);
        iVar7 = (int)plVar11;
        func_0x000108403838();
        if (iVar7 != 0) {
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            func_0x000108403990();
            func_0x0001083f97f0();
            func_0x0001084036f0();
            func_0x000108403838();
            if (iVar7 == 0) break;
          }
          func_0x0001084036f0();
          func_0x0001084038cc();
code_r0x0001083ff990:
          FUN_1083f9178();
          return 1;
        }
      }
    }
    break;
  case 8:
    goto code_r0x0001083ffd58;
  case 9:
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x000108403650();
      if (iVar3 == 0) break;
      func_0x000108403938();
      if (((iVar3 != 0) && (FUN_1083f9f5c(unaff_x19 + 6,unaff_x19[0x1e]), unaff_x19[10] != 0)) &&
         (func_0x000108403e38(), (bool)uVar2)) {
        func_0x000108403b2c();
      }
    }
    if (*(int *)((long)unaff_x19 + 0x44) < 1) {
      return 1;
    }
    plVar11 = unaff_x19;
    FUN_1083ff80c();
    if ((int)plVar11 == 0) {
      return 1;
    }
    uVar5 = 0xf1;
    uVar6 = 0;
code_r0x0001083ff9ac:
    func_0x000108403608(unaff_x19 + 6,uVar5,0xffffffffffffffff,uVar6);
    return 1;
  case 10:
    lVar9 = *(long *)(unaff_x20 + 0x18);
    lVar10 = unaff_x19[0x20];
    func_0x000108403b68();
    func_0x000108403be4();
    func_0x000108403650();
    if (((ulong)param_1 & 1) == 0) {
code_r0x0001083ffc94:
      uVar8 = 0;
    }
    else {
      func_0x000108403be4();
      FUN_1084001c4(unaff_x19 + 6);
      plVar11 = *(long **)(lVar9 + 0x28);
      for (lVar12 = (long)*(int *)(lVar9 + 0x30) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
        *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + 1;
        lVar13 = *plVar11;
        if (*(char *)(lVar13 + 0x10) == '\x01') {
          if (*(int *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1083ffea4);
            (*pcVar1)();
          }
          if (lVar13 != *(long *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(lVar9 + 0x30) * 8 + -8))
          goto code_r0x0001083ffc94;
          plVar4 = unaff_x19 + 6;
          FUN_1084002ec();
          func_0x0001084039e4();
          func_0x0001083f98fc();
          func_0x000108403838();
          if (((ulong)plVar4 & 1) == 0) goto code_r0x0001083ffc94;
        }
        else {
          plVar4 = unaff_x19 + 6;
          func_0x000108403608(plVar4,0xed,0xffffffffffffffff,*(undefined4 *)(lVar13 + 0x18));
          iVar7 = (int)plVar4;
          func_0x0001084039e4();
          func_0x0001083f98fc();
          func_0x000108403838();
          if (iVar7 == 0) goto code_r0x0001083ffc94;
        }
        func_0x0001084039e4();
        func_0x0001083f9780();
        plVar11 = plVar11 + 1;
      }
      func_0x000108403900();
      func_0x0001084036f0();
      func_0x000108403d80();
      func_0x000108403840();
      uVar8 = 1;
    }
    *(int *)(unaff_x19 + 0x20) = (int)lVar10;
    return uVar8;
  case 0xc:
    func_0x000108403784();
    func_0x0001084038d8();
    func_0x000108403c8c();
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (uVar8 == 0) {
      func_0x000108403ab8(0,*(undefined8 *)(unaff_x20 + 0x10));
      FUN_1083fa28c(unaff_x19 + 6,uVar8);
      if ((unaff_x19[10] != 0) && (func_0x000108403e38(), (bool)uVar2)) {
        func_0x000108403b2c();
      }
    }
    else {
      if ((unaff_x19[10] == 0) || ((*(byte *)(unaff_x19 + 0xb) & 1) == 0)) {
        func_0x0001083c6674();
        uVar8 = *(ulong *)(*unaff_x19 + 0x20);
        iVar7 = (int)*(undefined8 *)(unaff_x20 + 0x10);
        FUN_1083d70ac();
        uVar2 = iVar7 == 1;
        if ((bool)uVar2) {
          func_0x000108403dbc();
          if ((uVar8 & 1) != 0) {
            func_0x0001083d69e0(unaff_x19 + 0x28,*(undefined8 *)(unaff_x20 + 0x10));
            uVar8 = 0;
            plVar11 = unaff_x19;
            FUN_10840038c(unaff_x19);
            if ((uVar8 & 1) == 0) {
              plVar11 = unaff_x19 + 0x16;
              FUN_1083fd544(plVar11,*(undefined8 *)(unaff_x20 + 0x10));
              FUN_108400650(unaff_x19,&stack0xffffffffffffffb8,plVar11);
            }
            else {
              FUN_1083fd3f4(unaff_x19 + 0x16,*(undefined8 *)(unaff_x20 + 0x10),plVar11);
            }
            func_0x000108403ab0();
            goto LAB_108400188;
          }
          func_0x000108403ab0();
        }
      }
      func_0x000108403650();
      if ((int)uVar8 == 0) goto LAB_10840018c;
      func_0x000108403ab8();
      func_0x0001083fe76c(unaff_x19,uVar8);
    }
LAB_108400188:
    uVar8 = 1;
LAB_10840018c:
    func_0x0001084039b0(extraout_x8_00);
    if ((bool)uVar2) {
      return uVar8;
    }
    ___stack_chk_fail();
    func_0x000108403ab0();
    func_0x0001084037d4();
    FUN_1083f8ee0();
    return uVar8;
  }
  uVar8 = 0;
code_r0x0001083ffd58:
  return uVar8;
}



/* Entry: 1083ffef4; end: 1083ffefb;  */

void FUN_1083ffef4(int *param_1,ulong param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int extraout_w8;
  int extraout_w9;
  int iVar5;
  
  piVar2 = param_1;
  func_0x0001083fcb94();
  iVar5 = (int)(param_2 >> 0x20);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 0x211)) ||
     (func_0x0001083fcbb4(), extraout_w9 != (int)param_2)) {
    if (0 < iVar5) {
      piVar2 = param_1;
      func_0x0001083fcb48(param_1,0x211,param_2 | 0xffffffff00000000,param_2 >> 0x20);
    }
  }
  else {
    piVar2[3] = extraout_w8 + iVar5;
  }
  if (2 < param_1[2]) {
    func_0x0001083fcb88();
    piVar3 = piVar2;
    func_0x0001083fcc30();
    FUN_1083f8f50();
    piVar4 = piVar3;
    func_0x0001083fcdfc();
    if (((((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) &&
         ((piVar4 != (int *)0x0 && ((*piVar2 == 0x211 && (*piVar3 == 0x21c)))))) &&
        (piVar3[3] == piVar2[3])) &&
       (((*piVar4 - 0x215U < 2 && (piVar4[1] == piVar2[1])) && (piVar4[3] == piVar2[3])))) {
      iVar5 = param_1[2];
      if ((iVar5 == 1) || (iVar5 == 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083f9ac4);
        (*pcVar1)();
      }
      param_1[2] = iVar5 + -2;
    }
  }
  return;
}



/* Entry: 1083ffefc; end: 1083fff23;  */

long FUN_1083ffefc(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108403a2c();
  }
  return param_1;
}



/* Entry: 1083fff24; end: 1083fffa7;  */

void FUN_1083fff24(long param_1,uint3 param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (((*(long *)(param_1 + 0x50) != 0) &&
      (*(char *)(param_1 + 0x58) == '\x01' && param_2 != 0xffffff)) &&
     (*(int *)(param_1 + 0x150) == 0)) {
    piVar2 = *(int **)(param_1 + 0x158);
    uVar3 = (long)*(int *)(param_1 + 0x160);
    while (uVar3 != 0) {
      uVar4 = uVar3 >> 1;
      uVar1 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
      uVar3 = uVar4;
      if (piVar2[uVar4] <= (int)((uint)param_2 << 8) >> 8) {
        piVar2 = piVar2 + uVar4 + 1;
        uVar3 = uVar1;
      }
    }
    uStack_24 = *(undefined4 *)(param_1 + 0xd8);
    uStack_30 = 0x200;
    uStack_2c = 0xffffffff;
    uStack_28 = 0xffffffff;
    uStack_20 = (undefined4)((ulong)((long)piVar2 - (long)*(int **)(param_1 + 0x158)) >> 2);
    uStack_1c = 0;
    uStack_14 = *(undefined4 *)(param_1 + 0x48);
    uStack_18 = 0;
    FUN_1083f8ee0(param_1 + 0x30,&uStack_30);
    return;
  }
  return;
}



/* Entry: 1083fffa8; end: 108400003;  */

void FUN_1083fffa8(long param_1)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(char *)(param_1 + 0x58) == '\x01')) {
    func_0x000108403910(param_1 + 0x30,0);
    func_0x0001083fcf64(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),1);
    func_0x0001084038cc();
    FUN_1083f8ee0();
    return;
  }
  return;
}



/* Entry: 108400004; end: 10840006b;  */

void FUN_108400004(long param_1,undefined4 param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = 0x21e;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_24 = param_2;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 10840006c; end: 1084001c3;  */

void FUN_10840006c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_88 [64];
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001084038d8();
  func_0x000108403c8c();
  uVar1 = *(ulong *)(param_2 + 0x28);
  uStack_38 = extraout_x8;
  if (uVar1 == 0) {
    func_0x000108403ab8(0,*(undefined8 *)(unaff_x20 + 0x10));
    FUN_1083fa28c(unaff_x19 + 6,uVar1);
    if ((unaff_x19[10] != 0) && (func_0x000108403e38(), (bool)in_ZR)) {
      func_0x000108403b2c();
    }
  }
  else {
    if ((unaff_x19[10] == 0) || ((*(byte *)(unaff_x19 + 0xb) & 1) == 0)) {
      func_0x0001083c6674();
      uVar1 = *(ulong *)(*unaff_x19 + 0x20);
      iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
      FUN_1083d70ac();
      in_ZR = iVar3 == 1;
      if ((bool)in_ZR) {
        puStack_48 = auStack_88;
        uStack_40 = 0x2000000000;
        func_0x000108403dbc();
        if ((uVar1 & 1) != 0) {
          func_0x0001083d69e0(unaff_x19 + 0x28,*(undefined8 *)(unaff_x20 + 0x10));
          uVar1 = 0;
          plVar2 = unaff_x19;
          FUN_10840038c();
          if ((uVar1 & 1) == 0) {
            FUN_1083fd544(unaff_x19 + 0x16,*(undefined8 *)(unaff_x20 + 0x10));
            FUN_108400650();
          }
          else {
            FUN_1083fd3f4(unaff_x19 + 0x16,*(undefined8 *)(unaff_x20 + 0x10),plVar2);
          }
          func_0x000108403ab0();
          goto LAB_10840018c;
        }
        func_0x000108403ab0();
      }
    }
    iVar3 = (int)uVar1;
    func_0x000108403650();
    if (iVar3 != 0) {
      func_0x000108403ab8();
      func_0x0001083fe76c();
    }
  }
LAB_10840018c:
  func_0x0001084039b0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108403ab0();
    func_0x0001084037d4();
    FUN_1083f8ee0();
    return;
  }
  return;
}



/* Entry: 1084001c4; end: 1084001d3;  */

void FUN_1084001c4(long param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = 0xea;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1084001d4; end: 1084001fb;  */

void FUN_1084001d4(long param_1)

{
  FUN_10840226c(param_1,param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf8);
  *(long *)(*(long *)(param_1 + 0x18) + 0xf8) = param_1;
  return;
}



/* Entry: 1084001fc; end: 108400297;  */

void FUN_1084001fc(undefined8 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(char *)(param_1 + 2) == '\x01';
  if ((bool)uVar1) {
    FUN_1083fcf3c();
    func_0x000108403910(param_1[3] + 0x30,0);
    func_0x000108403a14(*param_1);
    if (!(bool)uVar1) {
      func_0x000108403c80();
    }
  }
  return;
}



/* Entry: 108400298; end: 1084002b7;  */

void FUN_108400298(long param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = 0xec;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1084002b8; end: 1084002eb;  */

bool FUN_1084002b8(long param_1)

{
  if ((*(long *)(param_1 + 0x50) != 0) && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    return true;
  }
  FUN_1084022c0();
  return 0 < (int)param_1;
}



/* Entry: 1084002ec; end: 1084002f3;  */

void FUN_1084002ec(long param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = 0x223;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1084002f4; end: 10840038b;  */

void FUN_1084002f4(long *param_1)

{
  ulong uVar1;
  ulong unaff_x20;
  long *plVar2;
  
  func_0x00010840389c();
  (**(code **)(*param_1 + 0x20))();
  if ((int)param_1 != 0) {
    func_0x00010840359c();
    FUN_1081f8444();
    plVar2 = (long *)0x0;
    while ((param_1 != plVar2 && (uVar1 = unaff_x20, FUN_108401594(), uVar1 >> 0x20 != 0))) {
      FUN_1083fc57c();
      plVar2 = (long *)((long)plVar2 + 1);
    }
  }
  return;
}



/* Entry: 10840038c; end: 10840064f;  */

undefined1  [16] FUN_10840038c(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x10;
  int extraout_w11;
  int iVar9;
  uint uVar10;
  long unaff_x19;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  uint uStack_fc;
  undefined1 auStack_f8 [128];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001084038d8();
  func_0x000108403c8c();
  uStack_70 = 0x2000000000;
  uVar10 = *(uint *)(param_2 + 8);
  uVar8 = (ulong)uVar10;
  uVar5 = uVar10 == 0x11;
  puStack_78 = auStack_f8;
  uStack_68 = extraout_x8;
  if (0x10 < (int)uVar10) {
    uVar6 = 0;
    FUN_108403558(0x3ff0000000000000,0);
    FUN_10840351c(&puStack_78,uVar6,uVar8);
    uVar8 = (ulong)*(uint *)(unaff_x20 + 1);
  }
  lVar12 = *unaff_x20;
  for (uVar8 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2; uVar8 != 0; uVar8 = uVar8 - 4) {
    lVar16 = unaff_x19 + 0x130;
    FUN_108401654(lVar16,lVar12);
    if (lVar16 == 0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar8 = 0;
      goto LAB_1084005f4;
    }
    uVar11 = uStack_70 & 0xffffffff;
    uVar5 = (uint)uStack_70 == uStack_70._4_4_ >> 1;
    if ((int)(uint)uStack_70 < (int)(uStack_70._4_4_ >> 1)) {
      *(long *)(puStack_78 + (long)(int)(uint)uStack_70 * 8) = lVar16;
    }
    else {
      uVar6 = 1;
      FUN_108403558(0x3ff8000000000000,uVar11,1);
      *(long *)(uVar11 + (long)(int)(uint)uStack_70 * 8) = lVar16;
      FUN_10840351c(&puStack_78,uVar11,uVar6);
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 + 1);
    lVar12 = lVar12 + 4;
  }
  uVar11 = 0;
  iVar9 = 0x7fffffff;
  for (uVar8 = 0; uVar10 = (uint)uVar11,
      ((uint)uStack_70 & ((int)(uint)uStack_70 >> 0x1f ^ 0xffffffffU)) != uVar8; uVar8 = uVar8 + 1)
  {
    uVar2 = (uint)uVar8;
    iVar3 = **(int **)(puStack_78 + uVar8 * 8);
    if (iVar9 <= **(int **)(puStack_78 + uVar8 * 8)) {
      uVar2 = uVar10;
      iVar3 = iVar9;
    }
    iVar9 = iVar3;
    uVar11 = (ulong)uVar2;
  }
  if ((int)uVar10 < (int)(uint)uStack_70) {
    uVar15 = 0;
    uVar13 = *(ulong *)(puStack_78 + uVar11 * 8);
    uVar2 = *(uint *)(uVar13 + 4);
    for (lVar12 = 0;
        (uVar8 = (ulong)uVar2, (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar12 &&
        (uVar8 = uVar15, *(int *)(*(long *)(uVar13 + 8) + lVar12) == 0)); lVar12 = lVar12 + 8) {
      uVar15 = (ulong)((int)uVar15 + 1);
    }
LAB_108400504:
    uVar14 = (uint)uVar8;
    uVar5 = uVar14 == uVar2;
    if (!(bool)uVar5) {
      lVar12 = 0;
      lVar16 = (long)(int)uVar14;
      uVar14 = *(int *)(*(long *)(uVar13 + 8) + (long)(int)uVar14 * 8 + 4) - uVar10;
      while( true ) {
        uVar5 = lVar12 == (int)(uint)uStack_70;
        if ((int)(uint)uStack_70 <= lVar12) {
          uVar8 = CONCAT44((uint)uStack_70,uVar14) & 0xffffffffffffff00;
          uVar13 = (ulong)(uVar14 & 0xff);
          uVar11 = 1;
          goto LAB_1084005f4;
        }
        lVar17 = *(long *)(puStack_78 + lVar12 * 8);
        uStack_fc = uVar14 + (int)lVar12;
        puVar7 = &uStack_fc;
        FUN_10831be00();
        func_0x000108403b14(*(undefined4 *)(lVar17 + 4));
        uVar15 = (ulong)uStack_fc;
        uVar6 = extraout_x9;
        if ((extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU)) == 0) break;
        while( true ) {
          piVar1 = (int *)(*(long *)(lVar17 + 8) + (long)(int)uVar6 * 8);
          iVar9 = *piVar1;
          if (iVar9 == 0) goto LAB_108400598;
          if (((int)puVar7 == iVar9) && ((int)uVar15 == piVar1[1])) break;
          func_0x000108403eb8();
          uVar6 = extraout_x9_00;
          uVar15 = extraout_x10;
          if (extraout_w11 == 1) goto LAB_108400598;
        }
        lVar12 = lVar12 + 1;
      }
LAB_108400598:
      lVar12 = lVar16 * 8;
      uVar15 = uVar8;
      do {
        lVar16 = lVar16 + 1;
        lVar12 = lVar12 + 8;
        uVar8 = (ulong)*(uint *)(uVar13 + 4);
        if ((int)*(uint *)(uVar13 + 4) <= lVar16) break;
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar8 = uVar15;
      } while (*(int *)(*(long *)(uVar13 + 8) + lVar12) == 0);
      goto LAB_108400504;
    }
    func_0x000108403c9c();
LAB_1084005f4:
    func_0x0001084025d0(&puStack_78);
    func_0x0001084039b0(uStack_68);
    if ((bool)uVar5) {
      auVar18._0_8_ = uVar8 | uVar13;
      auVar18._8_8_ = uVar11;
      return auVar18;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108400638);
  (*pcVar4)();
}



/* Entry: 108400650; end: 10840082b;  */

void FUN_108400650(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  func_0x00010840389c();
  uVar8 = 0;
  uVar3 = (uint)(param_3 >> 0x20);
  while( true ) {
    if (uVar8 == (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) {
      return;
    }
    if ((long)(int)unaff_x19[1] <= (long)uVar8) break;
    uStack_94 = *(undefined4 *)(*unaff_x19 + uVar8 * 4);
    func_0x000108403608(unaff_x20 + 0x30,0x219,param_3 | 0xffffffff00000000);
    lVar6 = unaff_x20 + 0x130;
    FUN_108401654(lVar6,&uStack_94);
    if (lVar6 == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      auStack_80[0] = uStack_94;
      FUN_1084034d4(auStack_78,&uStack_90);
      uVar1 = *(uint *)(unaff_x20 + 0x134);
      if ((int)(uVar1 * 3) <= *(int *)(unaff_x20 + 0x130) * 4) {
        uVar2 = uVar1 << 1;
        if ((int)uVar1 < 1) {
          uVar2 = 4;
        }
        *(undefined4 *)(unaff_x20 + 0x130) = 0;
        *(uint *)(unaff_x20 + 0x134) = uVar2;
        lStack_68 = *(long *)(unaff_x20 + 0x138);
        *(undefined8 *)(unaff_x20 + 0x138) = 0;
        puVar5 = (undefined8 *)(((ulong)(uVar2 >> 1) & 0x3fffffff) << 6 | 0x10);
        __Znam();
        *puVar5 = 0x20;
        puVar5[1] = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar6 = (ulong)uVar2 << 5;
          puVar7 = puVar5 + 2;
          do {
            *(undefined4 *)puVar7 = 0;
            lVar6 = lVar6 + -0x20;
            puVar7 = puVar7 + 4;
          } while (lVar6 != 0);
        }
        *(undefined8 **)(unaff_x20 + 0x138) = puVar5 + 2;
        for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 5 != lVar6;
            lVar6 = lVar6 + 0x20) {
          if (*(int *)(lStack_68 + lVar6) != 0) {
            func_0x0001084033c4(unaff_x20 + 0x130,lStack_68 + lVar6 + 8);
          }
        }
        FUN_1084026b8(&lStack_68);
      }
      lVar6 = unaff_x20 + 0x130;
      func_0x0001084033c4(lVar6,auStack_80);
      FUN_10831bb8c(auStack_70);
      lVar6 = lVar6 + 8;
      FUN_10831bb8c(&uStack_88);
    }
    FUN_10831bbf4(lVar6,param_3);
    uVar8 = uVar8 + 1;
    param_3 = (ulong)((int)param_3 + 1);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108400800);
  (*pcVar4)();
}



/* Entry: 10840082c; end: 108400897;  */

/* WARNING: Possible PIC construction at 0x0001083ff378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108401b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010841d3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083ff31c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff144) */
/* WARNING: Removing unreachable block (ram,0x0001083ff44c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff37c) */
/* WARNING: Removing unreachable block (ram,0x00010841d3d8) */
/* WARNING: Removing unreachable block (ram,0x000108410300) */
/* WARNING: Removing unreachable block (ram,0x000108410310) */
/* WARNING: Removing unreachable block (ram,0x0001083ffdb4) */
/* WARNING: Removing unreachable block (ram,0x00010840e230) */
/* WARNING: Removing unreachable block (ram,0x00010840e24c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_10840082c(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                     ,code *UNRECOVERED_JUMPTABLE_00,undefined8 param_7,undefined8 param_8,
                     float *param_9)

{
  undefined **ppuVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
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
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  uint3 uVar25;
  float *pfVar26;
  float *pfVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  float *pfVar32;
  bool bVar33;
  bool bVar34;
  undefined1 uVar35;
  uint uVar36;
  long *plVar37;
  float *pfVar38;
  undefined **ppuVar39;
  long lVar40;
  float *pfVar41;
  undefined *puVar42;
  float *pfVar43;
  undefined *puVar44;
  float *pfVar45;
  long lVar46;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar47;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *pcVar48;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  undefined4 uVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  float *pfVar53;
  short *psVar54;
  float *unaff_x20;
  ulong uVar55;
  float *unaff_x21;
  uint uVar56;
  float *pfVar57;
  float *unaff_x22;
  float *unaff_x23;
  ulong unaff_x24;
  float *pfVar58;
  undefined8 uVar59;
  float *unaff_x25;
  float *unaff_x26;
  undefined8 uVar60;
  float *unaff_x27;
  float *unaff_x28;
  ulong uVar61;
  undefined8 uVar62;
  float extraout_s0;
  int iVar63;
  undefined8 extraout_d0;
  undefined8 uVar64;
  undefined8 uVar65;
  double dVar66;
  undefined8 extraout_d0_00;
  int iVar70;
  int iVar71;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  int iVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 extraout_var_09;
  float extraout_s1;
  undefined8 extraout_d1;
  undefined8 uVar73;
  undefined8 extraout_d1_02;
  undefined1 auVar74 [15];
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined1 auVar75 [16];
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float extraout_s2;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 uVar79;
  undefined8 extraout_d2_02;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined1 auVar80 [16];
  undefined8 extraout_d2_01;
  undefined8 extraout_var_18;
  float fVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float extraout_s3;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined1 in_q4 [16];
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 in_q5 [16];
  float fVar90;
  undefined1 auVar87 [16];
  float fVar93;
  undefined1 in_q6 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  int iVar94;
  float fVar95;
  undefined4 uVar96;
  int iVar99;
  float fVar100;
  int iVar101;
  float fVar102;
  undefined1 in_q7 [16];
  int iVar103;
  float fVar104;
  undefined4 unaff_s8;
  float fVar105;
  undefined4 unaff_00005104;
  undefined1 unaff_b9;
  undefined1 unaff_00005121;
  undefined1 unaff_00005122;
  undefined1 unaff_00005123;
  undefined1 unaff_00005124;
  byte bVar106;
  undefined1 unaff_00005125;
  byte bVar107;
  undefined1 unaff_00005126;
  byte bVar108;
  undefined1 unaff_00005127;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined8 unaff_d10;
  undefined1 auVar118 [16];
  float fVar119;
  undefined8 unaff_d11;
  undefined1 auVar120 [12];
  undefined1 auVar121 [16];
  float fVar123;
  undefined1 unaff_b12;
  undefined1 unaff_00005181;
  undefined1 unaff_00005182;
  undefined1 unaff_00005183;
  undefined1 unaff_00005184;
  undefined1 unaff_00005185;
  undefined1 unaff_00005186;
  undefined1 unaff_00005187;
  undefined8 unaff_d13;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 unaff_d14;
  undefined1 auVar126 [16];
  undefined8 unaff_d15;
  byte bVar127;
  byte bVar129;
  byte bVar130;
  float in_s16;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  float in_register_00005204;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  float in_register_00005208;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  float in_register_0000520c;
  undefined1 auVar128 [16];
  byte bVar143;
  undefined1 extraout_b17;
  undefined1 uVar144;
  undefined1 extraout_b17_00;
  undefined1 extraout_b17_01;
  undefined1 extraout_var_21;
  undefined1 uVar145;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar146;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar147;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar148;
  undefined1 extraout_var_31;
  undefined1 uVar149;
  undefined1 extraout_var_32;
  undefined1 uVar150;
  undefined1 extraout_var_33;
  undefined1 uVar151;
  undefined1 in_register_00005228;
  undefined1 in_register_00005229;
  undefined1 in_register_0000522a;
  undefined1 in_register_0000522b;
  undefined1 in_register_0000522c;
  undefined1 in_register_0000522d;
  undefined1 in_register_0000522e;
  undefined1 in_register_0000522f;
  float extraout_s18;
  float extraout_s18_00;
  float extraout_var_34;
  float fVar152;
  float fVar153;
  float extraout_s19;
  float extraout_var_35;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float extraout_s21;
  float fVar158;
  float extraout_s21_00;
  float extraout_var_36;
  float fVar159;
  float fVar160;
  float extraout_var_37;
  float in_register_000052a8;
  float fVar161;
  float in_register_000052ac;
  byte in_b22;
  byte in_register_000052c1;
  byte in_register_000052c2;
  byte in_register_000052c3;
  float fVar162;
  byte in_register_000052c4;
  byte in_register_000052c5;
  byte in_register_000052c6;
  byte in_register_000052c7;
  float fVar163;
  byte in_register_000052c8;
  byte in_register_000052c9;
  byte in_register_000052ca;
  byte in_register_000052cb;
  float fVar164;
  byte in_register_000052cc;
  byte in_register_000052cd;
  byte in_register_000052ce;
  byte in_register_000052cf;
  float fVar165;
  float extraout_s23;
  float extraout_s23_00;
  float extraout_var_38;
  float fVar166;
  float extraout_var_39;
  float in_register_000052e8;
  float in_register_000052ec;
  float extraout_s24;
  float extraout_s24_00;
  float extraout_var_40;
  float extraout_var_41;
  float in_register_00005308;
  float in_register_0000530c;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar172;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float extraout_s26;
  float extraout_s26_00;
  float extraout_var_42;
  float extraout_var_43;
  float in_register_00005348;
  float in_register_0000534c;
  float fVar173;
  float extraout_s27;
  float extraout_s27_00;
  float extraout_var_44;
  float extraout_var_45;
  float in_register_00005368;
  float fVar174;
  float in_register_0000536c;
  float fVar175;
  float fVar176;
  undefined4 extraout_s28;
  float fVar177;
  undefined4 extraout_var_46;
  float fVar178;
  float fVar179;
  undefined4 uVar180;
  undefined1 extraout_b30;
  undefined1 extraout_b30_00;
  undefined1 extraout_b30_01;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 extraout_var_61;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 in_register_000053c8;
  undefined1 in_register_000053c9;
  undefined1 in_register_000053ca;
  undefined1 in_register_000053cb;
  undefined1 in_register_000053cc;
  undefined1 in_register_000053cd;
  undefined1 in_register_000053ce;
  undefined1 in_register_000053cf;
  float fVar182;
  float fVar183;
  undefined1 auVar181 [16];
  float fVar184;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar76 [16];
  undefined1 auVar85 [16];
  undefined1 auVar97 [12];
  undefined1 auVar98 [16];
  undefined1 auVar122 [16];
  
  pfVar26 = (float *)&stack0xffffffffffffffe0;
  pfVar27 = (float *)&stack0xffffffffffffffe0;
  puVar30 = &stack0xffffffffffffffe0;
  pfVar58 = (float *)&stack0xffffffffffffffe0;
  pfVar38 = (float *)&stack0xffffffffffffffe0;
  pfVar53 = (float *)&stack0xfffffffffffffff0;
  pfVar45 = param_2;
  func_0x000108403634();
  uVar62 = 0x108400844;
  func_0x00010840365c();
  uVar36 = (uint)param_1;
  bVar33 = 2 < uVar36;
  bVar34 = uVar36 == 3;
  if (3 < uVar36) {
    param_1 = (float *)0x22d;
    goto code_r0x00010840088c;
  }
  pcVar48 = (code *)((ulong)param_1 & 0xff);
  puVar28 = &stack0xffffffffffffffe0;
  puVar29 = &stack0xffffffffffffffe0;
  puVar31 = &stack0xffffffffffffffe0;
  pfVar57 = param_1;
  pfVar43 = unaff_x22;
  switch(pcVar48) {
  default:
    param_1 = (float *)(ulong)(uint)*param_2;
  case (code *)0x35:
  case (code *)0x39:
  case (code *)0x3d:
  case (code *)0x41:
  case (code *)0x45:
  case (code *)0x49:
  case (code *)0x4d:
  case (code *)0x51:
  case (code *)0x55:
  case (code *)0x59:
  case (code *)0x5d:
  case (code *)0x65:
  case (code *)0x69:
  case (code *)0x6d:
  case (code *)0x75:
  case (code *)0x79:
  case (code *)0x7d:
  case (code *)0x85:
  case (code *)0x89:
  case (code *)0x8d:
  case (code *)0x95:
  case (code *)0x99:
  case (code *)0x9d:
  case (code *)0xa5:
  case (code *)0xa9:
  case (code *)0xad:
  case (code *)0xb5:
  case (code *)0xc5:
  case (code *)0xc9:
  case (code *)0xcd:
  case (code *)0xd1:
  case (code *)0xd5:
  case (code *)0xd9:
  case (code *)0xdd:
  case (code *)0xe1:
  case (code *)0xe5:
  case (code *)0xf5:
    break;
  case (code *)0x1:
    param_1 = (float *)(ulong)(uint)param_2[1];
  case (code *)0x32:
    break;
  case (code *)0x2:
  case (code *)0x14:
  case (code *)0x15:
  case (code *)0x61:
  case (code *)0x71:
  case (code *)0x81:
  case (code *)0x91:
  case (code *)0xa1:
  case (code *)0xb1:
  case (code *)0xb9:
  case (code *)0xbd:
  case (code *)0xc1:
  case (code *)0xe9:
  case (code *)0xed:
  case (code *)0xf1:
  case (code *)0xf9:
  case (code *)0xfd:
    param_1 = (float *)(ulong)(uint)param_2[2];
    break;
  case (code *)0x3:
    param_1 = (float *)(ulong)(uint)param_2[3];
  case (code *)0x23:
  case (code *)0x27:
    break;
  case (code *)0x5:
  case (code *)0x7:
  case (code *)0x8:
  case (code *)0x9:
  case (code *)0xa:
  case (code *)0xb:
  case (code *)0xc:
  case (code *)0xd:
  case (code *)0xf:
  case (code *)0x11:
  case (code *)0x13:
  case (code *)0x16:
  case (code *)0x18:
code_r0x0001083fe7bc:
    pfVar32 = pfVar58 + -0x28;
    pfVar43 = pfVar58 + -0x28;
    pfVar38 = pfVar58 + -0x28;
    pfVar41 = pfVar58 + -0x28;
    *(ulong *)(pfVar58 + -0x18) =
         CONCAT17(unaff_00005127,
                  CONCAT16(unaff_00005126,
                           CONCAT15(unaff_00005125,
                                    CONCAT14(unaff_00005124,
                                             CONCAT13(unaff_00005123,
                                                      CONCAT12(unaff_00005122,
                                                               CONCAT11(unaff_00005121,unaff_b9)))))
                          ));
    *(ulong *)(pfVar58 + -0x16) = CONCAT44(unaff_00005104,unaff_s8);
    *(float **)(pfVar58 + -0x14) = unaff_x26;
    *(float **)(pfVar58 + -0x12) = unaff_x25;
    *(ulong *)(pfVar58 + -0x10) = unaff_x24;
    *(float **)(pfVar58 + -0xe) = unaff_x23;
    *(float **)(pfVar58 + -0xc) = unaff_x22;
    *(float **)(pfVar58 + -10) = unaff_x21;
    *(float **)(pfVar58 + -8) = unaff_x20;
    *(float **)(pfVar58 + -6) = param_2;
    *(float **)(pfVar58 + -4) = pfVar53;
    *(undefined8 *)(pfVar58 + -2) = uVar62;
    pfVar53 = pfVar58 + -4;
    unaff_x23 = (float *)&UNK_10df26510;
    unaff_x25 = (float *)&UNK_10df265ec;
    unaff_x26 = (float *)&UNK_10df26584;
    pfVar57 = param_1;
    unaff_x21 = pfVar45;
code_r0x0001083fe7fc:
    unaff_x20 = unaff_x21;
    param_3 = (float *)0x1;
    unaff_x22 = (float *)0x0;
    unaff_x21 = unaff_x20;
    param_2 = param_1;
    switch(unaff_x20[3]) {
    case 3.50325e-44:
      goto code_r0x0001083feb9c;
    case 3.64338e-44:
      *(undefined8 *)(pfVar58 + -0x20) = *(undefined8 *)(unaff_x20 + 6);
code_r0x0001083febc8:
      pfVar57 = param_1 + 0x18;
code_r0x0001083febd0:
      FUN_1083fe690();
code_r0x0001083febd4:
      if ((int)unaff_x20[0xe] < 1) goto code_r0x0001083ff7a0;
      pfVar38 = pfVar57;
      func_0x000108403650();
      unaff_x21 = pfVar57;
code_r0x0001083febf0:
      if ((int)pfVar38 == 0) goto code_r0x0001083ff774;
      bVar106 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 6) + 0x20) + 0x2c);
      ppuVar47 = (undefined **)(ulong)bVar106;
      if (bVar106 == 0xd) {
        func_0x000108403bec();
        func_0x0001083fae74(param_1 + 0xc,*unaff_x21);
      }
      else {
code_r0x0001083fec08:
        iVar63 = (int)pfVar38;
        if ((int)ppuVar47 != 0xf) goto code_r0x0001083fec10;
        if ((int)unaff_x20[0xe] < 2) {
code_r0x0001083ff7a0:
                    /* WARNING: Does not return */
          pcVar48 = (code *)SoftwareBreakpoint(1,0x1083ff7a4);
          (*pcVar48)();
        }
        func_0x000108403650();
        if (iVar63 == 0) goto code_r0x0001083ff774;
        func_0x0001084035f4(param_1 + 0xc,0x22a,0xffffffffffffffff);
        func_0x000108403bec();
        func_0x0001083fae84(param_1 + 0xc,*unaff_x21);
      }
      goto code_r0x0001083ff3d8;
    case 3.78351e-44:
    case 3.92364e-44:
    case 4.06377e-44:
    case 4.90454e-44:
      func_0x00010840359c();
      if ((float *)0x1 < pfVar57) {
        func_0x000108403784();
        FUN_1084016cc();
        if (((ulong)pfVar57 & 1) != 0) break;
      }
      func_0x000108403c24();
      lVar51 = (long)pfVar45 << 3;
      goto code_r0x0001083fe930;
    case 4.2039e-44:
    case 4.62428e-44:
      func_0x000108403c24();
      if (pfVar45 == (float *)0x0) goto code_r0x0001083ff7a0;
      unaff_x21 = *(float **)pfVar57;
      func_0x0001084035d4();
      if ((int)pfVar57 == 0) goto code_r0x0001083ff774;
      func_0x000108403624();
      func_0x00010840365c();
      pfVar38 = *(float **)(unaff_x20 + 4);
      func_0x000108403634();
      func_0x00010840365c();
      auVar186._8_8_ = extraout_var_19;
      auVar186._0_8_ = extraout_d3;
      auVar185._8_8_ = extraout_var;
      auVar185._0_8_ = extraout_d0;
      uVar36 = (uint)pfVar38;
      uVar56 = (uint)pfVar57;
      if (uVar56 == uVar36) break;
      uVar35 = uVar56 == 3;
      if (3 < uVar56) {
        if (uVar36 == 3) goto code_r0x0001083ff458;
        goto code_r0x0001083ff774;
      }
      ppuVar47 = (undefined **)((ulong)pfVar57 & 0xff);
      uVar56 = 0xdf26612;
      fVar166 = (float)extraout_d0;
      fVar152 = (float)extraout_d2;
      fVar86 = (float)((ulong)extraout_d0 >> 0x20);
      fVar153 = (float)((ulong)extraout_d2 >> 0x20);
      fVar167 = (float)extraout_var_16;
      fVar173 = (float)((ulong)extraout_var_16 >> 0x20);
      fVar176 = (float)((ulong)extraout_var >> 0x20);
      pfVar43 = pfVar38;
      unaff_x22 = pfVar57;
      uVar144 = extraout_b17;
      uVar145 = extraout_var_21;
      uVar146 = extraout_var_24;
      uVar147 = extraout_var_27;
      uVar148 = extraout_var_30;
      uVar149 = extraout_var_31;
      uVar150 = extraout_var_32;
      uVar151 = extraout_var_33;
      fVar158 = extraout_s21;
      fVar159 = extraout_var_36;
      fVar93 = extraout_s23;
      fVar160 = extraout_var_38;
      fVar119 = extraout_s24;
      fVar161 = extraout_var_40;
      fVar88 = extraout_s26;
      fVar89 = extraout_var_42;
      fVar90 = extraout_s27;
      fVar177 = extraout_var_44;
      switch(ppuVar47) {
      default:
        if (uVar36 == 3) {
code_r0x0001083ff458:
          func_0x00010840359c();
          func_0x000108403b20();
          func_0x0001084017e4();
          pfVar45 = *(float **)(unaff_x21 + 4);
          param_3 = (float *)&UNK_10df26678;
code_r0x0001083ff6e0:
          pfVar53 = *(float **)(pfVar58 + -4);
          uVar62 = *(undefined8 *)(pfVar58 + -2);
          func_0x0001084038b0(param_1,pfVar45,param_3);
          goto FUN_108400898;
        }
        if ((uVar36 & 0xff) != 2) {
          if ((uVar36 & 0xff) != 1) goto code_r0x0001083ff774;
          func_0x00010840359c();
          func_0x0001084037dc();
          goto code_r0x0001083fea04;
        }
        func_0x00010840359c();
        uVar180 = SUB84(param_3,0);
        func_0x0001084037dc();
        iVar63 = 0x117;
        goto code_r0x0001083ff448;
      case (undefined **)0x1:
        if (uVar36 == 3) goto code_r0x0001083ff458;
        if ((uVar36 & 0xff) != 2) {
          if (((ulong)pfVar38 & 0xff) == 0) {
            pfVar38 = *(float **)(unaff_x20 + 4);
            func_0x000108403618();
            uVar180 = SUB84(param_3,0);
            func_0x0001084037dc();
            iVar63 = 0x10b;
            goto code_r0x0001083ff448;
          }
          goto code_r0x0001083ff774;
        }
        break;
      case (undefined **)0x2:
        if (uVar36 == 3) goto code_r0x0001083ff458;
        if ((uVar36 & 0xff) != 1) {
          if (((ulong)pfVar38 & 0xff) == 0) {
            func_0x00010840359c();
            uVar180 = SUB84(param_3,0);
            func_0x0001084037dc();
            iVar63 = 0x10f;
            goto code_r0x0001083ff448;
          }
          goto code_r0x0001083ff774;
        }
        break;
      case (undefined **)0x3:
        if (uVar36 == 0) {
          func_0x0001083fa660(param_1 + 0xc);
        }
        else {
          if (2 < uVar36) goto code_r0x0001083ff774;
          func_0x0001084038cc();
          func_0x000108403910();
        }
        func_0x00010840359c();
        func_0x0001084038a8();
        func_0x00010840359c();
        func_0x0001084037dc();
        FUN_1083f9008();
        break;
      case (undefined **)0x5:
        goto code_r0x0001083feb04;
      case (undefined **)0x6:
        goto code_r0x0001083feae8;
      case (undefined **)0x7:
      case (undefined **)0xf:
        goto code_r0x0001083feea4;
      case (undefined **)0x8:
        goto code_r0x0001083fea28;
      case (undefined **)0x9:
        goto code_r0x0001083feac4;
      case (undefined **)0xa:
        goto code_r0x0001083feb1c;
      case (undefined **)0xb:
        goto code_r0x0001083fec08;
      case (undefined **)0xc:
        goto code_r0x0001083feea8;
      case (undefined **)0xd:
        goto code_r0x0001083fed78;
      case (undefined **)0xe:
        goto code_r0x0001083fec80;
      case (undefined **)0x10:
code_r0x0001083fea04:
        uVar180 = SUB84(param_3,0);
        iVar63 = 0x113;
code_r0x0001083ff448:
        uVar62 = 0x1083ff44c;
        pfVar43 = pfVar58 + -0x28;
        pfVar57 = pfVar38;
        goto SUB_1083f8fd0;
      case (undefined **)0x11:
        FUN_10840226c();
        *(undefined8 *)(pfVar38 + 8) = *(undefined8 *)(*(long *)(pfVar38 + 6) + 0xf8);
        *(float **)(*(long *)(pfVar38 + 6) + 0xf8) = pfVar38;
        return pfVar38;
      case (undefined **)0x12:
        lVar51 = *(long *)(unaff_x20 + 0x12);
        pfVar53 = param_1;
        FUN_1083fffa8();
        func_0x000108403de0();
        iVar63 = (int)pfVar53;
        fVar93 = param_1[0x10];
        if ((((ulong)pfVar38 & 0x10101) == 0) && (lVar51 != 0)) {
          param_1[0x10] = (float)((int)fVar93 + 2);
          func_0x000108403878();
          func_0x0001083f98fc();
          func_0x000108403838();
          if (iVar63 != 0) {
            func_0x000108403990();
            func_0x0001083f9780();
            func_0x000108403838();
            if (iVar63 != 0) {
              func_0x0001084039dc();
              if (*(int *)(*(long *)(unaff_x20 + 0x12) + 0x18) < 2) {
code_r0x0001083ffab0:
                func_0x0001084036f0();
                func_0x000108403dec();
                func_0x000108400018(param_1);
                return (float *)0x1;
              }
              func_0x0001084039d0();
              if (iVar63 != 0) {
                iVar63 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0xe) + 0x10);
                func_0x000108403618();
                func_0x000108403900();
                func_0x000108403650();
                if (iVar63 != 0) {
                  FUN_1083f994c(param_1 + 0xc,0,(int)fVar93 + 1U);
                  func_0x0001084036e4();
                  goto code_r0x0001083ffab0;
                }
              }
            }
          }
          return (float *)0x0;
        }
        param_1[0x10] = (float)((int)fVar93 + 1U);
        fVar119 = param_1[0x40];
        unaff_x24 = (ulong)(uint)fVar119;
        param_1[0x40] = fVar93;
        if (*(long *)(unaff_x20 + 10) == 0) {
          func_0x0001084039dc();
        }
        else {
          func_0x000108403838();
          if (((ulong)pfVar53 & 1) == 0) {
            pfVar53 = (float *)0x0;
            goto code_r0x0001083ffe98;
          }
        }
        *(undefined1 *)(pfVar58 + -0x26) = 0;
        *(undefined1 *)(pfVar58 + -0x22) = 0;
        *(float **)(pfVar58 + -0x20) = param_1;
        pfVar58[-0x1e] = 0.0;
        pfVar58[-0x1d] = 0.0;
        func_0x000108403c60();
        func_0x000108403be4();
        pfVar57 = (float *)(ulong)(uint)param_1[0x10];
        param_1[0x10] = (float)((int)param_1[0x10] + 2);
        func_0x000108403990();
        func_0x0001083f97f0();
      case (undefined **)0x22:
      case (undefined **)0x24:
        fVar119 = (float)unaff_x24;
        func_0x0001083f9780();
        uVar61 = 0;
        FUN_1084001fc();
        func_0x000108403838();
        if ((uVar61 & 1) == 0) {
code_r0x0001083ffe90:
          pfVar53 = (float *)0x0;
        }
        else {
          iVar63 = (int)(pfVar58 + -0x26);
          func_0x00010840024c();
          func_0x0001084039dc();
          if (*(long *)(unaff_x20 + 0xe) != 0) {
            func_0x0001084039d0();
            if (iVar63 == 0) goto code_r0x0001083ffe90;
            func_0x00010840370c(*(undefined8 *)(unaff_x20 + 0xe));
            (*extraout_x8_08)();
            func_0x000108403900();
          }
          func_0x000108403990();
          func_0x0001083f9780();
          if (*(long *)(unaff_x20 + 0xc) != 0) {
            func_0x000108403650();
            if (iVar63 == 0) goto code_r0x0001083ffe90;
            func_0x000108400298(param_1 + 0xc);
            func_0x0001084036e4();
          }
          func_0x0001083f9830(param_1 + 0xc,(int)pfVar57 + 1);
          func_0x0001084036f0();
          func_0x000108403d80();
          func_0x000108403840();
          func_0x000108403dec();
          func_0x000108400018(param_1);
          pfVar53 = (float *)0x1;
        }
        func_0x000108403c34();
code_r0x0001083ffe98:
        param_1[0x40] = fVar119;
        return pfVar53;
      case (undefined **)0x13:
      case (undefined **)0x14:
      case (undefined **)0x18:
      case (undefined **)0x19:
      case (undefined **)0x1a:
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        pfVar58[-0x2a] = 5.775169e-34;
        pfVar58[-0x29] = 1.4013e-45;
        fVar93 = *pfVar38;
        pfVar58[-0x2d] = fVar93;
        if ((int)fVar93 < 1) {
          pfVar38 = (float *)0x0;
        }
        else {
          FUN_10841021c();
        }
        return pfVar38;
      case (undefined **)0x15:
      case (undefined **)0x16:
      case (undefined **)0x17:
        if ((int)ppuVar47 == 5) {
          fVar93 = *pfVar38;
          if (fVar93 == *pfVar45) {
            cVar5 = '\x01';
            bVar34 = (bool)ExclusiveMonitorPass(pfVar38,0x10);
            if (bVar34) {
              *pfVar38 = SUB84(param_3,0);
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar34 = cVar5 == '\0';
          }
          else {
            bVar34 = false;
            ClearExclusiveLocal();
          }
        }
        else {
          fVar93 = *pfVar38;
          if (fVar93 == *pfVar45) {
            cVar5 = '\x01';
            bVar34 = (bool)ExclusiveMonitorPass(pfVar38,0x10);
            if (bVar34) {
              *pfVar38 = SUB84(param_3,0);
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar34 = cVar5 == '\0';
          }
          else {
            bVar34 = false;
            ClearExclusiveLocal();
          }
        }
        if (bVar34) {
          return (float *)0x1;
        }
        *pfVar45 = fVar93;
        return (float *)0x0;
      case (undefined **)0x1b:
        goto code_r0x0001083ff1e8;
      case (undefined **)0x1c:
        goto code_r0x0001084042f8;
      case (undefined **)0x1d:
        func_0x000108404d5c();
        return *(float **)pfVar38;
      case (undefined **)0x1e:
        NEON_ucvtf(auVar185,4);
        uVar36 = (uint)CONCAT12((byte)((ulong)extraout_d2 >> 0x18) >> 2 &
                                (byte)((ulong)extraout_d1 >> 0x10),
                                CONCAT11((byte)(((uint)fVar152 >> 10) >> 8) &
                                         (byte)((ulong)extraout_d1 >> 8),
                                         (byte)((uint)fVar152 >> 10) & (byte)extraout_d1));
        uVar25 = CONCAT12((byte)((ulong)extraout_var_16 >> 0x18) >> 2 &
                          (byte)((ulong)extraout_var_10 >> 0x10),
                          CONCAT11((byte)(((uint)fVar167 >> 10) >> 8) &
                                   (byte)((ulong)extraout_var_10 >> 8),
                                   (byte)((uint)fVar167 >> 10) & (byte)extraout_var_10));
        auVar74._0_12_ = ZEXT312(uVar25) << 0x40;
        auVar74[0xc] = (byte)((uint)fVar173 >> 10) & (byte)((ulong)extraout_var_10 >> 0x20);
        auVar74[0xd] = (byte)(((uint)fVar173 >> 10) >> 8) & (byte)((ulong)extraout_var_10 >> 0x28);
        auVar74[0xe] = (byte)((ulong)extraout_var_16 >> 0x3a) &
                       (byte)((ulong)extraout_var_10 >> 0x30);
        auVar75._0_4_ = uVar36 + in_q4._0_4_;
        auVar75._4_4_ =
             (uint)(uint3)(CONCAT16((byte)((ulong)extraout_d2 >> 0x3a) &
                                    (byte)((ulong)extraout_d1 >> 0x30),
                                    CONCAT15((byte)(((uint)fVar153 >> 10) >> 8) &
                                             (byte)((ulong)extraout_d1 >> 0x28),
                                             CONCAT14((byte)((uint)fVar153 >> 10) &
                                                      (byte)((ulong)extraout_d1 >> 0x20),uVar36)))
                          >> 0x20) + in_q4._4_4_;
        auVar75._8_4_ = (uint)uVar25 + in_q4._8_4_;
        auVar75._12_4_ = (uint)auVar74._12_3_ + in_q4._12_4_;
        NEON_ucvtf(auVar75,4);
        uVar61 = CONCAT44((uint)fVar153 >> 0x14,(uint)fVar152 >> 0x14) & 0xfffff3fffffff3ff;
        auVar80._0_4_ = (int)uVar61 + in_q4._0_4_;
        auVar80._4_4_ = (int)(uVar61 >> 0x20) + in_q4._4_4_;
        auVar80._8_4_ = ((uint)fVar167 >> 0x14 & 0xfffff3ff) + in_q4._8_4_;
        auVar80._12_4_ = ((uint)fVar173 >> 0x14 & 0xfffff3ff) + in_q4._12_4_;
        NEON_ucvtf(auVar80,4);
        goto LAB_10840dd88;
      case (undefined **)0x1f:
        NEON_fmax(in_q7,auVar186,4);
        func_0x00010840dd18();
        auVar85._8_8_ = extraout_var_20;
        auVar85._0_8_ = extraout_d3_00;
        auVar185 = NEON_fmax(in_q6,auVar85,4);
        auVar21[1] = extraout_var_48;
        auVar21[0] = extraout_b30_00;
        auVar21[2] = extraout_var_51;
        auVar21[3] = extraout_var_54;
        auVar21[4] = extraout_var_57;
        auVar21[5] = extraout_var_59;
        auVar21[6] = extraout_var_61;
        auVar21[7] = extraout_var_63;
        auVar21[8] = in_register_000053c8;
        auVar21[9] = in_register_000053c9;
        auVar21[10] = in_register_000053ca;
        auVar21[0xb] = in_register_000053cb;
        auVar21[0xc] = in_register_000053cc;
        auVar21[0xd] = in_register_000053cd;
        auVar21[0xe] = in_register_000053ce;
        auVar21[0xf] = in_register_000053cf;
        NEON_fmin(auVar185,auVar21,4);
        pfVar38 = pfVar38 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pfVar38)();
        return pfVar38;
      case (undefined **)0x20:
      case (undefined **)0x21:
        _memcpy();
        *(long *)(unaff_x20 + 2) = *(long *)(unaff_x20 + 2) + (long)param_1;
        return pfVar38;
      case (undefined **)0x23:
      case (undefined **)0x25:
        *(undefined1 *)(ppuVar47 + 3) = 0;
        return (float *)0x0;
      case (undefined **)0x26:
        pfVar53 = pfVar58 + 0x2ae;
        FUN_10834c90c(pfVar53,4);
        pfVar45 = pfVar58 + 0x2ae;
        FUN_10834c90c(pfVar45,0xdf26510);
        *(float **)(pfVar58 + -0x22) = pfVar45;
        FUN_1083a9268(pfVar58 + 0x90,0,&UNK_10df26510,(int)pfVar58[0x1c] * 0x53ae6118,unaff_x24);
        lVar51 = *(long *)(pfVar58 + 0x90);
        if (lVar51 == 0) {
          pfVar58[-0xc] = 0.0;
          pfVar58[-0xb] = 0.0;
          pfVar58[-10] = 0.0;
          pfVar58[-9] = 0.0;
          lVar46 = 0;
        }
        else {
          uVar62 = *(undefined8 *)(lVar51 + 8);
          *(undefined8 *)(pfVar58 + -0xc) = *(undefined8 *)(lVar51 + 0x18);
          *(undefined8 *)(pfVar58 + -10) = uVar62;
          lVar46 = *(long *)(pfVar58 + 0x92);
          if (lVar46 == 0) {
            lVar46 = *(long *)(lVar51 + 0x10);
          }
        }
        *(undefined **)(pfVar58 + -0x16) = &UNK_10df26584;
        if (pfVar53 != (float *)0x0) {
          FUN_108343a94(pfVar58 + 0x3c);
          uVar62 = *(undefined8 *)(pfVar58 + 0x3c);
          pfVar58[0x3c] = 0.0;
          pfVar58[0x3d] = 0.0;
          *(undefined8 *)(pfVar58 + 0x74) = uVar62;
          pfVar58[0x78] = 5.60519e-45;
          pfVar58[0x79] = 1.4013e-45;
          pfVar58[0x76] = 8.40779e-45;
          pfVar58[0x77] = 4.2039e-45;
          FUN_10810a400(pfVar58 + 0x3c);
          if (pfVar57 != (float *)0x0) {
            do {
              cVar5 = '\x01';
              bVar34 = (bool)ExclusiveMonitorPass(pfVar57,0x10);
              if (bVar34) {
                *pfVar57 = (float)((int)*pfVar57 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pfVar58[0x20] = 0.0;
          pfVar58[0x21] = 0.0;
          *(float **)(pfVar58 + 0x58) = pfVar57;
          pfVar58[0x5c] = 5.60519e-45;
          pfVar58[0x5d] = 1.4013e-45;
          pfVar58[0x5a] = 2.52234e-44;
          pfVar58[0x5b] = 2.8026e-45;
          FUN_10810a400(pfVar58 + 0x20);
          FUN_108345950(pfVar58 + 0x58,pfVar53,0,pfVar58 + 0x74,unaff_x28,0);
          FUN_10810a400(pfVar58 + 0x58);
          FUN_10810a400(pfVar58 + 0x74);
        }
        *(undefined **)(pfVar58 + -0x28) = &UNK_10df26510;
        *(float **)(pfVar58 + -0x26) = pfVar57;
        *(float **)(pfVar58 + -0x24) = unaff_x20;
        uVar73 = *(undefined8 *)(unaff_x27 + 0x12);
        auVar185 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0xe),
                            *(undefined1 (*) [16])(unaff_x27 + 0xe),8,1);
        *(long *)(pfVar58 + 0xa8) = auVar185._8_8_;
        *(long *)(pfVar58 + 0xa6) = auVar185._0_8_;
        uVar79 = *(undefined8 *)(unaff_x27 + 0xc);
        *(undefined8 *)(pfVar58 + 0xa4) = uVar73;
        *(undefined8 *)(pfVar58 + 0xaa) = uVar79;
        func_0x0001084079c4(pfVar58 + 0x74);
        uVar62 = *(undefined8 *)unaff_x27;
        uVar64 = *(undefined8 *)(unaff_x27 + 4);
        uVar65 = *(undefined8 *)(unaff_x27 + 6);
        uVar59 = *(undefined8 *)unaff_x27;
        uVar60 = *(undefined8 *)(unaff_x27 + 6);
        *(undefined8 *)(pfVar58 + 0xa6) = *(undefined8 *)(unaff_x27 + 2);
        *(undefined8 *)(pfVar58 + 0xa4) = uVar62;
        *(undefined8 *)(pfVar58 + 0xaa) = uVar65;
        *(undefined8 *)(pfVar58 + 0xa8) = uVar64;
        func_0x0001084079c4(pfVar58 + 0x58);
        auVar185 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0x14),
                            *(undefined1 (*) [16])(unaff_x27 + 0x14),8,1);
        *(long *)(pfVar58 + 0xa8) = auVar185._8_8_;
        *(long *)(pfVar58 + 0xa6) = auVar185._0_8_;
        *(undefined8 *)(pfVar58 + 0xa4) = uVar59;
        *(undefined8 *)(pfVar58 + 0xaa) = uVar73;
        func_0x0001084079c4(pfVar58 + 0x3c);
        uVar62 = *(undefined8 *)(unaff_x27 + 8);
        *(undefined8 *)(pfVar58 + 0xa8) = *(undefined8 *)(unaff_x27 + 10);
        *(undefined8 *)(pfVar58 + 0xa6) = uVar62;
        *(undefined8 *)(pfVar58 + 0xa4) = uVar60;
        *(undefined8 *)(pfVar58 + 0xaa) = uVar79;
        func_0x0001084079c4(pfVar58 + 0x20);
        uVar55 = (ulong)(uint)pfVar58[0x1c];
        FUN_108407868(pfVar58 + 0x74,uVar55);
        FUN_108407868(pfVar58 + 0x58,uVar55);
        lVar40 = 0;
        uVar61 = 0;
        uVar50 = *(ulong *)(pfVar58 + -0x16);
        uVar52 = (ulong)((int)uVar50 + 1);
        *(ulong *)(pfVar58 + -0x1a) = uVar52;
        *(ulong *)(pfVar58 + -0x18) = uVar55 + 1;
        *(ulong *)(pfVar58 + -0x1e) = uVar52 << 4;
        *(ulong *)(pfVar58 + -0x1c) = uVar52 << 3;
        *(long *)(pfVar58 + -0x12) = lVar46 + 6;
        *(ulong *)(pfVar58 + -0x10) = uVar52;
        *(ulong *)(pfVar58 + -0x20) = ((uVar50 & 0xffffffff) * 2 + (uVar50 & 0xffffffff)) * 4;
        fVar93 = 0.0;
        *(undefined8 *)(pfVar58 + -0xe) = *(undefined8 *)(pfVar58 + -0xc);
        lVar51 = *(long *)(pfVar58 + -0x22);
        auVar185 = ZEXT816(0);
        fVar119 = 1.0 / (float)uVar55;
        while( true ) {
          uVar35 = uVar61 == *(ulong *)(pfVar58 + -0x18);
          if ((bool)uVar35) break;
          *(long *)(pfVar58 + 0x1a) = auVar185._8_8_;
          *(long *)(pfVar58 + 0x18) = auVar185._0_8_;
          auVar185 = func_0x0001084078d8(pfVar58 + 0x74);
          *(undefined8 *)(pfVar58 + -2) = extraout_var_00;
          *(long *)(pfVar58 + -4) = auVar185._0_8_;
          *(undefined8 *)(pfVar58 + 0x1e) = extraout_var_11;
          *(long *)(pfVar58 + 0x1c) = auVar185._8_8_;
          auVar185 = func_0x0001084078d8(pfVar58 + 0x58);
          *(undefined8 *)(pfVar58 + -6) = extraout_var_01;
          *(long *)(pfVar58 + -8) = auVar185._0_8_;
          *(undefined8 *)(pfVar58 + 0x12) = extraout_var_12;
          *(long *)(pfVar58 + 0x10) = auVar185._8_8_;
          uVar62 = *(undefined8 *)(pfVar58 + -0x16);
          FUN_108407868(pfVar58 + 0x3c,uVar62);
          FUN_108407868(pfVar58 + 0x20,uVar62);
          uVar62 = *(undefined8 *)(pfVar58 + 0x18);
          fVar158 = (float)uVar62;
          fVar159 = 1.0 - fVar158;
          *(ulong *)(pfVar58 + -0x14) = uVar61 + 1;
          uVar64 = *(undefined8 *)(pfVar58 + 0x6b);
          uVar65 = *(undefined8 *)(pfVar58 + 0x71);
          fVar160 = (float)*(undefined8 *)(pfVar58 + 0x8d) * fVar158 +
                    (float)*(undefined8 *)(pfVar58 + 0x87) * fVar159;
          fVar161 = (float)((ulong)*(undefined8 *)(pfVar58 + 0x8d) >> 0x20) * fVar158 +
                    (float)((ulong)*(undefined8 *)(pfVar58 + 0x87) >> 0x20) * fVar159;
          pfVar58[-6] = pfVar58[-6];
          pfVar58[-5] = pfVar58[-5];
          *(ulong *)(pfVar58 + -8) = CONCAT44(pfVar58[0x10],pfVar58[-8]);
          pfVar58[-2] = pfVar58[-2];
          pfVar58[-1] = pfVar58[-1];
          *(ulong *)(pfVar58 + -4) =
               CONCAT44(SUB164(*(undefined1 (*) [16])(pfVar58 + 0x1c),0),pfVar58[-4]);
          auVar185 = ZEXT816(0);
          psVar54 = *(short **)(pfVar58 + -0x12);
          pfVar58[0x16] = 0.0;
          pfVar58[0x17] = 0.0;
          *(ulong *)(pfVar58 + 0x14) = (ulong)(uint)fVar159;
          for (uVar52 = 0; (uVar50 & 0xffffffff) + 1 != uVar52; uVar52 = uVar52 + 1) {
            *(long *)(pfVar58 + 0x1e) = auVar185._8_8_;
            *(long *)(pfVar58 + 0x1c) = auVar185._0_8_;
            auVar185 = func_0x0001084078d8(pfVar58 + 0x3c);
            *(undefined8 *)(pfVar58 + 0xe) = extraout_var_13;
            *(long *)(pfVar58 + 0xc) = auVar185._8_8_;
            *(undefined8 *)(pfVar58 + 0x12) = extraout_var_02;
            *(long *)(pfVar58 + 0x10) = auVar185._0_8_;
            uVar79 = func_0x0001084078d8(pfVar58 + 0x20);
            uVar62 = *(undefined8 *)(pfVar58 + 0x18);
            fVar88 = SUB164(*(undefined1 (*) [16])(pfVar58 + 0x1c),0);
            fVar89 = 1.0 - fVar88;
            uVar73 = *(undefined8 *)(pfVar58 + 0x14);
            *(ulong *)(*(long *)(pfVar58 + -10) + uVar52 * 8) =
                 CONCAT44((pfVar58[-3] * fVar88 + pfVar58[-7] * fVar89 +
                          (float)((ulong)uVar79 >> 0x20) * (float)uVar62 +
                          pfVar58[0xc] * (float)uVar73) -
                          (fVar161 * fVar88 +
                          ((float)((ulong)uVar65 >> 0x20) * fVar158 +
                          (float)((ulong)uVar64 >> 0x20) * fVar159) * fVar89),
                          (pfVar58[-4] * fVar88 + pfVar58[-8] * fVar89 +
                          (float)uVar79 * (float)uVar62 +
                          (float)*(undefined8 *)(pfVar58 + 0x10) * (float)uVar73) -
                          (fVar160 * fVar88 +
                          ((float)uVar65 * fVar158 + (float)uVar64 * fVar159) * fVar89));
            if (pfVar53 != (float *)0x0) {
              uVar62 = *(undefined8 *)pfVar53;
              uVar79 = *(undefined8 *)(pfVar53 + 4);
              uVar59 = *(undefined8 *)(pfVar53 + 8);
              uVar60 = *(undefined8 *)(pfVar53 + 10);
              uVar22 = *(undefined8 *)(pfVar53 + 0xc);
              uVar23 = *(undefined8 *)(pfVar53 + 0xe);
              *(undefined8 *)(pfVar58 + 6) = *(undefined8 *)(pfVar53 + 6);
              *(undefined8 *)(pfVar58 + 4) = uVar79;
              *(undefined8 *)(pfVar58 + 10) = uVar23;
              *(undefined8 *)(pfVar58 + 8) = uVar22;
              *(undefined8 *)(pfVar58 + 0xe) = uVar60;
              *(undefined8 *)(pfVar58 + 0xc) = uVar59;
              pfVar58[0x12] = 0.0;
              pfVar58[0x13] = 0.0;
              *(ulong *)(pfVar58 + 0x10) = (ulong)(uint)fVar89;
              func_0x000108407988(uVar62,uVar73);
              uVar62 = func_0x0001084079ac();
              *(undefined8 *)(pfVar58 + 2) = extraout_var_03;
              *(undefined8 *)pfVar58 = uVar62;
              func_0x000108407988(*(undefined8 *)(pfVar58 + 4),*(undefined8 *)(pfVar58 + 0x18));
              uVar62 = func_0x0001084079ac();
              pfVar58[6] = pfVar58[2] + (float)extraout_var_04;
              pfVar58[7] = pfVar58[3] + (float)((ulong)extraout_var_04 >> 0x20);
              pfVar58[4] = *pfVar58 + (float)uVar62;
              pfVar58[5] = pfVar58[1] + (float)((ulong)uVar62 >> 0x20);
              func_0x000108407988(*(undefined8 *)(pfVar58 + 8),*(undefined8 *)(pfVar58 + 0x14));
              uVar62 = func_0x0001084079ac();
              *(undefined8 *)(pfVar58 + 10) = extraout_var_05;
              *(undefined8 *)(pfVar58 + 8) = uVar62;
              func_0x000108407988(*(undefined8 *)(pfVar58 + 0xc),*(undefined8 *)(pfVar58 + 0x18));
              uVar62 = func_0x0001084079ac();
              pfVar58[0xe] = pfVar58[10] + (float)extraout_var_06;
              pfVar58[0xf] = pfVar58[0xb] + (float)((ulong)extraout_var_06 >> 0x20);
              pfVar58[0xc] = pfVar58[8] + (float)uVar62;
              pfVar58[0xd] = pfVar58[9] + (float)((ulong)uVar62 >> 0x20);
              func_0x000108407988(*(undefined8 *)(pfVar58 + 4),*(undefined8 *)(pfVar58 + 0x10));
              uVar62 = func_0x0001084079ac();
              *(undefined8 *)(pfVar58 + 10) = extraout_var_07;
              *(undefined8 *)(pfVar58 + 8) = uVar62;
              func_0x000108407988(*(undefined8 *)(pfVar58 + 0xc),*(undefined8 *)(pfVar58 + 0x1c));
              auVar185 = *(undefined1 (*) [16])(pfVar58 + 0x10);
              uVar73 = *(undefined8 *)(pfVar58 + 0x14);
              uVar62 = *(undefined8 *)(pfVar58 + 0x18);
              auVar186 = *(undefined1 (*) [16])(pfVar58 + 0x1c);
              uVar79 = func_0x0001084079ac();
              fVar89 = auVar185._0_4_;
              fVar88 = auVar186._0_4_;
              auVar185 = *(undefined1 (*) [16])(pfVar58 + 8);
              pfVar45 = (float *)(lVar51 + uVar52 * 0x10);
              pfVar45[2] = auVar185._8_4_ + (float)extraout_var_08;
              pfVar45[3] = auVar185._12_4_ + (float)((ulong)extraout_var_08 >> 0x20);
              *pfVar45 = auVar185._0_4_ + (float)uVar79;
              pfVar45[1] = auVar185._4_4_ + (float)((ulong)uVar79 >> 0x20);
            }
            if (*(long *)(pfVar58 + -0xc) != 0) {
              fVar90 = (float)uVar62;
              fVar177 = (float)uVar73;
              *(ulong *)(*(long *)(pfVar58 + -0xe) + uVar52 * 8) =
                   CONCAT44(((float)((ulong)*(undefined8 *)(unaff_x21 + 4) >> 0x20) * fVar90 +
                            (float)((ulong)*(undefined8 *)(unaff_x21 + 6) >> 0x20) * fVar177) *
                            fVar88 + ((float)((ulong)*(undefined8 *)(unaff_x21 + 2) >> 0x20) *
                                      fVar90 + (float)((ulong)*(undefined8 *)unaff_x21 >> 0x20) *
                                               fVar177) * fVar89,
                            ((float)*(undefined8 *)(unaff_x21 + 4) * fVar90 +
                            (float)*(undefined8 *)(unaff_x21 + 6) * fVar177) * fVar88 +
                            ((float)*(undefined8 *)(unaff_x21 + 2) * fVar90 +
                            (float)*(undefined8 *)unaff_x21 * fVar177) * fVar89);
            }
            if (uVar61 < uVar55 && uVar52 < (uVar50 & 0xffffffff)) {
              sVar24 = (short)uVar52;
              sVar3 = (short)lVar40 + sVar24;
              psVar54[-3] = sVar3;
              psVar54[-2] = (short)lVar40 + sVar24 + 1;
              uVar73 = *(undefined8 *)(pfVar58 + -0x10);
              sVar4 = (short)uVar73 + sVar24 + 1;
              psVar54[-1] = sVar4;
              *psVar54 = sVar3;
              psVar54[1] = sVar4;
              psVar54[2] = (short)uVar73 + sVar24;
            }
            fVar88 = 1.0 / (float)(uVar50 & 0xffffffff) + fVar88;
            fVar89 = 1.0;
            if (fVar88 <= 1.0) {
              fVar89 = fVar88;
            }
            if (fVar89 <= fVar93) {
              fVar89 = fVar93;
            }
            auVar185 = ZEXT416((uint)fVar89);
            psVar54 = psVar54 + 6;
          }
          fVar159 = fVar119 + (float)uVar62;
          fVar158 = 1.0;
          if (fVar159 <= 1.0) {
            fVar158 = fVar159;
          }
          *(long *)(pfVar58 + -10) = *(long *)(pfVar58 + -10) + *(long *)(pfVar58 + -0x1c);
          lVar51 = lVar51 + *(long *)(pfVar58 + -0x1e);
          *(long *)(pfVar58 + -0xe) = *(long *)(pfVar58 + -0xe) + *(long *)(pfVar58 + -0x1c);
          if (fVar158 <= fVar93) {
            fVar158 = fVar93;
          }
          auVar185 = ZEXT416((uint)fVar158);
          lVar40 = lVar40 + *(long *)(pfVar58 + -0x1a);
          uVar61 = *(ulong *)(pfVar58 + -0x14);
          *(long *)(pfVar58 + -0x12) = *(long *)(pfVar58 + -0x12) + *(long *)(pfVar58 + -0x20);
          *(long *)(pfVar58 + -0x10) = *(long *)(pfVar58 + -0x10) + *(long *)(pfVar58 + -0x1a);
        }
        uVar62 = *(undefined8 *)(pfVar58 + -0x24);
        if (*(long *)(pfVar58 + -0x22) != 0) {
          if (*(long *)(pfVar58 + 0x90) == 0) {
            uVar64 = 0;
          }
          else {
            uVar64 = *(undefined8 *)(*(long *)(pfVar58 + 0x90) + 0x20);
          }
          uVar61 = *(ulong *)(pfVar58 + -0x28);
          piVar2 = *(int **)(pfVar58 + -0x26);
          if (piVar2 != (int *)0x0) {
            do {
              cVar5 = '\x01';
              bVar34 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar34) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pfVar58[0x9c] = 0.0;
          pfVar58[0x9d] = 0.0;
          *(int **)(pfVar58 + 0x9e) = piVar2;
          pfVar58[0xa0] = 2.52234e-44;
          pfVar58[0xa1] = 2.8026e-45;
          *(ulong *)(pfVar58 + 0xa2) = uVar61 & 0xffffffff | 0x100000000;
          FUN_10810a400(pfVar58 + 0x9c);
          FUN_108343a94(pfVar58 + 0x94);
          uVar65 = *(undefined8 *)(pfVar58 + 0x94);
          pfVar58[0x94] = 0.0;
          pfVar58[0x95] = 0.0;
          *(undefined8 *)(pfVar58 + 0x96) = uVar65;
          pfVar58[0x98] = 8.40779e-45;
          pfVar58[0x99] = 4.2039e-45;
          *(ulong *)(pfVar58 + 0x9a) = uVar61 & 0xffffffff | 0x100000000;
          FUN_10810a400(pfVar58 + 0x94);
          FUN_108345950(pfVar58 + 0x96,uVar64,0,pfVar58 + 0x9e,*(undefined8 *)(pfVar58 + -0x22),0);
          FUN_10810a400(pfVar58 + 0x96);
          FUN_10810a400(pfVar58 + 0x9e);
        }
        FUN_1083a93b8(uVar62,pfVar58 + 0x90);
        pfVar53 = pfVar58 + 0x90;
        FUN_10834845c(pfVar53);
        func_0x0001084079cc();
        func_0x0001084079d8(*(undefined8 *)(pfVar58 + -0x2a));
        if ((bool)uVar35) {
          return pfVar53;
        }
        ___stack_chk_fail();
        FUN_10810a400(pfVar58 + 0x96);
        FUN_10810a400(pfVar58 + 0x9e);
        FUN_10834845c(pfVar58 + 0x90);
        func_0x0001084079cc();
        do {
          __Unwind_Resume(pfVar53);
        } while( true );
      case (undefined **)0x27:
        goto LAB_108401208;
      case (undefined **)0x28:
        FUN_1084025f8(pfVar58 + -0x26);
        pfVar53 = pfVar58 + -0x26;
        FUN_108401e48(pfVar53,unaff_x20);
        if (((ulong)pfVar53 & 1) == 0) {
          param_1[0] = 0.0;
          param_1[1] = 0.0;
        }
        else {
          FUN_1084021e0(param_1,pfVar58 + -0x26);
        }
        pfVar53 = pfVar58 + -0x26;
        FUN_10840284c(pfVar53);
        return pfVar53;
      case (undefined **)0x29:
        fVar93 = pfVar38[0x20];
        fVar119 = pfVar38[0x28];
        fVar158 = pfVar38[0x30];
        uVar62 = *(undefined8 *)(pfVar38 + 0x14);
        pfVar45 = pfVar38 + 0xc;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        pfVar58[-0x2a] = 5.775169e-34;
        pfVar58[-0x29] = 1.4013e-45;
        pfVar58[-0x2e] = fVar119;
        pfVar58[-0x2d] = fVar93;
        pfVar58[-0x2f] = fVar158;
        *(undefined8 *)(pfVar58 + -0x32) = uVar62;
        FUN_1083fa6d0(pfVar45,pfVar58 + -0x2d,pfVar58 + -0x2e,pfVar58 + -0x2f,pfVar38 + 0x10,
                      pfVar58 + -0x32);
        return pfVar45;
      case (undefined **)0x2a:
        goto code_r0x000108400dfc;
      case (undefined **)0x2b:
        goto code_r0x0001083ff184;
      case (undefined **)0x2d:
      case (undefined **)0x2f:
      case (undefined **)0x31:
        goto code_r0x0001083ff19c;
      case (undefined **)0x33:
        goto code_r0x0001083ff1b4;
      case (undefined **)0x35:
      case (undefined **)0x37:
      case (undefined **)0x39:
        goto code_r0x0001083ff1cc;
      case (undefined **)0x3b:
        goto code_r0x0001083fef74;
      case (undefined **)0x3d:
      case (undefined **)0x3f:
        goto code_r0x0001083fef8c;
      case (undefined **)0x41:
      case (undefined **)0x49:
      case (undefined **)0x51:
      case (undefined **)0x59:
      case (undefined **)0x61:
      case (undefined **)0x69:
      case (undefined **)0x6d:
      case (undefined **)0x6f:
      case (undefined **)0x71:
      case (undefined **)0x85:
      case (undefined **)0x87:
      case (undefined **)0x89:
      case (undefined **)0x8d:
      case (undefined **)0x8f:
      case (undefined **)0x91:
code_r0x0001083ff294:
        func_0x000108403908();
        if ((int)pfVar38 != 0) {
          func_0x00010840379c();
          (**(code **)(extraout_x8_06 + 0x50))();
          *(ulong *)(pfVar58 + -0x26) = CONCAT44(unaff_00005104,unaff_s8);
          *(float **)(pfVar58 + -0x28) = unaff_x20 + 4;
          *(float **)(pfVar58 + -0x24) = pfVar38;
          pfVar58[-0x22] = 0.0;
          pfVar58[-0x21] = 1.875;
          FUN_108401ae0(param_1,pfVar58 + -0x28,*(undefined8 *)(unaff_x21 + 4));
          if (((ulong)param_1 & 1) == 0) goto code_r0x0001083ff774;
          func_0x000108403908();
          unaff_x22 = param_1;
          goto LAB_1083ff778;
        }
        goto code_r0x0001083ff774;
      case (undefined **)0x43:
        goto code_r0x0001083fefa0;
      case (undefined **)0x45:
      case (undefined **)0x47:
        goto code_r0x0001083fefb4;
      case (undefined **)0x4b:
        goto code_r0x0001083fefcc;
      case (undefined **)0x4d:
      case (undefined **)0x4f:
        goto code_r0x0001083fefe4;
      case (undefined **)0x53:
        goto code_r0x0001083feff8;
      case (undefined **)0x55:
        goto code_r0x0001083ff00c;
      case (undefined **)0x57:
        goto code_r0x0001083ff020;
      case (undefined **)0x5b:
        goto code_r0x0001083ff0f4;
      case (undefined **)0x5d:
        goto code_r0x0001083ff10c;
      case (undefined **)0x5f:
        goto code_r0x0001083ff124;
      case (undefined **)0x63:
        goto code_r0x0001083ff13c;
      case (undefined **)0x65:
        goto code_r0x0001083ff154;
      case (undefined **)0x67:
        goto code_r0x0001083ff16c;
      case (undefined **)0x6b:
        goto code_r0x0001083fee7c;
      case (undefined **)0x73:
        goto code_r0x0001083ff038;
      case (undefined **)0x75:
        goto code_r0x0001083ff04c;
      case (undefined **)0x77:
      case (undefined **)0x79:
        goto code_r0x0001083ff060;
      case (undefined **)0x7b:
        goto code_r0x0001083ff078;
      case (undefined **)0x7d:
        goto code_r0x0001083ff08c;
      case (undefined **)0x7f:
      case (undefined **)0x81:
        goto code_r0x0001083ff0a0;
      case (undefined **)0x83:
        goto code_r0x0001083ff0b4;
      case (undefined **)0x8b:
        goto code_r0x0001083ff0c8;
      case (undefined **)0x93:
      case (undefined **)0xc7:
      case (undefined **)0xd3:
      case (undefined **)0xe0:
        goto code_r0x00010840bb18;
      case (undefined **)0x94:
      case (undefined **)0xc8:
      case (undefined **)0xd4:
      case (undefined **)0xe1:
        pfVar53 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        auVar185 = func_0x00010c27adc0(param_1);
        _objc_release(pfVar53);
        pfVar53 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        pfVar58 = pfVar53;
        func_0x000107c318f8();
        _objc_release(pfVar53);
        if ((pfVar53 != (float *)0x0) && ((int)pfVar58 != 0)) {
          pfVar53 = param_1;
          func_0x00010c29bf00(param_1);
          _objc_retainAutoreleasedReturnValue();
          pfVar58 = param_1;
          func_0x00010c252440();
          if ((long)pfVar58 - 3U < 2) {
            pfVar58 = param_1;
            func_0x00010c29bf00(param_1);
            _objc_retainAutoreleasedReturnValue();
            auVar186 = func_0x00010c297a00(param_1);
            _objc_release(pfVar58);
            func_0x00010be935e0(auVar185._0_8_,auVar185._8_8_,auVar186._0_8_,auVar186._8_8_,
                                unaff_x20);
          }
          else if (pfVar58 == (float *)0x2) {
            func_0x00010bf08ae0(auVar185._0_8_,auVar185._8_8_,pfVar53);
          }
          else if (pfVar58 == (float *)0x1) {
            func_0x00010c1f7b20(pfVar53);
          }
          _objc_release(pfVar53);
        }
        goto code_r0x00010bdbf3e4;
      case (undefined **)0x95:
      case (undefined **)0xc9:
      case (undefined **)0xd5:
      case (undefined **)0xe2:
        goto code_r0x000108411b2c;
      case (undefined **)0x96:
      case (undefined **)0xca:
      case (undefined **)0xd6:
      case (undefined **)0xe3:
        pfVar38 = param_1;
        __Unwind_Resume();
        *(float **)(pfVar58 + -0x34) = pfVar57;
        *(float **)(pfVar58 + -0x32) = unaff_x21;
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        *(code **)(pfVar58 + -0x2a) = FUN_1084132b0;
        pfVar53 = pfVar38 + 8;
        _objc_loadWeakRetained(pfVar53);
        pfVar57 = pfVar53;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        pfVar45 = pfVar38 + 8;
        _objc_loadWeakRetained(pfVar45);
        func_0x00010c154120(*(undefined8 *)(pfVar38 + 10),pfVar57);
        _objc_release(pfVar45);
        _objc_release(pfVar57);
        _objc_release(pfVar53);
        puVar42 = PTR__OBJC_CLASS___UIView_1126aec20;
        *(undefined **)(pfVar58 + -0x3e) = PTR___NSConcreteStackBlock_11034bd00;
        pfVar58[-0x3c] = -32.0;
        pfVar58[-0x3b] = 0.0;
        *(code **)(pfVar58 + -0x3a) = FUN_1084133b8;
        *(undefined **)(pfVar58 + -0x38) = &UNK_1108434b0;
        _objc_copyWeak(pfVar58 + -0x36,pfVar38 + 8);
        func_0x00010bf03460(0x3fd999999999999a,0,0x3feccccccccccccd,0,puVar42);
        pfVar53 = pfVar58 + -0x36;
        _objc_destroyWeak(pfVar53);
        return pfVar53;
      case (undefined **)0x97:
      case (undefined **)0xcb:
      case (undefined **)0xd7:
      case (undefined **)0xe4:
LAB_10840dd88:
        pfVar38 = pfVar38 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pfVar38)(pfVar38,pfVar45 + 2);
        return pfVar38;
      case (undefined **)0x98:
        func_0x00010bf408e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069fe0();
        param_1 = pfVar38;
        goto code_r0x00010bdbf3e4;
      case (undefined **)0x99:
        func_0x00010bf529e0();
        if ((unaff_x23 != (float *)0x0) || (uVar61 = unaff_x24, func_0x00010bf529e0(), uVar61 != 0))
        {
          func_0x00010becf4e0(unaff_x21);
        }
        _objc_release(unaff_x24);
        _objc_release(&UNK_10df26510);
        _objc_release(pfVar57);
        _objc_release(unaff_x20);
        goto code_r0x00010bdbf3e4;
      case (undefined **)0x9a:
        goto code_r0x00010841a3bc;
      case (undefined **)0x9b:
        pfVar58[-0x28] = (float)(int)ppuVar47;
        func_0x00010bf00dc0();
        *(float **)(param_1 + 0x1b6) = pfVar38;
        return pfVar38;
      case (undefined **)0x9c:
      case (undefined **)0xc3:
      case (undefined **)0xdc:
        *(float **)(pfVar58 + -0x20) = pfVar53;
        pfVar58[-0x1e] = 5.775169e-34;
        pfVar58[-0x1d] = 1.4013e-45;
        lVar51 = (long)_DAT_1127748dc;
        _objc_retain(param_3);
        param_1 = *(float **)((long)pfVar38 + lVar51);
        *(float **)((long)pfVar38 + lVar51) = param_3;
        goto code_r0x00010bdbf3e4;
      case (undefined **)0x9d:
      case (undefined **)0xc4:
      case (undefined **)0xdd:
      case (undefined **)0xb4:
        _objc_destroyWeak();
        _objc_destroyWeak(unaff_x21 + 10);
        _objc_destroyWeak(unaff_x21 + 8);
        _objc_destroyWeak(pfVar58 + -0x14);
        _objc_destroyWeak(pfVar58 + -0x12);
        pfVar45 = param_1;
        __Unwind_Resume();
        *(float **)(pfVar58 + -0x34) = pfVar57;
        *(float **)(pfVar58 + -0x32) = unaff_x21;
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        *(code **)(pfVar58 + -0x2a) = FUN_108419b94;
        param_1 = pfVar45 + 8;
        _objc_loadWeakRetained(param_1);
        pfVar53 = pfVar45 + 10;
        _objc_loadWeakRetained(pfVar53);
        func_0x00010bdceda0(*(undefined8 *)(pfVar45 + 0xc),*(undefined8 *)(pfVar45 + 0xe),param_1);
        _objc_release(pfVar53);
        goto code_r0x00010bdbf3e4;
      case (undefined **)0x9e:
      case (undefined **)0xc5:
      case (undefined **)0xde:
        goto code_r0x000108417fb4;
      case (undefined **)0x9f:
        func_0x00010bfc18e0();
        _objc_release(unaff_x21);
        _objc_release(param_1);
        return param_1;
      case (undefined **)0xa0:
      case (undefined **)0xe8:
        func_0x00010bf00dc0();
        *(float **)(param_1 + 0x1a4) = pfVar38;
        return pfVar38;
      case (undefined **)0xa1:
      case (undefined **)0xaa:
      case (undefined **)0xb8:
      case (undefined **)0xee:
      case (undefined **)0xfb:
        return (float *)(ulong)((int)(fVar166 + (float)extraout_d1) + 0x7793U & 0xffff);
      case (undefined **)0xa2:
      case (undefined **)0xab:
      case (undefined **)0xb9:
      case (undefined **)0xef:
        *(float **)(pfVar58 + -0x28) = pfVar38;
        *(undefined ***)(pfVar58 + -0x26) = ppuVar47;
        _objc_msgSendSuper2(pfVar58 + -0x28,PTR_s_viewDidDisappear__112684c48);
        func_0x00010bf3ace0(*(undefined8 *)((long)param_1 + (long)_DAT_1127748fc));
        pfVar53 = param_1;
        func_0x00010c06d1a0();
        if (((ulong)pfVar53 & 1) == 0) {
          iVar63 = (int)*(undefined8 *)((long)param_1 + (long)_DAT_112774908);
          func_0x00010c06d1a0();
          if ((((ulong)unaff_x20 & 1) != 0) || (iVar63 == 0)) goto LAB_108412258;
        }
        else if (((ulong)unaff_x20 & 1) != 0) goto LAB_108412258;
        lVar51 = (long)param_1 + (long)_DAT_112774920;
        _objc_loadWeakRetained(lVar51);
        func_0x00010c154120(0);
        _objc_release(lVar51);
LAB_108412258:
        *(undefined1 *)((long)param_1 + (long)_DAT_112774924) = 0;
        func_0x00010be55a20(param_1);
        return param_1;
      case (undefined **)0xa3:
      case (undefined **)0xac:
      case (undefined **)0xba:
      case (undefined **)0xf0:
        goto LAB_1084136b0;
      case (undefined **)0xa4:
      case (undefined **)0xad:
      case (undefined **)0xbb:
      case (undefined **)0xf1:
        goto code_r0x00010841378c;
      case (undefined **)0xa5:
      case (undefined **)0xae:
      case (undefined **)0xbc:
      case (undefined **)0xf2:
                    /* WARNING: Could not recover jumptable at 0x00010840b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(extraout_d0,in_q5._0_8_);
        return pfVar38;
      case (undefined **)0xa6:
      case (undefined **)0xaf:
      case (undefined **)0xbd:
      case (undefined **)0xf3:
        _objc_release(unaff_x20);
        return (float *)(ulong)(0.0 <= (double)CONCAT44(unaff_00005104,unaff_s8));
      case (undefined **)0xa7:
        goto code_r0x000108411ab8;
      case (undefined **)0xa8:
      case (undefined **)0xb6:
      case (undefined **)0xbf:
      case (undefined **)0xcd:
      case (undefined **)0xec:
      case (undefined **)0xf9:
        return pfVar38;
      case (undefined **)0xa9:
      case (undefined **)0xb7:
      case (undefined **)0xce:
      case (undefined **)0xed:
      case (undefined **)0xfa:
        goto code_r0x00010841bf90;
      case (undefined **)0xb0:
        fVar88 = 2.1158898e-37;
        fVar89 = *(float *)(ppuVar47 + 1);
        fVar169 = *(float *)((long)ppuVar47 + 0xc);
        iVar63 = -(uint)(fVar166 == 0.0);
        iVar70 = -(uint)(fVar86 == 0.0);
        iVar71 = -(uint)((float)extraout_var == 0.0);
        iVar72 = -(uint)(fVar176 == 0.0);
        auVar185 = ZEXT216(0);
        auVar186 = NEON_fmov(0x3f800000,4);
        iVar94 = -(uint)((float)CONCAT13(extraout_var_53,
                                         CONCAT12(extraout_var_50,
                                                  CONCAT11(extraout_var_47,extraout_b30))) ==
                        auVar186._0_4_);
        iVar99 = -(uint)((float)CONCAT13(extraout_var_62,
                                         CONCAT12(extraout_var_60,
                                                  CONCAT11(extraout_var_58,extraout_var_56))) ==
                        auVar186._4_4_);
        iVar101 = -(uint)((float)CONCAT13(in_register_000053cb,
                                          CONCAT12(in_register_000053ca,
                                                   CONCAT11(in_register_000053c9,
                                                            in_register_000053c8))) ==
                         auVar186._8_4_);
        iVar103 = -(uint)((float)CONCAT13(in_register_000053cf,
                                          CONCAT12(in_register_000053ce,
                                                   CONCAT11(in_register_000053cd,
                                                            in_register_000053cc))) ==
                         auVar186._12_4_);
        auVar67[0] = ~(byte)iVar63 & ~(byte)iVar94;
        auVar67[1] = ~(byte)((uint)iVar63 >> 8) & ~(byte)((uint)iVar94 >> 8);
        auVar67[2] = ~(byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
        auVar67[3] = ~(byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
        auVar67[4] = ~(byte)iVar70 & ~(byte)iVar99;
        auVar67[5] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar99 >> 8);
        auVar67[6] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10);
        auVar67[7] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18);
        auVar67[8] = ~(byte)iVar71 & ~(byte)iVar101;
        auVar67[9] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar101 >> 8);
        auVar67[10] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar101 >> 0x10);
        auVar67[0xb] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18);
        auVar67[0xc] = ~(byte)iVar72 & ~(byte)iVar103;
        auVar67[0xd] = ~(byte)((uint)iVar72 >> 8) & ~(byte)((uint)iVar103 >> 8);
        auVar67[0xe] = ~(byte)((uint)iVar72 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10);
        auVar67[0xf] = ~(byte)((uint)iVar72 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18);
        auVar18[1] = extraout_var_47;
        auVar18[0] = extraout_b30;
        auVar18[2] = extraout_var_50;
        auVar18[3] = extraout_var_53;
        auVar18[4] = extraout_var_56;
        auVar18[5] = extraout_var_58;
        auVar18[6] = extraout_var_60;
        auVar18[7] = extraout_var_62;
        auVar18[8] = in_register_000053c8;
        auVar18[9] = in_register_000053c9;
        auVar18[10] = in_register_000053ca;
        auVar18[0xb] = in_register_000053cb;
        auVar18[0xc] = in_register_000053cc;
        auVar18[0xd] = in_register_000053cd;
        auVar18[0xe] = in_register_000053ce;
        auVar18[0xf] = in_register_000053cf;
        auVar187 = NEON_ucvtf(auVar18,4);
        fVar104 = 1.1920929e-07;
        fVar95 = 1.1920929e-07;
        fVar100 = 1.1920929e-07;
        fVar102 = 1.1920929e-07;
        bVar140 = 0xff;
        bVar141 = 0xff;
        bVar142 = 0x7f;
        bVar143 = 0;
        bVar127 = 0xff;
        bVar129 = 0xff;
        bVar130 = 0x7f;
        bVar131 = 0;
        bVar132 = 0xff;
        bVar133 = 0xff;
        bVar134 = 0x7f;
        bVar135 = 0;
        bVar136 = 0xff;
        bVar137 = 0xff;
        bVar138 = 0x7f;
        bVar139 = 0;
        fVar159 = (float)(CONCAT12(extraout_var_50,CONCAT11(extraout_var_47,extraout_b30)) &
                          0x7fffff | 0x3f000000);
        fVar160 = (float)(CONCAT12(extraout_var_60,CONCAT11(extraout_var_58,extraout_var_56)) &
                          0x7fffff | 0x3f000000);
        fVar161 = (float)(CONCAT12(in_register_000053ca,
                                   CONCAT11(in_register_000053c9,in_register_000053c8)) & 0x7fffff |
                         0x3f000000);
        fVar90 = (float)(CONCAT12(in_register_000053ce,
                                  CONCAT11(in_register_000053cd,in_register_000053cc)) & 0x7fffff |
                        0x3f000000);
        fVar93 = -124.22552;
        fVar119 = -1.4980303;
        fVar157 = 0.35208872;
        fVar154 = 0.35208872;
        fVar155 = 0.35208872;
        fVar156 = 0.35208872;
        fVar158 = 1.72588;
        fVar177 = ((auVar187._0_4_ * 1.1920929e-07 + -124.22552 + fVar159 * -1.4980303) -
                  1.72588 / (fVar159 + 0.35208872)) * fVar169;
        fVar166 = ((auVar187._4_4_ * 1.1920929e-07 + -124.22552 + fVar160 * -1.4980303) -
                  1.72588 / (fVar160 + 0.35208872)) * fVar169;
        fVar86 = ((auVar187._8_4_ * 1.1920929e-07 + -124.22552 + fVar161 * -1.4980303) -
                 1.72588 / (fVar161 + 0.35208872)) * fVar169;
        fVar90 = ((auVar187._12_4_ * 1.1920929e-07 + -124.22552 + fVar90 * -1.4980303) -
                 1.72588 / (fVar90 + 0.35208872)) * fVar169;
        fVar165 = 121.274055;
        fVar162 = 121.274055;
        fVar163 = 121.274055;
        fVar164 = 121.274055;
        fVar159 = -1.4901291;
        fVar160 = 4.8425255;
        fVar161 = 27.728024;
        fVar174 = 8388608.0;
        fVar175 = 8388608.0;
        auVar14._4_4_ =
             (fVar166 + 121.274055 + (fVar166 - (float)(int)fVar166) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar166 - (float)(int)fVar166))) * 8388608.0;
        auVar14._0_4_ =
             (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
        auVar14._8_4_ =
             (fVar86 + 121.274055 + (fVar86 - (float)(int)fVar86) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar86 - (float)(int)fVar86))) * 8388608.0;
        auVar14._12_4_ =
             (fVar90 + 121.274055 + (fVar90 - (float)(int)fVar90) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar90 - (float)(int)fVar90))) * 8388608.0;
        auVar187 = NEON_fmax(auVar14,auVar185,4);
        uVar49 = 0x4eff0000;
        auVar15._8_4_ = 0x4eff0000;
        auVar15._0_8_ = 0x4eff00004eff0000;
        auVar15._12_4_ = 0x4eff0000;
        auVar187 = NEON_fmin(auVar187,auVar15,4);
        auVar181._0_4_ = (int)auVar187._0_4_;
        auVar181._4_4_ = (int)auVar187._4_4_;
        auVar181._8_4_ = (int)auVar187._8_4_;
        auVar181._12_4_ = (int)auVar187._12_4_;
        auVar19[1] = extraout_var_47;
        auVar19[0] = extraout_b30;
        auVar19[2] = extraout_var_50;
        auVar19[3] = extraout_var_53;
        auVar19[4] = extraout_var_56;
        auVar19[5] = extraout_var_58;
        auVar19[6] = extraout_var_60;
        auVar19[7] = extraout_var_62;
        auVar19[8] = in_register_000053c8;
        auVar19[9] = in_register_000053c9;
        auVar19[10] = in_register_000053ca;
        auVar19[0xb] = in_register_000053cb;
        auVar19[0xc] = in_register_000053cc;
        auVar19[0xd] = in_register_000053cd;
        auVar19[0xe] = in_register_000053ce;
        auVar19[0xf] = in_register_000053cf;
        auVar68[1] = extraout_var_47;
        auVar68[0] = extraout_b30;
        auVar68[2] = extraout_var_50;
        auVar68[3] = extraout_var_53;
        auVar68[4] = extraout_var_56;
        auVar68[5] = extraout_var_58;
        auVar68[6] = extraout_var_60;
        auVar68[7] = extraout_var_62;
        auVar68[8] = in_register_000053c8;
        auVar68[9] = in_register_000053c9;
        auVar68[10] = in_register_000053ca;
        auVar68[0xb] = in_register_000053cb;
        auVar68[0xc] = in_register_000053cc;
        auVar68[0xd] = in_register_000053cd;
        auVar68[0xe] = in_register_000053ce;
        auVar68[0xf] = in_register_000053cf;
        auVar68 = auVar68 ^ (auVar19 ^ auVar181) & auVar67;
        fVar90 = auVar68._4_4_ * fVar89 + 2.1158898e-37;
        fVar177 = auVar68._8_4_ * fVar89 + 2.1158898e-37;
        fVar166 = auVar68._12_4_ * fVar89 + 2.1158898e-37;
        auVar20[4] = SUB41(fVar90,0);
        auVar20._0_4_ = auVar68._0_4_ * fVar89 + 2.1158898e-37;
        auVar20[5] = (char)((uint)fVar90 >> 8);
        auVar20[6] = (char)((uint)fVar90 >> 0x10);
        auVar20[7] = (char)((uint)fVar90 >> 0x18);
        auVar20[8] = SUB41(fVar177,0);
        auVar20[9] = (char)((uint)fVar177 >> 8);
        auVar20[10] = (char)((uint)fVar177 >> 0x10);
        auVar20[0xb] = (char)((uint)fVar177 >> 0x18);
        auVar20[0xc] = SUB41(fVar166,0);
        auVar20[0xd] = (char)((uint)fVar166 >> 8);
        auVar20[0xe] = (char)((uint)fVar166 >> 0x10);
        auVar20[0xf] = (char)((uint)fVar166 >> 0x18);
        auVar187 = NEON_fmax(auVar20,auVar185,4);
        fVar89 = *(float *)(ppuVar47 + 2);
        fVar105 = *(float *)((long)ppuVar47 + 0x14);
        auVar69._0_4_ = auVar187._0_4_ / (fVar89 + auVar68._0_4_ * fVar105);
        auVar69._4_4_ = auVar187._4_4_ / (fVar89 + auVar68._4_4_ * fVar105);
        auVar69._8_4_ = auVar187._8_4_ / (fVar89 + auVar68._8_4_ * fVar105);
        auVar69._12_4_ = auVar187._12_4_ / (fVar89 + auVar68._12_4_ * fVar105);
        NEON_scvtf(auVar69,4);
        fVar176 = fVar119;
        fVar152 = fVar158;
        fVar153 = fVar159;
        fVar167 = fVar160;
        fVar173 = fVar161;
        uVar180 = uVar49;
        fVar178 = fVar93;
        fVar179 = fVar88;
        fVar168 = fVar88;
        fVar172 = fVar88;
        fVar182 = fVar89;
        fVar183 = fVar89;
        fVar184 = fVar89;
        func_0x00010840dfdc();
        func_0x00010840de7c();
        auVar77._0_4_ = ABS((float)extraout_d1_00);
        auVar77._4_4_ = ABS((float)((ulong)extraout_d1_00 >> 0x20));
        auVar77._8_4_ = ABS((float)extraout_var_14);
        auVar77._12_4_ = ABS((float)((ulong)extraout_var_14 >> 0x20));
        auVar187 = NEON_ucvtf(auVar77,4);
        fVar90 = auVar187._0_4_ * fVar95;
        fVar177 = auVar187._4_4_ * fVar100;
        fVar166 = auVar187._8_4_ * fVar102;
        fVar86 = auVar187._12_4_ * fVar104;
        func_0x00010840dfdc();
        auVar121._0_4_ = fVar90 * fVar169;
        auVar121._4_4_ = fVar177 * fVar169;
        auVar121._8_4_ = fVar166 * fVar169;
        auVar121._12_4_ = fVar86 * fVar169;
        func_0x00010840de7c();
        auVar76._8_8_ = extraout_var_15;
        auVar76._0_8_ = extraout_d1_01;
        auVar77 = auVar77 ^ (auVar77 ^ auVar121) & auVar76;
        fVar90 = (float)CONCAT13(extraout_var_28,
                                 CONCAT12(extraout_var_25,CONCAT11(extraout_var_22,extraout_b17_00))
                                );
        auVar118._0_4_ = fVar88 + auVar77._0_4_ * fVar90;
        auVar118._4_4_ = fVar179 + auVar77._4_4_ * fVar90;
        auVar118._8_4_ = fVar168 + auVar77._8_4_ * fVar90;
        auVar118._12_4_ = fVar172 + auVar77._12_4_ * fVar90;
        auVar187 = NEON_fmax(auVar118,auVar185,4);
        auVar78._0_4_ = auVar187._0_4_ / (fVar89 + auVar77._0_4_ * fVar105);
        auVar78._4_4_ = auVar187._4_4_ / (fVar182 + auVar77._4_4_ * fVar105);
        auVar78._8_4_ = auVar187._8_4_ / (fVar183 + auVar77._8_4_ * fVar105);
        auVar78._12_4_ = auVar187._12_4_ / (fVar184 + auVar77._12_4_ * fVar105);
        NEON_scvtf(auVar78,4);
        func_0x00010840dfdc();
        func_0x00010840de7c();
        fVar90 = ABS((float)extraout_d2_01);
        fVar123 = (float)((ulong)extraout_d2_01 >> 0x20);
        fVar177 = ABS(fVar123);
        bVar106 = SUB41(fVar177,0);
        bVar107 = (byte)((uint)fVar177 >> 8);
        bVar108 = (byte)((uint)fVar177 >> 0x10);
        bVar109 = (byte)((uint)fVar177 >> 0x18);
        fVar166 = ABS((float)extraout_var_18);
        bVar110 = SUB41(fVar166,0);
        bVar111 = (byte)((uint)fVar166 >> 8);
        bVar112 = (byte)((uint)fVar166 >> 0x10);
        bVar113 = (byte)((uint)fVar166 >> 0x18);
        fVar84 = (float)((ulong)extraout_var_18 >> 0x20);
        fVar86 = ABS(fVar84);
        bVar114 = SUB41(fVar86,0);
        bVar115 = (byte)((uint)fVar86 >> 8);
        bVar116 = (byte)((uint)fVar86 >> 0x10);
        bVar117 = (byte)((uint)fVar86 >> 0x18);
        iVar63 = -(uint)((float)extraout_d2_01 == 0.0);
        iVar70 = -(uint)(fVar123 == 0.0);
        iVar71 = -(uint)((float)extraout_var_18 == 0.0);
        iVar72 = -(uint)(fVar84 == 0.0);
        iVar94 = -(uint)(fVar90 == auVar186._0_4_);
        iVar99 = -(uint)(fVar177 == auVar186._4_4_);
        iVar101 = -(uint)(fVar166 == auVar186._8_4_);
        iVar103 = -(uint)(fVar86 == auVar186._12_4_);
        auVar81[0] = ~(byte)iVar63 & ~(byte)iVar94;
        auVar81[1] = ~(byte)((uint)iVar63 >> 8) & ~(byte)((uint)iVar94 >> 8);
        auVar81[2] = ~(byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
        auVar81[3] = ~(byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
        auVar81[4] = ~(byte)iVar70 & ~(byte)iVar99;
        auVar81[5] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar99 >> 8);
        auVar81[6] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10);
        auVar81[7] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18);
        auVar81[8] = ~(byte)iVar71 & ~(byte)iVar101;
        auVar81[9] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar101 >> 8);
        auVar81[10] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar101 >> 0x10);
        auVar81[0xb] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18);
        auVar81[0xc] = ~(byte)iVar72 & ~(byte)iVar103;
        auVar81[0xd] = ~(byte)((uint)iVar72 >> 8) & ~(byte)((uint)iVar103 >> 8);
        auVar81[0xe] = ~(byte)((uint)iVar72 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10);
        auVar81[0xf] = ~(byte)((uint)iVar72 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18);
        auVar9[4] = bVar106;
        auVar9._0_4_ = fVar90;
        auVar9[5] = bVar107;
        auVar9[6] = bVar108;
        auVar9[7] = bVar109;
        auVar9[8] = bVar110;
        auVar9[9] = bVar111;
        auVar9[10] = bVar112;
        auVar9[0xb] = bVar113;
        auVar9[0xc] = bVar114;
        auVar9[0xd] = bVar115;
        auVar9[0xe] = bVar116;
        auVar9[0xf] = bVar117;
        auVar186 = NEON_ucvtf(auVar9,4);
        uVar96 = CONCAT13((byte)((uint)fVar90 >> 0x18) & bVar131,
                          CONCAT12((byte)((uint)fVar90 >> 0x10) & bVar130,
                                   CONCAT11((byte)((uint)fVar90 >> 8) & bVar129,
                                            SUB41(fVar90,0) & bVar127)));
        auVar120._0_8_ =
             CONCAT17(bVar109 & bVar135,
                      CONCAT16(bVar108 & bVar134,
                               CONCAT15(bVar107 & bVar133,CONCAT14(bVar106 & bVar132,uVar96))));
        auVar120[8] = bVar110 & bVar136;
        auVar120[9] = bVar111 & bVar137;
        auVar120[10] = bVar112 & bVar138;
        auVar120[0xb] = bVar113 & bVar139;
        auVar122[0xc] = bVar114 & bVar140;
        auVar122._0_12_ = auVar120;
        auVar122[0xd] = bVar115 & bVar141;
        auVar122[0xe] = bVar116 & bVar142;
        auVar122[0xf] = bVar117 & bVar143;
        uVar61 = CONCAT44((int)((ulong)auVar120._0_8_ >> 0x20),uVar96) | 0x3f0000003f000000;
        fVar86 = (float)(auVar120._8_4_ | 0x3f000000);
        fVar123 = (float)(auVar122._12_4_ | 0x3f000000);
        fVar177 = (float)uVar61;
        fVar166 = (float)(uVar61 >> 0x20);
        fVar177 = ((auVar186._0_4_ * fVar95 + extraout_s18_00 + extraout_s19 * fVar177) -
                  extraout_s21_00 / (fVar177 + fVar154)) * fVar169;
        fVar166 = ((auVar186._4_4_ * fVar100 + extraout_var_34 + extraout_var_35 * fVar166) -
                  extraout_var_37 / (fVar166 + fVar155)) * fVar169;
        fVar86 = ((auVar186._8_4_ * fVar102 + fVar93 + fVar119 * fVar86) -
                 fVar158 / (fVar86 + fVar156)) * fVar169;
        fVar169 = ((auVar186._12_4_ * fVar104 + fVar178 + fVar176 * fVar123) -
                  fVar152 / (fVar123 + fVar157)) * fVar169;
        auVar170._0_4_ =
             (fVar177 + fVar162 + extraout_s23_00 * (fVar177 - (float)(int)fVar177) +
             extraout_s26_00 / (extraout_s24_00 - (fVar177 - (float)(int)fVar177))) *
             extraout_s27_00;
        auVar170._4_4_ =
             (fVar166 + fVar163 + extraout_var_39 * (fVar166 - (float)(int)fVar166) +
             extraout_var_43 / (extraout_var_41 - (fVar166 - (float)(int)fVar166))) *
             extraout_var_45;
        auVar170._8_4_ =
             (fVar86 + fVar164 + fVar159 * (fVar86 - (float)(int)fVar86) +
             fVar161 / (fVar160 - (fVar86 - (float)(int)fVar86))) * fVar174;
        auVar170._12_4_ =
             (fVar169 + fVar165 + fVar153 * (fVar169 - (float)(int)fVar169) +
             fVar173 / (fVar167 - (fVar169 - (float)(int)fVar169))) * fVar175;
        auVar186 = NEON_fmax(auVar170,auVar185,4);
        auVar16._4_4_ = extraout_var_46;
        auVar16._0_4_ = extraout_s28;
        auVar16._8_4_ = uVar49;
        auVar16._12_4_ = uVar180;
        auVar186 = NEON_fmin(auVar186,auVar16,4);
        auVar171._0_4_ = (int)auVar186._0_4_;
        auVar171._4_4_ = (int)auVar186._4_4_;
        auVar171._8_4_ = (int)auVar186._8_4_;
        auVar171._12_4_ = (int)auVar186._12_4_;
        auVar10[4] = bVar106;
        auVar10._0_4_ = fVar90;
        auVar10[5] = bVar107;
        auVar10[6] = bVar108;
        auVar10[7] = bVar109;
        auVar10[8] = bVar110;
        auVar10[9] = bVar111;
        auVar10[10] = bVar112;
        auVar10[0xb] = bVar113;
        auVar10[0xc] = bVar114;
        auVar10[0xd] = bVar115;
        auVar10[0xe] = bVar116;
        auVar10[0xf] = bVar117;
        auVar82[4] = bVar106;
        auVar82._0_4_ = fVar90;
        auVar82[5] = bVar107;
        auVar82[6] = bVar108;
        auVar82[7] = bVar109;
        auVar82[8] = bVar110;
        auVar82[9] = bVar111;
        auVar82[10] = bVar112;
        auVar82[0xb] = bVar113;
        auVar82[0xc] = bVar114;
        auVar82[0xd] = bVar115;
        auVar82[0xe] = bVar116;
        auVar82[0xf] = bVar117;
        auVar82 = auVar82 ^ (auVar10 ^ auVar171) & auVar81;
        fVar90 = (float)CONCAT13(extraout_var_29,
                                 CONCAT12(extraout_var_26,CONCAT11(extraout_var_23,extraout_b17_01))
                                );
        auVar91._0_4_ = fVar88 + auVar82._0_4_ * fVar90;
        auVar91._4_4_ = fVar179 + auVar82._4_4_ * fVar90;
        auVar91._8_4_ = fVar168 + auVar82._8_4_ * fVar90;
        auVar91._12_4_ = fVar172 + auVar82._12_4_ * fVar90;
        auVar186 = NEON_fmax(auVar91,auVar185,4);
        auVar83._0_4_ = auVar186._0_4_ / (fVar89 + auVar82._0_4_ * fVar105);
        auVar83._4_4_ = auVar186._4_4_ / (fVar182 + auVar82._4_4_ * fVar105);
        auVar83._8_4_ = auVar186._8_4_ / (fVar183 + auVar82._8_4_ * fVar105);
        auVar83._12_4_ = auVar186._12_4_ / (fVar184 + auVar82._12_4_ * fVar105);
        auVar186 = NEON_scvtf(auVar83,4);
        uVar96 = CONCAT13((byte)((uint)auVar83._0_4_ >> 0x18) & bVar131,
                          CONCAT12((byte)((uint)auVar83._0_4_ >> 0x10) & bVar130,
                                   CONCAT11((byte)((uint)auVar83._0_4_ >> 8) & bVar129,
                                            SUB41(auVar83._0_4_,0) & bVar127)));
        auVar97._0_8_ =
             CONCAT17((byte)((uint)auVar83._4_4_ >> 0x18) & bVar135,
                      CONCAT16((byte)((uint)auVar83._4_4_ >> 0x10) & bVar134,
                               CONCAT15((byte)((uint)auVar83._4_4_ >> 8) & bVar133,
                                        CONCAT14(SUB41(auVar83._4_4_,0) & bVar132,uVar96))));
        auVar97[8] = SUB41(auVar83._8_4_,0) & bVar136;
        auVar97[9] = (byte)((uint)auVar83._8_4_ >> 8) & bVar137;
        auVar97[10] = (byte)((uint)auVar83._8_4_ >> 0x10) & bVar138;
        auVar97[0xb] = (byte)((uint)auVar83._8_4_ >> 0x18) & bVar139;
        auVar98[0xc] = SUB41(auVar83._12_4_,0) & bVar140;
        auVar98._0_12_ = auVar97;
        auVar98[0xd] = (byte)((uint)auVar83._12_4_ >> 8) & bVar141;
        auVar98[0xe] = (byte)((uint)auVar83._12_4_ >> 0x10) & bVar142;
        auVar98[0xf] = (byte)((uint)auVar83._12_4_ >> 0x18) & bVar143;
        uVar61 = CONCAT44((int)((ulong)auVar97._0_8_ >> 0x20),uVar96) | 0x3f0000003f000000;
        fVar177 = (float)(auVar97._8_4_ | 0x3f000000);
        fVar166 = (float)(auVar98._12_4_ | 0x3f000000);
        fVar89 = (float)uVar61;
        fVar90 = (float)(uVar61 >> 0x20);
        fVar88 = (float)CONCAT13(extraout_var_55,
                                 CONCAT12(extraout_var_52,CONCAT11(extraout_var_49,extraout_b30_01))
                                );
        fVar89 = ((auVar186._0_4_ * fVar95 + extraout_s18_00 + extraout_s19 * fVar89) -
                 extraout_s21_00 / (fVar89 + fVar154)) * fVar88;
        fVar90 = ((auVar186._4_4_ * fVar100 + extraout_var_34 + extraout_var_35 * fVar90) -
                 extraout_var_37 / (fVar90 + fVar155)) * fVar88;
        fVar93 = ((auVar186._8_4_ * fVar102 + fVar93 + fVar119 * fVar177) -
                 fVar158 / (fVar177 + fVar156)) * fVar88;
        fVar88 = ((auVar186._12_4_ * fVar104 + fVar178 + fVar176 * fVar166) -
                 fVar152 / (fVar166 + fVar157)) * fVar88;
        auVar92._0_4_ =
             (fVar89 + fVar162 + extraout_s23_00 * (fVar89 - (float)(int)fVar89) +
             extraout_s26_00 / (extraout_s24_00 - (fVar89 - (float)(int)fVar89))) * extraout_s27_00;
        auVar92._4_4_ =
             (fVar90 + fVar163 + extraout_var_39 * (fVar90 - (float)(int)fVar90) +
             extraout_var_43 / (extraout_var_41 - (fVar90 - (float)(int)fVar90))) * extraout_var_45;
        auVar92._8_4_ =
             (fVar93 + fVar164 + fVar159 * (fVar93 - (float)(int)fVar93) +
             fVar161 / (fVar160 - (fVar93 - (float)(int)fVar93))) * fVar174;
        auVar92._12_4_ =
             (fVar88 + fVar165 + fVar153 * (fVar88 - (float)(int)fVar88) +
             fVar173 / (fVar167 - (fVar88 - (float)(int)fVar88))) * fVar175;
        auVar185 = NEON_fmax(auVar92,auVar185,4);
        auVar17._4_4_ = extraout_var_46;
        auVar17._0_4_ = extraout_s28;
        auVar17._8_4_ = uVar49;
        auVar17._12_4_ = uVar180;
        NEON_fmin(auVar185,auVar17,4);
        pfVar38 = pfVar38 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pfVar38)();
        return pfVar38;
      case (undefined **)0xb1:
        return pfVar38;
      case (undefined **)0xb2:
        goto LAB_10841bf94;
      case (undefined **)0xb3:
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        pfVar58[-0x2a] = 5.775169e-34;
        pfVar58[-0x29] = 1.4013e-45;
        if (pfRam000000011372b608 == (float *)0x0) {
          pfVar58[-0x34] = 3.92364e-44;
          pfVar53 = (float *)PTR_PTR_1126ae978;
          func_0x00010bf00dc0();
          func_0x00010c2289e0();
          pfRam000000011372b608 = pfVar53;
        }
        return pfRam000000011372b608;
      case (undefined **)0xb5:
        goto code_r0x000108411b74;
      case (undefined **)0xbe:
        in_s16 = 2.1158898e-37;
        fVar93 = ABS(fVar166) * extraout_s18 + 2.1158898e-37;
        fVar119 = ABS(fVar86) * extraout_s18 + 2.1158898e-37;
        fVar160 = ABS((float)extraout_var) * extraout_s18 + 2.1158898e-37;
        fVar161 = ABS(fVar176) * extraout_s18 + 2.1158898e-37;
        uVar144 = 0;
        uVar145 = 0;
        uVar146 = 0;
        uVar147 = 0;
        uVar148 = 0;
        uVar149 = 0;
        uVar150 = 0;
        uVar151 = 0;
        in_register_00005228 = 0;
        in_register_00005229 = 0;
        in_register_0000522a = 0;
        in_register_0000522b = 0;
        in_register_0000522c = 0;
        in_register_0000522d = 0;
        in_register_0000522e = 0;
        in_register_0000522f = 0;
        NEON_fmov(0x3f800000,4);
        auVar187[4] = SUB41(fVar119,0);
        auVar187._0_4_ = fVar93;
        auVar187[5] = (char)((uint)fVar119 >> 8);
        auVar187[6] = (char)((uint)fVar119 >> 0x10);
        auVar187[7] = (char)((uint)fVar119 >> 0x18);
        auVar187[8] = SUB41(fVar160,0);
        auVar187[9] = (char)((uint)fVar160 >> 8);
        auVar187[10] = (char)((uint)fVar160 >> 0x10);
        auVar187[0xb] = (char)((uint)fVar160 >> 0x18);
        auVar187[0xc] = SUB41(fVar161,0);
        auVar187[0xd] = (char)((uint)fVar161 >> 8);
        auVar187[0xe] = (char)((uint)fVar161 >> 0x10);
        auVar187[0xf] = (char)((uint)fVar161 >> 0x18);
        auVar185 = NEON_scvtf(auVar187,4);
        fVar158 = 1.1920929e-07;
        fVar159 = 1.1920929e-07;
        in_register_000052a8 = 1.1920929e-07;
        in_register_000052ac = 1.1920929e-07;
        in_register_000052cc = 0xff;
        in_register_000052cd = 0xff;
        in_register_000052ce = 0x7f;
        in_register_000052cf = 0;
        in_b22 = 0xff;
        in_register_000052c1 = 0xff;
        in_register_000052c2 = 0x7f;
        in_register_000052c3 = 0;
        in_register_000052c4 = 0xff;
        in_register_000052c5 = 0xff;
        in_register_000052c6 = 0x7f;
        in_register_000052c7 = 0;
        in_register_000052c8 = 0xff;
        in_register_000052c9 = 0xff;
        in_register_000052ca = 0x7f;
        in_register_000052cb = 0;
        fVar88 = (float)(SUB43(fVar93,0) & 0x7fffff | 0x3f000000);
        fVar89 = (float)(SUB43(fVar119,0) & 0x7fffff | 0x3f000000);
        in_register_00005348 = (float)(SUB43(fVar160,0) & 0x7fffff | 0x3f000000);
        in_register_0000534c = (float)(SUB43(fVar161,0) & 0x7fffff | 0x3f000000);
        fVar93 = -124.22552;
        fVar119 = -1.4980303;
        fVar90 = auVar185._0_4_ * 1.1920929e-07 + -124.22552 + fVar88 * -1.4980303;
        fVar177 = auVar185._4_4_ * 1.1920929e-07 + -124.22552 + fVar89 * -1.4980303;
        in_register_00005368 =
             auVar185._8_4_ * 1.1920929e-07 + -124.22552 + in_register_00005348 * -1.4980303;
        in_register_0000536c =
             auVar185._12_4_ * 1.1920929e-07 + -124.22552 + in_register_0000534c * -1.4980303;
        uVar56 = 0x44f9;
        fVar160 = fVar93;
        in_register_000052e8 = fVar93;
        in_register_000052ec = fVar93;
        fVar161 = fVar119;
        in_register_00005308 = fVar119;
        in_register_0000530c = fVar119;
        in_register_00005204 = in_s16;
        in_register_00005208 = in_s16;
        in_register_0000520c = in_s16;
code_r0x00010840bb18:
        fVar166 = (float)(uVar56 & 0xffff | 0x3eb40000);
        uVar61 = CONCAT44(uVar56,uVar56) & 0xffff0000ffff;
        fVar168 = (float)((uint)uVar61 | 0x3eb40000);
        fVar172 = (float)((uint)(uVar61 >> 0x20) | 0x3eb40000);
        fVar86 = in_q5._0_4_;
        fVar176 = fVar86 * (fVar90 - 1.72588 / (fVar88 + fVar168));
        fVar88 = in_q5._4_4_;
        fVar177 = fVar88 * (fVar177 - 1.72588 / (fVar89 + fVar172));
        fVar89 = in_q5._8_4_;
        fVar178 = fVar89 * (in_register_00005368 - 1.72588 / (in_register_00005348 + fVar166));
        fVar90 = in_q5._12_4_;
        fVar179 = fVar90 * (in_register_0000536c - 1.72588 / (in_register_0000534c + fVar166));
        auVar124._0_4_ =
             (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
        auVar124._4_4_ =
             (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
        auVar124._8_4_ =
             (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
        auVar124._12_4_ =
             (fVar179 + 121.274055 + (fVar179 - (float)(int)fVar179) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar179 - (float)(int)fVar179))) * 8388608.0;
        auVar11[1] = uVar145;
        auVar11[0] = uVar144;
        auVar11[2] = uVar146;
        auVar11[3] = uVar147;
        auVar11[4] = uVar148;
        auVar11[5] = uVar149;
        auVar11[6] = uVar150;
        auVar11[7] = uVar151;
        auVar11[8] = in_register_00005228;
        auVar11[9] = in_register_00005229;
        auVar11[10] = in_register_0000522a;
        auVar11[0xb] = in_register_0000522b;
        auVar11[0xc] = in_register_0000522c;
        auVar11[0xd] = in_register_0000522d;
        auVar11[0xe] = in_register_0000522e;
        auVar11[0xf] = in_register_0000522f;
        auVar185 = NEON_fmax(auVar124,auVar11,4);
        auVar6._8_4_ = 0x4eff0000;
        auVar6._0_8_ = 0x4eff00004eff0000;
        auVar6._12_4_ = 0x4eff0000;
        NEON_fmin(auVar185,auVar6,4);
        auVar125._0_4_ = in_s16 + ABS((float)extraout_d1) * extraout_s18;
        auVar125._4_4_ =
             in_register_00005204 + ABS((float)((ulong)extraout_d1 >> 0x20)) * extraout_s18;
        auVar125._8_4_ = in_register_00005208 + ABS((float)extraout_var_10) * extraout_s18;
        auVar125._12_4_ =
             in_register_0000520c + ABS((float)((ulong)extraout_var_10 >> 0x20)) * extraout_s18;
        auVar185 = NEON_scvtf(auVar125,4);
        uVar36 = CONCAT13((byte)((uint)auVar125._0_4_ >> 0x18) & in_register_000052c3,
                          CONCAT12((byte)((uint)auVar125._0_4_ >> 0x10) & in_register_000052c2,
                                   CONCAT11((byte)((uint)auVar125._0_4_ >> 8) & in_register_000052c1
                                            ,SUB41(auVar125._0_4_,0) & in_b22)));
        uVar56 = CONCAT13((byte)((uint)auVar125._8_4_ >> 0x18) & in_register_000052cb,
                          CONCAT12((byte)((uint)auVar125._8_4_ >> 0x10) & in_register_000052ca,
                                   CONCAT11((byte)((uint)auVar125._8_4_ >> 8) & in_register_000052c9
                                            ,SUB41(auVar125._8_4_,0) & in_register_000052c8)));
        fVar177 = (float)(uVar36 | 0x3f000000);
        fVar176 = (float)((uint)(CONCAT17((byte)((uint)auVar125._4_4_ >> 0x18) &
                                          in_register_000052c7,
                                          CONCAT16((byte)((uint)auVar125._4_4_ >> 0x10) &
                                                   in_register_000052c6,
                                                   CONCAT15((byte)((uint)auVar125._4_4_ >> 8) &
                                                            in_register_000052c5,
                                                            CONCAT14(SUB41(auVar125._4_4_,0) &
                                                                     in_register_000052c4,uVar36))))
                                >> 0x20) | 0x3f000000);
        fVar178 = (float)(uVar56 | 0x3f000000);
        fVar179 = (float)((uint)(CONCAT17((byte)((uint)auVar125._12_4_ >> 0x18) &
                                          in_register_000052cf,
                                          CONCAT16((byte)((uint)auVar125._12_4_ >> 0x10) &
                                                   in_register_000052ce,
                                                   CONCAT15((byte)((uint)auVar125._12_4_ >> 8) &
                                                            in_register_000052cd,
                                                            CONCAT14(SUB41(auVar125._12_4_,0) &
                                                                     in_register_000052cc,uVar56))))
                                >> 0x20) | 0x3f000000);
        fVar177 = fVar86 * ((auVar185._0_4_ * fVar158 + fVar93 + fVar119 * fVar177) -
                           1.72588 / (fVar177 + fVar168));
        fVar176 = fVar88 * ((auVar185._4_4_ * fVar159 + fVar160 + fVar161 * fVar176) -
                           1.72588 / (fVar176 + fVar172));
        fVar178 = fVar89 * ((auVar185._8_4_ * in_register_000052a8 + in_register_000052e8 +
                            in_register_00005308 * fVar178) - 1.72588 / (fVar178 + fVar166));
        fVar179 = fVar90 * ((auVar185._12_4_ * in_register_000052ac + in_register_000052ec +
                            in_register_0000530c * fVar179) - 1.72588 / (fVar179 + fVar166));
        auVar126._0_4_ =
             (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
        auVar126._4_4_ =
             (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
        auVar126._8_4_ =
             (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
        auVar126._12_4_ =
             (fVar179 + 121.274055 + (fVar179 - (float)(int)fVar179) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar179 - (float)(int)fVar179))) * 8388608.0;
        auVar12[1] = uVar145;
        auVar12[0] = uVar144;
        auVar12[2] = uVar146;
        auVar12[3] = uVar147;
        auVar12[4] = uVar148;
        auVar12[5] = uVar149;
        auVar12[6] = uVar150;
        auVar12[7] = uVar151;
        auVar12[8] = in_register_00005228;
        auVar12[9] = in_register_00005229;
        auVar12[10] = in_register_0000522a;
        auVar12[0xb] = in_register_0000522b;
        auVar12[0xc] = in_register_0000522c;
        auVar12[0xd] = in_register_0000522d;
        auVar12[0xe] = in_register_0000522e;
        auVar12[0xf] = in_register_0000522f;
        auVar185 = NEON_fmax(auVar126,auVar12,4);
        auVar7._8_4_ = 0x4eff0000;
        auVar7._0_8_ = 0x4eff00004eff0000;
        auVar7._12_4_ = 0x4eff0000;
        NEON_fmin(auVar185,auVar7,4);
        auVar128._0_4_ = in_s16 + ABS(fVar152) * extraout_s18;
        auVar128._4_4_ = in_register_00005204 + ABS(fVar153) * extraout_s18;
        auVar128._8_4_ = in_register_00005208 + ABS(fVar167) * extraout_s18;
        auVar128._12_4_ = in_register_0000520c + ABS(fVar173) * extraout_s18;
        auVar185 = NEON_scvtf(auVar128,4);
        uVar36 = CONCAT13((byte)((uint)auVar128._8_4_ >> 0x18) & in_register_000052cb,
                          CONCAT12((byte)((uint)auVar128._8_4_ >> 0x10) & in_register_000052ca,
                                   CONCAT11((byte)((uint)auVar128._8_4_ >> 8) & in_register_000052c9
                                            ,SUB41(auVar128._8_4_,0) & in_register_000052c8)));
        fVar177 = (float)(CONCAT13((byte)((uint)auVar128._0_4_ >> 0x18) & in_register_000052c3,
                                   CONCAT12((byte)((uint)auVar128._0_4_ >> 0x10) &
                                            in_register_000052c2,
                                            CONCAT11((byte)((uint)auVar128._0_4_ >> 8) &
                                                     in_register_000052c1,
                                                     SUB41(auVar128._0_4_,0) & in_b22))) |
                         0x3f000000);
        fVar176 = (float)(CONCAT13((byte)((uint)auVar128._4_4_ >> 0x18) & in_register_000052c7,
                                   CONCAT12((byte)((uint)auVar128._4_4_ >> 0x10) &
                                            in_register_000052c6,
                                            CONCAT11((byte)((uint)auVar128._4_4_ >> 8) &
                                                     in_register_000052c5,
                                                     SUB41(auVar128._4_4_,0) & in_register_000052c4)
                                           )) | 0x3f000000);
        fVar152 = (float)(uVar36 | 0x3f000000);
        fVar153 = (float)((uint)(CONCAT17((byte)((uint)auVar128._12_4_ >> 0x18) &
                                          in_register_000052cf,
                                          CONCAT16((byte)((uint)auVar128._12_4_ >> 0x10) &
                                                   in_register_000052ce,
                                                   CONCAT15((byte)((uint)auVar128._12_4_ >> 8) &
                                                            in_register_000052cd,
                                                            CONCAT14(SUB41(auVar128._12_4_,0) &
                                                                     in_register_000052cc,uVar36))))
                                >> 0x20) | 0x3f000000);
        fVar86 = fVar86 * ((auVar185._0_4_ * fVar158 + fVar93 + fVar119 * fVar177) -
                          1.72588 / (fVar177 + fVar168));
        fVar88 = fVar88 * ((auVar185._4_4_ * fVar159 + fVar160 + fVar161 * fVar176) -
                          1.72588 / (fVar176 + fVar172));
        fVar89 = fVar89 * ((auVar185._8_4_ * in_register_000052a8 + in_register_000052e8 +
                           in_register_00005308 * fVar152) - 1.72588 / (fVar152 + fVar166));
        fVar90 = fVar90 * ((auVar185._12_4_ * in_register_000052ac + in_register_000052ec +
                           in_register_0000530c * fVar153) - 1.72588 / (fVar153 + fVar166));
        auVar87._0_4_ =
             (fVar86 + 121.274055 + (fVar86 - (float)(int)fVar86) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar86 - (float)(int)fVar86))) * 8388608.0;
        auVar87._4_4_ =
             (fVar88 + 121.274055 + (fVar88 - (float)(int)fVar88) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar88 - (float)(int)fVar88))) * 8388608.0;
        auVar87._8_4_ =
             (fVar89 + 121.274055 + (fVar89 - (float)(int)fVar89) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar89 - (float)(int)fVar89))) * 8388608.0;
        auVar87._12_4_ =
             (fVar90 + 121.274055 + (fVar90 - (float)(int)fVar90) * -1.4901291 +
             27.728024 / (4.8425255 - (fVar90 - (float)(int)fVar90))) * 8388608.0;
        auVar13[1] = uVar145;
        auVar13[0] = uVar144;
        auVar13[2] = uVar146;
        auVar13[3] = uVar147;
        auVar13[4] = uVar148;
        auVar13[5] = uVar149;
        auVar13[6] = uVar150;
        auVar13[7] = uVar151;
        auVar13[8] = in_register_00005228;
        auVar13[9] = in_register_00005229;
        auVar13[10] = in_register_0000522a;
        auVar13[0xb] = in_register_0000522b;
        auVar13[0xc] = in_register_0000522c;
        auVar13[0xd] = in_register_0000522d;
        auVar13[0xe] = in_register_0000522e;
        auVar13[0xf] = in_register_0000522f;
        auVar185 = NEON_fmax(auVar87,auVar13,4);
        auVar8._8_4_ = 0x4eff0000;
        auVar8._0_8_ = 0x4eff00004eff0000;
        auVar8._12_4_ = 0x4eff0000;
        NEON_fmin(auVar185,auVar8,4);
        pfVar38 = pfVar38 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pfVar38)();
        return pfVar38;
      case (undefined **)0xc0:
        goto code_r0x000108418fa8;
      case (undefined **)0xc1:
        func_0x00010bf00dc0();
        func_0x00010c2289e0();
        *(float **)(unaff_x20 + 0x192) = pfVar38;
        return pfVar38;
      case (undefined **)0xc2:
      case (undefined **)0xdb:
        unaff_x21 = (float *)0x11372b000;
        if (pfRam000000011372b720 != (float *)0x0) {
          return pfRam000000011372b720;
        }
        pfVar58[-0x28] = 3.92364e-44;
        pfVar38 = (float *)PTR_PTR_1126ae978;
code_r0x000108417fb4:
        func_0x00010bf00dc0();
        func_0x00010c229040();
        func_0x00010c228780(pfVar38);
        *(float **)(unaff_x21 + 0x1c8) = pfVar38;
        return pfVar38;
      case (undefined **)0xc6:
      case (undefined **)0xd2:
      case (undefined **)0xdf:
        goto code_r0x0001083feaf4;
      case (undefined **)0xcc:
        pfVar43 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x20 = pfVar38;
code_r0x000108411ab8:
        func_0x00010bf20c00();
        func_0x00010c013de0(unaff_x20);
        func_0x00010c182b00(param_1);
        _objc_release(unaff_x20);
        _objc_release(pfVar43);
        pfVar45 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16d4a0();
        _objc_release(pfVar45);
        unaff_x20 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = param_1;
        func_0x00010bf4dce0(param_1);
code_r0x000108411b2c:
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(unaff_x20);
        _objc_release(pfVar38);
        _objc_release(unaff_x20);
        unaff_x20 = (float *)PTR_PTR_1126b56b0;
        _objc_opt_new();
        unaff_x21 = (float *)PTR__OBJC_CLASS___UICollectionView_1126afd20;
        _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
        pfVar38 = param_1;
code_r0x000108411b74:
        func_0x00010bf4dce0();
        _objc_retainAutoreleasedReturnValue();
code_r0x000108411b80:
        func_0x00010bf20c00();
        func_0x00010c014040(unaff_x21);
        func_0x00010c1ed580(param_1);
        _objc_release(unaff_x21);
        _objc_release(pfVar38);
        pfVar38 = param_1;
        func_0x00010c13cf80(param_1);
code_r0x000108411bc0:
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e0700();
        _objc_release(pfVar38);
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16d4a0();
        _objc_release(pfVar45);
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c167a20();
        _objc_release(pfVar45);
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(pfVar45);
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2026e0();
        _objc_release(pfVar45);
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c181fc0();
        _objc_release(pfVar45);
        puVar42 = PTR_PTR_1126b1150;
        _objc_alloc();
        func_0x00010c03fd60();
        lVar51 = (long)(int)unaff_x27[0xc];
        uVar62 = *(undefined8 *)((long)param_1 + lVar51);
        *(undefined **)((long)param_1 + lVar51) = puVar42;
        _objc_release(uVar62);
        func_0x00010bef9980(*(undefined8 *)((long)param_1 + lVar51));
        func_0x00010c18b5e0(*(undefined8 *)((long)param_1 + lVar51));
        func_0x00010c17e720(*(undefined8 *)((long)param_1 + lVar51));
        fVar93 = unaff_x27[8];
        func_0x00010c1e6360(*(undefined8 *)((long)param_1 + lVar51));
        puVar42 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc();
        func_0x00010c050900();
        func_0x00010c178280();
        pfVar45 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040();
        _objc_release(pfVar45);
        pfVar45 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = param_1;
        func_0x00010c13cf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(pfVar45);
        _objc_release(pfVar38);
        _objc_release(pfVar45);
        uVar64 = *(undefined8 *)((long)param_1 + unaff_x24);
        func_0x00010c0d6280(uVar64);
        _objc_retainAutoreleasedReturnValue();
        uVar62 = uVar64;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        uVar65 = *(undefined8 *)((long)param_1 + (long)(int)fVar93);
        func_0x00010c11da20(uVar65);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139c0(uVar62);
        _objc_release(uVar65);
        _objc_release(uVar62);
        _objc_release(uVar64);
        *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xd]) = 0;
        pfVar45 = param_1;
        func_0x00010be0d940();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ***)(pfVar58 + -0x1e) = &PTR____CFConstantStringClassReference_110ed7978;
        *(undefined ***)(pfVar58 + -0x1c) = &PTR____CFConstantStringClassReference_110ed79f8;
        puVar44 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(pfVar45);
        _objc_release(puVar44);
        *(undefined ***)(pfVar58 + -0x22) = &PTR____CFConstantStringClassReference_110ed79b8;
        pfVar38 = param_1;
        func_0x00010c073ce0();
        ppuVar47 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
        if ((int)pfVar38 == 0) {
          ppuVar47 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
        }
        *(undefined ***)(pfVar58 + -0x20) = ppuVar47;
        puVar44 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(pfVar45);
        _objc_release(puVar44);
        uVar62 = *(undefined8 *)((long)param_1 + (long)(int)*unaff_x27);
        pfVar38 = param_1;
        _objc_opt_class(param_1);
        func_0x00010bf04780();
        _objc_retainAutoreleasedReturnValue();
        pfVar57 = pfVar45;
        func_0x00010bf51e00(pfVar45);
        func_0x00010bf7dbc0(uVar62);
        _objc_release(pfVar57);
        _objc_release(pfVar38);
        *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xe]) = 1;
        _objc_release(pfVar45);
        _objc_release(puVar42);
        pfVar38 = unaff_x20;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pfVar58 + -0x1a)) {
          return pfVar38;
        }
        ___stack_chk_fail();
        *(float **)(pfVar58 + -0x34) = pfVar45;
        *(undefined **)(pfVar58 + -0x32) = puVar42;
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        *(code **)(pfVar58 + -0x2a) = FUN_108411f7c;
        *(float **)(pfVar58 + -0x38) = pfVar38;
        *(undefined **)(pfVar58 + -0x36) = PTR_PTR_1126fc748;
        _objc_msgSendSuper2(pfVar58 + -0x38,PTR_s_viewWillAppear__1126853f0);
        func_0x00010beaf700(pfVar38);
        pfVar58 = *(float **)((long)pfVar38 + (long)_DAT_112774908);
        func_0x00010c0d6280(pfVar58);
        _objc_retainAutoreleasedReturnValue();
        pfVar53 = pfVar58;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        uVar64 = *(undefined8 *)((long)pfVar38 + (long)_DAT_1127748e4);
        func_0x00010bf5fc60(uVar64);
        _objc_retainAutoreleasedReturnValue();
        uVar62 = uVar64;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139c0(pfVar53);
        _objc_release(uVar62);
        _objc_release(uVar64);
        _objc_release(pfVar53);
        _objc_release(pfVar58);
        return pfVar58;
      case (undefined **)0xcf:
        *(undefined ***)(pfVar58 + -0x22) = ppuVar47;
        unaff_x21 = *(float **)((long)unaff_x20 + (long)ppuVar47);
        func_0x00010c15ffa0(unaff_x21);
        _objc_retainAutoreleasedReturnValue();
code_r0x00010841378c:
        func_0x00010c1d0640(param_1);
        _objc_release(unaff_x21);
        lVar51 = (long)(int)pfVar57[0xd];
        uVar64 = *(undefined8 *)((long)unaff_x20 + lVar51);
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        uVar62 = uVar64;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release(uVar62);
        _objc_release(uVar64);
        func_0x00010c1d0640(param_1);
        func_0x00010c1d0640(param_1);
        func_0x00010c1d0640(param_1);
        ppuVar39 = *(undefined ***)((long)unaff_x20 + lVar51);
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        ppuVar47 = ppuVar39;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        uVar65 = *(undefined8 *)((long)unaff_x20 + lVar51);
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        uVar64 = uVar65;
        func_0x00010c11d960();
        _objc_retainAutoreleasedReturnValue();
        lVar40 = *(long *)((long)unaff_x20 + lVar51);
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        lVar51 = lVar40;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        lVar46 = lVar51;
        func_0x00010c08fa60();
        uVar62 = 1;
        if (lVar46 != 0) {
          uVar62 = 2;
        }
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar47 != (undefined **)0x0) {
          ppuVar1 = ppuVar47;
        }
        *(undefined8 *)(pfVar58 + -0x26) = uVar64;
        *(undefined8 *)(pfVar58 + -0x24) = uVar62;
        *(undefined ***)(pfVar58 + -0x28) = ppuVar1;
        puVar42 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release(puVar42);
        _objc_release(lVar51);
        _objc_release(lVar40);
        _objc_release(uVar64);
        _objc_release(uVar65);
        _objc_release(ppuVar47);
        _objc_release(ppuVar39);
        uVar62 = *(undefined8 *)((long)unaff_x20 + (long)_DAT_1127748f8);
        func_0x00010c09ea00(uVar62);
        _objc_retainAutoreleasedReturnValue();
        puVar42 = PTR_PTR_1126b6598;
        func_0x00010bf51c80();
        func_0x00010bf33ee0();
        _objc_retainAutoreleasedReturnValue();
        puVar44 = puVar42;
        func_0x00010bfc6400();
        _objc_release(puVar42);
        *(undefined **)(pfVar58 + -0x28) = puVar44;
        puVar42 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release(puVar42);
        puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release(puVar42);
        puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08bda0();
        func_0x00010c0df780(puVar42);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_1);
        _objc_release(puVar42);
        _objc_release(uVar62);
        goto _objc_autoreleaseReturnValue;
      case (undefined **)0xd0:
        pfVar58[-0x28] = 3.92364e-44;
        pfVar38 = (float *)PTR_PTR_1126ae978;
code_r0x000108418fa8:
code_r0x000108418fbc:
        func_0x00010bf00dc0();
        *(float **)(param_1 + 0x20e) = pfVar38;
        return pfVar38;
      case (undefined **)0xd1:
        return pfVar38;
      case (undefined **)0xd8:
code_r0x0001084136ac:
        goto LAB_108413708;
      case (undefined **)0xd9:
        goto code_r0x000108418fbc;
      case (undefined **)0xda:
        pfVar53 = pfVar58 + -0x1c;
        pcVar48 = (code *)0x10841d3d8;
        goto code_r0x000109189420;
      case (undefined **)0xe5:
        return pfVar38;
      case (undefined **)0xe6:
        goto code_r0x00010841a3c4;
      case (undefined **)0xe7:
        _objc_msgSendSuper2(pfVar58 + -0x28,ppuVar47[0x129]);
        if (pfVar41 != (float *)0x0) {
          puVar42 = PTR__OBJC_CLASS___UILabel_1126aec30;
          _objc_opt_new();
          lVar51 = (long)_DAT_11277495c;
          uVar62 = *(undefined8 *)((long)pfVar41 + lVar51);
          *(undefined **)((long)pfVar41 + lVar51) = puVar42;
          _objc_release(uVar62);
          puVar42 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(*(undefined8 *)((long)pfVar41 + lVar51));
          _objc_release(puVar42);
          puVar42 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(*(undefined8 *)((long)pfVar41 + lVar51));
          _objc_release(puVar42);
          ppuVar47 = &PTR____CFConstantStringClassReference_110ea8fd8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(*(undefined8 *)((long)pfVar41 + lVar51));
          _objc_release(ppuVar47);
          func_0x00010c21e900(*(undefined8 *)((long)pfVar41 + lVar51));
          func_0x00010c1cfce0(*(undefined8 *)((long)pfVar41 + lVar51));
          func_0x00010befbb60(pfVar41);
        }
        return pfVar41;
      case (undefined **)0xe9:
        *(undefined8 *)(pfVar58 + -0x1e) = extraout_var;
        *(undefined8 *)(pfVar58 + -0x20) = extraout_d0;
        *(undefined8 *)(pfVar58 + -0x1a) = extraout_var;
        *(undefined8 *)(pfVar58 + -0x1c) = extraout_d0;
        _objc_retain(unaff_x20);
        pfVar38 = unaff_x20;
        func_0x00010bf52a60();
        if (pfVar38 != (float *)0x0) {
          lVar51 = **(long **)(pfVar58 + -0x24);
          do {
            pfVar43 = (float *)0x0;
            do {
              if (**(long **)(pfVar58 + -0x24) != lVar51) {
                _objc_enumerationMutation(unaff_x20);
              }
              func_0x00010c067ec0(*(undefined8 *)(*(long *)(pfVar58 + -0x26) + (long)pfVar43 * 8));
              func_0x00010befc800(unaff_x24);
              pfVar43 = (float *)((long)pfVar43 + 1);
            } while (pfVar38 != pfVar43);
            pfVar38 = unaff_x20;
            func_0x00010bf52a60();
          } while (pfVar38 != (float *)0x0);
        }
        _objc_release(unaff_x20);
        unaff_x25 = unaff_x23;
        func_0x00010bf4e840();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 == (float *)0x0) {
          ppuVar47 = &PTR_PTR_1126b2000;
code_r0x00010841a3c4:
          puVar42 = ppuVar47[0x6f];
          _objc_opt_new(puVar42);
          func_0x00010c183080(&UNK_10df26510);
          _objc_release(puVar42);
        }
        else {
          func_0x00010c183080(&UNK_10df26510);
code_r0x00010841a3bc:
        }
        _objc_release(unaff_x25);
        pfVar38 = pfVar57;
        func_0x00010c0d3c80(pfVar57);
        pfVar43 = unaff_x23;
        func_0x00010bf4e840(&UNK_10df26510);
        _objc_retainAutoreleasedReturnValue();
        pfVar32 = pfVar43;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6a60();
        _objc_release(pfVar32);
        _objc_release(pfVar43);
        _objc_release(pfVar38);
        pfVar38 = param_1;
        func_0x00010c0d3c80(param_1);
        pfVar43 = unaff_x23;
        func_0x00010bf4e840(&UNK_10df26510);
        _objc_retainAutoreleasedReturnValue();
        pfVar32 = pfVar43;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6a80();
        _objc_release(pfVar32);
        _objc_release(pfVar43);
        _objc_release(pfVar38);
        pfVar38 = unaff_x23;
        func_0x00010bf4e840(&UNK_10df26510);
        _objc_retainAutoreleasedReturnValue();
        pfVar43 = pfVar38;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6960();
        _objc_release(pfVar43);
        _objc_release(pfVar38);
        pfVar38 = unaff_x21;
        func_0x00010c0d3c80(unaff_x21);
        func_0x00010bf4e840(&UNK_10df26510);
        _objc_retainAutoreleasedReturnValue();
        pfVar43 = unaff_x23;
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c69a0();
        _objc_release(pfVar43);
        _objc_release(unaff_x23);
        _objc_release(pfVar38);
        _objc_release(unaff_x24);
        _objc_release(pfVar57);
        _objc_release(unaff_x21);
        _objc_release(unaff_x20);
        pfVar38 = param_1;
        _objc_release(param_1);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pfVar58 + -0x1a)) {
          return pfVar38;
        }
        pcVar48 = FUN_10841a57c;
        ___stack_chk_fail();
        pfVar38 = param_1;
code_r0x000109189420:
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = pfVar38;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        *(code **)(pfVar58 + -0x2a) = pcVar48;
        func_0x000107c3094c(pfVar45,pfVar58 + -0x32,pfVar58 + -0x34);
        if ((int)pfVar45 == 0) {
          param_1 = (float *)0x0;
        }
        else {
          param_1 = (float *)PTR_PTR_1126afad0;
          _objc_alloc_init(PTR_PTR_1126afad0);
          func_0x00010c1a85a0();
          func_0x00010c1c0fe0(param_1);
        }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
        return param_1;
      case (undefined **)0xea:
        return pfVar38;
      case (undefined **)0xeb:
        goto code_r0x000108411bc0;
      case (undefined **)0xf4:
                    /* WARNING: Could not recover jumptable at 0x00010840b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return pfVar38;
      case (undefined **)0xf5:
        return param_1;
      case (undefined **)0xf6:
        return pfVar38;
      case (undefined **)0xf7:
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(float **)(pfVar58 + -0x2c) = pfVar53;
        pfVar58[-0x2a] = 5.775169e-34;
        pfVar58[-0x29] = 1.4013e-45;
        pfVar53 = pfRam000000011372b698;
        if (pfRam000000011372b698 == (float *)0x0) {
          pfVar58[-0x34] = 3.92364e-44;
          pfVar53 = (float *)PTR_PTR_1126ae978;
          func_0x00010bf00dc0();
        }
        pfRam000000011372b698 = pfVar53;
        return pfVar53;
      case (undefined **)0xf8:
        goto code_r0x000108411b80;
      case (undefined **)0xfd:
        func_0x000108403810();
        func_0x0001084039e4();
        func_0x0001083f91a8();
        pfVar57 = param_1 + 0xc;
        iVar63 = 0x135;
        uVar180 = 1;
        pfVar53 = *(float **)(pfVar58 + -0x24);
        uVar62 = *(undefined8 *)(pfVar58 + -0x22);
        pfVar43 = pfVar58 + -0x20;
        goto SUB_1083f8fd0;
      case (undefined **)0xfe:
        _objc_retain(unaff_x21);
        pfVar53 = param_1;
        func_0x00010c0720c0();
        if ((int)pfVar53 != 0) {
          pfVar53 = pfVar57;
          func_0x00010c153720(pfVar57);
          _objc_retainAutoreleasedReturnValue();
          pfVar58 = pfVar53;
          func_0x00010c0d6280();
          _objc_retainAutoreleasedReturnValue();
          pfVar45 = pfVar58;
          func_0x00010c154720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c193b00();
          _objc_release(pfVar45);
          _objc_release(pfVar58);
          _objc_release(pfVar53);
          func_0x00010be01ce0(pfVar57);
          goto code_r0x0001084136ac;
        }
LAB_1084136b0:
        pfVar53 = pfVar57;
        func_0x00010be0d940(pfVar57);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60();
        uVar62 = *(undefined8 *)((long)pfVar57 + (long)_DAT_1127748e0);
        pfVar58 = pfVar53;
        func_0x00010bf51e00(pfVar53);
        func_0x00010bf7dbc0(uVar62);
        _objc_release(pfVar58);
        _objc_release(pfVar53);
LAB_108413708:
        _objc_release(unaff_x21);
        _objc_release(unaff_x20);
        goto code_r0x00010bdbf3e4;
      case (undefined **)0xff:
        func_0x00010c182300();
        param_1 = unaff_x21;
        goto code_r0x00010bdbf3e4;
      }
      break;
    case 4.34403e-44:
      func_0x000108403784();
      FUN_1084016cc();
      pfVar38 = pfVar57;
code_r0x0001083feac4:
      iVar63 = (int)pfVar38;
      if (((ulong)pfVar38 & 1) == 0) {
        func_0x0001084038cc();
        func_0x0001084017e4();
        func_0x000108403650();
        if (iVar63 == 0) goto code_r0x0001083ff774;
        func_0x000108403778();
        func_0x000108403bbc();
code_r0x0001083feae8:
        func_0x000108403764(*(undefined8 *)(unaff_x20 + 4));
code_r0x0001083feaf4:
        func_0x000108403878();
        func_0x0001083fa470();
      }
      break;
    case 4.48416e-44:
      pfVar38 = pfVar57;
code_r0x0001083feb04:
      iVar63 = (int)pfVar38;
      func_0x000108403650();
      if (iVar63 == 0) goto code_r0x0001083ff774;
      func_0x000108403bbc(**(undefined8 **)(*(long *)(unaff_x20 + 6) + 0x10));
code_r0x0001083feb1c:
      func_0x000108403764(*(undefined8 *)(*(long *)(unaff_x20 + 6) + 0x10));
      func_0x000108403778();
      func_0x000108403bbc();
      func_0x000108403764(*(undefined8 *)(unaff_x20 + 4));
      func_0x000108403878();
      FUN_1083fa4fc();
      break;
    case 4.76441e-44:
code_r0x0001083fec78:
      iVar63 = (int)pfVar57;
      func_0x000108403650();
      if (iVar63 == 0) goto code_r0x0001083ff774;
code_r0x0001083fec80:
      func_0x00010840359c();
      func_0x0001084038a8();
    case 5.04467e-44:
      break;
    case 5.1848e-44:
      func_0x000108403a58();
      if (*(long *)(pfVar58 + -0x20) == 0) goto code_r0x0001083ff774;
      func_0x000108403784();
      FUN_1083fda24();
code_r0x0001083fecc4:
      func_0x000108403868();
      pcVar48 = extraout_x8_03;
code_r0x0001083feccc:
      (*pcVar48)();
      unaff_x22 = pfVar57;
    default:
      goto LAB_1083ff778;
    case 5.46506e-44:
      bVar106 = *(byte *)(*(long *)(unaff_x20 + 6) + 0x54);
      unaff_x24 = (ulong)bVar106;
      if (bVar106 == 0xff) {
        unaff_x22 = *(float **)(param_1 + 0x3a);
        *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(*(long *)(unaff_x20 + 6) + 0x28);
code_r0x0001083fece0:
        param_1[0x10] = (float)((int)param_1[0x10] + 1);
code_r0x0001083fecec:
        func_0x000108403878();
        func_0x0001083f98fc();
code_r0x0001083fecf8:
        func_0x000108403784();
code_r0x0001083fed04:
        iVar63 = (int)pfVar57;
        FUN_1083fdaa4();
        if (((ulong)pfVar45 & 1) == 0) goto code_r0x0001083ff774;
        func_0x000108403938();
        if (iVar63 != 0) goto code_r0x0001083fed1c;
code_r0x0001083fed24:
        *(float **)(param_1 + 0x3a) = unaff_x22;
        func_0x0001084036f0();
code_r0x0001083fed2c:
        break;
      }
      fVar93 = unaff_x20[0xe];
      if (fVar93 != 1.4013e-45) {
        pfVar38 = pfVar57;
        if (fVar93 == 2.8026e-45) goto code_r0x0001083fed74;
        if (fVar93 != 4.2039e-45) goto code_r0x0001083ff774;
        lVar51 = **(long **)(unaff_x20 + 0xc);
        lVar46 = (*(long **)(unaff_x20 + 0xc))[2];
        iVar63 = (int)(char)bVar106;
        uVar62 = *(undefined8 *)(pfVar58 + -4);
        uVar64 = *(undefined8 *)(pfVar58 + -2);
        pfVar53 = param_1;
        func_0x0001084038b0();
        *(ulong *)(pfVar58 + -0x38) = unaff_x24;
        *(undefined **)(pfVar58 + -0x36) = &UNK_10df26510;
        pfVar58[-0x34] = 0.0;
        pfVar58[-0x33] = 0.0;
        *(float **)(pfVar58 + -0x32) = unaff_x20;
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(undefined8 *)(pfVar58 + -0x2c) = uVar62;
        *(undefined8 *)(pfVar58 + -0x2a) = uVar64;
        if (iVar63 == 0x51) {
          func_0x00010840392c();
          iVar63 = (int)pfVar53;
          FUN_108401ae0();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x000108403790();
          FUN_108401ae0();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x00010840359c();
          func_0x0001084037dc();
LAB_1084019ec:
          func_0x0001083f9180();
          return (float *)0x1;
        }
        if (iVar63 == 0x1c) {
          uVar64 = *(undefined8 *)(lVar51 + 0x10);
          func_0x000108403618();
          uVar62 = uVar64;
          func_0x0001084036c8();
          if ((int)uVar62 == 0) {
            return (float *)0x0;
          }
          iVar63 = (int)pfVar53 + 0x30;
          func_0x0001083fa660();
          func_0x0001084035d4();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x000108403cfc();
          func_0x0001083f91a8();
          func_0x000108403918(pfVar53 + 0xc,0x1d7);
          func_0x000108403910(pfVar53 + 0xc,0x80000000);
          func_0x000108403918(pfVar53 + 0xc,0xfb);
          func_0x0001084038a8();
          FUN_1083f9008(pfVar53 + 0xc,0x106,uVar64);
          return (float *)0x1;
        }
        if (iVar63 == 0x38) {
          iVar63 = (int)*(undefined8 *)(lVar46 + 0x10);
          func_0x000108403634();
          func_0x00010840365c();
          if (iVar63 == 0) {
            func_0x000108403784();
            FUN_108401ae0();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            uVar62 = *(undefined8 *)(lVar51 + 0x10);
            FUN_10840082c(uVar62,&UNK_10df26728);
            if ((int)uVar62 == 0x22d) {
              return (float *)0x0;
            }
            func_0x000108403a44();
            func_0x0001084037dc();
          }
          else {
            iVar63 = (int)*(undefined8 *)(lVar46 + 0x10);
            func_0x000108403634();
            func_0x00010840365c();
            if (iVar63 != 3) {
              return (float *)0x0;
            }
            func_0x0001084035c4();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar63 == 0) {
              return (float *)0x0;
            }
            func_0x000108403618(*(undefined8 *)(lVar51 + 0x10));
            func_0x0001084037dc();
          }
          goto LAB_1084019ec;
        }
        if (iVar63 == 0x47) {
          iVar63 = (int)*(undefined8 *)(lVar51 + 0x10);
          func_0x000108403618();
          func_0x0001084036c8();
          if (iVar63 == 0) {
            return (float *)0x0;
          }
          func_0x000108403990(4);
          func_0x0001084017e4();
          func_0x0001084035d4();
          if (iVar63 != 0) {
            func_0x000108403990();
            func_0x0001084017e4();
            func_0x0001084035c4();
            if (iVar63 != 0) {
              func_0x0001083f9210(pfVar53 + 0xc);
              func_0x000108403990();
              func_0x0001083f9178();
              return (float *)0x1;
            }
            return (float *)0x0;
          }
          return (float *)0x0;
        }
        if (iVar63 != 0xe) {
          return (float *)0x0;
        }
        func_0x0001084036c8();
        iVar63 = (int)pfVar53;
        if (iVar63 == 0) {
          return (float *)0x0;
        }
        func_0x000108403790();
        FUN_108401ae0();
        if (iVar63 == 0) {
          return (float *)0x0;
        }
        func_0x000108403908();
        if (iVar63 == 0) {
          return (float *)0x0;
        }
        func_0x000108403784();
        FUN_108401ae0();
        if (iVar63 == 0) {
          return (float *)0x0;
        }
        pfVar45 = *(float **)(lVar51 + 0x10);
        param_3 = (float *)&UNK_10df26708;
        pfVar53 = *(float **)(pfVar58 + -0x2c);
        uVar62 = *(undefined8 *)(pfVar58 + -0x2a);
        unaff_x20 = *(float **)(pfVar58 + -0x30);
        param_1 = *(float **)(pfVar58 + -0x2e);
        pfVar57 = *(float **)(pfVar58 + -0x34);
        unaff_x21 = *(float **)(pfVar58 + -0x32);
        goto FUN_108400898;
      }
      unaff_x22 = (float *)0x0;
      unaff_x21 = (float *)**(undefined8 **)(unaff_x20 + 0xc);
      param_3 = (float *)0x1;
      uVar180 = 1;
      switch(unaff_x24) {
      case 0:
        func_0x000108403624();
        func_0x00010840365c();
        if ((int)pfVar57 != 0) {
code_r0x0001083ff0b4:
          iVar63 = 0x11b;
          pfVar38 = param_1;
          goto code_r0x0001083ff2ec;
        }
        func_0x0001084035d4();
        if ((int)pfVar57 != 0) {
          func_0x0001084035e4();
          func_0x000108401aa4(param_1,pfVar57);
          goto code_r0x0001083ff730;
        }
        break;
      case 1:
      case 5:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x31:
        goto LAB_1083ff778;
      case 2:
        pfVar38 = param_1;
code_r0x0001083ff0a0:
        iVar63 = 0x132;
        goto code_r0x0001083ff2ec;
      case 3:
        func_0x000108403668();
        pfVar38 = pfVar57;
code_r0x0001083ff04c:
        if ((int)pfVar38 != 0) {
          func_0x0001084035e4();
code_r0x0001083ff060:
code_r0x0001083ff07c:
          func_0x0001084008ec();
          goto code_r0x0001083ff730;
        }
        break;
      case 4:
        func_0x000108403668();
        if ((int)pfVar57 != 0) {
          func_0x0001084035e4();
code_r0x0001083ff078:
          goto code_r0x0001083ff07c;
        }
        break;
      case 6:
        iVar63 = 0x131;
        pfVar38 = param_1;
        goto code_r0x0001083ff2ec;
      case 8:
        pfVar45 = (float *)0x133;
        pfVar38 = param_1;
code_r0x0001083ff1b4:
        iVar63 = (int)pfVar45;
        goto code_r0x0001083ff2ec;
      case 0xd:
        pfVar45 = (float *)0x123;
        pfVar38 = param_1;
code_r0x0001083ff0c8:
        iVar63 = (int)pfVar45;
        goto code_r0x0001083ff2ec;
      case 0x10:
        iVar63 = 0x12f;
        pfVar38 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x12:
        func_0x000108403624();
        uVar62 = func_0x000108403a20(0x2900ffffff);
        *(undefined8 *)(pfVar58 + -0x1e) = uVar62;
        pfVar38 = pfVar57;
        ppuVar47 = extraout_x8_05;
code_r0x0001083ff1cc:
        *(undefined ***)(pfVar58 + -0x20) = ppuVar47 + 2;
        uVar62 = 0x404ca5dc20000000;
        goto code_r0x0001083ff1e0;
      case 0x1a:
code_r0x0001083ff154:
        iVar63 = 0x138;
        pfVar38 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x1b:
code_r0x0001083ff16c:
        iVar63 = 0x137;
        pfVar38 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x1f:
      case 0x20:
      case 0x29:
        goto code_r0x0001083fe7fc;
      case 0x21:
        iVar63 = 0x11f;
        pfVar38 = param_1;
code_r0x0001083ff2ec:
        uVar62 = *(undefined8 *)(pfVar58 + -4);
        uVar64 = *(undefined8 *)(pfVar58 + -2);
        pfVar45 = unaff_x21;
        func_0x0001084038b0();
        pfVar43 = pfVar58 + -0x34;
        *(float **)(pfVar58 + -0x34) = unaff_x22;
        *(float **)(pfVar58 + -0x32) = unaff_x21;
        *(float **)(pfVar58 + -0x30) = unaff_x20;
        *(float **)(pfVar58 + -0x2e) = param_1;
        *(undefined8 *)(pfVar58 + -0x2c) = uVar62;
        *(undefined8 *)(pfVar58 + -0x2a) = uVar64;
        pfVar53 = pfVar58 + -0x2c;
        pfVar58 = pfVar38;
        func_0x00010840371c();
        if ((int)pfVar58 == 0) {
          return pfVar58;
        }
        uVar180 = (undefined4)*(undefined8 *)(pfVar45 + 4);
        func_0x000108403618();
        pfVar57 = pfVar38 + 0xc;
        uVar62 = 0x108401b84;
SUB_1083f8fd0:
        if ((iVar63 - 0x10bU < 0x30) &&
           ((1L << ((ulong)(iVar63 - 0x10bU) & 0x3f) & 0xf5f811111111U) != 0)) {
          *(float **)((long)pfVar43 + -0x10) = pfVar53;
          *(undefined8 *)((long)pfVar43 + -8) = uVar62;
          *(int *)((long)pfVar43 + -0x30) = iVar63;
          *(undefined4 *)((long)pfVar43 + -0x2c) = 0xffffffff;
          *(undefined4 *)((long)pfVar43 + -0x28) = 0xffffffff;
          *(undefined4 *)((long)pfVar43 + -0x24) = uVar180;
          *(undefined4 *)((long)pfVar43 + -0x20) = 0;
          *(undefined4 *)((long)pfVar43 + -0x1c) = 0;
          fVar93 = pfVar57[6];
          *(undefined4 *)((long)pfVar43 + -0x18) = 0;
          *(float *)((long)pfVar43 + -0x14) = fVar93;
          FUN_1083f8ee0();
          return pfVar57;
        }
        return pfVar57;
      case 0x23:
        func_0x000108403668();
        pfVar38 = pfVar57;
code_r0x0001083ff124:
        if ((int)pfVar38 != 0) {
          func_0x0001084035e4();
          func_0x000108403810();
          func_0x0001084035e4();
          func_0x0001084037dc();
code_r0x0001083ff13c:
          pfVar57 = pfVar38;
          uVar180 = SUB84(param_3,0);
          iVar63 = 0x11f;
          uVar62 = 0x1083ff144;
          pfVar43 = pfVar58 + -0x28;
          goto SUB_1083f8fd0;
        }
        break;
      case 0x25:
code_r0x0001083fee80:
        func_0x000108403668();
        if ((int)pfVar57 != 0) {
          bVar34 = bVar106 == 0x25;
          goto code_r0x0001083fee90;
        }
        break;
      case 0x2a:
        func_0x000108403668();
        if ((int)pfVar57 != 0) {
code_r0x0001083ff0f4:
          pfVar38 = *(float **)(unaff_x21 + 4);
          FUN_10840082c(pfVar38,&UNK_10df266e8);
          uVar35 = (int)pfVar38 == 0x22d;
code_r0x0001083ff10c:
          uVar180 = SUB84(param_3,0);
          iVar63 = (int)unaff_x21;
          if (!(bool)uVar35) {
            func_0x000108403a44();
            func_0x0001084037dc();
            goto code_r0x0001083ff448;
          }
        }
        break;
      case 0x2b:
        func_0x000108403668();
        if ((int)pfVar57 != 0) {
          uVar62 = *(undefined8 *)(unaff_x21 + 4);
          func_0x000108403764(uVar62);
          func_0x0001083f9220(param_1 + 0xc,uVar62);
          goto code_r0x0001083ff730;
        }
        break;
      case 0x2f:
        func_0x000108403668();
        if ((int)pfVar57 == 0) break;
        pfVar38 = *(float **)(unaff_x21 + 4);
code_r0x0001083ff19c:
        goto code_r0x0001083ff4bc;
      case 0x32:
        func_0x000108403668();
        if ((int)pfVar57 != 0) {
          func_0x0001084035e4();
          pfVar38 = pfVar57;
code_r0x0001083ff184:
          uVar180 = SUB84(param_3,0);
          func_0x0001084037dc();
          iVar63 = 0x13a;
          goto code_r0x0001083ff448;
        }
        break;
      case 0x33:
        func_0x000108403668();
        pfVar38 = pfVar57;
        if ((int)pfVar57 != 0) {
code_r0x0001083ff08c:
          uVar180 = SUB84(param_3,0);
          func_0x0001084035e4();
          func_0x0001084037dc();
          iVar63 = 0x139;
          goto code_r0x0001083ff448;
        }
        break;
      default:
        switch(bVar106) {
        case 0x4d:
          func_0x000108403624();
          pfVar58[-0x1e] = 2.3509886e-38;
          pfVar58[-0x1d] = 5.74532e-44;
          func_0x000108403a20();
          *(long *)(pfVar58 + -0x20) = extraout_x8 + 0x10;
          *(float **)(pfVar58 + -0x1c) = pfVar57;
          pfVar58[-0x1a] = 0.0;
          pfVar58[-0x19] = 0.0;
          func_0x00010840379c();
          (**(code **)(extraout_x8_00 + 0x50))();
          pfVar58[-0x26] = 2.3509886e-38;
          pfVar58[-0x25] = 5.74532e-44;
          *(long *)(pfVar58 + -0x28) = extraout_x8 + 0x10;
          *(float **)(pfVar58 + -0x24) = pfVar57;
          pfVar58[-0x22] = 0.0;
          pfVar58[-0x21] = 1.875;
          FUN_1084017f0(param_1,0xe,unaff_x21,pfVar58 + -0x20,pfVar58 + -0x28);
          unaff_x22 = param_1;
          goto LAB_1083ff778;
        case 0x4e:
          func_0x000108403668();
          if ((int)pfVar57 != 0) {
            func_0x000108403624();
            func_0x00010840365c();
            if ((int)pfVar57 == 0) {
              func_0x000108403624();
              func_0x000108403850(0x2900ffffff);
              *(float **)(pfVar58 + -0x1c) = pfVar57;
              pfVar58[-0x1a] = -3.689349e+19;
              pfVar58[-0x19] = 122879.99;
              func_0x000108403804();
              if (((int)pfVar57 == 0) || (func_0x000108403908(), ((ulong)pfVar57 & 1) == 0)) break;
            }
            func_0x000108403624();
            unaff_s8 = 0xffffff;
            unaff_00005104 = 0x29;
            pfVar58[-0x1e] = 2.3509886e-38;
            pfVar58[-0x1d] = 5.74532e-44;
            unaff_x20 = (float *)&UNK_110a459d0;
            *(undefined ***)(pfVar58 + -0x20) = &PTR_FUN_110a459e0;
            *(float **)(pfVar58 + -0x1c) = pfVar57;
            pfVar58[-0x1a] = 0.0;
            pfVar58[-0x19] = -1.875;
            func_0x000108403804();
            pfVar38 = pfVar57;
            if (((ulong)pfVar57 & 1) != 0) goto code_r0x0001083ff294;
          }
          break;
        case 0x4f:
        case 0x51:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
          goto LAB_1083ff778;
        case 0x50:
          iVar63 = 0x12e;
          pfVar38 = param_1;
          goto code_r0x0001083ff2ec;
        case 0x52:
          iVar63 = 0x135;
          pfVar38 = param_1;
          goto code_r0x0001083ff2ec;
        case 0x57:
          iVar63 = 0x130;
          pfVar38 = param_1;
          goto code_r0x0001083ff2ec;
        case 0x5c:
          goto code_r0x0001083fee80;
        case 0x5d:
          func_0x000108403668();
          if ((int)pfVar57 != 0) {
            func_0x00010840379c();
            func_0x000108403bbc();
            func_0x000108403764(*(undefined8 *)(unaff_x21 + 4));
            func_0x0001084039e4();
            func_0x0001083fa3ec();
            goto code_r0x0001083ff730;
          }
          break;
        case 0x5e:
          func_0x000108403668();
          if ((int)pfVar57 != 0) {
            func_0x0001084035e4();
            func_0x0001084037dc();
            iVar63 = 0x113;
            uVar62 = 0x1083ff31c;
            goto SUB_1083f8fd0;
          }
          break;
        case 0x5f:
          goto code_r0x0001083fe7fc;
        default:
          if (bVar106 != 0x3b) {
            if (bVar106 == 0x3d) {
              uVar36 = 7;
              pfVar53 = unaff_x21;
              goto code_r0x0001083fee34;
            }
            if (bVar106 == 0x45) {
              func_0x000108403624();
              uVar64 = func_0x000108403a20(0x2900ffffff);
              ppuVar47 = extraout_x8_04;
              goto code_r0x0001083fee0c;
            }
            goto LAB_1083ff778;
          }
          func_0x000108403668();
          if ((int)pfVar57 != 0) {
            func_0x0001084035e4();
            func_0x0001084039e4();
            FUN_1083f9e48();
            if (1 < (int)pfVar57) {
              func_0x0001084039e4();
              FUN_1083f9e48();
              func_0x0001084039e4();
              func_0x0001083f91a8();
              iVar63 = 0x135;
              uVar180 = 1;
              uVar62 = 0x1083ff37c;
              pfVar43 = pfVar58 + -0x28;
              pfVar57 = param_1 + 0xc;
              goto SUB_1083f8fd0;
            }
            func_0x000108401aa4(param_1,1);
            pfVar45 = *(float **)(unaff_x21 + 4);
            param_3 = (float *)&UNK_10df266b8;
            unaff_x20 = pfVar57;
            pfVar57 = unaff_x22;
            goto code_r0x0001083ff6e0;
          }
        }
      }
code_r0x0001083ff774:
      unaff_x22 = (float *)0x0;
      goto LAB_1083ff778;
    case 5.60519e-44:
      func_0x000108403a58();
      if (*(long *)(pfVar58 + -0x20) != 0) {
        func_0x000108403784();
        FUN_1083fda24();
        goto code_r0x0001083fecc4;
      }
      goto code_r0x0001083ff774;
    case 5.74532e-44:
      pfVar57 = *(float **)(unaff_x20 + 4);
      uVar62 = 0x1083feb64;
      uVar64 = func_0x00010840365c();
      bVar34 = (uint)pfVar57 == 3;
      if (3 < (uint)pfVar57) goto code_r0x0001083ff7a0;
      ppuVar47 = (undefined **)((ulong)pfVar57 & 0xff);
      puVar42 = &UNK_10df26544;
      lVar51 = (ulong)*(byte *)((long)ppuVar47 + 0x10df26544) * 4 + 0x1083feb88;
      pfVar38 = pfVar57;
      pfVar43 = unaff_x20;
      pfVar32 = unaff_x23;
      switch(ppuVar47) {
      case (undefined **)0x0:
code_r0x0001083feea4:
code_r0x0001083feea8:
        func_0x0001083fa660();
        goto code_r0x0001083ff730;
      case (undefined **)0x1:
      case (undefined **)0x2:
      case (undefined **)0x4:
      case (undefined **)0x5:
      case (undefined **)0x14:
      case (undefined **)0x15:
      case (undefined **)0x7e:
      case (undefined **)0x7f:
      case (undefined **)0x80:
      case (undefined **)0x81:
      case (undefined **)0x92:
      case (undefined **)0x93:
      case (undefined **)0xa9:
      case (undefined **)0xcc:
      case (undefined **)0xcd:
      case (undefined **)0xce:
      case (undefined **)0xcf:
      case (undefined **)0xd6:
      case (undefined **)0xd7:
      case (undefined **)0xd9:
      case (undefined **)0xdb:
      case (undefined **)0xdf:
      case (undefined **)0xe1:
      case (undefined **)0xe3:
      case (undefined **)0xe5:
      case (undefined **)0xe9:
      case (undefined **)0xeb:
      case (undefined **)0xef:
      case (undefined **)0xf0:
      case (undefined **)0xf4:
      case (undefined **)0xf6:
      case (undefined **)0xfe:
      case (undefined **)0xf:
      case (undefined **)0x11:
      case (undefined **)0x13:
      case (undefined **)0x17:
      case (undefined **)0x27:
      case (undefined **)0x29:
      case (undefined **)0x2f:
      case (undefined **)0x33:
      case (undefined **)0x35:
      case (undefined **)0x3b:
      case (undefined **)0x3f:
      case (undefined **)0x8b:
      case (undefined **)0xc7:
      case (undefined **)0xdd:
      case (undefined **)0xe7:
      case (undefined **)0xed:
code_r0x0001083feb90:
        unaff_x22 = (float *)0x1;
code_r0x0001083feb94:
code_r0x0001083feb98:
code_r0x0001083feec4:
        func_0x000108403910();
        goto LAB_1083ff778;
      case (undefined **)0x3:
        unaff_x22 = (float *)0x1;
        goto code_r0x0001083feec4;
      default:
        goto code_r0x0001083feb90;
      case (undefined **)0xe:
        goto code_r0x0001083fed48;
      case (undefined **)0x10:
code_r0x0001083fed74:
        ppuVar47 = *(undefined ***)(unaff_x20 + 0xc);
        unaff_x22 = (float *)0x0;
code_r0x0001083fed78:
        iVar63 = (int)pfVar38;
        unaff_x23 = (float *)*ppuVar47;
        unaff_x20 = (float *)ppuVar47[1];
        iVar70 = (int)unaff_x24;
        ppuVar47 = (undefined **)(ulong)(iVar70 - 0x27U);
        if (iVar70 - 0x27U < 0x16) goto code_r0x0001083fed88;
        if (iVar70 - 0x11U < 8) {
          lVar51 = (ulong)*(ushort *)(&UNK_10df26548 + (ulong)(iVar70 - 0x11U) * 2) * 4 +
                   0x1083feee4;
          pfVar57 = pfVar38;
          goto code_r0x0001083feee0;
        }
        if (iVar70 != 0x53) {
          pfVar38 = param_1;
          if (iVar70 == 0x44) goto code_r0x0001083ff660;
          if (iVar70 != 0x46) {
            bVar34 = iVar70 == 8;
            goto code_r0x0001083fee70;
          }
          iVar63 = (int)*(undefined8 *)(unaff_x23 + 4);
          func_0x000108403618();
          func_0x000108403c44();
          func_0x00010840371c();
          if ((iVar63 != 0) && (func_0x0001084035c4(), iVar63 != 0)) {
            func_0x000108403810();
            func_0x000108403878();
            func_0x0001083f91a8();
            func_0x0001083fa660(param_1 + 0xc);
            unaff_x22 = (float *)0x1;
            func_0x000108403ee0();
            func_0x000108403918();
            func_0x0001084038a8();
            func_0x000108403ee0();
            FUN_1083f9008();
            goto code_r0x0001083ff650;
          }
          goto code_r0x0001083ff774;
        }
        func_0x000108403c44();
        FUN_108401ae0();
        if (((iVar63 != 0) && (func_0x0001084035c4(), iVar63 != 0)) &&
           (func_0x000108403908(), iVar63 != 0)) {
          unaff_x22 = *(float **)(unaff_x20 + 4);
          func_0x000108403634();
          func_0x000108403850(0x2900ffffff);
          *(float **)(pfVar58 + -0x1c) = unaff_x22;
          pfVar58[-0x1a] = 0.0;
          pfVar58[-0x19] = 1.875;
          func_0x000108403804();
          if ((int)unaff_x22 != 0) {
            func_0x00010840359c();
            func_0x0001084037dc();
code_r0x0001083ff650:
            FUN_1083f9008();
          }
          goto LAB_1083ff778;
        }
        goto code_r0x0001083ff774;
      case (undefined **)0x12:
        goto code_r0x0001083fed3c;
      case (undefined **)0x16:
      case (undefined **)0x42:
      case (undefined **)0x4a:
      case (undefined **)0x4e:
      case (undefined **)0x52:
      case (undefined **)0x54:
      case (undefined **)0x56:
      case (undefined **)0x58:
      case (undefined **)0x5c:
      case (undefined **)0x5e:
      case (undefined **)0x62:
      case (undefined **)0x66:
      case (undefined **)0x68:
      case (undefined **)0x6a:
      case (undefined **)0x6c:
      case (undefined **)0x6e:
      case (undefined **)0x70:
      case (undefined **)0x72:
      case (undefined **)0x78:
      case (undefined **)0x7a:
      case (undefined **)0x7c:
      case (undefined **)0x84:
      case (undefined **)0x88:
      case (undefined **)0x8c:
      case (undefined **)0x8e:
      case (undefined **)0x90:
      case (undefined **)0x98:
      case (undefined **)0x9a:
      case (undefined **)0x9c:
      case (undefined **)0xa0:
      case (undefined **)0xa2:
      case (undefined **)0xac:
      case (undefined **)0xb0:
      case (undefined **)0xb4:
      case (undefined **)0xb6:
      case (undefined **)0xb8:
      case (undefined **)0xba:
      case (undefined **)0xbe:
      case (undefined **)0xc0:
      case (undefined **)0xc2:
      case (undefined **)0xc4:
        goto code_r0x0001083fef04;
      case (undefined **)0x18:
      case (undefined **)0x1a:
      case (undefined **)0x1c:
      case (undefined **)0x1e:
      case (undefined **)0x20:
      case (undefined **)0x22:
      case (undefined **)0x24:
      case (undefined **)0x2a:
      case (undefined **)0x2c:
      case (undefined **)0x30:
      case (undefined **)0x36:
      case (undefined **)0x38:
      case (undefined **)0x3c:
        goto code_r0x0001083fed60;
      case (undefined **)0x26:
        goto code_r0x0001083fef1c;
      case (undefined **)0x28:
        goto code_r0x0001083feeec;
      case (undefined **)0x2e:
code_r0x0001083feee0:
        iVar63 = (int)pfVar57;
        switch(lVar51) {
        case 0x1083feee4:
          *(float **)(pfVar58 + -0x20) = param_1;
          func_0x000108403dd8();
code_r0x0001083feeec:
          fVar93 = param_1[0x41];
          unaff_x22 = (float *)(ulong)(uint)fVar93;
          pfVar58[-0x1e] = SUB84(pfVar57,0);
          pfVar58[-0x1d] = fVar93;
          unaff_x20 = pfVar57;
code_r0x0001083feef8:
          if ((int)unaff_x22 != (int)pfVar57) {
            func_0x000108403b44();
          }
code_r0x0001083fef04:
          func_0x000108403c44();
          func_0x00010840371c();
          if (((ulong)pfVar57 & 1) == 0) {
code_r0x0001083ff6f8:
            unaff_x22 = (float *)0x0;
          }
          else {
            if (param_1[0x41] != SUB84(unaff_x22,0)) {
code_r0x0001083fef1c:
              func_0x000108403920();
            }
code_r0x0001083fef20:
            func_0x000108403828();
            ppuVar47 = (undefined **)0x201;
code_r0x0001083fef28:
            *(short *)(pfVar58 + -0x28) = (short)ppuVar47;
            *(undefined1 *)((long)pfVar58 + -0x9e) = 0;
            func_0x0001084036b4();
code_r0x0001083fef34:
            fVar93 = param_1[0x41];
            pfVar58[-0x1d] = fVar93;
            bVar34 = fVar93 == SUB84(unaff_x20,0);
            pfVar38 = pfVar57;
            unaff_x21 = unaff_x20;
            unaff_x22 = (float *)(ulong)(uint)fVar93;
code_r0x0001083fef40:
            pfVar57 = unaff_x22;
            if (!bVar34) {
              func_0x000108403b44();
            }
            func_0x000108403e24();
            func_0x0001084036b4();
            fVar93 = SUB84(pfVar57,0);
            if (param_1[0x41] != fVar93) {
              func_0x000108403920();
            }
            pfVar58[-0x1d] = fVar93;
            if (fVar93 != SUB84(unaff_x21,0)) {
              func_0x000108403b44();
            }
            func_0x0001084035c4();
code_r0x0001083fef74:
            if (((ulong)pfVar38 & 1) == 0) goto code_r0x0001083ff6f8;
            if (param_1[0x41] != SUB84(pfVar57,0)) {
              func_0x000108403920();
            }
            func_0x000108403828();
code_r0x0001083fef8c:
            func_0x000108403e24();
            func_0x0001084036b4();
            func_0x000108403ee0();
            func_0x000108403b3c();
            unaff_x20 = (float *)(ulong)(uint)param_1[0x41];
code_r0x0001083fefa0:
            pfVar58[-0x1d] = SUB84(unaff_x20,0);
            uVar35 = SUB84(unaff_x20,0) == SUB84(unaff_x21,0);
            if (!(bool)uVar35) {
              func_0x000108403b44();
            }
            ppuVar47 = (undefined **)0x201;
code_r0x0001083fefb4:
            *(short *)(pfVar58 + -0x28) = (short)ppuVar47;
            *(undefined1 *)((long)pfVar58 + -0x9e) = 0;
            func_0x0001084036b4();
            func_0x000108403ee0();
            func_0x000108403b3c();
            func_0x000108403e44();
code_r0x0001083fefcc:
            if (!(bool)uVar35) {
              func_0x000108403e18();
            }
            func_0x000108403828();
            func_0x000108403b3c(param_1 + 0xc,0x170);
code_r0x0001083fefe4:
            fVar93 = param_1[0x41];
            pfVar58[-0x1d] = fVar93;
            uVar35 = fVar93 == SUB84(unaff_x21,0);
            if (!(bool)uVar35) {
              func_0x000108403b44();
            }
code_r0x0001083feff8:
            func_0x0001083f9178(param_1 + 0xc,3);
            func_0x000108403e44();
            if (!(bool)uVar35) {
code_r0x0001083ff00c:
              func_0x000108403e18();
            }
            unaff_x22 = (float *)0x1;
          }
          FUN_1083fcee8(pfVar58 + -0x20);
          goto LAB_1083ff778;
        case 0x1083ff498:
          param_3 = (float *)&UNK_10df26668;
          pfVar43 = unaff_x20;
          break;
        case 0x1083ff4a4:
          func_0x000108403c44();
          FUN_108400bd4();
          if (iVar63 == 0) goto code_r0x0001083ff774;
          pfVar38 = *(float **)(unaff_x23 + 4);
code_r0x0001083ff4bc:
          func_0x000108403618();
          func_0x000108401a54(param_1,pfVar38);
          goto code_r0x0001083ff730;
        case 0x1083ff4d0:
          func_0x000108403c44();
          func_0x00010840371c();
          if ((iVar63 == 0) || (func_0x0001084035c4(), iVar63 == 0)) goto code_r0x0001083ff774;
          func_0x000108403618(*(undefined8 *)(unaff_x23 + 4));
          func_0x000108403b20();
          func_0x0001083f91a8();
          goto code_r0x0001083ff730;
        case 0x1083ff778:
          goto LAB_1083ff778;
        }
        break;
      case (undefined **)0x32:
        goto code_r0x0001083fef34;
      case (undefined **)0x34:
        goto code_r0x0001083fef28;
      case (undefined **)0x3a:
        goto code_r0x0001083feef8;
      case (undefined **)0x3e:
        goto code_r0x0001083fef40;
      case (undefined **)0x40:
        goto code_r0x0001083fec34;
      case (undefined **)0x43:
      case (undefined **)0x4b:
      case (undefined **)0x4f:
      case (undefined **)0x53:
      case (undefined **)0x55:
      case (undefined **)0x57:
      case (undefined **)0x59:
      case (undefined **)0x5d:
      case (undefined **)0x5f:
      case (undefined **)0x63:
      case (undefined **)0x67:
      case (undefined **)0x69:
      case (undefined **)0x6b:
      case (undefined **)0x6d:
      case (undefined **)0x6f:
      case (undefined **)0x71:
      case (undefined **)0x73:
      case (undefined **)0x79:
      case (undefined **)0x7b:
      case (undefined **)0x7d:
      case (undefined **)0x85:
      case (undefined **)0x89:
      case (undefined **)0x8d:
      case (undefined **)0x8f:
      case (undefined **)0x91:
      case (undefined **)0x99:
      case (undefined **)0x9b:
      case (undefined **)0x9d:
      case (undefined **)0xa1:
      case (undefined **)0xa3:
      case (undefined **)0xad:
      case (undefined **)0xb1:
      case (undefined **)0xb5:
      case (undefined **)0xb7:
      case (undefined **)0xb9:
      case (undefined **)0xbb:
      case (undefined **)0xbf:
      case (undefined **)0xc1:
      case (undefined **)0xc3:
      case (undefined **)0xc5:
        goto code_r0x0001083feb94;
      case (undefined **)0x44:
        goto code_r0x0001083fec28;
      case (undefined **)0x46:
        goto code_r0x0001083febd4;
      case (undefined **)0x48:
        goto code_r0x0001083febf0;
      case (undefined **)0x4c:
        goto code_r0x0001083fecec;
      case (undefined **)0x50:
        goto code_r0x0001083fed38;
      case (undefined **)0x5a:
      case (undefined **)0xdc:
      case (undefined **)0xec:
        goto code_r0x0001083fec4c;
      case (undefined **)0x60:
        goto code_r0x0001083febc8;
      case (undefined **)0x64:
        goto code_r0x0001083fed44;
      case (undefined **)0x74:
        goto code_r0x0001083fece0;
      case (undefined **)0x76:
        goto code_r0x0001083fecf8;
      case (undefined **)0x82:
        goto code_r0x0001083fed2c;
      case (undefined **)0x86:
      case (undefined **)0xd8:
        goto code_r0x0001083fecac;
      case (undefined **)0x8a:
      case (undefined **)0xc6:
code_r0x0001083fee0c:
        *(undefined8 *)(pfVar58 + -0x1e) = uVar64;
        *(undefined ***)(pfVar58 + -0x20) = ppuVar47 + 2;
        uVar62 = 0x3f91df46a0000000;
        pfVar38 = pfVar57;
code_r0x0001083ff1e0:
        *(float **)(pfVar58 + -0x1c) = pfVar38;
        *(undefined8 *)(pfVar58 + -0x1a) = uVar62;
code_r0x0001083ff1e8:
        func_0x000108403790();
        FUN_108400bd4();
        unaff_x22 = pfVar38;
        goto LAB_1083ff778;
      case (undefined **)0x94:
        goto code_r0x0001083fec78;
      case (undefined **)0x96:
        goto code_r0x0001083fec58;
      case (undefined **)0x9e:
code_r0x0001083fed1c:
        FUN_1083ffef4();
        goto code_r0x0001083fed24;
      case (undefined **)0xa4:
        goto code_r0x0001083fed04;
      case (undefined **)0xa6:
code_r0x0001083fec10:
        if ((int)ppuVar47 != 0xe) goto code_r0x0001083ff3d8;
      case (undefined **)0x6:
      case (undefined **)0x8:
      case (undefined **)0xa:
      case (undefined **)0xc:
        func_0x0001083f926c();
        func_0x000108403bec();
code_r0x0001083fec28:
        FUN_1083fae64(param_1 + 0xc,*unaff_x21);
code_r0x0001083fec34:
code_r0x0001083ff3d8:
        func_0x000108403bec();
        goto code_r0x0001083ff730;
      case (undefined **)0xa8:
        goto code_r0x0001083fec40;
      case (undefined **)0xaa:
        goto code_r0x0001083fedcc;
      case (undefined **)0xae:
      case (undefined **)0xd2:
code_r0x0001083fed88:
        puVar42 = &UNK_10df26558;
        lVar51 = 0x1083feda0;
        pfVar43 = unaff_x20;
        pfVar32 = unaff_x23;
      case (undefined **)0xc8:
        unaff_x23 = pfVar43;
        unaff_x20 = pfVar43;
        switch(lVar51 + (ulong)*(ushort *)(puVar42 + (long)ppuVar47 * 2) * 4) {
        case 0x1083feda0:
          param_3 = (float *)&UNK_10df266d8;
          unaff_x20 = pfVar32;
          break;
        case 0x1083ff4f8:
          param_3 = (float *)&UNK_10df266a8;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff504:
          param_3 = (float *)&UNK_10df266c8;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff510:
          param_3 = (float *)&UNK_10df26718;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff51c:
          param_3 = (float *)&UNK_10df266c8;
          unaff_x20 = pfVar32;
          break;
        case 0x1083ff534:
          param_3 = (float *)&UNK_10df266d8;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff540:
          param_3 = (float *)&UNK_10df26708;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff54c:
          param_3 = (float *)&UNK_10df266f8;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff558:
          param_3 = (float *)&UNK_10df26678;
          unaff_x23 = pfVar32;
          break;
        case 0x1083ff778:
          goto LAB_1083ff778;
        }
        break;
      case (undefined **)0xb2:
code_r0x0001083fee70:
        pfVar57 = unaff_x22;
        pfVar38 = param_1;
        unaff_x22 = pfVar57;
        if (bVar34) {
code_r0x0001083fee7c:
          unaff_x22 = pfVar57;
code_r0x0001083ff660:
          uVar62 = *(undefined8 *)(pfVar58 + -4);
          uVar64 = *(undefined8 *)(pfVar58 + -2);
          pfVar45 = unaff_x20;
          func_0x0001084038b0();
          *(float **)(pfVar58 + -0x34) = unaff_x22;
          *(float **)(pfVar58 + -0x32) = unaff_x21;
          *(float **)(pfVar58 + -0x30) = unaff_x20;
          *(float **)(pfVar58 + -0x2e) = param_1;
          *(undefined8 *)(pfVar58 + -0x2c) = uVar62;
          *(undefined8 *)(pfVar58 + -0x2a) = uVar64;
          pfVar53 = pfVar38;
          func_0x00010840371c();
          if ((int)pfVar53 == 0) {
            return pfVar53;
          }
          FUN_108401ae0(pfVar38,pfVar45,*(undefined8 *)(unaff_x23 + 4));
          if ((int)pfVar38 != 0) {
            func_0x0001084035e4();
            func_0x000108403b50();
            return (float *)0x1;
          }
          return pfVar38;
        }
        goto LAB_1083ff778;
      case (undefined **)0xbc:
        goto code_r0x0001083fedc0;
      case (undefined **)0xca:
code_r0x0001083fee90:
        if (bVar34) {
          func_0x0001083faec8();
        }
        else {
          func_0x0001083fae94();
        }
        goto code_r0x0001083ff730;
      case (undefined **)0xd0:
code_r0x0001083fedc8:
        ppuVar47 = *(undefined ***)(unaff_x20 + 6);
code_r0x0001083fedcc:
        func_0x000108403618(ppuVar47[2]);
        func_0x000108403900();
        goto code_r0x0001083ff730;
      case (undefined **)0xd4:
      case (undefined **)0xe4:
        goto code_r0x0001083fedb0;
      case (undefined **)0xda:
        goto code_r0x0001083fec90;
      case (undefined **)0xde:
        goto code_r0x0001083febd0;
      case (undefined **)0xe0:
        goto code_r0x0001083fec6c;
      case (undefined **)0xe2:
        goto code_r0x0001083fecc4;
      case (undefined **)0xe6:
        goto code_r0x0001083fec50;
      case (undefined **)0xe8:
        goto code_r0x0001083fef20;
      case (undefined **)0xea:
        bVar106 = *(byte *)(unaff_x20 + 8);
        unaff_x21 = *(float **)(unaff_x20 + 6);
        goto code_r0x0001083fee30;
      case (undefined **)0xee:
        goto code_r0x0001083febac;
      case (undefined **)0xf1:
        goto code_r0x0001083feba0;
      case (undefined **)0xf3:
        goto code_r0x0001083feb98;
      case (undefined **)0xf5:
      case (undefined **)0xf7:
      case (undefined **)0xf8:
      case (undefined **)0xf9:
      case (undefined **)0xfa:
      case (undefined **)0xfb:
      case (undefined **)0xfc:
      case (undefined **)0xfd:
      case (undefined **)0xff:
        goto code_r0x0001083feca0;
      }
      uVar62 = *(undefined8 *)(pfVar58 + -4);
      uVar64 = *(undefined8 *)(pfVar58 + -2);
      pfVar53 = param_1;
      func_0x0001084038b0(param_1,param_3,unaff_x23,unaff_x20);
      *(float **)(pfVar58 + -0x34) = unaff_x22;
      *(float **)(pfVar58 + -0x32) = unaff_x21;
      *(float **)(pfVar58 + -0x30) = pfVar43;
      *(float **)(pfVar58 + -0x2e) = param_1;
      *(undefined8 *)(pfVar58 + -0x2c) = uVar62;
      *(undefined8 *)(pfVar58 + -0x2a) = uVar64;
      pfVar45 = pfVar53;
      func_0x00010840371c();
      if (((int)pfVar45 == 0) ||
         (FUN_108401ae0(pfVar53,unaff_x20,*(undefined8 *)(unaff_x23 + 4)), (int)pfVar53 == 0)) {
        return (float *)0x0;
      }
      pfVar45 = *(float **)(unaff_x23 + 4);
      pfVar53 = *(float **)(pfVar58 + -0x2c);
      uVar62 = *(undefined8 *)(pfVar58 + -0x2a);
      unaff_x20 = *(float **)(pfVar58 + -0x30);
      param_1 = *(float **)(pfVar58 + -0x2e);
      pfVar57 = *(float **)(pfVar58 + -0x34);
      unaff_x21 = *(float **)(pfVar58 + -0x32);
FUN_108400898:
      pfVar26 = pfVar58 + -0x34;
      *(float **)(pfVar58 + -0x34) = pfVar57;
      *(float **)(pfVar58 + -0x32) = unaff_x21;
      *(float **)(pfVar58 + -0x30) = unaff_x20;
      *(float **)(pfVar58 + -0x2e) = param_1;
      goto code_r0x0001084008a0;
    case 6.16571e-44:
      func_0x000108403e04(pfVar58 + -0x28,param_1,*(undefined8 *)(unaff_x20 + 6));
      unaff_x21 = *(float **)(pfVar58 + -0x28);
      if (unaff_x21 != (float *)0x0) {
code_r0x0001083fea28:
        func_0x000108403790();
        FUN_1083fda24();
        if (((ulong)pfVar38 & 1) == 0) {
code_r0x0001083ff6b4:
          pfVar57 = (float *)0x0;
        }
        else {
          func_0x000108403640();
          (*extraout_x8_01)();
          func_0x000108403810();
          func_0x000108403778();
          (**(code **)(extraout_x8_02 + 0x50))();
          func_0x000108403850(0x2900ffffff);
          *(float **)(pfVar58 + -0x1c) = pfVar38;
          pfVar58[-0x1a] = 0.0;
          pfVar58[-0x19] = 1.875;
          func_0x000108403804();
          if (((ulong)pfVar38 & 1) == 0) goto code_r0x0001083ff6b4;
          if (*(char *)(unaff_x20 + 8) == '!') {
            func_0x000108403908();
          }
          else {
            if (*(char *)(unaff_x20 + 8) != ' ') goto code_r0x0001083ff7a0;
            func_0x000108403908();
          }
          iVar63 = (int)pfVar38;
          if (((ulong)pfVar38 & 1) == 0) goto code_r0x0001083ff6b4;
          func_0x000108403790();
          func_0x0001083fda64();
          if (iVar63 == 0) goto code_r0x0001083ff6b4;
          func_0x000108403640();
          (*extraout_x8_07)();
          func_0x000108403900();
          pfVar57 = (float *)0x1;
        }
        pcVar48 = *(code **)(*(long *)unaff_x21 + 8);
        goto code_r0x0001083feccc;
      }
      goto code_r0x0001083ff774;
    case 6.30584e-44:
      bVar106 = *(byte *)(unaff_x20 + 6);
      unaff_x21 = *(float **)(unaff_x20 + 8);
code_r0x0001083fee30:
      uVar36 = (uint)bVar106;
      pfVar53 = unaff_x20;
code_r0x0001083fee34:
      uVar62 = *(undefined8 *)(pfVar58 + -4);
      uVar64 = *(undefined8 *)(pfVar58 + -2);
      pfVar45 = param_1;
      func_0x0001084038b0();
      pfVar58[-0x34] = 0.0;
      pfVar58[-0x33] = 0.0;
      *(float **)(pfVar58 + -0x32) = pfVar53;
      *(float **)(pfVar58 + -0x30) = unaff_x20;
      *(float **)(pfVar58 + -0x2e) = param_1;
      *(undefined8 *)(pfVar58 + -0x2c) = uVar62;
      *(undefined8 *)(pfVar58 + -0x2a) = uVar64;
      if ((uVar36 & 0xff) == 1) {
        func_0x0001084035c4();
        if ((int)pfVar45 == 0) {
          return pfVar45;
        }
        iVar63 = (int)*(undefined8 *)(unaff_x21 + 4);
        func_0x000108403634();
        func_0x00010840365c();
        func_0x00010840359c();
        func_0x0001084037dc();
        if (iVar63 != 0) {
          FUN_1083f9ba0();
          func_0x00010840359c();
          func_0x0001084037dc();
          goto code_r0x000108401ca4;
        }
      }
      else {
        if (uVar36 != 7) {
          if (uVar36 == 0x21) {
            fVar93 = unaff_x21[2];
            pfVar53 = *(float **)(unaff_x21 + 4);
            func_0x000108403634();
            func_0x000108403a20();
            pfVar58[-0x3a] = fVar93;
            pfVar58[-0x39] = 5.74532e-44;
            *(long *)(pfVar58 + -0x3c) = extraout_x8_34 + 0x10;
            uVar62 = 0xbff0000000000000;
code_r0x000108401c4c:
            *(float **)(pfVar58 + -0x38) = pfVar53;
            *(undefined8 *)(pfVar58 + -0x36) = uVar62;
            func_0x000108403784();
            FUN_108400bd4();
            return pfVar53;
          }
          if (uVar36 == 0x20) {
            pfVar53 = *(float **)(unaff_x21 + 4);
            func_0x000108403634();
            uVar62 = func_0x000108403a20(0x2900ffffff);
            *(undefined8 *)(pfVar58 + -0x3a) = uVar62;
            *(long *)(pfVar58 + -0x3c) = extraout_x8_33 + 0x10;
            uVar62 = 0x3ff0000000000000;
            goto code_r0x000108401c4c;
          }
          if (uVar36 != 0xb) {
            return (float *)0x0;
          }
        }
        func_0x0001084035c4();
        if ((int)pfVar45 == 0) {
          return pfVar45;
        }
        func_0x00010840359c();
        func_0x0001084037dc();
      }
      FUN_1083f9ba0();
      func_0x00010840359c();
      func_0x0001084037dc();
code_r0x000108401ca4:
      FUN_1083f9008();
      return (float *)0x1;
    case 6.5861e-44:
      pfVar57 = unaff_x20 + 8;
code_r0x0001083fec40:
      FUN_1083fd9f0();
      unaff_x22 = pfVar57;
code_r0x0001083fec4c:
      pfVar45 = *(float **)(unaff_x20 + 6);
code_r0x0001083fec50:
      if ((int)pfVar57 == 0) {
code_r0x0001083fedac:
        func_0x000108403650();
code_r0x0001083fedb0:
        if ((int)pfVar57 == 0) goto code_r0x0001083ff774;
        uVar36 = 0;
        if (*(char *)(unaff_x20 + 8) == '\0') {
          uVar36 = (uint)unaff_x22;
        }
        ppuVar47 = (undefined **)(ulong)uVar36;
code_r0x0001083fedc0:
        if ((int)ppuVar47 == 1) goto code_r0x0001083fedc8;
        pfVar38 = *(float **)(*(long *)(unaff_x20 + 6) + 0x10);
code_r0x0001083ff020:
        func_0x000108403618();
        FUN_1083f9ce0(param_1 + 0xc,pfVar38,unaff_x20 + 8,*(undefined1 *)(unaff_x20 + 9));
code_r0x0001083ff038:
        break;
      }
      ppuVar47 = (undefined **)(ulong)(uint)pfVar45[3];
code_r0x0001083fec58:
      if ((int)ppuVar47 != 0x32) goto code_r0x0001083fedac;
code_r0x0001083fec6c:
      goto code_r0x0001083fed68;
    case 6.72623e-44:
code_r0x0001083fec90:
      pfVar45 = *(float **)(unaff_x20 + 6);
      param_3 = *(float **)(unaff_x20 + 8);
      pfVar53 = *(float **)(pfVar58 + -4);
      uVar62 = *(undefined8 *)(pfVar58 + -2);
      pfVar57 = param_1;
code_r0x0001083feca0:
      func_0x0001084038b0();
code_r0x0001083fecac:
      *(float **)(pfVar58 + -0x40) = unaff_x28;
      *(float **)(pfVar58 + -0x3e) = unaff_x27;
      *(undefined **)(pfVar58 + -0x3c) = &UNK_10df26584;
      *(undefined **)(pfVar58 + -0x3a) = &UNK_10df265ec;
      *(ulong *)(pfVar58 + -0x38) = unaff_x24;
      *(undefined **)(pfVar58 + -0x36) = &UNK_10df26510;
      pfVar58[-0x34] = 0.0;
      pfVar58[-0x33] = 0.0;
      *(float **)(pfVar58 + -0x32) = unaff_x20;
      *(float **)(pfVar58 + -0x30) = unaff_x20;
      *(float **)(pfVar58 + -0x2e) = param_1;
      *(float **)(pfVar58 + -0x2c) = pfVar53;
      *(undefined8 *)(pfVar58 + -0x2a) = uVar62;
      pfVar53 = pfVar45;
      FUN_1083d6c74();
      fVar93 = SUB84(pfVar53,0);
      if (fVar93 == 0.0) {
        func_0x000108403d64();
        pfVar38 = param_3;
        FUN_1083d64e8();
        pfVar43 = param_3;
        FUN_1083d6eb4();
        pfVar57[0x10] = (float)((int)pfVar57[0x10] + 1);
        fVar93 = SUB84(pfVar43,0);
        if ((((int)pfVar53 == 0) && ((int)pfVar38 == 0)) && (fVar93 != 0.0)) {
          FUN_108401ae0(pfVar57,pfVar45,*(undefined8 *)(param_3 + 4));
          iVar63 = (int)pfVar57;
          if (((iVar63 != 0) && (func_0x0001084035d4(), iVar63 != 0)) &&
             (func_0x0001084035c4(), iVar63 != 0)) {
            func_0x00010840359c();
            func_0x0001084037dc();
            func_0x0001083f9180();
            return (float *)0x1;
          }
          return (float *)0x0;
        }
        func_0x000108403c60();
        *(float **)(pfVar58 + -0x44) = pfVar57;
        func_0x000108403dd8();
        fVar119 = pfVar57[0x41];
        pfVar58[-0x42] = fVar93;
        pfVar58[-0x41] = fVar119;
        if (fVar119 != fVar93) {
          func_0x000108403920();
        }
        func_0x0001083fa1f4(pfVar57 + 0xc);
        pfVar38 = pfVar57;
        func_0x00010840371c(pfVar57,pfVar45);
        if (((ulong)pfVar38 & 1) != 0) {
          if (pfVar57[0x41] != fVar119) {
            pfVar57[0x41] = fVar119;
            pfVar57[0x12] = fVar119;
          }
          if (((ulong)pfVar53 & 1) == 0) {
            func_0x0001084035d4();
            if ((int)pfVar38 != 0) {
              fVar119 = pfVar57[0x41];
              pfVar58[-0x41] = fVar119;
              if (fVar119 != fVar93) {
                func_0x000108403920();
              }
              func_0x000108403d88();
              if (pfVar57[0x41] != fVar119) {
                func_0x000108403b44();
              }
              if (((ulong)pfVar43 & 1) == 0) {
                func_0x000108403cfc();
                func_0x0001083f98fc();
              }
              func_0x0001084035c4();
              if ((int)pfVar38 != 0) {
                func_0x000108403640();
                (*extraout_x8_32)();
                FUN_108400004(pfVar57 + 0xc,pfVar38);
                func_0x000108403cfc();
                func_0x0001083f9780();
                goto LAB_108401518;
              }
            }
          }
          else {
            pfVar58[-0x41] = fVar119;
            if (fVar119 != fVar93) {
              func_0x000108403920();
            }
            iVar63 = (int)pfVar38;
            func_0x000108403d88();
            if (pfVar57[0x41] != fVar119) {
              pfVar57[0x41] = fVar119;
              pfVar57[0x12] = fVar119;
            }
            func_0x0001084035c4();
            if (iVar63 != 0) {
              fVar119 = pfVar57[0x41];
              pfVar58[-0x41] = fVar119;
              if (fVar119 != fVar93) {
                func_0x000108403920();
              }
              pfVar53 = pfVar57 + 0xc;
              func_0x0001084002a8();
              if (pfVar57[0x41] != fVar119) {
                pfVar57[0x41] = fVar119;
                pfVar57[0x12] = fVar119;
              }
              func_0x0001084035d4();
              if ((int)pfVar53 != 0) {
                func_0x000108403640();
                (*extraout_x8_31)();
                FUN_108400004(pfVar57 + 0xc,pfVar53);
LAB_108401518:
                fVar119 = pfVar57[0x41];
                pfVar58[-0x41] = fVar119;
                uVar35 = fVar119 == fVar93;
                if (!(bool)uVar35) {
                  func_0x000108403920();
                }
                func_0x0001084036e4();
                func_0x0001084002b0(pfVar57 + 0xc);
                func_0x000108403e44();
                if (!(bool)uVar35) {
                  func_0x000108403e18();
                }
                func_0x000108403840();
                goto LAB_108401548;
              }
            }
          }
        }
      }
      else {
        fVar119 = pfVar57[0x10];
        pfVar57[0x10] = (float)((int)fVar119 + 2);
        *(float **)(pfVar58 + -0x44) = pfVar57;
        func_0x000108403dd8();
        fVar158 = pfVar57[0x41];
        pfVar58[-0x42] = fVar93;
        pfVar58[-0x41] = fVar158;
        if (fVar158 != fVar93) {
          func_0x000108403920();
        }
        pfVar53 = pfVar57;
        func_0x00010840371c(pfVar57,pfVar45);
        if (((ulong)pfVar53 & 1) != 0) {
          pfVar53 = pfVar57 + 0xc;
          FUN_1083f994c(pfVar53,0xffffffff,fVar119);
          iVar63 = (int)pfVar53;
          if (pfVar57[0x41] != fVar158) {
            pfVar57[0x41] = fVar158;
            pfVar57[0x12] = fVar158;
          }
          func_0x0001084035c4();
          if (iVar63 != 0) {
            pfVar53 = pfVar57 + 0xc;
            func_0x0001083f97f0(pfVar53,(int)fVar119 + 1);
            iVar63 = (int)pfVar53;
            func_0x000108403640();
            (*extraout_x8_30)();
            func_0x000108403900();
            func_0x000108403cfc();
            func_0x0001083f9780();
            func_0x0001084035d4();
            if (iVar63 != 0) {
              func_0x0001083f9780(pfVar57 + 0xc,(int)fVar119 + 1);
              fVar119 = pfVar57[0x41];
              pfVar58[-0x41] = fVar119;
              uVar35 = fVar119 == fVar93;
              if (!(bool)uVar35) {
                func_0x000108403920();
              }
              func_0x0001084036e4();
              func_0x000108403e44();
              if (!(bool)uVar35) {
                func_0x000108403e18();
              }
LAB_108401548:
              pfVar53 = (float *)0x1;
              goto LAB_108401554;
            }
          }
        }
      }
      pfVar53 = (float *)0x0;
LAB_108401554:
      FUN_1083fcee8(pfVar58 + -0x44);
      return pfVar53;
    case 7.00649e-44:
      func_0x000108403778();
      func_0x000108403dd0();
      iVar63 = (int)pfVar57;
      if (((ulong)pfVar57 & 1) != 0) goto code_r0x0001083fe880;
      func_0x000108403778();
      func_0x000108403dc8();
      if (iVar63 != 0) goto code_r0x0001083fe880;
      goto code_r0x0001083fed5c;
    }
    goto code_r0x0001083ff730;
  case (code *)0x17:
    goto code_r0x0001084008c0;
  case (code *)0x19:
    goto code_r0x0001084008c8;
  case (code *)0x1a:
  case (code *)0x60:
  case (code *)0x70:
  case (code *)0x80:
  case (code *)0x90:
  case (code *)0xa0:
  case (code *)0xb0:
  case (code *)0xb8:
  case (code *)0xbc:
  case (code *)0xc0:
  case (code *)0xe8:
  case (code *)0xec:
  case (code *)0xf0:
  case (code *)0xf8:
  case (code *)0xfc:
    while( true ) {
      param_2 = (float *)(ulong)((int)param_2 - 4);
LAB_108400908:
      if ((int)param_2 < 8) break;
      func_0x000108403e78();
      FUN_1083f9008();
    }
    for (; 5 < (int)param_2; param_2 = (float *)(ulong)((int)param_2 - 3)) {
      func_0x000108403e78();
      func_0x000108403b3c();
code_r0x00010840092c:
    }
    for (; 3 < (int)param_2; param_2 = (float *)(ulong)((int)param_2 - 2)) {
LAB_10840093c:
      func_0x000108403e78();
      FUN_1083f9008();
    }
    for (; 1 < (int)param_2; param_2 = (float *)(ulong)((int)param_2 - 1)) {
      func_0x000108403e78();
      func_0x000108403918();
code_r0x000108400960:
    }
    return param_1;
  case (code *)0x1b:
    goto code_r0x00010840092c;
  case (code *)0x1c:
    goto code_r0x0001084008e0;
  case (code *)0x1d:
    goto LAB_10840093c;
  case (code *)0x1e:
  case (code *)0x1f:
  case (code *)0x20:
  case (code *)0x21:
  case (code *)0x25:
  case (code *)0x29:
    goto code_r0x000108400960;
  case (code *)0x2a:
    goto code_r0x0001084008cc;
  case (code *)0x2b:
    param_2 = param_3;
    param_9 = pfVar53;
  case (code *)0xb4:
    goto LAB_108400908;
  case (code *)0x2c:
  case (code *)0x2d:
    goto code_r0x000108400890;
  case (code *)0x2e:
  case (code *)0x2f:
  case (code *)0x31:
code_r0x0001084008a0:
    *(float **)((long)pfVar26 + 0x20) = pfVar53;
    *(undefined8 *)((long)pfVar26 + 0x28) = uVar62;
    unaff_x21 = pfVar45;
  case (code *)0x24:
  case (code *)0x28:
    param_1 = pfVar45;
    FUN_10840082c(param_1,param_3);
    param_2 = param_1;
code_r0x0001084008c0:
    iVar63 = (int)param_2;
    if ((int)param_1 != 0x22d) {
code_r0x0001084008c8:
      pcVar48 = *(code **)unaff_x21;
code_r0x0001084008cc:
      iVar63 = (int)param_2;
      (**(code **)(pcVar48 + 0x80))(unaff_x21);
      func_0x000108403b50();
    }
    bVar34 = iVar63 == 0x22d;
code_r0x0001084008e0:
    return (float *)(ulong)!bVar34;
  case (code *)0x33:
    break;
  case (code *)0x34:
    goto code_r0x000108400c0c;
  case (code *)0x38:
  case (code *)0x3c:
  case (code *)0x40:
    goto code_r0x000108400c24;
  case (code *)0x44:
code_r0x000108400c6c:
    pfVar53 = unaff_x22;
    FUN_1083c66cc();
    pfVar32 = (float *)&stack0xffffffffffffffe0;
    pfVar57 = unaff_x22;
    if (((int)pfVar53 != 0) &&
       (param_1 = unaff_x21, FUN_1083c66cc(), pfVar32 = (float *)&stack0xffffffffffffffe0,
       pfVar43 = unaff_x21, (int)param_1 == 0)) goto code_r0x000108400c10;
    goto code_r0x000108400d54;
  case (code *)0x48:
  case (code *)0x4c:
  case (code *)0x50:
    if (((ulong)param_1 & 1) == 0) {
      plVar37 = *(long **)(unaff_x22 + 4);
      (**(code **)(*plVar37 + 0xe0))();
      if ((int)plVar37 == 0) goto code_r0x000108400c6c;
    }
    FUN_1083fd5e0(&stack0xffffffffffffffe0,param_2);
    FUN_1083fd5e0(&stack0x00000000,param_2);
    pfVar53 = param_9;
    func_0x000108403784();
    FUN_1084009b0();
    if (pfVar53 != (float *)0x0) {
      func_0x000108403ba4();
    }
    goto LAB_10840120c;
  case (code *)0x54:
    func_0x000108403d1c();
    unaff_x27 = param_1 + 0x14;
    unaff_x23 = pfVar45;
  case (code *)0x58:
  case (code *)0x5c:
    pfVar53 = unaff_x27;
    while (pfVar45 != (float *)0x0) {
      unaff_x27 = pfVar53 + 0x16;
      pcVar48 = *(code **)(*(long *)*(float **)pfVar53 + 0x80);
      unaff_x25 = *(float **)pfVar53;
code_r0x000108400a28:
      param_1 = unaff_x25;
      (*pcVar48)();
code_r0x000108400a3c:
      param_9 = unaff_x21;
      func_0x000108403ecc();
code_r0x000108400a54:
      FUN_1084009b0();
      func_0x000108403d34();
      func_0x000108403d78();
      if (((ulong)param_1 & 1) == 0) {
        return (float *)0x0;
      }
code_r0x000108400a6c:
      unaff_x23 = (float *)((long)unaff_x23 + -1);
      pfVar53 = unaff_x27;
      pfVar45 = unaff_x23;
    }
    func_0x000108403e84();
LAB_108400a7c:
    func_0x000108400988();
code_r0x000108400a80:
    param_1 = (float *)0x1;
code_r0x000108400b7c:
    return param_1;
  case (code *)0x64:
    goto code_r0x000108400a28;
  case (code *)0x68:
  case (code *)0x6c:
    goto code_r0x000108400a3c;
  case (code *)0x74:
    goto code_r0x000108400a54;
  case (code *)0x78:
  case (code *)0x7c:
    goto code_r0x000108400a6c;
  case (code *)0x84:
    goto code_r0x000108400a80;
  case (code *)0x88:
    func_0x000108403974(*(undefined8 *)unaff_x23);
    func_0x00010840365c();
    bVar34 = (int)param_1 == 4;
  case (code *)0x8c:
    if (bVar34) {
      func_0x000108403ce4();
      func_0x000108403a34();
      unaff_x28 = (float *)0x0;
LAB_108400ac0:
      for (; func_0x000108403980(*(undefined8 *)(*(long *)unaff_x23 + 0x60)),
          (int)unaff_x28 < (int)param_1; unaff_x28 = (float *)(ulong)((int)unaff_x28 + 1)) {
code_r0x000108400ad4:
        pfVar57 = param_1;
code_r0x000108400ae8:
        param_9 = unaff_x21;
        func_0x000108403ecc();
        FUN_1084009b0();
code_r0x000108400b00:
        param_1 = pfVar57;
        func_0x000108403d34();
        func_0x000108403d78();
        if (((ulong)pfVar57 & 1) == 0) {
          return (float *)0x0;
        }
code_r0x000108400b14:
      }
      func_0x000108403980(*(undefined8 *)(*(long *)unaff_x23 + 0x60));
code_r0x000108400b94:
      func_0x000108403e84();
    }
    else {
      param_1 = unaff_x20;
      FUN_1083fda24();
code_r0x000108400b28:
      if ((int)param_1 == 0) {
        return param_1;
      }
      FUN_1083fda24();
      param_1 = unaff_x20;
      if ((int)unaff_x20 == 0) {
        return unaff_x20;
      }
code_r0x000108400b3c:
      uVar36 = (uint)param_2 & 0xff;
      if (uVar36 == 0x11) {
        func_0x000108403d28();
        if ((int)param_1 == 0) {
          return param_1;
        }
      }
      else if (uVar36 == 0x10) {
code_r0x000108400b50:
        func_0x000108403d28();
        if (((ulong)param_1 & 1) == 0) {
          return (float *)0x0;
        }
      }
LAB_108400bac:
      func_0x000108403b94();
      func_0x000108403e84();
    }
    goto LAB_108400a7c;
  case (code *)0x94:
    goto code_r0x000108400b7c;
  case (code *)0x98:
    goto code_r0x000108400b94;
  case (code *)0x9c:
    goto LAB_108400bac;
  case (code *)0xa4:
    func_0x000108403d34();
    func_0x000108403d78();
    func_0x0001084037d4();
    *(undefined ***)param_1 = &PTR_DAT_110a474d0;
    FUN_1083c8734(param_1 + 2);
    return param_1;
  case (code *)0xa8:
    goto code_r0x000108400bdc;
  case (code *)0xac:
    goto code_r0x000108400bf4;
  case (code *)0xc4:
    goto LAB_108400ac0;
  case (code *)0xc8:
    goto code_r0x000108400ad4;
  case (code *)0xcc:
  case (code *)0xd0:
    goto code_r0x000108400ae8;
  case (code *)0xd4:
    goto code_r0x000108400b00;
  case (code *)0xd8:
    goto code_r0x000108400b14;
  case (code *)0xdc:
  case (code *)0xe0:
    goto code_r0x000108400b28;
  case (code *)0xe4:
    goto code_r0x000108400b3c;
  case (code *)0xf4:
    goto code_r0x000108400b50;
  }
code_r0x00010840088c:
code_r0x000108400890:
  return param_1;
code_r0x0001083fe880:
  pfVar57 = unaff_x20;
  FUN_1083c6784();
  unaff_x21 = pfVar57;
  if (pfVar57 != (float *)0x0) goto code_r0x0001083fe7fc;
  *(undefined8 *)(pfVar58 + -0x20) = *(undefined8 *)(unaff_x20 + 6);
code_r0x0001083fed38:
  pfVar57 = param_1 + 0x50;
code_r0x0001083fed3c:
  FUN_1083d66f4();
code_r0x0001083fed44:
  if ((int)pfVar57 != 0) {
code_r0x0001083fed48:
    unaff_x22 = *(float **)(unaff_x20 + 6);
    FUN_1083f446c(unaff_x22);
    func_0x000108403650();
    goto LAB_1083ff778;
  }
code_r0x0001083fed5c:
  func_0x00010840359c();
code_r0x0001083fed60:
  func_0x000108403784();
code_r0x0001083fed68:
  FUN_108401d78();
code_r0x0001083ff730:
  unaff_x22 = (float *)0x1;
  goto LAB_1083ff778;
code_r0x0001083feb9c:
  pfVar45 = *(float **)(unaff_x20 + 6);
code_r0x0001083feba0:
  param_3 = (float *)(ulong)*(byte *)(unaff_x20 + 8);
  param_4 = *(float **)(unaff_x20 + 10);
  pfVar57 = param_1;
code_r0x0001083febac:
  pfVar53 = *(float **)(pfVar58 + -4);
  uVar62 = *(undefined8 *)(pfVar58 + -2);
  func_0x0001084038b0();
  pfVar27 = pfVar58 + -0x4c;
  *(float **)(pfVar58 + -0x40) = unaff_x28;
  *(float **)(pfVar58 + -0x3e) = unaff_x27;
code_r0x000108400bdc:
  *(float **)((long)pfVar27 + 0x40) = unaff_x26;
  *(float **)((long)pfVar27 + 0x48) = unaff_x25;
  *(ulong *)((long)pfVar27 + 0x50) = unaff_x24;
  *(float **)((long)pfVar27 + 0x58) = unaff_x23;
  *(float **)((long)pfVar27 + 0x60) = unaff_x22;
  *(float **)((long)pfVar27 + 0x68) = unaff_x21;
  *(float **)((long)pfVar27 + 0x70) = unaff_x20;
  *(float **)((long)pfVar27 + 0x78) = param_2;
  *(float **)((long)pfVar27 + 0x80) = pfVar53;
  *(undefined8 *)((long)pfVar27 + 0x88) = uVar62;
  puVar28 = (undefined1 *)pfVar27;
code_r0x000108400bf4:
  unaff_x20 = (float *)&UNK_10df26638;
  puVar29 = puVar28;
  param_1 = pfVar57;
  param_2 = pfVar57;
  unaff_x21 = pfVar45;
  unaff_x22 = param_4;
  unaff_x23 = param_3;
code_r0x000108400c0c:
  pfVar38 = pfVar45;
  unaff_x24 = (ulong)unaff_x23 & 0xff;
  puVar30 = puVar29;
  pfVar43 = unaff_x21;
code_r0x000108400c10:
  unaff_x21 = unaff_x22;
  uVar36 = (uint)unaff_x23 & 0xff;
  pcVar48 = (code *)(ulong)uVar36;
  bVar33 = 0x14 < uVar36;
  bVar34 = uVar36 == 0x15;
  puVar31 = puVar30;
  pfVar45 = pfVar38;
code_r0x000108400c24:
  if (!bVar33 || bVar34) {
                    /* WARNING: Could not recover jumptable at 0x000108400c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((long)unaff_x20 + unaff_x24) * 4 + 0x108400c38))();
    return param_1;
  }
  if ((int)pcVar48 != 0x22) goto LAB_108400d50;
  param_1 = pfVar43;
  FUN_1083d64e8();
  if ((int)param_1 != 0) {
    func_0x00010840392c();
    iVar63 = (int)param_1;
    FUN_1083fe7bc();
    if (iVar63 == 0) {
      return (float *)0x0;
    }
    param_1 = *(float **)(pfVar43 + 4);
    func_0x000108403618();
    pfVar45 = param_1;
    func_0x000108403900();
  }
  func_0x000108403790();
  pfVar53 = *(float **)(puVar31 + 0x80);
  uVar62 = *(undefined8 *)(puVar31 + 0x88);
  unaff_x20 = *(float **)(puVar31 + 0x70);
  param_2 = *(float **)(puVar31 + 0x78);
  unaff_x22 = *(float **)(puVar31 + 0x60);
  unaff_x21 = *(float **)(puVar31 + 0x68);
  unaff_x24 = *(ulong *)(puVar31 + 0x50);
  unaff_x23 = *(float **)(puVar31 + 0x58);
  unaff_x26 = *(float **)(puVar31 + 0x40);
  unaff_x25 = *(float **)(puVar31 + 0x48);
  unaff_x28 = *(float **)(puVar31 + 0x30);
  unaff_x27 = *(float **)(puVar31 + 0x38);
  pfVar58 = (float *)(puVar31 + 0x90);
  goto code_r0x0001083fe7bc;
code_r0x0001084042f8:
  while( true ) {
    fVar119 = SUB84(param_3,0);
    fVar93 = SUB84(pfVar58 + -0x44,0);
    pfVar45 = pfVar58;
    func_0x00010838ed50();
    param_1 = (float *)((long)param_1 + -1);
    if (param_1 == (float *)0x0) break;
    uVar62 = *(undefined8 *)(unaff_x21 + -1);
    fVar93 = *unaff_x21;
    uVar64 = *(undefined8 *)unaff_x20;
    pfVar58[4] = (float)uVar62;
    pfVar58[5] = -fVar93;
    func_0x000108404a80(uVar62,-fVar93,uVar64);
    *(undefined8 *)(pfVar58 + 8) = extraout_var_17;
    *(undefined8 *)(pfVar58 + 6) = extraout_d2_00;
    pfVar58[10] = 0.0;
    pfVar58[0xb] = 0.0;
    *(float **)(pfVar58 + 0xc) = pfVar57;
    param_3 = (float *)0x1;
    func_0x000108142084(pfVar58 + 4,pfVar58 + -4);
    pfVar58[-0x44] = extraout_s0;
    pfVar58[-0x43] = extraout_s1;
    pfVar58[-0x42] = extraout_s2;
    pfVar58[-0x41] = extraout_s3;
    unaff_x20 = unaff_x20 + 2;
    unaff_x21 = unaff_x21 + 2;
  }
  func_0x000108404a6c(*(undefined8 *)(pfVar58 + -0x1a));
  if ((bool)uVar35) {
    return pfVar45;
  }
  ___stack_chk_fail();
  FUN_1083a2cb4(pfVar58 + 4);
  pfVar38 = pfVar58 + -0x44;
  func_0x0001083a261c();
  func_0x000108404a58();
  *(float **)(pfVar58 + -0x30) = unaff_x20;
  *(float **)(pfVar58 + -0x2e) = pfVar45;
  *(float **)(pfVar58 + -0x2c) = pfVar53;
  *(code **)(pfVar58 + -0x2a) = FUN_10840441c;
  if ((int)*pfVar38 < (int)fVar93) {
    *pfVar38 = fVar93;
    FUN_1084049cc(pfVar38 + 2,(long)(int)fVar93);
  }
  if ((int)pfVar38[4] < (int)fVar119) {
    pfVar38[4] = fVar119;
    FUN_1084049cc(pfVar38 + 6,(long)(int)fVar119);
  }
  pfVar38 = pfVar38 + 8;
  lVar51 = *(long *)(pfVar58 + -0x30);
  lVar46 = *(long *)(pfVar58 + -0x2e);
  uVar62 = *(undefined8 *)pfVar38;
  *(float **)(pfVar58 + -0x34) = pfVar57;
  *(float **)(pfVar58 + -0x32) = unaff_x21;
  *(long *)(pfVar58 + -0x30) = lVar51;
  *(long *)(pfVar58 + -0x2e) = lVar46;
  *(undefined8 *)(pfVar58 + -0x2c) = *(undefined8 *)(pfVar58 + -0x2c);
  *(undefined8 *)(pfVar58 + -0x2a) = *(undefined8 *)(pfVar58 + -0x2a);
  func_0x000108341d9c(pfVar38,uVar62);
  for (lVar40 = *(long *)(pfVar38 + 2); lVar40 != lVar46; lVar40 = lVar40 + -0x60) {
    pfVar38 = (float *)(lVar40 + -0x18);
    func_0x0001081298a0(pfVar38);
  }
  *(long *)(lVar51 + 8) = lVar46;
  return pfVar38;
code_r0x00010841bf90:
  while (pfVar38 != (float *)0x0) {
    unaff_x28 = (float *)0x0;
    do {
      if (**(ulong **)(pfVar58 + -0xc) != unaff_x24) {
        _objc_enumerationMutation(unaff_x20);
      }
      pfVar57 = *(float **)(*(long *)(pfVar58 + -0xe) + (long)unaff_x28 * 8);
      pfVar38 = pfVar57;
      func_0x00010c081660();
      if (((ulong)pfVar38 & 1) == 0) {
        unaff_x23 = pfVar57;
        func_0x00010c268400();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(pfVar58 + -0x26) = &UNK_10df265ec;
        *(undefined8 *)(pfVar58 + -0x24) = unaff_d13;
        *(undefined **)(pfVar58 + -0x22) = &UNK_10df26584;
        *(float **)(pfVar58 + -0x20) = unaff_x27;
        *(float **)(pfVar58 + -0x1e) = pfVar57;
        *(ulong *)(pfVar58 + -0x1a) =
             CONCAT17(unaff_00005187,
                      CONCAT16(unaff_00005186,
                               CONCAT15(unaff_00005185,
                                        CONCAT14(unaff_00005184,
                                                 CONCAT13(unaff_00005183,
                                                          CONCAT12(unaff_00005182,
                                                                   CONCAT11(unaff_00005181,unaff_b12
                                                                           )))))));
        *(undefined8 *)(pfVar58 + -0x18) = unaff_d11;
        *(undefined8 *)(pfVar58 + -0x16) = unaff_d10;
        *(ulong *)(pfVar58 + -0x14) =
             CONCAT17(unaff_00005127,
                      CONCAT16(unaff_00005126,
                               CONCAT15(unaff_00005125,
                                        CONCAT14(unaff_00005124,
                                                 CONCAT13(unaff_00005123,
                                                          CONCAT12(unaff_00005122,
                                                                   CONCAT11(unaff_00005121,unaff_b9)
                                                                  ))))));
        *(ulong *)(pfVar58 + -0x12) = CONCAT44(unaff_00005104,unaff_s8);
        _objc_retain(param_1);
        *(float **)(pfVar58 + -0x1c) = param_1;
        func_0x00010bf97ce0(unaff_x23);
        _objc_release(unaff_x23);
        _objc_release(*(undefined8 *)(pfVar58 + -0x1c));
      }
      unaff_x28 = (float *)((long)unaff_x28 + 1);
    } while (unaff_x21 != unaff_x28);
    param_3 = pfVar58 + -0x10;
    pfVar38 = unaff_x20;
    param_4 = pfVar58;
    func_0x00010bf52a60();
    unaff_x21 = pfVar38;
  }
LAB_10841bf94:
  _objc_release(unaff_x20);
  pfVar38 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pfVar58 + -0x28)) {
    return pfVar38;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pfVar58 + -0x50) = unaff_d15;
  *(undefined8 *)(pfVar58 + -0x4e) = unaff_d14;
  *(undefined8 *)(pfVar58 + -0x4c) = unaff_d13;
  *(ulong *)(pfVar58 + -0x4a) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)(pfVar58 + -0x48) = unaff_d11;
  *(undefined8 *)(pfVar58 + -0x46) = unaff_d10;
  *(ulong *)(pfVar58 + -0x44) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)(pfVar58 + -0x42) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)(pfVar58 + -0x40) = unaff_x28;
  *(float **)(pfVar58 + -0x3e) = unaff_x27;
  *(undefined **)(pfVar58 + -0x3c) = &UNK_10df26584;
  *(undefined **)(pfVar58 + -0x3a) = &UNK_10df265ec;
  *(ulong *)(pfVar58 + -0x38) = unaff_x24;
  *(float **)(pfVar58 + -0x36) = unaff_x23;
  *(float **)(pfVar58 + -0x34) = pfVar57;
  *(float **)(pfVar58 + -0x32) = unaff_x21;
  *(float **)(pfVar58 + -0x30) = unaff_x20;
  *(float **)(pfVar58 + -0x2e) = param_1;
  *(float **)(pfVar58 + -0x2c) = pfVar53;
  *(code **)(pfVar58 + -0x2a) = FUN_10841bfec;
  *(undefined8 *)(pfVar58 + -0x54) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pfVar45);
  _objc_retain(param_3);
  pfVar53 = *(float **)(pfVar38 + 8);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  pfVar43 = pfVar53;
  param_1 = pfVar45;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pfVar32 = pfVar43;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pfVar43);
  _objc_release(pfVar53);
  if (pfVar32 != (float *)0x0) {
    pfVar53 = pfVar32;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    pfVar43 = pfVar53;
    func_0x00010c08fa60();
    _objc_release(pfVar53);
    if (pfVar43 != (float *)0x0) {
      *(float **)(pfVar58 + -0x86) = pfVar45;
      pfVar58[-0x7a] = 0.0;
      pfVar58[-0x79] = 0.0;
      pfVar58[-0x7c] = 0.0;
      pfVar58[-0x7b] = 0.0;
      pfVar58[-0x76] = 0.0;
      pfVar58[-0x75] = 0.0;
      pfVar58[-0x78] = 0.0;
      pfVar58[-0x77] = 0.0;
      pfVar58[-0x82] = 0.0;
      pfVar58[-0x81] = 0.0;
      pfVar58[-0x84] = 0.0;
      pfVar58[-0x83] = 0.0;
      pfVar58[-0x7e] = 0.0;
      pfVar58[-0x7d] = 0.0;
      pfVar58[-0x80] = 0.0;
      pfVar58[-0x7f] = 0.0;
      _objc_retain(param_3);
      param_1 = pfVar58 + -0x84;
      param_4 = pfVar58 + -0x74;
      pfVar45 = param_3;
      func_0x00010bf52a60();
      if (pfVar45 != (float *)0x0) {
        lVar51 = **(long **)(pfVar58 + -0x80);
        do {
          pfVar57 = (float *)0x0;
          do {
            if (**(long **)(pfVar58 + -0x80) != lVar51) {
              _objc_enumerationMutation(param_3);
            }
            uVar62 = *(undefined8 *)(*(long *)(pfVar58 + -0x82) + (long)pfVar57 * 8);
            auVar185 = func_0x00010c1281e0(*(undefined8 *)(pfVar38 + 8));
            unaff_s8 = auVar185._0_4_;
            unaff_00005104 = auVar185._4_4_;
            unaff_b9 = auVar185[8];
            unaff_00005121 = auVar185[9];
            unaff_00005122 = auVar185[10];
            unaff_00005123 = auVar185[0xb];
            unaff_00005124 = auVar185[0xc];
            unaff_00005125 = auVar185[0xd];
            unaff_00005126 = auVar185[0xe];
            unaff_00005127 = auVar185[0xf];
            unaff_d10 = func_0x00010bf34840(*(undefined8 *)(pfVar38 + 8));
            unaff_d11 = func_0x00010bf348c0(*(undefined8 *)(pfVar38 + 8));
            auVar186 = func_0x00010c23d0a0(uVar62);
            unaff_d13 = auVar186._8_8_;
            uVar35 = (undefined1)extraout_var_09;
            uVar144 = (undefined1)((ulong)extraout_var_09 >> 8);
            uVar145 = (undefined1)((ulong)extraout_var_09 >> 0x10);
            uVar146 = (undefined1)((ulong)extraout_var_09 >> 0x18);
            uVar147 = (undefined1)((ulong)extraout_var_09 >> 0x20);
            uVar148 = (undefined1)((ulong)extraout_var_09 >> 0x28);
            uVar149 = (undefined1)((ulong)extraout_var_09 >> 0x30);
            uVar150 = (undefined1)((ulong)extraout_var_09 >> 0x38);
            unaff_b12 = auVar186[0];
            unaff_00005181 = auVar186[1];
            unaff_00005182 = auVar186[2];
            unaff_00005183 = auVar186[3];
            unaff_00005184 = auVar186[4];
            unaff_00005185 = auVar186[5];
            unaff_00005186 = auVar186[6];
            unaff_00005187 = auVar186[7];
            auVar187 = func_0x00010bf345e0(uVar62);
            unaff_d15 = auVar187._8_8_;
            unaff_d14 = auVar187._0_8_;
            pfVar43 = *(float **)(pfVar38 + 8);
            uVar65 = func_0x00010c141a80();
            uVar73 = *(undefined8 *)(pfVar38 + 0xc);
            uVar79 = *(undefined8 *)(pfVar38 + 0xe);
            uVar62 = *(undefined8 *)(pfVar38 + 0x10);
            uVar64 = *(undefined8 *)(pfVar38 + 0x12);
            *(undefined8 *)(pfVar58 + -0x88) = *(undefined8 *)(pfVar38 + 0x14);
            *(undefined8 *)(pfVar58 + -0x8a) = uVar64;
            *(undefined8 *)(pfVar58 + -0x8c) = uVar62;
            *(undefined8 *)(pfVar58 + -0x90) = uVar73;
            *(undefined8 *)(pfVar58 + -0x8e) = uVar79;
            *(undefined8 *)(pfVar58 + -0x92) = uVar65;
            pfVar58[-0x94] = 0.0;
            pfVar58[-0x93] = 1.875;
            in_q4[9] = uVar144;
            in_q4[8] = uVar35;
            in_q4[10] = uVar145;
            in_q4[0xb] = uVar146;
            in_q4[0xc] = uVar147;
            in_q4[0xd] = uVar148;
            in_q4[0xe] = uVar149;
            in_q4[0xf] = uVar150;
            in_q4._0_8_ = auVar186._0_8_;
            FUN_10841b844(auVar185._0_8_,auVar185._8_8_,unaff_d10,unaff_d11,auVar186._0_8_,unaff_d13
                          ,unaff_d14,unaff_d15);
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = pfVar43;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            dVar66 = (double)func_0x00010c2a5040();
            if (dVar66 <= 0.0) {
LAB_10841c2c0:
              _objc_release(unaff_x25);
            }
            else {
              unaff_x26 = pfVar43;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              dVar66 = (double)func_0x00010bfe0640();
              unaff_s8 = SUB84(dVar66,0);
              unaff_00005104 = (undefined4)((ulong)dVar66 >> 0x20);
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
              if (0.0 < dVar66) {
                unaff_x25 = (float *)PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(unaff_x25);
                pfVar53 = unaff_x25;
                func_0x00010beedca0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(pfVar53);
                unaff_x26 = pfVar32;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                pfVar53 = unaff_x25;
                func_0x00010beedca0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(pfVar53);
                func_0x00010befa120(*(undefined8 *)(pfVar38 + 10));
                _objc_release(unaff_x26);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(pfVar43);
            pfVar57 = (float *)((long)pfVar57 + 1);
          } while (pfVar45 != pfVar57);
          param_1 = pfVar58 + -0x84;
          param_4 = pfVar58 + -0x74;
          pfVar45 = param_3;
          func_0x00010bf52a60();
          pfVar53 = (float *)0x0;
        } while (pfVar45 != (float *)0x0);
      }
      _objc_release(param_3);
      pfVar45 = *(float **)(pfVar58 + -0x86);
    }
  }
  _objc_release(pfVar32);
  _objc_release(param_3);
  pfVar32 = pfVar45;
  _objc_release(pfVar45);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pfVar58 + -0x54)) {
    return pfVar32;
  }
  ___stack_chk_fail();
  *(undefined8 *)(pfVar58 + -0xb8) = unaff_d15;
  *(undefined8 *)(pfVar58 + -0xb6) = unaff_d14;
  *(undefined8 *)(pfVar58 + -0xb4) = unaff_d13;
  *(ulong *)(pfVar58 + -0xb2) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)(pfVar58 + -0xb0) = unaff_d11;
  *(undefined8 *)(pfVar58 + -0xae) = unaff_d10;
  *(ulong *)(pfVar58 + -0xac) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)(pfVar58 + -0xaa) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)(pfVar58 + -0xa8) = unaff_x26;
  *(float **)(pfVar58 + -0xa6) = unaff_x25;
  *(float **)(pfVar58 + -0xa4) = pfVar43;
  *(float **)(pfVar58 + -0xa2) = pfVar53;
  *(float **)(pfVar58 + -0xa0) = pfVar57;
  *(float **)(pfVar58 + -0x9e) = pfVar38;
  *(float **)(pfVar58 + -0x9c) = param_3;
  *(float **)(pfVar58 + -0x9a) = pfVar45;
  *(float **)(pfVar58 + -0x98) = pfVar58 + -0x2c;
  *(code **)(pfVar58 + -0x96) = FUN_10841c368;
  uVar62 = extraout_d2_02;
  uVar64 = extraout_d3_01;
  _objc_retain(param_1);
  _objc_retain(param_4);
  pfVar53 = param_4;
  func_0x00010c082fa0();
  if ((int)pfVar53 != 0) {
    pfVar53 = param_4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    pfVar45 = pfVar53;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pfVar45 != (float *)0x0) {
      pfVar45 = pfVar53;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      pfVar38 = pfVar45;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar38;
      func_0x00010c08fa60();
      _objc_release(pfVar38);
      if (pfVar57 != (float *)0x0) {
        puVar42 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        auVar185 = func_0x00010c128340(pfVar53);
        pfVar38 = pfVar53;
        auVar186 = func_0x00010c128320(pfVar53);
        *(undefined8 *)(pfVar58 + -0xbe) = uVar64;
        *(long *)(pfVar58 + -0xbc) = in_q4._0_8_;
        *(undefined8 *)(pfVar58 + -0xc2) = extraout_d1_02;
        *(undefined8 *)(pfVar58 + -0xc0) = uVar62;
        *(undefined8 *)(pfVar58 + -0xc4) = extraout_d0_00;
        pfVar58[-200] = 0.0;
        pfVar58[-199] = 1.875;
        pfVar58[-0xc6] = 0.0;
        pfVar58[-0xc5] = 0.0;
        FUN_10841b844(auVar185._0_8_,auVar185._8_8_,auVar186._0_8_,auVar186._8_8_,0x3ff0000000000000
                      ,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        pfVar58 = pfVar38;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        dVar66 = (double)func_0x00010c2a5040();
        if (dVar66 <= 0.0) {
          _objc_release(pfVar58);
        }
        else {
          pfVar57 = pfVar38;
          func_0x00010c23d0a0(pfVar38);
          _objc_retainAutoreleasedReturnValue();
          dVar66 = (double)func_0x00010bfe0640();
          _objc_release(pfVar57);
          _objc_release(pfVar58);
          if (0.0 < dVar66) {
            func_0x00010c1695c0(puVar42);
            func_0x00010c21acc0(puVar42);
            puVar44 = puVar42;
            func_0x00010beedca0(puVar42);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar44);
            pfVar58 = pfVar45;
            func_0x00010c297e20(pfVar45);
            _objc_retainAutoreleasedReturnValue();
            puVar44 = puVar42;
            func_0x00010beedca0(puVar42);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar44);
            _objc_release(pfVar58);
            func_0x00010befa120(param_1);
          }
        }
        _objc_release(pfVar38);
        _objc_release(puVar42);
      }
      _objc_release(pfVar45);
    }
    _objc_release(pfVar53);
  }
  _objc_release(param_4);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return param_1;
  while( true ) {
    func_0x000108403650();
    lVar51 = lVar51 + -8;
    if (((ulong)pfVar57 & 1) == 0) break;
code_r0x0001083fe930:
    unaff_x22 = (float *)(ulong)(lVar51 == 0);
    if (lVar51 == 0) break;
  }
LAB_1083ff778:
  func_0x0001084038b0(unaff_x22,*(undefined8 *)(pfVar58 + -2));
  return unaff_x22;
LAB_108400d50:
  puVar31[0x2f] = (char)unaff_x23;
  pfVar32 = (float *)puVar31;
  pfVar57 = pfVar43;
code_r0x000108400d54:
  unaff_x27 = pfVar57 + 4;
  pfVar38 = *(float **)unaff_x27;
  unaff_x26 = unaff_x21 + 4;
  (**(code **)(*(long *)pfVar38 + 0x38))(pfVar38,*(undefined8 *)unaff_x26);
  if (((ulong)pfVar38 & 1) == 0) {
    unaff_x20 = *(float **)unaff_x27;
    func_0x000108403634();
    func_0x00010840365c();
    pfVar38 = *(float **)unaff_x26;
    func_0x000108403634();
code_r0x000108400dfc:
    func_0x00010840365c();
    if ((int)unaff_x20 != (int)pfVar38) {
      return (float *)0x0;
    }
    func_0x000108403890();
    func_0x000108403dd0();
    pfVar53 = unaff_x26;
    if ((int)pfVar38 == 0) {
LAB_108400ec8:
      func_0x000108403890();
      func_0x000108403dc8();
      if (((ulong)pfVar38 & 1) == 0) {
        func_0x000108403890();
        (**(code **)(extraout_x8_16 + 0xd8))();
        if ((int)pfVar38 == 0) goto LAB_108400d74;
      }
      func_0x000108403884();
      func_0x000108403dd0();
      pfVar58 = pfVar38;
      unaff_x26 = unaff_x27;
      goto LAB_108400d78;
    }
    func_0x000108403884();
    func_0x000108403dc8();
    if (((ulong)pfVar38 & 1) == 0) {
      func_0x000108403884();
      (**(code **)(extraout_x8_09 + 0xd8))();
      if (((ulong)pfVar38 & 1) == 0) goto LAB_108400ec8;
    }
    uVar36 = 0;
    bVar34 = true;
  }
  else {
LAB_108400d74:
    pfVar58 = (float *)0x0;
    pfVar53 = unaff_x26;
    unaff_x26 = unaff_x27;
LAB_108400d78:
    uVar36 = (uint)pfVar58;
    bVar34 = false;
    unaff_x27 = unaff_x26;
  }
  unaff_x20 = (float *)0x0;
  pfVar58 = *(float **)unaff_x26;
  if ((((uint)unaff_x23 & 0xff) < 0x20) &&
     ((1 << (ulong)((uint)unaff_x23 & 0x1f) & 0xffc08000U) != 0)) {
    pfVar45 = pfVar32;
    func_0x000108403e04(pfVar32,param_2,pfVar57);
    unaff_x20 = *(float **)pfVar32;
    if (unaff_x20 == (float *)0x0) {
      return (float *)0x0;
    }
    if (unaff_x23 == (float *)0xf) {
      func_0x0001084035d4();
      if ((int)pfVar45 == 0) {
        param_2 = (float *)0x0;
      }
      else {
        func_0x000108403784();
        func_0x0001083fda64();
        param_2 = pfVar45;
      }
      goto LAB_108401210;
    }
    pfVar38 = (float *)((long)pfVar32 + 0x2f);
    FUN_1083cb2fc();
    *(char *)((long)pfVar32 + 0x2f) = (char)pfVar38;
    unaff_x23 = pfVar38;
  }
  if (((uint)unaff_x23 & 0xff) == 2) {
    func_0x000108403890();
    (**(code **)(extraout_x8_10 + 0xd8))();
    if ((int)pfVar38 == 0) {
LAB_108400efc:
      func_0x000108403890();
      (**(code **)(extraout_x8_17 + 0xd0))();
      if ((int)pfVar38 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_18 + 0xd8))();
        if ((int)pfVar38 != 0) {
          func_0x000108403890();
          iVar63 = (int)pfVar38;
          (**(code **)(extraout_x8_19 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_20 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_21 + 0x68))();
          iVar70 = 1;
          goto LAB_108400fa8;
        }
      }
      func_0x000108403890();
      (**(code **)(extraout_x8_22 + 0xd8))();
      if ((int)pfVar38 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_23 + 0xd0))();
        if ((int)pfVar38 != 0) {
          func_0x000108403890();
          iVar70 = (int)pfVar38;
          (**(code **)(extraout_x8_24 + 0x60))();
          func_0x000108403890();
          (**(code **)(extraout_x8_25 + 0x68))();
          func_0x000108403884();
          (**(code **)(extraout_x8_26 + 0x60))();
          iVar63 = 1;
          goto LAB_108400fa8;
        }
      }
      goto LAB_108400fe4;
    }
    func_0x000108403884();
    (**(code **)(extraout_x8_11 + 0xd8))();
    if ((int)pfVar38 == 0) goto LAB_108400efc;
    func_0x000108403890();
    iVar70 = (int)pfVar38;
    (**(code **)(extraout_x8_12 + 0x60))();
    func_0x000108403890();
    (**(code **)(extraout_x8_13 + 0x68))();
    iVar63 = iVar70;
    func_0x000108403884();
    (**(code **)(extraout_x8_14 + 0x60))();
    func_0x000108403884();
    (**(code **)(extraout_x8_15 + 0x68))();
LAB_108400fa8:
    param_2 = param_2 + 0xc;
    func_0x0001083f926c(param_2,iVar63 * iVar70);
    func_0x000108403784();
    func_0x000108400974();
    if (((int)param_2 == 0) || (func_0x0001084035d4(), (int)param_2 == 0)) goto LAB_108401208;
    func_0x000108403cfc();
    func_0x0001083fa66c();
    goto LAB_1084011f8;
  }
LAB_108400fe4:
  if (((uVar36 & 1) == 0 && !bVar34) &&
     ((**(code **)(*(long *)pfVar58 + 0x38))(pfVar58,*(undefined8 *)pfVar53), pfVar38 = pfVar58,
     (int)pfVar58 == 0)) goto LAB_108401208;
  uVar56 = (uint)unaff_x23 & 0xff;
  if (uVar56 == 9) {
    func_0x000108403d64();
    if ((int)pfVar38 == 0) goto LAB_1084010a0;
    uVar62 = *(undefined8 *)(unaff_x21 + 4);
    pfVar32[2] = 2.3509886e-38;
    pfVar32[3] = 5.74532e-44;
    *(undefined ***)pfVar32 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar32 + 4) = uVar62;
    pfVar32[6] = 0.0;
    pfVar32[7] = 1.875;
    func_0x00010840392c();
    FUN_108401264();
    register0x00000008 = (BADSPACEBASE *)pfVar38;
    goto LAB_10840120c;
  }
  if ((uVar56 == 8) && (func_0x000108403d64(), (int)pfVar38 != 0)) {
    uVar62 = *(undefined8 *)(unaff_x21 + 4);
    pfVar32[2] = 2.3509886e-38;
    pfVar32[3] = 5.74532e-44;
    *(undefined ***)pfVar32 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar32 + 4) = uVar62;
    pfVar32[6] = 0.0;
    pfVar32[7] = 0.0;
    func_0x00010840392c();
    FUN_108401264();
    register0x00000008 = (BADSPACEBASE *)pfVar38;
    goto LAB_10840120c;
  }
LAB_1084010a0:
  func_0x000108403784();
  func_0x000108400974();
  if ((int)pfVar38 == 0) goto LAB_108401208;
  if (bVar34) {
    pfVar38 = *(float **)pfVar53;
    func_0x000108403744();
    (*extraout_x8_27)();
    func_0x0001084038a8();
  }
  func_0x0001084035d4();
  if ((int)pfVar38 == 0) goto LAB_108401208;
  if (uVar36 != 0) {
    pfVar38 = *(float **)unaff_x27;
    func_0x000108403744();
    (*extraout_x8_28)();
    func_0x0001084038a8();
  }
  register0x00000008 = (BADSPACEBASE *)(float *)0x0;
  switch((ulong)unaff_x23 & 0xff) {
  case 0:
    func_0x0001084036d8();
    break;
  case 1:
    func_0x0001084036d8();
    break;
  case 2:
    func_0x0001084036d8();
    break;
  case 3:
    func_0x0001084036d8();
    break;
  default:
    goto LAB_10840120c;
  case 8:
  case 0xc:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar62 = 0xfb;
    goto code_r0x00010840116c;
  case 9:
  case 0xd:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar62 = 0x100;
    goto code_r0x00010840116c;
  case 10:
  case 0xe:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar62 = 0x106;
code_r0x00010840116c:
    param_2 = param_2 + 0xc;
    FUN_1083f9008(param_2,uVar62,pfVar38);
    goto LAB_1084011f8;
  case 0x10:
    func_0x0001084036d8();
    if (((ulong)pfVar38 & 1) != 0) {
code_r0x0001084011ac:
      func_0x000108403ce4();
      func_0x000108403a34();
      func_0x000108400988(param_2,(ulong)unaff_x23 & 0xff,pfVar38);
      goto LAB_1084011f8;
    }
    goto LAB_108401208;
  case 0x11:
    func_0x0001084036d8();
    if ((int)pfVar38 != 0) goto code_r0x0001084011ac;
    goto LAB_108401208;
  case 0x12:
  case 0x13:
    func_0x0001084036d8();
    break;
  case 0x14:
  case 0x15:
    func_0x0001084036d8();
  }
  param_2 = pfVar38;
  if (((ulong)pfVar38 & 1) == 0) {
LAB_108401208:
    register0x00000008 = (BADSPACEBASE *)(float *)0x0;
LAB_10840120c:
    param_2 = (float *)register0x00000008;
    if (unaff_x20 == (float *)0x0) {
      return (float *)register0x00000008;
    }
  }
  else {
LAB_1084011f8:
    if (unaff_x20 == (float *)0x0) {
      return (float *)0x1;
    }
    func_0x000108403784();
    func_0x0001083fda64();
  }
LAB_108401210:
  func_0x000108403868();
  (*extraout_x8_29)();
  return param_2;
}



/* Entry: 108400898; end: 108400973;  */

bool FUN_108400898(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_2;
  FUN_10840082c(param_2,param_3);
  if ((int)plVar1 != 0x22d) {
    (**(code **)(*param_2 + 0x80))(param_2);
    func_0x000108403b50();
  }
  return (int)plVar1 != 0x22d;
}



/* Entry: 108400974; end: 1084009af;  */

/* WARNING: Possible PIC construction at 0x0001083ff378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108401b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010841d3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083ff31c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff144) */
/* WARNING: Removing unreachable block (ram,0x0001083ff44c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff37c) */
/* WARNING: Removing unreachable block (ram,0x00010841d3d8) */
/* WARNING: Removing unreachable block (ram,0x000108410300) */
/* WARNING: Removing unreachable block (ram,0x000108410310) */
/* WARNING: Removing unreachable block (ram,0x0001083ffdb4) */
/* WARNING: Removing unreachable block (ram,0x00010840e230) */
/* WARNING: Removing unreachable block (ram,0x00010840e24c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_108400974(float *param_1,long param_2,float *param_3,float *param_4,undefined8 param_5,
                     code *UNRECOVERED_JUMPTABLE_00)

{
  undefined **ppuVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
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
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  uint3 uVar25;
  float *pfVar26;
  float *pfVar27;
  bool bVar28;
  undefined1 uVar29;
  uint uVar30;
  float *pfVar31;
  float *pfVar32;
  long *plVar33;
  float *pfVar34;
  undefined **ppuVar35;
  long lVar36;
  float *pfVar37;
  float *pfVar38;
  undefined *puVar39;
  undefined *puVar40;
  long *plVar41;
  float *pfVar42;
  float *pfVar43;
  long lVar44;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar45;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  undefined4 uVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  long *unaff_x19;
  float *pfVar50;
  short *psVar51;
  undefined8 unaff_x20;
  float *pfVar52;
  ulong uVar53;
  undefined8 unaff_x21;
  uint uVar54;
  float *pfVar55;
  float *pfVar56;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  float *pfVar57;
  undefined8 uVar58;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar59;
  float *unaff_x27;
  float *unaff_x28;
  ulong uVar60;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  int iVar61;
  undefined8 extraout_d0;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  double dVar65;
  undefined8 extraout_d0_00;
  int iVar69;
  int iVar70;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  int iVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 extraout_var_09;
  float extraout_s1;
  undefined8 extraout_d1;
  undefined8 uVar72;
  undefined8 extraout_d1_02;
  undefined1 auVar73 [15];
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined1 auVar74 [16];
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float extraout_s2;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 uVar78;
  undefined8 extraout_d2_02;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined1 auVar79 [16];
  undefined8 extraout_d2_01;
  undefined8 extraout_var_18;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float extraout_s3;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined1 in_q4 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  undefined1 in_q5 [16];
  float fVar89;
  undefined1 auVar86 [16];
  float fVar92;
  undefined1 in_q6 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  int iVar93;
  float fVar94;
  undefined4 uVar95;
  int iVar98;
  float fVar99;
  int iVar100;
  float fVar101;
  undefined1 in_q7 [16];
  int iVar102;
  float fVar103;
  undefined4 unaff_s8;
  float fVar104;
  undefined4 unaff_00005104;
  undefined1 unaff_b9;
  undefined1 unaff_00005121;
  undefined1 unaff_00005122;
  undefined1 unaff_00005123;
  undefined1 unaff_00005124;
  byte bVar105;
  undefined1 unaff_00005125;
  byte bVar106;
  undefined1 unaff_00005126;
  byte bVar107;
  undefined1 unaff_00005127;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  undefined8 unaff_d10;
  undefined1 auVar117 [16];
  float fVar118;
  undefined8 unaff_d11;
  undefined1 auVar119 [12];
  undefined1 auVar120 [16];
  float fVar122;
  undefined1 unaff_b12;
  undefined1 unaff_00005181;
  undefined1 unaff_00005182;
  undefined1 unaff_00005183;
  undefined1 unaff_00005184;
  undefined1 unaff_00005185;
  undefined1 unaff_00005186;
  undefined1 unaff_00005187;
  undefined8 unaff_d13;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined8 unaff_d14;
  undefined1 auVar125 [16];
  undefined8 unaff_d15;
  byte bVar126;
  byte bVar128;
  byte bVar129;
  float in_s16;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  float in_register_00005204;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  float in_register_00005208;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  float in_register_0000520c;
  undefined1 auVar127 [16];
  byte bVar142;
  undefined1 extraout_b17;
  undefined1 uVar143;
  undefined1 extraout_b17_00;
  undefined1 extraout_b17_01;
  undefined1 extraout_var_21;
  undefined1 uVar144;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar145;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar146;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar147;
  undefined1 extraout_var_31;
  undefined1 uVar148;
  undefined1 extraout_var_32;
  undefined1 uVar149;
  undefined1 extraout_var_33;
  undefined1 uVar150;
  undefined1 in_register_00005228;
  undefined1 in_register_00005229;
  undefined1 in_register_0000522a;
  undefined1 in_register_0000522b;
  undefined1 in_register_0000522c;
  undefined1 in_register_0000522d;
  undefined1 in_register_0000522e;
  undefined1 in_register_0000522f;
  float extraout_s18;
  float extraout_s18_00;
  float extraout_var_34;
  float fVar151;
  float fVar152;
  float extraout_s19;
  float extraout_var_35;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float extraout_s21;
  float fVar157;
  float extraout_s21_00;
  float extraout_var_36;
  float fVar158;
  float fVar159;
  float extraout_var_37;
  float in_register_000052a8;
  float fVar160;
  float in_register_000052ac;
  byte in_b22;
  byte in_register_000052c1;
  byte in_register_000052c2;
  byte in_register_000052c3;
  float fVar161;
  byte in_register_000052c4;
  byte in_register_000052c5;
  byte in_register_000052c6;
  byte in_register_000052c7;
  float fVar162;
  byte in_register_000052c8;
  byte in_register_000052c9;
  byte in_register_000052ca;
  byte in_register_000052cb;
  float fVar163;
  byte in_register_000052cc;
  byte in_register_000052cd;
  byte in_register_000052ce;
  byte in_register_000052cf;
  float fVar164;
  float extraout_s23;
  float extraout_s23_00;
  float extraout_var_38;
  float fVar165;
  float extraout_var_39;
  float in_register_000052e8;
  float in_register_000052ec;
  float extraout_s24;
  float extraout_s24_00;
  float extraout_var_40;
  float extraout_var_41;
  float in_register_00005308;
  float in_register_0000530c;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar171;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  float extraout_s26;
  float extraout_s26_00;
  float extraout_var_42;
  float extraout_var_43;
  float in_register_00005348;
  float in_register_0000534c;
  float fVar172;
  float extraout_s27;
  float extraout_s27_00;
  float extraout_var_44;
  float extraout_var_45;
  float in_register_00005368;
  float fVar173;
  float in_register_0000536c;
  float fVar174;
  float fVar175;
  undefined4 extraout_s28;
  float fVar176;
  undefined4 extraout_var_46;
  float fVar177;
  float fVar178;
  undefined4 uVar179;
  undefined1 extraout_b30;
  undefined1 extraout_b30_00;
  undefined1 extraout_b30_01;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 extraout_var_61;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 in_register_000053c8;
  undefined1 in_register_000053c9;
  undefined1 in_register_000053ca;
  undefined1 in_register_000053cb;
  undefined1 in_register_000053cc;
  undefined1 in_register_000053cd;
  undefined1 in_register_000053ce;
  undefined1 in_register_000053cf;
  float fVar181;
  float fVar182;
  undefined1 auVar180 [16];
  float fVar183;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar75 [16];
  undefined1 auVar84 [16];
  undefined1 auVar96 [12];
  undefined1 auVar97 [16];
  undefined1 auVar121 [16];
  
  if (param_2 != 0) {
    func_0x00010840389c();
    func_0x000108403a9c();
    func_0x000108403ac0();
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x30);
    func_0x000108403784();
                    /* WARNING: Could not recover jumptable at 0x000108403d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
code_r0x0001083fe7bc:
  pfVar27 = (float *)((long)register0x00000008 + -0xa0);
  pfVar26 = (float *)((long)register0x00000008 + -0xa0);
  pfVar32 = (float *)((long)register0x00000008 + -0xa0);
  pfVar37 = (float *)((long)register0x00000008 + -0xa0);
  *(ulong *)((long)register0x00000008 + -0x60) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x58) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pfVar50 = (float *)((long)register0x00000008 + -0x10);
  pfVar38 = (float *)&UNK_10df26510;
  pfVar31 = (float *)&UNK_10df265ec;
  pfVar57 = (float *)&UNK_10df26584;
  pfVar56 = param_1;
  pfVar43 = param_3;
code_r0x0001083fe7fc:
  pfVar52 = pfVar43;
  pfVar42 = (float *)0x1;
  pfVar55 = (float *)0x0;
  pfVar43 = pfVar52;
  switch(pfVar52[3]) {
  case 3.50325e-44:
    goto code_r0x0001083feb9c;
  case 3.64338e-44:
    *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(pfVar52 + 6);
code_r0x0001083febc8:
    pfVar56 = param_1 + 0x18;
code_r0x0001083febd0:
    FUN_1083fe690();
code_r0x0001083febd4:
    if ((int)pfVar52[0xe] < 1) goto code_r0x0001083ff7a0;
    pfVar32 = pfVar56;
    func_0x000108403650();
    pfVar43 = pfVar56;
code_r0x0001083febf0:
    if ((int)pfVar32 == 0) goto code_r0x0001083ff774;
    bVar105 = *(byte *)(*(long *)(*(long *)(pfVar52 + 6) + 0x20) + 0x2c);
    ppuVar45 = (undefined **)(ulong)bVar105;
    if (bVar105 == 0xd) {
      func_0x000108403bec();
      func_0x0001083fae74(param_1 + 0xc,*pfVar43);
    }
    else {
code_r0x0001083fec08:
      iVar61 = (int)pfVar32;
      if ((int)ppuVar45 != 0xf) goto code_r0x0001083fec10;
      if ((int)pfVar52[0xe] < 2) {
code_r0x0001083ff7a0:
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1083ff7a4);
        (*UNRECOVERED_JUMPTABLE)();
      }
      func_0x000108403650();
      if (iVar61 == 0) goto code_r0x0001083ff774;
      func_0x0001084035f4(param_1 + 0xc,0x22a,0xffffffffffffffff);
      func_0x000108403bec();
      func_0x0001083fae84(param_1 + 0xc,*pfVar43);
    }
    goto code_r0x0001083ff3d8;
  case 3.78351e-44:
  case 3.92364e-44:
  case 4.06377e-44:
  case 4.90454e-44:
    func_0x00010840359c();
    if ((float *)0x1 < pfVar56) {
      func_0x000108403784();
      FUN_1084016cc();
      if (((ulong)pfVar56 & 1) != 0) break;
    }
    func_0x000108403c24();
    lVar48 = (long)param_3 << 3;
    goto code_r0x0001083fe930;
  case 4.2039e-44:
  case 4.62428e-44:
    func_0x000108403c24();
    if (param_3 == (float *)0x0) goto code_r0x0001083ff7a0;
    pfVar43 = *(float **)pfVar56;
    func_0x0001084035d4();
    if ((int)pfVar56 == 0) goto code_r0x0001083ff774;
    func_0x000108403624();
    func_0x00010840365c();
    pfVar32 = *(float **)(pfVar52 + 4);
    func_0x000108403634();
    func_0x00010840365c();
    auVar185._8_8_ = extraout_var_19;
    auVar185._0_8_ = extraout_d3;
    auVar184._8_8_ = extraout_var;
    auVar184._0_8_ = extraout_d0;
    uVar30 = (uint)pfVar32;
    uVar54 = (uint)pfVar56;
    if (uVar54 == uVar30) break;
    uVar29 = uVar54 == 3;
    if (3 < uVar54) {
      if (uVar30 == 3) goto code_r0x0001083ff458;
      goto code_r0x0001083ff774;
    }
    ppuVar45 = (undefined **)((ulong)pfVar56 & 0xff);
    uVar54 = 0xdf26612;
    fVar165 = (float)extraout_d0;
    fVar151 = (float)extraout_d2;
    fVar85 = (float)((ulong)extraout_d0 >> 0x20);
    fVar152 = (float)((ulong)extraout_d2 >> 0x20);
    fVar166 = (float)extraout_var_16;
    fVar172 = (float)((ulong)extraout_var_16 >> 0x20);
    fVar175 = (float)((ulong)extraout_var >> 0x20);
    pfVar34 = pfVar32;
    pfVar26 = param_1;
    pfVar55 = pfVar56;
    uVar143 = extraout_b17;
    uVar144 = extraout_var_21;
    uVar145 = extraout_var_24;
    uVar146 = extraout_var_27;
    uVar147 = extraout_var_30;
    uVar148 = extraout_var_31;
    uVar149 = extraout_var_32;
    uVar150 = extraout_var_33;
    fVar157 = extraout_s21;
    fVar158 = extraout_var_36;
    fVar92 = extraout_s23;
    fVar159 = extraout_var_38;
    fVar118 = extraout_s24;
    fVar160 = extraout_var_40;
    fVar87 = extraout_s26;
    fVar88 = extraout_var_42;
    fVar89 = extraout_s27;
    fVar176 = extraout_var_44;
    switch(ppuVar45) {
    default:
      if (uVar30 == 3) {
code_r0x0001083ff458:
        func_0x00010840359c();
        func_0x000108403b20();
        func_0x0001084017e4();
        plVar41 = *(long **)(pfVar43 + 4);
        puVar40 = &UNK_10df26678;
code_r0x0001083ff6e0:
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        func_0x0001084038b0(param_1,plVar41,puVar40);
        goto FUN_108400898;
      }
      if ((uVar30 & 0xff) != 2) {
        if ((uVar30 & 0xff) != 1) goto code_r0x0001083ff774;
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x0001083fea04;
      }
      func_0x00010840359c();
      uVar179 = SUB84(pfVar42,0);
      func_0x0001084037dc();
      iVar61 = 0x117;
      goto code_r0x0001083ff448;
    case (undefined **)0x1:
      if (uVar30 == 3) goto code_r0x0001083ff458;
      if ((uVar30 & 0xff) != 2) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          pfVar32 = *(float **)(pfVar52 + 4);
          func_0x000108403618();
          uVar179 = SUB84(pfVar42,0);
          func_0x0001084037dc();
          iVar61 = 0x10b;
          goto code_r0x0001083ff448;
        }
        goto code_r0x0001083ff774;
      }
      break;
    case (undefined **)0x2:
      if (uVar30 == 3) goto code_r0x0001083ff458;
      if ((uVar30 & 0xff) != 1) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          func_0x00010840359c();
          uVar179 = SUB84(pfVar42,0);
          func_0x0001084037dc();
          iVar61 = 0x10f;
          goto code_r0x0001083ff448;
        }
        goto code_r0x0001083ff774;
      }
      break;
    case (undefined **)0x3:
      if (uVar30 == 0) {
        FUN_1083fa660(param_1 + 0xc);
      }
      else {
        if (2 < uVar30) goto code_r0x0001083ff774;
        func_0x0001084038cc();
        func_0x000108403910();
      }
      func_0x00010840359c();
      func_0x0001084038a8();
      func_0x00010840359c();
      func_0x0001084037dc();
      FUN_1083f9008();
      break;
    case (undefined **)0x5:
      goto code_r0x0001083feb04;
    case (undefined **)0x6:
      goto code_r0x0001083feae8;
    case (undefined **)0x7:
    case (undefined **)0xf:
      goto code_r0x0001083feea4;
    case (undefined **)0x8:
      goto code_r0x0001083fea28;
    case (undefined **)0x9:
      goto code_r0x0001083feac4;
    case (undefined **)0xa:
      goto code_r0x0001083feb1c;
    case (undefined **)0xb:
      goto code_r0x0001083fec08;
    case (undefined **)0xc:
      goto code_r0x0001083feea8;
    case (undefined **)0xd:
      goto code_r0x0001083fed78;
    case (undefined **)0xe:
      goto code_r0x0001083fec80;
    case (undefined **)0x10:
code_r0x0001083fea04:
      uVar179 = SUB84(pfVar42,0);
      iVar61 = 0x113;
code_r0x0001083ff448:
      uVar63 = 0x1083ff44c;
      pfVar26 = (float *)((long)register0x00000008 + -0xa0);
      pfVar56 = pfVar32;
      goto SUB_1083f8fd0;
    case (undefined **)0x11:
      FUN_10840226c();
      *(undefined8 *)(pfVar32 + 8) = *(undefined8 *)(*(long *)(pfVar32 + 6) + 0xf8);
      *(float **)(*(long *)(pfVar32 + 6) + 0xf8) = pfVar32;
      return pfVar32;
    case (undefined **)0x12:
      lVar48 = *(long *)(pfVar52 + 0x12);
      pfVar50 = param_1;
      FUN_1083fffa8();
      func_0x000108403de0();
      iVar61 = (int)pfVar50;
      fVar92 = param_1[0x10];
      if ((((ulong)pfVar32 & 0x10101) == 0) && (lVar48 != 0)) {
        param_1[0x10] = (float)((int)fVar92 + 2);
        func_0x000108403878();
        func_0x0001083f98fc();
        func_0x000108403838();
        if (iVar61 != 0) {
          func_0x000108403990();
          func_0x0001083f9780();
          func_0x000108403838();
          if (iVar61 != 0) {
            func_0x0001084039dc();
            if (*(int *)(*(long *)(pfVar52 + 0x12) + 0x18) < 2) {
code_r0x0001083ffab0:
              func_0x0001084036f0();
              func_0x000108403dec();
              func_0x000108400018(param_1);
              return (float *)0x1;
            }
            func_0x0001084039d0();
            if (iVar61 != 0) {
              iVar61 = (int)*(undefined8 *)(*(long *)(pfVar52 + 0xe) + 0x10);
              func_0x000108403618();
              func_0x000108403900();
              func_0x000108403650();
              if (iVar61 != 0) {
                FUN_1083f994c(param_1 + 0xc,0,(int)fVar92 + 1);
                func_0x0001084036e4();
                goto code_r0x0001083ffab0;
              }
            }
          }
        }
        return (float *)0x0;
      }
      param_1[0x10] = (float)((int)fVar92 + 1);
      fVar118 = param_1[0x40];
      unaff_x24 = (ulong)(uint)fVar118;
      param_1[0x40] = fVar92;
      if (*(long *)(pfVar52 + 10) == 0) {
        func_0x0001084039dc();
      }
      else {
        func_0x000108403838();
        if (((ulong)pfVar50 & 1) == 0) {
          pfVar50 = (float *)0x0;
          goto code_r0x0001083ffe98;
        }
      }
      *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x88) = 0;
      *(float **)((long)register0x00000008 + -0x80) = param_1;
      *(float *)((long)register0x00000008 + -0x78) = 0.0;
      *(float *)((long)register0x00000008 + -0x74) = 0.0;
      func_0x000108403c60();
      func_0x000108403be4();
      pfVar56 = (float *)(ulong)(uint)param_1[0x10];
      param_1[0x10] = (float)((int)param_1[0x10] + 2);
      func_0x000108403990();
      func_0x0001083f97f0();
    case (undefined **)0x22:
    case (undefined **)0x24:
      fVar118 = (float)unaff_x24;
      func_0x0001083f9780();
      uVar60 = 0;
      FUN_1084001fc();
      func_0x000108403838();
      if ((uVar60 & 1) == 0) {
code_r0x0001083ffe90:
        pfVar50 = (float *)0x0;
      }
      else {
        iVar61 = (int)(float *)((long)register0x00000008 + -0x98);
        func_0x00010840024c();
        func_0x0001084039dc();
        if (*(long *)(pfVar52 + 0xe) != 0) {
          func_0x0001084039d0();
          if (iVar61 == 0) goto code_r0x0001083ffe90;
          func_0x00010840370c(*(undefined8 *)(pfVar52 + 0xe));
          (*extraout_x8_08)();
          func_0x000108403900();
        }
        func_0x000108403990();
        func_0x0001083f9780();
        if (*(long *)(pfVar52 + 0xc) != 0) {
          func_0x000108403650();
          if (iVar61 == 0) goto code_r0x0001083ffe90;
          func_0x000108400298(param_1 + 0xc);
          func_0x0001084036e4();
        }
        func_0x0001083f9830(param_1 + 0xc,(int)pfVar56 + 1);
        func_0x0001084036f0();
        func_0x000108403d80();
        func_0x000108403840();
        func_0x000108403dec();
        func_0x000108400018(param_1);
        pfVar50 = (float *)0x1;
      }
      func_0x000108403c34();
code_r0x0001083ffe98:
      param_1[0x40] = fVar118;
      return pfVar50;
    case (undefined **)0x13:
    case (undefined **)0x14:
    case (undefined **)0x18:
    case (undefined **)0x19:
    case (undefined **)0x1a:
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      fVar92 = *pfVar32;
      *(float *)((long)register0x00000008 + -0xb4) = fVar92;
      if ((int)fVar92 < 1) {
        pfVar32 = (float *)0x0;
      }
      else {
        FUN_10841021c();
      }
      return pfVar32;
    case (undefined **)0x15:
    case (undefined **)0x16:
    case (undefined **)0x17:
      if ((int)ppuVar45 == 5) {
        fVar92 = *pfVar32;
        if (fVar92 == *param_3) {
          cVar5 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar28) {
            *pfVar32 = SUB84(pfVar42,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar28 = cVar5 == '\0';
        }
        else {
          bVar28 = false;
          ClearExclusiveLocal();
        }
      }
      else {
        fVar92 = *pfVar32;
        if (fVar92 == *param_3) {
          cVar5 = '\x01';
          bVar28 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar28) {
            *pfVar32 = SUB84(pfVar42,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar28 = cVar5 == '\0';
        }
        else {
          bVar28 = false;
          ClearExclusiveLocal();
        }
      }
      if (!bVar28) {
        *param_3 = fVar92;
        return (float *)0x0;
      }
      return (float *)0x1;
    case (undefined **)0x1b:
      goto code_r0x0001083ff1e8;
    case (undefined **)0x1c:
      goto code_r0x0001084042f8;
    case (undefined **)0x1d:
      func_0x000108404d5c();
      return *(float **)pfVar32;
    case (undefined **)0x1e:
      NEON_ucvtf(auVar184,4);
      uVar30 = (uint)CONCAT12((byte)((ulong)extraout_d2 >> 0x18) >> 2 &
                              (byte)((ulong)extraout_d1 >> 0x10),
                              CONCAT11((byte)(((uint)fVar151 >> 10) >> 8) &
                                       (byte)((ulong)extraout_d1 >> 8),
                                       (byte)((uint)fVar151 >> 10) & (byte)extraout_d1));
      uVar25 = CONCAT12((byte)((ulong)extraout_var_16 >> 0x18) >> 2 &
                        (byte)((ulong)extraout_var_10 >> 0x10),
                        CONCAT11((byte)(((uint)fVar166 >> 10) >> 8) &
                                 (byte)((ulong)extraout_var_10 >> 8),
                                 (byte)((uint)fVar166 >> 10) & (byte)extraout_var_10));
      auVar73._0_12_ = ZEXT312(uVar25) << 0x40;
      auVar73[0xc] = (byte)((uint)fVar172 >> 10) & (byte)((ulong)extraout_var_10 >> 0x20);
      auVar73[0xd] = (byte)(((uint)fVar172 >> 10) >> 8) & (byte)((ulong)extraout_var_10 >> 0x28);
      auVar73[0xe] = (byte)((ulong)extraout_var_16 >> 0x3a) & (byte)((ulong)extraout_var_10 >> 0x30)
      ;
      auVar74._0_4_ = uVar30 + in_q4._0_4_;
      auVar74._4_4_ =
           (uint)(uint3)(CONCAT16((byte)((ulong)extraout_d2 >> 0x3a) &
                                  (byte)((ulong)extraout_d1 >> 0x30),
                                  CONCAT15((byte)(((uint)fVar152 >> 10) >> 8) &
                                           (byte)((ulong)extraout_d1 >> 0x28),
                                           CONCAT14((byte)((uint)fVar152 >> 10) &
                                                    (byte)((ulong)extraout_d1 >> 0x20),uVar30))) >>
                        0x20) + in_q4._4_4_;
      auVar74._8_4_ = (uint)uVar25 + in_q4._8_4_;
      auVar74._12_4_ = (uint)auVar73._12_3_ + in_q4._12_4_;
      NEON_ucvtf(auVar74,4);
      uVar60 = CONCAT44((uint)fVar152 >> 0x14,(uint)fVar151 >> 0x14) & 0xfffff3fffffff3ff;
      auVar79._0_4_ = (int)uVar60 + in_q4._0_4_;
      auVar79._4_4_ = (int)(uVar60 >> 0x20) + in_q4._4_4_;
      auVar79._8_4_ = ((uint)fVar166 >> 0x14 & 0xfffff3ff) + in_q4._8_4_;
      auVar79._12_4_ = ((uint)fVar172 >> 0x14 & 0xfffff3ff) + in_q4._12_4_;
      NEON_ucvtf(auVar79,4);
      goto LAB_10840dd88;
    case (undefined **)0x1f:
      NEON_fmax(in_q7,auVar185,4);
      func_0x00010840dd18();
      auVar84._8_8_ = extraout_var_20;
      auVar84._0_8_ = extraout_d3_00;
      auVar184 = NEON_fmax(in_q6,auVar84,4);
      auVar21[1] = extraout_var_48;
      auVar21[0] = extraout_b30_00;
      auVar21[2] = extraout_var_51;
      auVar21[3] = extraout_var_54;
      auVar21[4] = extraout_var_57;
      auVar21[5] = extraout_var_59;
      auVar21[6] = extraout_var_61;
      auVar21[7] = extraout_var_63;
      auVar21[8] = in_register_000053c8;
      auVar21[9] = in_register_000053c9;
      auVar21[10] = in_register_000053ca;
      auVar21[0xb] = in_register_000053cb;
      auVar21[0xc] = in_register_000053cc;
      auVar21[0xd] = in_register_000053cd;
      auVar21[0xe] = in_register_000053ce;
      auVar21[0xf] = in_register_000053cf;
      NEON_fmin(auVar184,auVar21,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0x20:
    case (undefined **)0x21:
      _memcpy();
      *(long *)(pfVar52 + 2) = *(long *)(pfVar52 + 2) + (long)param_1;
      return pfVar32;
    case (undefined **)0x23:
    case (undefined **)0x25:
      *(undefined1 *)(ppuVar45 + 3) = 0;
      return (float *)0x0;
    case (undefined **)0x26:
      pfVar50 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar50,4);
      pfVar38 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar38,0xdf26510);
      *(float **)((long)register0x00000008 + -0x88) = pfVar38;
      FUN_1083a9268((float *)((long)register0x00000008 + 0x240),0,&UNK_10df26510,
                    (int)*(float *)((long)register0x00000008 + 0x70) * 0x53ae6118,unaff_x24);
      lVar48 = *(long *)((long)register0x00000008 + 0x240);
      if (lVar48 == 0) {
        *(float *)((long)register0x00000008 + -0x30) = 0.0;
        *(float *)((long)register0x00000008 + -0x2c) = 0.0;
        *(float *)((long)register0x00000008 + -0x28) = 0.0;
        *(float *)((long)register0x00000008 + -0x24) = 0.0;
        lVar44 = 0;
      }
      else {
        uVar63 = *(undefined8 *)(lVar48 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar48 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar63;
        lVar44 = *(long *)((long)register0x00000008 + 0x248);
        if (lVar44 == 0) {
          lVar44 = *(long *)(lVar48 + 0x10);
        }
      }
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_10df26584;
      if (pfVar50 != (float *)0x0) {
        FUN_108343a94((float *)((long)register0x00000008 + 0xf0));
        uVar63 = *(undefined8 *)((long)register0x00000008 + 0xf0);
        *(float *)((long)register0x00000008 + 0xf0) = 0.0;
        *(float *)((long)register0x00000008 + 0xf4) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 0x1d0) = uVar63;
        *(float *)((long)register0x00000008 + 0x1e0) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x1e4) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x1d8) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x1dc) = 4.2039e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0xf0));
        if (pfVar56 != (float *)0x0) {
          do {
            cVar5 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(pfVar56,0x10);
            if (bVar28) {
              *pfVar56 = (float)((int)*pfVar56 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x80) = 0.0;
        *(float *)((long)register0x00000008 + 0x84) = 0.0;
        *(float **)((long)register0x00000008 + 0x160) = pfVar56;
        *(float *)((long)register0x00000008 + 0x170) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x174) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x168) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x16c) = 2.8026e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0x80));
        FUN_108345950((float *)((long)register0x00000008 + 0x160),pfVar50,0,
                      (float *)((long)register0x00000008 + 0x1d0),unaff_x28,0);
        FUN_10810a400((float *)((long)register0x00000008 + 0x160));
        FUN_10810a400((float *)((long)register0x00000008 + 0x1d0));
      }
      *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_10df26510;
      *(float **)((long)register0x00000008 + -0x98) = pfVar56;
      *(float **)((long)register0x00000008 + -0x90) = pfVar52;
      uVar72 = *(undefined8 *)(unaff_x27 + 0x12);
      auVar184 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0xe),
                          *(undefined1 (*) [16])(unaff_x27 + 0xe),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar184._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar184._0_8_;
      uVar78 = *(undefined8 *)(unaff_x27 + 0xc);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar72;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar78;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x1d0));
      uVar63 = *(undefined8 *)unaff_x27;
      uVar62 = *(undefined8 *)(unaff_x27 + 4);
      uVar64 = *(undefined8 *)(unaff_x27 + 6);
      uVar58 = *(undefined8 *)unaff_x27;
      uVar59 = *(undefined8 *)(unaff_x27 + 6);
      *(undefined8 *)((long)register0x00000008 + 0x298) = *(undefined8 *)(unaff_x27 + 2);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar63;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar64;
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = uVar62;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x160));
      auVar184 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0x14),
                          *(undefined1 (*) [16])(unaff_x27 + 0x14),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar184._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar184._0_8_;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar58;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar72;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0xf0));
      uVar63 = *(undefined8 *)(unaff_x27 + 8);
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = *(undefined8 *)(unaff_x27 + 10);
      *(undefined8 *)((long)register0x00000008 + 0x298) = uVar63;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar59;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar78;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x80));
      uVar53 = (ulong)(uint)*(float *)((long)register0x00000008 + 0x70);
      FUN_108407868((float *)((long)register0x00000008 + 0x1d0),uVar53);
      FUN_108407868((float *)((long)register0x00000008 + 0x160),uVar53);
      lVar36 = 0;
      uVar60 = 0;
      uVar47 = *(ulong *)((long)register0x00000008 + -0x58);
      uVar49 = (ulong)((int)uVar47 + 1);
      *(ulong *)((long)register0x00000008 + -0x68) = uVar49;
      *(ulong *)((long)register0x00000008 + -0x60) = uVar53 + 1;
      *(ulong *)((long)register0x00000008 + -0x78) = uVar49 << 4;
      *(ulong *)((long)register0x00000008 + -0x70) = uVar49 << 3;
      *(long *)((long)register0x00000008 + -0x48) = lVar44 + 6;
      *(ulong *)((long)register0x00000008 + -0x40) = uVar49;
      *(ulong *)((long)register0x00000008 + -0x80) =
           ((uVar47 & 0xffffffff) * 2 + (uVar47 & 0xffffffff)) * 4;
      fVar92 = 0.0;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      lVar48 = *(long *)((long)register0x00000008 + -0x88);
      auVar184 = ZEXT816(0);
      fVar118 = 1.0 / (float)uVar53;
      while( true ) {
        uVar29 = uVar60 == *(ulong *)((long)register0x00000008 + -0x60);
        if ((bool)uVar29) break;
        *(long *)((long)register0x00000008 + 0x68) = auVar184._8_8_;
        *(long *)((long)register0x00000008 + 0x60) = auVar184._0_8_;
        auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x1d0));
        *(undefined8 *)((long)register0x00000008 + -8) = extraout_var_00;
        *(long *)((long)register0x00000008 + -0x10) = auVar184._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x78) = extraout_var_11;
        *(long *)((long)register0x00000008 + 0x70) = auVar184._8_8_;
        auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x160));
        *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_var_01;
        *(long *)((long)register0x00000008 + -0x20) = auVar184._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_12;
        *(long *)((long)register0x00000008 + 0x40) = auVar184._8_8_;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x58);
        FUN_108407868((float *)((long)register0x00000008 + 0xf0),uVar63);
        FUN_108407868((float *)((long)register0x00000008 + 0x80),uVar63);
        uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
        fVar157 = (float)uVar63;
        fVar158 = 1.0 - fVar157;
        *(ulong *)((long)register0x00000008 + -0x50) = uVar60 + 1;
        uVar62 = *(undefined8 *)((long)register0x00000008 + 0x1ac);
        uVar64 = *(undefined8 *)((long)register0x00000008 + 0x1c4);
        fVar159 = (float)*(undefined8 *)((long)register0x00000008 + 0x234) * fVar157 +
                  (float)*(undefined8 *)((long)register0x00000008 + 0x21c) * fVar158;
        fVar160 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x234) >> 0x20) *
                  fVar157 + (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x21c) >> 0x20
                                   ) * fVar158;
        *(float *)((long)register0x00000008 + -0x18) = *(float *)((long)register0x00000008 + -0x18);
        *(float *)((long)register0x00000008 + -0x14) = *(float *)((long)register0x00000008 + -0x14);
        *(ulong *)((long)register0x00000008 + -0x20) =
             CONCAT44(*(float *)((long)register0x00000008 + 0x40),
                      *(float *)((long)register0x00000008 + -0x20));
        *(float *)((long)register0x00000008 + -8) = *(float *)((long)register0x00000008 + -8);
        *(float *)((long)register0x00000008 + -4) = *(float *)((long)register0x00000008 + -4);
        *(ulong *)((long)register0x00000008 + -0x10) =
             CONCAT44(SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0),
                      *(float *)((long)register0x00000008 + -0x10));
        auVar184 = ZEXT816(0);
        psVar51 = *(short **)((long)register0x00000008 + -0x48);
        *(float *)((long)register0x00000008 + 0x58) = 0.0;
        *(float *)((long)register0x00000008 + 0x5c) = 0.0;
        *(ulong *)((long)register0x00000008 + 0x50) = (ulong)(uint)fVar158;
        for (uVar49 = 0; (uVar47 & 0xffffffff) + 1 != uVar49; uVar49 = uVar49 + 1) {
          *(long *)((long)register0x00000008 + 0x78) = auVar184._8_8_;
          *(long *)((long)register0x00000008 + 0x70) = auVar184._0_8_;
          auVar184 = func_0x0001084078d8((float *)((long)register0x00000008 + 0xf0));
          *(undefined8 *)((long)register0x00000008 + 0x38) = extraout_var_13;
          *(long *)((long)register0x00000008 + 0x30) = auVar184._8_8_;
          *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_02;
          *(long *)((long)register0x00000008 + 0x40) = auVar184._0_8_;
          uVar78 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x80));
          uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
          fVar87 = SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0);
          fVar88 = 1.0 - fVar87;
          uVar72 = *(undefined8 *)((long)register0x00000008 + 0x50);
          *(ulong *)(*(long *)((long)register0x00000008 + -0x28) + uVar49 * 8) =
               CONCAT44((*(float *)((long)register0x00000008 + -0xc) * fVar87 +
                         *(float *)((long)register0x00000008 + -0x1c) * fVar88 +
                        (float)((ulong)uVar78 >> 0x20) * (float)uVar63 +
                        *(float *)((long)register0x00000008 + 0x30) * (float)uVar72) -
                        (fVar160 * fVar87 +
                        ((float)((ulong)uVar64 >> 0x20) * fVar157 +
                        (float)((ulong)uVar62 >> 0x20) * fVar158) * fVar88),
                        (*(float *)((long)register0x00000008 + -0x10) * fVar87 +
                         *(float *)((long)register0x00000008 + -0x20) * fVar88 +
                        (float)uVar78 * (float)uVar63 +
                        (float)*(undefined8 *)((long)register0x00000008 + 0x40) * (float)uVar72) -
                        (fVar159 * fVar87 +
                        ((float)uVar64 * fVar157 + (float)uVar62 * fVar158) * fVar88));
          if (pfVar50 != (float *)0x0) {
            uVar63 = *(undefined8 *)pfVar50;
            uVar78 = *(undefined8 *)(pfVar50 + 4);
            uVar58 = *(undefined8 *)(pfVar50 + 8);
            uVar59 = *(undefined8 *)(pfVar50 + 10);
            uVar22 = *(undefined8 *)(pfVar50 + 0xc);
            uVar23 = *(undefined8 *)(pfVar50 + 0xe);
            *(undefined8 *)((long)register0x00000008 + 0x18) = *(undefined8 *)(pfVar50 + 6);
            *(undefined8 *)((long)register0x00000008 + 0x10) = uVar78;
            *(undefined8 *)((long)register0x00000008 + 0x28) = uVar23;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar22;
            *(undefined8 *)((long)register0x00000008 + 0x38) = uVar59;
            *(undefined8 *)((long)register0x00000008 + 0x30) = uVar58;
            *(float *)((long)register0x00000008 + 0x48) = 0.0;
            *(float *)((long)register0x00000008 + 0x4c) = 0.0;
            *(ulong *)((long)register0x00000008 + 0x40) = (ulong)(uint)fVar88;
            func_0x000108407988(uVar63,uVar72);
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 8) = extraout_var_03;
            *(undefined8 *)register0x00000008 = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar63 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x18) =
                 *(float *)((long)register0x00000008 + 8) + (float)extraout_var_04;
            *(float *)((long)register0x00000008 + 0x1c) =
                 *(float *)((long)register0x00000008 + 0xc) +
                 (float)((ulong)extraout_var_04 >> 0x20);
            *(float *)((long)register0x00000008 + 0x10) =
                 *(float *)register0x00000008 + (float)uVar63;
            *(float *)((long)register0x00000008 + 0x14) =
                 *(float *)((long)register0x00000008 + 4) + (float)((ulong)uVar63 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x20),
                                *(undefined8 *)((long)register0x00000008 + 0x50));
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_05;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar63 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x38) =
                 *(float *)((long)register0x00000008 + 0x28) + (float)extraout_var_06;
            *(float *)((long)register0x00000008 + 0x3c) =
                 *(float *)((long)register0x00000008 + 0x2c) +
                 (float)((ulong)extraout_var_06 >> 0x20);
            *(float *)((long)register0x00000008 + 0x30) =
                 *(float *)((long)register0x00000008 + 0x20) + (float)uVar63;
            *(float *)((long)register0x00000008 + 0x34) =
                 *(float *)((long)register0x00000008 + 0x24) + (float)((ulong)uVar63 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x40));
            uVar63 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_07;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar63;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x70));
            auVar184 = *(undefined1 (*) [16])((long)register0x00000008 + 0x40);
            uVar72 = *(undefined8 *)((long)register0x00000008 + 0x50);
            uVar63 = *(undefined8 *)((long)register0x00000008 + 0x60);
            auVar185 = *(undefined1 (*) [16])((long)register0x00000008 + 0x70);
            uVar78 = func_0x0001084079ac();
            fVar88 = auVar184._0_4_;
            fVar87 = auVar185._0_4_;
            auVar184 = *(undefined1 (*) [16])((long)register0x00000008 + 0x20);
            pfVar38 = (float *)(lVar48 + uVar49 * 0x10);
            pfVar38[2] = auVar184._8_4_ + (float)extraout_var_08;
            pfVar38[3] = auVar184._12_4_ + (float)((ulong)extraout_var_08 >> 0x20);
            *pfVar38 = auVar184._0_4_ + (float)uVar78;
            pfVar38[1] = auVar184._4_4_ + (float)((ulong)uVar78 >> 0x20);
          }
          if (*(long *)((long)register0x00000008 + -0x30) != 0) {
            fVar89 = (float)uVar63;
            fVar176 = (float)uVar72;
            *(ulong *)(*(long *)((long)register0x00000008 + -0x38) + uVar49 * 8) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(pfVar43 + 4) >> 0x20) * fVar89 +
                          (float)((ulong)*(undefined8 *)(pfVar43 + 6) >> 0x20) * fVar176) * fVar87 +
                          ((float)((ulong)*(undefined8 *)(pfVar43 + 2) >> 0x20) * fVar89 +
                          (float)((ulong)*(undefined8 *)pfVar43 >> 0x20) * fVar176) * fVar88,
                          ((float)*(undefined8 *)(pfVar43 + 4) * fVar89 +
                          (float)*(undefined8 *)(pfVar43 + 6) * fVar176) * fVar87 +
                          ((float)*(undefined8 *)(pfVar43 + 2) * fVar89 +
                          (float)*(undefined8 *)pfVar43 * fVar176) * fVar88);
          }
          if (uVar60 < uVar53 && uVar49 < (uVar47 & 0xffffffff)) {
            sVar24 = (short)uVar49;
            sVar3 = (short)lVar36 + sVar24;
            psVar51[-3] = sVar3;
            psVar51[-2] = (short)lVar36 + sVar24 + 1;
            uVar72 = *(undefined8 *)((long)register0x00000008 + -0x40);
            sVar4 = (short)uVar72 + sVar24 + 1;
            psVar51[-1] = sVar4;
            *psVar51 = sVar3;
            psVar51[1] = sVar4;
            psVar51[2] = (short)uVar72 + sVar24;
          }
          fVar87 = 1.0 / (float)(uVar47 & 0xffffffff) + fVar87;
          fVar88 = 1.0;
          if (fVar87 <= 1.0) {
            fVar88 = fVar87;
          }
          if (fVar88 <= fVar92) {
            fVar88 = fVar92;
          }
          auVar184 = ZEXT416((uint)fVar88);
          psVar51 = psVar51 + 6;
        }
        fVar158 = fVar118 + (float)uVar63;
        fVar157 = 1.0;
        if (fVar158 <= 1.0) {
          fVar157 = fVar158;
        }
        *(long *)((long)register0x00000008 + -0x28) =
             *(long *)((long)register0x00000008 + -0x28) +
             *(long *)((long)register0x00000008 + -0x70);
        lVar48 = lVar48 + *(long *)((long)register0x00000008 + -0x78);
        *(long *)((long)register0x00000008 + -0x38) =
             *(long *)((long)register0x00000008 + -0x38) +
             *(long *)((long)register0x00000008 + -0x70);
        if (fVar157 <= fVar92) {
          fVar157 = fVar92;
        }
        auVar184 = ZEXT416((uint)fVar157);
        lVar36 = lVar36 + *(long *)((long)register0x00000008 + -0x68);
        uVar60 = *(ulong *)((long)register0x00000008 + -0x50);
        *(long *)((long)register0x00000008 + -0x48) =
             *(long *)((long)register0x00000008 + -0x48) +
             *(long *)((long)register0x00000008 + -0x80);
        *(long *)((long)register0x00000008 + -0x40) =
             *(long *)((long)register0x00000008 + -0x40) +
             *(long *)((long)register0x00000008 + -0x68);
      }
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x90);
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        if (*(long *)((long)register0x00000008 + 0x240) == 0) {
          uVar62 = 0;
        }
        else {
          uVar62 = *(undefined8 *)(*(long *)((long)register0x00000008 + 0x240) + 0x20);
        }
        uVar60 = *(ulong *)((long)register0x00000008 + -0xa0);
        piVar2 = *(int **)((long)register0x00000008 + -0x98);
        if (piVar2 != (int *)0x0) {
          do {
            cVar5 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar28) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x270) = 0.0;
        *(float *)((long)register0x00000008 + 0x274) = 0.0;
        *(int **)((long)register0x00000008 + 0x278) = piVar2;
        *(float *)((long)register0x00000008 + 0x280) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x284) = 2.8026e-45;
        *(ulong *)((long)register0x00000008 + 0x288) = uVar60 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x270));
        FUN_108343a94((float *)((long)register0x00000008 + 0x250));
        uVar64 = *(undefined8 *)((long)register0x00000008 + 0x250);
        *(float *)((long)register0x00000008 + 0x250) = 0.0;
        *(float *)((long)register0x00000008 + 0x254) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 600) = uVar64;
        *(float *)((long)register0x00000008 + 0x260) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x264) = 4.2039e-45;
        *(ulong *)((long)register0x00000008 + 0x268) = uVar60 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x250));
        FUN_108345950((float *)((long)register0x00000008 + 600),uVar62,0,
                      (float *)((long)register0x00000008 + 0x278),
                      *(undefined8 *)((long)register0x00000008 + -0x88),0);
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
      }
      FUN_1083a93b8(uVar63,(float *)((long)register0x00000008 + 0x240));
      pfVar50 = (float *)((long)register0x00000008 + 0x240);
      FUN_10834845c(pfVar50);
      func_0x0001084079cc();
      func_0x0001084079d8(*(undefined8 *)((long)register0x00000008 + -0xa8));
      if (!(bool)uVar29) {
        ___stack_chk_fail();
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
        FUN_10834845c((float *)((long)register0x00000008 + 0x240));
        func_0x0001084079cc();
        do {
          __Unwind_Resume(pfVar50);
        } while( true );
      }
      return pfVar50;
    case (undefined **)0x27:
      goto LAB_108401208;
    case (undefined **)0x28:
      FUN_1084025f8((float *)((long)register0x00000008 + -0x98));
      pfVar50 = (float *)((long)register0x00000008 + -0x98);
      FUN_108401e48(pfVar50,pfVar52);
      if (((ulong)pfVar50 & 1) == 0) {
        param_1[0] = 0.0;
        param_1[1] = 0.0;
      }
      else {
        FUN_1084021e0(param_1,(float *)((long)register0x00000008 + -0x98));
      }
      pfVar50 = (float *)((long)register0x00000008 + -0x98);
      FUN_10840284c(pfVar50);
      return pfVar50;
    case (undefined **)0x29:
      fVar92 = pfVar32[0x20];
      fVar118 = pfVar32[0x28];
      fVar157 = pfVar32[0x30];
      uVar63 = *(undefined8 *)(pfVar32 + 0x14);
      pfVar38 = pfVar32 + 0xc;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      *(float *)((long)register0x00000008 + -0xb8) = fVar118;
      *(float *)((long)register0x00000008 + -0xb4) = fVar92;
      *(float *)((long)register0x00000008 + -0xbc) = fVar157;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar63;
      FUN_1083fa6d0(pfVar38,(float *)((long)register0x00000008 + -0xb4),
                    (float *)((long)register0x00000008 + -0xb8),
                    (float *)((long)register0x00000008 + -0xbc),pfVar32 + 0x10,
                    (float *)((long)register0x00000008 + -200));
      return pfVar38;
    case (undefined **)0x2a:
      goto code_r0x000108400dfc;
    case (undefined **)0x2b:
      goto code_r0x0001083ff184;
    case (undefined **)0x2d:
    case (undefined **)0x2f:
    case (undefined **)0x31:
      goto code_r0x0001083ff19c;
    case (undefined **)0x33:
      goto code_r0x0001083ff1b4;
    case (undefined **)0x35:
    case (undefined **)0x37:
    case (undefined **)0x39:
      goto code_r0x0001083ff1cc;
    case (undefined **)0x3b:
      goto code_r0x0001083fef74;
    case (undefined **)0x3d:
    case (undefined **)0x3f:
      goto code_r0x0001083fef8c;
    case (undefined **)0x41:
    case (undefined **)0x49:
    case (undefined **)0x51:
    case (undefined **)0x59:
    case (undefined **)0x61:
    case (undefined **)0x69:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x85:
    case (undefined **)0x87:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
code_r0x0001083ff294:
      func_0x000108403908();
      if ((int)pfVar32 != 0) {
        func_0x00010840379c();
        (**(code **)(extraout_x8_06 + 0x50))();
        *(ulong *)((long)register0x00000008 + -0x98) = CONCAT44(unaff_00005104,unaff_s8);
        *(float **)((long)register0x00000008 + -0xa0) = pfVar52 + 4;
        *(float **)((long)register0x00000008 + -0x90) = pfVar32;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_108401ae0(param_1,(float *)((long)register0x00000008 + -0xa0),
                      *(undefined8 *)(pfVar43 + 4));
        if (((ulong)param_1 & 1) == 0) goto code_r0x0001083ff774;
        func_0x000108403908();
        pfVar55 = param_1;
        goto LAB_1083ff778;
      }
      goto code_r0x0001083ff774;
    case (undefined **)0x43:
      goto code_r0x0001083fefa0;
    case (undefined **)0x45:
    case (undefined **)0x47:
      goto code_r0x0001083fefb4;
    case (undefined **)0x4b:
      goto code_r0x0001083fefcc;
    case (undefined **)0x4d:
    case (undefined **)0x4f:
      goto code_r0x0001083fefe4;
    case (undefined **)0x53:
      goto code_r0x0001083feff8;
    case (undefined **)0x55:
      goto code_r0x0001083ff00c;
    case (undefined **)0x57:
      goto code_r0x0001083ff020;
    case (undefined **)0x5b:
      goto code_r0x0001083ff0f4;
    case (undefined **)0x5d:
      goto code_r0x0001083ff10c;
    case (undefined **)0x5f:
      goto code_r0x0001083ff124;
    case (undefined **)0x63:
      goto code_r0x0001083ff13c;
    case (undefined **)0x65:
      goto code_r0x0001083ff154;
    case (undefined **)0x67:
      goto code_r0x0001083ff16c;
    case (undefined **)0x6b:
      goto code_r0x0001083fee7c;
    case (undefined **)0x73:
      goto code_r0x0001083ff038;
    case (undefined **)0x75:
      goto code_r0x0001083ff04c;
    case (undefined **)0x77:
    case (undefined **)0x79:
      goto code_r0x0001083ff060;
    case (undefined **)0x7b:
      goto code_r0x0001083ff078;
    case (undefined **)0x7d:
      goto code_r0x0001083ff08c;
    case (undefined **)0x7f:
    case (undefined **)0x81:
      goto code_r0x0001083ff0a0;
    case (undefined **)0x83:
      goto code_r0x0001083ff0b4;
    case (undefined **)0x8b:
      goto code_r0x0001083ff0c8;
    case (undefined **)0x93:
    case (undefined **)0xc7:
    case (undefined **)0xd3:
    case (undefined **)0xe0:
      goto code_r0x00010840bb18;
    case (undefined **)0x94:
    case (undefined **)0xc8:
    case (undefined **)0xd4:
    case (undefined **)0xe1:
      pfVar50 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      auVar184 = func_0x00010c27adc0(param_1);
      _objc_release(pfVar50);
      pfVar50 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      pfVar38 = pfVar50;
      func_0x000107c318f8();
      _objc_release(pfVar50);
      if ((pfVar50 != (float *)0x0) && ((int)pfVar38 != 0)) {
        pfVar50 = param_1;
        func_0x00010c29bf00(param_1);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = param_1;
        func_0x00010c252440();
        if ((long)pfVar38 - 3U < 2) {
          pfVar38 = param_1;
          func_0x00010c29bf00(param_1);
          _objc_retainAutoreleasedReturnValue();
          auVar185 = func_0x00010c297a00(param_1);
          _objc_release(pfVar38);
          func_0x00010be935e0(auVar184._0_8_,auVar184._8_8_,auVar185._0_8_,auVar185._8_8_,pfVar52);
        }
        else if (pfVar38 == (float *)0x2) {
          func_0x00010bf08ae0(auVar184._0_8_,auVar184._8_8_,pfVar50);
        }
        else if (pfVar38 == (float *)0x1) {
          func_0x00010c1f7b20(pfVar50);
        }
        _objc_release(pfVar50);
      }
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x95:
    case (undefined **)0xc9:
    case (undefined **)0xd5:
    case (undefined **)0xe2:
      goto code_r0x000108411b2c;
    case (undefined **)0x96:
    case (undefined **)0xca:
    case (undefined **)0xd6:
    case (undefined **)0xe3:
      pfVar31 = param_1;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
      *(float **)((long)register0x00000008 + -200) = pfVar43;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_1084132b0;
      pfVar50 = pfVar31 + 8;
      _objc_loadWeakRetained(pfVar50);
      pfVar57 = pfVar50;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      pfVar38 = pfVar31 + 8;
      _objc_loadWeakRetained(pfVar38);
      func_0x00010c154120(*(undefined8 *)(pfVar31 + 10),pfVar57);
      _objc_release(pfVar38);
      _objc_release(pfVar57);
      _objc_release(pfVar50);
      puVar40 = PTR__OBJC_CLASS___UIView_1126aec20;
      *(undefined **)((long)register0x00000008 + -0xf8) = PTR___NSConcreteStackBlock_11034bd00;
      *(float *)((long)register0x00000008 + -0xf0) = -32.0;
      *(float *)((long)register0x00000008 + -0xec) = 0.0;
      *(code **)((long)register0x00000008 + -0xe8) = FUN_1084133b8;
      *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_1108434b0;
      _objc_copyWeak((float *)((long)register0x00000008 + -0xd8),pfVar31 + 8);
      func_0x00010bf03460(0x3fd999999999999a,0,0x3feccccccccccccd,0,puVar40);
      pfVar50 = (float *)((long)register0x00000008 + -0xd8);
      _objc_destroyWeak(pfVar50);
      return pfVar50;
    case (undefined **)0x97:
    case (undefined **)0xcb:
    case (undefined **)0xd7:
    case (undefined **)0xe4:
LAB_10840dd88:
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)(pfVar32,param_3 + 2);
      return pfVar32;
    case (undefined **)0x98:
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069fe0();
      param_1 = pfVar32;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x99:
      func_0x00010bf529e0();
      if ((pfVar38 != (float *)0x0) || (uVar60 = unaff_x24, func_0x00010bf529e0(), uVar60 != 0)) {
        func_0x00010becf4e0(pfVar43);
      }
      _objc_release(unaff_x24);
      _objc_release(&UNK_10df26510);
      _objc_release(pfVar56);
      _objc_release(pfVar52);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9a:
      goto code_r0x00010841a3bc;
    case (undefined **)0x9b:
      *(int *)((long)register0x00000008 + -0xa0) = (int)ppuVar45;
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x1b6) = pfVar32;
      return pfVar32;
    case (undefined **)0x9c:
    case (undefined **)0xc3:
    case (undefined **)0xdc:
      *(float **)((long)register0x00000008 + -0x80) = pfVar50;
      *(float *)((long)register0x00000008 + -0x78) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0x74) = 1.4013e-45;
      lVar48 = (long)_DAT_1127748dc;
      _objc_retain(pfVar42);
      param_1 = *(float **)((long)pfVar32 + lVar48);
      *(float **)((long)pfVar32 + lVar48) = pfVar42;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9d:
    case (undefined **)0xc4:
    case (undefined **)0xdd:
    case (undefined **)0xb4:
      _objc_destroyWeak();
      _objc_destroyWeak(pfVar43 + 10);
      _objc_destroyWeak(pfVar43 + 8);
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x50));
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x48));
      pfVar38 = param_1;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
      *(float **)((long)register0x00000008 + -200) = pfVar43;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_108419b94;
      param_1 = pfVar38 + 8;
      _objc_loadWeakRetained(param_1);
      pfVar50 = pfVar38 + 10;
      _objc_loadWeakRetained(pfVar50);
      func_0x00010bdceda0(*(undefined8 *)(pfVar38 + 0xc),*(undefined8 *)(pfVar38 + 0xe),param_1);
      _objc_release(pfVar50);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9e:
    case (undefined **)0xc5:
    case (undefined **)0xde:
      goto code_r0x000108417fb4;
    case (undefined **)0x9f:
      func_0x00010bfc18e0();
      _objc_release(pfVar43);
      _objc_release(param_1);
      return param_1;
    case (undefined **)0xa0:
    case (undefined **)0xe8:
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x1a4) = pfVar32;
      return pfVar32;
    case (undefined **)0xa1:
    case (undefined **)0xaa:
    case (undefined **)0xb8:
    case (undefined **)0xee:
    case (undefined **)0xfb:
      return (float *)(ulong)((int)(fVar165 + (float)extraout_d1) + 0x7793U & 0xffff);
    case (undefined **)0xa2:
    case (undefined **)0xab:
    case (undefined **)0xb9:
    case (undefined **)0xef:
      *(float **)((long)register0x00000008 + -0xa0) = pfVar32;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar45;
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),
                          PTR_s_viewDidDisappear__112684c48);
      func_0x00010bf3ace0(*(undefined8 *)((long)param_1 + (long)_DAT_1127748fc));
      pfVar50 = param_1;
      func_0x00010c06d1a0();
      if (((ulong)pfVar50 & 1) == 0) {
        iVar61 = (int)*(undefined8 *)((long)param_1 + (long)_DAT_112774908);
        func_0x00010c06d1a0();
        if ((((ulong)pfVar52 & 1) != 0) || (iVar61 == 0)) goto LAB_108412258;
      }
      else if (((ulong)pfVar52 & 1) != 0) goto LAB_108412258;
      lVar48 = (long)param_1 + (long)_DAT_112774920;
      _objc_loadWeakRetained(lVar48);
      func_0x00010c154120(0);
      _objc_release(lVar48);
LAB_108412258:
      *(undefined1 *)((long)param_1 + (long)_DAT_112774924) = 0;
      func_0x00010be55a20(param_1);
      return param_1;
    case (undefined **)0xa3:
    case (undefined **)0xac:
    case (undefined **)0xba:
    case (undefined **)0xf0:
      goto LAB_1084136b0;
    case (undefined **)0xa4:
    case (undefined **)0xad:
    case (undefined **)0xbb:
    case (undefined **)0xf1:
      goto code_r0x00010841378c;
    case (undefined **)0xa5:
    case (undefined **)0xae:
    case (undefined **)0xbc:
    case (undefined **)0xf2:
                    /* WARNING: Could not recover jumptable at 0x00010840b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(extraout_d0,in_q5._0_8_);
      return pfVar32;
    case (undefined **)0xa6:
    case (undefined **)0xaf:
    case (undefined **)0xbd:
    case (undefined **)0xf3:
      _objc_release(pfVar52);
      return (float *)(ulong)(0.0 <= (double)CONCAT44(unaff_00005104,unaff_s8));
    case (undefined **)0xa7:
      goto code_r0x000108411ab8;
    case (undefined **)0xa8:
    case (undefined **)0xb6:
    case (undefined **)0xbf:
    case (undefined **)0xcd:
    case (undefined **)0xec:
    case (undefined **)0xf9:
      return pfVar32;
    case (undefined **)0xa9:
    case (undefined **)0xb7:
    case (undefined **)0xce:
    case (undefined **)0xed:
    case (undefined **)0xfa:
      goto code_r0x00010841bf90;
    case (undefined **)0xb0:
      fVar87 = 2.1158898e-37;
      fVar88 = *(float *)(ppuVar45 + 1);
      fVar168 = *(float *)((long)ppuVar45 + 0xc);
      iVar61 = -(uint)(fVar165 == 0.0);
      iVar69 = -(uint)(fVar85 == 0.0);
      iVar70 = -(uint)((float)extraout_var == 0.0);
      iVar71 = -(uint)(fVar175 == 0.0);
      auVar184 = ZEXT216(0);
      auVar185 = NEON_fmov(0x3f800000,4);
      iVar93 = -(uint)((float)CONCAT13(extraout_var_53,
                                       CONCAT12(extraout_var_50,
                                                CONCAT11(extraout_var_47,extraout_b30))) ==
                      auVar185._0_4_);
      iVar98 = -(uint)((float)CONCAT13(extraout_var_62,
                                       CONCAT12(extraout_var_60,
                                                CONCAT11(extraout_var_58,extraout_var_56))) ==
                      auVar185._4_4_);
      iVar100 = -(uint)((float)CONCAT13(in_register_000053cb,
                                        CONCAT12(in_register_000053ca,
                                                 CONCAT11(in_register_000053c9,in_register_000053c8)
                                                )) == auVar185._8_4_);
      iVar102 = -(uint)((float)CONCAT13(in_register_000053cf,
                                        CONCAT12(in_register_000053ce,
                                                 CONCAT11(in_register_000053cd,in_register_000053cc)
                                                )) == auVar185._12_4_);
      auVar66[0] = ~(byte)iVar61 & ~(byte)iVar93;
      auVar66[1] = ~(byte)((uint)iVar61 >> 8) & ~(byte)((uint)iVar93 >> 8);
      auVar66[2] = ~(byte)((uint)iVar61 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
      auVar66[3] = ~(byte)((uint)iVar61 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
      auVar66[4] = ~(byte)iVar69 & ~(byte)iVar98;
      auVar66[5] = ~(byte)((uint)iVar69 >> 8) & ~(byte)((uint)iVar98 >> 8);
      auVar66[6] = ~(byte)((uint)iVar69 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
      auVar66[7] = ~(byte)((uint)iVar69 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
      auVar66[8] = ~(byte)iVar70 & ~(byte)iVar100;
      auVar66[9] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar100 >> 8);
      auVar66[10] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10);
      auVar66[0xb] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18);
      auVar66[0xc] = ~(byte)iVar71 & ~(byte)iVar102;
      auVar66[0xd] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar102 >> 8);
      auVar66[0xe] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10);
      auVar66[0xf] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18);
      auVar18[1] = extraout_var_47;
      auVar18[0] = extraout_b30;
      auVar18[2] = extraout_var_50;
      auVar18[3] = extraout_var_53;
      auVar18[4] = extraout_var_56;
      auVar18[5] = extraout_var_58;
      auVar18[6] = extraout_var_60;
      auVar18[7] = extraout_var_62;
      auVar18[8] = in_register_000053c8;
      auVar18[9] = in_register_000053c9;
      auVar18[10] = in_register_000053ca;
      auVar18[0xb] = in_register_000053cb;
      auVar18[0xc] = in_register_000053cc;
      auVar18[0xd] = in_register_000053cd;
      auVar18[0xe] = in_register_000053ce;
      auVar18[0xf] = in_register_000053cf;
      auVar186 = NEON_ucvtf(auVar18,4);
      fVar103 = 1.1920929e-07;
      fVar94 = 1.1920929e-07;
      fVar99 = 1.1920929e-07;
      fVar101 = 1.1920929e-07;
      bVar139 = 0xff;
      bVar140 = 0xff;
      bVar141 = 0x7f;
      bVar142 = 0;
      bVar126 = 0xff;
      bVar128 = 0xff;
      bVar129 = 0x7f;
      bVar130 = 0;
      bVar131 = 0xff;
      bVar132 = 0xff;
      bVar133 = 0x7f;
      bVar134 = 0;
      bVar135 = 0xff;
      bVar136 = 0xff;
      bVar137 = 0x7f;
      bVar138 = 0;
      fVar158 = (float)(CONCAT12(extraout_var_50,CONCAT11(extraout_var_47,extraout_b30)) & 0x7fffff
                       | 0x3f000000);
      fVar159 = (float)(CONCAT12(extraout_var_60,CONCAT11(extraout_var_58,extraout_var_56)) &
                        0x7fffff | 0x3f000000);
      fVar160 = (float)(CONCAT12(in_register_000053ca,
                                 CONCAT11(in_register_000053c9,in_register_000053c8)) & 0x7fffff |
                       0x3f000000);
      fVar89 = (float)(CONCAT12(in_register_000053ce,
                                CONCAT11(in_register_000053cd,in_register_000053cc)) & 0x7fffff |
                      0x3f000000);
      fVar92 = -124.22552;
      fVar118 = -1.4980303;
      fVar156 = 0.35208872;
      fVar153 = 0.35208872;
      fVar154 = 0.35208872;
      fVar155 = 0.35208872;
      fVar157 = 1.72588;
      fVar176 = ((auVar186._0_4_ * 1.1920929e-07 + -124.22552 + fVar158 * -1.4980303) -
                1.72588 / (fVar158 + 0.35208872)) * fVar168;
      fVar165 = ((auVar186._4_4_ * 1.1920929e-07 + -124.22552 + fVar159 * -1.4980303) -
                1.72588 / (fVar159 + 0.35208872)) * fVar168;
      fVar85 = ((auVar186._8_4_ * 1.1920929e-07 + -124.22552 + fVar160 * -1.4980303) -
               1.72588 / (fVar160 + 0.35208872)) * fVar168;
      fVar89 = ((auVar186._12_4_ * 1.1920929e-07 + -124.22552 + fVar89 * -1.4980303) -
               1.72588 / (fVar89 + 0.35208872)) * fVar168;
      fVar164 = 121.274055;
      fVar161 = 121.274055;
      fVar162 = 121.274055;
      fVar163 = 121.274055;
      fVar158 = -1.4901291;
      fVar159 = 4.8425255;
      fVar160 = 27.728024;
      fVar173 = 8388608.0;
      fVar174 = 8388608.0;
      auVar14._4_4_ =
           (fVar165 + 121.274055 + (fVar165 - (float)(int)fVar165) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar165 - (float)(int)fVar165))) * 8388608.0;
      auVar14._0_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar14._8_4_ =
           (fVar85 + 121.274055 + (fVar85 - (float)(int)fVar85) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar85 - (float)(int)fVar85))) * 8388608.0;
      auVar14._12_4_ =
           (fVar89 + 121.274055 + (fVar89 - (float)(int)fVar89) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar89 - (float)(int)fVar89))) * 8388608.0;
      auVar186 = NEON_fmax(auVar14,auVar184,4);
      uVar46 = 0x4eff0000;
      auVar15._8_4_ = 0x4eff0000;
      auVar15._0_8_ = 0x4eff00004eff0000;
      auVar15._12_4_ = 0x4eff0000;
      auVar186 = NEON_fmin(auVar186,auVar15,4);
      auVar180._0_4_ = (int)auVar186._0_4_;
      auVar180._4_4_ = (int)auVar186._4_4_;
      auVar180._8_4_ = (int)auVar186._8_4_;
      auVar180._12_4_ = (int)auVar186._12_4_;
      auVar19[1] = extraout_var_47;
      auVar19[0] = extraout_b30;
      auVar19[2] = extraout_var_50;
      auVar19[3] = extraout_var_53;
      auVar19[4] = extraout_var_56;
      auVar19[5] = extraout_var_58;
      auVar19[6] = extraout_var_60;
      auVar19[7] = extraout_var_62;
      auVar19[8] = in_register_000053c8;
      auVar19[9] = in_register_000053c9;
      auVar19[10] = in_register_000053ca;
      auVar19[0xb] = in_register_000053cb;
      auVar19[0xc] = in_register_000053cc;
      auVar19[0xd] = in_register_000053cd;
      auVar19[0xe] = in_register_000053ce;
      auVar19[0xf] = in_register_000053cf;
      auVar67[1] = extraout_var_47;
      auVar67[0] = extraout_b30;
      auVar67[2] = extraout_var_50;
      auVar67[3] = extraout_var_53;
      auVar67[4] = extraout_var_56;
      auVar67[5] = extraout_var_58;
      auVar67[6] = extraout_var_60;
      auVar67[7] = extraout_var_62;
      auVar67[8] = in_register_000053c8;
      auVar67[9] = in_register_000053c9;
      auVar67[10] = in_register_000053ca;
      auVar67[0xb] = in_register_000053cb;
      auVar67[0xc] = in_register_000053cc;
      auVar67[0xd] = in_register_000053cd;
      auVar67[0xe] = in_register_000053ce;
      auVar67[0xf] = in_register_000053cf;
      auVar67 = auVar67 ^ (auVar19 ^ auVar180) & auVar66;
      fVar89 = auVar67._4_4_ * fVar88 + 2.1158898e-37;
      fVar176 = auVar67._8_4_ * fVar88 + 2.1158898e-37;
      fVar165 = auVar67._12_4_ * fVar88 + 2.1158898e-37;
      auVar20[4] = SUB41(fVar89,0);
      auVar20._0_4_ = auVar67._0_4_ * fVar88 + 2.1158898e-37;
      auVar20[5] = (char)((uint)fVar89 >> 8);
      auVar20[6] = (char)((uint)fVar89 >> 0x10);
      auVar20[7] = (char)((uint)fVar89 >> 0x18);
      auVar20[8] = SUB41(fVar176,0);
      auVar20[9] = (char)((uint)fVar176 >> 8);
      auVar20[10] = (char)((uint)fVar176 >> 0x10);
      auVar20[0xb] = (char)((uint)fVar176 >> 0x18);
      auVar20[0xc] = SUB41(fVar165,0);
      auVar20[0xd] = (char)((uint)fVar165 >> 8);
      auVar20[0xe] = (char)((uint)fVar165 >> 0x10);
      auVar20[0xf] = (char)((uint)fVar165 >> 0x18);
      auVar186 = NEON_fmax(auVar20,auVar184,4);
      fVar88 = *(float *)(ppuVar45 + 2);
      fVar104 = *(float *)((long)ppuVar45 + 0x14);
      auVar68._0_4_ = auVar186._0_4_ / (fVar88 + auVar67._0_4_ * fVar104);
      auVar68._4_4_ = auVar186._4_4_ / (fVar88 + auVar67._4_4_ * fVar104);
      auVar68._8_4_ = auVar186._8_4_ / (fVar88 + auVar67._8_4_ * fVar104);
      auVar68._12_4_ = auVar186._12_4_ / (fVar88 + auVar67._12_4_ * fVar104);
      NEON_scvtf(auVar68,4);
      fVar175 = fVar118;
      fVar151 = fVar157;
      fVar152 = fVar158;
      fVar166 = fVar159;
      fVar172 = fVar160;
      uVar179 = uVar46;
      fVar177 = fVar92;
      fVar178 = fVar87;
      fVar167 = fVar87;
      fVar171 = fVar87;
      fVar181 = fVar88;
      fVar182 = fVar88;
      fVar183 = fVar88;
      func_0x00010840dfdc();
      func_0x00010840de7c();
      auVar76._0_4_ = ABS((float)extraout_d1_00);
      auVar76._4_4_ = ABS((float)((ulong)extraout_d1_00 >> 0x20));
      auVar76._8_4_ = ABS((float)extraout_var_14);
      auVar76._12_4_ = ABS((float)((ulong)extraout_var_14 >> 0x20));
      auVar186 = NEON_ucvtf(auVar76,4);
      fVar89 = auVar186._0_4_ * fVar94;
      fVar176 = auVar186._4_4_ * fVar99;
      fVar165 = auVar186._8_4_ * fVar101;
      fVar85 = auVar186._12_4_ * fVar103;
      func_0x00010840dfdc();
      auVar120._0_4_ = fVar89 * fVar168;
      auVar120._4_4_ = fVar176 * fVar168;
      auVar120._8_4_ = fVar165 * fVar168;
      auVar120._12_4_ = fVar85 * fVar168;
      func_0x00010840de7c();
      auVar75._8_8_ = extraout_var_15;
      auVar75._0_8_ = extraout_d1_01;
      auVar76 = auVar76 ^ (auVar76 ^ auVar120) & auVar75;
      fVar89 = (float)CONCAT13(extraout_var_28,
                               CONCAT12(extraout_var_25,CONCAT11(extraout_var_22,extraout_b17_00)));
      auVar117._0_4_ = fVar87 + auVar76._0_4_ * fVar89;
      auVar117._4_4_ = fVar178 + auVar76._4_4_ * fVar89;
      auVar117._8_4_ = fVar167 + auVar76._8_4_ * fVar89;
      auVar117._12_4_ = fVar171 + auVar76._12_4_ * fVar89;
      auVar186 = NEON_fmax(auVar117,auVar184,4);
      auVar77._0_4_ = auVar186._0_4_ / (fVar88 + auVar76._0_4_ * fVar104);
      auVar77._4_4_ = auVar186._4_4_ / (fVar181 + auVar76._4_4_ * fVar104);
      auVar77._8_4_ = auVar186._8_4_ / (fVar182 + auVar76._8_4_ * fVar104);
      auVar77._12_4_ = auVar186._12_4_ / (fVar183 + auVar76._12_4_ * fVar104);
      NEON_scvtf(auVar77,4);
      func_0x00010840dfdc();
      func_0x00010840de7c();
      fVar89 = ABS((float)extraout_d2_01);
      fVar122 = (float)((ulong)extraout_d2_01 >> 0x20);
      fVar176 = ABS(fVar122);
      bVar105 = SUB41(fVar176,0);
      bVar106 = (byte)((uint)fVar176 >> 8);
      bVar107 = (byte)((uint)fVar176 >> 0x10);
      bVar108 = (byte)((uint)fVar176 >> 0x18);
      fVar165 = ABS((float)extraout_var_18);
      bVar109 = SUB41(fVar165,0);
      bVar110 = (byte)((uint)fVar165 >> 8);
      bVar111 = (byte)((uint)fVar165 >> 0x10);
      bVar112 = (byte)((uint)fVar165 >> 0x18);
      fVar83 = (float)((ulong)extraout_var_18 >> 0x20);
      fVar85 = ABS(fVar83);
      bVar113 = SUB41(fVar85,0);
      bVar114 = (byte)((uint)fVar85 >> 8);
      bVar115 = (byte)((uint)fVar85 >> 0x10);
      bVar116 = (byte)((uint)fVar85 >> 0x18);
      iVar61 = -(uint)((float)extraout_d2_01 == 0.0);
      iVar69 = -(uint)(fVar122 == 0.0);
      iVar70 = -(uint)((float)extraout_var_18 == 0.0);
      iVar71 = -(uint)(fVar83 == 0.0);
      iVar93 = -(uint)(fVar89 == auVar185._0_4_);
      iVar98 = -(uint)(fVar176 == auVar185._4_4_);
      iVar100 = -(uint)(fVar165 == auVar185._8_4_);
      iVar102 = -(uint)(fVar85 == auVar185._12_4_);
      auVar80[0] = ~(byte)iVar61 & ~(byte)iVar93;
      auVar80[1] = ~(byte)((uint)iVar61 >> 8) & ~(byte)((uint)iVar93 >> 8);
      auVar80[2] = ~(byte)((uint)iVar61 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
      auVar80[3] = ~(byte)((uint)iVar61 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
      auVar80[4] = ~(byte)iVar69 & ~(byte)iVar98;
      auVar80[5] = ~(byte)((uint)iVar69 >> 8) & ~(byte)((uint)iVar98 >> 8);
      auVar80[6] = ~(byte)((uint)iVar69 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
      auVar80[7] = ~(byte)((uint)iVar69 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
      auVar80[8] = ~(byte)iVar70 & ~(byte)iVar100;
      auVar80[9] = ~(byte)((uint)iVar70 >> 8) & ~(byte)((uint)iVar100 >> 8);
      auVar80[10] = ~(byte)((uint)iVar70 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10);
      auVar80[0xb] = ~(byte)((uint)iVar70 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18);
      auVar80[0xc] = ~(byte)iVar71 & ~(byte)iVar102;
      auVar80[0xd] = ~(byte)((uint)iVar71 >> 8) & ~(byte)((uint)iVar102 >> 8);
      auVar80[0xe] = ~(byte)((uint)iVar71 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10);
      auVar80[0xf] = ~(byte)((uint)iVar71 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18);
      auVar9[4] = bVar105;
      auVar9._0_4_ = fVar89;
      auVar9[5] = bVar106;
      auVar9[6] = bVar107;
      auVar9[7] = bVar108;
      auVar9[8] = bVar109;
      auVar9[9] = bVar110;
      auVar9[10] = bVar111;
      auVar9[0xb] = bVar112;
      auVar9[0xc] = bVar113;
      auVar9[0xd] = bVar114;
      auVar9[0xe] = bVar115;
      auVar9[0xf] = bVar116;
      auVar185 = NEON_ucvtf(auVar9,4);
      uVar95 = CONCAT13((byte)((uint)fVar89 >> 0x18) & bVar130,
                        CONCAT12((byte)((uint)fVar89 >> 0x10) & bVar129,
                                 CONCAT11((byte)((uint)fVar89 >> 8) & bVar128,
                                          SUB41(fVar89,0) & bVar126)));
      auVar119._0_8_ =
           CONCAT17(bVar108 & bVar134,
                    CONCAT16(bVar107 & bVar133,
                             CONCAT15(bVar106 & bVar132,CONCAT14(bVar105 & bVar131,uVar95))));
      auVar119[8] = bVar109 & bVar135;
      auVar119[9] = bVar110 & bVar136;
      auVar119[10] = bVar111 & bVar137;
      auVar119[0xb] = bVar112 & bVar138;
      auVar121[0xc] = bVar113 & bVar139;
      auVar121._0_12_ = auVar119;
      auVar121[0xd] = bVar114 & bVar140;
      auVar121[0xe] = bVar115 & bVar141;
      auVar121[0xf] = bVar116 & bVar142;
      uVar60 = CONCAT44((int)((ulong)auVar119._0_8_ >> 0x20),uVar95) | 0x3f0000003f000000;
      fVar85 = (float)(auVar119._8_4_ | 0x3f000000);
      fVar122 = (float)(auVar121._12_4_ | 0x3f000000);
      fVar176 = (float)uVar60;
      fVar165 = (float)(uVar60 >> 0x20);
      fVar176 = ((auVar185._0_4_ * fVar94 + extraout_s18_00 + extraout_s19 * fVar176) -
                extraout_s21_00 / (fVar176 + fVar153)) * fVar168;
      fVar165 = ((auVar185._4_4_ * fVar99 + extraout_var_34 + extraout_var_35 * fVar165) -
                extraout_var_37 / (fVar165 + fVar154)) * fVar168;
      fVar85 = ((auVar185._8_4_ * fVar101 + fVar92 + fVar118 * fVar85) -
               fVar157 / (fVar85 + fVar155)) * fVar168;
      fVar168 = ((auVar185._12_4_ * fVar103 + fVar177 + fVar175 * fVar122) -
                fVar151 / (fVar122 + fVar156)) * fVar168;
      auVar169._0_4_ =
           (fVar176 + fVar161 + extraout_s23_00 * (fVar176 - (float)(int)fVar176) +
           extraout_s26_00 / (extraout_s24_00 - (fVar176 - (float)(int)fVar176))) * extraout_s27_00;
      auVar169._4_4_ =
           (fVar165 + fVar162 + extraout_var_39 * (fVar165 - (float)(int)fVar165) +
           extraout_var_43 / (extraout_var_41 - (fVar165 - (float)(int)fVar165))) * extraout_var_45;
      auVar169._8_4_ =
           (fVar85 + fVar163 + fVar158 * (fVar85 - (float)(int)fVar85) +
           fVar160 / (fVar159 - (fVar85 - (float)(int)fVar85))) * fVar173;
      auVar169._12_4_ =
           (fVar168 + fVar164 + fVar152 * (fVar168 - (float)(int)fVar168) +
           fVar172 / (fVar166 - (fVar168 - (float)(int)fVar168))) * fVar174;
      auVar185 = NEON_fmax(auVar169,auVar184,4);
      auVar16._4_4_ = extraout_var_46;
      auVar16._0_4_ = extraout_s28;
      auVar16._8_4_ = uVar46;
      auVar16._12_4_ = uVar179;
      auVar185 = NEON_fmin(auVar185,auVar16,4);
      auVar170._0_4_ = (int)auVar185._0_4_;
      auVar170._4_4_ = (int)auVar185._4_4_;
      auVar170._8_4_ = (int)auVar185._8_4_;
      auVar170._12_4_ = (int)auVar185._12_4_;
      auVar10[4] = bVar105;
      auVar10._0_4_ = fVar89;
      auVar10[5] = bVar106;
      auVar10[6] = bVar107;
      auVar10[7] = bVar108;
      auVar10[8] = bVar109;
      auVar10[9] = bVar110;
      auVar10[10] = bVar111;
      auVar10[0xb] = bVar112;
      auVar10[0xc] = bVar113;
      auVar10[0xd] = bVar114;
      auVar10[0xe] = bVar115;
      auVar10[0xf] = bVar116;
      auVar81[4] = bVar105;
      auVar81._0_4_ = fVar89;
      auVar81[5] = bVar106;
      auVar81[6] = bVar107;
      auVar81[7] = bVar108;
      auVar81[8] = bVar109;
      auVar81[9] = bVar110;
      auVar81[10] = bVar111;
      auVar81[0xb] = bVar112;
      auVar81[0xc] = bVar113;
      auVar81[0xd] = bVar114;
      auVar81[0xe] = bVar115;
      auVar81[0xf] = bVar116;
      auVar81 = auVar81 ^ (auVar10 ^ auVar170) & auVar80;
      fVar89 = (float)CONCAT13(extraout_var_29,
                               CONCAT12(extraout_var_26,CONCAT11(extraout_var_23,extraout_b17_01)));
      auVar90._0_4_ = fVar87 + auVar81._0_4_ * fVar89;
      auVar90._4_4_ = fVar178 + auVar81._4_4_ * fVar89;
      auVar90._8_4_ = fVar167 + auVar81._8_4_ * fVar89;
      auVar90._12_4_ = fVar171 + auVar81._12_4_ * fVar89;
      auVar185 = NEON_fmax(auVar90,auVar184,4);
      auVar82._0_4_ = auVar185._0_4_ / (fVar88 + auVar81._0_4_ * fVar104);
      auVar82._4_4_ = auVar185._4_4_ / (fVar181 + auVar81._4_4_ * fVar104);
      auVar82._8_4_ = auVar185._8_4_ / (fVar182 + auVar81._8_4_ * fVar104);
      auVar82._12_4_ = auVar185._12_4_ / (fVar183 + auVar81._12_4_ * fVar104);
      auVar185 = NEON_scvtf(auVar82,4);
      uVar95 = CONCAT13((byte)((uint)auVar82._0_4_ >> 0x18) & bVar130,
                        CONCAT12((byte)((uint)auVar82._0_4_ >> 0x10) & bVar129,
                                 CONCAT11((byte)((uint)auVar82._0_4_ >> 8) & bVar128,
                                          SUB41(auVar82._0_4_,0) & bVar126)));
      auVar96._0_8_ =
           CONCAT17((byte)((uint)auVar82._4_4_ >> 0x18) & bVar134,
                    CONCAT16((byte)((uint)auVar82._4_4_ >> 0x10) & bVar133,
                             CONCAT15((byte)((uint)auVar82._4_4_ >> 8) & bVar132,
                                      CONCAT14(SUB41(auVar82._4_4_,0) & bVar131,uVar95))));
      auVar96[8] = SUB41(auVar82._8_4_,0) & bVar135;
      auVar96[9] = (byte)((uint)auVar82._8_4_ >> 8) & bVar136;
      auVar96[10] = (byte)((uint)auVar82._8_4_ >> 0x10) & bVar137;
      auVar96[0xb] = (byte)((uint)auVar82._8_4_ >> 0x18) & bVar138;
      auVar97[0xc] = SUB41(auVar82._12_4_,0) & bVar139;
      auVar97._0_12_ = auVar96;
      auVar97[0xd] = (byte)((uint)auVar82._12_4_ >> 8) & bVar140;
      auVar97[0xe] = (byte)((uint)auVar82._12_4_ >> 0x10) & bVar141;
      auVar97[0xf] = (byte)((uint)auVar82._12_4_ >> 0x18) & bVar142;
      uVar60 = CONCAT44((int)((ulong)auVar96._0_8_ >> 0x20),uVar95) | 0x3f0000003f000000;
      fVar176 = (float)(auVar96._8_4_ | 0x3f000000);
      fVar165 = (float)(auVar97._12_4_ | 0x3f000000);
      fVar88 = (float)uVar60;
      fVar89 = (float)(uVar60 >> 0x20);
      fVar87 = (float)CONCAT13(extraout_var_55,
                               CONCAT12(extraout_var_52,CONCAT11(extraout_var_49,extraout_b30_01)));
      fVar88 = ((auVar185._0_4_ * fVar94 + extraout_s18_00 + extraout_s19 * fVar88) -
               extraout_s21_00 / (fVar88 + fVar153)) * fVar87;
      fVar89 = ((auVar185._4_4_ * fVar99 + extraout_var_34 + extraout_var_35 * fVar89) -
               extraout_var_37 / (fVar89 + fVar154)) * fVar87;
      fVar92 = ((auVar185._8_4_ * fVar101 + fVar92 + fVar118 * fVar176) -
               fVar157 / (fVar176 + fVar155)) * fVar87;
      fVar87 = ((auVar185._12_4_ * fVar103 + fVar177 + fVar175 * fVar165) -
               fVar151 / (fVar165 + fVar156)) * fVar87;
      auVar91._0_4_ =
           (fVar88 + fVar161 + extraout_s23_00 * (fVar88 - (float)(int)fVar88) +
           extraout_s26_00 / (extraout_s24_00 - (fVar88 - (float)(int)fVar88))) * extraout_s27_00;
      auVar91._4_4_ =
           (fVar89 + fVar162 + extraout_var_39 * (fVar89 - (float)(int)fVar89) +
           extraout_var_43 / (extraout_var_41 - (fVar89 - (float)(int)fVar89))) * extraout_var_45;
      auVar91._8_4_ =
           (fVar92 + fVar163 + fVar158 * (fVar92 - (float)(int)fVar92) +
           fVar160 / (fVar159 - (fVar92 - (float)(int)fVar92))) * fVar173;
      auVar91._12_4_ =
           (fVar87 + fVar164 + fVar152 * (fVar87 - (float)(int)fVar87) +
           fVar172 / (fVar166 - (fVar87 - (float)(int)fVar87))) * fVar174;
      auVar184 = NEON_fmax(auVar91,auVar184,4);
      auVar17._4_4_ = extraout_var_46;
      auVar17._0_4_ = extraout_s28;
      auVar17._8_4_ = uVar46;
      auVar17._12_4_ = uVar179;
      NEON_fmin(auVar184,auVar17,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xb1:
      return pfVar32;
    case (undefined **)0xb2:
      goto LAB_10841bf94;
    case (undefined **)0xb3:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      if (pfRam000000011372b608 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar50 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
        func_0x00010c2289e0();
        pfRam000000011372b608 = pfVar50;
      }
      return pfRam000000011372b608;
    case (undefined **)0xb5:
      goto code_r0x000108411b74;
    case (undefined **)0xbe:
      in_s16 = 2.1158898e-37;
      fVar92 = ABS(fVar165) * extraout_s18 + 2.1158898e-37;
      fVar118 = ABS(fVar85) * extraout_s18 + 2.1158898e-37;
      fVar159 = ABS((float)extraout_var) * extraout_s18 + 2.1158898e-37;
      fVar160 = ABS(fVar175) * extraout_s18 + 2.1158898e-37;
      uVar143 = 0;
      uVar144 = 0;
      uVar145 = 0;
      uVar146 = 0;
      uVar147 = 0;
      uVar148 = 0;
      uVar149 = 0;
      uVar150 = 0;
      in_register_00005228 = 0;
      in_register_00005229 = 0;
      in_register_0000522a = 0;
      in_register_0000522b = 0;
      in_register_0000522c = 0;
      in_register_0000522d = 0;
      in_register_0000522e = 0;
      in_register_0000522f = 0;
      NEON_fmov(0x3f800000,4);
      auVar186[4] = SUB41(fVar118,0);
      auVar186._0_4_ = fVar92;
      auVar186[5] = (char)((uint)fVar118 >> 8);
      auVar186[6] = (char)((uint)fVar118 >> 0x10);
      auVar186[7] = (char)((uint)fVar118 >> 0x18);
      auVar186[8] = SUB41(fVar159,0);
      auVar186[9] = (char)((uint)fVar159 >> 8);
      auVar186[10] = (char)((uint)fVar159 >> 0x10);
      auVar186[0xb] = (char)((uint)fVar159 >> 0x18);
      auVar186[0xc] = SUB41(fVar160,0);
      auVar186[0xd] = (char)((uint)fVar160 >> 8);
      auVar186[0xe] = (char)((uint)fVar160 >> 0x10);
      auVar186[0xf] = (char)((uint)fVar160 >> 0x18);
      auVar184 = NEON_scvtf(auVar186,4);
      fVar157 = 1.1920929e-07;
      fVar158 = 1.1920929e-07;
      in_register_000052a8 = 1.1920929e-07;
      in_register_000052ac = 1.1920929e-07;
      in_register_000052cc = 0xff;
      in_register_000052cd = 0xff;
      in_register_000052ce = 0x7f;
      in_register_000052cf = 0;
      in_b22 = 0xff;
      in_register_000052c1 = 0xff;
      in_register_000052c2 = 0x7f;
      in_register_000052c3 = 0;
      in_register_000052c4 = 0xff;
      in_register_000052c5 = 0xff;
      in_register_000052c6 = 0x7f;
      in_register_000052c7 = 0;
      in_register_000052c8 = 0xff;
      in_register_000052c9 = 0xff;
      in_register_000052ca = 0x7f;
      in_register_000052cb = 0;
      fVar87 = (float)(SUB43(fVar92,0) & 0x7fffff | 0x3f000000);
      fVar88 = (float)(SUB43(fVar118,0) & 0x7fffff | 0x3f000000);
      in_register_00005348 = (float)(SUB43(fVar159,0) & 0x7fffff | 0x3f000000);
      in_register_0000534c = (float)(SUB43(fVar160,0) & 0x7fffff | 0x3f000000);
      fVar92 = -124.22552;
      fVar118 = -1.4980303;
      fVar89 = auVar184._0_4_ * 1.1920929e-07 + -124.22552 + fVar87 * -1.4980303;
      fVar176 = auVar184._4_4_ * 1.1920929e-07 + -124.22552 + fVar88 * -1.4980303;
      in_register_00005368 =
           auVar184._8_4_ * 1.1920929e-07 + -124.22552 + in_register_00005348 * -1.4980303;
      in_register_0000536c =
           auVar184._12_4_ * 1.1920929e-07 + -124.22552 + in_register_0000534c * -1.4980303;
      uVar54 = 0x44f9;
      fVar159 = fVar92;
      in_register_000052e8 = fVar92;
      in_register_000052ec = fVar92;
      fVar160 = fVar118;
      in_register_00005308 = fVar118;
      in_register_0000530c = fVar118;
      in_register_00005204 = in_s16;
      in_register_00005208 = in_s16;
      in_register_0000520c = in_s16;
code_r0x00010840bb18:
      fVar165 = (float)(uVar54 & 0xffff | 0x3eb40000);
      uVar60 = CONCAT44(uVar54,uVar54) & 0xffff0000ffff;
      fVar167 = (float)((uint)uVar60 | 0x3eb40000);
      fVar171 = (float)((uint)(uVar60 >> 0x20) | 0x3eb40000);
      fVar85 = in_q5._0_4_;
      fVar175 = fVar85 * (fVar89 - 1.72588 / (fVar87 + fVar167));
      fVar87 = in_q5._4_4_;
      fVar176 = fVar87 * (fVar176 - 1.72588 / (fVar88 + fVar171));
      fVar88 = in_q5._8_4_;
      fVar177 = fVar88 * (in_register_00005368 - 1.72588 / (in_register_00005348 + fVar165));
      fVar89 = in_q5._12_4_;
      fVar178 = fVar89 * (in_register_0000536c - 1.72588 / (in_register_0000534c + fVar165));
      auVar123._0_4_ =
           (fVar175 + 121.274055 + (fVar175 - (float)(int)fVar175) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar175 - (float)(int)fVar175))) * 8388608.0;
      auVar123._4_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar123._8_4_ =
           (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
      auVar123._12_4_ =
           (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
      auVar11[1] = uVar144;
      auVar11[0] = uVar143;
      auVar11[2] = uVar145;
      auVar11[3] = uVar146;
      auVar11[4] = uVar147;
      auVar11[5] = uVar148;
      auVar11[6] = uVar149;
      auVar11[7] = uVar150;
      auVar11[8] = in_register_00005228;
      auVar11[9] = in_register_00005229;
      auVar11[10] = in_register_0000522a;
      auVar11[0xb] = in_register_0000522b;
      auVar11[0xc] = in_register_0000522c;
      auVar11[0xd] = in_register_0000522d;
      auVar11[0xe] = in_register_0000522e;
      auVar11[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar123,auVar11,4);
      auVar6._8_4_ = 0x4eff0000;
      auVar6._0_8_ = 0x4eff00004eff0000;
      auVar6._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar6,4);
      auVar124._0_4_ = in_s16 + ABS((float)extraout_d1) * extraout_s18;
      auVar124._4_4_ =
           in_register_00005204 + ABS((float)((ulong)extraout_d1 >> 0x20)) * extraout_s18;
      auVar124._8_4_ = in_register_00005208 + ABS((float)extraout_var_10) * extraout_s18;
      auVar124._12_4_ =
           in_register_0000520c + ABS((float)((ulong)extraout_var_10 >> 0x20)) * extraout_s18;
      auVar184 = NEON_scvtf(auVar124,4);
      uVar30 = CONCAT13((byte)((uint)auVar124._0_4_ >> 0x18) & in_register_000052c3,
                        CONCAT12((byte)((uint)auVar124._0_4_ >> 0x10) & in_register_000052c2,
                                 CONCAT11((byte)((uint)auVar124._0_4_ >> 8) & in_register_000052c1,
                                          SUB41(auVar124._0_4_,0) & in_b22)));
      uVar54 = CONCAT13((byte)((uint)auVar124._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar124._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar124._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar124._8_4_,0) & in_register_000052c8)));
      fVar176 = (float)(uVar30 | 0x3f000000);
      fVar175 = (float)((uint)(CONCAT17((byte)((uint)auVar124._4_4_ >> 0x18) & in_register_000052c7,
                                        CONCAT16((byte)((uint)auVar124._4_4_ >> 0x10) &
                                                 in_register_000052c6,
                                                 CONCAT15((byte)((uint)auVar124._4_4_ >> 8) &
                                                          in_register_000052c5,
                                                          CONCAT14(SUB41(auVar124._4_4_,0) &
                                                                   in_register_000052c4,uVar30))))
                              >> 0x20) | 0x3f000000);
      fVar177 = (float)(uVar54 | 0x3f000000);
      fVar178 = (float)((uint)(CONCAT17((byte)((uint)auVar124._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar124._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar124._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar124._12_4_,0) &
                                                                    in_register_000052cc,uVar54))))
                              >> 0x20) | 0x3f000000);
      fVar176 = fVar85 * ((auVar184._0_4_ * fVar157 + fVar92 + fVar118 * fVar176) -
                         1.72588 / (fVar176 + fVar167));
      fVar175 = fVar87 * ((auVar184._4_4_ * fVar158 + fVar159 + fVar160 * fVar175) -
                         1.72588 / (fVar175 + fVar171));
      fVar177 = fVar88 * ((auVar184._8_4_ * in_register_000052a8 + in_register_000052e8 +
                          in_register_00005308 * fVar177) - 1.72588 / (fVar177 + fVar165));
      fVar178 = fVar89 * ((auVar184._12_4_ * in_register_000052ac + in_register_000052ec +
                          in_register_0000530c * fVar178) - 1.72588 / (fVar178 + fVar165));
      auVar125._0_4_ =
           (fVar176 + 121.274055 + (fVar176 - (float)(int)fVar176) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar176 - (float)(int)fVar176))) * 8388608.0;
      auVar125._4_4_ =
           (fVar175 + 121.274055 + (fVar175 - (float)(int)fVar175) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar175 - (float)(int)fVar175))) * 8388608.0;
      auVar125._8_4_ =
           (fVar177 + 121.274055 + (fVar177 - (float)(int)fVar177) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar177 - (float)(int)fVar177))) * 8388608.0;
      auVar125._12_4_ =
           (fVar178 + 121.274055 + (fVar178 - (float)(int)fVar178) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar178 - (float)(int)fVar178))) * 8388608.0;
      auVar12[1] = uVar144;
      auVar12[0] = uVar143;
      auVar12[2] = uVar145;
      auVar12[3] = uVar146;
      auVar12[4] = uVar147;
      auVar12[5] = uVar148;
      auVar12[6] = uVar149;
      auVar12[7] = uVar150;
      auVar12[8] = in_register_00005228;
      auVar12[9] = in_register_00005229;
      auVar12[10] = in_register_0000522a;
      auVar12[0xb] = in_register_0000522b;
      auVar12[0xc] = in_register_0000522c;
      auVar12[0xd] = in_register_0000522d;
      auVar12[0xe] = in_register_0000522e;
      auVar12[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar125,auVar12,4);
      auVar7._8_4_ = 0x4eff0000;
      auVar7._0_8_ = 0x4eff00004eff0000;
      auVar7._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar7,4);
      auVar127._0_4_ = in_s16 + ABS(fVar151) * extraout_s18;
      auVar127._4_4_ = in_register_00005204 + ABS(fVar152) * extraout_s18;
      auVar127._8_4_ = in_register_00005208 + ABS(fVar166) * extraout_s18;
      auVar127._12_4_ = in_register_0000520c + ABS(fVar172) * extraout_s18;
      auVar184 = NEON_scvtf(auVar127,4);
      uVar30 = CONCAT13((byte)((uint)auVar127._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar127._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar127._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar127._8_4_,0) & in_register_000052c8)));
      fVar176 = (float)(CONCAT13((byte)((uint)auVar127._0_4_ >> 0x18) & in_register_000052c3,
                                 CONCAT12((byte)((uint)auVar127._0_4_ >> 0x10) &
                                          in_register_000052c2,
                                          CONCAT11((byte)((uint)auVar127._0_4_ >> 8) &
                                                   in_register_000052c1,
                                                   SUB41(auVar127._0_4_,0) & in_b22))) | 0x3f000000)
      ;
      fVar175 = (float)(CONCAT13((byte)((uint)auVar127._4_4_ >> 0x18) & in_register_000052c7,
                                 CONCAT12((byte)((uint)auVar127._4_4_ >> 0x10) &
                                          in_register_000052c6,
                                          CONCAT11((byte)((uint)auVar127._4_4_ >> 8) &
                                                   in_register_000052c5,
                                                   SUB41(auVar127._4_4_,0) & in_register_000052c4)))
                       | 0x3f000000);
      fVar151 = (float)(uVar30 | 0x3f000000);
      fVar152 = (float)((uint)(CONCAT17((byte)((uint)auVar127._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar127._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar127._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar127._12_4_,0) &
                                                                    in_register_000052cc,uVar30))))
                              >> 0x20) | 0x3f000000);
      fVar85 = fVar85 * ((auVar184._0_4_ * fVar157 + fVar92 + fVar118 * fVar176) -
                        1.72588 / (fVar176 + fVar167));
      fVar87 = fVar87 * ((auVar184._4_4_ * fVar158 + fVar159 + fVar160 * fVar175) -
                        1.72588 / (fVar175 + fVar171));
      fVar88 = fVar88 * ((auVar184._8_4_ * in_register_000052a8 + in_register_000052e8 +
                         in_register_00005308 * fVar151) - 1.72588 / (fVar151 + fVar165));
      fVar89 = fVar89 * ((auVar184._12_4_ * in_register_000052ac + in_register_000052ec +
                         in_register_0000530c * fVar152) - 1.72588 / (fVar152 + fVar165));
      auVar86._0_4_ =
           (fVar85 + 121.274055 + (fVar85 - (float)(int)fVar85) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar85 - (float)(int)fVar85))) * 8388608.0;
      auVar86._4_4_ =
           (fVar87 + 121.274055 + (fVar87 - (float)(int)fVar87) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar87 - (float)(int)fVar87))) * 8388608.0;
      auVar86._8_4_ =
           (fVar88 + 121.274055 + (fVar88 - (float)(int)fVar88) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar88 - (float)(int)fVar88))) * 8388608.0;
      auVar86._12_4_ =
           (fVar89 + 121.274055 + (fVar89 - (float)(int)fVar89) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar89 - (float)(int)fVar89))) * 8388608.0;
      auVar13[1] = uVar144;
      auVar13[0] = uVar143;
      auVar13[2] = uVar145;
      auVar13[3] = uVar146;
      auVar13[4] = uVar147;
      auVar13[5] = uVar148;
      auVar13[6] = uVar149;
      auVar13[7] = uVar150;
      auVar13[8] = in_register_00005228;
      auVar13[9] = in_register_00005229;
      auVar13[10] = in_register_0000522a;
      auVar13[0xb] = in_register_0000522b;
      auVar13[0xc] = in_register_0000522c;
      auVar13[0xd] = in_register_0000522d;
      auVar13[0xe] = in_register_0000522e;
      auVar13[0xf] = in_register_0000522f;
      auVar184 = NEON_fmax(auVar86,auVar13,4);
      auVar8._8_4_ = 0x4eff0000;
      auVar8._0_8_ = 0x4eff00004eff0000;
      auVar8._12_4_ = 0x4eff0000;
      NEON_fmin(auVar184,auVar8,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xc0:
      goto code_r0x000108418fa8;
    case (undefined **)0xc1:
      func_0x00010bf00dc0();
      func_0x00010c2289e0();
      *(float **)(pfVar52 + 0x192) = pfVar32;
      return pfVar32;
    case (undefined **)0xc2:
    case (undefined **)0xdb:
      pfVar43 = (float *)0x11372b000;
      if (pfRam000000011372b720 != (float *)0x0) {
        return pfRam000000011372b720;
      }
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108417fb4:
      func_0x00010bf00dc0();
      func_0x00010c229040();
      func_0x00010c228780(pfVar32);
      *(float **)(pfVar43 + 0x1c8) = pfVar32;
      return pfVar32;
    case (undefined **)0xc6:
    case (undefined **)0xd2:
    case (undefined **)0xdf:
      goto code_r0x0001083feaf4;
    case (undefined **)0xcc:
      pfVar34 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar52 = pfVar32;
code_r0x000108411ab8:
      func_0x00010bf20c00();
      func_0x00010c013de0(pfVar52);
      func_0x00010c182b00(param_1);
      _objc_release(pfVar52);
      _objc_release(pfVar34);
      pfVar38 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar38);
      pfVar52 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = param_1;
      func_0x00010bf4dce0(param_1);
code_r0x000108411b2c:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(pfVar52);
      _objc_release(pfVar32);
      _objc_release(pfVar52);
      pfVar52 = (float *)PTR_PTR_1126b56b0;
      _objc_opt_new();
      pfVar43 = (float *)PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      pfVar32 = param_1;
code_r0x000108411b74:
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
code_r0x000108411b80:
      func_0x00010bf20c00();
      func_0x00010c014040(pfVar43);
      func_0x00010c1ed580(param_1);
      _objc_release(pfVar43);
      _objc_release(pfVar32);
      pfVar32 = param_1;
      func_0x00010c13cf80(param_1);
code_r0x000108411bc0:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0700();
      _objc_release(pfVar32);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167a20();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2026e0();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181fc0();
      _objc_release(pfVar38);
      puVar40 = PTR_PTR_1126b1150;
      _objc_alloc();
      func_0x00010c03fd60();
      lVar48 = (long)(int)unaff_x27[0xc];
      uVar63 = *(undefined8 *)((long)param_1 + lVar48);
      *(undefined **)((long)param_1 + lVar48) = puVar40;
      _objc_release(uVar63);
      func_0x00010bef9980(*(undefined8 *)((long)param_1 + lVar48));
      func_0x00010c18b5e0(*(undefined8 *)((long)param_1 + lVar48));
      func_0x00010c17e720(*(undefined8 *)((long)param_1 + lVar48));
      fVar92 = unaff_x27[8];
      func_0x00010c1e6360(*(undefined8 *)((long)param_1 + lVar48));
      puVar40 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      func_0x00010c178280();
      pfVar38 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(pfVar38);
      pfVar38 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      pfVar31 = param_1;
      func_0x00010c13cf80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(pfVar38);
      _objc_release(pfVar31);
      _objc_release(pfVar38);
      uVar62 = *(undefined8 *)((long)param_1 + unaff_x24);
      func_0x00010c0d6280(uVar62);
      _objc_retainAutoreleasedReturnValue();
      uVar63 = uVar62;
      func_0x00010c154720();
      _objc_retainAutoreleasedReturnValue();
      uVar64 = *(undefined8 *)((long)param_1 + (long)(int)fVar92);
      func_0x00010c11da20(uVar64);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139c0(uVar63);
      _objc_release(uVar64);
      _objc_release(uVar63);
      _objc_release(uVar62);
      *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xd]) = 0;
      pfVar38 = param_1;
      func_0x00010be0d940();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x78) =
           &PTR____CFConstantStringClassReference_110ed7978;
      *(undefined ***)((long)register0x00000008 + -0x70) =
           &PTR____CFConstantStringClassReference_110ed79f8;
      puVar39 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar38);
      _objc_release(puVar39);
      *(undefined ***)((long)register0x00000008 + -0x88) =
           &PTR____CFConstantStringClassReference_110ed79b8;
      pfVar31 = param_1;
      func_0x00010c073ce0();
      ppuVar45 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
      if ((int)pfVar31 == 0) {
        ppuVar45 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
      }
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar45;
      puVar39 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar38);
      _objc_release(puVar39);
      uVar63 = *(undefined8 *)((long)param_1 + (long)(int)*unaff_x27);
      pfVar31 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar38;
      func_0x00010bf51e00(pfVar38);
      func_0x00010bf7dbc0(uVar63);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      *(undefined1 *)((long)param_1 + (long)(int)unaff_x27[0xe]) = 1;
      _objc_release(pfVar38);
      _objc_release(puVar40);
      pfVar31 = pfVar52;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68))
      {
        ___stack_chk_fail();
        *(float **)((long)register0x00000008 + -0xd0) = pfVar38;
        *(undefined **)((long)register0x00000008 + -200) = puVar40;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
        *(code **)((long)register0x00000008 + -0xa8) = FUN_108411f7c;
        *(float **)((long)register0x00000008 + -0xe0) = pfVar31;
        *(undefined **)((long)register0x00000008 + -0xd8) = PTR_PTR_1126fc748;
        _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xe0),
                            PTR_s_viewWillAppear__1126853f0);
        func_0x00010beaf700(pfVar31);
        pfVar38 = *(float **)((long)pfVar31 + (long)_DAT_112774908);
        func_0x00010c0d6280(pfVar38);
        _objc_retainAutoreleasedReturnValue();
        pfVar50 = pfVar38;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        uVar62 = *(undefined8 *)((long)pfVar31 + (long)_DAT_1127748e4);
        func_0x00010bf5fc60(uVar62);
        _objc_retainAutoreleasedReturnValue();
        uVar63 = uVar62;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139c0(pfVar50);
        _objc_release(uVar63);
        _objc_release(uVar62);
        _objc_release(pfVar50);
        _objc_release(pfVar38);
        return pfVar38;
      }
      return pfVar31;
    case (undefined **)0xcf:
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar45;
      pfVar43 = *(float **)((long)pfVar52 + (long)ppuVar45);
      func_0x00010c15ffa0(pfVar43);
      _objc_retainAutoreleasedReturnValue();
code_r0x00010841378c:
      func_0x00010c1d0640(param_1);
      _objc_release(pfVar43);
      lVar48 = (long)(int)pfVar56[0xd];
      uVar62 = *(undefined8 *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar63 = uVar62;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(uVar63);
      _objc_release(uVar62);
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      func_0x00010c1d0640(param_1);
      ppuVar35 = *(undefined ***)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar45 = ppuVar35;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      uVar64 = *(undefined8 *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar62 = uVar64;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      lVar36 = *(long *)((long)pfVar52 + lVar48);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = lVar36;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      lVar44 = lVar48;
      func_0x00010c08fa60();
      uVar63 = 1;
      if (lVar44 != 0) {
        uVar63 = 2;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar45 != (undefined **)0x0) {
        ppuVar1 = ppuVar45;
      }
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar62;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar63;
      *(undefined ***)((long)register0x00000008 + -0xa0) = ppuVar1;
      puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      _objc_release(lVar48);
      _objc_release(lVar36);
      _objc_release(uVar62);
      _objc_release(uVar64);
      _objc_release(ppuVar45);
      _objc_release(ppuVar35);
      uVar63 = *(undefined8 *)((long)pfVar52 + (long)_DAT_1127748f8);
      func_0x00010c09ea00(uVar63);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = PTR_PTR_1126b6598;
      func_0x00010bf51c80();
      func_0x00010bf33ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar40;
      func_0x00010bfc6400();
      _objc_release(puVar40);
      *(undefined **)((long)register0x00000008 + -0xa0) = puVar39;
      puVar40 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      puVar40 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c08bda0();
      func_0x00010c0df780(puVar40);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_1);
      _objc_release(puVar40);
      _objc_release(uVar63);
      goto _objc_autoreleaseReturnValue;
    case (undefined **)0xd0:
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108418fa8:
code_r0x000108418fbc:
      func_0x00010bf00dc0();
      *(float **)(param_1 + 0x20e) = pfVar32;
      return pfVar32;
    case (undefined **)0xd1:
      return pfVar32;
    case (undefined **)0xd8:
code_r0x0001084136ac:
      goto LAB_108413708;
    case (undefined **)0xd9:
      goto code_r0x000108418fbc;
    case (undefined **)0xda:
      pfVar50 = (float *)((long)register0x00000008 + -0x70);
      UNRECOVERED_JUMPTABLE = (code *)0x10841d3d8;
      goto code_r0x000109189420;
    case (undefined **)0xe5:
      return pfVar32;
    case (undefined **)0xe6:
      goto code_r0x00010841a3c4;
    case (undefined **)0xe7:
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),ppuVar45[0x129]);
      if (pfVar37 != (float *)0x0) {
        puVar40 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_opt_new();
        lVar48 = (long)_DAT_11277495c;
        uVar63 = *(undefined8 *)((long)pfVar37 + lVar48);
        *(undefined **)((long)pfVar37 + lVar48) = puVar40;
        _objc_release(uVar63);
        puVar40 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(puVar40);
        puVar40 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(puVar40);
        ppuVar45 = &PTR____CFConstantStringClassReference_110ea8fd8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)((long)pfVar37 + lVar48));
        _objc_release(ppuVar45);
        func_0x00010c21e900(*(undefined8 *)((long)pfVar37 + lVar48));
        func_0x00010c1cfce0(*(undefined8 *)((long)pfVar37 + lVar48));
        func_0x00010befbb60(pfVar37);
      }
      return pfVar37;
    case (undefined **)0xe9:
      *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_var;
      *(undefined8 *)((long)register0x00000008 + -0x80) = extraout_d0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_var;
      *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_d0;
      _objc_retain(pfVar52);
      pfVar31 = pfVar52;
      func_0x00010bf52a60();
      if (pfVar31 != (float *)0x0) {
        lVar48 = **(long **)((long)register0x00000008 + -0x90);
        do {
          pfVar57 = (float *)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x90) != lVar48) {
              _objc_enumerationMutation(pfVar52);
            }
            func_0x00010c067ec0(*(undefined8 *)
                                 (*(long *)((long)register0x00000008 + -0x98) + (long)pfVar57 * 8));
            func_0x00010befc800(unaff_x24);
            pfVar57 = (float *)((long)pfVar57 + 1);
          } while (pfVar31 != pfVar57);
          pfVar31 = pfVar52;
          func_0x00010bf52a60();
        } while (pfVar31 != (float *)0x0);
      }
      _objc_release(pfVar52);
      pfVar31 = pfVar38;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      if (pfVar31 == (float *)0x0) {
        ppuVar45 = &PTR_PTR_1126b2000;
code_r0x00010841a3c4:
        puVar40 = ppuVar45[0x6f];
        _objc_opt_new(puVar40);
        func_0x00010c183080(&UNK_10df26510);
        _objc_release(puVar40);
      }
      else {
        func_0x00010c183080(&UNK_10df26510);
code_r0x00010841a3bc:
      }
      _objc_release(pfVar31);
      pfVar31 = pfVar56;
      func_0x00010c0d3c80(pfVar56);
      pfVar57 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = pfVar57;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6a60();
      _objc_release(pfVar32);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = param_1;
      func_0x00010c0d3c80(param_1);
      pfVar57 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = pfVar57;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6a80();
      _objc_release(pfVar32);
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = pfVar38;
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar31;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c6960();
      _objc_release(pfVar57);
      _objc_release(pfVar31);
      pfVar31 = pfVar43;
      func_0x00010c0d3c80(pfVar43);
      func_0x00010bf4e840(&UNK_10df26510);
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar38;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c69a0();
      _objc_release(pfVar57);
      _objc_release(pfVar38);
      _objc_release(pfVar31);
      _objc_release(unaff_x24);
      _objc_release(pfVar56);
      _objc_release(pfVar43);
      _objc_release(pfVar52);
      pfVar38 = param_1;
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
      {
        return pfVar38;
      }
      UNRECOVERED_JUMPTABLE = FUN_10841a57c;
      ___stack_chk_fail();
      pfVar32 = param_1;
code_r0x000109189420:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = pfVar32;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(code **)((long)register0x00000008 + -0xa8) = UNRECOVERED_JUMPTABLE;
      func_0x000107c3094c(param_3,(float *)((long)register0x00000008 + -200),
                          (float *)((long)register0x00000008 + -0xd0));
      if ((int)param_3 == 0) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)PTR_PTR_1126afad0;
        _objc_alloc_init(PTR_PTR_1126afad0);
        func_0x00010c1a85a0();
        func_0x00010c1c0fe0(param_1);
      }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return param_1;
    case (undefined **)0xea:
      return pfVar32;
    case (undefined **)0xeb:
      goto code_r0x000108411bc0;
    case (undefined **)0xf4:
                    /* WARNING: Could not recover jumptable at 0x00010840b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return pfVar32;
    case (undefined **)0xf5:
      return param_1;
    case (undefined **)0xf6:
      return pfVar32;
    case (undefined **)0xf7:
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      pfVar50 = pfRam000000011372b698;
      if (pfRam000000011372b698 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar50 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
      }
      pfRam000000011372b698 = pfVar50;
      return pfVar50;
    case (undefined **)0xf8:
      goto code_r0x000108411b80;
    case (undefined **)0xfd:
      func_0x000108403810();
      func_0x0001084039e4();
      func_0x0001083f91a8();
      pfVar56 = param_1 + 0xc;
      iVar61 = 0x135;
      uVar179 = 1;
      pfVar50 = *(float **)((long)register0x00000008 + -0x90);
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x88);
      pfVar26 = (float *)((long)register0x00000008 + -0x80);
      goto SUB_1083f8fd0;
    case (undefined **)0xfe:
      _objc_retain(pfVar43);
      pfVar50 = param_1;
      func_0x00010c0720c0();
      if ((int)pfVar50 != 0) {
        pfVar50 = pfVar56;
        func_0x00010c153720(pfVar56);
        _objc_retainAutoreleasedReturnValue();
        pfVar38 = pfVar50;
        func_0x00010c0d6280();
        _objc_retainAutoreleasedReturnValue();
        pfVar31 = pfVar38;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c193b00();
        _objc_release(pfVar31);
        _objc_release(pfVar38);
        _objc_release(pfVar50);
        func_0x00010be01ce0(pfVar56);
        goto code_r0x0001084136ac;
      }
LAB_1084136b0:
      pfVar50 = pfVar56;
      func_0x00010be0d940(pfVar56);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      uVar63 = *(undefined8 *)((long)pfVar56 + (long)_DAT_1127748e0);
      pfVar38 = pfVar50;
      func_0x00010bf51e00(pfVar50);
      func_0x00010bf7dbc0(uVar63);
      _objc_release(pfVar38);
      _objc_release(pfVar50);
LAB_108413708:
      _objc_release(pfVar43);
      _objc_release(pfVar52);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0xff:
      func_0x00010c182300();
      param_1 = pfVar43;
      goto code_r0x00010bdbf3e4;
    }
    break;
  case 4.34403e-44:
    func_0x000108403784();
    FUN_1084016cc();
    pfVar32 = pfVar56;
code_r0x0001083feac4:
    iVar61 = (int)pfVar32;
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x0001084038cc();
      func_0x0001084017e4();
      func_0x000108403650();
      if (iVar61 == 0) goto code_r0x0001083ff774;
      func_0x000108403778();
      func_0x000108403bbc();
code_r0x0001083feae8:
      func_0x000108403764(*(undefined8 *)(pfVar52 + 4));
code_r0x0001083feaf4:
      func_0x000108403878();
      func_0x0001083fa470();
    }
    break;
  case 4.48416e-44:
    pfVar32 = pfVar56;
code_r0x0001083feb04:
    iVar61 = (int)pfVar32;
    func_0x000108403650();
    if (iVar61 == 0) goto code_r0x0001083ff774;
    func_0x000108403bbc(**(undefined8 **)(*(long *)(pfVar52 + 6) + 0x10));
code_r0x0001083feb1c:
    func_0x000108403764(*(undefined8 *)(*(long *)(pfVar52 + 6) + 0x10));
    func_0x000108403778();
    func_0x000108403bbc();
    func_0x000108403764(*(undefined8 *)(pfVar52 + 4));
    func_0x000108403878();
    FUN_1083fa4fc();
    break;
  case 4.76441e-44:
code_r0x0001083fec78:
    iVar61 = (int)pfVar56;
    func_0x000108403650();
    if (iVar61 == 0) goto code_r0x0001083ff774;
code_r0x0001083fec80:
    func_0x00010840359c();
    func_0x0001084038a8();
  case 5.04467e-44:
    break;
  case 5.1848e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) == 0) goto code_r0x0001083ff774;
    func_0x000108403784();
    FUN_1083fda24();
code_r0x0001083fecc4:
    func_0x000108403868();
    UNRECOVERED_JUMPTABLE = extraout_x8_03;
code_r0x0001083feccc:
    (*UNRECOVERED_JUMPTABLE)();
    pfVar55 = pfVar56;
  default:
    goto LAB_1083ff778;
  case 5.46506e-44:
    bVar105 = *(byte *)(*(long *)(pfVar52 + 6) + 0x54);
    unaff_x24 = (ulong)bVar105;
    if (bVar105 == 0xff) {
      pfVar55 = *(float **)(param_1 + 0x3a);
      *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(*(long *)(pfVar52 + 6) + 0x28);
code_r0x0001083fece0:
      param_1[0x10] = (float)((int)param_1[0x10] + 1);
code_r0x0001083fecec:
      func_0x000108403878();
      func_0x0001083f98fc();
code_r0x0001083fecf8:
      func_0x000108403784();
code_r0x0001083fed04:
      iVar61 = (int)pfVar56;
      FUN_1083fdaa4();
      if (((ulong)param_3 & 1) == 0) goto code_r0x0001083ff774;
      func_0x000108403938();
      if (iVar61 != 0) goto code_r0x0001083fed1c;
code_r0x0001083fed24:
      *(float **)(param_1 + 0x3a) = pfVar55;
      func_0x0001084036f0();
code_r0x0001083fed2c:
      break;
    }
    fVar92 = pfVar52[0xe];
    if (fVar92 != 1.4013e-45) {
      pfVar32 = pfVar56;
      if (fVar92 == 2.8026e-45) goto code_r0x0001083fed74;
      if (fVar92 == 4.2039e-45) {
        lVar48 = **(long **)(pfVar52 + 0xc);
        lVar44 = (*(long **)(pfVar52 + 0xc))[2];
        iVar61 = (int)(char)bVar105;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar50 = param_1;
        func_0x0001084038b0();
        *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
        *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
        *(float *)((long)register0x00000008 + -0xd0) = 0.0;
        *(float *)((long)register0x00000008 + -0xcc) = 0.0;
        *(float **)((long)register0x00000008 + -200) = pfVar52;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
        if (iVar61 == 0x51) {
          func_0x00010840392c();
          iVar61 = (int)pfVar50;
          FUN_108401ae0();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403790();
          FUN_108401ae0();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x00010840359c();
          func_0x0001084037dc();
LAB_1084019ec:
          func_0x0001083f9180();
          return (float *)0x1;
        }
        if (iVar61 == 0x1c) {
          uVar62 = *(undefined8 *)(lVar48 + 0x10);
          func_0x000108403618();
          uVar63 = uVar62;
          func_0x0001084036c8();
          if ((int)uVar63 == 0) {
            return (float *)0x0;
          }
          iVar61 = (int)pfVar50 + 0x30;
          FUN_1083fa660();
          func_0x0001084035d4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403cfc();
          func_0x0001083f91a8();
          func_0x000108403918(pfVar50 + 0xc,0x1d7);
          func_0x000108403910(pfVar50 + 0xc,0x80000000);
          func_0x000108403918(pfVar50 + 0xc,0xfb);
          func_0x0001084038a8();
          FUN_1083f9008(pfVar50 + 0xc,0x106,uVar62);
          return (float *)0x1;
        }
        if (iVar61 == 0x38) {
          iVar61 = (int)*(undefined8 *)(lVar44 + 0x10);
          func_0x000108403634();
          func_0x00010840365c();
          if (iVar61 == 0) {
            func_0x000108403784();
            FUN_108401ae0();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            uVar63 = *(undefined8 *)(lVar48 + 0x10);
            FUN_10840082c(uVar63,&UNK_10df26728);
            if ((int)uVar63 == 0x22d) {
              return (float *)0x0;
            }
            func_0x000108403a44();
            func_0x0001084037dc();
          }
          else {
            iVar61 = (int)*(undefined8 *)(lVar44 + 0x10);
            func_0x000108403634();
            func_0x00010840365c();
            if (iVar61 != 3) {
              return (float *)0x0;
            }
            func_0x0001084035c4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar61 == 0) {
              return (float *)0x0;
            }
            func_0x000108403618(*(undefined8 *)(lVar48 + 0x10));
            func_0x0001084037dc();
          }
          goto LAB_1084019ec;
        }
        if (iVar61 == 0x47) {
          iVar61 = (int)*(undefined8 *)(lVar48 + 0x10);
          func_0x000108403618();
          func_0x0001084036c8();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          func_0x000108403990(4);
          func_0x0001084017e4();
          func_0x0001084035d4();
          if (iVar61 != 0) {
            func_0x000108403990();
            func_0x0001084017e4();
            func_0x0001084035c4();
            if (iVar61 != 0) {
              func_0x0001083f9210(pfVar50 + 0xc);
              func_0x000108403990();
              func_0x0001083f9178();
              return (float *)0x1;
            }
            return (float *)0x0;
          }
          return (float *)0x0;
        }
        if (iVar61 != 0xe) {
          return (float *)0x0;
        }
        func_0x0001084036c8();
        iVar61 = (int)pfVar50;
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403790();
        FUN_108401ae0();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403908();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        func_0x000108403784();
        FUN_108401ae0();
        if (iVar61 == 0) {
          return (float *)0x0;
        }
        plVar41 = *(long **)(lVar48 + 0x10);
        puVar40 = &UNK_10df26708;
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        pfVar52 = *(float **)((long)register0x00000008 + -0xc0);
        param_1 = *(float **)((long)register0x00000008 + -0xb8);
        pfVar56 = *(float **)((long)register0x00000008 + -0xd0);
        pfVar43 = *(float **)((long)register0x00000008 + -200);
        goto FUN_108400898;
      }
      goto code_r0x0001083ff774;
    }
    pfVar55 = (float *)0x0;
    pfVar43 = (float *)**(undefined8 **)(pfVar52 + 0xc);
    pfVar42 = (float *)0x1;
    uVar179 = 1;
    switch(unaff_x24) {
    case 0:
      func_0x000108403624();
      func_0x00010840365c();
      if ((int)pfVar56 != 0) {
code_r0x0001083ff0b4:
        iVar61 = 0x11b;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      }
      func_0x0001084035d4();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
        func_0x000108401aa4(param_1,pfVar56);
        goto code_r0x0001083ff730;
      }
      break;
    case 1:
    case 5:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x31:
      goto LAB_1083ff778;
    case 2:
      pfVar32 = param_1;
code_r0x0001083ff0a0:
      iVar61 = 0x132;
      goto code_r0x0001083ff2ec;
    case 3:
      func_0x000108403668();
      pfVar32 = pfVar56;
code_r0x0001083ff04c:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff060:
code_r0x0001083ff07c:
        func_0x0001084008ec();
        goto code_r0x0001083ff730;
      }
      break;
    case 4:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff078:
        goto code_r0x0001083ff07c;
      }
      break;
    case 6:
      iVar61 = 0x131;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 8:
      param_3 = (float *)0x133;
      pfVar32 = param_1;
code_r0x0001083ff1b4:
      iVar61 = (int)param_3;
      goto code_r0x0001083ff2ec;
    case 0xd:
      param_3 = (float *)0x123;
      pfVar32 = param_1;
code_r0x0001083ff0c8:
      iVar61 = (int)param_3;
      goto code_r0x0001083ff2ec;
    case 0x10:
      iVar61 = 0x12f;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x12:
      func_0x000108403624();
      uVar63 = func_0x000108403a20(0x2900ffffff);
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar63;
      pfVar32 = pfVar56;
      ppuVar45 = extraout_x8_05;
code_r0x0001083ff1cc:
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar45 + 2;
      uVar63 = 0x404ca5dc20000000;
      goto code_r0x0001083ff1e0;
    case 0x1a:
code_r0x0001083ff154:
      iVar61 = 0x138;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x1b:
code_r0x0001083ff16c:
      iVar61 = 0x137;
      pfVar32 = param_1;
      goto code_r0x0001083ff2ec;
    case 0x1f:
    case 0x20:
    case 0x29:
      goto code_r0x0001083fe7fc;
    case 0x21:
      iVar61 = 0x11f;
      pfVar32 = param_1;
code_r0x0001083ff2ec:
      uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
      pfVar31 = pfVar43;
      func_0x0001084038b0();
      pfVar26 = (float *)((long)register0x00000008 + -0xd0);
      *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
      *(float **)((long)register0x00000008 + -200) = pfVar43;
      *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
      *(float **)((long)register0x00000008 + -0xb8) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
      pfVar50 = (float *)((long)register0x00000008 + -0xb0);
      pfVar38 = pfVar32;
      func_0x00010840371c();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      uVar179 = (undefined4)*(undefined8 *)(pfVar31 + 4);
      func_0x000108403618();
      pfVar56 = pfVar32 + 0xc;
      uVar63 = 0x108401b84;
SUB_1083f8fd0:
      if ((iVar61 - 0x10bU < 0x30) &&
         ((1L << ((ulong)(iVar61 - 0x10bU) & 0x3f) & 0xf5f811111111U) != 0)) {
        *(float **)((long)pfVar26 + -0x10) = pfVar50;
        *(undefined8 *)((long)pfVar26 + -8) = uVar63;
        *(int *)((long)pfVar26 + -0x30) = iVar61;
        *(undefined4 *)((long)pfVar26 + -0x2c) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x28) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x24) = uVar179;
        *(undefined4 *)((long)pfVar26 + -0x20) = 0;
        *(undefined4 *)((long)pfVar26 + -0x1c) = 0;
        fVar92 = pfVar56[6];
        *(undefined4 *)((long)pfVar26 + -0x18) = 0;
        *(float *)((long)pfVar26 + -0x14) = fVar92;
        FUN_1083f8ee0();
        return pfVar56;
      }
      return pfVar56;
    case 0x23:
      func_0x000108403668();
      pfVar32 = pfVar56;
code_r0x0001083ff124:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
        func_0x000108403810();
        func_0x0001084035e4();
        func_0x0001084037dc();
code_r0x0001083ff13c:
        pfVar56 = pfVar32;
        uVar179 = SUB84(pfVar42,0);
        iVar61 = 0x11f;
        uVar63 = 0x1083ff144;
        pfVar26 = (float *)((long)register0x00000008 + -0xa0);
        goto SUB_1083f8fd0;
      }
      break;
    case 0x25:
code_r0x0001083fee80:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        bVar28 = bVar105 == 0x25;
        goto code_r0x0001083fee90;
      }
      break;
    case 0x2a:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
code_r0x0001083ff0f4:
        pfVar32 = *(float **)(pfVar43 + 4);
        FUN_10840082c(pfVar32,&UNK_10df266e8);
        uVar29 = (int)pfVar32 == 0x22d;
code_r0x0001083ff10c:
        uVar179 = SUB84(pfVar42,0);
        iVar61 = (int)pfVar43;
        if (!(bool)uVar29) {
          func_0x000108403a44();
          func_0x0001084037dc();
          goto code_r0x0001083ff448;
        }
      }
      break;
    case 0x2b:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        uVar63 = *(undefined8 *)(pfVar43 + 4);
        func_0x000108403764(uVar63);
        func_0x0001083f9220(param_1 + 0xc,uVar63);
        goto code_r0x0001083ff730;
      }
      break;
    case 0x2f:
      func_0x000108403668();
      if ((int)pfVar56 == 0) break;
      pfVar32 = *(float **)(pfVar43 + 4);
code_r0x0001083ff19c:
      goto code_r0x0001083ff4bc;
    case 0x32:
      func_0x000108403668();
      if ((int)pfVar56 != 0) {
        func_0x0001084035e4();
        pfVar32 = pfVar56;
code_r0x0001083ff184:
        uVar179 = SUB84(pfVar42,0);
        func_0x0001084037dc();
        iVar61 = 0x13a;
        goto code_r0x0001083ff448;
      }
      break;
    case 0x33:
      func_0x000108403668();
      pfVar32 = pfVar56;
      if ((int)pfVar56 != 0) {
code_r0x0001083ff08c:
        uVar179 = SUB84(pfVar42,0);
        func_0x0001084035e4();
        func_0x0001084037dc();
        iVar61 = 0x139;
        goto code_r0x0001083ff448;
      }
      break;
    default:
      switch(bVar105) {
      case 0x4d:
        func_0x000108403624();
        *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
        func_0x000108403a20();
        *(long *)((long)register0x00000008 + -0x80) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x70) = pfVar56;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 0.0;
        func_0x00010840379c();
        (**(code **)(extraout_x8_00 + 0x50))();
        *(float *)((long)register0x00000008 + -0x98) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x94) = 5.74532e-44;
        *(long *)((long)register0x00000008 + -0xa0) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x90) = pfVar56;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_1084017f0(param_1,0xe,pfVar43,(float *)((long)register0x00000008 + -0x80),
                      (float *)((long)register0x00000008 + -0xa0));
        pfVar55 = param_1;
        goto LAB_1083ff778;
      case 0x4e:
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x000108403624();
          func_0x00010840365c();
          if ((int)pfVar56 == 0) {
            func_0x000108403624();
            func_0x000108403850(0x2900ffffff);
            *(float **)((long)register0x00000008 + -0x70) = pfVar56;
            *(float *)((long)register0x00000008 + -0x68) = -3.689349e+19;
            *(float *)((long)register0x00000008 + -100) = 122879.99;
            func_0x000108403804();
            if (((int)pfVar56 == 0) || (func_0x000108403908(), ((ulong)pfVar56 & 1) == 0)) break;
          }
          func_0x000108403624();
          unaff_s8 = 0xffffff;
          unaff_00005104 = 0x29;
          *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
          *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
          pfVar52 = (float *)&UNK_110a459d0;
          *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110a459e0;
          *(float **)((long)register0x00000008 + -0x70) = pfVar56;
          *(float *)((long)register0x00000008 + -0x68) = 0.0;
          *(float *)((long)register0x00000008 + -100) = -1.875;
          func_0x000108403804();
          pfVar32 = pfVar56;
          if (((ulong)pfVar56 & 1) != 0) goto code_r0x0001083ff294;
        }
        break;
      case 0x4f:
      case 0x51:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto LAB_1083ff778;
      case 0x50:
        iVar61 = 0x12e;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x52:
        iVar61 = 0x135;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x57:
        iVar61 = 0x130;
        pfVar32 = param_1;
        goto code_r0x0001083ff2ec;
      case 0x5c:
        goto code_r0x0001083fee80;
      case 0x5d:
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x00010840379c();
          func_0x000108403bbc();
          func_0x000108403764(*(undefined8 *)(pfVar43 + 4));
          func_0x0001084039e4();
          func_0x0001083fa3ec();
          goto code_r0x0001083ff730;
        }
        break;
      case 0x5e:
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x0001084035e4();
          func_0x0001084037dc();
          iVar61 = 0x113;
          uVar63 = 0x1083ff31c;
          goto SUB_1083f8fd0;
        }
        break;
      case 0x5f:
        goto code_r0x0001083fe7fc;
      default:
        if (bVar105 != 0x3b) {
          if (bVar105 == 0x3d) {
            uVar30 = 7;
            pfVar50 = pfVar43;
            goto code_r0x0001083fee34;
          }
          if (bVar105 == 0x45) {
            func_0x000108403624();
            uVar62 = func_0x000108403a20(0x2900ffffff);
            ppuVar45 = extraout_x8_04;
            goto code_r0x0001083fee0c;
          }
          goto LAB_1083ff778;
        }
        func_0x000108403668();
        if ((int)pfVar56 != 0) {
          func_0x0001084035e4();
          func_0x0001084039e4();
          FUN_1083f9e48();
          if (1 < (int)pfVar56) {
            func_0x0001084039e4();
            FUN_1083f9e48();
            func_0x0001084039e4();
            func_0x0001083f91a8();
            iVar61 = 0x135;
            uVar179 = 1;
            uVar63 = 0x1083ff37c;
            pfVar26 = (float *)((long)register0x00000008 + -0xa0);
            pfVar56 = param_1 + 0xc;
            goto SUB_1083f8fd0;
          }
          func_0x000108401aa4(param_1,1);
          plVar41 = *(long **)(pfVar43 + 4);
          puVar40 = &UNK_10df266b8;
          pfVar52 = pfVar56;
          pfVar56 = pfVar55;
          goto code_r0x0001083ff6e0;
        }
      }
    }
code_r0x0001083ff774:
    pfVar55 = (float *)0x0;
    goto LAB_1083ff778;
  case 5.60519e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) != 0) {
      func_0x000108403784();
      FUN_1083fda24();
      goto code_r0x0001083fecc4;
    }
    goto code_r0x0001083ff774;
  case 5.74532e-44:
    pfVar56 = *(float **)(pfVar52 + 4);
    uVar63 = 0x1083feb64;
    uVar62 = func_0x00010840365c();
    bVar28 = (uint)pfVar56 == 3;
    if (3 < (uint)pfVar56) goto code_r0x0001083ff7a0;
    ppuVar45 = (undefined **)((ulong)pfVar56 & 0xff);
    puVar40 = &UNK_10df26544;
    lVar48 = (ulong)*(byte *)((long)ppuVar45 + 0x10df26544) * 4 + 0x1083feb88;
    pfVar32 = pfVar56;
    pfVar26 = pfVar56;
    pfVar31 = pfVar52;
    pfVar57 = pfVar38;
    switch(ppuVar45) {
    case (undefined **)0x0:
code_r0x0001083feea4:
code_r0x0001083feea8:
      FUN_1083fa660();
      goto code_r0x0001083ff730;
    case (undefined **)0x1:
    case (undefined **)0x2:
    case (undefined **)0x4:
    case (undefined **)0x5:
    case (undefined **)0x14:
    case (undefined **)0x15:
    case (undefined **)0x7e:
    case (undefined **)0x7f:
    case (undefined **)0x80:
    case (undefined **)0x81:
    case (undefined **)0x92:
    case (undefined **)0x93:
    case (undefined **)0xa9:
    case (undefined **)0xcc:
    case (undefined **)0xcd:
    case (undefined **)0xce:
    case (undefined **)0xcf:
    case (undefined **)0xd6:
    case (undefined **)0xd7:
    case (undefined **)0xd9:
    case (undefined **)0xdb:
    case (undefined **)0xdf:
    case (undefined **)0xe1:
    case (undefined **)0xe3:
    case (undefined **)0xe5:
    case (undefined **)0xe9:
    case (undefined **)0xeb:
    case (undefined **)0xef:
    case (undefined **)0xf0:
    case (undefined **)0xf4:
    case (undefined **)0xf6:
    case (undefined **)0xfe:
    case (undefined **)0xf:
    case (undefined **)0x11:
    case (undefined **)0x13:
    case (undefined **)0x17:
    case (undefined **)0x27:
    case (undefined **)0x29:
    case (undefined **)0x2f:
    case (undefined **)0x33:
    case (undefined **)0x35:
    case (undefined **)0x3b:
    case (undefined **)0x3f:
    case (undefined **)0x8b:
    case (undefined **)0xc7:
    case (undefined **)0xdd:
    case (undefined **)0xe7:
    case (undefined **)0xed:
code_r0x0001083feb90:
      pfVar55 = (float *)0x1;
code_r0x0001083feb94:
code_r0x0001083feb98:
code_r0x0001083feec4:
      func_0x000108403910();
      goto LAB_1083ff778;
    case (undefined **)0x3:
      pfVar55 = (float *)0x1;
      goto code_r0x0001083feec4;
    default:
      goto code_r0x0001083feb90;
    case (undefined **)0xe:
      goto code_r0x0001083fed48;
    case (undefined **)0x10:
code_r0x0001083fed74:
      ppuVar45 = *(undefined ***)(pfVar52 + 0xc);
      pfVar55 = (float *)0x0;
code_r0x0001083fed78:
      iVar61 = (int)pfVar32;
      pfVar38 = (float *)*ppuVar45;
      pfVar52 = (float *)ppuVar45[1];
      iVar69 = (int)unaff_x24;
      ppuVar45 = (undefined **)(ulong)(iVar69 - 0x27U);
      if (iVar69 - 0x27U < 0x16) goto code_r0x0001083fed88;
      if (iVar69 - 0x11U < 8) {
        lVar48 = (ulong)*(ushort *)(&UNK_10df26548 + (ulong)(iVar69 - 0x11U) * 2) * 4 + 0x1083feee4;
        pfVar56 = pfVar32;
        goto code_r0x0001083feee0;
      }
      if (iVar69 == 0x53) {
        func_0x000108403c44();
        FUN_108401ae0();
        if (((iVar61 == 0) || (func_0x0001084035c4(), iVar61 == 0)) ||
           (func_0x000108403908(), iVar61 == 0)) goto code_r0x0001083ff774;
        pfVar55 = *(float **)(pfVar52 + 4);
        func_0x000108403634();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = pfVar55;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if ((int)pfVar55 != 0) {
          func_0x00010840359c();
          func_0x0001084037dc();
code_r0x0001083ff650:
          FUN_1083f9008();
        }
        goto LAB_1083ff778;
      }
      pfVar32 = param_1;
      if (iVar69 == 0x44) goto code_r0x0001083ff660;
      if (iVar69 != 0x46) {
        bVar28 = iVar69 == 8;
        goto code_r0x0001083fee70;
      }
      iVar61 = (int)*(undefined8 *)(pfVar38 + 4);
      func_0x000108403618();
      func_0x000108403c44();
      func_0x00010840371c();
      if ((iVar61 != 0) && (func_0x0001084035c4(), iVar61 != 0)) {
        func_0x000108403810();
        func_0x000108403878();
        func_0x0001083f91a8();
        FUN_1083fa660(param_1 + 0xc);
        pfVar55 = (float *)0x1;
        func_0x000108403ee0();
        func_0x000108403918();
        func_0x0001084038a8();
        func_0x000108403ee0();
        FUN_1083f9008();
        goto code_r0x0001083ff650;
      }
      goto code_r0x0001083ff774;
    case (undefined **)0x12:
      goto code_r0x0001083fed3c;
    case (undefined **)0x16:
    case (undefined **)0x42:
    case (undefined **)0x4a:
    case (undefined **)0x4e:
    case (undefined **)0x52:
    case (undefined **)0x54:
    case (undefined **)0x56:
    case (undefined **)0x58:
    case (undefined **)0x5c:
    case (undefined **)0x5e:
    case (undefined **)0x62:
    case (undefined **)0x66:
    case (undefined **)0x68:
    case (undefined **)0x6a:
    case (undefined **)0x6c:
    case (undefined **)0x6e:
    case (undefined **)0x70:
    case (undefined **)0x72:
    case (undefined **)0x78:
    case (undefined **)0x7a:
    case (undefined **)0x7c:
    case (undefined **)0x84:
    case (undefined **)0x88:
    case (undefined **)0x8c:
    case (undefined **)0x8e:
    case (undefined **)0x90:
    case (undefined **)0x98:
    case (undefined **)0x9a:
    case (undefined **)0x9c:
    case (undefined **)0xa0:
    case (undefined **)0xa2:
    case (undefined **)0xac:
    case (undefined **)0xb0:
    case (undefined **)0xb4:
    case (undefined **)0xb6:
    case (undefined **)0xb8:
    case (undefined **)0xba:
    case (undefined **)0xbe:
    case (undefined **)0xc0:
    case (undefined **)0xc2:
    case (undefined **)0xc4:
      goto code_r0x0001083fef04;
    case (undefined **)0x18:
    case (undefined **)0x1a:
    case (undefined **)0x1c:
    case (undefined **)0x1e:
    case (undefined **)0x20:
    case (undefined **)0x22:
    case (undefined **)0x24:
    case (undefined **)0x2a:
    case (undefined **)0x2c:
    case (undefined **)0x30:
    case (undefined **)0x36:
    case (undefined **)0x38:
    case (undefined **)0x3c:
      goto code_r0x0001083fed60;
    case (undefined **)0x26:
      goto code_r0x0001083fef1c;
    case (undefined **)0x28:
      goto code_r0x0001083feeec;
    case (undefined **)0x2e:
code_r0x0001083feee0:
      iVar61 = (int)pfVar56;
      switch(lVar48) {
      case 0x1083feee4:
        *(float **)((long)register0x00000008 + -0x80) = param_1;
        func_0x000108403dd8();
code_r0x0001083feeec:
        fVar92 = param_1[0x41];
        pfVar55 = (float *)(ulong)(uint)fVar92;
        *(float *)((long)register0x00000008 + -0x78) = SUB84(pfVar56,0);
        *(float *)((long)register0x00000008 + -0x74) = fVar92;
        pfVar52 = pfVar56;
code_r0x0001083feef8:
        if ((int)pfVar55 != (int)pfVar56) {
          func_0x000108403b44();
        }
code_r0x0001083fef04:
        func_0x000108403c44();
        func_0x00010840371c();
        if (((ulong)pfVar56 & 1) == 0) {
code_r0x0001083ff6f8:
          pfVar55 = (float *)0x0;
        }
        else {
          if (param_1[0x41] != SUB84(pfVar55,0)) {
code_r0x0001083fef1c:
            func_0x000108403920();
          }
code_r0x0001083fef20:
          func_0x000108403828();
          ppuVar45 = (undefined **)0x201;
code_r0x0001083fef28:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar45;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
code_r0x0001083fef34:
          fVar92 = param_1[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          bVar28 = fVar92 == SUB84(pfVar52,0);
          pfVar32 = pfVar56;
          pfVar43 = pfVar52;
          pfVar55 = (float *)(ulong)(uint)fVar92;
code_r0x0001083fef40:
          pfVar56 = pfVar55;
          if (!bVar28) {
            func_0x000108403b44();
          }
          func_0x000108403e24();
          func_0x0001084036b4();
          fVar92 = SUB84(pfVar56,0);
          if (param_1[0x41] != fVar92) {
            func_0x000108403920();
          }
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          if (fVar92 != SUB84(pfVar43,0)) {
            func_0x000108403b44();
          }
          func_0x0001084035c4();
code_r0x0001083fef74:
          if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6f8;
          if (param_1[0x41] != SUB84(pfVar56,0)) {
            func_0x000108403920();
          }
          func_0x000108403828();
code_r0x0001083fef8c:
          func_0x000108403e24();
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          pfVar52 = (float *)(ulong)(uint)param_1[0x41];
code_r0x0001083fefa0:
          *(float *)((long)register0x00000008 + -0x74) = SUB84(pfVar52,0);
          uVar29 = SUB84(pfVar52,0) == SUB84(pfVar43,0);
          if (!(bool)uVar29) {
            func_0x000108403b44();
          }
          ppuVar45 = (undefined **)0x201;
code_r0x0001083fefb4:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar45;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          func_0x000108403e44();
code_r0x0001083fefcc:
          if (!(bool)uVar29) {
            func_0x000108403e18();
          }
          func_0x000108403828();
          func_0x000108403b3c(param_1 + 0xc,0x170);
code_r0x0001083fefe4:
          fVar92 = param_1[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar92;
          uVar29 = fVar92 == SUB84(pfVar43,0);
          if (!(bool)uVar29) {
            func_0x000108403b44();
          }
code_r0x0001083feff8:
          func_0x0001083f9178(param_1 + 0xc,3);
          func_0x000108403e44();
          if (!(bool)uVar29) {
code_r0x0001083ff00c:
            func_0x000108403e18();
          }
          pfVar55 = (float *)0x1;
        }
        FUN_1083fcee8((float *)((long)register0x00000008 + -0x80));
        goto LAB_1083ff778;
      case 0x1083ff498:
        puVar40 = &UNK_10df26668;
        pfVar31 = pfVar52;
        break;
      case 0x1083ff4a4:
        func_0x000108403c44();
        FUN_108400bd4();
        if (iVar61 == 0) goto code_r0x0001083ff774;
        pfVar32 = *(float **)(pfVar38 + 4);
code_r0x0001083ff4bc:
        func_0x000108403618();
        func_0x000108401a54(param_1,pfVar32);
        goto code_r0x0001083ff730;
      case 0x1083ff4d0:
        func_0x000108403c44();
        func_0x00010840371c();
        if ((iVar61 == 0) || (func_0x0001084035c4(), iVar61 == 0)) goto code_r0x0001083ff774;
        func_0x000108403618(*(undefined8 *)(pfVar38 + 4));
        func_0x000108403b20();
        func_0x0001083f91a8();
        goto code_r0x0001083ff730;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0x32:
      goto code_r0x0001083fef34;
    case (undefined **)0x34:
      goto code_r0x0001083fef28;
    case (undefined **)0x3a:
      goto code_r0x0001083feef8;
    case (undefined **)0x3e:
      goto code_r0x0001083fef40;
    case (undefined **)0x40:
      goto code_r0x0001083fec34;
    case (undefined **)0x43:
    case (undefined **)0x4b:
    case (undefined **)0x4f:
    case (undefined **)0x53:
    case (undefined **)0x55:
    case (undefined **)0x57:
    case (undefined **)0x59:
    case (undefined **)0x5d:
    case (undefined **)0x5f:
    case (undefined **)0x63:
    case (undefined **)0x67:
    case (undefined **)0x69:
    case (undefined **)0x6b:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x73:
    case (undefined **)0x79:
    case (undefined **)0x7b:
    case (undefined **)0x7d:
    case (undefined **)0x85:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
    case (undefined **)0x99:
    case (undefined **)0x9b:
    case (undefined **)0x9d:
    case (undefined **)0xa1:
    case (undefined **)0xa3:
    case (undefined **)0xad:
    case (undefined **)0xb1:
    case (undefined **)0xb5:
    case (undefined **)0xb7:
    case (undefined **)0xb9:
    case (undefined **)0xbb:
    case (undefined **)0xbf:
    case (undefined **)0xc1:
    case (undefined **)0xc3:
    case (undefined **)0xc5:
      goto code_r0x0001083feb94;
    case (undefined **)0x44:
      goto code_r0x0001083fec28;
    case (undefined **)0x46:
      goto code_r0x0001083febd4;
    case (undefined **)0x48:
      goto code_r0x0001083febf0;
    case (undefined **)0x4c:
      goto code_r0x0001083fecec;
    case (undefined **)0x50:
      goto code_r0x0001083fed38;
    case (undefined **)0x5a:
    case (undefined **)0xdc:
    case (undefined **)0xec:
      goto code_r0x0001083fec4c;
    case (undefined **)0x60:
      goto code_r0x0001083febc8;
    case (undefined **)0x64:
      goto code_r0x0001083fed44;
    case (undefined **)0x74:
      goto code_r0x0001083fece0;
    case (undefined **)0x76:
      goto code_r0x0001083fecf8;
    case (undefined **)0x82:
      goto code_r0x0001083fed2c;
    case (undefined **)0x86:
    case (undefined **)0xd8:
      goto code_r0x0001083fecac;
    case (undefined **)0x8a:
    case (undefined **)0xc6:
code_r0x0001083fee0c:
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar62;
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar45 + 2;
      uVar63 = 0x3f91df46a0000000;
      pfVar32 = pfVar56;
code_r0x0001083ff1e0:
      *(float **)((long)register0x00000008 + -0x70) = pfVar32;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar63;
code_r0x0001083ff1e8:
      func_0x000108403790();
      FUN_108400bd4();
      pfVar55 = pfVar32;
      goto LAB_1083ff778;
    case (undefined **)0x94:
      goto code_r0x0001083fec78;
    case (undefined **)0x96:
      goto code_r0x0001083fec58;
    case (undefined **)0x9e:
code_r0x0001083fed1c:
      FUN_1083ffef4();
      goto code_r0x0001083fed24;
    case (undefined **)0xa4:
      goto code_r0x0001083fed04;
    case (undefined **)0xa6:
code_r0x0001083fec10:
      if ((int)ppuVar45 != 0xe) goto code_r0x0001083ff3d8;
    case (undefined **)0x6:
    case (undefined **)0x8:
    case (undefined **)0xa:
    case (undefined **)0xc:
      func_0x0001083f926c();
      func_0x000108403bec();
code_r0x0001083fec28:
      FUN_1083fae64(param_1 + 0xc,*pfVar43);
code_r0x0001083fec34:
code_r0x0001083ff3d8:
      func_0x000108403bec();
      goto code_r0x0001083ff730;
    case (undefined **)0xa8:
      goto code_r0x0001083fec40;
    case (undefined **)0xaa:
      goto code_r0x0001083fedcc;
    case (undefined **)0xae:
    case (undefined **)0xd2:
code_r0x0001083fed88:
      puVar40 = &UNK_10df26558;
      lVar48 = 0x1083feda0;
      pfVar31 = pfVar52;
      pfVar57 = pfVar38;
    case (undefined **)0xc8:
      pfVar38 = pfVar31;
      pfVar52 = pfVar31;
      switch(lVar48 + (ulong)*(ushort *)(puVar40 + (long)ppuVar45 * 2) * 4) {
      case 0x1083feda0:
        puVar40 = &UNK_10df266d8;
        pfVar52 = pfVar57;
        break;
      case 0x1083ff4f8:
        puVar40 = &UNK_10df266a8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff504:
        puVar40 = &UNK_10df266c8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff510:
        puVar40 = &UNK_10df26718;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff51c:
        puVar40 = &UNK_10df266c8;
        pfVar52 = pfVar57;
        break;
      case 0x1083ff534:
        puVar40 = &UNK_10df266d8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff540:
        puVar40 = &UNK_10df26708;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff54c:
        puVar40 = &UNK_10df266f8;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff558:
        puVar40 = &UNK_10df26678;
        pfVar38 = pfVar57;
        break;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0xb2:
code_r0x0001083fee70:
      pfVar56 = pfVar55;
      pfVar32 = param_1;
      pfVar55 = pfVar56;
      if (bVar28) {
code_r0x0001083fee7c:
        pfVar55 = pfVar56;
code_r0x0001083ff660:
        uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar31 = pfVar52;
        func_0x0001084038b0();
        *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
        *(float **)((long)register0x00000008 + -200) = pfVar43;
        *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
        *(float **)((long)register0x00000008 + -0xb8) = param_1;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
        pfVar50 = pfVar32;
        func_0x00010840371c();
        if ((int)pfVar50 == 0) {
          return pfVar50;
        }
        FUN_108401ae0(pfVar32,pfVar31,*(undefined8 *)(pfVar38 + 4));
        if ((int)pfVar32 != 0) {
          func_0x0001084035e4();
          func_0x000108403b50();
          return (float *)0x1;
        }
        return pfVar32;
      }
      goto LAB_1083ff778;
    case (undefined **)0xbc:
      goto code_r0x0001083fedc0;
    case (undefined **)0xca:
code_r0x0001083fee90:
      if (bVar28) {
        func_0x0001083faec8();
      }
      else {
        func_0x0001083fae94();
      }
      goto code_r0x0001083ff730;
    case (undefined **)0xd0:
code_r0x0001083fedc8:
      ppuVar45 = *(undefined ***)(pfVar52 + 6);
code_r0x0001083fedcc:
      func_0x000108403618(ppuVar45[2]);
      func_0x000108403900();
      goto code_r0x0001083ff730;
    case (undefined **)0xd4:
    case (undefined **)0xe4:
      goto code_r0x0001083fedb0;
    case (undefined **)0xda:
      goto code_r0x0001083fec90;
    case (undefined **)0xde:
      goto code_r0x0001083febd0;
    case (undefined **)0xe0:
      goto code_r0x0001083fec6c;
    case (undefined **)0xe2:
      goto code_r0x0001083fecc4;
    case (undefined **)0xe6:
      goto code_r0x0001083fec50;
    case (undefined **)0xe8:
      goto code_r0x0001083fef20;
    case (undefined **)0xea:
      bVar105 = *(byte *)(pfVar52 + 8);
      pfVar43 = *(float **)(pfVar52 + 6);
      goto code_r0x0001083fee30;
    case (undefined **)0xee:
      goto code_r0x0001083febac;
    case (undefined **)0xf1:
      goto code_r0x0001083feba0;
    case (undefined **)0xf3:
      goto code_r0x0001083feb98;
    case (undefined **)0xf5:
    case (undefined **)0xf7:
    case (undefined **)0xf8:
    case (undefined **)0xf9:
    case (undefined **)0xfa:
    case (undefined **)0xfb:
    case (undefined **)0xfc:
    case (undefined **)0xfd:
    case (undefined **)0xff:
      goto code_r0x0001083feca0;
    }
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar50 = param_1;
    func_0x0001084038b0(param_1,puVar40,pfVar38,pfVar52);
    *(float **)((long)register0x00000008 + -0xd0) = pfVar55;
    *(float **)((long)register0x00000008 + -200) = pfVar43;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar31;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    pfVar31 = pfVar50;
    func_0x00010840371c();
    if (((int)pfVar31 == 0) ||
       (FUN_108401ae0(pfVar50,pfVar52,*(undefined8 *)(pfVar38 + 4)), (int)pfVar50 == 0)) {
      return (float *)0x0;
    }
    plVar41 = *(long **)(pfVar38 + 4);
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    pfVar52 = *(float **)((long)register0x00000008 + -0xc0);
    param_1 = *(float **)((long)register0x00000008 + -0xb8);
    pfVar56 = *(float **)((long)register0x00000008 + -0xd0);
    pfVar43 = *(float **)((long)register0x00000008 + -200);
FUN_108400898:
    *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
    *(float **)((long)register0x00000008 + -200) = pfVar43;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    plVar33 = plVar41;
    FUN_10840082c(plVar41,puVar40);
    if ((int)plVar33 != 0x22d) {
      (**(code **)(*plVar41 + 0x80))(plVar41);
      func_0x000108403b50();
    }
    return (float *)(ulong)((int)plVar33 != 0x22d);
  case 6.16571e-44:
    func_0x000108403e04((float *)((long)register0x00000008 + -0xa0),param_1,
                        *(undefined8 *)(pfVar52 + 6));
    pfVar43 = *(float **)((long)register0x00000008 + -0xa0);
    if (pfVar43 != (float *)0x0) {
code_r0x0001083fea28:
      func_0x000108403790();
      FUN_1083fda24();
      if (((ulong)pfVar32 & 1) == 0) {
code_r0x0001083ff6b4:
        pfVar56 = (float *)0x0;
      }
      else {
        func_0x000108403640();
        (*extraout_x8_01)();
        func_0x000108403810();
        func_0x000108403778();
        (**(code **)(extraout_x8_02 + 0x50))();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = pfVar32;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        if (*(char *)(pfVar52 + 8) == '!') {
          func_0x000108403908();
        }
        else {
          if (*(char *)(pfVar52 + 8) != ' ') goto code_r0x0001083ff7a0;
          func_0x000108403908();
        }
        iVar61 = (int)pfVar32;
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        func_0x000108403790();
        func_0x0001083fda64();
        if (iVar61 == 0) goto code_r0x0001083ff6b4;
        func_0x000108403640();
        (*extraout_x8_07)();
        func_0x000108403900();
        pfVar56 = (float *)0x1;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pfVar43 + 8);
      goto code_r0x0001083feccc;
    }
    goto code_r0x0001083ff774;
  case 6.30584e-44:
    bVar105 = *(byte *)(pfVar52 + 6);
    pfVar43 = *(float **)(pfVar52 + 8);
code_r0x0001083fee30:
    uVar30 = (uint)bVar105;
    pfVar50 = pfVar52;
code_r0x0001083fee34:
    uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar38 = param_1;
    func_0x0001084038b0();
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = pfVar50;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
    if ((uVar30 & 0xff) == 1) {
      func_0x0001084035c4();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      iVar61 = (int)*(undefined8 *)(pfVar43 + 4);
      func_0x000108403634();
      func_0x00010840365c();
      func_0x00010840359c();
      func_0x0001084037dc();
      if (iVar61 != 0) {
        FUN_1083f9ba0();
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x000108401ca4;
      }
    }
    else {
      if (uVar30 != 7) {
        if (uVar30 == 0x21) {
          fVar92 = pfVar43[2];
          pfVar50 = *(float **)(pfVar43 + 4);
          func_0x000108403634();
          func_0x000108403a20();
          *(float *)((long)register0x00000008 + -0xe8) = fVar92;
          *(float *)((long)register0x00000008 + -0xe4) = 5.74532e-44;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_34 + 0x10;
          uVar63 = 0xbff0000000000000;
code_r0x000108401c4c:
          *(float **)((long)register0x00000008 + -0xe0) = pfVar50;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar63;
          func_0x000108403784();
          FUN_108400bd4();
          return pfVar50;
        }
        if (uVar30 == 0x20) {
          pfVar50 = *(float **)(pfVar43 + 4);
          func_0x000108403634();
          uVar63 = func_0x000108403a20(0x2900ffffff);
          *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar63;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_33 + 0x10;
          uVar63 = 0x3ff0000000000000;
          goto code_r0x000108401c4c;
        }
        if (uVar30 != 0xb) {
          return (float *)0x0;
        }
      }
      func_0x0001084035c4();
      if ((int)pfVar38 == 0) {
        return pfVar38;
      }
      func_0x00010840359c();
      func_0x0001084037dc();
    }
    FUN_1083f9ba0();
    func_0x00010840359c();
    func_0x0001084037dc();
code_r0x000108401ca4:
    FUN_1083f9008();
    return (float *)0x1;
  case 6.5861e-44:
    pfVar56 = pfVar52 + 8;
code_r0x0001083fec40:
    FUN_1083fd9f0();
    pfVar55 = pfVar56;
code_r0x0001083fec4c:
    param_3 = *(float **)(pfVar52 + 6);
code_r0x0001083fec50:
    if ((int)pfVar56 == 0) {
code_r0x0001083fedac:
      func_0x000108403650();
code_r0x0001083fedb0:
      if ((int)pfVar56 == 0) goto code_r0x0001083ff774;
      uVar30 = 0;
      if (*(char *)(pfVar52 + 8) == '\0') {
        uVar30 = (uint)pfVar55;
      }
      ppuVar45 = (undefined **)(ulong)uVar30;
code_r0x0001083fedc0:
      if ((int)ppuVar45 == 1) goto code_r0x0001083fedc8;
      pfVar32 = *(float **)(*(long *)(pfVar52 + 6) + 0x10);
code_r0x0001083ff020:
      func_0x000108403618();
      FUN_1083f9ce0(param_1 + 0xc,pfVar32,pfVar52 + 8,*(undefined1 *)(pfVar52 + 9));
code_r0x0001083ff038:
      break;
    }
    ppuVar45 = (undefined **)(ulong)(uint)param_3[3];
code_r0x0001083fec58:
    if ((int)ppuVar45 != 0x32) goto code_r0x0001083fedac;
code_r0x0001083fec6c:
    goto code_r0x0001083fed68;
  case 6.72623e-44:
code_r0x0001083fec90:
    param_3 = *(float **)(pfVar52 + 6);
    pfVar42 = *(float **)(pfVar52 + 8);
    pfVar50 = *(float **)((long)register0x00000008 + -0x10);
    uVar63 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar56 = param_1;
code_r0x0001083feca0:
    func_0x0001084038b0();
code_r0x0001083fecac:
    *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
    *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
    *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = pfVar52;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = param_1;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar63;
    pfVar50 = param_3;
    FUN_1083d6c74();
    fVar92 = SUB84(pfVar50,0);
    if (fVar92 == 0.0) {
      func_0x000108403d64();
      pfVar38 = pfVar42;
      FUN_1083d64e8();
      pfVar31 = pfVar42;
      FUN_1083d6eb4();
      pfVar56[0x10] = (float)((int)pfVar56[0x10] + 1);
      fVar92 = SUB84(pfVar31,0);
      if ((((int)pfVar50 == 0) && ((int)pfVar38 == 0)) && (fVar92 != 0.0)) {
        FUN_108401ae0(pfVar56,param_3,*(undefined8 *)(pfVar42 + 4));
        iVar61 = (int)pfVar56;
        if (((iVar61 != 0) && (func_0x0001084035d4(), iVar61 != 0)) &&
           (func_0x0001084035c4(), iVar61 != 0)) {
          func_0x00010840359c();
          func_0x0001084037dc();
          func_0x0001083f9180();
          return (float *)0x1;
        }
        return (float *)0x0;
      }
      func_0x000108403c60();
      *(float **)((long)register0x00000008 + -0x110) = pfVar56;
      func_0x000108403dd8();
      fVar118 = pfVar56[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar92;
      *(float *)((long)register0x00000008 + -0x104) = fVar118;
      if (fVar118 != fVar92) {
        func_0x000108403920();
      }
      func_0x0001083fa1f4(pfVar56 + 0xc);
      pfVar38 = pfVar56;
      func_0x00010840371c(pfVar56,param_3);
      if (((ulong)pfVar38 & 1) != 0) {
        if (pfVar56[0x41] != fVar118) {
          pfVar56[0x41] = fVar118;
          pfVar56[0x12] = fVar118;
        }
        if (((ulong)pfVar50 & 1) == 0) {
          func_0x0001084035d4();
          if ((int)pfVar38 != 0) {
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            if (fVar118 != fVar92) {
              func_0x000108403920();
            }
            func_0x000108403d88();
            if (pfVar56[0x41] != fVar118) {
              func_0x000108403b44();
            }
            if (((ulong)pfVar31 & 1) == 0) {
              func_0x000108403cfc();
              func_0x0001083f98fc();
            }
            func_0x0001084035c4();
            if ((int)pfVar38 != 0) {
              func_0x000108403640();
              (*extraout_x8_32)();
              FUN_108400004(pfVar56 + 0xc,pfVar38);
              func_0x000108403cfc();
              func_0x0001083f9780();
              goto LAB_108401518;
            }
          }
        }
        else {
          *(float *)((long)register0x00000008 + -0x104) = fVar118;
          if (fVar118 != fVar92) {
            func_0x000108403920();
          }
          iVar61 = (int)pfVar38;
          func_0x000108403d88();
          if (pfVar56[0x41] != fVar118) {
            pfVar56[0x41] = fVar118;
            pfVar56[0x12] = fVar118;
          }
          func_0x0001084035c4();
          if (iVar61 != 0) {
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            if (fVar118 != fVar92) {
              func_0x000108403920();
            }
            pfVar50 = pfVar56 + 0xc;
            func_0x0001084002a8();
            if (pfVar56[0x41] != fVar118) {
              pfVar56[0x41] = fVar118;
              pfVar56[0x12] = fVar118;
            }
            func_0x0001084035d4();
            if ((int)pfVar50 != 0) {
              func_0x000108403640();
              (*extraout_x8_31)();
              FUN_108400004(pfVar56 + 0xc,pfVar50);
LAB_108401518:
              fVar118 = pfVar56[0x41];
              *(float *)((long)register0x00000008 + -0x104) = fVar118;
              uVar29 = fVar118 == fVar92;
              if (!(bool)uVar29) {
                func_0x000108403920();
              }
              func_0x0001084036e4();
              func_0x0001084002b0(pfVar56 + 0xc);
              func_0x000108403e44();
              if (!(bool)uVar29) {
                func_0x000108403e18();
              }
              func_0x000108403840();
              goto LAB_108401548;
            }
          }
        }
      }
    }
    else {
      fVar118 = pfVar56[0x10];
      pfVar56[0x10] = (float)((int)fVar118 + 2);
      *(float **)((long)register0x00000008 + -0x110) = pfVar56;
      func_0x000108403dd8();
      fVar157 = pfVar56[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar92;
      *(float *)((long)register0x00000008 + -0x104) = fVar157;
      if (fVar157 != fVar92) {
        func_0x000108403920();
      }
      pfVar50 = pfVar56;
      func_0x00010840371c(pfVar56,param_3);
      if (((ulong)pfVar50 & 1) != 0) {
        pfVar50 = pfVar56 + 0xc;
        FUN_1083f994c(pfVar50,0xffffffff,fVar118);
        iVar61 = (int)pfVar50;
        if (pfVar56[0x41] != fVar157) {
          pfVar56[0x41] = fVar157;
          pfVar56[0x12] = fVar157;
        }
        func_0x0001084035c4();
        if (iVar61 != 0) {
          pfVar50 = pfVar56 + 0xc;
          func_0x0001083f97f0(pfVar50,(int)fVar118 + 1);
          iVar61 = (int)pfVar50;
          func_0x000108403640();
          (*extraout_x8_30)();
          func_0x000108403900();
          func_0x000108403cfc();
          func_0x0001083f9780();
          func_0x0001084035d4();
          if (iVar61 != 0) {
            func_0x0001083f9780(pfVar56 + 0xc,(int)fVar118 + 1);
            fVar118 = pfVar56[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar118;
            uVar29 = fVar118 == fVar92;
            if (!(bool)uVar29) {
              func_0x000108403920();
            }
            func_0x0001084036e4();
            func_0x000108403e44();
            if (!(bool)uVar29) {
              func_0x000108403e18();
            }
LAB_108401548:
            pfVar50 = (float *)0x1;
            goto LAB_108401554;
          }
        }
      }
    }
    pfVar50 = (float *)0x0;
LAB_108401554:
    FUN_1083fcee8((float *)((long)register0x00000008 + -0x110));
    return pfVar50;
  case 7.00649e-44:
    func_0x000108403778();
    func_0x000108403dd0();
    iVar61 = (int)pfVar56;
    if (((ulong)pfVar56 & 1) != 0) goto code_r0x0001083fe880;
    func_0x000108403778();
    func_0x000108403dc8();
    if (iVar61 != 0) goto code_r0x0001083fe880;
    goto code_r0x0001083fed5c;
  }
  goto code_r0x0001083ff730;
code_r0x0001083fe880:
  pfVar56 = pfVar52;
  FUN_1083c6784();
  pfVar43 = pfVar56;
  if (pfVar56 != (float *)0x0) goto code_r0x0001083fe7fc;
  *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(pfVar52 + 6);
code_r0x0001083fed38:
  pfVar56 = param_1 + 0x50;
code_r0x0001083fed3c:
  FUN_1083d66f4();
code_r0x0001083fed44:
  if ((int)pfVar56 != 0) {
code_r0x0001083fed48:
    pfVar55 = *(float **)(pfVar52 + 6);
    FUN_1083f446c(pfVar55);
    func_0x000108403650();
    goto LAB_1083ff778;
  }
code_r0x0001083fed5c:
  func_0x00010840359c();
code_r0x0001083fed60:
  func_0x000108403784();
code_r0x0001083fed68:
  FUN_108401d78();
code_r0x0001083ff730:
  pfVar55 = (float *)0x1;
  goto LAB_1083ff778;
code_r0x0001083feb9c:
  param_3 = *(float **)(pfVar52 + 6);
code_r0x0001083feba0:
  pfVar42 = (float *)(ulong)*(byte *)(pfVar52 + 8);
  param_4 = *(float **)(pfVar52 + 10);
  pfVar26 = param_1;
code_r0x0001083febac:
  uVar63 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar62 = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x0001084038b0();
  pfVar27 = (float *)((long)register0x00000008 + -0x130);
  *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
  *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
  *(float *)((long)register0x00000008 + -0xd0) = 0.0;
  *(float *)((long)register0x00000008 + -0xcc) = 0.0;
  *(float **)((long)register0x00000008 + -200) = pfVar52;
  *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
  *(float **)((long)register0x00000008 + -0xb8) = param_1;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar63;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar62;
  pfVar43 = param_3;
  pfVar56 = param_4;
code_r0x000108400c0c:
  pfVar50 = pfVar43;
  do {
    pfVar43 = pfVar56;
    pfVar56 = pfVar50;
    uVar29 = SUB81(pfVar42,0);
    switch((ulong)pfVar42 & 0xff) {
    case 0:
    case 2:
    case 10:
    case 0xc:
    case 0xe:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
code_r0x000108400c6c:
      pfVar50 = pfVar56;
      FUN_1083c66cc(pfVar56,(float *)((long)register0x00000008 + -0x130));
      if (((int)pfVar50 == 0) ||
         (pfVar38 = pfVar43, param_3 = (float *)((long)register0x00000008 + -0x130), FUN_1083c66cc()
         , pfVar50 = pfVar43, (int)pfVar38 != 0)) {
code_r0x000108400d54:
        unaff_x27 = pfVar56 + 4;
        pfVar32 = *(float **)unaff_x27;
        pfVar57 = pfVar43 + 4;
        (**(code **)(*(long *)pfVar32 + 0x38))(pfVar32,*(undefined8 *)pfVar57);
        pfVar50 = (float *)((long)register0x00000008 + -0x130);
        if (((ulong)pfVar32 & 1) != 0) goto LAB_108400d74;
        pfVar52 = *(float **)unaff_x27;
        func_0x000108403634();
        func_0x00010840365c();
        pfVar32 = *(float **)pfVar57;
        func_0x000108403634();
        pfVar38 = pfVar42;
        goto code_r0x000108400dfc;
      }
      break;
    case 0x10:
    case 0x11:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
      plVar41 = *(long **)(pfVar56 + 4);
      (**(code **)(*plVar41 + 0xf0))();
      if (((ulong)plVar41 & 1) == 0) {
        plVar41 = *(long **)(pfVar56 + 4);
        (**(code **)(*plVar41 + 0xe0))();
        if ((int)plVar41 == 0) goto code_r0x000108400c6c;
      }
      FUN_1083fd5e0((float *)((long)register0x00000008 + -0x130),pfVar26,pfVar56,1);
      pfVar50 = (float *)((long)register0x00000008 + -0x110);
      FUN_1083fd5e0(pfVar50,pfVar26,pfVar43,1);
      pfVar52 = *(float **)((long)register0x00000008 + -0x130);
      lVar48 = *(long *)((long)register0x00000008 + -0x110);
      func_0x000108403784();
      FUN_1084009b0();
      if (lVar48 != 0) {
        func_0x000108403ba4();
      }
      goto LAB_10840120c;
    case 0x13:
      goto code_r0x000108400c90;
    case 0x15:
      pfVar42 = (float *)0x14;
      goto code_r0x000108400c0c;
    default:
      if (((uint)pfVar42 & 0xff) == 0x22) {
        param_1 = pfVar56;
        FUN_1083d64e8();
        if ((int)param_1 != 0) {
          func_0x00010840392c();
          iVar61 = (int)param_1;
          FUN_1083fe7bc();
          if (iVar61 == 0) {
            return (float *)0x0;
          }
          param_1 = *(float **)(pfVar56 + 4);
          func_0x000108403618();
          param_3 = param_1;
          func_0x000108403900();
        }
        func_0x000108403790();
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        unaff_x19 = *(long **)((long)register0x00000008 + -0xb8);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xd0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -200);
        unaff_x24 = *(ulong *)((long)register0x00000008 + -0xe0);
        unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0xd8);
        unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        unaff_x28 = *(float **)((long)register0x00000008 + -0x100);
        unaff_x27 = *(float **)((long)register0x00000008 + -0xf8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
        goto code_r0x0001083fe7bc;
      }
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x12:
    case 0x14:
      *(undefined1 *)((long)register0x00000008 + -0x101) = uVar29;
      goto code_r0x000108400d54;
    }
  } while( true );
code_r0x000108400c90:
  pfVar42 = (float *)0x12;
  goto code_r0x000108400c0c;
code_r0x0001084042f8:
  while( true ) {
    fVar118 = SUB84(pfVar42,0);
    fVar92 = SUB84((float *)((long)register0x00000008 + -0x110),0);
    pfVar38 = (float *)register0x00000008;
    func_0x00010838ed50();
    param_1 = (float *)((long)param_1 + -1);
    if (param_1 == (float *)0x0) break;
    uVar63 = *(undefined8 *)(pfVar43 + -1);
    fVar92 = *pfVar43;
    uVar62 = *(undefined8 *)pfVar52;
    *(float *)((long)register0x00000008 + 0x10) = (float)uVar63;
    *(float *)((long)register0x00000008 + 0x14) = -fVar92;
    func_0x000108404a80(uVar63,-fVar92,uVar62);
    *(undefined8 *)((long)register0x00000008 + 0x20) = extraout_var_17;
    *(undefined8 *)((long)register0x00000008 + 0x18) = extraout_d2_00;
    *(float *)((long)register0x00000008 + 0x28) = 0.0;
    *(float *)((long)register0x00000008 + 0x2c) = 0.0;
    *(float **)((long)register0x00000008 + 0x30) = pfVar56;
    pfVar42 = (float *)0x1;
    func_0x000108142084((float *)((long)register0x00000008 + 0x10),
                        (float *)((long)register0x00000008 + -0x10));
    *(float *)((long)register0x00000008 + -0x110) = extraout_s0;
    *(float *)((long)register0x00000008 + -0x10c) = extraout_s1;
    *(float *)((long)register0x00000008 + -0x108) = extraout_s2;
    *(float *)((long)register0x00000008 + -0x104) = extraout_s3;
    pfVar52 = pfVar52 + 2;
    pfVar43 = pfVar43 + 2;
  }
  func_0x000108404a6c(*(undefined8 *)((long)register0x00000008 + -0x68));
  if (!(bool)uVar29) {
    ___stack_chk_fail();
    FUN_1083a2cb4((float *)((long)register0x00000008 + 0x10));
    pfVar31 = (float *)((long)register0x00000008 + -0x110);
    func_0x0001083a261c();
    func_0x000108404a58();
    *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
    *(float **)((long)register0x00000008 + -0xb8) = pfVar38;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10840441c;
    if ((int)*pfVar31 < (int)fVar92) {
      *pfVar31 = fVar92;
      FUN_1084049cc(pfVar31 + 2,(long)(int)fVar92);
    }
    if ((int)pfVar31[4] < (int)fVar118) {
      pfVar31[4] = fVar118;
      FUN_1084049cc(pfVar31 + 6,(long)(int)fVar118);
    }
    pfVar31 = pfVar31 + 8;
    lVar48 = *(long *)((long)register0x00000008 + -0xc0);
    lVar44 = *(long *)((long)register0x00000008 + -0xb8);
    uVar63 = *(undefined8 *)pfVar31;
    *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
    *(float **)((long)register0x00000008 + -200) = pfVar43;
    *(long *)((long)register0x00000008 + -0xc0) = lVar48;
    *(long *)((long)register0x00000008 + -0xb8) = lVar44;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    func_0x000108341d9c(pfVar31,uVar63);
    for (lVar36 = *(long *)(pfVar31 + 2); lVar36 != lVar44; lVar36 = lVar36 + -0x60) {
      pfVar31 = (float *)(lVar36 + -0x18);
      func_0x0001081298a0(pfVar31);
    }
    *(long *)(lVar48 + 8) = lVar44;
    return pfVar31;
  }
  return pfVar38;
code_r0x00010841bf90:
  while (pfVar32 != (float *)0x0) {
    unaff_x28 = (float *)0x0;
    do {
      if (**(ulong **)((long)register0x00000008 + -0x30) != unaff_x24) {
        _objc_enumerationMutation(pfVar52);
      }
      pfVar56 = *(float **)(*(long *)((long)register0x00000008 + -0x38) + (long)unaff_x28 * 8);
      pfVar32 = pfVar56;
      func_0x00010c081660();
      if (((ulong)pfVar32 & 1) == 0) {
        pfVar38 = pfVar56;
        func_0x00010c268400();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x98) = &UNK_10df265ec;
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_10df26584;
        *(float **)((long)register0x00000008 + -0x80) = unaff_x27;
        *(float **)((long)register0x00000008 + -0x78) = pfVar56;
        *(ulong *)((long)register0x00000008 + -0x68) =
             CONCAT17(unaff_00005187,
                      CONCAT16(unaff_00005186,
                               CONCAT15(unaff_00005185,
                                        CONCAT14(unaff_00005184,
                                                 CONCAT13(unaff_00005183,
                                                          CONCAT12(unaff_00005182,
                                                                   CONCAT11(unaff_00005181,unaff_b12
                                                                           )))))));
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d10;
        *(ulong *)((long)register0x00000008 + -0x50) =
             CONCAT17(unaff_00005127,
                      CONCAT16(unaff_00005126,
                               CONCAT15(unaff_00005125,
                                        CONCAT14(unaff_00005124,
                                                 CONCAT13(unaff_00005123,
                                                          CONCAT12(unaff_00005122,
                                                                   CONCAT11(unaff_00005121,unaff_b9)
                                                                  ))))));
        *(ulong *)((long)register0x00000008 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
        _objc_retain(param_1);
        *(float **)((long)register0x00000008 + -0x70) = param_1;
        func_0x00010bf97ce0(pfVar38);
        _objc_release(pfVar38);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      unaff_x28 = (float *)((long)unaff_x28 + 1);
    } while (pfVar43 != unaff_x28);
    pfVar42 = (float *)((long)register0x00000008 + -0x40);
    pfVar32 = pfVar52;
    param_4 = (float *)register0x00000008;
    func_0x00010bf52a60();
    pfVar43 = pfVar32;
  }
LAB_10841bf94:
  _objc_release(pfVar52);
  pfVar32 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa0)) {
    return pfVar32;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x128) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x110) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x108) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
  *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(float **)((long)register0x00000008 + -0xd8) = pfVar38;
  *(float **)((long)register0x00000008 + -0xd0) = pfVar56;
  *(float **)((long)register0x00000008 + -200) = pfVar43;
  *(float **)((long)register0x00000008 + -0xc0) = pfVar52;
  *(float **)((long)register0x00000008 + -0xb8) = param_1;
  *(float **)((long)register0x00000008 + -0xb0) = pfVar50;
  *(code **)((long)register0x00000008 + -0xa8) = FUN_10841bfec;
  *(undefined8 *)((long)register0x00000008 + -0x150) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(pfVar42);
  pfVar50 = *(float **)(pfVar32 + 8);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  pfVar38 = pfVar50;
  param_1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pfVar43 = pfVar38;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pfVar38);
  _objc_release(pfVar50);
  if (pfVar43 != (float *)0x0) {
    pfVar50 = pfVar43;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    pfVar38 = pfVar50;
    func_0x00010c08fa60();
    _objc_release(pfVar50);
    if (pfVar38 != (float *)0x0) {
      *(float **)((long)register0x00000008 + -0x218) = param_3;
      *(float *)((long)register0x00000008 + -0x1e8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1ec) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1dc) = 0.0;
      *(float *)((long)register0x00000008 + -0x208) = 0.0;
      *(float *)((long)register0x00000008 + -0x204) = 0.0;
      *(float *)((long)register0x00000008 + -0x210) = 0.0;
      *(float *)((long)register0x00000008 + -0x20c) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f8) = 0.0;
      *(float *)((long)register0x00000008 + -500) = 0.0;
      *(float *)((long)register0x00000008 + -0x200) = 0.0;
      *(float *)((long)register0x00000008 + -0x1fc) = 0.0;
      _objc_retain(pfVar42);
      param_1 = (float *)((long)register0x00000008 + -0x210);
      param_4 = (float *)((long)register0x00000008 + -0x1d0);
      pfVar26 = pfVar42;
      func_0x00010bf52a60();
      if (pfVar26 != (float *)0x0) {
        lVar48 = **(long **)((long)register0x00000008 + -0x200);
        do {
          pfVar56 = (float *)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x200) != lVar48) {
              _objc_enumerationMutation(pfVar42);
            }
            uVar63 = *(undefined8 *)
                      (*(long *)((long)register0x00000008 + -0x208) + (long)pfVar56 * 8);
            auVar184 = func_0x00010c1281e0(*(undefined8 *)(pfVar32 + 8));
            unaff_s8 = auVar184._0_4_;
            unaff_00005104 = auVar184._4_4_;
            unaff_b9 = auVar184[8];
            unaff_00005121 = auVar184[9];
            unaff_00005122 = auVar184[10];
            unaff_00005123 = auVar184[0xb];
            unaff_00005124 = auVar184[0xc];
            unaff_00005125 = auVar184[0xd];
            unaff_00005126 = auVar184[0xe];
            unaff_00005127 = auVar184[0xf];
            unaff_d10 = func_0x00010bf34840(*(undefined8 *)(pfVar32 + 8));
            unaff_d11 = func_0x00010bf348c0(*(undefined8 *)(pfVar32 + 8));
            auVar185 = func_0x00010c23d0a0(uVar63);
            unaff_d13 = auVar185._8_8_;
            uVar29 = (undefined1)extraout_var_09;
            uVar143 = (undefined1)((ulong)extraout_var_09 >> 8);
            uVar144 = (undefined1)((ulong)extraout_var_09 >> 0x10);
            uVar145 = (undefined1)((ulong)extraout_var_09 >> 0x18);
            uVar146 = (undefined1)((ulong)extraout_var_09 >> 0x20);
            uVar147 = (undefined1)((ulong)extraout_var_09 >> 0x28);
            uVar148 = (undefined1)((ulong)extraout_var_09 >> 0x30);
            uVar149 = (undefined1)((ulong)extraout_var_09 >> 0x38);
            unaff_b12 = auVar185[0];
            unaff_00005181 = auVar185[1];
            unaff_00005182 = auVar185[2];
            unaff_00005183 = auVar185[3];
            unaff_00005184 = auVar185[4];
            unaff_00005185 = auVar185[5];
            unaff_00005186 = auVar185[6];
            unaff_00005187 = auVar185[7];
            auVar186 = func_0x00010bf345e0(uVar63);
            unaff_d15 = auVar186._8_8_;
            unaff_d14 = auVar186._0_8_;
            pfVar38 = *(float **)(pfVar32 + 8);
            uVar64 = func_0x00010c141a80();
            uVar72 = *(undefined8 *)(pfVar32 + 0xc);
            uVar78 = *(undefined8 *)(pfVar32 + 0xe);
            uVar63 = *(undefined8 *)(pfVar32 + 0x10);
            uVar62 = *(undefined8 *)(pfVar32 + 0x12);
            *(undefined8 *)((long)register0x00000008 + -0x220) = *(undefined8 *)(pfVar32 + 0x14);
            *(undefined8 *)((long)register0x00000008 + -0x228) = uVar62;
            *(undefined8 *)((long)register0x00000008 + -0x230) = uVar63;
            *(undefined8 *)((long)register0x00000008 + -0x240) = uVar72;
            *(undefined8 *)((long)register0x00000008 + -0x238) = uVar78;
            *(undefined8 *)((long)register0x00000008 + -0x248) = uVar64;
            *(float *)((long)register0x00000008 + -0x250) = 0.0;
            *(float *)((long)register0x00000008 + -0x24c) = 1.875;
            in_q4[9] = uVar143;
            in_q4[8] = uVar29;
            in_q4[10] = uVar144;
            in_q4[0xb] = uVar145;
            in_q4[0xc] = uVar146;
            in_q4[0xd] = uVar147;
            in_q4[0xe] = uVar148;
            in_q4[0xf] = uVar149;
            in_q4._0_8_ = auVar185._0_8_;
            FUN_10841b844(auVar184._0_8_,auVar184._8_8_,unaff_d10,unaff_d11,auVar185._0_8_,unaff_d13
                          ,unaff_d14,unaff_d15);
            _objc_retainAutoreleasedReturnValue();
            pfVar31 = pfVar38;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            dVar65 = (double)func_0x00010c2a5040();
            if (dVar65 <= 0.0) {
LAB_10841c2c0:
              _objc_release(pfVar31);
            }
            else {
              pfVar57 = pfVar38;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              dVar65 = (double)func_0x00010bfe0640();
              unaff_s8 = SUB84(dVar65,0);
              unaff_00005104 = (undefined4)((ulong)dVar65 >> 0x20);
              _objc_release(pfVar57);
              _objc_release(pfVar31);
              if (0.0 < dVar65) {
                pfVar31 = (float *)PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(pfVar31);
                pfVar50 = pfVar31;
                func_0x00010beedca0(pfVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(pfVar50);
                pfVar57 = pfVar43;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                pfVar50 = pfVar31;
                func_0x00010beedca0(pfVar31);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(pfVar50);
                func_0x00010befa120(*(undefined8 *)(pfVar32 + 10));
                _objc_release(pfVar57);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(pfVar38);
            pfVar56 = (float *)((long)pfVar56 + 1);
          } while (pfVar26 != pfVar56);
          param_1 = (float *)((long)register0x00000008 + -0x210);
          param_4 = (float *)((long)register0x00000008 + -0x1d0);
          pfVar26 = pfVar42;
          func_0x00010bf52a60();
          pfVar50 = (float *)0x0;
        } while (pfVar26 != (float *)0x0);
      }
      _objc_release(pfVar42);
      param_3 = *(float **)((long)register0x00000008 + -0x218);
    }
  }
  _objc_release(pfVar43);
  _objc_release(pfVar42);
  pfVar43 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x150)) {
    return pfVar43;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x2d8) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x2d0) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x2c8) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x2b0) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x2a8) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x2a0) = pfVar57;
  *(float **)((long)register0x00000008 + -0x298) = pfVar31;
  *(float **)((long)register0x00000008 + -0x290) = pfVar38;
  *(float **)((long)register0x00000008 + -0x288) = pfVar50;
  *(float **)((long)register0x00000008 + -0x280) = pfVar56;
  *(float **)((long)register0x00000008 + -0x278) = pfVar32;
  *(float **)((long)register0x00000008 + -0x270) = pfVar42;
  *(float **)((long)register0x00000008 + -0x268) = param_3;
  *(float **)((long)register0x00000008 + -0x260) = (float *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -600) = FUN_10841c368;
  uVar63 = extraout_d2_02;
  uVar62 = extraout_d3_01;
  _objc_retain(param_1);
  _objc_retain(param_4);
  pfVar50 = param_4;
  func_0x00010c082fa0();
  if ((int)pfVar50 != 0) {
    pfVar50 = param_4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    pfVar38 = pfVar50;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pfVar38 != (float *)0x0) {
      pfVar38 = pfVar50;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      pfVar31 = pfVar38;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      pfVar57 = pfVar31;
      func_0x00010c08fa60();
      _objc_release(pfVar31);
      if (pfVar57 != (float *)0x0) {
        puVar40 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        auVar184 = func_0x00010c128340(pfVar50);
        pfVar31 = pfVar50;
        auVar185 = func_0x00010c128320(pfVar50);
        *(undefined8 *)((long)register0x00000008 + -0x2f8) = uVar62;
        *(long *)((long)register0x00000008 + -0x2f0) = in_q4._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x308) = extraout_d1_02;
        *(undefined8 *)((long)register0x00000008 + -0x300) = uVar63;
        *(undefined8 *)((long)register0x00000008 + -0x310) = extraout_d0_00;
        *(float *)((long)register0x00000008 + -800) = 0.0;
        *(float *)((long)register0x00000008 + -0x31c) = 1.875;
        *(float *)((long)register0x00000008 + -0x318) = 0.0;
        *(float *)((long)register0x00000008 + -0x314) = 0.0;
        FUN_10841b844(auVar184._0_8_,auVar184._8_8_,auVar185._0_8_,auVar185._8_8_,0x3ff0000000000000
                      ,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        pfVar57 = pfVar31;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        dVar65 = (double)func_0x00010c2a5040();
        if (dVar65 <= 0.0) {
          _objc_release(pfVar57);
        }
        else {
          pfVar32 = pfVar31;
          func_0x00010c23d0a0(pfVar31);
          _objc_retainAutoreleasedReturnValue();
          dVar65 = (double)func_0x00010bfe0640();
          _objc_release(pfVar32);
          _objc_release(pfVar57);
          if (0.0 < dVar65) {
            func_0x00010c1695c0(puVar40);
            func_0x00010c21acc0(puVar40);
            puVar39 = puVar40;
            func_0x00010beedca0(puVar40);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar39);
            pfVar57 = pfVar38;
            func_0x00010c297e20(pfVar38);
            _objc_retainAutoreleasedReturnValue();
            puVar39 = puVar40;
            func_0x00010beedca0(puVar40);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar39);
            _objc_release(pfVar57);
            func_0x00010befa120(param_1);
          }
        }
        _objc_release(pfVar31);
        _objc_release(puVar40);
      }
      _objc_release(pfVar38);
    }
    _objc_release(pfVar50);
  }
  _objc_release(param_4);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return param_1;
  while( true ) {
    func_0x000108403650();
    lVar48 = lVar48 + -8;
    if (((ulong)pfVar56 & 1) == 0) break;
code_r0x0001083fe930:
    pfVar55 = (float *)(ulong)(lVar48 == 0);
    if (lVar48 == 0) break;
  }
LAB_1083ff778:
  func_0x0001084038b0(pfVar55,*(undefined8 *)((long)register0x00000008 + -8));
  return pfVar55;
code_r0x000108400dfc:
  pfVar42 = pfVar38;
  func_0x00010840365c();
  if ((int)pfVar52 != (int)pfVar32) {
    return (float *)0x0;
  }
  func_0x000108403890();
  func_0x000108403dd0();
  pfVar38 = pfVar57;
  if ((int)pfVar32 == 0) {
LAB_108400ec8:
    func_0x000108403890();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403890();
      (**(code **)(extraout_x8_16 + 0xd8))();
      pfVar50 = pfVar27;
      if ((int)pfVar32 != 0) goto LAB_108400ee4;
LAB_108400d74:
      pfVar27 = pfVar50;
      pfVar50 = (float *)0x0;
      pfVar38 = pfVar57;
      pfVar57 = unaff_x27;
    }
    else {
LAB_108400ee4:
      func_0x000108403884();
      func_0x000108403dd0();
      pfVar50 = pfVar32;
      pfVar57 = unaff_x27;
    }
    uVar30 = (uint)pfVar50;
    bVar28 = false;
    unaff_x27 = pfVar57;
  }
  else {
    func_0x000108403884();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403884();
      (**(code **)(extraout_x8_09 + 0xd8))();
      if (((ulong)pfVar32 & 1) == 0) goto LAB_108400ec8;
    }
    uVar30 = 0;
    bVar28 = true;
  }
  pfVar52 = (float *)0x0;
  pfVar57 = *(float **)pfVar57;
  if ((((uint)pfVar42 & 0xff) < 0x20) && ((1 << (ulong)((uint)pfVar42 & 0x1f) & 0xffc08000U) != 0))
  {
    pfVar50 = pfVar27;
    func_0x000108403e04(pfVar27,pfVar26,pfVar56);
    pfVar52 = *(float **)pfVar27;
    if (pfVar52 == (float *)0x0) {
      return (float *)0x0;
    }
    if (pfVar42 == (float *)0xf) {
      func_0x0001084035d4();
      if ((int)pfVar50 == 0) {
        pfVar26 = (float *)0x0;
      }
      else {
        func_0x000108403784();
        func_0x0001083fda64();
        pfVar26 = pfVar50;
      }
      goto LAB_108401210;
    }
    pfVar32 = (float *)((long)pfVar27 + 0x2f);
    FUN_1083cb2fc();
    *(char *)((long)pfVar27 + 0x2f) = (char)pfVar32;
    pfVar42 = pfVar32;
  }
  if (((uint)pfVar42 & 0xff) == 2) {
    func_0x000108403890();
    (**(code **)(extraout_x8_10 + 0xd8))();
    if ((int)pfVar32 == 0) {
LAB_108400efc:
      func_0x000108403890();
      (**(code **)(extraout_x8_17 + 0xd0))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_18 + 0xd8))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar61 = (int)pfVar32;
          (**(code **)(extraout_x8_19 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_20 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_21 + 0x68))();
          iVar69 = 1;
          goto LAB_108400fa8;
        }
      }
      func_0x000108403890();
      (**(code **)(extraout_x8_22 + 0xd8))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_23 + 0xd0))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar69 = (int)pfVar32;
          (**(code **)(extraout_x8_24 + 0x60))();
          func_0x000108403890();
          (**(code **)(extraout_x8_25 + 0x68))();
          func_0x000108403884();
          (**(code **)(extraout_x8_26 + 0x60))();
          iVar61 = 1;
          goto LAB_108400fa8;
        }
      }
      goto LAB_108400fe4;
    }
    func_0x000108403884();
    (**(code **)(extraout_x8_11 + 0xd8))();
    if ((int)pfVar32 == 0) goto LAB_108400efc;
    func_0x000108403890();
    iVar69 = (int)pfVar32;
    (**(code **)(extraout_x8_12 + 0x60))();
    func_0x000108403890();
    (**(code **)(extraout_x8_13 + 0x68))();
    iVar61 = iVar69;
    func_0x000108403884();
    (**(code **)(extraout_x8_14 + 0x60))();
    func_0x000108403884();
    (**(code **)(extraout_x8_15 + 0x68))();
LAB_108400fa8:
    pfVar26 = pfVar26 + 0xc;
    func_0x0001083f926c(pfVar26,iVar61 * iVar69);
    func_0x000108403784();
    FUN_108400974();
    if (((int)pfVar26 == 0) || (func_0x0001084035d4(), (int)pfVar26 == 0)) goto LAB_108401208;
    func_0x000108403cfc();
    func_0x0001083fa66c();
    goto LAB_1084011f8;
  }
LAB_108400fe4:
  if (((uVar30 & 1) == 0 && !bVar28) &&
     ((**(code **)(*(long *)pfVar57 + 0x38))(pfVar57,*(undefined8 *)pfVar38), pfVar32 = pfVar57,
     (int)pfVar57 == 0)) goto LAB_108401208;
  uVar54 = (uint)pfVar42 & 0xff;
  if (uVar54 != 9) {
    if ((uVar54 != 8) || (func_0x000108403d64(), (int)pfVar32 == 0)) goto LAB_1084010a0;
    uVar63 = *(undefined8 *)(pfVar43 + 4);
    pfVar27[2] = 2.3509886e-38;
    pfVar27[3] = 5.74532e-44;
    *(undefined ***)pfVar27 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar27 + 4) = uVar63;
    pfVar27[6] = 0.0;
    pfVar27[7] = 0.0;
    func_0x00010840392c();
    FUN_108401264();
    pfVar50 = pfVar32;
    goto LAB_10840120c;
  }
  func_0x000108403d64();
  if ((int)pfVar32 != 0) {
    uVar63 = *(undefined8 *)(pfVar43 + 4);
    pfVar27[2] = 2.3509886e-38;
    pfVar27[3] = 5.74532e-44;
    *(undefined ***)pfVar27 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar27 + 4) = uVar63;
    pfVar27[6] = 0.0;
    pfVar27[7] = 1.875;
    func_0x00010840392c();
    FUN_108401264();
    pfVar50 = pfVar32;
    goto LAB_10840120c;
  }
LAB_1084010a0:
  func_0x000108403784();
  FUN_108400974();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (bVar28) {
    pfVar32 = *(float **)pfVar38;
    func_0x000108403744();
    (*extraout_x8_27)();
    func_0x0001084038a8();
  }
  func_0x0001084035d4();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (uVar30 != 0) {
    pfVar32 = *(float **)unaff_x27;
    func_0x000108403744();
    (*extraout_x8_28)();
    func_0x0001084038a8();
  }
  pfVar50 = (float *)0x0;
  switch((ulong)pfVar42 & 0xff) {
  case 0:
    func_0x0001084036d8();
    break;
  case 1:
    func_0x0001084036d8();
    break;
  case 2:
    func_0x0001084036d8();
    break;
  case 3:
    func_0x0001084036d8();
    break;
  default:
    goto LAB_10840120c;
  case 8:
  case 0xc:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0xfb;
    goto code_r0x00010840116c;
  case 9:
  case 0xd:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0x100;
    goto code_r0x00010840116c;
  case 10:
  case 0xe:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar63 = 0x106;
code_r0x00010840116c:
    pfVar26 = pfVar26 + 0xc;
    FUN_1083f9008(pfVar26,uVar63,pfVar32);
    goto LAB_1084011f8;
  case 0x10:
    func_0x0001084036d8();
    if (((ulong)pfVar32 & 1) != 0) {
code_r0x0001084011ac:
      func_0x000108403ce4();
      func_0x000108403a34();
      func_0x000108400988(pfVar26,(ulong)pfVar42 & 0xff,pfVar32);
      goto LAB_1084011f8;
    }
    goto LAB_108401208;
  case 0x11:
    func_0x0001084036d8();
    if ((int)pfVar32 != 0) goto code_r0x0001084011ac;
    goto LAB_108401208;
  case 0x12:
  case 0x13:
    func_0x0001084036d8();
    break;
  case 0x14:
  case 0x15:
    func_0x0001084036d8();
  }
  pfVar26 = pfVar32;
  if (((ulong)pfVar32 & 1) == 0) {
LAB_108401208:
    pfVar50 = (float *)0x0;
LAB_10840120c:
    pfVar26 = pfVar50;
    if (pfVar52 == (float *)0x0) {
      return pfVar50;
    }
  }
  else {
LAB_1084011f8:
    if (pfVar52 == (float *)0x0) {
      return (float *)0x1;
    }
    func_0x000108403784();
    func_0x0001083fda64();
  }
LAB_108401210:
  func_0x000108403868();
  (*extraout_x8_29)();
  return pfVar26;
}



/* Entry: 1084009b0; end: 108400bcf;  */

void FUN_1084009b0(ulong param_1,long param_2,char param_3,undefined8 param_4,long *param_5)

{
  ulong *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = param_5;
  lVar5 = param_2;
  (**(code **)(*param_5 + 0xf0))();
  if ((int)plVar6 == 0) {
    func_0x000108403980(*(undefined8 *)(*param_5 + 0xe0));
    if ((int)plVar6 != 0) {
      func_0x000108403974(*param_5);
      func_0x00010840365c();
      if ((int)plVar6 == 4) {
        func_0x000108403ce4();
        func_0x000108403a34();
        for (iVar2 = 0; func_0x000108403980(*(undefined8 *)(*param_5 + 0x60)), iVar2 < (int)plVar6;
            iVar2 = iVar2 + 1) {
          func_0x000108403ecc();
          FUN_1084009b0();
          plVar3 = plVar6;
          func_0x000108403d34();
          func_0x000108403d78();
          if (((ulong)plVar6 & 1) == 0) {
            return;
          }
          plVar6 = plVar3;
        }
        func_0x000108403980(*(undefined8 *)(*param_5 + 0x60));
        func_0x000108403e84();
        goto LAB_108400a7c;
      }
    }
    uVar4 = param_1;
    FUN_1083fda24(param_1,param_2);
    if ((int)uVar4 == 0) {
      return;
    }
    FUN_1083fda24(param_1,param_4);
    iVar2 = (int)param_1;
    if (iVar2 == 0) {
      return;
    }
    if (param_3 == '\x11') {
      func_0x000108403d28();
      if (iVar2 == 0) {
        return;
      }
    }
    else if ((param_3 == '\x10') && (func_0x000108403d28(), (param_1 & 1) == 0)) {
      return;
    }
    func_0x000108403b94();
    func_0x000108403e84();
  }
  else {
    func_0x000108403d1c();
    puVar1 = (ulong *)(plVar6 + 10);
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      plVar6 = (long *)*puVar1;
      (**(code **)(*plVar6 + 0x80))();
      func_0x000108403ecc();
      FUN_1084009b0();
      func_0x000108403d34();
      func_0x000108403d78();
      if (((ulong)plVar6 & 1) == 0) {
        return;
      }
      puVar1 = puVar1 + 0xb;
    }
    func_0x000108403e84();
  }
LAB_108400a7c:
  func_0x000108400988();
  return;
}



/* Entry: 108400bd0; end: 108400bd3;  */

undefined8 * FUN_108400bd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108400bd4; end: 108401263;  */

/* WARNING: Possible PIC construction at 0x0001083ff378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108401b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001083ff318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010841d3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083ff31c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff144) */
/* WARNING: Removing unreachable block (ram,0x0001083ff44c) */
/* WARNING: Removing unreachable block (ram,0x0001083ff37c) */
/* WARNING: Removing unreachable block (ram,0x00010841d3d8) */
/* WARNING: Removing unreachable block (ram,0x000108410300) */
/* WARNING: Removing unreachable block (ram,0x000108410310) */
/* WARNING: Removing unreachable block (ram,0x0001083ffdb4) */
/* WARNING: Removing unreachable block (ram,0x00010840e230) */
/* WARNING: Removing unreachable block (ram,0x00010840e24c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_108400bd4(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                     ,code *UNRECOVERED_JUMPTABLE_00)

{
  undefined **ppuVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  char cVar5;
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
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  uint3 uVar25;
  float *pfVar26;
  bool bVar27;
  undefined1 uVar28;
  uint uVar29;
  long *plVar30;
  long *plVar31;
  float *pfVar32;
  float *pfVar33;
  undefined **ppuVar34;
  long lVar35;
  float *pfVar36;
  undefined *puVar37;
  undefined *puVar38;
  float *pfVar39;
  long lVar40;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar41;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *pcVar42;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  undefined8 uVar43;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  undefined4 uVar44;
  ulong uVar45;
  ulong uVar46;
  float *unaff_x19;
  float *pfVar47;
  short *psVar48;
  float *unaff_x20;
  ulong uVar49;
  float *unaff_x21;
  uint uVar50;
  float *unaff_x22;
  float *unaff_x23;
  ulong unaff_x24;
  long lVar51;
  float *pfVar52;
  undefined8 uVar53;
  float *unaff_x25;
  float *unaff_x26;
  undefined8 uVar54;
  float *unaff_x27;
  float *unaff_x28;
  ulong uVar55;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  int iVar56;
  undefined8 extraout_d0;
  undefined8 uVar57;
  undefined8 uVar58;
  double dVar59;
  undefined8 extraout_d0_00;
  int iVar63;
  int iVar64;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  int iVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 extraout_var_09;
  float extraout_s1;
  undefined8 extraout_d1;
  undefined8 uVar66;
  undefined8 extraout_d1_02;
  undefined1 auVar67 [15];
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined1 auVar68 [16];
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float extraout_s2;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 uVar72;
  undefined8 extraout_d2_02;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined1 auVar73 [16];
  undefined8 extraout_d2_01;
  undefined8 extraout_var_18;
  float fVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float extraout_s3;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined1 in_q4 [16];
  float fVar79;
  float fVar81;
  float fVar82;
  undefined1 in_q5 [16];
  float fVar83;
  undefined1 auVar80 [16];
  float fVar86;
  undefined1 in_q6 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  int iVar87;
  float fVar88;
  undefined4 uVar89;
  int iVar92;
  float fVar93;
  int iVar94;
  float fVar95;
  undefined1 in_q7 [16];
  int iVar96;
  float fVar97;
  undefined4 unaff_s8;
  float fVar98;
  undefined4 unaff_00005104;
  undefined1 unaff_b9;
  undefined1 unaff_00005121;
  undefined1 unaff_00005122;
  undefined1 unaff_00005123;
  undefined1 unaff_00005124;
  byte bVar99;
  undefined1 unaff_00005125;
  byte bVar100;
  undefined1 unaff_00005126;
  byte bVar101;
  undefined1 unaff_00005127;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined8 unaff_d10;
  undefined1 auVar111 [16];
  float fVar112;
  undefined8 unaff_d11;
  undefined1 auVar113 [12];
  undefined1 auVar114 [16];
  float fVar116;
  undefined1 unaff_b12;
  undefined1 unaff_00005181;
  undefined1 unaff_00005182;
  undefined1 unaff_00005183;
  undefined1 unaff_00005184;
  undefined1 unaff_00005185;
  undefined1 unaff_00005186;
  undefined1 unaff_00005187;
  undefined8 unaff_d13;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined8 unaff_d14;
  undefined1 auVar119 [16];
  undefined8 unaff_d15;
  byte bVar120;
  byte bVar122;
  byte bVar123;
  float in_s16;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  float in_register_00005204;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  float in_register_00005208;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  float in_register_0000520c;
  undefined1 auVar121 [16];
  byte bVar136;
  undefined1 extraout_b17;
  undefined1 uVar137;
  undefined1 extraout_b17_00;
  undefined1 extraout_b17_01;
  undefined1 extraout_var_21;
  undefined1 uVar138;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar139;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar140;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 uVar141;
  undefined1 extraout_var_31;
  undefined1 uVar142;
  undefined1 extraout_var_32;
  undefined1 uVar143;
  undefined1 extraout_var_33;
  undefined1 uVar144;
  undefined1 in_register_00005228;
  undefined1 in_register_00005229;
  undefined1 in_register_0000522a;
  undefined1 in_register_0000522b;
  undefined1 in_register_0000522c;
  undefined1 in_register_0000522d;
  undefined1 in_register_0000522e;
  undefined1 in_register_0000522f;
  float extraout_s18;
  float extraout_s18_00;
  float extraout_var_34;
  float fVar145;
  float fVar146;
  float extraout_s19;
  float extraout_var_35;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float extraout_s21;
  float fVar151;
  float extraout_s21_00;
  float extraout_var_36;
  float fVar152;
  float fVar153;
  float extraout_var_37;
  float in_register_000052a8;
  float fVar154;
  float in_register_000052ac;
  byte in_b22;
  byte in_register_000052c1;
  byte in_register_000052c2;
  byte in_register_000052c3;
  float fVar155;
  byte in_register_000052c4;
  byte in_register_000052c5;
  byte in_register_000052c6;
  byte in_register_000052c7;
  float fVar156;
  byte in_register_000052c8;
  byte in_register_000052c9;
  byte in_register_000052ca;
  byte in_register_000052cb;
  float fVar157;
  byte in_register_000052cc;
  byte in_register_000052cd;
  byte in_register_000052ce;
  byte in_register_000052cf;
  float fVar158;
  float extraout_s23;
  float extraout_s23_00;
  float extraout_var_38;
  float fVar159;
  float extraout_var_39;
  float in_register_000052e8;
  float in_register_000052ec;
  float extraout_s24;
  float extraout_s24_00;
  float extraout_var_40;
  float extraout_var_41;
  float in_register_00005308;
  float in_register_0000530c;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar165;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float extraout_s26;
  float extraout_s26_00;
  float extraout_var_42;
  float extraout_var_43;
  float in_register_00005348;
  float in_register_0000534c;
  float fVar166;
  float extraout_s27;
  float extraout_s27_00;
  float extraout_var_44;
  float extraout_var_45;
  float in_register_00005368;
  float fVar167;
  float in_register_0000536c;
  float fVar168;
  float fVar169;
  undefined4 extraout_s28;
  float fVar170;
  undefined4 extraout_var_46;
  float fVar171;
  float fVar172;
  undefined4 uVar173;
  undefined1 extraout_b30;
  undefined1 extraout_b30_00;
  undefined1 extraout_b30_01;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 extraout_var_61;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 in_register_000053c8;
  undefined1 in_register_000053c9;
  undefined1 in_register_000053ca;
  undefined1 in_register_000053cb;
  undefined1 in_register_000053cc;
  undefined1 in_register_000053cd;
  undefined1 in_register_000053ce;
  undefined1 in_register_000053cf;
  float fVar175;
  float fVar176;
  undefined1 auVar174 [16];
  float fVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar69 [16];
  undefined1 auVar78 [16];
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  undefined1 auVar115 [16];
  
code_r0x000108400bd4:
  pfVar33 = (float *)((long)register0x00000008 + -0x90);
  *(float **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(float **)((long)register0x00000008 + -0x58) = unaff_x27;
  *(float **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(float **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(float **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  pfVar39 = param_2;
  pfVar47 = param_4;
  unaff_x23 = param_3;
code_r0x000108400c0c:
  pfVar52 = pfVar39;
  do {
    pfVar39 = pfVar47;
    pfVar47 = pfVar52;
    uVar28 = SUB81(unaff_x23,0);
    switch((ulong)unaff_x23 & 0xff) {
    case 0:
    case 2:
    case 10:
    case 0xc:
    case 0xe:
      *(undefined1 *)((long)register0x00000008 + -0x61) = uVar28;
code_r0x000108400c6c:
      pfVar52 = pfVar47;
      FUN_1083c66cc(pfVar47,(float *)((long)register0x00000008 + -0x90));
      if (((int)pfVar52 == 0) ||
         (pfVar32 = pfVar39, param_2 = (float *)((long)register0x00000008 + -0x90), FUN_1083c66cc(),
         pfVar52 = pfVar39, (int)pfVar32 != 0)) {
code_r0x000108400d54:
        unaff_x27 = pfVar47 + 4;
        pfVar32 = *(float **)unaff_x27;
        unaff_x26 = pfVar39 + 4;
        (**(code **)(*(long *)pfVar32 + 0x38))(pfVar32,*(undefined8 *)unaff_x26);
        pfVar52 = (float *)((long)register0x00000008 + -0x90);
        unaff_x19 = param_1;
        if (((ulong)pfVar32 & 1) != 0) goto LAB_108400d74;
        unaff_x20 = *(float **)unaff_x27;
        func_0x000108403634();
        func_0x00010840365c();
        pfVar32 = *(float **)unaff_x26;
        func_0x000108403634();
        goto code_r0x000108400dfc;
      }
      break;
    case 0x10:
    case 0x11:
      *(undefined1 *)((long)register0x00000008 + -0x61) = uVar28;
      plVar31 = *(long **)(pfVar47 + 4);
      (**(code **)(*plVar31 + 0xf0))();
      if (((ulong)plVar31 & 1) == 0) {
        plVar31 = *(long **)(pfVar47 + 4);
        (**(code **)(*plVar31 + 0xe0))();
        if ((int)plVar31 == 0) goto code_r0x000108400c6c;
      }
      FUN_1083fd5e0((float *)((long)register0x00000008 + -0x90),param_1,pfVar47,1);
      pfVar47 = (float *)((long)register0x00000008 + -0x70);
      FUN_1083fd5e0(pfVar47,param_1,pfVar39,1);
      unaff_x20 = *(float **)((long)register0x00000008 + -0x90);
      lVar51 = *(long *)((long)register0x00000008 + -0x70);
      func_0x000108403784();
      FUN_1084009b0();
      if (lVar51 != 0) {
        func_0x000108403ba4();
      }
      goto LAB_10840120c;
    case 0x13:
      goto code_r0x000108400c90;
    case 0x15:
      unaff_x23 = (float *)0x14;
      goto code_r0x000108400c0c;
    default:
      if (((uint)unaff_x23 & 0xff) == 0x22) {
        unaff_x19 = pfVar47;
        FUN_1083d64e8();
        if ((int)unaff_x19 != 0) {
          func_0x00010840392c();
          iVar56 = (int)unaff_x19;
          FUN_1083fe7bc();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          unaff_x19 = *(float **)(pfVar47 + 4);
          func_0x000108403618();
          param_2 = unaff_x19;
          func_0x000108403900();
        }
        func_0x000108403790();
        unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
        unaff_x28 = *(float **)((long)register0x00000008 + -0x60);
        unaff_x27 = *(float **)((long)register0x00000008 + -0x58);
        pfVar33 = (float *)((long)register0x00000008 + -0xa0);
        pfVar26 = (float *)((long)register0x00000008 + -0xa0);
        pfVar32 = (float *)((long)register0x00000008 + -0xa0);
        pfVar36 = (float *)((long)register0x00000008 + -0xa0);
        *(ulong *)((long)register0x00000008 + -0x60) =
             CONCAT17(unaff_00005127,
                      CONCAT16(unaff_00005126,
                               CONCAT15(unaff_00005125,
                                        CONCAT14(unaff_00005124,
                                                 CONCAT13(unaff_00005123,
                                                          CONCAT12(unaff_00005122,
                                                                   CONCAT11(unaff_00005121,unaff_b9)
                                                                  ))))));
        *(ulong *)((long)register0x00000008 + -0x58) = CONCAT44(unaff_00005104,unaff_s8);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
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
        pfVar52 = (float *)((long)register0x00000008 + -0x10);
        unaff_x23 = (float *)&UNK_10df26510;
        unaff_x25 = (float *)&UNK_10df265ec;
        unaff_x26 = (float *)&UNK_10df26584;
        pfVar47 = unaff_x19;
        pfVar39 = param_2;
        goto code_r0x0001083fe7fc;
      }
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x12:
    case 0x14:
      *(undefined1 *)((long)register0x00000008 + -0x61) = uVar28;
      goto code_r0x000108400d54;
    }
  } while( true );
code_r0x0001083fe7fc:
  unaff_x20 = pfVar39;
  param_3 = (float *)0x1;
  unaff_x22 = (float *)0x0;
  pfVar39 = unaff_x20;
  switch(unaff_x20[3]) {
  case 3.50325e-44:
    goto code_r0x0001083feb9c;
  case 3.64338e-44:
    *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(unaff_x20 + 6);
code_r0x0001083febc8:
    pfVar47 = unaff_x19 + 0x18;
code_r0x0001083febd0:
    FUN_1083fe690();
code_r0x0001083febd4:
    if ((int)unaff_x20[0xe] < 1) goto code_r0x0001083ff7a0;
    pfVar32 = pfVar47;
    func_0x000108403650();
    pfVar39 = pfVar47;
code_r0x0001083febf0:
    if ((int)pfVar32 == 0) break;
    bVar99 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 6) + 0x20) + 0x2c);
    ppuVar41 = (undefined **)(ulong)bVar99;
    if (bVar99 == 0xd) {
      func_0x000108403bec();
      func_0x0001083fae74(unaff_x19 + 0xc,*pfVar39);
    }
    else {
code_r0x0001083fec08:
      iVar56 = (int)pfVar32;
      if ((int)ppuVar41 != 0xf) goto code_r0x0001083fec10;
      if ((int)unaff_x20[0xe] < 2) {
code_r0x0001083ff7a0:
                    /* WARNING: Does not return */
        pcVar42 = (code *)SoftwareBreakpoint(1,0x1083ff7a4);
        (*pcVar42)();
      }
      func_0x000108403650();
      if (iVar56 == 0) break;
      func_0x0001084035f4(unaff_x19 + 0xc,0x22a,0xffffffffffffffff);
      func_0x000108403bec();
      func_0x0001083fae84(unaff_x19 + 0xc,*pfVar39);
    }
    goto code_r0x0001083ff3d8;
  case 3.78351e-44:
  case 3.92364e-44:
  case 4.06377e-44:
  case 4.90454e-44:
    func_0x00010840359c();
    if ((float *)0x1 < pfVar47) {
      func_0x000108403784();
      FUN_1084016cc();
      if (((ulong)pfVar47 & 1) != 0) goto code_r0x0001083ff730;
    }
    func_0x000108403c24();
    lVar51 = (long)param_2 << 3;
    goto code_r0x0001083fe930;
  case 4.2039e-44:
  case 4.62428e-44:
    func_0x000108403c24();
    if (param_2 == (float *)0x0) goto code_r0x0001083ff7a0;
    pfVar39 = *(float **)pfVar47;
    func_0x0001084035d4();
    if ((int)pfVar47 == 0) break;
    func_0x000108403624();
    func_0x00010840365c();
    pfVar32 = *(float **)(unaff_x20 + 4);
    func_0x000108403634();
    func_0x00010840365c();
    auVar179._8_8_ = extraout_var_19;
    auVar179._0_8_ = extraout_d3;
    auVar178._8_8_ = extraout_var;
    auVar178._0_8_ = extraout_d0;
    uVar29 = (uint)pfVar32;
    uVar50 = (uint)pfVar47;
    if (uVar50 == uVar29) goto code_r0x0001083ff730;
    uVar28 = uVar50 == 3;
    if (3 < uVar50) {
      if (uVar29 == 3) goto code_r0x0001083ff458;
      break;
    }
    ppuVar41 = (undefined **)((ulong)pfVar47 & 0xff);
    uVar50 = 0xdf26612;
    fVar159 = (float)extraout_d0;
    fVar145 = (float)extraout_d2;
    fVar79 = (float)((ulong)extraout_d0 >> 0x20);
    fVar146 = (float)((ulong)extraout_d2 >> 0x20);
    fVar160 = (float)extraout_var_16;
    fVar166 = (float)((ulong)extraout_var_16 >> 0x20);
    fVar169 = (float)((ulong)extraout_var >> 0x20);
    pfVar26 = pfVar32;
    unaff_x22 = pfVar47;
    uVar137 = extraout_b17;
    uVar138 = extraout_var_21;
    uVar139 = extraout_var_24;
    uVar140 = extraout_var_27;
    uVar141 = extraout_var_30;
    uVar142 = extraout_var_31;
    uVar143 = extraout_var_32;
    uVar144 = extraout_var_33;
    fVar151 = extraout_s21;
    fVar152 = extraout_var_36;
    fVar86 = extraout_s23;
    fVar153 = extraout_var_38;
    fVar112 = extraout_s24;
    fVar154 = extraout_var_40;
    fVar81 = extraout_s26;
    fVar82 = extraout_var_42;
    fVar83 = extraout_s27;
    fVar170 = extraout_var_44;
    switch(ppuVar41) {
    default:
      if (uVar29 == 3) {
code_r0x0001083ff458:
        func_0x00010840359c();
        func_0x000108403b20();
        func_0x0001084017e4();
        plVar31 = *(long **)(pfVar39 + 4);
        puVar38 = &UNK_10df26678;
code_r0x0001083ff6e0:
        uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
        func_0x0001084038b0(unaff_x19,plVar31,puVar38);
        goto FUN_108400898;
      }
      if ((uVar29 & 0xff) != 2) {
        if ((uVar29 & 0xff) != 1) break;
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x0001083fea04;
      }
      func_0x00010840359c();
      uVar173 = SUB84(param_3,0);
      func_0x0001084037dc();
      iVar56 = 0x117;
      goto code_r0x0001083ff448;
    case (undefined **)0x1:
      if (uVar29 == 3) goto code_r0x0001083ff458;
      if ((uVar29 & 0xff) != 2) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          pfVar32 = *(float **)(unaff_x20 + 4);
          func_0x000108403618();
          uVar173 = SUB84(param_3,0);
          func_0x0001084037dc();
          iVar56 = 0x10b;
          goto code_r0x0001083ff448;
        }
        break;
      }
      goto code_r0x0001083ff730;
    case (undefined **)0x2:
      if (uVar29 == 3) goto code_r0x0001083ff458;
      if ((uVar29 & 0xff) != 1) {
        if (((ulong)pfVar32 & 0xff) == 0) {
          func_0x00010840359c();
          uVar173 = SUB84(param_3,0);
          func_0x0001084037dc();
          iVar56 = 0x10f;
          goto code_r0x0001083ff448;
        }
        break;
      }
      goto code_r0x0001083ff730;
    case (undefined **)0x3:
      if (uVar29 == 0) {
        func_0x0001083fa660(unaff_x19 + 0xc);
      }
      else {
        if (2 < uVar29) break;
        func_0x0001084038cc();
        func_0x000108403910();
      }
      func_0x00010840359c();
      func_0x0001084038a8();
      func_0x00010840359c();
      func_0x0001084037dc();
      FUN_1083f9008();
      goto code_r0x0001083ff730;
    case (undefined **)0x5:
      goto code_r0x0001083feb04;
    case (undefined **)0x6:
      goto code_r0x0001083feae8;
    case (undefined **)0x7:
    case (undefined **)0xf:
      goto code_r0x0001083feea4;
    case (undefined **)0x8:
      goto code_r0x0001083fea28;
    case (undefined **)0x9:
      goto code_r0x0001083feac4;
    case (undefined **)0xa:
      goto code_r0x0001083feb1c;
    case (undefined **)0xb:
      goto code_r0x0001083fec08;
    case (undefined **)0xc:
      goto code_r0x0001083feea8;
    case (undefined **)0xd:
      goto code_r0x0001083fed78;
    case (undefined **)0xe:
      goto code_r0x0001083fec80;
    case (undefined **)0x10:
code_r0x0001083fea04:
      uVar173 = SUB84(param_3,0);
      iVar56 = 0x113;
code_r0x0001083ff448:
      uVar43 = 0x1083ff44c;
      pfVar26 = (float *)((long)register0x00000008 + -0xa0);
      pfVar47 = pfVar32;
      goto SUB_1083f8fd0;
    case (undefined **)0x11:
      FUN_10840226c();
      *(undefined8 *)(pfVar32 + 8) = *(undefined8 *)(*(long *)(pfVar32 + 6) + 0xf8);
      *(float **)(*(long *)(pfVar32 + 6) + 0xf8) = pfVar32;
      return pfVar32;
    case (undefined **)0x12:
      lVar51 = *(long *)(unaff_x20 + 0x12);
      pfVar47 = unaff_x19;
      FUN_1083fffa8();
      func_0x000108403de0();
      iVar56 = (int)pfVar47;
      fVar86 = unaff_x19[0x10];
      if ((((ulong)pfVar32 & 0x10101) == 0) && (lVar51 != 0)) {
        unaff_x19[0x10] = (float)((int)fVar86 + 2);
        func_0x000108403878();
        func_0x0001083f98fc();
        func_0x000108403838();
        if (iVar56 != 0) {
          func_0x000108403990();
          func_0x0001083f9780();
          func_0x000108403838();
          if (iVar56 != 0) {
            func_0x0001084039dc();
            if (*(int *)(*(long *)(unaff_x20 + 0x12) + 0x18) < 2) {
code_r0x0001083ffab0:
              func_0x0001084036f0();
              func_0x000108403dec();
              func_0x000108400018(unaff_x19);
              return (float *)0x1;
            }
            func_0x0001084039d0();
            if (iVar56 != 0) {
              iVar56 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0xe) + 0x10);
              func_0x000108403618();
              func_0x000108403900();
              func_0x000108403650();
              if (iVar56 != 0) {
                FUN_1083f994c(unaff_x19 + 0xc,0,(int)fVar86 + 1);
                func_0x0001084036e4();
                goto code_r0x0001083ffab0;
              }
            }
          }
        }
        return (float *)0x0;
      }
      unaff_x19[0x10] = (float)((int)fVar86 + 1);
      fVar112 = unaff_x19[0x40];
      unaff_x24 = (ulong)(uint)fVar112;
      unaff_x19[0x40] = fVar86;
      if (*(long *)(unaff_x20 + 10) == 0) {
        func_0x0001084039dc();
      }
      else {
        func_0x000108403838();
        if (((ulong)pfVar47 & 1) == 0) {
          pfVar47 = (float *)0x0;
          goto code_r0x0001083ffe98;
        }
      }
      *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x88) = 0;
      *(float **)((long)register0x00000008 + -0x80) = unaff_x19;
      *(float *)((long)register0x00000008 + -0x78) = 0.0;
      *(float *)((long)register0x00000008 + -0x74) = 0.0;
      func_0x000108403c60();
      func_0x000108403be4();
      pfVar47 = (float *)(ulong)(uint)unaff_x19[0x10];
      unaff_x19[0x10] = (float)((int)unaff_x19[0x10] + 2);
      func_0x000108403990();
      func_0x0001083f97f0();
    case (undefined **)0x22:
    case (undefined **)0x24:
      fVar112 = (float)unaff_x24;
      func_0x0001083f9780();
      uVar55 = 0;
      FUN_1084001fc();
      func_0x000108403838();
      if ((uVar55 & 1) == 0) {
code_r0x0001083ffe90:
        pfVar47 = (float *)0x0;
      }
      else {
        iVar56 = (int)(float *)((long)register0x00000008 + -0x98);
        func_0x00010840024c();
        func_0x0001084039dc();
        if (*(long *)(unaff_x20 + 0xe) != 0) {
          func_0x0001084039d0();
          if (iVar56 == 0) goto code_r0x0001083ffe90;
          func_0x00010840370c(*(undefined8 *)(unaff_x20 + 0xe));
          (*extraout_x8_08)();
          func_0x000108403900();
        }
        func_0x000108403990();
        func_0x0001083f9780();
        if (*(long *)(unaff_x20 + 0xc) != 0) {
          func_0x000108403650();
          if (iVar56 == 0) goto code_r0x0001083ffe90;
          func_0x000108400298(unaff_x19 + 0xc);
          func_0x0001084036e4();
        }
        func_0x0001083f9830(unaff_x19 + 0xc,(int)pfVar47 + 1);
        func_0x0001084036f0();
        func_0x000108403d80();
        func_0x000108403840();
        func_0x000108403dec();
        func_0x000108400018(unaff_x19);
        pfVar47 = (float *)0x1;
      }
      func_0x000108403c34();
code_r0x0001083ffe98:
      unaff_x19[0x40] = fVar112;
      return pfVar47;
    case (undefined **)0x13:
    case (undefined **)0x14:
    case (undefined **)0x18:
    case (undefined **)0x19:
    case (undefined **)0x1a:
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      fVar86 = *pfVar32;
      *(float *)((long)register0x00000008 + -0xb4) = fVar86;
      if ((int)fVar86 < 1) {
        pfVar32 = (float *)0x0;
      }
      else {
        FUN_10841021c();
      }
      return pfVar32;
    case (undefined **)0x15:
    case (undefined **)0x16:
    case (undefined **)0x17:
      if ((int)ppuVar41 == 5) {
        fVar86 = *pfVar32;
        if (fVar86 == *param_2) {
          cVar5 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar27) {
            *pfVar32 = SUB84(param_3,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar27 = cVar5 == '\0';
        }
        else {
          bVar27 = false;
          ClearExclusiveLocal();
        }
      }
      else {
        fVar86 = *pfVar32;
        if (fVar86 == *param_2) {
          cVar5 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(pfVar32,0x10);
          if (bVar27) {
            *pfVar32 = SUB84(param_3,0);
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar27 = cVar5 == '\0';
        }
        else {
          bVar27 = false;
          ClearExclusiveLocal();
        }
      }
      if (!bVar27) {
        *param_2 = fVar86;
        return (float *)0x0;
      }
      return (float *)0x1;
    case (undefined **)0x1b:
      goto code_r0x0001083ff1e8;
    case (undefined **)0x1c:
      goto code_r0x0001084042f8;
    case (undefined **)0x1d:
      func_0x000108404d5c();
      return *(float **)pfVar32;
    case (undefined **)0x1e:
      NEON_ucvtf(auVar178,4);
      uVar29 = (uint)CONCAT12((byte)((ulong)extraout_d2 >> 0x18) >> 2 &
                              (byte)((ulong)extraout_d1 >> 0x10),
                              CONCAT11((byte)(((uint)fVar145 >> 10) >> 8) &
                                       (byte)((ulong)extraout_d1 >> 8),
                                       (byte)((uint)fVar145 >> 10) & (byte)extraout_d1));
      uVar25 = CONCAT12((byte)((ulong)extraout_var_16 >> 0x18) >> 2 &
                        (byte)((ulong)extraout_var_10 >> 0x10),
                        CONCAT11((byte)(((uint)fVar160 >> 10) >> 8) &
                                 (byte)((ulong)extraout_var_10 >> 8),
                                 (byte)((uint)fVar160 >> 10) & (byte)extraout_var_10));
      auVar67._0_12_ = ZEXT312(uVar25) << 0x40;
      auVar67[0xc] = (byte)((uint)fVar166 >> 10) & (byte)((ulong)extraout_var_10 >> 0x20);
      auVar67[0xd] = (byte)(((uint)fVar166 >> 10) >> 8) & (byte)((ulong)extraout_var_10 >> 0x28);
      auVar67[0xe] = (byte)((ulong)extraout_var_16 >> 0x3a) & (byte)((ulong)extraout_var_10 >> 0x30)
      ;
      auVar68._0_4_ = uVar29 + in_q4._0_4_;
      auVar68._4_4_ =
           (uint)(uint3)(CONCAT16((byte)((ulong)extraout_d2 >> 0x3a) &
                                  (byte)((ulong)extraout_d1 >> 0x30),
                                  CONCAT15((byte)(((uint)fVar146 >> 10) >> 8) &
                                           (byte)((ulong)extraout_d1 >> 0x28),
                                           CONCAT14((byte)((uint)fVar146 >> 10) &
                                                    (byte)((ulong)extraout_d1 >> 0x20),uVar29))) >>
                        0x20) + in_q4._4_4_;
      auVar68._8_4_ = (uint)uVar25 + in_q4._8_4_;
      auVar68._12_4_ = (uint)auVar67._12_3_ + in_q4._12_4_;
      NEON_ucvtf(auVar68,4);
      uVar55 = CONCAT44((uint)fVar146 >> 0x14,(uint)fVar145 >> 0x14) & 0xfffff3fffffff3ff;
      auVar73._0_4_ = (int)uVar55 + in_q4._0_4_;
      auVar73._4_4_ = (int)(uVar55 >> 0x20) + in_q4._4_4_;
      auVar73._8_4_ = ((uint)fVar160 >> 0x14 & 0xfffff3ff) + in_q4._8_4_;
      auVar73._12_4_ = ((uint)fVar166 >> 0x14 & 0xfffff3ff) + in_q4._12_4_;
      NEON_ucvtf(auVar73,4);
      goto LAB_10840dd88;
    case (undefined **)0x1f:
      NEON_fmax(in_q7,auVar179,4);
      func_0x00010840dd18();
      auVar78._8_8_ = extraout_var_20;
      auVar78._0_8_ = extraout_d3_00;
      auVar178 = NEON_fmax(in_q6,auVar78,4);
      auVar21[1] = extraout_var_48;
      auVar21[0] = extraout_b30_00;
      auVar21[2] = extraout_var_51;
      auVar21[3] = extraout_var_54;
      auVar21[4] = extraout_var_57;
      auVar21[5] = extraout_var_59;
      auVar21[6] = extraout_var_61;
      auVar21[7] = extraout_var_63;
      auVar21[8] = in_register_000053c8;
      auVar21[9] = in_register_000053c9;
      auVar21[10] = in_register_000053ca;
      auVar21[0xb] = in_register_000053cb;
      auVar21[0xc] = in_register_000053cc;
      auVar21[0xd] = in_register_000053cd;
      auVar21[0xe] = in_register_000053ce;
      auVar21[0xf] = in_register_000053cf;
      NEON_fmin(auVar178,auVar21,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0x20:
    case (undefined **)0x21:
      _memcpy();
      *(long *)(unaff_x20 + 2) = *(long *)(unaff_x20 + 2) + (long)unaff_x19;
      return pfVar32;
    case (undefined **)0x23:
    case (undefined **)0x25:
      *(undefined1 *)(ppuVar41 + 3) = 0;
      return (float *)0x0;
    case (undefined **)0x26:
      pfVar33 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar33,4);
      pfVar52 = (float *)((long)register0x00000008 + 0xab8);
      FUN_10834c90c(pfVar52,0xdf26510);
      *(float **)((long)register0x00000008 + -0x88) = pfVar52;
      FUN_1083a9268((float *)((long)register0x00000008 + 0x240),0,&UNK_10df26510,
                    (int)*(float *)((long)register0x00000008 + 0x70) * 0x53ae6118,unaff_x24);
      lVar51 = *(long *)((long)register0x00000008 + 0x240);
      if (lVar51 == 0) {
        *(float *)((long)register0x00000008 + -0x30) = 0.0;
        *(float *)((long)register0x00000008 + -0x2c) = 0.0;
        *(float *)((long)register0x00000008 + -0x28) = 0.0;
        *(float *)((long)register0x00000008 + -0x24) = 0.0;
        lVar40 = 0;
      }
      else {
        uVar43 = *(undefined8 *)(lVar51 + 8);
        *(undefined8 *)((long)register0x00000008 + -0x30) = *(undefined8 *)(lVar51 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar43;
        lVar40 = *(long *)((long)register0x00000008 + 0x248);
        if (lVar40 == 0) {
          lVar40 = *(long *)(lVar51 + 0x10);
        }
      }
      *(undefined **)((long)register0x00000008 + -0x58) = &UNK_10df26584;
      if (pfVar33 != (float *)0x0) {
        FUN_108343a94((float *)((long)register0x00000008 + 0xf0));
        uVar43 = *(undefined8 *)((long)register0x00000008 + 0xf0);
        *(float *)((long)register0x00000008 + 0xf0) = 0.0;
        *(float *)((long)register0x00000008 + 0xf4) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 0x1d0) = uVar43;
        *(float *)((long)register0x00000008 + 0x1e0) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x1e4) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x1d8) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x1dc) = 4.2039e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0xf0));
        if (pfVar47 != (float *)0x0) {
          do {
            cVar5 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(pfVar47,0x10);
            if (bVar27) {
              *pfVar47 = (float)((int)*pfVar47 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x80) = 0.0;
        *(float *)((long)register0x00000008 + 0x84) = 0.0;
        *(float **)((long)register0x00000008 + 0x160) = pfVar47;
        *(float *)((long)register0x00000008 + 0x170) = 5.60519e-45;
        *(float *)((long)register0x00000008 + 0x174) = 1.4013e-45;
        *(float *)((long)register0x00000008 + 0x168) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x16c) = 2.8026e-45;
        FUN_10810a400((float *)((long)register0x00000008 + 0x80));
        FUN_108345950((float *)((long)register0x00000008 + 0x160),pfVar33,0,
                      (float *)((long)register0x00000008 + 0x1d0),unaff_x28,0);
        FUN_10810a400((float *)((long)register0x00000008 + 0x160));
        FUN_10810a400((float *)((long)register0x00000008 + 0x1d0));
      }
      *(undefined **)((long)register0x00000008 + -0xa0) = &UNK_10df26510;
      *(float **)((long)register0x00000008 + -0x98) = pfVar47;
      *(float **)((long)register0x00000008 + -0x90) = unaff_x20;
      uVar66 = *(undefined8 *)(unaff_x27 + 0x12);
      auVar178 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0xe),
                          *(undefined1 (*) [16])(unaff_x27 + 0xe),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar178._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar178._0_8_;
      uVar72 = *(undefined8 *)(unaff_x27 + 0xc);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar66;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar72;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x1d0));
      uVar43 = *(undefined8 *)unaff_x27;
      uVar57 = *(undefined8 *)(unaff_x27 + 4);
      uVar58 = *(undefined8 *)(unaff_x27 + 6);
      uVar53 = *(undefined8 *)unaff_x27;
      uVar54 = *(undefined8 *)(unaff_x27 + 6);
      *(undefined8 *)((long)register0x00000008 + 0x298) = *(undefined8 *)(unaff_x27 + 2);
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar43;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar58;
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = uVar57;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x160));
      auVar178 = NEON_ext(*(undefined1 (*) [16])(unaff_x27 + 0x14),
                          *(undefined1 (*) [16])(unaff_x27 + 0x14),8,1);
      *(long *)((long)register0x00000008 + 0x2a0) = auVar178._8_8_;
      *(long *)((long)register0x00000008 + 0x298) = auVar178._0_8_;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar53;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar66;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0xf0));
      uVar43 = *(undefined8 *)(unaff_x27 + 8);
      *(undefined8 *)((long)register0x00000008 + 0x2a0) = *(undefined8 *)(unaff_x27 + 10);
      *(undefined8 *)((long)register0x00000008 + 0x298) = uVar43;
      *(undefined8 *)((long)register0x00000008 + 0x290) = uVar54;
      *(undefined8 *)((long)register0x00000008 + 0x2a8) = uVar72;
      func_0x0001084079c4((float *)((long)register0x00000008 + 0x80));
      uVar49 = (ulong)(uint)*(float *)((long)register0x00000008 + 0x70);
      FUN_108407868((float *)((long)register0x00000008 + 0x1d0),uVar49);
      FUN_108407868((float *)((long)register0x00000008 + 0x160),uVar49);
      lVar35 = 0;
      uVar55 = 0;
      uVar45 = *(ulong *)((long)register0x00000008 + -0x58);
      uVar46 = (ulong)((int)uVar45 + 1);
      *(ulong *)((long)register0x00000008 + -0x68) = uVar46;
      *(ulong *)((long)register0x00000008 + -0x60) = uVar49 + 1;
      *(ulong *)((long)register0x00000008 + -0x78) = uVar46 << 4;
      *(ulong *)((long)register0x00000008 + -0x70) = uVar46 << 3;
      *(long *)((long)register0x00000008 + -0x48) = lVar40 + 6;
      *(ulong *)((long)register0x00000008 + -0x40) = uVar46;
      *(ulong *)((long)register0x00000008 + -0x80) =
           ((uVar45 & 0xffffffff) * 2 + (uVar45 & 0xffffffff)) * 4;
      fVar86 = 0.0;
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x30);
      lVar51 = *(long *)((long)register0x00000008 + -0x88);
      auVar178 = ZEXT816(0);
      fVar112 = 1.0 / (float)uVar49;
      while( true ) {
        uVar28 = uVar55 == *(ulong *)((long)register0x00000008 + -0x60);
        if ((bool)uVar28) break;
        *(long *)((long)register0x00000008 + 0x68) = auVar178._8_8_;
        *(long *)((long)register0x00000008 + 0x60) = auVar178._0_8_;
        auVar178 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x1d0));
        *(undefined8 *)((long)register0x00000008 + -8) = extraout_var_00;
        *(long *)((long)register0x00000008 + -0x10) = auVar178._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x78) = extraout_var_11;
        *(long *)((long)register0x00000008 + 0x70) = auVar178._8_8_;
        auVar178 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x160));
        *(undefined8 *)((long)register0x00000008 + -0x18) = extraout_var_01;
        *(long *)((long)register0x00000008 + -0x20) = auVar178._0_8_;
        *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_12;
        *(long *)((long)register0x00000008 + 0x40) = auVar178._8_8_;
        uVar43 = *(undefined8 *)((long)register0x00000008 + -0x58);
        FUN_108407868((float *)((long)register0x00000008 + 0xf0),uVar43);
        FUN_108407868((float *)((long)register0x00000008 + 0x80),uVar43);
        uVar43 = *(undefined8 *)((long)register0x00000008 + 0x60);
        fVar151 = (float)uVar43;
        fVar152 = 1.0 - fVar151;
        *(ulong *)((long)register0x00000008 + -0x50) = uVar55 + 1;
        uVar57 = *(undefined8 *)((long)register0x00000008 + 0x1ac);
        uVar58 = *(undefined8 *)((long)register0x00000008 + 0x1c4);
        fVar153 = (float)*(undefined8 *)((long)register0x00000008 + 0x234) * fVar151 +
                  (float)*(undefined8 *)((long)register0x00000008 + 0x21c) * fVar152;
        fVar154 = (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x234) >> 0x20) *
                  fVar151 + (float)((ulong)*(undefined8 *)((long)register0x00000008 + 0x21c) >> 0x20
                                   ) * fVar152;
        *(float *)((long)register0x00000008 + -0x18) = *(float *)((long)register0x00000008 + -0x18);
        *(float *)((long)register0x00000008 + -0x14) = *(float *)((long)register0x00000008 + -0x14);
        *(ulong *)((long)register0x00000008 + -0x20) =
             CONCAT44(*(float *)((long)register0x00000008 + 0x40),
                      *(float *)((long)register0x00000008 + -0x20));
        *(float *)((long)register0x00000008 + -8) = *(float *)((long)register0x00000008 + -8);
        *(float *)((long)register0x00000008 + -4) = *(float *)((long)register0x00000008 + -4);
        *(ulong *)((long)register0x00000008 + -0x10) =
             CONCAT44(SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0),
                      *(float *)((long)register0x00000008 + -0x10));
        auVar178 = ZEXT816(0);
        psVar48 = *(short **)((long)register0x00000008 + -0x48);
        *(float *)((long)register0x00000008 + 0x58) = 0.0;
        *(float *)((long)register0x00000008 + 0x5c) = 0.0;
        *(ulong *)((long)register0x00000008 + 0x50) = (ulong)(uint)fVar152;
        for (uVar46 = 0; (uVar45 & 0xffffffff) + 1 != uVar46; uVar46 = uVar46 + 1) {
          *(long *)((long)register0x00000008 + 0x78) = auVar178._8_8_;
          *(long *)((long)register0x00000008 + 0x70) = auVar178._0_8_;
          auVar178 = func_0x0001084078d8((float *)((long)register0x00000008 + 0xf0));
          *(undefined8 *)((long)register0x00000008 + 0x38) = extraout_var_13;
          *(long *)((long)register0x00000008 + 0x30) = auVar178._8_8_;
          *(undefined8 *)((long)register0x00000008 + 0x48) = extraout_var_02;
          *(long *)((long)register0x00000008 + 0x40) = auVar178._0_8_;
          uVar72 = func_0x0001084078d8((float *)((long)register0x00000008 + 0x80));
          uVar43 = *(undefined8 *)((long)register0x00000008 + 0x60);
          fVar81 = SUB164(*(undefined1 (*) [16])((long)register0x00000008 + 0x70),0);
          fVar82 = 1.0 - fVar81;
          uVar66 = *(undefined8 *)((long)register0x00000008 + 0x50);
          *(ulong *)(*(long *)((long)register0x00000008 + -0x28) + uVar46 * 8) =
               CONCAT44((*(float *)((long)register0x00000008 + -0xc) * fVar81 +
                         *(float *)((long)register0x00000008 + -0x1c) * fVar82 +
                        (float)((ulong)uVar72 >> 0x20) * (float)uVar43 +
                        *(float *)((long)register0x00000008 + 0x30) * (float)uVar66) -
                        (fVar154 * fVar81 +
                        ((float)((ulong)uVar58 >> 0x20) * fVar151 +
                        (float)((ulong)uVar57 >> 0x20) * fVar152) * fVar82),
                        (*(float *)((long)register0x00000008 + -0x10) * fVar81 +
                         *(float *)((long)register0x00000008 + -0x20) * fVar82 +
                        (float)uVar72 * (float)uVar43 +
                        (float)*(undefined8 *)((long)register0x00000008 + 0x40) * (float)uVar66) -
                        (fVar153 * fVar81 +
                        ((float)uVar58 * fVar151 + (float)uVar57 * fVar152) * fVar82));
          if (pfVar33 != (float *)0x0) {
            uVar43 = *(undefined8 *)pfVar33;
            uVar72 = *(undefined8 *)(pfVar33 + 4);
            uVar53 = *(undefined8 *)(pfVar33 + 8);
            uVar54 = *(undefined8 *)(pfVar33 + 10);
            uVar22 = *(undefined8 *)(pfVar33 + 0xc);
            uVar23 = *(undefined8 *)(pfVar33 + 0xe);
            *(undefined8 *)((long)register0x00000008 + 0x18) = *(undefined8 *)(pfVar33 + 6);
            *(undefined8 *)((long)register0x00000008 + 0x10) = uVar72;
            *(undefined8 *)((long)register0x00000008 + 0x28) = uVar23;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar22;
            *(undefined8 *)((long)register0x00000008 + 0x38) = uVar54;
            *(undefined8 *)((long)register0x00000008 + 0x30) = uVar53;
            *(float *)((long)register0x00000008 + 0x48) = 0.0;
            *(float *)((long)register0x00000008 + 0x4c) = 0.0;
            *(ulong *)((long)register0x00000008 + 0x40) = (ulong)(uint)fVar82;
            func_0x000108407988(uVar43,uVar66);
            uVar43 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 8) = extraout_var_03;
            *(undefined8 *)register0x00000008 = uVar43;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar43 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x18) =
                 *(float *)((long)register0x00000008 + 8) + (float)extraout_var_04;
            *(float *)((long)register0x00000008 + 0x1c) =
                 *(float *)((long)register0x00000008 + 0xc) +
                 (float)((ulong)extraout_var_04 >> 0x20);
            *(float *)((long)register0x00000008 + 0x10) =
                 *(float *)register0x00000008 + (float)uVar43;
            *(float *)((long)register0x00000008 + 0x14) =
                 *(float *)((long)register0x00000008 + 4) + (float)((ulong)uVar43 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x20),
                                *(undefined8 *)((long)register0x00000008 + 0x50));
            uVar43 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_05;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar43;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x60));
            uVar43 = func_0x0001084079ac();
            *(float *)((long)register0x00000008 + 0x38) =
                 *(float *)((long)register0x00000008 + 0x28) + (float)extraout_var_06;
            *(float *)((long)register0x00000008 + 0x3c) =
                 *(float *)((long)register0x00000008 + 0x2c) +
                 (float)((ulong)extraout_var_06 >> 0x20);
            *(float *)((long)register0x00000008 + 0x30) =
                 *(float *)((long)register0x00000008 + 0x20) + (float)uVar43;
            *(float *)((long)register0x00000008 + 0x34) =
                 *(float *)((long)register0x00000008 + 0x24) + (float)((ulong)uVar43 >> 0x20);
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x10),
                                *(undefined8 *)((long)register0x00000008 + 0x40));
            uVar43 = func_0x0001084079ac();
            *(undefined8 *)((long)register0x00000008 + 0x28) = extraout_var_07;
            *(undefined8 *)((long)register0x00000008 + 0x20) = uVar43;
            func_0x000108407988(*(undefined8 *)((long)register0x00000008 + 0x30),
                                *(undefined8 *)((long)register0x00000008 + 0x70));
            auVar178 = *(undefined1 (*) [16])((long)register0x00000008 + 0x40);
            uVar66 = *(undefined8 *)((long)register0x00000008 + 0x50);
            uVar43 = *(undefined8 *)((long)register0x00000008 + 0x60);
            auVar179 = *(undefined1 (*) [16])((long)register0x00000008 + 0x70);
            uVar72 = func_0x0001084079ac();
            fVar82 = auVar178._0_4_;
            fVar81 = auVar179._0_4_;
            auVar178 = *(undefined1 (*) [16])((long)register0x00000008 + 0x20);
            pfVar47 = (float *)(lVar51 + uVar46 * 0x10);
            pfVar47[2] = auVar178._8_4_ + (float)extraout_var_08;
            pfVar47[3] = auVar178._12_4_ + (float)((ulong)extraout_var_08 >> 0x20);
            *pfVar47 = auVar178._0_4_ + (float)uVar72;
            pfVar47[1] = auVar178._4_4_ + (float)((ulong)uVar72 >> 0x20);
          }
          if (*(long *)((long)register0x00000008 + -0x30) != 0) {
            fVar83 = (float)uVar43;
            fVar170 = (float)uVar66;
            *(ulong *)(*(long *)((long)register0x00000008 + -0x38) + uVar46 * 8) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(pfVar39 + 4) >> 0x20) * fVar83 +
                          (float)((ulong)*(undefined8 *)(pfVar39 + 6) >> 0x20) * fVar170) * fVar81 +
                          ((float)((ulong)*(undefined8 *)(pfVar39 + 2) >> 0x20) * fVar83 +
                          (float)((ulong)*(undefined8 *)pfVar39 >> 0x20) * fVar170) * fVar82,
                          ((float)*(undefined8 *)(pfVar39 + 4) * fVar83 +
                          (float)*(undefined8 *)(pfVar39 + 6) * fVar170) * fVar81 +
                          ((float)*(undefined8 *)(pfVar39 + 2) * fVar83 +
                          (float)*(undefined8 *)pfVar39 * fVar170) * fVar82);
          }
          if (uVar55 < uVar49 && uVar46 < (uVar45 & 0xffffffff)) {
            sVar24 = (short)uVar46;
            sVar3 = (short)lVar35 + sVar24;
            psVar48[-3] = sVar3;
            psVar48[-2] = (short)lVar35 + sVar24 + 1;
            uVar66 = *(undefined8 *)((long)register0x00000008 + -0x40);
            sVar4 = (short)uVar66 + sVar24 + 1;
            psVar48[-1] = sVar4;
            *psVar48 = sVar3;
            psVar48[1] = sVar4;
            psVar48[2] = (short)uVar66 + sVar24;
          }
          fVar81 = 1.0 / (float)(uVar45 & 0xffffffff) + fVar81;
          fVar82 = 1.0;
          if (fVar81 <= 1.0) {
            fVar82 = fVar81;
          }
          if (fVar82 <= fVar86) {
            fVar82 = fVar86;
          }
          auVar178 = ZEXT416((uint)fVar82);
          psVar48 = psVar48 + 6;
        }
        fVar152 = fVar112 + (float)uVar43;
        fVar151 = 1.0;
        if (fVar152 <= 1.0) {
          fVar151 = fVar152;
        }
        *(long *)((long)register0x00000008 + -0x28) =
             *(long *)((long)register0x00000008 + -0x28) +
             *(long *)((long)register0x00000008 + -0x70);
        lVar51 = lVar51 + *(long *)((long)register0x00000008 + -0x78);
        *(long *)((long)register0x00000008 + -0x38) =
             *(long *)((long)register0x00000008 + -0x38) +
             *(long *)((long)register0x00000008 + -0x70);
        if (fVar151 <= fVar86) {
          fVar151 = fVar86;
        }
        auVar178 = ZEXT416((uint)fVar151);
        lVar35 = lVar35 + *(long *)((long)register0x00000008 + -0x68);
        uVar55 = *(ulong *)((long)register0x00000008 + -0x50);
        *(long *)((long)register0x00000008 + -0x48) =
             *(long *)((long)register0x00000008 + -0x48) +
             *(long *)((long)register0x00000008 + -0x80);
        *(long *)((long)register0x00000008 + -0x40) =
             *(long *)((long)register0x00000008 + -0x40) +
             *(long *)((long)register0x00000008 + -0x68);
      }
      uVar43 = *(undefined8 *)((long)register0x00000008 + -0x90);
      if (*(long *)((long)register0x00000008 + -0x88) != 0) {
        if (*(long *)((long)register0x00000008 + 0x240) == 0) {
          uVar57 = 0;
        }
        else {
          uVar57 = *(undefined8 *)(*(long *)((long)register0x00000008 + 0x240) + 0x20);
        }
        uVar55 = *(ulong *)((long)register0x00000008 + -0xa0);
        piVar2 = *(int **)((long)register0x00000008 + -0x98);
        if (piVar2 != (int *)0x0) {
          do {
            cVar5 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar27) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(float *)((long)register0x00000008 + 0x270) = 0.0;
        *(float *)((long)register0x00000008 + 0x274) = 0.0;
        *(int **)((long)register0x00000008 + 0x278) = piVar2;
        *(float *)((long)register0x00000008 + 0x280) = 2.52234e-44;
        *(float *)((long)register0x00000008 + 0x284) = 2.8026e-45;
        *(ulong *)((long)register0x00000008 + 0x288) = uVar55 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x270));
        FUN_108343a94((float *)((long)register0x00000008 + 0x250));
        uVar58 = *(undefined8 *)((long)register0x00000008 + 0x250);
        *(float *)((long)register0x00000008 + 0x250) = 0.0;
        *(float *)((long)register0x00000008 + 0x254) = 0.0;
        *(undefined8 *)((long)register0x00000008 + 600) = uVar58;
        *(float *)((long)register0x00000008 + 0x260) = 8.40779e-45;
        *(float *)((long)register0x00000008 + 0x264) = 4.2039e-45;
        *(ulong *)((long)register0x00000008 + 0x268) = uVar55 & 0xffffffff | 0x100000000;
        FUN_10810a400((float *)((long)register0x00000008 + 0x250));
        FUN_108345950((float *)((long)register0x00000008 + 600),uVar57,0,
                      (float *)((long)register0x00000008 + 0x278),
                      *(undefined8 *)((long)register0x00000008 + -0x88),0);
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
      }
      FUN_1083a93b8(uVar43,(float *)((long)register0x00000008 + 0x240));
      pfVar47 = (float *)((long)register0x00000008 + 0x240);
      FUN_10834845c(pfVar47);
      func_0x0001084079cc();
      func_0x0001084079d8(*(undefined8 *)((long)register0x00000008 + -0xa8));
      if (!(bool)uVar28) {
        ___stack_chk_fail();
        FUN_10810a400((float *)((long)register0x00000008 + 600));
        FUN_10810a400((float *)((long)register0x00000008 + 0x278));
        FUN_10834845c((float *)((long)register0x00000008 + 0x240));
        func_0x0001084079cc();
        do {
          __Unwind_Resume(pfVar47);
        } while( true );
      }
      return pfVar47;
    case (undefined **)0x27:
      goto LAB_108401208;
    case (undefined **)0x28:
      FUN_1084025f8((float *)((long)register0x00000008 + -0x98));
      pfVar47 = (float *)((long)register0x00000008 + -0x98);
      FUN_108401e48(pfVar47,unaff_x20);
      if (((ulong)pfVar47 & 1) == 0) {
        unaff_x19[0] = 0.0;
        unaff_x19[1] = 0.0;
      }
      else {
        FUN_1084021e0(unaff_x19,(float *)((long)register0x00000008 + -0x98));
      }
      pfVar47 = (float *)((long)register0x00000008 + -0x98);
      FUN_10840284c(pfVar47);
      return pfVar47;
    case (undefined **)0x29:
      fVar86 = pfVar32[0x20];
      fVar112 = pfVar32[0x28];
      fVar151 = pfVar32[0x30];
      uVar43 = *(undefined8 *)(pfVar32 + 0x14);
      pfVar47 = pfVar32 + 0xc;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      *(float *)((long)register0x00000008 + -0xb8) = fVar112;
      *(float *)((long)register0x00000008 + -0xb4) = fVar86;
      *(float *)((long)register0x00000008 + -0xbc) = fVar151;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar43;
      FUN_1083fa6d0(pfVar47,(float *)((long)register0x00000008 + -0xb4),
                    (float *)((long)register0x00000008 + -0xb8),
                    (float *)((long)register0x00000008 + -0xbc),pfVar32 + 0x10,
                    (float *)((long)register0x00000008 + -200));
      return pfVar47;
    case (undefined **)0x2a:
      goto code_r0x000108400dfc;
    case (undefined **)0x2b:
      goto code_r0x0001083ff184;
    case (undefined **)0x2d:
    case (undefined **)0x2f:
    case (undefined **)0x31:
      goto code_r0x0001083ff19c;
    case (undefined **)0x33:
      goto code_r0x0001083ff1b4;
    case (undefined **)0x35:
    case (undefined **)0x37:
    case (undefined **)0x39:
      goto code_r0x0001083ff1cc;
    case (undefined **)0x3b:
      goto code_r0x0001083fef74;
    case (undefined **)0x3d:
    case (undefined **)0x3f:
      goto code_r0x0001083fef8c;
    case (undefined **)0x41:
    case (undefined **)0x49:
    case (undefined **)0x51:
    case (undefined **)0x59:
    case (undefined **)0x61:
    case (undefined **)0x69:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x85:
    case (undefined **)0x87:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
code_r0x0001083ff294:
      func_0x000108403908();
      if ((int)pfVar32 != 0) {
        func_0x00010840379c();
        (**(code **)(extraout_x8_06 + 0x50))();
        *(ulong *)((long)register0x00000008 + -0x98) = CONCAT44(unaff_00005104,unaff_s8);
        *(float **)((long)register0x00000008 + -0xa0) = unaff_x20 + 4;
        *(float **)((long)register0x00000008 + -0x90) = pfVar32;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_108401ae0(unaff_x19,(float *)((long)register0x00000008 + -0xa0),
                      *(undefined8 *)(pfVar39 + 4));
        if (((ulong)unaff_x19 & 1) == 0) break;
        func_0x000108403908();
        unaff_x22 = unaff_x19;
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0x43:
      goto code_r0x0001083fefa0;
    case (undefined **)0x45:
    case (undefined **)0x47:
      goto code_r0x0001083fefb4;
    case (undefined **)0x4b:
      goto code_r0x0001083fefcc;
    case (undefined **)0x4d:
    case (undefined **)0x4f:
      goto code_r0x0001083fefe4;
    case (undefined **)0x53:
      goto code_r0x0001083feff8;
    case (undefined **)0x55:
      goto code_r0x0001083ff00c;
    case (undefined **)0x57:
      goto code_r0x0001083ff020;
    case (undefined **)0x5b:
      goto code_r0x0001083ff0f4;
    case (undefined **)0x5d:
      goto code_r0x0001083ff10c;
    case (undefined **)0x5f:
      goto code_r0x0001083ff124;
    case (undefined **)0x63:
      goto code_r0x0001083ff13c;
    case (undefined **)0x65:
      goto code_r0x0001083ff154;
    case (undefined **)0x67:
      goto code_r0x0001083ff16c;
    case (undefined **)0x6b:
      goto code_r0x0001083fee7c;
    case (undefined **)0x73:
      goto code_r0x0001083ff038;
    case (undefined **)0x75:
      goto code_r0x0001083ff04c;
    case (undefined **)0x77:
    case (undefined **)0x79:
      goto code_r0x0001083ff060;
    case (undefined **)0x7b:
      goto code_r0x0001083ff078;
    case (undefined **)0x7d:
      goto code_r0x0001083ff08c;
    case (undefined **)0x7f:
    case (undefined **)0x81:
      goto code_r0x0001083ff0a0;
    case (undefined **)0x83:
      goto code_r0x0001083ff0b4;
    case (undefined **)0x8b:
      goto code_r0x0001083ff0c8;
    case (undefined **)0x93:
    case (undefined **)0xc7:
    case (undefined **)0xd3:
    case (undefined **)0xe0:
      goto code_r0x00010840bb18;
    case (undefined **)0x94:
    case (undefined **)0xc8:
    case (undefined **)0xd4:
    case (undefined **)0xe1:
      pfVar47 = unaff_x19;
      func_0x00010c29bf00(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      auVar178 = func_0x00010c27adc0(unaff_x19);
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      pfVar39 = pfVar47;
      func_0x000107c318f8();
      _objc_release(pfVar47);
      if ((pfVar47 != (float *)0x0) && ((int)pfVar39 != 0)) {
        pfVar47 = unaff_x19;
        func_0x00010c29bf00(unaff_x19);
        _objc_retainAutoreleasedReturnValue();
        pfVar39 = unaff_x19;
        func_0x00010c252440();
        if ((long)pfVar39 - 3U < 2) {
          pfVar39 = unaff_x19;
          func_0x00010c29bf00(unaff_x19);
          _objc_retainAutoreleasedReturnValue();
          auVar179 = func_0x00010c297a00(unaff_x19);
          _objc_release(pfVar39);
          func_0x00010be935e0(auVar178._0_8_,auVar178._8_8_,auVar179._0_8_,auVar179._8_8_,unaff_x20)
          ;
        }
        else if (pfVar39 == (float *)0x2) {
          func_0x00010bf08ae0(auVar178._0_8_,auVar178._8_8_,pfVar47);
        }
        else if (pfVar39 == (float *)0x1) {
          func_0x00010c1f7b20(pfVar47);
        }
        _objc_release(pfVar47);
      }
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x95:
    case (undefined **)0xc9:
    case (undefined **)0xd5:
    case (undefined **)0xe2:
      goto code_r0x000108411b2c;
    case (undefined **)0x96:
    case (undefined **)0xca:
    case (undefined **)0xd6:
    case (undefined **)0xe3:
      pfVar33 = unaff_x19;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
      *(float **)((long)register0x00000008 + -200) = pfVar39;
      *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_1084132b0;
      pfVar47 = pfVar33 + 8;
      _objc_loadWeakRetained(pfVar47);
      pfVar52 = pfVar47;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      pfVar39 = pfVar33 + 8;
      _objc_loadWeakRetained(pfVar39);
      func_0x00010c154120(*(undefined8 *)(pfVar33 + 10),pfVar52);
      _objc_release(pfVar39);
      _objc_release(pfVar52);
      _objc_release(pfVar47);
      puVar38 = PTR__OBJC_CLASS___UIView_1126aec20;
      *(undefined **)((long)register0x00000008 + -0xf8) = PTR___NSConcreteStackBlock_11034bd00;
      *(float *)((long)register0x00000008 + -0xf0) = -32.0;
      *(float *)((long)register0x00000008 + -0xec) = 0.0;
      *(code **)((long)register0x00000008 + -0xe8) = FUN_1084133b8;
      *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_1108434b0;
      _objc_copyWeak((float *)((long)register0x00000008 + -0xd8),pfVar33 + 8);
      func_0x00010bf03460(0x3fd999999999999a,0,0x3feccccccccccccd,0,puVar38);
      pfVar47 = (float *)((long)register0x00000008 + -0xd8);
      _objc_destroyWeak(pfVar47);
      return pfVar47;
    case (undefined **)0x97:
    case (undefined **)0xcb:
    case (undefined **)0xd7:
    case (undefined **)0xe4:
LAB_10840dd88:
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)(pfVar32,param_2 + 2);
      return pfVar32;
    case (undefined **)0x98:
      func_0x00010bf408e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069fe0();
      unaff_x19 = pfVar32;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x99:
      func_0x00010bf529e0();
      if ((unaff_x23 != (float *)0x0) || (uVar55 = unaff_x24, func_0x00010bf529e0(), uVar55 != 0)) {
        func_0x00010becf4e0(pfVar39);
      }
      _objc_release(unaff_x24);
      _objc_release(&UNK_10df26510);
      _objc_release(pfVar47);
      _objc_release(unaff_x20);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9a:
      goto code_r0x00010841a3bc;
    case (undefined **)0x9b:
      *(int *)((long)register0x00000008 + -0xa0) = (int)ppuVar41;
      func_0x00010bf00dc0();
      *(float **)(unaff_x19 + 0x1b6) = pfVar32;
      return pfVar32;
    case (undefined **)0x9c:
    case (undefined **)0xc3:
    case (undefined **)0xdc:
      *(float **)((long)register0x00000008 + -0x80) = pfVar52;
      *(float *)((long)register0x00000008 + -0x78) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0x74) = 1.4013e-45;
      lVar51 = (long)_DAT_1127748dc;
      _objc_retain(param_3);
      unaff_x19 = *(float **)((long)pfVar32 + lVar51);
      *(float **)((long)pfVar32 + lVar51) = param_3;
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9d:
    case (undefined **)0xc4:
    case (undefined **)0xdd:
    case (undefined **)0xb4:
      _objc_destroyWeak();
      _objc_destroyWeak(pfVar39 + 10);
      _objc_destroyWeak(pfVar39 + 8);
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x50));
      _objc_destroyWeak((float *)((long)register0x00000008 + -0x48));
      pfVar33 = unaff_x19;
      __Unwind_Resume();
      *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
      *(float **)((long)register0x00000008 + -200) = pfVar39;
      *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(code **)((long)register0x00000008 + -0xa8) = FUN_108419b94;
      unaff_x19 = pfVar33 + 8;
      _objc_loadWeakRetained(unaff_x19);
      pfVar47 = pfVar33 + 10;
      _objc_loadWeakRetained(pfVar47);
      func_0x00010bdceda0(*(undefined8 *)(pfVar33 + 0xc),*(undefined8 *)(pfVar33 + 0xe),unaff_x19);
      _objc_release(pfVar47);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0x9e:
    case (undefined **)0xc5:
    case (undefined **)0xde:
      goto code_r0x000108417fb4;
    case (undefined **)0x9f:
      func_0x00010bfc18e0();
      _objc_release(pfVar39);
      _objc_release(unaff_x19);
      return unaff_x19;
    case (undefined **)0xa0:
    case (undefined **)0xe8:
      func_0x00010bf00dc0();
      *(float **)(unaff_x19 + 0x1a4) = pfVar32;
      return pfVar32;
    case (undefined **)0xa1:
    case (undefined **)0xaa:
    case (undefined **)0xb8:
    case (undefined **)0xee:
    case (undefined **)0xfb:
      return (float *)(ulong)((int)(fVar159 + (float)extraout_d1) + 0x7793U & 0xffff);
    case (undefined **)0xa2:
    case (undefined **)0xab:
    case (undefined **)0xb9:
    case (undefined **)0xef:
      *(float **)((long)register0x00000008 + -0xa0) = pfVar32;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar41;
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),
                          PTR_s_viewDidDisappear__112684c48);
      func_0x00010bf3ace0(*(undefined8 *)((long)unaff_x19 + (long)_DAT_1127748fc));
      pfVar47 = unaff_x19;
      func_0x00010c06d1a0();
      if (((ulong)pfVar47 & 1) == 0) {
        iVar56 = (int)*(undefined8 *)((long)unaff_x19 + (long)_DAT_112774908);
        func_0x00010c06d1a0();
        if ((((ulong)unaff_x20 & 1) != 0) || (iVar56 == 0)) goto LAB_108412258;
      }
      else if (((ulong)unaff_x20 & 1) != 0) goto LAB_108412258;
      lVar51 = (long)unaff_x19 + (long)_DAT_112774920;
      _objc_loadWeakRetained(lVar51);
      func_0x00010c154120(0);
      _objc_release(lVar51);
LAB_108412258:
      *(undefined1 *)((long)unaff_x19 + (long)_DAT_112774924) = 0;
      func_0x00010be55a20(unaff_x19);
      return unaff_x19;
    case (undefined **)0xa3:
    case (undefined **)0xac:
    case (undefined **)0xba:
    case (undefined **)0xf0:
      goto LAB_1084136b0;
    case (undefined **)0xa4:
    case (undefined **)0xad:
    case (undefined **)0xbb:
    case (undefined **)0xf1:
      goto code_r0x00010841378c;
    case (undefined **)0xa5:
    case (undefined **)0xae:
    case (undefined **)0xbc:
    case (undefined **)0xf2:
                    /* WARNING: Could not recover jumptable at 0x00010840b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(extraout_d0,in_q5._0_8_);
      return pfVar32;
    case (undefined **)0xa6:
    case (undefined **)0xaf:
    case (undefined **)0xbd:
    case (undefined **)0xf3:
      _objc_release(unaff_x20);
      return (float *)(ulong)(0.0 <= (double)CONCAT44(unaff_00005104,unaff_s8));
    case (undefined **)0xa7:
      goto code_r0x000108411ab8;
    case (undefined **)0xa8:
    case (undefined **)0xb6:
    case (undefined **)0xbf:
    case (undefined **)0xcd:
    case (undefined **)0xec:
    case (undefined **)0xf9:
      return pfVar32;
    case (undefined **)0xa9:
    case (undefined **)0xb7:
    case (undefined **)0xce:
    case (undefined **)0xed:
    case (undefined **)0xfa:
      goto code_r0x00010841bf90;
    case (undefined **)0xb0:
      fVar81 = 2.1158898e-37;
      fVar82 = *(float *)(ppuVar41 + 1);
      fVar162 = *(float *)((long)ppuVar41 + 0xc);
      iVar56 = -(uint)(fVar159 == 0.0);
      iVar63 = -(uint)(fVar79 == 0.0);
      iVar64 = -(uint)((float)extraout_var == 0.0);
      iVar65 = -(uint)(fVar169 == 0.0);
      auVar178 = ZEXT216(0);
      auVar179 = NEON_fmov(0x3f800000,4);
      iVar87 = -(uint)((float)CONCAT13(extraout_var_53,
                                       CONCAT12(extraout_var_50,
                                                CONCAT11(extraout_var_47,extraout_b30))) ==
                      auVar179._0_4_);
      iVar92 = -(uint)((float)CONCAT13(extraout_var_62,
                                       CONCAT12(extraout_var_60,
                                                CONCAT11(extraout_var_58,extraout_var_56))) ==
                      auVar179._4_4_);
      iVar94 = -(uint)((float)CONCAT13(in_register_000053cb,
                                       CONCAT12(in_register_000053ca,
                                                CONCAT11(in_register_000053c9,in_register_000053c8))
                                      ) == auVar179._8_4_);
      iVar96 = -(uint)((float)CONCAT13(in_register_000053cf,
                                       CONCAT12(in_register_000053ce,
                                                CONCAT11(in_register_000053cd,in_register_000053cc))
                                      ) == auVar179._12_4_);
      auVar60[0] = ~(byte)iVar56 & ~(byte)iVar87;
      auVar60[1] = ~(byte)((uint)iVar56 >> 8) & ~(byte)((uint)iVar87 >> 8);
      auVar60[2] = ~(byte)((uint)iVar56 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
      auVar60[3] = ~(byte)((uint)iVar56 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
      auVar60[4] = ~(byte)iVar63 & ~(byte)iVar92;
      auVar60[5] = ~(byte)((uint)iVar63 >> 8) & ~(byte)((uint)iVar92 >> 8);
      auVar60[6] = ~(byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
      auVar60[7] = ~(byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
      auVar60[8] = ~(byte)iVar64 & ~(byte)iVar94;
      auVar60[9] = ~(byte)((uint)iVar64 >> 8) & ~(byte)((uint)iVar94 >> 8);
      auVar60[10] = ~(byte)((uint)iVar64 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      auVar60[0xb] = ~(byte)((uint)iVar64 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      auVar60[0xc] = ~(byte)iVar65 & ~(byte)iVar96;
      auVar60[0xd] = ~(byte)((uint)iVar65 >> 8) & ~(byte)((uint)iVar96 >> 8);
      auVar60[0xe] = ~(byte)((uint)iVar65 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      auVar60[0xf] = ~(byte)((uint)iVar65 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar18[1] = extraout_var_47;
      auVar18[0] = extraout_b30;
      auVar18[2] = extraout_var_50;
      auVar18[3] = extraout_var_53;
      auVar18[4] = extraout_var_56;
      auVar18[5] = extraout_var_58;
      auVar18[6] = extraout_var_60;
      auVar18[7] = extraout_var_62;
      auVar18[8] = in_register_000053c8;
      auVar18[9] = in_register_000053c9;
      auVar18[10] = in_register_000053ca;
      auVar18[0xb] = in_register_000053cb;
      auVar18[0xc] = in_register_000053cc;
      auVar18[0xd] = in_register_000053cd;
      auVar18[0xe] = in_register_000053ce;
      auVar18[0xf] = in_register_000053cf;
      auVar180 = NEON_ucvtf(auVar18,4);
      fVar97 = 1.1920929e-07;
      fVar88 = 1.1920929e-07;
      fVar93 = 1.1920929e-07;
      fVar95 = 1.1920929e-07;
      bVar133 = 0xff;
      bVar134 = 0xff;
      bVar135 = 0x7f;
      bVar136 = 0;
      bVar120 = 0xff;
      bVar122 = 0xff;
      bVar123 = 0x7f;
      bVar124 = 0;
      bVar125 = 0xff;
      bVar126 = 0xff;
      bVar127 = 0x7f;
      bVar128 = 0;
      bVar129 = 0xff;
      bVar130 = 0xff;
      bVar131 = 0x7f;
      bVar132 = 0;
      fVar152 = (float)(CONCAT12(extraout_var_50,CONCAT11(extraout_var_47,extraout_b30)) & 0x7fffff
                       | 0x3f000000);
      fVar153 = (float)(CONCAT12(extraout_var_60,CONCAT11(extraout_var_58,extraout_var_56)) &
                        0x7fffff | 0x3f000000);
      fVar154 = (float)(CONCAT12(in_register_000053ca,
                                 CONCAT11(in_register_000053c9,in_register_000053c8)) & 0x7fffff |
                       0x3f000000);
      fVar83 = (float)(CONCAT12(in_register_000053ce,
                                CONCAT11(in_register_000053cd,in_register_000053cc)) & 0x7fffff |
                      0x3f000000);
      fVar86 = -124.22552;
      fVar112 = -1.4980303;
      fVar150 = 0.35208872;
      fVar147 = 0.35208872;
      fVar148 = 0.35208872;
      fVar149 = 0.35208872;
      fVar151 = 1.72588;
      fVar170 = ((auVar180._0_4_ * 1.1920929e-07 + -124.22552 + fVar152 * -1.4980303) -
                1.72588 / (fVar152 + 0.35208872)) * fVar162;
      fVar159 = ((auVar180._4_4_ * 1.1920929e-07 + -124.22552 + fVar153 * -1.4980303) -
                1.72588 / (fVar153 + 0.35208872)) * fVar162;
      fVar79 = ((auVar180._8_4_ * 1.1920929e-07 + -124.22552 + fVar154 * -1.4980303) -
               1.72588 / (fVar154 + 0.35208872)) * fVar162;
      fVar83 = ((auVar180._12_4_ * 1.1920929e-07 + -124.22552 + fVar83 * -1.4980303) -
               1.72588 / (fVar83 + 0.35208872)) * fVar162;
      fVar158 = 121.274055;
      fVar155 = 121.274055;
      fVar156 = 121.274055;
      fVar157 = 121.274055;
      fVar152 = -1.4901291;
      fVar153 = 4.8425255;
      fVar154 = 27.728024;
      fVar167 = 8388608.0;
      fVar168 = 8388608.0;
      auVar14._4_4_ =
           (fVar159 + 121.274055 + (fVar159 - (float)(int)fVar159) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar159 - (float)(int)fVar159))) * 8388608.0;
      auVar14._0_4_ =
           (fVar170 + 121.274055 + (fVar170 - (float)(int)fVar170) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar170 - (float)(int)fVar170))) * 8388608.0;
      auVar14._8_4_ =
           (fVar79 + 121.274055 + (fVar79 - (float)(int)fVar79) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar79 - (float)(int)fVar79))) * 8388608.0;
      auVar14._12_4_ =
           (fVar83 + 121.274055 + (fVar83 - (float)(int)fVar83) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar83 - (float)(int)fVar83))) * 8388608.0;
      auVar180 = NEON_fmax(auVar14,auVar178,4);
      uVar44 = 0x4eff0000;
      auVar15._8_4_ = 0x4eff0000;
      auVar15._0_8_ = 0x4eff00004eff0000;
      auVar15._12_4_ = 0x4eff0000;
      auVar180 = NEON_fmin(auVar180,auVar15,4);
      auVar174._0_4_ = (int)auVar180._0_4_;
      auVar174._4_4_ = (int)auVar180._4_4_;
      auVar174._8_4_ = (int)auVar180._8_4_;
      auVar174._12_4_ = (int)auVar180._12_4_;
      auVar19[1] = extraout_var_47;
      auVar19[0] = extraout_b30;
      auVar19[2] = extraout_var_50;
      auVar19[3] = extraout_var_53;
      auVar19[4] = extraout_var_56;
      auVar19[5] = extraout_var_58;
      auVar19[6] = extraout_var_60;
      auVar19[7] = extraout_var_62;
      auVar19[8] = in_register_000053c8;
      auVar19[9] = in_register_000053c9;
      auVar19[10] = in_register_000053ca;
      auVar19[0xb] = in_register_000053cb;
      auVar19[0xc] = in_register_000053cc;
      auVar19[0xd] = in_register_000053cd;
      auVar19[0xe] = in_register_000053ce;
      auVar19[0xf] = in_register_000053cf;
      auVar61[1] = extraout_var_47;
      auVar61[0] = extraout_b30;
      auVar61[2] = extraout_var_50;
      auVar61[3] = extraout_var_53;
      auVar61[4] = extraout_var_56;
      auVar61[5] = extraout_var_58;
      auVar61[6] = extraout_var_60;
      auVar61[7] = extraout_var_62;
      auVar61[8] = in_register_000053c8;
      auVar61[9] = in_register_000053c9;
      auVar61[10] = in_register_000053ca;
      auVar61[0xb] = in_register_000053cb;
      auVar61[0xc] = in_register_000053cc;
      auVar61[0xd] = in_register_000053cd;
      auVar61[0xe] = in_register_000053ce;
      auVar61[0xf] = in_register_000053cf;
      auVar61 = auVar61 ^ (auVar19 ^ auVar174) & auVar60;
      fVar83 = auVar61._4_4_ * fVar82 + 2.1158898e-37;
      fVar170 = auVar61._8_4_ * fVar82 + 2.1158898e-37;
      fVar159 = auVar61._12_4_ * fVar82 + 2.1158898e-37;
      auVar20[4] = SUB41(fVar83,0);
      auVar20._0_4_ = auVar61._0_4_ * fVar82 + 2.1158898e-37;
      auVar20[5] = (char)((uint)fVar83 >> 8);
      auVar20[6] = (char)((uint)fVar83 >> 0x10);
      auVar20[7] = (char)((uint)fVar83 >> 0x18);
      auVar20[8] = SUB41(fVar170,0);
      auVar20[9] = (char)((uint)fVar170 >> 8);
      auVar20[10] = (char)((uint)fVar170 >> 0x10);
      auVar20[0xb] = (char)((uint)fVar170 >> 0x18);
      auVar20[0xc] = SUB41(fVar159,0);
      auVar20[0xd] = (char)((uint)fVar159 >> 8);
      auVar20[0xe] = (char)((uint)fVar159 >> 0x10);
      auVar20[0xf] = (char)((uint)fVar159 >> 0x18);
      auVar180 = NEON_fmax(auVar20,auVar178,4);
      fVar82 = *(float *)(ppuVar41 + 2);
      fVar98 = *(float *)((long)ppuVar41 + 0x14);
      auVar62._0_4_ = auVar180._0_4_ / (fVar82 + auVar61._0_4_ * fVar98);
      auVar62._4_4_ = auVar180._4_4_ / (fVar82 + auVar61._4_4_ * fVar98);
      auVar62._8_4_ = auVar180._8_4_ / (fVar82 + auVar61._8_4_ * fVar98);
      auVar62._12_4_ = auVar180._12_4_ / (fVar82 + auVar61._12_4_ * fVar98);
      NEON_scvtf(auVar62,4);
      fVar169 = fVar112;
      fVar145 = fVar151;
      fVar146 = fVar152;
      fVar160 = fVar153;
      fVar166 = fVar154;
      uVar173 = uVar44;
      fVar171 = fVar86;
      fVar172 = fVar81;
      fVar161 = fVar81;
      fVar165 = fVar81;
      fVar175 = fVar82;
      fVar176 = fVar82;
      fVar177 = fVar82;
      func_0x00010840dfdc();
      func_0x00010840de7c();
      auVar70._0_4_ = ABS((float)extraout_d1_00);
      auVar70._4_4_ = ABS((float)((ulong)extraout_d1_00 >> 0x20));
      auVar70._8_4_ = ABS((float)extraout_var_14);
      auVar70._12_4_ = ABS((float)((ulong)extraout_var_14 >> 0x20));
      auVar180 = NEON_ucvtf(auVar70,4);
      fVar83 = auVar180._0_4_ * fVar88;
      fVar170 = auVar180._4_4_ * fVar93;
      fVar159 = auVar180._8_4_ * fVar95;
      fVar79 = auVar180._12_4_ * fVar97;
      func_0x00010840dfdc();
      auVar114._0_4_ = fVar83 * fVar162;
      auVar114._4_4_ = fVar170 * fVar162;
      auVar114._8_4_ = fVar159 * fVar162;
      auVar114._12_4_ = fVar79 * fVar162;
      func_0x00010840de7c();
      auVar69._8_8_ = extraout_var_15;
      auVar69._0_8_ = extraout_d1_01;
      auVar70 = auVar70 ^ (auVar70 ^ auVar114) & auVar69;
      fVar83 = (float)CONCAT13(extraout_var_28,
                               CONCAT12(extraout_var_25,CONCAT11(extraout_var_22,extraout_b17_00)));
      auVar111._0_4_ = fVar81 + auVar70._0_4_ * fVar83;
      auVar111._4_4_ = fVar172 + auVar70._4_4_ * fVar83;
      auVar111._8_4_ = fVar161 + auVar70._8_4_ * fVar83;
      auVar111._12_4_ = fVar165 + auVar70._12_4_ * fVar83;
      auVar180 = NEON_fmax(auVar111,auVar178,4);
      auVar71._0_4_ = auVar180._0_4_ / (fVar82 + auVar70._0_4_ * fVar98);
      auVar71._4_4_ = auVar180._4_4_ / (fVar175 + auVar70._4_4_ * fVar98);
      auVar71._8_4_ = auVar180._8_4_ / (fVar176 + auVar70._8_4_ * fVar98);
      auVar71._12_4_ = auVar180._12_4_ / (fVar177 + auVar70._12_4_ * fVar98);
      NEON_scvtf(auVar71,4);
      func_0x00010840dfdc();
      func_0x00010840de7c();
      fVar83 = ABS((float)extraout_d2_01);
      fVar116 = (float)((ulong)extraout_d2_01 >> 0x20);
      fVar170 = ABS(fVar116);
      bVar99 = SUB41(fVar170,0);
      bVar100 = (byte)((uint)fVar170 >> 8);
      bVar101 = (byte)((uint)fVar170 >> 0x10);
      bVar102 = (byte)((uint)fVar170 >> 0x18);
      fVar159 = ABS((float)extraout_var_18);
      bVar103 = SUB41(fVar159,0);
      bVar104 = (byte)((uint)fVar159 >> 8);
      bVar105 = (byte)((uint)fVar159 >> 0x10);
      bVar106 = (byte)((uint)fVar159 >> 0x18);
      fVar77 = (float)((ulong)extraout_var_18 >> 0x20);
      fVar79 = ABS(fVar77);
      bVar107 = SUB41(fVar79,0);
      bVar108 = (byte)((uint)fVar79 >> 8);
      bVar109 = (byte)((uint)fVar79 >> 0x10);
      bVar110 = (byte)((uint)fVar79 >> 0x18);
      iVar56 = -(uint)((float)extraout_d2_01 == 0.0);
      iVar63 = -(uint)(fVar116 == 0.0);
      iVar64 = -(uint)((float)extraout_var_18 == 0.0);
      iVar65 = -(uint)(fVar77 == 0.0);
      iVar87 = -(uint)(fVar83 == auVar179._0_4_);
      iVar92 = -(uint)(fVar170 == auVar179._4_4_);
      iVar94 = -(uint)(fVar159 == auVar179._8_4_);
      iVar96 = -(uint)(fVar79 == auVar179._12_4_);
      auVar74[0] = ~(byte)iVar56 & ~(byte)iVar87;
      auVar74[1] = ~(byte)((uint)iVar56 >> 8) & ~(byte)((uint)iVar87 >> 8);
      auVar74[2] = ~(byte)((uint)iVar56 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
      auVar74[3] = ~(byte)((uint)iVar56 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
      auVar74[4] = ~(byte)iVar63 & ~(byte)iVar92;
      auVar74[5] = ~(byte)((uint)iVar63 >> 8) & ~(byte)((uint)iVar92 >> 8);
      auVar74[6] = ~(byte)((uint)iVar63 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
      auVar74[7] = ~(byte)((uint)iVar63 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
      auVar74[8] = ~(byte)iVar64 & ~(byte)iVar94;
      auVar74[9] = ~(byte)((uint)iVar64 >> 8) & ~(byte)((uint)iVar94 >> 8);
      auVar74[10] = ~(byte)((uint)iVar64 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      auVar74[0xb] = ~(byte)((uint)iVar64 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      auVar74[0xc] = ~(byte)iVar65 & ~(byte)iVar96;
      auVar74[0xd] = ~(byte)((uint)iVar65 >> 8) & ~(byte)((uint)iVar96 >> 8);
      auVar74[0xe] = ~(byte)((uint)iVar65 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
      auVar74[0xf] = ~(byte)((uint)iVar65 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
      auVar9[4] = bVar99;
      auVar9._0_4_ = fVar83;
      auVar9[5] = bVar100;
      auVar9[6] = bVar101;
      auVar9[7] = bVar102;
      auVar9[8] = bVar103;
      auVar9[9] = bVar104;
      auVar9[10] = bVar105;
      auVar9[0xb] = bVar106;
      auVar9[0xc] = bVar107;
      auVar9[0xd] = bVar108;
      auVar9[0xe] = bVar109;
      auVar9[0xf] = bVar110;
      auVar179 = NEON_ucvtf(auVar9,4);
      uVar89 = CONCAT13((byte)((uint)fVar83 >> 0x18) & bVar124,
                        CONCAT12((byte)((uint)fVar83 >> 0x10) & bVar123,
                                 CONCAT11((byte)((uint)fVar83 >> 8) & bVar122,
                                          SUB41(fVar83,0) & bVar120)));
      auVar113._0_8_ =
           CONCAT17(bVar102 & bVar128,
                    CONCAT16(bVar101 & bVar127,
                             CONCAT15(bVar100 & bVar126,CONCAT14(bVar99 & bVar125,uVar89))));
      auVar113[8] = bVar103 & bVar129;
      auVar113[9] = bVar104 & bVar130;
      auVar113[10] = bVar105 & bVar131;
      auVar113[0xb] = bVar106 & bVar132;
      auVar115[0xc] = bVar107 & bVar133;
      auVar115._0_12_ = auVar113;
      auVar115[0xd] = bVar108 & bVar134;
      auVar115[0xe] = bVar109 & bVar135;
      auVar115[0xf] = bVar110 & bVar136;
      uVar55 = CONCAT44((int)((ulong)auVar113._0_8_ >> 0x20),uVar89) | 0x3f0000003f000000;
      fVar79 = (float)(auVar113._8_4_ | 0x3f000000);
      fVar116 = (float)(auVar115._12_4_ | 0x3f000000);
      fVar170 = (float)uVar55;
      fVar159 = (float)(uVar55 >> 0x20);
      fVar170 = ((auVar179._0_4_ * fVar88 + extraout_s18_00 + extraout_s19 * fVar170) -
                extraout_s21_00 / (fVar170 + fVar147)) * fVar162;
      fVar159 = ((auVar179._4_4_ * fVar93 + extraout_var_34 + extraout_var_35 * fVar159) -
                extraout_var_37 / (fVar159 + fVar148)) * fVar162;
      fVar79 = ((auVar179._8_4_ * fVar95 + fVar86 + fVar112 * fVar79) - fVar151 / (fVar79 + fVar149)
               ) * fVar162;
      fVar162 = ((auVar179._12_4_ * fVar97 + fVar171 + fVar169 * fVar116) -
                fVar145 / (fVar116 + fVar150)) * fVar162;
      auVar163._0_4_ =
           (fVar170 + fVar155 + extraout_s23_00 * (fVar170 - (float)(int)fVar170) +
           extraout_s26_00 / (extraout_s24_00 - (fVar170 - (float)(int)fVar170))) * extraout_s27_00;
      auVar163._4_4_ =
           (fVar159 + fVar156 + extraout_var_39 * (fVar159 - (float)(int)fVar159) +
           extraout_var_43 / (extraout_var_41 - (fVar159 - (float)(int)fVar159))) * extraout_var_45;
      auVar163._8_4_ =
           (fVar79 + fVar157 + fVar152 * (fVar79 - (float)(int)fVar79) +
           fVar154 / (fVar153 - (fVar79 - (float)(int)fVar79))) * fVar167;
      auVar163._12_4_ =
           (fVar162 + fVar158 + fVar146 * (fVar162 - (float)(int)fVar162) +
           fVar166 / (fVar160 - (fVar162 - (float)(int)fVar162))) * fVar168;
      auVar179 = NEON_fmax(auVar163,auVar178,4);
      auVar16._4_4_ = extraout_var_46;
      auVar16._0_4_ = extraout_s28;
      auVar16._8_4_ = uVar44;
      auVar16._12_4_ = uVar173;
      auVar179 = NEON_fmin(auVar179,auVar16,4);
      auVar164._0_4_ = (int)auVar179._0_4_;
      auVar164._4_4_ = (int)auVar179._4_4_;
      auVar164._8_4_ = (int)auVar179._8_4_;
      auVar164._12_4_ = (int)auVar179._12_4_;
      auVar10[4] = bVar99;
      auVar10._0_4_ = fVar83;
      auVar10[5] = bVar100;
      auVar10[6] = bVar101;
      auVar10[7] = bVar102;
      auVar10[8] = bVar103;
      auVar10[9] = bVar104;
      auVar10[10] = bVar105;
      auVar10[0xb] = bVar106;
      auVar10[0xc] = bVar107;
      auVar10[0xd] = bVar108;
      auVar10[0xe] = bVar109;
      auVar10[0xf] = bVar110;
      auVar75[4] = bVar99;
      auVar75._0_4_ = fVar83;
      auVar75[5] = bVar100;
      auVar75[6] = bVar101;
      auVar75[7] = bVar102;
      auVar75[8] = bVar103;
      auVar75[9] = bVar104;
      auVar75[10] = bVar105;
      auVar75[0xb] = bVar106;
      auVar75[0xc] = bVar107;
      auVar75[0xd] = bVar108;
      auVar75[0xe] = bVar109;
      auVar75[0xf] = bVar110;
      auVar75 = auVar75 ^ (auVar10 ^ auVar164) & auVar74;
      fVar83 = (float)CONCAT13(extraout_var_29,
                               CONCAT12(extraout_var_26,CONCAT11(extraout_var_23,extraout_b17_01)));
      auVar84._0_4_ = fVar81 + auVar75._0_4_ * fVar83;
      auVar84._4_4_ = fVar172 + auVar75._4_4_ * fVar83;
      auVar84._8_4_ = fVar161 + auVar75._8_4_ * fVar83;
      auVar84._12_4_ = fVar165 + auVar75._12_4_ * fVar83;
      auVar179 = NEON_fmax(auVar84,auVar178,4);
      auVar76._0_4_ = auVar179._0_4_ / (fVar82 + auVar75._0_4_ * fVar98);
      auVar76._4_4_ = auVar179._4_4_ / (fVar175 + auVar75._4_4_ * fVar98);
      auVar76._8_4_ = auVar179._8_4_ / (fVar176 + auVar75._8_4_ * fVar98);
      auVar76._12_4_ = auVar179._12_4_ / (fVar177 + auVar75._12_4_ * fVar98);
      auVar179 = NEON_scvtf(auVar76,4);
      uVar89 = CONCAT13((byte)((uint)auVar76._0_4_ >> 0x18) & bVar124,
                        CONCAT12((byte)((uint)auVar76._0_4_ >> 0x10) & bVar123,
                                 CONCAT11((byte)((uint)auVar76._0_4_ >> 8) & bVar122,
                                          SUB41(auVar76._0_4_,0) & bVar120)));
      auVar90._0_8_ =
           CONCAT17((byte)((uint)auVar76._4_4_ >> 0x18) & bVar128,
                    CONCAT16((byte)((uint)auVar76._4_4_ >> 0x10) & bVar127,
                             CONCAT15((byte)((uint)auVar76._4_4_ >> 8) & bVar126,
                                      CONCAT14(SUB41(auVar76._4_4_,0) & bVar125,uVar89))));
      auVar90[8] = SUB41(auVar76._8_4_,0) & bVar129;
      auVar90[9] = (byte)((uint)auVar76._8_4_ >> 8) & bVar130;
      auVar90[10] = (byte)((uint)auVar76._8_4_ >> 0x10) & bVar131;
      auVar90[0xb] = (byte)((uint)auVar76._8_4_ >> 0x18) & bVar132;
      auVar91[0xc] = SUB41(auVar76._12_4_,0) & bVar133;
      auVar91._0_12_ = auVar90;
      auVar91[0xd] = (byte)((uint)auVar76._12_4_ >> 8) & bVar134;
      auVar91[0xe] = (byte)((uint)auVar76._12_4_ >> 0x10) & bVar135;
      auVar91[0xf] = (byte)((uint)auVar76._12_4_ >> 0x18) & bVar136;
      uVar55 = CONCAT44((int)((ulong)auVar90._0_8_ >> 0x20),uVar89) | 0x3f0000003f000000;
      fVar170 = (float)(auVar90._8_4_ | 0x3f000000);
      fVar159 = (float)(auVar91._12_4_ | 0x3f000000);
      fVar82 = (float)uVar55;
      fVar83 = (float)(uVar55 >> 0x20);
      fVar81 = (float)CONCAT13(extraout_var_55,
                               CONCAT12(extraout_var_52,CONCAT11(extraout_var_49,extraout_b30_01)));
      fVar82 = ((auVar179._0_4_ * fVar88 + extraout_s18_00 + extraout_s19 * fVar82) -
               extraout_s21_00 / (fVar82 + fVar147)) * fVar81;
      fVar83 = ((auVar179._4_4_ * fVar93 + extraout_var_34 + extraout_var_35 * fVar83) -
               extraout_var_37 / (fVar83 + fVar148)) * fVar81;
      fVar86 = ((auVar179._8_4_ * fVar95 + fVar86 + fVar112 * fVar170) -
               fVar151 / (fVar170 + fVar149)) * fVar81;
      fVar81 = ((auVar179._12_4_ * fVar97 + fVar171 + fVar169 * fVar159) -
               fVar145 / (fVar159 + fVar150)) * fVar81;
      auVar85._0_4_ =
           (fVar82 + fVar155 + extraout_s23_00 * (fVar82 - (float)(int)fVar82) +
           extraout_s26_00 / (extraout_s24_00 - (fVar82 - (float)(int)fVar82))) * extraout_s27_00;
      auVar85._4_4_ =
           (fVar83 + fVar156 + extraout_var_39 * (fVar83 - (float)(int)fVar83) +
           extraout_var_43 / (extraout_var_41 - (fVar83 - (float)(int)fVar83))) * extraout_var_45;
      auVar85._8_4_ =
           (fVar86 + fVar157 + fVar152 * (fVar86 - (float)(int)fVar86) +
           fVar154 / (fVar153 - (fVar86 - (float)(int)fVar86))) * fVar167;
      auVar85._12_4_ =
           (fVar81 + fVar158 + fVar146 * (fVar81 - (float)(int)fVar81) +
           fVar166 / (fVar160 - (fVar81 - (float)(int)fVar81))) * fVar168;
      auVar178 = NEON_fmax(auVar85,auVar178,4);
      auVar17._4_4_ = extraout_var_46;
      auVar17._0_4_ = extraout_s28;
      auVar17._8_4_ = uVar44;
      auVar17._12_4_ = uVar173;
      NEON_fmin(auVar178,auVar17,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840c18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xb1:
      return pfVar32;
    case (undefined **)0xb2:
      goto LAB_10841bf94;
    case (undefined **)0xb3:
      *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      if (pfRam000000011372b608 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar47 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
        func_0x00010c2289e0();
        pfRam000000011372b608 = pfVar47;
      }
      return pfRam000000011372b608;
    case (undefined **)0xb5:
      goto code_r0x000108411b74;
    case (undefined **)0xbe:
      in_s16 = 2.1158898e-37;
      fVar86 = ABS(fVar159) * extraout_s18 + 2.1158898e-37;
      fVar112 = ABS(fVar79) * extraout_s18 + 2.1158898e-37;
      fVar153 = ABS((float)extraout_var) * extraout_s18 + 2.1158898e-37;
      fVar154 = ABS(fVar169) * extraout_s18 + 2.1158898e-37;
      uVar137 = 0;
      uVar138 = 0;
      uVar139 = 0;
      uVar140 = 0;
      uVar141 = 0;
      uVar142 = 0;
      uVar143 = 0;
      uVar144 = 0;
      in_register_00005228 = 0;
      in_register_00005229 = 0;
      in_register_0000522a = 0;
      in_register_0000522b = 0;
      in_register_0000522c = 0;
      in_register_0000522d = 0;
      in_register_0000522e = 0;
      in_register_0000522f = 0;
      NEON_fmov(0x3f800000,4);
      auVar180[4] = SUB41(fVar112,0);
      auVar180._0_4_ = fVar86;
      auVar180[5] = (char)((uint)fVar112 >> 8);
      auVar180[6] = (char)((uint)fVar112 >> 0x10);
      auVar180[7] = (char)((uint)fVar112 >> 0x18);
      auVar180[8] = SUB41(fVar153,0);
      auVar180[9] = (char)((uint)fVar153 >> 8);
      auVar180[10] = (char)((uint)fVar153 >> 0x10);
      auVar180[0xb] = (char)((uint)fVar153 >> 0x18);
      auVar180[0xc] = SUB41(fVar154,0);
      auVar180[0xd] = (char)((uint)fVar154 >> 8);
      auVar180[0xe] = (char)((uint)fVar154 >> 0x10);
      auVar180[0xf] = (char)((uint)fVar154 >> 0x18);
      auVar178 = NEON_scvtf(auVar180,4);
      fVar151 = 1.1920929e-07;
      fVar152 = 1.1920929e-07;
      in_register_000052a8 = 1.1920929e-07;
      in_register_000052ac = 1.1920929e-07;
      in_register_000052cc = 0xff;
      in_register_000052cd = 0xff;
      in_register_000052ce = 0x7f;
      in_register_000052cf = 0;
      in_b22 = 0xff;
      in_register_000052c1 = 0xff;
      in_register_000052c2 = 0x7f;
      in_register_000052c3 = 0;
      in_register_000052c4 = 0xff;
      in_register_000052c5 = 0xff;
      in_register_000052c6 = 0x7f;
      in_register_000052c7 = 0;
      in_register_000052c8 = 0xff;
      in_register_000052c9 = 0xff;
      in_register_000052ca = 0x7f;
      in_register_000052cb = 0;
      fVar81 = (float)(SUB43(fVar86,0) & 0x7fffff | 0x3f000000);
      fVar82 = (float)(SUB43(fVar112,0) & 0x7fffff | 0x3f000000);
      in_register_00005348 = (float)(SUB43(fVar153,0) & 0x7fffff | 0x3f000000);
      in_register_0000534c = (float)(SUB43(fVar154,0) & 0x7fffff | 0x3f000000);
      fVar86 = -124.22552;
      fVar112 = -1.4980303;
      fVar83 = auVar178._0_4_ * 1.1920929e-07 + -124.22552 + fVar81 * -1.4980303;
      fVar170 = auVar178._4_4_ * 1.1920929e-07 + -124.22552 + fVar82 * -1.4980303;
      in_register_00005368 =
           auVar178._8_4_ * 1.1920929e-07 + -124.22552 + in_register_00005348 * -1.4980303;
      in_register_0000536c =
           auVar178._12_4_ * 1.1920929e-07 + -124.22552 + in_register_0000534c * -1.4980303;
      uVar50 = 0x44f9;
      fVar153 = fVar86;
      in_register_000052e8 = fVar86;
      in_register_000052ec = fVar86;
      fVar154 = fVar112;
      in_register_00005308 = fVar112;
      in_register_0000530c = fVar112;
      in_register_00005204 = in_s16;
      in_register_00005208 = in_s16;
      in_register_0000520c = in_s16;
code_r0x00010840bb18:
      fVar159 = (float)(uVar50 & 0xffff | 0x3eb40000);
      uVar55 = CONCAT44(uVar50,uVar50) & 0xffff0000ffff;
      fVar161 = (float)((uint)uVar55 | 0x3eb40000);
      fVar165 = (float)((uint)(uVar55 >> 0x20) | 0x3eb40000);
      fVar79 = in_q5._0_4_;
      fVar169 = fVar79 * (fVar83 - 1.72588 / (fVar81 + fVar161));
      fVar81 = in_q5._4_4_;
      fVar170 = fVar81 * (fVar170 - 1.72588 / (fVar82 + fVar165));
      fVar82 = in_q5._8_4_;
      fVar171 = fVar82 * (in_register_00005368 - 1.72588 / (in_register_00005348 + fVar159));
      fVar83 = in_q5._12_4_;
      fVar172 = fVar83 * (in_register_0000536c - 1.72588 / (in_register_0000534c + fVar159));
      auVar117._0_4_ =
           (fVar169 + 121.274055 + (fVar169 - (float)(int)fVar169) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar169 - (float)(int)fVar169))) * 8388608.0;
      auVar117._4_4_ =
           (fVar170 + 121.274055 + (fVar170 - (float)(int)fVar170) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar170 - (float)(int)fVar170))) * 8388608.0;
      auVar117._8_4_ =
           (fVar171 + 121.274055 + (fVar171 - (float)(int)fVar171) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar171 - (float)(int)fVar171))) * 8388608.0;
      auVar117._12_4_ =
           (fVar172 + 121.274055 + (fVar172 - (float)(int)fVar172) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar172 - (float)(int)fVar172))) * 8388608.0;
      auVar11[1] = uVar138;
      auVar11[0] = uVar137;
      auVar11[2] = uVar139;
      auVar11[3] = uVar140;
      auVar11[4] = uVar141;
      auVar11[5] = uVar142;
      auVar11[6] = uVar143;
      auVar11[7] = uVar144;
      auVar11[8] = in_register_00005228;
      auVar11[9] = in_register_00005229;
      auVar11[10] = in_register_0000522a;
      auVar11[0xb] = in_register_0000522b;
      auVar11[0xc] = in_register_0000522c;
      auVar11[0xd] = in_register_0000522d;
      auVar11[0xe] = in_register_0000522e;
      auVar11[0xf] = in_register_0000522f;
      auVar178 = NEON_fmax(auVar117,auVar11,4);
      auVar6._8_4_ = 0x4eff0000;
      auVar6._0_8_ = 0x4eff00004eff0000;
      auVar6._12_4_ = 0x4eff0000;
      NEON_fmin(auVar178,auVar6,4);
      auVar118._0_4_ = in_s16 + ABS((float)extraout_d1) * extraout_s18;
      auVar118._4_4_ =
           in_register_00005204 + ABS((float)((ulong)extraout_d1 >> 0x20)) * extraout_s18;
      auVar118._8_4_ = in_register_00005208 + ABS((float)extraout_var_10) * extraout_s18;
      auVar118._12_4_ =
           in_register_0000520c + ABS((float)((ulong)extraout_var_10 >> 0x20)) * extraout_s18;
      auVar178 = NEON_scvtf(auVar118,4);
      uVar29 = CONCAT13((byte)((uint)auVar118._0_4_ >> 0x18) & in_register_000052c3,
                        CONCAT12((byte)((uint)auVar118._0_4_ >> 0x10) & in_register_000052c2,
                                 CONCAT11((byte)((uint)auVar118._0_4_ >> 8) & in_register_000052c1,
                                          SUB41(auVar118._0_4_,0) & in_b22)));
      uVar50 = CONCAT13((byte)((uint)auVar118._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar118._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar118._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar118._8_4_,0) & in_register_000052c8)));
      fVar170 = (float)(uVar29 | 0x3f000000);
      fVar169 = (float)((uint)(CONCAT17((byte)((uint)auVar118._4_4_ >> 0x18) & in_register_000052c7,
                                        CONCAT16((byte)((uint)auVar118._4_4_ >> 0x10) &
                                                 in_register_000052c6,
                                                 CONCAT15((byte)((uint)auVar118._4_4_ >> 8) &
                                                          in_register_000052c5,
                                                          CONCAT14(SUB41(auVar118._4_4_,0) &
                                                                   in_register_000052c4,uVar29))))
                              >> 0x20) | 0x3f000000);
      fVar171 = (float)(uVar50 | 0x3f000000);
      fVar172 = (float)((uint)(CONCAT17((byte)((uint)auVar118._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar118._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar118._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar118._12_4_,0) &
                                                                    in_register_000052cc,uVar50))))
                              >> 0x20) | 0x3f000000);
      fVar170 = fVar79 * ((auVar178._0_4_ * fVar151 + fVar86 + fVar112 * fVar170) -
                         1.72588 / (fVar170 + fVar161));
      fVar169 = fVar81 * ((auVar178._4_4_ * fVar152 + fVar153 + fVar154 * fVar169) -
                         1.72588 / (fVar169 + fVar165));
      fVar171 = fVar82 * ((auVar178._8_4_ * in_register_000052a8 + in_register_000052e8 +
                          in_register_00005308 * fVar171) - 1.72588 / (fVar171 + fVar159));
      fVar172 = fVar83 * ((auVar178._12_4_ * in_register_000052ac + in_register_000052ec +
                          in_register_0000530c * fVar172) - 1.72588 / (fVar172 + fVar159));
      auVar119._0_4_ =
           (fVar170 + 121.274055 + (fVar170 - (float)(int)fVar170) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar170 - (float)(int)fVar170))) * 8388608.0;
      auVar119._4_4_ =
           (fVar169 + 121.274055 + (fVar169 - (float)(int)fVar169) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar169 - (float)(int)fVar169))) * 8388608.0;
      auVar119._8_4_ =
           (fVar171 + 121.274055 + (fVar171 - (float)(int)fVar171) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar171 - (float)(int)fVar171))) * 8388608.0;
      auVar119._12_4_ =
           (fVar172 + 121.274055 + (fVar172 - (float)(int)fVar172) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar172 - (float)(int)fVar172))) * 8388608.0;
      auVar12[1] = uVar138;
      auVar12[0] = uVar137;
      auVar12[2] = uVar139;
      auVar12[3] = uVar140;
      auVar12[4] = uVar141;
      auVar12[5] = uVar142;
      auVar12[6] = uVar143;
      auVar12[7] = uVar144;
      auVar12[8] = in_register_00005228;
      auVar12[9] = in_register_00005229;
      auVar12[10] = in_register_0000522a;
      auVar12[0xb] = in_register_0000522b;
      auVar12[0xc] = in_register_0000522c;
      auVar12[0xd] = in_register_0000522d;
      auVar12[0xe] = in_register_0000522e;
      auVar12[0xf] = in_register_0000522f;
      auVar178 = NEON_fmax(auVar119,auVar12,4);
      auVar7._8_4_ = 0x4eff0000;
      auVar7._0_8_ = 0x4eff00004eff0000;
      auVar7._12_4_ = 0x4eff0000;
      NEON_fmin(auVar178,auVar7,4);
      auVar121._0_4_ = in_s16 + ABS(fVar145) * extraout_s18;
      auVar121._4_4_ = in_register_00005204 + ABS(fVar146) * extraout_s18;
      auVar121._8_4_ = in_register_00005208 + ABS(fVar160) * extraout_s18;
      auVar121._12_4_ = in_register_0000520c + ABS(fVar166) * extraout_s18;
      auVar178 = NEON_scvtf(auVar121,4);
      uVar29 = CONCAT13((byte)((uint)auVar121._8_4_ >> 0x18) & in_register_000052cb,
                        CONCAT12((byte)((uint)auVar121._8_4_ >> 0x10) & in_register_000052ca,
                                 CONCAT11((byte)((uint)auVar121._8_4_ >> 8) & in_register_000052c9,
                                          SUB41(auVar121._8_4_,0) & in_register_000052c8)));
      fVar170 = (float)(CONCAT13((byte)((uint)auVar121._0_4_ >> 0x18) & in_register_000052c3,
                                 CONCAT12((byte)((uint)auVar121._0_4_ >> 0x10) &
                                          in_register_000052c2,
                                          CONCAT11((byte)((uint)auVar121._0_4_ >> 8) &
                                                   in_register_000052c1,
                                                   SUB41(auVar121._0_4_,0) & in_b22))) | 0x3f000000)
      ;
      fVar169 = (float)(CONCAT13((byte)((uint)auVar121._4_4_ >> 0x18) & in_register_000052c7,
                                 CONCAT12((byte)((uint)auVar121._4_4_ >> 0x10) &
                                          in_register_000052c6,
                                          CONCAT11((byte)((uint)auVar121._4_4_ >> 8) &
                                                   in_register_000052c5,
                                                   SUB41(auVar121._4_4_,0) & in_register_000052c4)))
                       | 0x3f000000);
      fVar145 = (float)(uVar29 | 0x3f000000);
      fVar146 = (float)((uint)(CONCAT17((byte)((uint)auVar121._12_4_ >> 0x18) & in_register_000052cf
                                        ,CONCAT16((byte)((uint)auVar121._12_4_ >> 0x10) &
                                                  in_register_000052ce,
                                                  CONCAT15((byte)((uint)auVar121._12_4_ >> 8) &
                                                           in_register_000052cd,
                                                           CONCAT14(SUB41(auVar121._12_4_,0) &
                                                                    in_register_000052cc,uVar29))))
                              >> 0x20) | 0x3f000000);
      fVar79 = fVar79 * ((auVar178._0_4_ * fVar151 + fVar86 + fVar112 * fVar170) -
                        1.72588 / (fVar170 + fVar161));
      fVar81 = fVar81 * ((auVar178._4_4_ * fVar152 + fVar153 + fVar154 * fVar169) -
                        1.72588 / (fVar169 + fVar165));
      fVar82 = fVar82 * ((auVar178._8_4_ * in_register_000052a8 + in_register_000052e8 +
                         in_register_00005308 * fVar145) - 1.72588 / (fVar145 + fVar159));
      fVar83 = fVar83 * ((auVar178._12_4_ * in_register_000052ac + in_register_000052ec +
                         in_register_0000530c * fVar146) - 1.72588 / (fVar146 + fVar159));
      auVar80._0_4_ =
           (fVar79 + 121.274055 + (fVar79 - (float)(int)fVar79) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar79 - (float)(int)fVar79))) * 8388608.0;
      auVar80._4_4_ =
           (fVar81 + 121.274055 + (fVar81 - (float)(int)fVar81) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar81 - (float)(int)fVar81))) * 8388608.0;
      auVar80._8_4_ =
           (fVar82 + 121.274055 + (fVar82 - (float)(int)fVar82) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar82 - (float)(int)fVar82))) * 8388608.0;
      auVar80._12_4_ =
           (fVar83 + 121.274055 + (fVar83 - (float)(int)fVar83) * -1.4901291 +
           27.728024 / (4.8425255 - (fVar83 - (float)(int)fVar83))) * 8388608.0;
      auVar13[1] = uVar138;
      auVar13[0] = uVar137;
      auVar13[2] = uVar139;
      auVar13[3] = uVar140;
      auVar13[4] = uVar141;
      auVar13[5] = uVar142;
      auVar13[6] = uVar143;
      auVar13[7] = uVar144;
      auVar13[8] = in_register_00005228;
      auVar13[9] = in_register_00005229;
      auVar13[10] = in_register_0000522a;
      auVar13[0xb] = in_register_0000522b;
      auVar13[0xc] = in_register_0000522c;
      auVar13[0xd] = in_register_0000522d;
      auVar13[0xe] = in_register_0000522e;
      auVar13[0xf] = in_register_0000522f;
      auVar178 = NEON_fmax(auVar80,auVar13,4);
      auVar8._8_4_ = 0x4eff0000;
      auVar8._0_8_ = 0x4eff00004eff0000;
      auVar8._12_4_ = 0x4eff0000;
      NEON_fmin(auVar178,auVar8,4);
      pfVar32 = pfVar32 + 2;
                    /* WARNING: Could not recover jumptable at 0x00010840de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pfVar32)();
      return pfVar32;
    case (undefined **)0xc0:
      goto code_r0x000108418fa8;
    case (undefined **)0xc1:
      func_0x00010bf00dc0();
      func_0x00010c2289e0();
      *(float **)(unaff_x20 + 0x192) = pfVar32;
      return pfVar32;
    case (undefined **)0xc2:
    case (undefined **)0xdb:
      pfVar39 = (float *)0x11372b000;
      if (pfRam000000011372b720 != (float *)0x0) {
        return pfRam000000011372b720;
      }
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108417fb4:
      func_0x00010bf00dc0();
      func_0x00010c229040();
      func_0x00010c228780(pfVar32);
      *(float **)(pfVar39 + 0x1c8) = pfVar32;
      return pfVar32;
    case (undefined **)0xc6:
    case (undefined **)0xd2:
    case (undefined **)0xdf:
      goto code_r0x0001083feaf4;
    case (undefined **)0xcc:
      pfVar26 = unaff_x19;
      func_0x00010c29bf00(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = pfVar32;
code_r0x000108411ab8:
      func_0x00010bf20c00();
      func_0x00010c013de0(unaff_x20);
      func_0x00010c182b00(unaff_x19);
      _objc_release(unaff_x20);
      _objc_release(pfVar26);
      pfVar47 = unaff_x19;
      func_0x00010bf4dce0(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar47);
      unaff_x20 = unaff_x19;
      func_0x00010c29bf00(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      pfVar32 = unaff_x19;
      func_0x00010bf4dce0(unaff_x19);
code_r0x000108411b2c:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(unaff_x20);
      _objc_release(pfVar32);
      _objc_release(unaff_x20);
      unaff_x20 = (float *)PTR_PTR_1126b56b0;
      _objc_opt_new();
      pfVar39 = (float *)PTR__OBJC_CLASS___UICollectionView_1126afd20;
      _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      pfVar32 = unaff_x19;
code_r0x000108411b74:
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
code_r0x000108411b80:
      func_0x00010bf20c00();
      func_0x00010c014040(pfVar39);
      func_0x00010c1ed580(unaff_x19);
      _objc_release(pfVar39);
      _objc_release(pfVar32);
      pfVar32 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
code_r0x000108411bc0:
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0700();
      _objc_release(pfVar32);
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d4a0();
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c167a20();
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2026e0();
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181fc0();
      _objc_release(pfVar47);
      puVar38 = PTR_PTR_1126b1150;
      _objc_alloc();
      func_0x00010c03fd60();
      lVar51 = (long)(int)unaff_x27[0xc];
      uVar43 = *(undefined8 *)((long)unaff_x19 + lVar51);
      *(undefined **)((long)unaff_x19 + lVar51) = puVar38;
      _objc_release(uVar43);
      func_0x00010bef9980(*(undefined8 *)((long)unaff_x19 + lVar51));
      func_0x00010c18b5e0(*(undefined8 *)((long)unaff_x19 + lVar51));
      func_0x00010c17e720(*(undefined8 *)((long)unaff_x19 + lVar51));
      fVar86 = unaff_x27[8];
      func_0x00010c1e6360(*(undefined8 *)((long)unaff_x19 + lVar51));
      puVar38 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      func_0x00010c178280();
      pfVar47 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040();
      _objc_release(pfVar47);
      pfVar47 = unaff_x19;
      func_0x00010bf4dce0(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      pfVar39 = unaff_x19;
      func_0x00010c13cf80(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(pfVar47);
      _objc_release(pfVar39);
      _objc_release(pfVar47);
      uVar57 = *(undefined8 *)((long)unaff_x19 + unaff_x24);
      func_0x00010c0d6280(uVar57);
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar57;
      func_0x00010c154720();
      _objc_retainAutoreleasedReturnValue();
      uVar58 = *(undefined8 *)((long)unaff_x19 + (long)(int)fVar86);
      func_0x00010c11da20(uVar58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139c0(uVar43);
      _objc_release(uVar58);
      _objc_release(uVar43);
      _objc_release(uVar57);
      *(undefined1 *)((long)unaff_x19 + (long)(int)unaff_x27[0xd]) = 0;
      pfVar47 = unaff_x19;
      func_0x00010be0d940();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x78) =
           &PTR____CFConstantStringClassReference_110ed7978;
      *(undefined ***)((long)register0x00000008 + -0x70) =
           &PTR____CFConstantStringClassReference_110ed79f8;
      puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar47);
      _objc_release(puVar37);
      *(undefined ***)((long)register0x00000008 + -0x88) =
           &PTR____CFConstantStringClassReference_110ed79b8;
      pfVar39 = unaff_x19;
      func_0x00010c073ce0();
      ppuVar41 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf8f8;
      if ((int)pfVar39 == 0) {
        ppuVar41 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf910;
      }
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar41;
      puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(pfVar47);
      _objc_release(puVar37);
      uVar43 = *(undefined8 *)((long)unaff_x19 + (long)(int)*unaff_x27);
      pfVar39 = unaff_x19;
      _objc_opt_class(unaff_x19);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      pfVar33 = pfVar47;
      func_0x00010bf51e00(pfVar47);
      func_0x00010bf7dbc0(uVar43);
      _objc_release(pfVar33);
      _objc_release(pfVar39);
      *(undefined1 *)((long)unaff_x19 + (long)(int)unaff_x27[0xe]) = 1;
      _objc_release(pfVar47);
      _objc_release(puVar38);
      pfVar39 = unaff_x20;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x68))
      {
        ___stack_chk_fail();
        *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
        *(undefined **)((long)register0x00000008 + -200) = puVar38;
        *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
        *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
        *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
        *(code **)((long)register0x00000008 + -0xa8) = FUN_108411f7c;
        *(float **)((long)register0x00000008 + -0xe0) = pfVar39;
        *(undefined **)((long)register0x00000008 + -0xd8) = PTR_PTR_1126fc748;
        _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xe0),
                            PTR_s_viewWillAppear__1126853f0);
        func_0x00010beaf700(pfVar39);
        pfVar33 = *(float **)((long)pfVar39 + (long)_DAT_112774908);
        func_0x00010c0d6280(pfVar33);
        _objc_retainAutoreleasedReturnValue();
        pfVar47 = pfVar33;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        uVar57 = *(undefined8 *)((long)pfVar39 + (long)_DAT_1127748e4);
        func_0x00010bf5fc60(uVar57);
        _objc_retainAutoreleasedReturnValue();
        uVar43 = uVar57;
        func_0x00010c11da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2139c0(pfVar47);
        _objc_release(uVar43);
        _objc_release(uVar57);
        _objc_release(pfVar47);
        _objc_release(pfVar33);
        return pfVar33;
      }
      return pfVar39;
    case (undefined **)0xcf:
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar41;
      pfVar39 = *(float **)((long)unaff_x20 + (long)ppuVar41);
      func_0x00010c15ffa0(pfVar39);
      _objc_retainAutoreleasedReturnValue();
code_r0x00010841378c:
      func_0x00010c1d0640(unaff_x19);
      _objc_release(pfVar39);
      lVar51 = (long)(int)pfVar47[0xd];
      uVar57 = *(undefined8 *)((long)unaff_x20 + lVar51);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar43 = uVar57;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x19);
      _objc_release(uVar43);
      _objc_release(uVar57);
      func_0x00010c1d0640(unaff_x19);
      func_0x00010c1d0640(unaff_x19);
      func_0x00010c1d0640(unaff_x19);
      ppuVar34 = *(undefined ***)((long)unaff_x20 + lVar51);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar41 = ppuVar34;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      uVar58 = *(undefined8 *)((long)unaff_x20 + lVar51);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar57 = uVar58;
      func_0x00010c11d960();
      _objc_retainAutoreleasedReturnValue();
      lVar35 = *(long *)((long)unaff_x20 + lVar51);
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      lVar51 = lVar35;
      func_0x00010c11da20();
      _objc_retainAutoreleasedReturnValue();
      lVar40 = lVar51;
      func_0x00010c08fa60();
      uVar43 = 1;
      if (lVar40 != 0) {
        uVar43 = 2;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar41 != (undefined **)0x0) {
        ppuVar1 = ppuVar41;
      }
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar57;
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar43;
      *(undefined ***)((long)register0x00000008 + -0xa0) = ppuVar1;
      puVar38 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x19);
      _objc_release(puVar38);
      _objc_release(lVar51);
      _objc_release(lVar35);
      _objc_release(uVar57);
      _objc_release(uVar58);
      _objc_release(ppuVar41);
      _objc_release(ppuVar34);
      uVar43 = *(undefined8 *)((long)unaff_x20 + (long)_DAT_1127748f8);
      func_0x00010c09ea00(uVar43);
      _objc_retainAutoreleasedReturnValue();
      puVar38 = PTR_PTR_1126b6598;
      func_0x00010bf51c80();
      func_0x00010bf33ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar37 = puVar38;
      func_0x00010bfc6400();
      _objc_release(puVar38);
      *(undefined **)((long)register0x00000008 + -0xa0) = puVar37;
      puVar38 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x19);
      _objc_release(puVar38);
      puVar38 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x19);
      _objc_release(puVar38);
      puVar38 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c08bda0();
      func_0x00010c0df780(puVar38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(unaff_x19);
      _objc_release(puVar38);
      _objc_release(uVar43);
      goto _objc_autoreleaseReturnValue;
    case (undefined **)0xd0:
      *(undefined4 *)((long)register0x00000008 + -0xa0) = 0x1c;
      pfVar32 = (float *)PTR_PTR_1126ae978;
code_r0x000108418fa8:
code_r0x000108418fbc:
      func_0x00010bf00dc0();
      *(float **)(unaff_x19 + 0x20e) = pfVar32;
      return pfVar32;
    case (undefined **)0xd1:
      return pfVar32;
    case (undefined **)0xd8:
code_r0x0001084136ac:
      goto LAB_108413708;
    case (undefined **)0xd9:
      goto code_r0x000108418fbc;
    case (undefined **)0xda:
      pfVar52 = (float *)((long)register0x00000008 + -0x70);
      pcVar42 = (code *)0x10841d3d8;
      goto code_r0x000109189420;
    case (undefined **)0xe5:
      return pfVar32;
    case (undefined **)0xe6:
      goto code_r0x00010841a3c4;
    case (undefined **)0xe7:
      _objc_msgSendSuper2((float *)((long)register0x00000008 + -0xa0),ppuVar41[0x129]);
      if (pfVar36 != (float *)0x0) {
        puVar38 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_opt_new();
        lVar51 = (long)_DAT_11277495c;
        uVar43 = *(undefined8 *)((long)pfVar36 + lVar51);
        *(undefined **)((long)pfVar36 + lVar51) = puVar38;
        _objc_release(uVar43);
        puVar38 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)((long)pfVar36 + lVar51));
        _objc_release(puVar38);
        puVar38 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)((long)pfVar36 + lVar51));
        _objc_release(puVar38);
        ppuVar41 = &PTR____CFConstantStringClassReference_110ea8fd8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea8fd8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)((long)pfVar36 + lVar51));
        _objc_release(ppuVar41);
        func_0x00010c21e900(*(undefined8 *)((long)pfVar36 + lVar51));
        func_0x00010c1cfce0(*(undefined8 *)((long)pfVar36 + lVar51));
        func_0x00010befbb60(pfVar36);
      }
      return pfVar36;
    case (undefined **)0xe9:
      goto code_r0x00010841a304;
    case (undefined **)0xea:
      return pfVar32;
    case (undefined **)0xeb:
      goto code_r0x000108411bc0;
    case (undefined **)0xf4:
                    /* WARNING: Could not recover jumptable at 0x00010840b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return pfVar32;
    case (undefined **)0xf5:
      return unaff_x19;
    case (undefined **)0xf6:
      return pfVar32;
    case (undefined **)0xf7:
      *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
      *(float *)((long)register0x00000008 + -0xa8) = 5.775169e-34;
      *(float *)((long)register0x00000008 + -0xa4) = 1.4013e-45;
      pfVar47 = pfRam000000011372b698;
      if (pfRam000000011372b698 == (float *)0x0) {
        *(undefined4 *)((long)register0x00000008 + -0xd0) = 0x1c;
        pfVar47 = (float *)PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
      }
      pfRam000000011372b698 = pfVar47;
      return pfVar47;
    case (undefined **)0xf8:
      goto code_r0x000108411b80;
    case (undefined **)0xfd:
      func_0x000108403810();
      func_0x0001084039e4();
      func_0x0001083f91a8();
      pfVar47 = unaff_x19 + 0xc;
      iVar56 = 0x135;
      uVar173 = 1;
      pfVar52 = *(float **)((long)register0x00000008 + -0x90);
      uVar43 = *(undefined8 *)((long)register0x00000008 + -0x88);
      pfVar26 = (float *)((long)register0x00000008 + -0x80);
      goto SUB_1083f8fd0;
    case (undefined **)0xfe:
      _objc_retain(pfVar39);
      pfVar33 = unaff_x19;
      func_0x00010c0720c0();
      if ((int)pfVar33 != 0) {
        pfVar33 = pfVar47;
        func_0x00010c153720(pfVar47);
        _objc_retainAutoreleasedReturnValue();
        pfVar52 = pfVar33;
        func_0x00010c0d6280();
        _objc_retainAutoreleasedReturnValue();
        pfVar32 = pfVar52;
        func_0x00010c154720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c193b00();
        _objc_release(pfVar32);
        _objc_release(pfVar52);
        _objc_release(pfVar33);
        func_0x00010be01ce0(pfVar47);
        goto code_r0x0001084136ac;
      }
LAB_1084136b0:
      pfVar33 = pfVar47;
      func_0x00010be0d940(pfVar47);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      uVar43 = *(undefined8 *)((long)pfVar47 + (long)_DAT_1127748e0);
      pfVar47 = pfVar33;
      func_0x00010bf51e00(pfVar33);
      func_0x00010bf7dbc0(uVar43);
      _objc_release(pfVar47);
      _objc_release(pfVar33);
LAB_108413708:
      _objc_release(pfVar39);
      _objc_release(unaff_x20);
      goto code_r0x00010bdbf3e4;
    case (undefined **)0xff:
      func_0x00010c182300();
      unaff_x19 = pfVar39;
      goto code_r0x00010bdbf3e4;
    }
    break;
  case 4.34403e-44:
    func_0x000108403784();
    FUN_1084016cc();
    pfVar32 = pfVar47;
code_r0x0001083feac4:
    iVar56 = (int)pfVar32;
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x0001084038cc();
      func_0x0001084017e4();
      func_0x000108403650();
      if (iVar56 == 0) break;
      func_0x000108403778();
      func_0x000108403bbc();
code_r0x0001083feae8:
      func_0x000108403764(*(undefined8 *)(unaff_x20 + 4));
code_r0x0001083feaf4:
      func_0x000108403878();
      func_0x0001083fa470();
    }
    goto code_r0x0001083ff730;
  case 4.48416e-44:
    pfVar32 = pfVar47;
code_r0x0001083feb04:
    iVar56 = (int)pfVar32;
    func_0x000108403650();
    if (iVar56 == 0) break;
    func_0x000108403bbc(**(undefined8 **)(*(long *)(unaff_x20 + 6) + 0x10));
code_r0x0001083feb1c:
    func_0x000108403764(*(undefined8 *)(*(long *)(unaff_x20 + 6) + 0x10));
    func_0x000108403778();
    func_0x000108403bbc();
    func_0x000108403764(*(undefined8 *)(unaff_x20 + 4));
    func_0x000108403878();
    FUN_1083fa4fc();
    goto code_r0x0001083ff730;
  case 4.76441e-44:
code_r0x0001083fec78:
    iVar56 = (int)pfVar47;
    func_0x000108403650();
    if (iVar56 == 0) break;
code_r0x0001083fec80:
    func_0x00010840359c();
    func_0x0001084038a8();
  case 5.04467e-44:
    goto code_r0x0001083ff730;
  case 5.1848e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) == 0) break;
    func_0x000108403784();
    func_0x0001083fda24();
code_r0x0001083fecc4:
    func_0x000108403868();
    pcVar42 = extraout_x8_03;
code_r0x0001083feccc:
    (*pcVar42)();
    unaff_x22 = pfVar47;
  default:
    goto LAB_1083ff778;
  case 5.46506e-44:
    bVar99 = *(byte *)(*(long *)(unaff_x20 + 6) + 0x54);
    unaff_x24 = (ulong)bVar99;
    if (bVar99 == 0xff) {
      unaff_x22 = *(float **)(unaff_x19 + 0x3a);
      *(undefined8 *)(unaff_x19 + 0x3a) = *(undefined8 *)(*(long *)(unaff_x20 + 6) + 0x28);
code_r0x0001083fece0:
      unaff_x19[0x10] = (float)((int)unaff_x19[0x10] + 1);
code_r0x0001083fecec:
      func_0x000108403878();
      func_0x0001083f98fc();
code_r0x0001083fecf8:
      func_0x000108403784();
code_r0x0001083fed04:
      iVar56 = (int)pfVar47;
      FUN_1083fdaa4();
      if (((ulong)param_2 & 1) == 0) break;
      func_0x000108403938();
      if (iVar56 != 0) goto code_r0x0001083fed1c;
code_r0x0001083fed24:
      *(float **)(unaff_x19 + 0x3a) = unaff_x22;
      func_0x0001084036f0();
code_r0x0001083fed2c:
      goto code_r0x0001083ff730;
    }
    fVar86 = unaff_x20[0xe];
    if (fVar86 != 1.4013e-45) {
      pfVar32 = pfVar47;
      if (fVar86 == 2.8026e-45) goto code_r0x0001083fed74;
      if (fVar86 == 4.2039e-45) {
        lVar51 = **(long **)(unaff_x20 + 0xc);
        lVar40 = (*(long **)(unaff_x20 + 0xc))[2];
        iVar56 = (int)(char)bVar99;
        uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar47 = unaff_x19;
        func_0x0001084038b0();
        *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
        *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
        *(float *)((long)register0x00000008 + -0xd0) = 0.0;
        *(float *)((long)register0x00000008 + -0xcc) = 0.0;
        *(float **)((long)register0x00000008 + -200) = unaff_x20;
        *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
        *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
        if (iVar56 == 0x51) {
          func_0x00010840392c();
          iVar56 = (int)pfVar47;
          FUN_108401ae0();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x000108403790();
          FUN_108401ae0();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x00010840359c();
          func_0x0001084037dc();
LAB_1084019ec:
          func_0x0001083f9180();
          return (float *)0x1;
        }
        if (iVar56 == 0x1c) {
          uVar57 = *(undefined8 *)(lVar51 + 0x10);
          func_0x000108403618();
          uVar43 = uVar57;
          func_0x0001084036c8();
          if ((int)uVar43 == 0) {
            return (float *)0x0;
          }
          iVar56 = (int)pfVar47 + 0x30;
          func_0x0001083fa660();
          func_0x0001084035d4();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x0001084035c4();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x000108403cfc();
          func_0x0001083f91a8();
          func_0x000108403918(pfVar47 + 0xc,0x1d7);
          func_0x000108403910(pfVar47 + 0xc,0x80000000);
          func_0x000108403918(pfVar47 + 0xc,0xfb);
          func_0x0001084038a8();
          FUN_1083f9008(pfVar47 + 0xc,0x106,uVar57);
          return (float *)0x1;
        }
        if (iVar56 == 0x38) {
          iVar56 = (int)*(undefined8 *)(lVar40 + 0x10);
          func_0x000108403634();
          func_0x00010840365c();
          if (iVar56 == 0) {
            func_0x000108403784();
            FUN_108401ae0();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            uVar43 = *(undefined8 *)(lVar51 + 0x10);
            FUN_10840082c(uVar43,&UNK_10df26728);
            if ((int)uVar43 == 0x22d) {
              return (float *)0x0;
            }
            func_0x000108403a44();
            func_0x0001084037dc();
          }
          else {
            iVar56 = (int)*(undefined8 *)(lVar40 + 0x10);
            func_0x000108403634();
            func_0x00010840365c();
            if (iVar56 != 3) {
              return (float *)0x0;
            }
            func_0x0001084035c4();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            func_0x0001084036c8();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            func_0x0001084035d4();
            if (iVar56 == 0) {
              return (float *)0x0;
            }
            func_0x000108403618(*(undefined8 *)(lVar51 + 0x10));
            func_0x0001084037dc();
          }
          goto LAB_1084019ec;
        }
        if (iVar56 == 0x47) {
          iVar56 = (int)*(undefined8 *)(lVar51 + 0x10);
          func_0x000108403618();
          func_0x0001084036c8();
          if (iVar56 == 0) {
            return (float *)0x0;
          }
          func_0x000108403990(4);
          func_0x0001084017e4();
          func_0x0001084035d4();
          if (iVar56 != 0) {
            func_0x000108403990();
            func_0x0001084017e4();
            func_0x0001084035c4();
            if (iVar56 != 0) {
              func_0x0001083f9210(pfVar47 + 0xc);
              func_0x000108403990();
              func_0x0001083f9178();
              return (float *)0x1;
            }
            return (float *)0x0;
          }
          return (float *)0x0;
        }
        if (iVar56 != 0xe) {
          return (float *)0x0;
        }
        func_0x0001084036c8();
        iVar56 = (int)pfVar47;
        if (iVar56 == 0) {
          return (float *)0x0;
        }
        func_0x000108403790();
        FUN_108401ae0();
        if (iVar56 == 0) {
          return (float *)0x0;
        }
        func_0x000108403908();
        if (iVar56 == 0) {
          return (float *)0x0;
        }
        func_0x000108403784();
        FUN_108401ae0();
        if (iVar56 == 0) {
          return (float *)0x0;
        }
        plVar31 = *(long **)(lVar51 + 0x10);
        puVar38 = &UNK_10df26708;
        uVar43 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        uVar57 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x20 = *(float **)((long)register0x00000008 + -0xc0);
        unaff_x19 = *(float **)((long)register0x00000008 + -0xb8);
        pfVar47 = *(float **)((long)register0x00000008 + -0xd0);
        pfVar39 = *(float **)((long)register0x00000008 + -200);
        goto FUN_108400898;
      }
      break;
    }
    unaff_x22 = (float *)0x0;
    pfVar39 = (float *)**(undefined8 **)(unaff_x20 + 0xc);
    param_3 = (float *)0x1;
    uVar173 = 1;
    switch(unaff_x24) {
    case 0:
      func_0x000108403624();
      func_0x00010840365c();
      if ((int)pfVar47 != 0) {
code_r0x0001083ff0b4:
        iVar56 = 0x11b;
        pfVar32 = unaff_x19;
        goto code_r0x0001083ff2ec;
      }
      func_0x0001084035d4();
      if ((int)pfVar47 != 0) {
        func_0x0001084035e4();
        func_0x000108401aa4(unaff_x19,pfVar47);
        goto code_r0x0001083ff730;
      }
      break;
    case 1:
    case 5:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x31:
      goto LAB_1083ff778;
    case 2:
      pfVar32 = unaff_x19;
code_r0x0001083ff0a0:
      iVar56 = 0x132;
      goto code_r0x0001083ff2ec;
    case 3:
      func_0x000108403668();
      pfVar32 = pfVar47;
code_r0x0001083ff04c:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff060:
code_r0x0001083ff07c:
        func_0x0001084008ec();
        goto code_r0x0001083ff730;
      }
      break;
    case 4:
      func_0x000108403668();
      if ((int)pfVar47 != 0) {
        func_0x0001084035e4();
code_r0x0001083ff078:
        goto code_r0x0001083ff07c;
      }
      break;
    case 6:
      iVar56 = 0x131;
      pfVar32 = unaff_x19;
      goto code_r0x0001083ff2ec;
    case 8:
      param_2 = (float *)0x133;
      pfVar32 = unaff_x19;
code_r0x0001083ff1b4:
      iVar56 = (int)param_2;
      goto code_r0x0001083ff2ec;
    case 0xd:
      param_2 = (float *)0x123;
      pfVar32 = unaff_x19;
code_r0x0001083ff0c8:
      iVar56 = (int)param_2;
      goto code_r0x0001083ff2ec;
    case 0x10:
      iVar56 = 0x12f;
      pfVar32 = unaff_x19;
      goto code_r0x0001083ff2ec;
    case 0x12:
      func_0x000108403624();
      uVar43 = func_0x000108403a20(0x2900ffffff);
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar43;
      pfVar32 = pfVar47;
      ppuVar41 = extraout_x8_05;
code_r0x0001083ff1cc:
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar41 + 2;
      uVar43 = 0x404ca5dc20000000;
      goto code_r0x0001083ff1e0;
    case 0x1a:
code_r0x0001083ff154:
      iVar56 = 0x138;
      pfVar32 = unaff_x19;
      goto code_r0x0001083ff2ec;
    case 0x1b:
code_r0x0001083ff16c:
      iVar56 = 0x137;
      pfVar32 = unaff_x19;
      goto code_r0x0001083ff2ec;
    case 0x1f:
    case 0x20:
    case 0x29:
      goto code_r0x0001083fe7fc;
    case 0x21:
      iVar56 = 0x11f;
      pfVar32 = unaff_x19;
code_r0x0001083ff2ec:
      uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
      pfVar33 = pfVar39;
      func_0x0001084038b0();
      pfVar26 = (float *)((long)register0x00000008 + -0xd0);
      *(float **)((long)register0x00000008 + -0xd0) = unaff_x22;
      *(float **)((long)register0x00000008 + -200) = pfVar39;
      *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
      *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
      pfVar52 = (float *)((long)register0x00000008 + -0xb0);
      pfVar47 = pfVar32;
      func_0x00010840371c();
      if ((int)pfVar47 == 0) {
        return pfVar47;
      }
      uVar173 = (undefined4)*(undefined8 *)(pfVar33 + 4);
      func_0x000108403618();
      pfVar47 = pfVar32 + 0xc;
      uVar43 = 0x108401b84;
SUB_1083f8fd0:
      if ((iVar56 - 0x10bU < 0x30) &&
         ((1L << ((ulong)(iVar56 - 0x10bU) & 0x3f) & 0xf5f811111111U) != 0)) {
        *(float **)((long)pfVar26 + -0x10) = pfVar52;
        *(undefined8 *)((long)pfVar26 + -8) = uVar43;
        *(int *)((long)pfVar26 + -0x30) = iVar56;
        *(undefined4 *)((long)pfVar26 + -0x2c) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x28) = 0xffffffff;
        *(undefined4 *)((long)pfVar26 + -0x24) = uVar173;
        *(undefined4 *)((long)pfVar26 + -0x20) = 0;
        *(undefined4 *)((long)pfVar26 + -0x1c) = 0;
        fVar86 = pfVar47[6];
        *(undefined4 *)((long)pfVar26 + -0x18) = 0;
        *(float *)((long)pfVar26 + -0x14) = fVar86;
        FUN_1083f8ee0();
        return pfVar47;
      }
      return pfVar47;
    case 0x23:
      func_0x000108403668();
      pfVar32 = pfVar47;
code_r0x0001083ff124:
      if ((int)pfVar32 != 0) {
        func_0x0001084035e4();
        func_0x000108403810();
        func_0x0001084035e4();
        func_0x0001084037dc();
code_r0x0001083ff13c:
        pfVar47 = pfVar32;
        uVar173 = SUB84(param_3,0);
        iVar56 = 0x11f;
        uVar43 = 0x1083ff144;
        pfVar26 = (float *)((long)register0x00000008 + -0xa0);
        goto SUB_1083f8fd0;
      }
      break;
    case 0x25:
code_r0x0001083fee80:
      func_0x000108403668();
      if ((int)pfVar47 != 0) {
        bVar27 = bVar99 == 0x25;
        goto code_r0x0001083fee90;
      }
      break;
    case 0x2a:
      func_0x000108403668();
      if ((int)pfVar47 != 0) {
code_r0x0001083ff0f4:
        pfVar32 = *(float **)(pfVar39 + 4);
        FUN_10840082c(pfVar32,&UNK_10df266e8);
        uVar28 = (int)pfVar32 == 0x22d;
code_r0x0001083ff10c:
        uVar173 = SUB84(param_3,0);
        iVar56 = (int)pfVar39;
        if (!(bool)uVar28) {
          func_0x000108403a44();
          func_0x0001084037dc();
          goto code_r0x0001083ff448;
        }
      }
      break;
    case 0x2b:
      func_0x000108403668();
      if ((int)pfVar47 != 0) {
        uVar43 = *(undefined8 *)(pfVar39 + 4);
        func_0x000108403764(uVar43);
        func_0x0001083f9220(unaff_x19 + 0xc,uVar43);
        goto code_r0x0001083ff730;
      }
      break;
    case 0x2f:
      func_0x000108403668();
      if ((int)pfVar47 == 0) break;
      pfVar32 = *(float **)(pfVar39 + 4);
code_r0x0001083ff19c:
      goto code_r0x0001083ff4bc;
    case 0x32:
      func_0x000108403668();
      if ((int)pfVar47 != 0) {
        func_0x0001084035e4();
        pfVar32 = pfVar47;
code_r0x0001083ff184:
        uVar173 = SUB84(param_3,0);
        func_0x0001084037dc();
        iVar56 = 0x13a;
        goto code_r0x0001083ff448;
      }
      break;
    case 0x33:
      func_0x000108403668();
      pfVar32 = pfVar47;
      if ((int)pfVar47 != 0) {
code_r0x0001083ff08c:
        uVar173 = SUB84(param_3,0);
        func_0x0001084035e4();
        func_0x0001084037dc();
        iVar56 = 0x139;
        goto code_r0x0001083ff448;
      }
      break;
    default:
      switch(bVar99) {
      case 0x4d:
        func_0x000108403624();
        *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
        func_0x000108403a20();
        *(long *)((long)register0x00000008 + -0x80) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x70) = pfVar47;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 0.0;
        func_0x00010840379c();
        (**(code **)(extraout_x8_00 + 0x50))();
        *(float *)((long)register0x00000008 + -0x98) = 2.3509886e-38;
        *(float *)((long)register0x00000008 + -0x94) = 5.74532e-44;
        *(long *)((long)register0x00000008 + -0xa0) = extraout_x8 + 0x10;
        *(float **)((long)register0x00000008 + -0x90) = pfVar47;
        *(float *)((long)register0x00000008 + -0x88) = 0.0;
        *(float *)((long)register0x00000008 + -0x84) = 1.875;
        FUN_1084017f0(unaff_x19,0xe,pfVar39,(float *)((long)register0x00000008 + -0x80),
                      (float *)((long)register0x00000008 + -0xa0));
        unaff_x22 = unaff_x19;
        goto LAB_1083ff778;
      case 0x4e:
        func_0x000108403668();
        if ((int)pfVar47 != 0) {
          func_0x000108403624();
          func_0x00010840365c();
          if ((int)pfVar47 == 0) {
            func_0x000108403624();
            func_0x000108403850(0x2900ffffff);
            *(float **)((long)register0x00000008 + -0x70) = pfVar47;
            *(float *)((long)register0x00000008 + -0x68) = -3.689349e+19;
            *(float *)((long)register0x00000008 + -100) = 122879.99;
            func_0x000108403804();
            if (((int)pfVar47 == 0) || (func_0x000108403908(), ((ulong)pfVar47 & 1) == 0)) break;
          }
          func_0x000108403624();
          unaff_s8 = 0xffffff;
          unaff_00005104 = 0x29;
          *(float *)((long)register0x00000008 + -0x78) = 2.3509886e-38;
          *(float *)((long)register0x00000008 + -0x74) = 5.74532e-44;
          unaff_x20 = (float *)&UNK_110a459d0;
          *(undefined ***)((long)register0x00000008 + -0x80) = &PTR_FUN_110a459e0;
          *(float **)((long)register0x00000008 + -0x70) = pfVar47;
          *(float *)((long)register0x00000008 + -0x68) = 0.0;
          *(float *)((long)register0x00000008 + -100) = -1.875;
          func_0x000108403804();
          pfVar32 = pfVar47;
          if (((ulong)pfVar47 & 1) != 0) goto code_r0x0001083ff294;
        }
        break;
      case 0x4f:
      case 0x51:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto LAB_1083ff778;
      case 0x50:
        iVar56 = 0x12e;
        pfVar32 = unaff_x19;
        goto code_r0x0001083ff2ec;
      case 0x52:
        iVar56 = 0x135;
        pfVar32 = unaff_x19;
        goto code_r0x0001083ff2ec;
      case 0x57:
        iVar56 = 0x130;
        pfVar32 = unaff_x19;
        goto code_r0x0001083ff2ec;
      case 0x5c:
        goto code_r0x0001083fee80;
      case 0x5d:
        func_0x000108403668();
        if ((int)pfVar47 != 0) {
          func_0x00010840379c();
          func_0x000108403bbc();
          func_0x000108403764(*(undefined8 *)(pfVar39 + 4));
          func_0x0001084039e4();
          func_0x0001083fa3ec();
          goto code_r0x0001083ff730;
        }
        break;
      case 0x5e:
        func_0x000108403668();
        if ((int)pfVar47 != 0) {
          func_0x0001084035e4();
          func_0x0001084037dc();
          iVar56 = 0x113;
          uVar43 = 0x1083ff31c;
          goto SUB_1083f8fd0;
        }
        break;
      case 0x5f:
        goto code_r0x0001083fe7fc;
      default:
        if (bVar99 != 0x3b) {
          if (bVar99 == 0x3d) {
            uVar29 = 7;
            pfVar47 = pfVar39;
            goto code_r0x0001083fee34;
          }
          if (bVar99 == 0x45) {
            func_0x000108403624();
            uVar57 = func_0x000108403a20(0x2900ffffff);
            ppuVar41 = extraout_x8_04;
            goto code_r0x0001083fee0c;
          }
          goto LAB_1083ff778;
        }
        func_0x000108403668();
        if ((int)pfVar47 != 0) {
          func_0x0001084035e4();
          func_0x0001084039e4();
          FUN_1083f9e48();
          if (1 < (int)pfVar47) {
            func_0x0001084039e4();
            FUN_1083f9e48();
            func_0x0001084039e4();
            func_0x0001083f91a8();
            iVar56 = 0x135;
            uVar173 = 1;
            uVar43 = 0x1083ff37c;
            pfVar26 = (float *)((long)register0x00000008 + -0xa0);
            pfVar47 = unaff_x19 + 0xc;
            goto SUB_1083f8fd0;
          }
          func_0x000108401aa4(unaff_x19,1);
          plVar31 = *(long **)(pfVar39 + 4);
          puVar38 = &UNK_10df266b8;
          unaff_x20 = pfVar47;
          pfVar47 = unaff_x22;
          goto code_r0x0001083ff6e0;
        }
      }
    }
    break;
  case 5.60519e-44:
    func_0x000108403a58();
    if (*(long *)((long)register0x00000008 + -0x80) != 0) {
      func_0x000108403784();
      func_0x0001083fda24();
      goto code_r0x0001083fecc4;
    }
    break;
  case 5.74532e-44:
    pfVar47 = *(float **)(unaff_x20 + 4);
    uVar43 = 0x1083feb64;
    uVar57 = func_0x00010840365c();
    bVar27 = (uint)pfVar47 == 3;
    if (3 < (uint)pfVar47) goto code_r0x0001083ff7a0;
    ppuVar41 = (undefined **)((ulong)pfVar47 & 0xff);
    puVar38 = &UNK_10df26544;
    lVar51 = (ulong)*(byte *)((long)ppuVar41 + 0x10df26544) * 4 + 0x1083feb88;
    pfVar32 = pfVar47;
    param_1 = pfVar47;
    pfVar33 = unaff_x20;
    pfVar26 = unaff_x23;
    switch(ppuVar41) {
    case (undefined **)0x0:
      goto code_r0x0001083fee9c;
    case (undefined **)0x1:
    case (undefined **)0x2:
    case (undefined **)0x4:
    case (undefined **)0x5:
    case (undefined **)0x14:
    case (undefined **)0x15:
    case (undefined **)0x7e:
    case (undefined **)0x7f:
    case (undefined **)0x80:
    case (undefined **)0x81:
    case (undefined **)0x92:
    case (undefined **)0x93:
    case (undefined **)0xa9:
    case (undefined **)0xcc:
    case (undefined **)0xcd:
    case (undefined **)0xce:
    case (undefined **)0xcf:
    case (undefined **)0xd6:
    case (undefined **)0xd7:
    case (undefined **)0xd9:
    case (undefined **)0xdb:
    case (undefined **)0xdf:
    case (undefined **)0xe1:
    case (undefined **)0xe3:
    case (undefined **)0xe5:
    case (undefined **)0xe9:
    case (undefined **)0xeb:
    case (undefined **)0xef:
    case (undefined **)0xf0:
    case (undefined **)0xf4:
    case (undefined **)0xf6:
    case (undefined **)0xfe:
    case (undefined **)0xf:
    case (undefined **)0x11:
    case (undefined **)0x13:
    case (undefined **)0x17:
    case (undefined **)0x27:
    case (undefined **)0x29:
    case (undefined **)0x2f:
    case (undefined **)0x33:
    case (undefined **)0x35:
    case (undefined **)0x3b:
    case (undefined **)0x3f:
    case (undefined **)0x8b:
    case (undefined **)0xc7:
    case (undefined **)0xdd:
    case (undefined **)0xe7:
    case (undefined **)0xed:
code_r0x0001083feb90:
      unaff_x22 = (float *)0x1;
code_r0x0001083feb94:
code_r0x0001083feb98:
code_r0x0001083feec4:
      func_0x000108403910();
      goto LAB_1083ff778;
    case (undefined **)0x3:
      unaff_x22 = (float *)0x1;
      goto code_r0x0001083feec4;
    default:
      goto code_r0x0001083feb90;
    case (undefined **)0xe:
      goto code_r0x0001083fed48;
    case (undefined **)0x10:
code_r0x0001083fed74:
      ppuVar41 = *(undefined ***)(unaff_x20 + 0xc);
      unaff_x22 = (float *)0x0;
code_r0x0001083fed78:
      iVar56 = (int)pfVar32;
      unaff_x23 = (float *)*ppuVar41;
      unaff_x20 = (float *)ppuVar41[1];
      iVar63 = (int)unaff_x24;
      ppuVar41 = (undefined **)(ulong)(iVar63 - 0x27U);
      if (iVar63 - 0x27U < 0x16) goto code_r0x0001083fed88;
      if (iVar63 - 0x11U < 8) {
        lVar51 = (ulong)*(ushort *)(&UNK_10df26548 + (ulong)(iVar63 - 0x11U) * 2) * 4 + 0x1083feee4;
        pfVar47 = pfVar32;
        goto code_r0x0001083feee0;
      }
      if (iVar63 == 0x53) {
        func_0x000108403c44();
        FUN_108401ae0();
        if (((iVar56 == 0) || (func_0x0001084035c4(), iVar56 == 0)) ||
           (func_0x000108403908(), iVar56 == 0)) goto code_r0x0001083ff774;
        unaff_x22 = *(float **)(unaff_x20 + 4);
        func_0x000108403634();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = unaff_x22;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if ((int)unaff_x22 != 0) {
          func_0x00010840359c();
          func_0x0001084037dc();
code_r0x0001083ff650:
          FUN_1083f9008();
        }
        goto LAB_1083ff778;
      }
      pfVar32 = unaff_x19;
      if (iVar63 == 0x44) goto code_r0x0001083ff660;
      if (iVar63 != 0x46) {
        bVar27 = iVar63 == 8;
        goto code_r0x0001083fee70;
      }
      iVar56 = (int)*(undefined8 *)(unaff_x23 + 4);
      func_0x000108403618();
      func_0x000108403c44();
      func_0x00010840371c();
      if ((iVar56 != 0) && (func_0x0001084035c4(), iVar56 != 0)) {
        func_0x000108403810();
        func_0x000108403878();
        func_0x0001083f91a8();
        func_0x0001083fa660(unaff_x19 + 0xc);
        unaff_x22 = (float *)0x1;
        func_0x000108403ee0();
        func_0x000108403918();
        func_0x0001084038a8();
        func_0x000108403ee0();
        FUN_1083f9008();
        goto code_r0x0001083ff650;
      }
      goto code_r0x0001083ff774;
    case (undefined **)0x12:
      goto code_r0x0001083fed3c;
    case (undefined **)0x16:
    case (undefined **)0x42:
    case (undefined **)0x4a:
    case (undefined **)0x4e:
    case (undefined **)0x52:
    case (undefined **)0x54:
    case (undefined **)0x56:
    case (undefined **)0x58:
    case (undefined **)0x5c:
    case (undefined **)0x5e:
    case (undefined **)0x62:
    case (undefined **)0x66:
    case (undefined **)0x68:
    case (undefined **)0x6a:
    case (undefined **)0x6c:
    case (undefined **)0x6e:
    case (undefined **)0x70:
    case (undefined **)0x72:
    case (undefined **)0x78:
    case (undefined **)0x7a:
    case (undefined **)0x7c:
    case (undefined **)0x84:
    case (undefined **)0x88:
    case (undefined **)0x8c:
    case (undefined **)0x8e:
    case (undefined **)0x90:
    case (undefined **)0x98:
    case (undefined **)0x9a:
    case (undefined **)0x9c:
    case (undefined **)0xa0:
    case (undefined **)0xa2:
    case (undefined **)0xac:
    case (undefined **)0xb0:
    case (undefined **)0xb4:
    case (undefined **)0xb6:
    case (undefined **)0xb8:
    case (undefined **)0xba:
    case (undefined **)0xbe:
    case (undefined **)0xc0:
    case (undefined **)0xc2:
    case (undefined **)0xc4:
      goto code_r0x0001083fef04;
    case (undefined **)0x18:
    case (undefined **)0x1a:
    case (undefined **)0x1c:
    case (undefined **)0x1e:
    case (undefined **)0x20:
    case (undefined **)0x22:
    case (undefined **)0x24:
    case (undefined **)0x2a:
    case (undefined **)0x2c:
    case (undefined **)0x30:
    case (undefined **)0x36:
    case (undefined **)0x38:
    case (undefined **)0x3c:
      goto code_r0x0001083fed60;
    case (undefined **)0x26:
      goto code_r0x0001083fef1c;
    case (undefined **)0x28:
      goto code_r0x0001083feeec;
    case (undefined **)0x2e:
code_r0x0001083feee0:
      iVar56 = (int)pfVar47;
      switch(lVar51) {
      case 0x1083feee4:
        *(float **)((long)register0x00000008 + -0x80) = unaff_x19;
        func_0x000108403dd8();
code_r0x0001083feeec:
        fVar86 = unaff_x19[0x41];
        unaff_x22 = (float *)(ulong)(uint)fVar86;
        *(float *)((long)register0x00000008 + -0x78) = SUB84(pfVar47,0);
        *(float *)((long)register0x00000008 + -0x74) = fVar86;
        unaff_x20 = pfVar47;
code_r0x0001083feef8:
        if ((int)unaff_x22 != (int)pfVar47) {
          func_0x000108403b44();
        }
code_r0x0001083fef04:
        func_0x000108403c44();
        func_0x00010840371c();
        if (((ulong)pfVar47 & 1) == 0) {
code_r0x0001083ff6f8:
          unaff_x22 = (float *)0x0;
        }
        else {
          if (unaff_x19[0x41] != SUB84(unaff_x22,0)) {
code_r0x0001083fef1c:
            func_0x000108403920();
          }
code_r0x0001083fef20:
          func_0x000108403828();
          ppuVar41 = (undefined **)0x201;
code_r0x0001083fef28:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar41;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
code_r0x0001083fef34:
          fVar86 = unaff_x19[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar86;
          bVar27 = fVar86 == SUB84(unaff_x20,0);
          pfVar32 = pfVar47;
          pfVar39 = unaff_x20;
          unaff_x22 = (float *)(ulong)(uint)fVar86;
code_r0x0001083fef40:
          pfVar47 = unaff_x22;
          if (!bVar27) {
            func_0x000108403b44();
          }
          func_0x000108403e24();
          func_0x0001084036b4();
          fVar86 = SUB84(pfVar47,0);
          if (unaff_x19[0x41] != fVar86) {
            func_0x000108403920();
          }
          *(float *)((long)register0x00000008 + -0x74) = fVar86;
          if (fVar86 != SUB84(pfVar39,0)) {
            func_0x000108403b44();
          }
          func_0x0001084035c4();
code_r0x0001083fef74:
          if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6f8;
          if (unaff_x19[0x41] != SUB84(pfVar47,0)) {
            func_0x000108403920();
          }
          func_0x000108403828();
code_r0x0001083fef8c:
          func_0x000108403e24();
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          unaff_x20 = (float *)(ulong)(uint)unaff_x19[0x41];
code_r0x0001083fefa0:
          *(float *)((long)register0x00000008 + -0x74) = SUB84(unaff_x20,0);
          uVar28 = SUB84(unaff_x20,0) == SUB84(pfVar39,0);
          if (!(bool)uVar28) {
            func_0x000108403b44();
          }
          ppuVar41 = (undefined **)0x201;
code_r0x0001083fefb4:
          *(short *)((long)register0x00000008 + -0xa0) = (short)ppuVar41;
          *(undefined1 *)((long)register0x00000008 + -0x9e) = 0;
          func_0x0001084036b4();
          func_0x000108403ee0();
          func_0x000108403b3c();
          func_0x000108403e44();
code_r0x0001083fefcc:
          if (!(bool)uVar28) {
            func_0x000108403e18();
          }
          func_0x000108403828();
          func_0x000108403b3c(unaff_x19 + 0xc,0x170);
code_r0x0001083fefe4:
          fVar86 = unaff_x19[0x41];
          *(float *)((long)register0x00000008 + -0x74) = fVar86;
          uVar28 = fVar86 == SUB84(pfVar39,0);
          if (!(bool)uVar28) {
            func_0x000108403b44();
          }
code_r0x0001083feff8:
          func_0x0001083f9178(unaff_x19 + 0xc,3);
          func_0x000108403e44();
          if (!(bool)uVar28) {
code_r0x0001083ff00c:
            func_0x000108403e18();
          }
          unaff_x22 = (float *)0x1;
        }
        FUN_1083fcee8((float *)((long)register0x00000008 + -0x80));
        goto LAB_1083ff778;
      case 0x1083ff498:
        puVar38 = &UNK_10df26668;
        pfVar33 = unaff_x20;
        break;
      case 0x1083ff4a4:
        func_0x000108403c44();
        FUN_108400bd4();
        if (iVar56 == 0) goto code_r0x0001083ff774;
        pfVar32 = *(float **)(unaff_x23 + 4);
code_r0x0001083ff4bc:
        func_0x000108403618();
        func_0x000108401a54(unaff_x19,pfVar32);
        goto code_r0x0001083ff730;
      case 0x1083ff4d0:
        func_0x000108403c44();
        func_0x00010840371c();
        if ((iVar56 == 0) || (func_0x0001084035c4(), iVar56 == 0)) goto code_r0x0001083ff774;
        func_0x000108403618(*(undefined8 *)(unaff_x23 + 4));
        func_0x000108403b20();
        func_0x0001083f91a8();
code_r0x0001083ff730:
        unaff_x22 = (float *)0x1;
        goto LAB_1083ff778;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0x32:
      goto code_r0x0001083fef34;
    case (undefined **)0x34:
      goto code_r0x0001083fef28;
    case (undefined **)0x3a:
      goto code_r0x0001083feef8;
    case (undefined **)0x3e:
      goto code_r0x0001083fef40;
    case (undefined **)0x40:
      goto code_r0x0001083fec34;
    case (undefined **)0x43:
    case (undefined **)0x4b:
    case (undefined **)0x4f:
    case (undefined **)0x53:
    case (undefined **)0x55:
    case (undefined **)0x57:
    case (undefined **)0x59:
    case (undefined **)0x5d:
    case (undefined **)0x5f:
    case (undefined **)0x63:
    case (undefined **)0x67:
    case (undefined **)0x69:
    case (undefined **)0x6b:
    case (undefined **)0x6d:
    case (undefined **)0x6f:
    case (undefined **)0x71:
    case (undefined **)0x73:
    case (undefined **)0x79:
    case (undefined **)0x7b:
    case (undefined **)0x7d:
    case (undefined **)0x85:
    case (undefined **)0x89:
    case (undefined **)0x8d:
    case (undefined **)0x8f:
    case (undefined **)0x91:
    case (undefined **)0x99:
    case (undefined **)0x9b:
    case (undefined **)0x9d:
    case (undefined **)0xa1:
    case (undefined **)0xa3:
    case (undefined **)0xad:
    case (undefined **)0xb1:
    case (undefined **)0xb5:
    case (undefined **)0xb7:
    case (undefined **)0xb9:
    case (undefined **)0xbb:
    case (undefined **)0xbf:
    case (undefined **)0xc1:
    case (undefined **)0xc3:
    case (undefined **)0xc5:
      goto code_r0x0001083feb94;
    case (undefined **)0x44:
      goto code_r0x0001083fec28;
    case (undefined **)0x46:
      goto code_r0x0001083febd4;
    case (undefined **)0x48:
      goto code_r0x0001083febf0;
    case (undefined **)0x4c:
      goto code_r0x0001083fecec;
    case (undefined **)0x50:
      goto code_r0x0001083fed38;
    case (undefined **)0x5a:
    case (undefined **)0xdc:
    case (undefined **)0xec:
      goto code_r0x0001083fec4c;
    case (undefined **)0x60:
      goto code_r0x0001083febc8;
    case (undefined **)0x64:
      goto code_r0x0001083fed44;
    case (undefined **)0x74:
      goto code_r0x0001083fece0;
    case (undefined **)0x76:
      goto code_r0x0001083fecf8;
    case (undefined **)0x82:
      goto code_r0x0001083fed2c;
    case (undefined **)0x86:
    case (undefined **)0xd8:
      goto code_r0x0001083fecac;
    case (undefined **)0x8a:
    case (undefined **)0xc6:
code_r0x0001083fee0c:
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar57;
      *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar41 + 2;
      uVar43 = 0x3f91df46a0000000;
      pfVar32 = pfVar47;
code_r0x0001083ff1e0:
      *(float **)((long)register0x00000008 + -0x70) = pfVar32;
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar43;
code_r0x0001083ff1e8:
      func_0x000108403790();
      FUN_108400bd4();
      unaff_x22 = pfVar32;
      goto LAB_1083ff778;
    case (undefined **)0x94:
      goto code_r0x0001083fec78;
    case (undefined **)0x96:
      goto code_r0x0001083fec58;
    case (undefined **)0x9e:
code_r0x0001083fed1c:
      FUN_1083ffef4();
      goto code_r0x0001083fed24;
    case (undefined **)0xa4:
      goto code_r0x0001083fed04;
    case (undefined **)0xa6:
code_r0x0001083fec10:
      if ((int)ppuVar41 != 0xe) goto code_r0x0001083ff3d8;
    case (undefined **)0x6:
    case (undefined **)0x8:
    case (undefined **)0xa:
    case (undefined **)0xc:
      func_0x0001083f926c();
      func_0x000108403bec();
code_r0x0001083fec28:
      FUN_1083fae64(unaff_x19 + 0xc,*pfVar39);
code_r0x0001083fec34:
code_r0x0001083ff3d8:
      func_0x000108403bec();
      goto code_r0x0001083ff730;
    case (undefined **)0xa8:
      goto code_r0x0001083fec40;
    case (undefined **)0xaa:
      goto code_r0x0001083fedcc;
    case (undefined **)0xae:
    case (undefined **)0xd2:
code_r0x0001083fed88:
      puVar38 = &UNK_10df26558;
      lVar51 = 0x1083feda0;
      pfVar33 = unaff_x20;
      pfVar26 = unaff_x23;
    case (undefined **)0xc8:
      unaff_x23 = pfVar33;
      unaff_x20 = pfVar33;
      switch(lVar51 + (ulong)*(ushort *)(puVar38 + (long)ppuVar41 * 2) * 4) {
      case 0x1083feda0:
        puVar38 = &UNK_10df266d8;
        unaff_x20 = pfVar26;
        break;
      case 0x1083ff4f8:
        puVar38 = &UNK_10df266a8;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff504:
        puVar38 = &UNK_10df266c8;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff510:
        puVar38 = &UNK_10df26718;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff51c:
        puVar38 = &UNK_10df266c8;
        unaff_x20 = pfVar26;
        break;
      case 0x1083ff534:
        puVar38 = &UNK_10df266d8;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff540:
        puVar38 = &UNK_10df26708;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff54c:
        puVar38 = &UNK_10df266f8;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff558:
        puVar38 = &UNK_10df26678;
        unaff_x23 = pfVar26;
        break;
      case 0x1083ff778:
        goto LAB_1083ff778;
      }
      break;
    case (undefined **)0xb2:
code_r0x0001083fee70:
      pfVar47 = unaff_x22;
      pfVar32 = unaff_x19;
      unaff_x22 = pfVar47;
      if (bVar27) {
code_r0x0001083fee7c:
        unaff_x22 = pfVar47;
code_r0x0001083ff660:
        uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
        pfVar33 = unaff_x20;
        func_0x0001084038b0();
        *(float **)((long)register0x00000008 + -0xd0) = unaff_x22;
        *(float **)((long)register0x00000008 + -200) = pfVar39;
        *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
        *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
        pfVar47 = pfVar32;
        func_0x00010840371c();
        if ((int)pfVar47 == 0) {
          return pfVar47;
        }
        FUN_108401ae0(pfVar32,pfVar33,*(undefined8 *)(unaff_x23 + 4));
        if ((int)pfVar32 != 0) {
          func_0x0001084035e4();
          func_0x000108403b50();
          return (float *)0x1;
        }
        return pfVar32;
      }
      goto LAB_1083ff778;
    case (undefined **)0xbc:
      goto code_r0x0001083fedc0;
    case (undefined **)0xca:
code_r0x0001083fee90:
      if (bVar27) {
        func_0x0001083faec8();
      }
      else {
        func_0x0001083fae94();
      }
      goto code_r0x0001083ff730;
    case (undefined **)0xd0:
code_r0x0001083fedc8:
      ppuVar41 = *(undefined ***)(unaff_x20 + 6);
code_r0x0001083fedcc:
      func_0x000108403618(ppuVar41[2]);
      func_0x000108403900();
      goto code_r0x0001083ff730;
    case (undefined **)0xd4:
    case (undefined **)0xe4:
      goto code_r0x0001083fedb0;
    case (undefined **)0xda:
      goto code_r0x0001083fec90;
    case (undefined **)0xde:
      goto code_r0x0001083febd0;
    case (undefined **)0xe0:
      goto code_r0x0001083fec6c;
    case (undefined **)0xe2:
      goto code_r0x0001083fecc4;
    case (undefined **)0xe6:
      goto code_r0x0001083fec50;
    case (undefined **)0xe8:
      goto code_r0x0001083fef20;
    case (undefined **)0xea:
      bVar99 = *(byte *)(unaff_x20 + 8);
      pfVar39 = *(float **)(unaff_x20 + 6);
      goto code_r0x0001083fee30;
    case (undefined **)0xee:
      goto code_r0x0001083febac;
    case (undefined **)0xf1:
      goto code_r0x0001083feba0;
    case (undefined **)0xf3:
      goto code_r0x0001083feb98;
    case (undefined **)0xf5:
    case (undefined **)0xf7:
    case (undefined **)0xf8:
    case (undefined **)0xf9:
    case (undefined **)0xfa:
    case (undefined **)0xfb:
    case (undefined **)0xfc:
    case (undefined **)0xfd:
    case (undefined **)0xff:
      goto code_r0x0001083feca0;
    }
    uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar47 = unaff_x19;
    func_0x0001084038b0(unaff_x19,puVar38,unaff_x23,unaff_x20);
    *(float **)((long)register0x00000008 + -0xd0) = unaff_x22;
    *(float **)((long)register0x00000008 + -200) = pfVar39;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar33;
    *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
    pfVar39 = pfVar47;
    func_0x00010840371c();
    if (((int)pfVar39 == 0) ||
       (FUN_108401ae0(pfVar47,unaff_x20,*(undefined8 *)(unaff_x23 + 4)), (int)pfVar47 == 0)) {
      return (float *)0x0;
    }
    plVar31 = *(long **)(unaff_x23 + 4);
    uVar43 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar57 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x20 = *(float **)((long)register0x00000008 + -0xc0);
    unaff_x19 = *(float **)((long)register0x00000008 + -0xb8);
    pfVar47 = *(float **)((long)register0x00000008 + -0xd0);
    pfVar39 = *(float **)((long)register0x00000008 + -200);
FUN_108400898:
    *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
    *(float **)((long)register0x00000008 + -200) = pfVar39;
    *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
    plVar30 = plVar31;
    FUN_10840082c(plVar31,puVar38);
    if ((int)plVar30 != 0x22d) {
      (**(code **)(*plVar31 + 0x80))(plVar31);
      func_0x000108403b50();
    }
    return (float *)(ulong)((int)plVar30 != 0x22d);
  case 6.16571e-44:
    func_0x000108403e04((float *)((long)register0x00000008 + -0xa0),unaff_x19,
                        *(undefined8 *)(unaff_x20 + 6));
    pfVar39 = *(float **)((long)register0x00000008 + -0xa0);
    if (pfVar39 != (float *)0x0) {
code_r0x0001083fea28:
      func_0x000108403790();
      func_0x0001083fda24();
      if (((ulong)pfVar32 & 1) == 0) {
code_r0x0001083ff6b4:
        pfVar47 = (float *)0x0;
      }
      else {
        func_0x000108403640();
        (*extraout_x8_01)();
        func_0x000108403810();
        func_0x000108403778();
        (**(code **)(extraout_x8_02 + 0x50))();
        func_0x000108403850(0x2900ffffff);
        *(float **)((long)register0x00000008 + -0x70) = pfVar32;
        *(float *)((long)register0x00000008 + -0x68) = 0.0;
        *(float *)((long)register0x00000008 + -100) = 1.875;
        func_0x000108403804();
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        if (*(char *)(unaff_x20 + 8) == '!') {
          func_0x000108403908();
        }
        else {
          if (*(char *)(unaff_x20 + 8) != ' ') goto code_r0x0001083ff7a0;
          func_0x000108403908();
        }
        iVar56 = (int)pfVar32;
        if (((ulong)pfVar32 & 1) == 0) goto code_r0x0001083ff6b4;
        func_0x000108403790();
        func_0x0001083fda64();
        if (iVar56 == 0) goto code_r0x0001083ff6b4;
        func_0x000108403640();
        (*extraout_x8_07)();
        func_0x000108403900();
        pfVar47 = (float *)0x1;
      }
      pcVar42 = *(code **)(*(long *)pfVar39 + 8);
      goto code_r0x0001083feccc;
    }
    break;
  case 6.30584e-44:
    bVar99 = *(byte *)(unaff_x20 + 6);
    pfVar39 = *(float **)(unaff_x20 + 8);
code_r0x0001083fee30:
    uVar29 = (uint)bVar99;
    pfVar47 = unaff_x20;
code_r0x0001083fee34:
    uVar43 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar57 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar33 = unaff_x19;
    func_0x0001084038b0();
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = pfVar47;
    *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar43;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar57;
    if ((uVar29 & 0xff) == 1) {
      func_0x0001084035c4();
      if ((int)pfVar33 == 0) {
        return pfVar33;
      }
      iVar56 = (int)*(undefined8 *)(pfVar39 + 4);
      func_0x000108403634();
      func_0x00010840365c();
      func_0x00010840359c();
      func_0x0001084037dc();
      if (iVar56 != 0) {
        FUN_1083f9ba0();
        func_0x00010840359c();
        func_0x0001084037dc();
        goto code_r0x000108401ca4;
      }
    }
    else {
      if (uVar29 != 7) {
        if (uVar29 == 0x21) {
          fVar86 = pfVar39[2];
          pfVar47 = *(float **)(pfVar39 + 4);
          func_0x000108403634();
          func_0x000108403a20();
          *(float *)((long)register0x00000008 + -0xe8) = fVar86;
          *(float *)((long)register0x00000008 + -0xe4) = 5.74532e-44;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_34 + 0x10;
          uVar43 = 0xbff0000000000000;
code_r0x000108401c4c:
          *(float **)((long)register0x00000008 + -0xe0) = pfVar47;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar43;
          func_0x000108403784();
          FUN_108400bd4();
          return pfVar47;
        }
        if (uVar29 == 0x20) {
          pfVar47 = *(float **)(pfVar39 + 4);
          func_0x000108403634();
          uVar43 = func_0x000108403a20(0x2900ffffff);
          *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar43;
          *(long *)((long)register0x00000008 + -0xf0) = extraout_x8_33 + 0x10;
          uVar43 = 0x3ff0000000000000;
          goto code_r0x000108401c4c;
        }
        if (uVar29 != 0xb) {
          return (float *)0x0;
        }
      }
      func_0x0001084035c4();
      if ((int)pfVar33 == 0) {
        return pfVar33;
      }
      func_0x00010840359c();
      func_0x0001084037dc();
    }
    FUN_1083f9ba0();
    func_0x00010840359c();
    func_0x0001084037dc();
code_r0x000108401ca4:
    FUN_1083f9008();
    return (float *)0x1;
  case 6.5861e-44:
    pfVar47 = unaff_x20 + 8;
code_r0x0001083fec40:
    FUN_1083fd9f0();
    unaff_x22 = pfVar47;
code_r0x0001083fec4c:
    param_2 = *(float **)(unaff_x20 + 6);
code_r0x0001083fec50:
    if ((int)pfVar47 == 0) {
code_r0x0001083fedac:
      func_0x000108403650();
code_r0x0001083fedb0:
      if ((int)pfVar47 == 0) break;
      uVar29 = 0;
      if (*(char *)(unaff_x20 + 8) == '\0') {
        uVar29 = (uint)unaff_x22;
      }
      ppuVar41 = (undefined **)(ulong)uVar29;
code_r0x0001083fedc0:
      if ((int)ppuVar41 == 1) goto code_r0x0001083fedc8;
      pfVar32 = *(float **)(*(long *)(unaff_x20 + 6) + 0x10);
code_r0x0001083ff020:
      func_0x000108403618();
      FUN_1083f9ce0(unaff_x19 + 0xc,pfVar32,unaff_x20 + 8,*(undefined1 *)(unaff_x20 + 9));
code_r0x0001083ff038:
      goto code_r0x0001083ff730;
    }
    ppuVar41 = (undefined **)(ulong)(uint)param_2[3];
code_r0x0001083fec58:
    if ((int)ppuVar41 != 0x32) goto code_r0x0001083fedac;
code_r0x0001083fec6c:
    goto code_r0x0001083fed68;
  case 6.72623e-44:
code_r0x0001083fec90:
    param_2 = *(float **)(unaff_x20 + 6);
    param_3 = *(float **)(unaff_x20 + 8);
    pfVar52 = *(float **)((long)register0x00000008 + -0x10);
    uVar43 = *(undefined8 *)((long)register0x00000008 + -8);
    pfVar47 = unaff_x19;
code_r0x0001083feca0:
    func_0x0001084038b0();
code_r0x0001083fecac:
    *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
    *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
    *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_10df26510;
    *(float *)((long)register0x00000008 + -0xd0) = 0.0;
    *(float *)((long)register0x00000008 + -0xcc) = 0.0;
    *(float **)((long)register0x00000008 + -200) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar43;
    pfVar39 = param_2;
    FUN_1083d6c74();
    fVar86 = SUB84(pfVar39,0);
    if (fVar86 == 0.0) {
      func_0x000108403d64();
      pfVar33 = param_3;
      FUN_1083d64e8();
      pfVar52 = param_3;
      FUN_1083d6eb4();
      pfVar47[0x10] = (float)((int)pfVar47[0x10] + 1);
      fVar86 = SUB84(pfVar52,0);
      if ((((int)pfVar39 == 0) && ((int)pfVar33 == 0)) && (fVar86 != 0.0)) {
        FUN_108401ae0(pfVar47,param_2,*(undefined8 *)(param_3 + 4));
        iVar56 = (int)pfVar47;
        if (((iVar56 != 0) && (func_0x0001084035d4(), iVar56 != 0)) &&
           (func_0x0001084035c4(), iVar56 != 0)) {
          func_0x00010840359c();
          func_0x0001084037dc();
          func_0x0001083f9180();
          return (float *)0x1;
        }
        return (float *)0x0;
      }
      func_0x000108403c60();
      *(float **)((long)register0x00000008 + -0x110) = pfVar47;
      func_0x000108403dd8();
      fVar112 = pfVar47[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar86;
      *(float *)((long)register0x00000008 + -0x104) = fVar112;
      if (fVar112 != fVar86) {
        func_0x000108403920();
      }
      func_0x0001083fa1f4(pfVar47 + 0xc);
      pfVar33 = pfVar47;
      func_0x00010840371c(pfVar47,param_2);
      if (((ulong)pfVar33 & 1) != 0) {
        if (pfVar47[0x41] != fVar112) {
          pfVar47[0x41] = fVar112;
          pfVar47[0x12] = fVar112;
        }
        if (((ulong)pfVar39 & 1) == 0) {
          func_0x0001084035d4();
          if ((int)pfVar33 != 0) {
            fVar112 = pfVar47[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar112;
            if (fVar112 != fVar86) {
              func_0x000108403920();
            }
            func_0x000108403d88();
            if (pfVar47[0x41] != fVar112) {
              func_0x000108403b44();
            }
            if (((ulong)pfVar52 & 1) == 0) {
              func_0x000108403cfc();
              func_0x0001083f98fc();
            }
            func_0x0001084035c4();
            if ((int)pfVar33 != 0) {
              func_0x000108403640();
              (*extraout_x8_32)();
              FUN_108400004(pfVar47 + 0xc,pfVar33);
              func_0x000108403cfc();
              func_0x0001083f9780();
              goto LAB_108401518;
            }
          }
        }
        else {
          *(float *)((long)register0x00000008 + -0x104) = fVar112;
          if (fVar112 != fVar86) {
            func_0x000108403920();
          }
          iVar56 = (int)pfVar33;
          func_0x000108403d88();
          if (pfVar47[0x41] != fVar112) {
            pfVar47[0x41] = fVar112;
            pfVar47[0x12] = fVar112;
          }
          func_0x0001084035c4();
          if (iVar56 != 0) {
            fVar112 = pfVar47[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar112;
            if (fVar112 != fVar86) {
              func_0x000108403920();
            }
            pfVar39 = pfVar47 + 0xc;
            func_0x0001084002a8();
            if (pfVar47[0x41] != fVar112) {
              pfVar47[0x41] = fVar112;
              pfVar47[0x12] = fVar112;
            }
            func_0x0001084035d4();
            if ((int)pfVar39 != 0) {
              func_0x000108403640();
              (*extraout_x8_31)();
              FUN_108400004(pfVar47 + 0xc,pfVar39);
LAB_108401518:
              fVar112 = pfVar47[0x41];
              *(float *)((long)register0x00000008 + -0x104) = fVar112;
              uVar28 = fVar112 == fVar86;
              if (!(bool)uVar28) {
                func_0x000108403920();
              }
              func_0x0001084036e4();
              func_0x0001084002b0(pfVar47 + 0xc);
              func_0x000108403e44();
              if (!(bool)uVar28) {
                func_0x000108403e18();
              }
              func_0x000108403840();
              goto LAB_108401548;
            }
          }
        }
      }
    }
    else {
      fVar112 = pfVar47[0x10];
      pfVar47[0x10] = (float)((int)fVar112 + 2);
      *(float **)((long)register0x00000008 + -0x110) = pfVar47;
      func_0x000108403dd8();
      fVar151 = pfVar47[0x41];
      *(float *)((long)register0x00000008 + -0x108) = fVar86;
      *(float *)((long)register0x00000008 + -0x104) = fVar151;
      if (fVar151 != fVar86) {
        func_0x000108403920();
      }
      pfVar39 = pfVar47;
      func_0x00010840371c(pfVar47,param_2);
      if (((ulong)pfVar39 & 1) != 0) {
        pfVar39 = pfVar47 + 0xc;
        FUN_1083f994c(pfVar39,0xffffffff,fVar112);
        iVar56 = (int)pfVar39;
        if (pfVar47[0x41] != fVar151) {
          pfVar47[0x41] = fVar151;
          pfVar47[0x12] = fVar151;
        }
        func_0x0001084035c4();
        if (iVar56 != 0) {
          pfVar39 = pfVar47 + 0xc;
          func_0x0001083f97f0(pfVar39,(int)fVar112 + 1);
          iVar56 = (int)pfVar39;
          func_0x000108403640();
          (*extraout_x8_30)();
          func_0x000108403900();
          func_0x000108403cfc();
          func_0x0001083f9780();
          func_0x0001084035d4();
          if (iVar56 != 0) {
            func_0x0001083f9780(pfVar47 + 0xc,(int)fVar112 + 1);
            fVar112 = pfVar47[0x41];
            *(float *)((long)register0x00000008 + -0x104) = fVar112;
            uVar28 = fVar112 == fVar86;
            if (!(bool)uVar28) {
              func_0x000108403920();
            }
            func_0x0001084036e4();
            func_0x000108403e44();
            if (!(bool)uVar28) {
              func_0x000108403e18();
            }
LAB_108401548:
            pfVar47 = (float *)0x1;
            goto LAB_108401554;
          }
        }
      }
    }
    pfVar47 = (float *)0x0;
LAB_108401554:
    FUN_1083fcee8((float *)((long)register0x00000008 + -0x110));
    return pfVar47;
  case 7.00649e-44:
    func_0x000108403778();
    func_0x000108403dd0();
    iVar56 = (int)pfVar47;
    if (((ulong)pfVar47 & 1) != 0) goto code_r0x0001083fe880;
    func_0x000108403778();
    func_0x000108403dc8();
    if (iVar56 != 0) goto code_r0x0001083fe880;
    goto code_r0x0001083fed5c;
  }
code_r0x0001083ff774:
  unaff_x22 = (float *)0x0;
  goto LAB_1083ff778;
code_r0x0001083fe880:
  pfVar47 = unaff_x20;
  FUN_1083c6784();
  pfVar39 = pfVar47;
  if (pfVar47 != (float *)0x0) goto code_r0x0001083fe7fc;
  *(undefined8 *)((long)register0x00000008 + -0x80) = *(undefined8 *)(unaff_x20 + 6);
code_r0x0001083fed38:
  pfVar47 = unaff_x19 + 0x50;
code_r0x0001083fed3c:
  FUN_1083d66f4();
code_r0x0001083fed44:
  if ((int)pfVar47 != 0) {
code_r0x0001083fed48:
    unaff_x22 = *(float **)(unaff_x20 + 6);
    FUN_1083f446c(unaff_x22);
    func_0x000108403650();
    goto LAB_1083ff778;
  }
code_r0x0001083fed5c:
  func_0x00010840359c();
code_r0x0001083fed60:
  func_0x000108403784();
code_r0x0001083fed68:
  FUN_108401d78();
  goto code_r0x0001083ff730;
code_r0x0001083fee9c:
code_r0x0001083feea4:
code_r0x0001083feea8:
  func_0x0001083fa660();
  goto code_r0x0001083ff730;
code_r0x0001083feb9c:
  param_2 = *(float **)(unaff_x20 + 6);
code_r0x0001083feba0:
  param_3 = (float *)(ulong)*(byte *)(unaff_x20 + 8);
  param_4 = *(float **)(unaff_x20 + 10);
  param_1 = unaff_x19;
code_r0x0001083febac:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x0001084038b0();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  unaff_x21 = unaff_x20;
  goto code_r0x000108400bd4;
code_r0x000108400c90:
  unaff_x23 = (float *)0x12;
  goto code_r0x000108400c0c;
code_r0x0001084042f8:
  while( true ) {
    fVar112 = SUB84(param_3,0);
    fVar86 = SUB84((float *)((long)register0x00000008 + -0x110),0);
    pfVar33 = (float *)register0x00000008;
    func_0x00010838ed50();
    unaff_x19 = (float *)((long)unaff_x19 + -1);
    if (unaff_x19 == (float *)0x0) break;
    uVar43 = *(undefined8 *)(pfVar39 + -1);
    fVar86 = *pfVar39;
    uVar57 = *(undefined8 *)unaff_x20;
    *(float *)((long)register0x00000008 + 0x10) = (float)uVar43;
    *(float *)((long)register0x00000008 + 0x14) = -fVar86;
    func_0x000108404a80(uVar43,-fVar86,uVar57);
    *(undefined8 *)((long)register0x00000008 + 0x20) = extraout_var_17;
    *(undefined8 *)((long)register0x00000008 + 0x18) = extraout_d2_00;
    *(float *)((long)register0x00000008 + 0x28) = 0.0;
    *(float *)((long)register0x00000008 + 0x2c) = 0.0;
    *(float **)((long)register0x00000008 + 0x30) = pfVar47;
    param_3 = (float *)0x1;
    func_0x000108142084((float *)((long)register0x00000008 + 0x10),
                        (float *)((long)register0x00000008 + -0x10));
    *(float *)((long)register0x00000008 + -0x110) = extraout_s0;
    *(float *)((long)register0x00000008 + -0x10c) = extraout_s1;
    *(float *)((long)register0x00000008 + -0x108) = extraout_s2;
    *(float *)((long)register0x00000008 + -0x104) = extraout_s3;
    unaff_x20 = unaff_x20 + 2;
    pfVar39 = pfVar39 + 2;
  }
  func_0x000108404a6c(*(undefined8 *)((long)register0x00000008 + -0x68));
  if (!(bool)uVar28) {
    ___stack_chk_fail();
    FUN_1083a2cb4((float *)((long)register0x00000008 + 0x10));
    pfVar32 = (float *)((long)register0x00000008 + -0x110);
    func_0x0001083a261c();
    func_0x000108404a58();
    *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(float **)((long)register0x00000008 + -0xb8) = pfVar33;
    *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
    *(code **)((long)register0x00000008 + -0xa8) = FUN_10840441c;
    if ((int)*pfVar32 < (int)fVar86) {
      *pfVar32 = fVar86;
      FUN_1084049cc(pfVar32 + 2,(long)(int)fVar86);
    }
    if ((int)pfVar32[4] < (int)fVar112) {
      pfVar32[4] = fVar112;
      FUN_1084049cc(pfVar32 + 6,(long)(int)fVar112);
    }
    pfVar32 = pfVar32 + 8;
    lVar51 = *(long *)((long)register0x00000008 + -0xc0);
    lVar40 = *(long *)((long)register0x00000008 + -0xb8);
    uVar43 = *(undefined8 *)pfVar32;
    *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
    *(float **)((long)register0x00000008 + -200) = pfVar39;
    *(long *)((long)register0x00000008 + -0xc0) = lVar51;
    *(long *)((long)register0x00000008 + -0xb8) = lVar40;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    func_0x000108341d9c(pfVar32,uVar43);
    for (lVar35 = *(long *)(pfVar32 + 2); lVar35 != lVar40; lVar35 = lVar35 + -0x60) {
      pfVar32 = (float *)(lVar35 + -0x18);
      func_0x0001081298a0(pfVar32);
    }
    *(long *)(lVar51 + 8) = lVar40;
    return pfVar32;
  }
  return pfVar33;
code_r0x00010841a304:
  *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_var;
  *(undefined8 *)((long)register0x00000008 + -0x80) = extraout_d0;
  *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_var;
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_d0;
  _objc_retain(unaff_x20);
  pfVar33 = unaff_x20;
  func_0x00010bf52a60();
  if (pfVar33 != (float *)0x0) {
    lVar51 = **(long **)((long)register0x00000008 + -0x90);
    do {
      pfVar32 = (float *)0x0;
      do {
        if (**(long **)((long)register0x00000008 + -0x90) != lVar51) {
          _objc_enumerationMutation(unaff_x20);
        }
        func_0x00010c067ec0(*(undefined8 *)
                             (*(long *)((long)register0x00000008 + -0x98) + (long)pfVar32 * 8));
        func_0x00010befc800(unaff_x24);
        pfVar32 = (float *)((long)pfVar32 + 1);
      } while (pfVar33 != pfVar32);
      pfVar33 = unaff_x20;
      func_0x00010bf52a60();
    } while (pfVar33 != (float *)0x0);
  }
  _objc_release(unaff_x20);
  unaff_x25 = unaff_x23;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x25 == (float *)0x0) {
    ppuVar41 = &PTR_PTR_1126b2000;
code_r0x00010841a3c4:
    puVar38 = ppuVar41[0x6f];
    _objc_opt_new(puVar38);
    func_0x00010c183080(&UNK_10df26510);
    _objc_release(puVar38);
  }
  else {
    func_0x00010c183080(&UNK_10df26510);
code_r0x00010841a3bc:
  }
  _objc_release(unaff_x25);
  pfVar33 = pfVar47;
  func_0x00010c0d3c80(pfVar47);
  pfVar32 = unaff_x23;
  func_0x00010bf4e840(&UNK_10df26510);
  _objc_retainAutoreleasedReturnValue();
  pfVar26 = pfVar32;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a60();
  _objc_release(pfVar26);
  _objc_release(pfVar32);
  _objc_release(pfVar33);
  pfVar33 = unaff_x19;
  func_0x00010c0d3c80(unaff_x19);
  pfVar32 = unaff_x23;
  func_0x00010bf4e840(&UNK_10df26510);
  _objc_retainAutoreleasedReturnValue();
  pfVar26 = pfVar32;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6a80();
  _objc_release(pfVar26);
  _objc_release(pfVar32);
  _objc_release(pfVar33);
  pfVar33 = unaff_x23;
  func_0x00010bf4e840(&UNK_10df26510);
  _objc_retainAutoreleasedReturnValue();
  pfVar32 = pfVar33;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6960();
  _objc_release(pfVar32);
  _objc_release(pfVar33);
  pfVar33 = pfVar39;
  func_0x00010c0d3c80(pfVar39);
  func_0x00010bf4e840(&UNK_10df26510);
  _objc_retainAutoreleasedReturnValue();
  pfVar32 = unaff_x23;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c69a0();
  _objc_release(pfVar32);
  _objc_release(unaff_x23);
  _objc_release(pfVar33);
  _objc_release(unaff_x24);
  _objc_release(pfVar47);
  _objc_release(pfVar39);
  _objc_release(unaff_x20);
  pfVar47 = unaff_x19;
  _objc_release(unaff_x19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    return pfVar47;
  }
  pcVar42 = FUN_10841a57c;
  ___stack_chk_fail();
  pfVar32 = unaff_x19;
code_r0x000109189420:
  *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
  *(float **)((long)register0x00000008 + -0xb8) = pfVar32;
  *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
  *(code **)((long)register0x00000008 + -0xa8) = pcVar42;
  func_0x000107c3094c(param_2,(float *)((long)register0x00000008 + -200),
                      (float *)((long)register0x00000008 + -0xd0));
  if ((int)param_2 == 0) {
    unaff_x19 = (float *)0x0;
  }
  else {
    unaff_x19 = (float *)PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(unaff_x19);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return unaff_x19;
code_r0x00010841bf90:
  while (pfVar32 != (float *)0x0) {
    unaff_x28 = (float *)0x0;
    do {
      if (**(ulong **)((long)register0x00000008 + -0x30) != unaff_x24) {
        _objc_enumerationMutation(unaff_x20);
      }
      pfVar47 = *(float **)(*(long *)((long)register0x00000008 + -0x38) + (long)unaff_x28 * 8);
      pfVar33 = pfVar47;
      func_0x00010c081660();
      if (((ulong)pfVar33 & 1) == 0) {
        unaff_x23 = pfVar47;
        func_0x00010c268400();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x98) = &UNK_10df265ec;
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_10df26584;
        *(float **)((long)register0x00000008 + -0x80) = unaff_x27;
        *(float **)((long)register0x00000008 + -0x78) = pfVar47;
        *(ulong *)((long)register0x00000008 + -0x68) =
             CONCAT17(unaff_00005187,
                      CONCAT16(unaff_00005186,
                               CONCAT15(unaff_00005185,
                                        CONCAT14(unaff_00005184,
                                                 CONCAT13(unaff_00005183,
                                                          CONCAT12(unaff_00005182,
                                                                   CONCAT11(unaff_00005181,unaff_b12
                                                                           )))))));
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d10;
        *(ulong *)((long)register0x00000008 + -0x50) =
             CONCAT17(unaff_00005127,
                      CONCAT16(unaff_00005126,
                               CONCAT15(unaff_00005125,
                                        CONCAT14(unaff_00005124,
                                                 CONCAT13(unaff_00005123,
                                                          CONCAT12(unaff_00005122,
                                                                   CONCAT11(unaff_00005121,unaff_b9)
                                                                  ))))));
        *(ulong *)((long)register0x00000008 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
        _objc_retain(unaff_x19);
        *(float **)((long)register0x00000008 + -0x70) = unaff_x19;
        func_0x00010bf97ce0(unaff_x23);
        _objc_release(unaff_x23);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      unaff_x28 = (float *)((long)unaff_x28 + 1);
    } while (pfVar39 != unaff_x28);
    param_3 = (float *)((long)register0x00000008 + -0x40);
    pfVar32 = unaff_x20;
    param_4 = (float *)register0x00000008;
    func_0x00010bf52a60();
    pfVar39 = pfVar32;
  }
LAB_10841bf94:
  _objc_release(unaff_x20);
  pfVar33 = unaff_x19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xa0)) {
    return pfVar33;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x128) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x110) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x108) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x100) = unaff_x28;
  *(float **)((long)register0x00000008 + -0xf8) = unaff_x27;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_10df26584;
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_10df265ec;
  *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x24;
  *(float **)((long)register0x00000008 + -0xd8) = unaff_x23;
  *(float **)((long)register0x00000008 + -0xd0) = pfVar47;
  *(float **)((long)register0x00000008 + -200) = pfVar39;
  *(float **)((long)register0x00000008 + -0xc0) = unaff_x20;
  *(float **)((long)register0x00000008 + -0xb8) = unaff_x19;
  *(float **)((long)register0x00000008 + -0xb0) = pfVar52;
  *(code **)((long)register0x00000008 + -0xa8) = FUN_10841bfec;
  *(undefined8 *)((long)register0x00000008 + -0x150) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pfVar39 = *(float **)(pfVar33 + 8);
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  pfVar52 = pfVar39;
  unaff_x19 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  pfVar32 = pfVar52;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pfVar52);
  _objc_release(pfVar39);
  if (pfVar32 != (float *)0x0) {
    pfVar39 = pfVar32;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    pfVar52 = pfVar39;
    func_0x00010c08fa60();
    _objc_release(pfVar39);
    if (pfVar52 != (float *)0x0) {
      *(float **)((long)register0x00000008 + -0x218) = param_2;
      *(float *)((long)register0x00000008 + -0x1e8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1ec) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d8) = 0.0;
      *(float *)((long)register0x00000008 + -0x1d4) = 0.0;
      *(float *)((long)register0x00000008 + -0x1e0) = 0.0;
      *(float *)((long)register0x00000008 + -0x1dc) = 0.0;
      *(float *)((long)register0x00000008 + -0x208) = 0.0;
      *(float *)((long)register0x00000008 + -0x204) = 0.0;
      *(float *)((long)register0x00000008 + -0x210) = 0.0;
      *(float *)((long)register0x00000008 + -0x20c) = 0.0;
      *(float *)((long)register0x00000008 + -0x1f8) = 0.0;
      *(float *)((long)register0x00000008 + -500) = 0.0;
      *(float *)((long)register0x00000008 + -0x200) = 0.0;
      *(float *)((long)register0x00000008 + -0x1fc) = 0.0;
      _objc_retain(param_3);
      unaff_x19 = (float *)((long)register0x00000008 + -0x210);
      param_4 = (float *)((long)register0x00000008 + -0x1d0);
      pfVar26 = param_3;
      func_0x00010bf52a60();
      if (pfVar26 != (float *)0x0) {
        lVar51 = **(long **)((long)register0x00000008 + -0x200);
        do {
          pfVar47 = (float *)0x0;
          do {
            if (**(long **)((long)register0x00000008 + -0x200) != lVar51) {
              _objc_enumerationMutation(param_3);
            }
            uVar43 = *(undefined8 *)
                      (*(long *)((long)register0x00000008 + -0x208) + (long)pfVar47 * 8);
            auVar178 = func_0x00010c1281e0(*(undefined8 *)(pfVar33 + 8));
            unaff_s8 = auVar178._0_4_;
            unaff_00005104 = auVar178._4_4_;
            unaff_b9 = auVar178[8];
            unaff_00005121 = auVar178[9];
            unaff_00005122 = auVar178[10];
            unaff_00005123 = auVar178[0xb];
            unaff_00005124 = auVar178[0xc];
            unaff_00005125 = auVar178[0xd];
            unaff_00005126 = auVar178[0xe];
            unaff_00005127 = auVar178[0xf];
            unaff_d10 = func_0x00010bf34840(*(undefined8 *)(pfVar33 + 8));
            unaff_d11 = func_0x00010bf348c0(*(undefined8 *)(pfVar33 + 8));
            auVar179 = func_0x00010c23d0a0(uVar43);
            unaff_d13 = auVar179._8_8_;
            uVar28 = (undefined1)extraout_var_09;
            uVar137 = (undefined1)((ulong)extraout_var_09 >> 8);
            uVar138 = (undefined1)((ulong)extraout_var_09 >> 0x10);
            uVar139 = (undefined1)((ulong)extraout_var_09 >> 0x18);
            uVar140 = (undefined1)((ulong)extraout_var_09 >> 0x20);
            uVar141 = (undefined1)((ulong)extraout_var_09 >> 0x28);
            uVar142 = (undefined1)((ulong)extraout_var_09 >> 0x30);
            uVar143 = (undefined1)((ulong)extraout_var_09 >> 0x38);
            unaff_b12 = auVar179[0];
            unaff_00005181 = auVar179[1];
            unaff_00005182 = auVar179[2];
            unaff_00005183 = auVar179[3];
            unaff_00005184 = auVar179[4];
            unaff_00005185 = auVar179[5];
            unaff_00005186 = auVar179[6];
            unaff_00005187 = auVar179[7];
            auVar180 = func_0x00010bf345e0(uVar43);
            unaff_d15 = auVar180._8_8_;
            unaff_d14 = auVar180._0_8_;
            pfVar52 = *(float **)(pfVar33 + 8);
            uVar58 = func_0x00010c141a80();
            uVar66 = *(undefined8 *)(pfVar33 + 0xc);
            uVar72 = *(undefined8 *)(pfVar33 + 0xe);
            uVar43 = *(undefined8 *)(pfVar33 + 0x10);
            uVar57 = *(undefined8 *)(pfVar33 + 0x12);
            *(undefined8 *)((long)register0x00000008 + -0x220) = *(undefined8 *)(pfVar33 + 0x14);
            *(undefined8 *)((long)register0x00000008 + -0x228) = uVar57;
            *(undefined8 *)((long)register0x00000008 + -0x230) = uVar43;
            *(undefined8 *)((long)register0x00000008 + -0x240) = uVar66;
            *(undefined8 *)((long)register0x00000008 + -0x238) = uVar72;
            *(undefined8 *)((long)register0x00000008 + -0x248) = uVar58;
            *(float *)((long)register0x00000008 + -0x250) = 0.0;
            *(float *)((long)register0x00000008 + -0x24c) = 1.875;
            in_q4[9] = uVar137;
            in_q4[8] = uVar28;
            in_q4[10] = uVar138;
            in_q4[0xb] = uVar139;
            in_q4[0xc] = uVar140;
            in_q4[0xd] = uVar141;
            in_q4[0xe] = uVar142;
            in_q4[0xf] = uVar143;
            in_q4._0_8_ = auVar179._0_8_;
            FUN_10841b844(auVar178._0_8_,auVar178._8_8_,unaff_d10,unaff_d11,auVar179._0_8_,unaff_d13
                          ,unaff_d14,unaff_d15);
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = pfVar52;
            func_0x00010c23d0a0();
            _objc_retainAutoreleasedReturnValue();
            dVar59 = (double)func_0x00010c2a5040();
            if (dVar59 <= 0.0) {
LAB_10841c2c0:
              _objc_release(unaff_x25);
            }
            else {
              unaff_x26 = pfVar52;
              func_0x00010c23d0a0();
              _objc_retainAutoreleasedReturnValue();
              dVar59 = (double)func_0x00010bfe0640();
              unaff_s8 = SUB84(dVar59,0);
              unaff_00005104 = (undefined4)((ulong)dVar59 >> 0x20);
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
              if (0.0 < dVar59) {
                unaff_x25 = (float *)PTR_PTR_1126d2bc8;
                func_0x00010c0cb140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c21acc0();
                func_0x00010c1695c0(unaff_x25);
                pfVar39 = unaff_x25;
                func_0x00010beedca0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179660();
                _objc_release(pfVar39);
                unaff_x26 = pfVar32;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                pfVar39 = unaff_x25;
                func_0x00010beedca0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1b6b40();
                _objc_release(pfVar39);
                func_0x00010befa120(*(undefined8 *)(pfVar33 + 10));
                _objc_release(unaff_x26);
                goto LAB_10841c2c0;
              }
            }
            _objc_release(pfVar52);
            pfVar47 = (float *)((long)pfVar47 + 1);
          } while (pfVar26 != pfVar47);
          unaff_x19 = (float *)((long)register0x00000008 + -0x210);
          param_4 = (float *)((long)register0x00000008 + -0x1d0);
          pfVar26 = param_3;
          func_0x00010bf52a60();
          pfVar39 = (float *)0x0;
        } while (pfVar26 != (float *)0x0);
      }
      _objc_release(param_3);
      param_2 = *(float **)((long)register0x00000008 + -0x218);
    }
  }
  _objc_release(pfVar32);
  _objc_release(param_3);
  pfVar32 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x150)) {
    return pfVar32;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x2d8) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x2d0) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x2c8) =
       CONCAT17(unaff_00005187,
                CONCAT16(unaff_00005186,
                         CONCAT15(unaff_00005185,
                                  CONCAT14(unaff_00005184,
                                           CONCAT13(unaff_00005183,
                                                    CONCAT12(unaff_00005182,
                                                             CONCAT11(unaff_00005181,unaff_b12))))))
               );
  *(undefined8 *)((long)register0x00000008 + -0x2c0) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x2b0) =
       CONCAT17(unaff_00005127,
                CONCAT16(unaff_00005126,
                         CONCAT15(unaff_00005125,
                                  CONCAT14(unaff_00005124,
                                           CONCAT13(unaff_00005123,
                                                    CONCAT12(unaff_00005122,
                                                             CONCAT11(unaff_00005121,unaff_b9)))))))
  ;
  *(ulong *)((long)register0x00000008 + -0x2a8) = CONCAT44(unaff_00005104,unaff_s8);
  *(float **)((long)register0x00000008 + -0x2a0) = unaff_x26;
  *(float **)((long)register0x00000008 + -0x298) = unaff_x25;
  *(float **)((long)register0x00000008 + -0x290) = pfVar52;
  *(float **)((long)register0x00000008 + -0x288) = pfVar39;
  *(float **)((long)register0x00000008 + -0x280) = pfVar47;
  *(float **)((long)register0x00000008 + -0x278) = pfVar33;
  *(float **)((long)register0x00000008 + -0x270) = param_3;
  *(float **)((long)register0x00000008 + -0x268) = param_2;
  *(float **)((long)register0x00000008 + -0x260) = (float *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -600) = FUN_10841c368;
  uVar43 = extraout_d2_02;
  uVar57 = extraout_d3_01;
  _objc_retain(unaff_x19);
  _objc_retain(param_4);
  pfVar47 = param_4;
  func_0x00010c082fa0();
  if ((int)pfVar47 != 0) {
    pfVar47 = param_4;
    func_0x00010c297ce0();
    _objc_retainAutoreleasedReturnValue();
    pfVar39 = pfVar47;
    func_0x00010c159620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pfVar39 != (float *)0x0) {
      pfVar39 = pfVar47;
      func_0x00010c159620();
      _objc_retainAutoreleasedReturnValue();
      pfVar33 = pfVar39;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      pfVar52 = pfVar33;
      func_0x00010c08fa60();
      _objc_release(pfVar33);
      if (pfVar52 != (float *)0x0) {
        puVar38 = PTR_PTR_1126d2bc8;
        func_0x00010c0cb140(PTR_PTR_1126d2bc8);
        _objc_retainAutoreleasedReturnValue();
        auVar178 = func_0x00010c128340(pfVar47);
        pfVar33 = pfVar47;
        auVar179 = func_0x00010c128320(pfVar47);
        *(undefined8 *)((long)register0x00000008 + -0x2f8) = uVar57;
        *(long *)((long)register0x00000008 + -0x2f0) = in_q4._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x308) = extraout_d1_02;
        *(undefined8 *)((long)register0x00000008 + -0x300) = uVar43;
        *(undefined8 *)((long)register0x00000008 + -0x310) = extraout_d0_00;
        *(float *)((long)register0x00000008 + -800) = 0.0;
        *(float *)((long)register0x00000008 + -0x31c) = 1.875;
        *(float *)((long)register0x00000008 + -0x318) = 0.0;
        *(float *)((long)register0x00000008 + -0x314) = 0.0;
        FUN_10841b844(auVar178._0_8_,auVar178._8_8_,auVar179._0_8_,auVar179._8_8_,0x3ff0000000000000
                      ,0x3ff0000000000000,0x3fe0000000000000,0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        pfVar52 = pfVar33;
        func_0x00010c23d0a0();
        _objc_retainAutoreleasedReturnValue();
        dVar59 = (double)func_0x00010c2a5040();
        if (dVar59 <= 0.0) {
          _objc_release(pfVar52);
        }
        else {
          pfVar32 = pfVar33;
          func_0x00010c23d0a0(pfVar33);
          _objc_retainAutoreleasedReturnValue();
          dVar59 = (double)func_0x00010bfe0640();
          _objc_release(pfVar32);
          _objc_release(pfVar52);
          if (0.0 < dVar59) {
            func_0x00010c1695c0(puVar38);
            func_0x00010c21acc0(puVar38);
            puVar37 = puVar38;
            func_0x00010beedca0(puVar38);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179660();
            _objc_release(puVar37);
            pfVar52 = pfVar39;
            func_0x00010c297e20(pfVar39);
            _objc_retainAutoreleasedReturnValue();
            puVar37 = puVar38;
            func_0x00010beedca0(puVar38);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1b6b40();
            _objc_release(puVar37);
            _objc_release(pfVar52);
            func_0x00010befa120(unaff_x19);
          }
        }
        _objc_release(pfVar33);
        _objc_release(puVar38);
      }
      _objc_release(pfVar39);
    }
    _objc_release(pfVar47);
  }
  _objc_release(param_4);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return unaff_x19;
  while( true ) {
    func_0x000108403650();
    lVar51 = lVar51 + -8;
    if (((ulong)pfVar47 & 1) == 0) break;
code_r0x0001083fe930:
    unaff_x22 = (float *)(ulong)(lVar51 == 0);
    if (lVar51 == 0) break;
  }
LAB_1083ff778:
  func_0x0001084038b0(unaff_x22,*(undefined8 *)((long)register0x00000008 + -8));
  return unaff_x22;
code_r0x000108400dfc:
  func_0x00010840365c();
  if ((int)unaff_x20 != (int)pfVar32) {
    return (float *)0x0;
  }
  func_0x000108403890();
  func_0x000108403dd0();
  pfVar26 = unaff_x26;
  if ((int)pfVar32 == 0) {
LAB_108400ec8:
    func_0x000108403890();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403890();
      (**(code **)(extraout_x8_16 + 0xd8))();
      pfVar52 = pfVar33;
      if ((int)pfVar32 != 0) goto LAB_108400ee4;
LAB_108400d74:
      pfVar33 = pfVar52;
      pfVar52 = (float *)0x0;
      pfVar26 = unaff_x26;
      unaff_x26 = unaff_x27;
    }
    else {
LAB_108400ee4:
      func_0x000108403884();
      func_0x000108403dd0();
      pfVar52 = pfVar32;
      unaff_x26 = unaff_x27;
    }
    uVar29 = (uint)pfVar52;
    bVar27 = false;
    unaff_x27 = unaff_x26;
  }
  else {
    func_0x000108403884();
    func_0x000108403dc8();
    if (((ulong)pfVar32 & 1) == 0) {
      func_0x000108403884();
      (**(code **)(extraout_x8_09 + 0xd8))();
      if (((ulong)pfVar32 & 1) == 0) goto LAB_108400ec8;
    }
    uVar29 = 0;
    bVar27 = true;
  }
  unaff_x20 = (float *)0x0;
  pfVar52 = *(float **)unaff_x26;
  if ((((uint)unaff_x23 & 0xff) < 0x20) &&
     ((1 << (ulong)((uint)unaff_x23 & 0x1f) & 0xffc08000U) != 0)) {
    pfVar32 = pfVar33;
    func_0x000108403e04(pfVar33,unaff_x19,pfVar47);
    unaff_x20 = *(float **)pfVar33;
    if (unaff_x20 == (float *)0x0) {
      return (float *)0x0;
    }
    if (unaff_x23 == (float *)0xf) {
      func_0x0001084035d4();
      if ((int)pfVar32 == 0) {
        unaff_x19 = (float *)0x0;
      }
      else {
        func_0x000108403784();
        func_0x0001083fda64();
        unaff_x19 = pfVar32;
      }
      goto LAB_108401210;
    }
    pfVar32 = (float *)((long)pfVar33 + 0x2f);
    FUN_1083cb2fc();
    *(char *)((long)pfVar33 + 0x2f) = (char)pfVar32;
    unaff_x23 = pfVar32;
  }
  if (((uint)unaff_x23 & 0xff) == 2) {
    func_0x000108403890();
    (**(code **)(extraout_x8_10 + 0xd8))();
    if ((int)pfVar32 == 0) {
LAB_108400efc:
      func_0x000108403890();
      (**(code **)(extraout_x8_17 + 0xd0))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_18 + 0xd8))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar56 = (int)pfVar32;
          (**(code **)(extraout_x8_19 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_20 + 0x60))();
          func_0x000108403884();
          (**(code **)(extraout_x8_21 + 0x68))();
          iVar63 = 1;
          goto LAB_108400fa8;
        }
      }
      func_0x000108403890();
      (**(code **)(extraout_x8_22 + 0xd8))();
      if ((int)pfVar32 != 0) {
        func_0x000108403884();
        (**(code **)(extraout_x8_23 + 0xd0))();
        if ((int)pfVar32 != 0) {
          func_0x000108403890();
          iVar63 = (int)pfVar32;
          (**(code **)(extraout_x8_24 + 0x60))();
          func_0x000108403890();
          (**(code **)(extraout_x8_25 + 0x68))();
          func_0x000108403884();
          (**(code **)(extraout_x8_26 + 0x60))();
          iVar56 = 1;
          goto LAB_108400fa8;
        }
      }
      goto LAB_108400fe4;
    }
    func_0x000108403884();
    (**(code **)(extraout_x8_11 + 0xd8))();
    if ((int)pfVar32 == 0) goto LAB_108400efc;
    func_0x000108403890();
    iVar63 = (int)pfVar32;
    (**(code **)(extraout_x8_12 + 0x60))();
    func_0x000108403890();
    (**(code **)(extraout_x8_13 + 0x68))();
    iVar56 = iVar63;
    func_0x000108403884();
    (**(code **)(extraout_x8_14 + 0x60))();
    func_0x000108403884();
    (**(code **)(extraout_x8_15 + 0x68))();
LAB_108400fa8:
    unaff_x19 = unaff_x19 + 0xc;
    func_0x0001083f926c(unaff_x19,iVar56 * iVar63);
    func_0x000108403784();
    FUN_108400974();
    if (((int)unaff_x19 == 0) || (func_0x0001084035d4(), (int)unaff_x19 == 0)) goto LAB_108401208;
    func_0x000108403cfc();
    func_0x0001083fa66c();
    goto LAB_1084011f8;
  }
LAB_108400fe4:
  if (((uVar29 & 1) == 0 && !bVar27) &&
     ((**(code **)(*(long *)pfVar52 + 0x38))(pfVar52,*(undefined8 *)pfVar26), pfVar32 = pfVar52,
     (int)pfVar52 == 0)) goto LAB_108401208;
  uVar50 = (uint)unaff_x23 & 0xff;
  if (uVar50 != 9) {
    if ((uVar50 != 8) || (func_0x000108403d64(), (int)pfVar32 == 0)) goto LAB_1084010a0;
    uVar43 = *(undefined8 *)(pfVar39 + 4);
    pfVar33[2] = 2.3509886e-38;
    pfVar33[3] = 5.74532e-44;
    *(undefined ***)pfVar33 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar33 + 4) = uVar43;
    pfVar33[6] = 0.0;
    pfVar33[7] = 0.0;
    func_0x00010840392c();
    FUN_108401264();
    pfVar47 = pfVar32;
    goto LAB_10840120c;
  }
  func_0x000108403d64();
  if ((int)pfVar32 != 0) {
    uVar43 = *(undefined8 *)(pfVar39 + 4);
    pfVar33[2] = 2.3509886e-38;
    pfVar33[3] = 5.74532e-44;
    *(undefined ***)pfVar33 = &PTR_FUN_110a459e0;
    *(undefined8 *)(pfVar33 + 4) = uVar43;
    pfVar33[6] = 0.0;
    pfVar33[7] = 1.875;
    func_0x00010840392c();
    FUN_108401264();
    pfVar47 = pfVar32;
    goto LAB_10840120c;
  }
LAB_1084010a0:
  func_0x000108403784();
  FUN_108400974();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (bVar27) {
    pfVar32 = *(float **)pfVar26;
    func_0x000108403744();
    (*extraout_x8_27)();
    func_0x0001084038a8();
  }
  func_0x0001084035d4();
  if ((int)pfVar32 == 0) goto LAB_108401208;
  if (uVar29 != 0) {
    pfVar32 = *(float **)unaff_x27;
    func_0x000108403744();
    (*extraout_x8_28)();
    func_0x0001084038a8();
  }
  pfVar47 = (float *)0x0;
  switch((ulong)unaff_x23 & 0xff) {
  case 0:
    func_0x0001084036d8();
    break;
  case 1:
    func_0x0001084036d8();
    break;
  case 2:
    func_0x0001084036d8();
    break;
  case 3:
    func_0x0001084036d8();
    break;
  default:
    goto LAB_10840120c;
  case 8:
  case 0xc:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar43 = 0xfb;
    goto code_r0x00010840116c;
  case 9:
  case 0xd:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar43 = 0x100;
    goto code_r0x00010840116c;
  case 10:
  case 0xe:
    func_0x000108403ce4();
    func_0x000108403a34();
    uVar43 = 0x106;
code_r0x00010840116c:
    unaff_x19 = unaff_x19 + 0xc;
    FUN_1083f9008(unaff_x19,uVar43,pfVar32);
    goto LAB_1084011f8;
  case 0x10:
    func_0x0001084036d8();
    if (((ulong)pfVar32 & 1) != 0) {
code_r0x0001084011ac:
      func_0x000108403ce4();
      func_0x000108403a34();
      func_0x000108400988(unaff_x19,(ulong)unaff_x23 & 0xff,pfVar32);
      goto LAB_1084011f8;
    }
    goto LAB_108401208;
  case 0x11:
    func_0x0001084036d8();
    if ((int)pfVar32 != 0) goto code_r0x0001084011ac;
    goto LAB_108401208;
  case 0x12:
  case 0x13:
    func_0x0001084036d8();
    break;
  case 0x14:
  case 0x15:
    func_0x0001084036d8();
  }
  unaff_x19 = pfVar32;
  if (((ulong)pfVar32 & 1) == 0) {
LAB_108401208:
    pfVar47 = (float *)0x0;
LAB_10840120c:
    unaff_x19 = pfVar47;
    if (unaff_x20 == (float *)0x0) {
      return pfVar47;
    }
  }
  else {
LAB_1084011f8:
    if (unaff_x20 == (float *)0x0) {
      return (float *)0x1;
    }
    func_0x000108403784();
    func_0x0001083fda64();
  }
LAB_108401210:
  func_0x000108403868();
  (*extraout_x8_29)();
  return unaff_x19;
}



/* Entry: 108401264; end: 108401593;  */

undefined8 FUN_108401264(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 uVar10;
  ulong uStack_70;
  int iStack_68;
  int iStack_64;
  
  uVar6 = param_2;
  FUN_1083d6c74();
  iVar3 = (int)uVar6;
  uStack_70 = param_1;
  if (iVar3 == 0) {
    func_0x000108403d64();
    uVar7 = param_3;
    FUN_1083d64e8();
    uVar8 = param_3;
    FUN_1083d6eb4();
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    iVar3 = (int)uVar8;
    if ((((int)uVar6 == 0) && ((int)uVar7 == 0)) && (iVar3 != 0)) {
      FUN_108401ae0(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
      iVar3 = (int)param_1;
      if (((iVar3 != 0) && (func_0x0001084035d4(), iVar3 != 0)) &&
         (func_0x0001084035c4(), iVar3 != 0)) {
        func_0x00010840359c();
        func_0x0001084037dc();
        func_0x0001083f9180();
        return 1;
      }
      return 0;
    }
    func_0x000108403c60();
    func_0x000108403dd8();
    iVar1 = *(int *)(param_1 + 0x104);
    iStack_68 = iVar3;
    iStack_64 = iVar1;
    if (iVar1 != iVar3) {
      func_0x000108403920();
    }
    func_0x0001083fa1f4(param_1 + 0x30);
    uVar7 = param_1;
    func_0x00010840371c(param_1,param_2);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x104) != iVar1) {
        *(int *)(param_1 + 0x104) = iVar1;
        *(int *)(param_1 + 0x48) = iVar1;
      }
      if ((uVar6 & 1) == 0) {
        func_0x0001084035d4();
        if ((int)uVar7 != 0) {
          iVar1 = *(int *)(param_1 + 0x104);
          iStack_64 = iVar1;
          if (iVar1 != iVar3) {
            func_0x000108403920();
          }
          func_0x000108403d88();
          if (*(int *)(param_1 + 0x104) != iVar1) {
            func_0x000108403b44();
          }
          if ((uVar8 & 1) == 0) {
            func_0x000108403cfc();
            func_0x0001083f98fc();
          }
          func_0x0001084035c4();
          if ((int)uVar7 != 0) {
            func_0x000108403640();
            (*extraout_x8_01)();
            FUN_108400004(param_1 + 0x30,uVar7);
            func_0x000108403cfc();
            func_0x0001083f9780();
            goto LAB_108401518;
          }
        }
      }
      else {
        iStack_64 = iVar1;
        if (iVar1 != iVar3) {
          func_0x000108403920();
        }
        iVar5 = (int)uVar7;
        func_0x000108403d88();
        if (*(int *)(param_1 + 0x104) != iVar1) {
          *(int *)(param_1 + 0x104) = iVar1;
          *(int *)(param_1 + 0x48) = iVar1;
        }
        func_0x0001084035c4();
        if (iVar5 != 0) {
          iVar1 = *(int *)(param_1 + 0x104);
          iStack_64 = iVar1;
          if (iVar1 != iVar3) {
            func_0x000108403920();
          }
          lVar9 = param_1 + 0x30;
          func_0x0001084002a8();
          if (*(int *)(param_1 + 0x104) != iVar1) {
            *(int *)(param_1 + 0x104) = iVar1;
            *(int *)(param_1 + 0x48) = iVar1;
          }
          func_0x0001084035d4();
          if ((int)lVar9 != 0) {
            func_0x000108403640();
            (*extraout_x8_00)();
            FUN_108400004(param_1 + 0x30,lVar9);
LAB_108401518:
            iStack_64 = *(int *)(param_1 + 0x104);
            uVar2 = iStack_64 == iVar3;
            if (!(bool)uVar2) {
              func_0x000108403920();
            }
            func_0x0001084036e4();
            func_0x0001084002b0(param_1 + 0x30);
            func_0x000108403e44();
            if (!(bool)uVar2) {
              func_0x000108403e18();
            }
            func_0x000108403840();
            goto LAB_108401548;
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 2;
    func_0x000108403dd8();
    iVar5 = *(int *)(param_1 + 0x104);
    iStack_68 = iVar3;
    iStack_64 = iVar5;
    if (iVar5 != iVar3) {
      func_0x000108403920();
    }
    uVar6 = param_1;
    func_0x00010840371c(param_1,param_2);
    if ((uVar6 & 1) != 0) {
      lVar9 = param_1 + 0x30;
      FUN_1083f994c(lVar9,0xffffffff,iVar1);
      iVar4 = (int)lVar9;
      if (*(int *)(param_1 + 0x104) != iVar5) {
        *(int *)(param_1 + 0x104) = iVar5;
        *(int *)(param_1 + 0x48) = iVar5;
      }
      func_0x0001084035c4();
      if (iVar4 != 0) {
        lVar9 = param_1 + 0x30;
        func_0x0001083f97f0(lVar9,iVar1 + 1);
        iVar5 = (int)lVar9;
        func_0x000108403640();
        (*extraout_x8)();
        func_0x000108403900();
        func_0x000108403cfc();
        func_0x0001083f9780();
        func_0x0001084035d4();
        if (iVar5 != 0) {
          func_0x0001083f9780(param_1 + 0x30,iVar1 + 1);
          iStack_64 = *(int *)(param_1 + 0x104);
          uVar2 = iStack_64 == iVar3;
          if (!(bool)uVar2) {
            func_0x000108403920();
          }
          func_0x0001084036e4();
          func_0x000108403e44();
          if (!(bool)uVar2) {
            func_0x000108403e18();
          }
LAB_108401548:
          uVar10 = 1;
          goto LAB_108401554;
        }
      }
    }
  }
  uVar10 = 0;
LAB_108401554:
  FUN_1083fcee8(&uStack_70);
  return uVar10;
}



/* Entry: 108401594; end: 108401653;  */

long * FUN_108401594(long *param_1,long *param_2,undefined *param_3,undefined8 param_4,long *param_5
                    )

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  undefined1 uVar21;
  int iVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  int iVar26;
  long *plVar27;
  undefined *puVar28;
  long *plVar29;
  int extraout_w8;
  uint uVar30;
  long extraout_x8;
  undefined1 *puVar31;
  int *piVar32;
  undefined8 extraout_x8_00;
  int extraout_w9;
  uint uVar33;
  code *extraout_x9;
  long extraout_x10;
  long lVar34;
  ulong uVar35;
  ulong extraout_x11;
  int *extraout_x12;
  int extraout_w13;
  int iVar36;
  undefined8 uVar37;
  undefined *unaff_x22;
  undefined1 *puVar38;
  undefined1 auStack_d0 [112];
  
  puVar2 = &stack0xffffffffffffffd0;
  plVar19 = (long *)&stack0xffffffffffffffd0;
  puVar38 = &stack0xfffffffffffffff0;
  plVar23 = param_1;
  plVar25 = param_2;
  (**(code **)(*param_1 + 0x28))();
  if (((ulong)plVar25 & 1) == 0) {
LAB_108401608:
    uVar35 = 0;
    uVar30 = 0;
    uVar33 = 0;
    goto LAB_108401640;
  }
  plVar25 = plVar23;
  func_0x00010840379c();
  plVar29 = param_2;
  (**(code **)(extraout_x8 + 0x88))();
  func_0x00010840365c();
  uVar21 = (uint)plVar25 == 3;
  if (3 < (uint)plVar25) goto LAB_108401608;
  puVar31 = (undefined1 *)((ulong)plVar25 & 0xff);
  pcVar1 = (code *)&UNK_10df26664;
  uVar35 = (ulong)(byte)puVar31[0x10df26664];
  lVar34 = uVar35 * 4 + 0x1084015fc;
  iVar22 = (int)lVar34;
  iVar26 = (int)plVar29;
  puVar3 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xffffffffffffffd0;
  puVar14 = &stack0xffffffffffffffd0;
  puVar15 = &stack0xffffffffffffffd0;
  puVar16 = &stack0xffffffffffffffd0;
  puVar17 = &stack0xffffffffffffffd0;
  plVar18 = (long *)&stack0xffffffffffffffd0;
  puVar20 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xffffffffffffffd0;
  puVar5 = &stack0xffffffffffffffd0;
  puVar7 = &stack0xffffffffffffffd0;
  puVar8 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xffffffffffffffd0;
  puVar10 = &stack0xffffffffffffffd0;
  puVar11 = &stack0xffffffffffffffd0;
  puVar12 = &stack0xffffffffffffffd0;
  puVar13 = &stack0xffffffffffffffd0;
  plVar24 = plVar25;
  plVar27 = plVar29;
  piVar32 = extraout_x12;
  iVar36 = extraout_w13;
  switch(puVar31) {
  default:
    plVar23 = (long *)(ulong)(uint)(float)(double)plVar23;
  case (undefined1 *)0x5:
  case (undefined1 *)0x9:
  case (undefined1 *)0xd:
  case (undefined1 *)0x11:
  case (undefined1 *)0x15:
  case (undefined1 *)0x19:
  case (undefined1 *)0x1d:
  case (undefined1 *)0x21:
  case (undefined1 *)0x25:
  case (undefined1 *)0x29:
  case (undefined1 *)0x2d:
  case (undefined1 *)0x35:
  case (undefined1 *)0x39:
  case (undefined1 *)0x3d:
  case (undefined1 *)0x45:
  case (undefined1 *)0x49:
  case (undefined1 *)0x4d:
  case (undefined1 *)0x55:
  case (undefined1 *)0x59:
  case (undefined1 *)0x5d:
  case (undefined1 *)0x65:
  case (undefined1 *)0x69:
  case (undefined1 *)0x6d:
  case (undefined1 *)0x75:
  case (undefined1 *)0x79:
  case (undefined1 *)0x7d:
  case (undefined1 *)0x85:
  case (undefined1 *)0x95:
  case (undefined1 *)0x99:
  case (undefined1 *)0x9d:
  case (undefined1 *)0xa1:
  case (undefined1 *)0xa5:
  case (undefined1 *)0xa9:
  case (undefined1 *)0xad:
  case (undefined1 *)0xb1:
  case (undefined1 *)0xb5:
  case (undefined1 *)0xc5:
    puVar31 = (undefined1 *)((ulong)plVar23 & 0xffffffff);
    goto code_r0x000108401604;
  case (undefined1 *)0x1:
    uVar30 = (uint)(double)plVar23;
    break;
  case (undefined1 *)0x2:
    uVar30 = (uint)(double)plVar23;
    break;
  case (undefined1 *)0x3:
    uVar30 = -(uint)((double)plVar23 != 0.0);
    uVar33 = 0xffffff00;
    if ((double)plVar23 == 0.0) {
      uVar33 = 0;
    }
    goto code_r0x00010840163c;
  case (undefined1 *)0x4:
    goto code_r0x0001084019a0;
  case (undefined1 *)0x8:
  case (undefined1 *)0xc:
  case (undefined1 *)0x10:
    goto LAB_1084019b8;
  case (undefined1 *)0x14:
    goto code_r0x0001084019d0;
  case (undefined1 *)0x18:
  case (undefined1 *)0x1c:
  case (undefined1 *)0x20:
    goto code_r0x0001084019e8;
  case (undefined1 *)0x24:
  case (undefined1 *)0xe4:
  case (undefined1 *)0xeb:
  case (undefined1 *)0xf0:
    goto code_r0x000108401790;
  case (undefined1 *)0x28:
  case (undefined1 *)0x2c:
  case (undefined1 *)0xd7:
  case (undefined1 *)0xf6:
    goto code_r0x0001084017a8;
  case (undefined1 *)0x30:
  case (undefined1 *)0x40:
  case (undefined1 *)0x50:
  case (undefined1 *)0x60:
  case (undefined1 *)0x70:
  case (undefined1 *)0x80:
  case (undefined1 *)0x88:
  case (undefined1 *)0x8c:
  case (undefined1 *)0x90:
  case (undefined1 *)0xb8:
  case (undefined1 *)0xbc:
  case (undefined1 *)0xc0:
  case (undefined1 *)0xc8:
  case (undefined1 *)0xcc:
  case (undefined1 *)0xd0:
    while (iVar22 = (int)lVar34, (int)uVar35 != 0) {
      piVar32 = (int *)(plVar23[1] + (long)(int)pcVar1 * 0x20);
      iVar36 = *piVar32;
      if (iVar36 == 0) break;
code_r0x000108401698:
      if (((int)plVar25 == iVar36) && (iVar22 == piVar32[2])) goto LAB_1084016c4;
      func_0x000108403ccc();
      pcVar1 = extraout_x9;
      lVar34 = extraout_x10;
      uVar35 = extraout_x11;
    }
    piVar32 = (int *)0x0;
    goto LAB_1084016b8;
  case (undefined1 *)0x31:
  case (undefined1 *)0x41:
  case (undefined1 *)0x51:
  case (undefined1 *)0x61:
  case (undefined1 *)0x71:
  case (undefined1 *)0x81:
  case (undefined1 *)0x89:
  case (undefined1 *)0x8d:
  case (undefined1 *)0x91:
  case (undefined1 *)0xb9:
  case (undefined1 *)0xbd:
  case (undefined1 *)0xc1:
  case (undefined1 *)0xc9:
  case (undefined1 *)0xcd:
  case (undefined1 *)0xd1:
    goto code_r0x000108401604;
  case (undefined1 *)0x34:
    goto code_r0x0001084017bc;
  case (undefined1 *)0x38:
  case (undefined1 *)0x3c:
  case (undefined1 *)0xea:
    plVar23 = plVar25;
    goto LAB_1084017d4;
  case (undefined1 *)0x44:
    iVar22 = (int)param_3;
    uVar21 = iVar22 == 1;
    if (iVar22 < 1) {
      return plVar25;
    }
    plVar19 = plVar25;
    func_0x0001083fcb94();
    if (((plVar19 != (long *)0x0) && (func_0x0001083fce24(), (bool)uVar21)) &&
       ((int)plVar19[2] == 0)) {
      *(int *)((long)plVar19 + 0xc) = *(int *)((long)plVar19 + 0xc) + iVar22;
      return plVar19;
    }
    func_0x0001083fcc3c();
    func_0x0001083fce3c();
    FUN_1083f8ee0();
    return plVar25;
  case (undefined1 *)0x48:
  case (undefined1 *)0x4c:
    plVar23 = plVar25;
    param_2 = param_5;
    unaff_x22 = param_3;
  case (undefined1 *)0x54:
    if (iVar26 == 0x51) {
LAB_1084019b8:
      func_0x00010840392c();
      FUN_108401ae0();
      if ((int)plVar25 == 0) {
        return (long *)0x0;
      }
      func_0x000108403790();
      goto code_r0x0001084019d0;
    }
    if (iVar26 == 0x1c) {
      plVar25 = *(long **)(unaff_x22 + 0x10);
      func_0x000108403618();
code_r0x0001084018a8:
      iVar22 = (int)plVar25;
      func_0x0001084036c8();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      plVar25 = plVar23 + 6;
      FUN_1083fa660(0);
code_r0x0001084018bc:
      iVar22 = (int)plVar25;
      func_0x0001084035d4();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      func_0x0001084035c4();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      func_0x000108403cfc();
code_r0x0001084018d0:
      func_0x0001083f91a8();
      param_2 = (long *)0x1;
      func_0x000108403918(plVar23 + 6,0x1d7);
code_r0x0001084018e4:
      func_0x000108403910(plVar23 + 6,0x80000000);
      func_0x000108403918(plVar23 + 6,0xfb);
      func_0x0001084038a8();
code_r0x000108401910:
      FUN_1083f9008();
      return param_2;
    }
    uVar21 = iVar26 == 0x38;
code_r0x000108401828:
    if (!(bool)uVar21) {
      if (iVar26 != 0x47) {
        if (iVar26 != 0xe) {
          return (long *)0x0;
        }
code_r0x00010840183c:
        func_0x0001084036c8();
        if ((int)plVar25 == 0) {
          return (long *)0x0;
        }
        func_0x000108403790();
        FUN_108401ae0();
        if ((int)plVar25 == 0) {
          return (long *)0x0;
        }
code_r0x000108401854:
        func_0x000108403908();
        if ((int)plVar25 == 0) {
          return (long *)0x0;
        }
code_r0x000108401868:
        iVar22 = (int)plVar25;
        func_0x000108403784();
        FUN_108401ae0();
        if (iVar22 == 0) {
          return (long *)0x0;
        }
        plVar29 = *(long **)(unaff_x22 + 0x10);
code_r0x00010840187c:
        param_3 = &UNK_10df26708;
code_r0x000108401894:
        plVar19 = plVar29;
        FUN_10840082c(plVar29,param_3);
        if ((int)plVar19 != 0x22d) {
          (**(code **)(*plVar29 + 0x80))(plVar29);
          func_0x000108403b50();
        }
        return (long *)(ulong)((int)plVar19 != 0x22d);
      }
      plVar25 = *(long **)(unaff_x22 + 0x10);
      func_0x000108403618();
      func_0x0001084036c8();
code_r0x000108401928:
      if ((int)plVar25 == 0) {
        return (long *)0x0;
      }
      func_0x000108403990(4);
      func_0x0001084017e4();
      func_0x0001084035d4();
code_r0x000108401940:
      iVar22 = (int)plVar25;
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      func_0x000108403990();
      func_0x0001084017e4();
      func_0x0001084035c4();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
code_r0x000108401958:
      func_0x0001083f9210();
      func_0x000108403990();
      func_0x0001083f9178();
      return (long *)0x1;
    }
    plVar25 = (long *)param_2[2];
    func_0x000108403634();
code_r0x000108401970:
    iVar22 = (int)plVar25;
    func_0x00010840365c();
    if (iVar22 == 0) {
      func_0x000108403784();
      FUN_108401ae0();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      func_0x0001084036c8();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      func_0x0001084035d4();
      if (iVar22 == 0) {
        return (long *)0x0;
      }
      uVar37 = *(undefined8 *)(unaff_x22 + 0x10);
      FUN_10840082c(uVar37,&UNK_10df26728);
      if ((int)uVar37 == 0x22d) {
        return (long *)0x0;
      }
      func_0x000108403a44();
      func_0x0001084037dc();
    }
    else {
      plVar25 = (long *)param_2[2];
      func_0x000108403634();
      func_0x00010840365c();
      uVar21 = (int)plVar25 == 3;
code_r0x000108401988:
      if (!(bool)uVar21) {
        return (long *)0x0;
      }
      func_0x0001084035c4();
      if ((int)plVar25 == 0) {
        return (long *)0x0;
      }
      func_0x0001084036c8();
      if ((int)plVar25 == 0) {
        return (long *)0x0;
      }
      func_0x0001084035d4();
code_r0x0001084019a0:
      if ((int)plVar25 == 0) {
        return (long *)0x0;
      }
      func_0x000108403618(*(undefined8 *)(unaff_x22 + 0x10));
      func_0x0001084037dc();
    }
    goto LAB_1084019ec;
  case (undefined1 *)0x58:
    goto code_r0x000108401828;
  case (undefined1 *)0x5c:
    goto code_r0x00010840183c;
  case (undefined1 *)0x64:
    goto code_r0x000108401910;
  case (undefined1 *)0x68:
    goto code_r0x000108401928;
  case (undefined1 *)0x6c:
    goto code_r0x000108401940;
  case (undefined1 *)0x74:
    goto code_r0x000108401958;
  case (undefined1 *)0x78:
    goto code_r0x000108401970;
  case (undefined1 *)0x7c:
    goto code_r0x000108401988;
  case (undefined1 *)0x84:
    goto code_r0x000108401698;
  case (undefined1 *)0x94:
    goto code_r0x000108401854;
  case (undefined1 *)0x98:
    goto code_r0x000108401868;
  case (undefined1 *)0x9c:
  case (undefined1 *)0xa0:
    goto code_r0x00010840187c;
  case (undefined1 *)0xa4:
    goto code_r0x000108401894;
  case (undefined1 *)0xa8:
    goto code_r0x0001084018a8;
  case (undefined1 *)0xac:
  case (undefined1 *)0xb0:
    goto code_r0x0001084018bc;
  case (undefined1 *)0xb4:
    goto code_r0x0001084018d0;
  case (undefined1 *)0xc4:
    goto code_r0x0001084018e4;
  case (undefined1 *)0xd4:
  case (undefined1 *)0xf3:
    goto LAB_108401734;
  case (undefined1 *)0xd5:
  case (undefined1 *)0xf4:
    puVar2 = auStack_d0;
  case (undefined1 *)0xfc:
    *(long **)(puVar2 + 0x80) = param_2;
    *(long **)(puVar2 + 0x88) = plVar23;
    *(undefined1 **)(puVar2 + 0x90) = puVar38;
    *(undefined8 *)(puVar2 + 0x98) = 0x1084015d4;
    puVar3 = puVar2;
code_r0x0001084016dc:
    puVar38 = puVar3 + 0x90;
    func_0x000108403c8c();
    *(undefined8 *)(puVar3 + 0x68) = extraout_x8_00;
    unaff_x22 = puVar3 + 0x18;
    *(undefined **)(puVar3 + 0x58) = unaff_x22;
    *(undefined8 *)(puVar3 + 0x60) = 0x2000000000;
    func_0x000108403dbc();
    puVar4 = puVar3;
    puVar14 = puVar3;
    plVar23 = plVar24;
    param_2 = plVar25;
    param_1 = plVar29;
    if (((ulong)plVar24 & 1) != 0) {
code_r0x000108401710:
      puVar28 = unaff_x22 + 0x40;
      plVar29 = param_2;
      FUN_10840038c();
      puVar6 = puVar4;
      if (((ulong)puVar28 & 1) == 0) {
LAB_108401734:
        pcVar1 = *(code **)(*param_1 + 0x38);
        puVar7 = puVar6;
code_r0x00010840173c:
        puVar8 = puVar7;
        puVar31 = puVar7;
code_r0x000108401744:
        puVar9 = puVar8;
code_r0x000108401748:
        (*pcVar1)(puVar31);
        puVar10 = puVar9;
code_r0x000108401750:
        puVar11 = puVar10;
code_r0x000108401754:
        param_1 = param_2 + 0x16;
        FUN_1083fd2ec(param_1,puVar11);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11);
        FUN_108400650(param_2,unaff_x22 + 0x40,param_1);
        puVar12 = puVar11;
code_r0x000108401780:
        plVar29 = param_1;
        plVar25 = param_2 + 6;
        puVar13 = puVar12;
        param_1 = plVar29;
code_r0x000108401788:
        FUN_1084017dc();
        puVar14 = puVar13;
        plVar24 = plVar25;
        plVar27 = plVar29;
      }
      else {
        plVar25 = param_2 + 6;
        puVar5 = puVar4;
code_r0x00010840172c:
        FUN_1084017dc();
        puVar14 = puVar5;
        plVar24 = plVar25;
        plVar27 = plVar29;
      }
    }
LAB_10840178c:
    plVar29 = plVar27;
    func_0x000108403ab0();
    puVar15 = puVar14;
code_r0x000108401790:
    plVar25 = plVar23;
    func_0x0001084039b0(*(undefined8 *)(puVar38 + -0x28));
    puVar16 = puVar15;
    if (!(bool)uVar21) {
LAB_1084017b4:
      plVar25 = plVar24;
      ___stack_chk_fail();
      puVar17 = puVar16;
code_r0x0001084017b8:
      plVar18 = (long *)puVar17;
      plVar23 = plVar25;
code_r0x0001084017bc:
      plVar25 = plVar18;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      plVar19 = plVar18;
LAB_1084017d4:
      func_0x000108403ab0();
      puVar20 = (undefined1 *)plVar19;
code_r0x0001084017d8:
      func_0x0001084037d4();
      *(undefined **)(puVar20 + -0x30) = unaff_x22;
      *(long **)(puVar20 + -0x28) = param_1;
      *(long **)(puVar20 + -0x20) = param_2;
      *(long **)(puVar20 + -0x18) = plVar23;
      *(undefined1 **)(puVar20 + -0x10) = puVar38;
      *(code **)(puVar20 + -8) = FUN_1084017dc;
      plVar19 = plVar25;
      func_0x0001083fcb94();
      iVar22 = (int)((ulong)plVar29 >> 0x20);
      if (((plVar19 == (long *)0x0) || ((int)*plVar19 != 0x20f)) ||
         (func_0x0001083fcbb4(), extraout_w9 != (int)plVar29)) {
        if (0 < iVar22) {
          plVar19 = plVar25;
          func_0x0001083fcb48(plVar25,0x20f,(ulong)plVar29 | 0xffffffff00000000,
                              (ulong)plVar29 >> 0x20);
        }
      }
      else {
        *(int *)((long)plVar19 + 0xc) = extraout_w8 + iVar22;
      }
      plVar23 = plVar19;
      if (2 < (int)plVar25[1]) {
        func_0x0001083fcb88();
        plVar29 = plVar19;
        func_0x0001083fcc30();
        FUN_1083f8f50();
        plVar23 = plVar29;
        func_0x0001083fcdfc();
        if ((((((plVar19 != (long *)0x0) && (plVar29 != (long *)0x0)) && (plVar23 != (long *)0x0))
             && (((int)*plVar19 == 0x211 && ((int)*plVar29 == 0x21c)))) &&
            ((*(int *)((long)plVar29 + 0xc) == *(int *)((long)plVar19 + 0xc) &&
             (((int)*plVar23 - 0x215U < 2 &&
              (*(int *)((long)plVar23 + 4) == *(int *)((long)plVar19 + 4))))))) &&
           (*(int *)((long)plVar23 + 0xc) == *(int *)((long)plVar19 + 0xc))) {
          iVar22 = (int)plVar25[1];
          if ((iVar22 == 1) || (iVar22 == 0)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1083f9ac4);
            (*pcVar1)();
          }
          *(int *)(plVar25 + 1) = iVar22 + -2;
        }
      }
      return plVar23;
    }
    goto code_r0x0001084017a0;
  case (undefined1 *)0xd6:
  case (undefined1 *)0xd8:
  case (undefined1 *)0xec:
  case (undefined1 *)0xf5:
  case (undefined1 *)0xf7:
    goto code_r0x000108401748;
  case (undefined1 *)0xd9:
  case (undefined1 *)0xe6:
  case (undefined1 *)0xf8:
  case (undefined1 *)0xfd:
    goto code_r0x00010840172c;
  case (undefined1 *)0xda:
  case (undefined1 *)0xf9:
LAB_1084016c4:
    piVar32 = piVar32 + 2;
LAB_1084016b8:
    func_0x000108403c70(piVar32);
code_r0x0001084016c0:
    return plVar25;
  case (undefined1 *)0xdb:
  case (undefined1 *)0xfa:
    goto code_r0x000108401744;
  case (undefined1 *)0xdc:
  case (undefined1 *)0xfb:
    goto code_r0x00010840173c;
  case (undefined1 *)0xdd:
    goto code_r0x0001084016c0;
  case (undefined1 *)0xde:
    goto code_r0x0001084016dc;
  case (undefined1 *)0xdf:
    goto code_r0x000108401750;
  case (undefined1 *)0xe0:
  case (undefined1 *)0xe3:
    goto LAB_1084017b4;
  case (undefined1 *)0xe1:
    goto code_r0x0001084017b8;
  case (undefined1 *)0xe2:
    goto code_r0x0001084017d8;
  case (undefined1 *)0xe5:
    goto LAB_10840178c;
  case (undefined1 *)0xe7:
  case (undefined1 *)0xfe:
    goto code_r0x000108401754;
  case (undefined1 *)0xe8:
  case (undefined1 *)0xff:
    goto code_r0x000108401780;
  case (undefined1 *)0xe9:
  case (undefined1 *)0xed:
    goto code_r0x0001084017ac;
  case (undefined1 *)0xee:
    goto code_r0x0001084017a0;
  case (undefined1 *)0xef:
    goto code_r0x000108401788;
  case (undefined1 *)0xf1:
    goto code_r0x000108401710;
  }
code_r0x000108401638:
  uVar33 = uVar30 & 0xffffff00;
code_r0x00010840163c:
  uVar35 = 0x100000000;
LAB_108401640:
  return (long *)(uVar35 | (uVar33 | uVar30 & 0xff));
code_r0x0001084017a0:
  goto code_r0x0001084017a8;
code_r0x0001084019d0:
  iVar22 = (int)plVar25;
  FUN_108401ae0();
  if (iVar22 == 0) {
    return (long *)0x0;
  }
  func_0x0001084035c4();
  if (iVar22 == 0) {
    return (long *)0x0;
  }
  func_0x00010840359c();
  func_0x0001084037dc();
  goto code_r0x0001084019e8;
code_r0x000108401604:
  uVar30 = (uint)puVar31;
  goto code_r0x000108401638;
code_r0x0001084017a8:
code_r0x0001084017ac:
  return plVar25;
code_r0x0001084019e8:
LAB_1084019ec:
  func_0x0001083f9180();
  return (long *)0x1;
}



/* Entry: 108401654; end: 1084016cb;  */

void FUN_108401654(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  uint *unaff_x20;
  
  func_0x0001084038d8();
  FUN_108403464();
  uVar1 = *(uint *)(unaff_x19 + 4);
  uVar3 = (ulong)(uVar1 - 1 & (uint)param_2);
  uVar4 = (ulong)*unaff_x20;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  while (uVar1 != 0) {
    piVar2 = (int *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar3 * 0x20);
    if (*piVar2 == 0) break;
    if (((int)param_2 == *piVar2) && ((int)uVar4 == piVar2[2])) {
      piVar2 = piVar2 + 2;
      goto LAB_1084016b8;
    }
    func_0x000108403ccc();
    uVar3 = extraout_x9;
    uVar4 = extraout_x10;
    uVar1 = extraout_w11;
  }
  piVar2 = (int *)0x0;
LAB_1084016b8:
  func_0x000108403c70(piVar2);
  return;
}



/* Entry: 1084016cc; end: 1084017db;  */

long * FUN_1084016cc(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  int extraout_w9;
  int iVar7;
  long alStack_a0 [3];
  undefined1 auStack_88 [64];
  undefined1 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar5 = alStack_a0;
  plVar3 = param_1;
  plVar4 = param_2;
  func_0x000108403c8c();
  puStack_48 = auStack_88;
  uStack_40 = 0x2000000000;
  uStack_38 = extraout_x8;
  func_0x000108403dbc();
  if (((ulong)plVar3 & 1) != 0) {
    uVar6 = 0;
    plVar4 = param_1;
    FUN_10840038c();
    if ((uVar6 & 1) == 0) {
      (**(code **)(*param_2 + 0x38))(alStack_a0,param_2,0x11);
      plVar4 = param_1 + 0x16;
      FUN_1083fd2ec(plVar4,alStack_a0,param_2[2],(int)param_2[1],0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_a0);
      FUN_108400650(param_1,&puStack_48,plVar4);
      FUN_1084017dc();
    }
    else {
      FUN_1084017dc();
    }
  }
  func_0x000108403ab0();
  func_0x0001084039b0(uStack_38);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108403ab0();
  func_0x0001084037d4();
  plVar3 = plVar5;
  func_0x0001083fcb94();
  iVar7 = (int)((ulong)plVar4 >> 0x20);
  if (((plVar3 == (long *)0x0) || ((int)*plVar3 != 0x20f)) ||
     (func_0x0001083fcbb4(), extraout_w9 != (int)plVar4)) {
    if (0 < iVar7) {
      plVar3 = plVar5;
      func_0x0001083fcb48(plVar5,0x20f,(ulong)plVar4 | 0xffffffff00000000,(ulong)plVar4 >> 0x20);
    }
  }
  else {
    *(int *)((long)plVar3 + 0xc) = extraout_w8 + iVar7;
  }
  plVar4 = plVar3;
  if (2 < (int)plVar5[1]) {
    func_0x0001083fcb88();
    plVar2 = plVar3;
    func_0x0001083fcc30();
    FUN_1083f8f50();
    plVar4 = plVar2;
    func_0x0001083fcdfc();
    if (((((plVar3 != (long *)0x0) && (plVar2 != (long *)0x0)) &&
         ((plVar4 != (long *)0x0 && (((int)*plVar3 == 0x211 && ((int)*plVar2 == 0x21c)))))) &&
        (*(int *)((long)plVar2 + 0xc) == *(int *)((long)plVar3 + 0xc))) &&
       ((((int)*plVar4 - 0x215U < 2 && (*(int *)((long)plVar4 + 4) == *(int *)((long)plVar3 + 4)))
        && (*(int *)((long)plVar4 + 0xc) == *(int *)((long)plVar3 + 0xc))))) {
      iVar7 = (int)plVar5[1];
      if ((iVar7 == 1) || (iVar7 == 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083f9ac4);
        (*pcVar1)();
      }
      *(int *)(plVar5 + 1) = iVar7 + -2;
    }
  }
  return plVar4;
}



/* Entry: 1084017dc; end: 1084017ef;  */

void FUN_1084017dc(int *param_1,ulong param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int extraout_w8;
  int extraout_w9;
  int iVar5;
  
  piVar2 = param_1;
  func_0x0001083fcb94();
  iVar5 = (int)(param_2 >> 0x20);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 0x20f)) ||
     (func_0x0001083fcbb4(), extraout_w9 != (int)param_2)) {
    if (0 < iVar5) {
      piVar2 = param_1;
      func_0x0001083fcb48(param_1,0x20f,param_2 | 0xffffffff00000000,param_2 >> 0x20);
    }
  }
  else {
    piVar2[3] = extraout_w8 + iVar5;
  }
  if (2 < param_1[2]) {
    func_0x0001083fcb88();
    piVar3 = piVar2;
    func_0x0001083fcc30();
    FUN_1083f8f50();
    piVar4 = piVar3;
    func_0x0001083fcdfc();
    if (((((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) &&
         ((piVar4 != (int *)0x0 && ((*piVar2 == 0x211 && (*piVar3 == 0x21c)))))) &&
        (piVar3[3] == piVar2[3])) &&
       (((*piVar4 - 0x215U < 2 && (piVar4[1] == piVar2[1])) && (piVar4[3] == piVar2[3])))) {
      iVar5 = param_1[2];
      if ((iVar5 == 1) || (iVar5 == 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1083f9ac4);
        (*pcVar1)();
      }
      param_1[2] = iVar5 + -2;
    }
  }
  return;
}



/* Entry: 1084017f0; end: 108401a53;  */

bool FUN_1084017f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  iVar1 = (int)param_2;
  if (iVar1 == 0x51) {
    func_0x00010840392c(param_1,param_2,*(undefined8 *)(param_5 + 0x10));
    iVar1 = (int)param_1;
    FUN_108401ae0();
    if (iVar1 == 0) {
      return false;
    }
    func_0x000108403790();
    FUN_108401ae0();
    if (iVar1 == 0) {
      return false;
    }
    func_0x0001084035c4();
    if (iVar1 == 0) {
      return false;
    }
    func_0x00010840359c();
    func_0x0001084037dc();
  }
  else {
    if (iVar1 == 0x1c) {
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      func_0x000108403618();
      uVar5 = uVar3;
      func_0x0001084036c8();
      if ((int)uVar5 == 0) {
        return false;
      }
      iVar1 = (int)param_1 + 0x30;
      FUN_1083fa660(0);
      func_0x0001084035d4();
      if (iVar1 == 0) {
        return false;
      }
      func_0x0001084035c4();
      if (iVar1 == 0) {
        return false;
      }
      func_0x000108403cfc();
      func_0x0001083f91a8();
      func_0x000108403918(param_1 + 0x30,0x1d7);
      func_0x000108403910(param_1 + 0x30,0x80000000);
      func_0x000108403918(param_1 + 0x30,0xfb);
      func_0x0001084038a8();
      FUN_1083f9008(param_1 + 0x30,0x106,uVar3);
      return true;
    }
    if (iVar1 != 0x38) {
      if (iVar1 == 0x47) {
        iVar1 = (int)*(undefined8 *)(param_3 + 0x10);
        func_0x000108403618();
        func_0x0001084036c8();
        if (iVar1 == 0) {
          return false;
        }
        func_0x000108403990(4);
        func_0x0001084017e4();
        func_0x0001084035d4();
        if (iVar1 != 0) {
          func_0x000108403990();
          func_0x0001084017e4();
          func_0x0001084035c4();
          if (iVar1 != 0) {
            func_0x0001083f9210(param_1 + 0x30);
            func_0x000108403990();
            func_0x0001083f9178();
            return true;
          }
          return false;
        }
        return false;
      }
      if (iVar1 != 0xe) {
        return false;
      }
      func_0x0001084036c8();
      iVar1 = (int)param_1;
      if (iVar1 == 0) {
        return false;
      }
      func_0x000108403790();
      FUN_108401ae0();
      if (iVar1 == 0) {
        return false;
      }
      func_0x000108403908();
      if (iVar1 == 0) {
        return false;
      }
      func_0x000108403784();
      FUN_108401ae0();
      if (iVar1 == 0) {
        return false;
      }
      plVar4 = *(long **)(param_3 + 0x10);
      plVar2 = plVar4;
      FUN_10840082c(plVar4,&UNK_10df26708);
      if ((int)plVar2 != 0x22d) {
        (**(code **)(*plVar4 + 0x80))(plVar4);
        func_0x000108403b50();
      }
      return (int)plVar2 != 0x22d;
    }
    iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
    func_0x000108403634();
    func_0x00010840365c();
    if (iVar1 == 0) {
      func_0x000108403784();
      FUN_108401ae0();
      if (iVar1 == 0) {
        return false;
      }
      func_0x0001084036c8();
      if (iVar1 == 0) {
        return false;
      }
      func_0x0001084035d4();
      if (iVar1 == 0) {
        return false;
      }
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      FUN_10840082c(uVar5,&UNK_10df26728);
      if ((int)uVar5 == 0x22d) {
        return false;
      }
      func_0x000108403a44();
      func_0x0001084037dc();
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_5 + 0x10);
      func_0x000108403634();
      func_0x00010840365c();
      if (iVar1 != 3) {
        return false;
      }
      func_0x0001084035c4();
      if (iVar1 == 0) {
        return false;
      }
      func_0x0001084036c8();
      if (iVar1 == 0) {
        return false;
      }
      func_0x0001084035d4();
      if (iVar1 == 0) {
        return false;
      }
      func_0x000108403618(*(undefined8 *)(param_3 + 0x10));
      func_0x0001084037dc();
    }
  }
  func_0x0001083f9180();
  return true;
}



/* Entry: 108401a54; end: 108401adf;  */

/* WARNING: Removing unreachable block (ram,0x0001083f90b4) */
/* WARNING: Removing unreachable block (ram,0x0001083f9130) */
/* WARNING: Removing unreachable block (ram,0x0001083f916c) */
/* WARNING: Removing unreachable block (ram,0x0001083f9060) */
/* WARNING: Removing unreachable block (ram,0x0001083f9068) */
/* WARNING: Removing unreachable block (ram,0x0001083f908c) */
/* WARNING: Removing unreachable block (ram,0x0001083f9094) */
/* WARNING: Removing unreachable block (ram,0x0001083f909c) */
/* WARNING: Removing unreachable block (ram,0x0001083f90e0) */
/* WARNING: Removing unreachable block (ram,0x0001083f9004) */
/* WARNING: Removing unreachable block (ram,0x0001083f905c) */
/* WARNING: Removing unreachable block (ram,0x0001083f9124) */

void FUN_108401a54(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (int)param_2 == 1;
  if ((bool)uVar1) {
    FUN_1083f9ba0(param_1 + 0x30,0x7fffffff,param_2);
    param_1 = param_1 + 0x30;
    func_0x0001083fcb94();
    if (((param_1 == 0) || (func_0x0001083fce24(), !(bool)uVar1)) || (*(int *)(param_1 + 0xc) < 1))
    {
      func_0x0001083fcc3c();
    }
    else {
      func_0x0001083fcdac();
      func_0x0001083fcc3c();
    }
    func_0x0001083fce3c();
  }
  else {
    func_0x000108403810();
    func_0x0001084039e4();
    func_0x0001083f91a8();
  }
  FUN_1083f8ee0();
  return;
}



/* Entry: 108401ae0; end: 108401b3f;  */

ulong FUN_108401ae0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010840371c();
  if ((int)param_1 != 0) {
    uVar1 = param_1;
    func_0x000108403bd4();
    uVar2 = uVar1;
    func_0x0001084035e4();
    if (uVar2 < uVar1) {
      func_0x000108403bd4();
      func_0x0001084035e4();
      func_0x0001084038a8();
    }
  }
  return param_1;
}



/* Entry: 108401b40; end: 108401d77;  */

long FUN_108401b40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010840371c(param_1,param_3);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x000108403618(uVar2);
    func_0x0001083f8fd0(param_1 + 0x30,param_2,uVar2);
  }
  return lVar1;
}



/* Entry: 108401d78; end: 108401e47;  */

void FUN_108401d78(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int extraout_w8;
  int extraout_w9;
  int iVar4;
  long lStack_48;
  
  lStack_48 = *(long *)(param_2 + 0x18);
  if ((*(byte *)(lStack_48 + 0x30) >> 3 & 1) != 0) {
    piVar3 = (int *)(param_1 + 0x90);
    func_0x000108403d08();
    func_0x000108403ea4();
    iVar4 = (int)((ulong)param_2 >> 0x20);
    func_0x0001083fcb94();
    if (((piVar3 == (int *)0x0) || (*piVar3 != 0x213)) ||
       (func_0x0001083fcbb4(), extraout_w9 != (int)param_2)) {
      if (0 < iVar4) {
        func_0x0001083fce3c();
        FUN_1083f8ee0();
        return;
      }
    }
    else {
      piVar3[3] = extraout_w8 + iVar4;
    }
    return;
  }
  lVar1 = param_1 + 0x140;
  FUN_1083d66f4(lVar1,&lStack_48);
  if ((int)lVar1 == 0) {
    func_0x000108403d08(param_1 + 0x70);
    func_0x000108403ea4();
    FUN_1083ffef4();
  }
  else {
    if ((param_3 & 0xffffffff00000000) == 0x100000000) {
      uVar2 = *(ulong *)(param_2 + 0x18);
      FUN_1083f446c();
      FUN_108401594();
      if (uVar2 >> 0x20 != 0) {
        func_0x000108403b20();
        func_0x000108403910();
        return;
      }
    }
    lVar1 = param_1 + 0xb0;
    func_0x000108403d08(lVar1);
    FUN_1084017dc(param_1 + 0x30,
                  (ulong)(uint)((int)lVar1 + (int)param_3) | param_3 & 0xffffffff00000000);
  }
  return;
}



/* Entry: 108401e48; end: 1084021df;  */

undefined8 FUN_108401e48(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  long lVar16;
  
  func_0x0001084038d8();
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1083f4cec(*(long *)(param_1 + 0x50),*(undefined8 *)*unaff_x19);
    func_0x000108403e38();
    if ((bool)in_ZR) {
      FUN_10840229c(unaff_x19 + 0x1a);
      FUN_1083fce88(unaff_x19 + 0x1a);
      *(undefined1 *)(unaff_x19 + 0x1c) = 1;
      FUN_1083fcf3c(unaff_x19 + 0x1a);
      func_0x0001084035f4(unaff_x19 + 6,0x228,0xffffffffffffffff);
      FUN_1083f9178(unaff_x19 + 6,2);
      func_0x000108403d3c((float)*(int *)(unaff_x19[10] + 0xc));
      func_0x000108403d3c((float)*(int *)(unaff_x19[10] + 0x10));
      FUN_1083f9008(unaff_x19 + 6,0x1e9,2);
      func_0x000108403918(unaff_x19 + 6,0xfb);
      func_0x000108403a14(unaff_x19[0x1a]);
      if (!(bool)in_ZR) {
        func_0x000108403c80();
      }
      func_0x000108403944();
      uVar13 = 0;
      while( true ) {
        puVar11 = *(undefined8 **)*unaff_x19;
        uVar12 = (ulong)*(char *)((long)puVar11 + 0x17);
        if ((long)uVar12 < 0) {
          uVar12 = puVar11[1];
        }
        if (uVar12 <= uVar13) break;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          puVar11 = (undefined8 *)*puVar11;
        }
        if (*(char *)((long)puVar11 + uVar13) == '\n') {
          func_0x000108403944();
        }
        uVar13 = uVar13 + 1;
      }
      func_0x000108403944();
    }
  }
  plVar4 = *(long **)(unaff_x20 + 0x10);
  FUN_10831cd40();
  plVar5 = *(long **)(unaff_x20 + 0x10);
  func_0x00010831cd64();
  plVar6 = *(long **)(unaff_x20 + 0x10);
  func_0x00010831cd88();
  puVar15 = *(ulong **)(*(long *)(unaff_x20 + 0x10) + 0x38);
  plVar7 = plVar6;
  for (lVar16 = (long)*(int *)(*(long *)(unaff_x20 + 0x10) + 0x40) << 3; lVar16 != 0;
      lVar16 = lVar16 + -8) {
    plVar9 = (long *)*puVar15;
    if (plVar9 == plVar4) {
      uVar14 = 0xa1;
    }
    else if (plVar9 == plVar5) {
      uVar14 = 0x2f;
    }
    else {
      if (plVar9 != plVar6) goto LAB_108402170;
      uVar14 = 0x32;
    }
    func_0x000108403ab8();
    plVar9 = unaff_x19 + 6;
    func_0x0001084035f4(plVar9,uVar14,(ulong)plVar7 | 0xffffffff00000000);
    puVar15 = puVar15 + 1;
    plVar7 = plVar9;
  }
  plVar7 = unaff_x19 + 6;
  plVar10 = (long *)0xe1;
  func_0x0001084035f4(plVar7,0xe1,0xffffffffffffffff);
  lVar16 = *unaff_x19;
  plVar4 = *(long **)(lVar16 + 0x38);
  plVar6 = *(long **)(lVar16 + 0x40);
  plVar9 = *(long **)(lVar16 + 0x58);
  for (plVar5 = *(long **)(lVar16 + 0x50); plVar4 != plVar6 || plVar5 != plVar9;
      plVar5 = (long *)((long)plVar5 + lVar16)) {
    plVar8 = plVar4;
    if (plVar5 != plVar9) {
      plVar8 = plVar5;
    }
    uVar1 = *(uint *)(*plVar8 + 0xc);
    bVar2 = 2 < uVar1;
    uVar3 = uVar1 == 3;
    if ((bool)uVar3) {
      plVar10 = *(long **)(*(long *)(*plVar8 + 0x10) + 0x10);
      plVar7 = plVar10;
      func_0x000108403c50(plVar10[4]);
      if (bVar2 && !(bool)uVar3) {
        (**(code **)(*plVar7 + 0x18))();
        if ((int)plVar7[4] < 0) {
          if ((*(byte *)(plVar10 + 6) >> 3 & 1) == 0) {
            func_0x00010840392c();
            FUN_10840006c();
            if (((ulong)plVar7 & 1) == 0) goto LAB_108402170;
          }
          else {
            plVar8 = unaff_x19 + 0x12;
            FUN_1083fd544();
            plVar7 = plVar8;
            if ((unaff_x19[10] != 0) && (func_0x000108403e38(), plVar7 = plVar8, (bool)uVar3)) {
              func_0x000108403ab8();
              plVar7 = unaff_x19 + 6;
              FUN_1083f9ae4();
              func_0x000108403c44();
              func_0x0001083fe76c();
              plVar10 = plVar8;
            }
          }
        }
        else {
          if ((int)plVar7[4] != 0xf) goto LAB_108402170;
          func_0x000108403ab8();
          plVar8 = unaff_x19 + 6;
          plVar10 = (long *)0x0;
          func_0x0001084035f4(plVar8,0xe2,(ulong)plVar7 | 0xffffffff00000000);
          plVar7 = plVar8;
        }
      }
      else {
        lVar16 = unaff_x19[0xc];
        plVar10 = (long *)0x0;
        plVar7 = unaff_x19 + 0xc;
        func_0x0001083fe700();
        *(int *)plVar7 = (int)lVar16;
      }
    }
    lVar16 = 8;
    if (plVar5 != plVar9) {
      lVar16 = 0;
    }
    plVar4 = (long *)((long)plVar4 + lVar16);
    lVar16 = 0;
    if (plVar5 != plVar9) {
      lVar16 = 8;
    }
  }
  func_0x000108403784();
  FUN_1083fdaa4();
  if (((ulong)plVar10 & 1) == 0) {
LAB_108402170:
    uVar14 = 0;
  }
  else {
    plVar4 = plVar7;
    func_0x000108403938();
    if ((int)plVar4 == 0) {
      func_0x0001083fa01c(unaff_x19 + 6);
    }
    else {
      func_0x0001084035f4(unaff_x19 + 6,0x2e,(ulong)plVar7 | 0xffffffff00000000);
    }
    uVar3 = (char)unaff_x19[0x1c] == '\x01';
    if ((bool)uVar3) {
      FUN_1083fcf3c(unaff_x19 + 0x1a);
      uVar14 = 1;
      func_0x0001084036e4();
      func_0x000108403a14(unaff_x19[0x1a]);
      if (!(bool)uVar3) {
        func_0x000108403c80();
      }
    }
    else {
      uVar14 = 1;
    }
  }
  return uVar14;
}



/* Entry: 1084021e0; end: 1084021f7;  */

void FUN_1084021e0(long param_1)

{
  undefined8 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0x80);
  uStack_18 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1c = *(undefined4 *)(param_1 + 0xc0);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  FUN_1083fa6d0(param_1 + 0x30,&uStack_14,&uStack_18,&uStack_1c,param_1 + 0x40,&uStack_28);
  return;
}



/* Entry: 1084021f8; end: 10840226b;  */

void FUN_1084021f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_198 [360];
  
  FUN_1084025f8(auStack_198,param_2);
  puVar1 = auStack_198;
  FUN_108401e48(puVar1,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1084021e0(param_1,auStack_198);
  }
  FUN_10840284c(auStack_198);
  return;
}



/* Entry: 10840226c; end: 10840229b;  */

void FUN_10840226c(void)

{
  long unaff_x20;
  
  func_0x00010840389c();
  FUN_10840229c();
  FUN_1083fce88();
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 10840229c; end: 1084022bf;  */

void FUN_10840229c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1083fcee8();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1084022c0; end: 108402417;  */

int FUN_1084022c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x11;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_50;
  func_0x0001084038d8();
  uStack_50 = param_2;
  FUN_108402418();
  func_0x000108403b14(*(undefined4 *)(unaff_x19 + 0x124));
  uVar6 = 0x18;
  uVar8 = extraout_x9;
  if ((extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU)) != 0) {
    do {
      piVar7 = (int *)(*(long *)(unaff_x19 + 0x128) + (long)(int)uVar8 * (long)(int)uVar6);
      if (*piVar7 == 0) break;
      if (((int)puVar3 == *piVar7) && (unaff_x20 == *(ulong *)(piVar7 + 2))) {
        piVar7 = piVar7 + 4;
        goto LAB_1084023f4;
      }
      func_0x000108403eb8();
      uVar8 = extraout_x9_00;
      uVar6 = extraout_x11;
    } while (extraout_w10 != 1);
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0xe8);
  FUN_1083d62e8();
  uStack_40 = unaff_x20 & 0xffffffff;
  uVar1 = *(uint *)(unaff_x19 + 0x124);
  uStack_48 = uVar8;
  if ((int)(uVar1 * 3) <= *(int *)(unaff_x19 + 0x120) * 4) {
    uVar2 = uVar1 << 1;
    if ((int)uVar1 < 1) {
      uVar2 = 4;
    }
    *(undefined4 *)(unaff_x19 + 0x120) = 0;
    *(uint *)(unaff_x19 + 0x124) = uVar2;
    lVar9 = *(long *)(unaff_x19 + 0x128);
    *(undefined8 *)(unaff_x19 + 0x128) = 0;
    puVar3 = (undefined8 *)((ulong)uVar2 * 0x18 + 0x10);
    lStack_38 = lVar9;
    __Znam();
    *puVar3 = 0x18;
    puVar3[1] = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar4 = (ulong)uVar2 * 0x18;
      puVar5 = puVar3 + 2;
      do {
        *(undefined4 *)puVar5 = 0;
        lVar4 = lVar4 + -0x18;
        puVar5 = puVar5 + 3;
      } while (lVar4 != 0);
    }
    *(undefined8 **)(unaff_x19 + 0x128) = puVar3 + 2;
    lVar9 = lVar9 + 8;
    for (uVar10 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
        uVar10 = uVar10 - 1) {
      if (*(int *)(lVar9 + -8) != 0) {
        FUN_108402434(unaff_x19 + 0x120,lVar9);
      }
      lVar9 = lVar9 + 0x18;
    }
    FUN_1084024d4(&lStack_38);
  }
  lVar9 = unaff_x19 + 0x120;
  FUN_108402434(lVar9,&uStack_48);
  piVar7 = (int *)(lVar9 + 8);
LAB_1084023f4:
  return *piVar7;
}



/* Entry: 108402418; end: 108402433;  */

uint FUN_108402418(uint param_1)

{
  func_0x000108403df8();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108402434; end: 10840249b;  */

undefined8 FUN_108402434(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int iVar2;
  int extraout_w11_00;
  undefined4 *extraout_x13;
  int extraout_w14;
  
  func_0x00010840389c();
  FUN_108402418();
  func_0x0001084037b8();
  iVar2 = extraout_w11;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    func_0x000108403cac();
    if (extraout_w14 == 0) break;
    bVar1 = (int)param_2 == extraout_w14;
    if ((bVar1) && (func_0x000108403cf0(), bVar1)) {
      *extraout_x13 = 0;
      func_0x0001084037a8(extraout_x13 + 2);
      return extraout_x8_00;
    }
    func_0x00010840369c();
    iVar2 = extraout_w11_00;
  }
  func_0x000108403724();
  return extraout_x8;
}



/* Entry: 10840249c; end: 1084024d3;  */

void FUN_10840249c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + -8) != 0) {
      lVar1 = *(long *)(param_2 + -8) * 0x18;
      do {
        if (*(int *)(param_2 + -0x18 + lVar1) != 0) {
          *(undefined4 *)(param_2 + -0x18 + lVar1) = 0;
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 1084024d4; end: 1084024f3;  */

void FUN_1084024d4(void)

{
  func_0x000108403ef8();
  FUN_1084024f4();
  return;
}



/* Entry: 1084024f4; end: 10840251b;  */

void FUN_1084024f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10840251c; end: 10840254f;  */

void FUN_10840251c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1083fcee8();
  }
  return;
}



/* Entry: 108402550; end: 108402557;  */

void FUN_108402550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001084039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108402558; end: 108402583;  */

undefined8 FUN_108402558(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108403db0(uVar1);
  return CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x18) + (int)uVar1);
}



/* Entry: 108402584; end: 1084025a3;  */

void FUN_108402584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108403c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}



/* Entry: 1084025a4; end: 1084025f7;  */

undefined8 * FUN_1084025a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 1084025f8; end: 1084026b7;  */

void FUN_1084025f8(long *param_1,long param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = **(long **)(param_2 + 0x10);
  lVar2 = (*(long **)(param_2 + 0x10))[2];
  *param_1 = param_2;
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 1;
  param_1[10] = param_3;
  *(undefined1 *)(param_1 + 0xb) = param_4;
  lVar3 = 0;
  if (param_3 != 0) {
    lVar3 = param_3 + 0x30;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 + 0x18;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = lVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = lVar1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x100000000;
  param_1[0x2b] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0x100000000;
  lVar3 = *(long *)(param_2 + 0x10);
  param_1[2] = *(long *)(param_2 + 8);
  param_1[3] = lVar2;
  param_1[4] = *(long *)(lVar3 + 0x18);
  return;
}



/* Entry: 1084026b8; end: 1084026d7;  */

void FUN_1084026b8(void)

{
  func_0x000108403ef8();
  FUN_1084026d8();
  return;
}



/* Entry: 1084026d8; end: 1084026eb;  */

void FUN_1084026d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x20;
      lVar2 = lVar1 + lVar2 * 0x20;
      do {
        lVar2 = lVar2 + -0x20;
        FUN_108402744(lVar2);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1084026ec; end: 108402743;  */

void FUN_1084026ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x20;
      lVar1 = param_2 + lVar1 * 0x20;
      do {
        lVar1 = lVar1 + -0x20;
        FUN_108402744(lVar1);
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108402744; end: 108402793;  */

void FUN_108402744(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10831bb8c(param_1 + 6);
    *param_1 = 0;
  }
  return;
}



/* Entry: 108402794; end: 1084027df;  */

void FUN_108402794(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1084027e0; end: 1084027ff;  */

void FUN_1084027e0(void)

{
  func_0x000108403ef8();
  FUN_108402800();
  return;
}



/* Entry: 108402800; end: 10840284b;  */

void FUN_108402800(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10840284c; end: 1084028eb;  */

long FUN_10840284c(long param_1)

{
  FUN_10840229c(param_1 + 0xd0);
  FUN_1081f8340(param_1 + 0x158);
  FUN_1083d6c10(param_1 + 0x148);
  FUN_1084026b8(param_1 + 0x138);
  FUN_1084024d4(param_1 + 0x128);
  FUN_1081f8340(param_1 + 0x110);
  FUN_10840251c(param_1 + 0xd0);
  func_0x000108402774(param_1 + 0xb8);
  func_0x000108402774(param_1 + 0x98);
  func_0x000108402774(param_1 + 0x78);
  FUN_1084027e0(param_1 + 0x68);
  func_0x0001083fc848(param_1 + 0x30);
  return param_1;
}



/* Entry: 1084028ec; end: 1084029af;  */

void FUN_1084028ec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010840389c();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 6) {
    uVar8 = puVar5[1];
    uVar7 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = puVar5[4];
    uVar7 = puVar5[3];
    puVar3[5] = puVar5[5];
    puVar3[4] = uVar8;
    puVar3[3] = uVar7;
    puVar3 = puVar3 + 6;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  unaff_x19[1] = puVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1084029b0; end: 1084029bb;  */

long * FUN_1084029b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108403d10();
  func_0x0001084038d8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x30;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x30;
  return unaff_x19;
}



/* Entry: 1084029bc; end: 108402a27;  */

long * FUN_1084029bc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001084038d8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x30;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x30;
  return unaff_x19;
}



/* Entry: 108402a28; end: 108402a6f;  */

long * FUN_108402a28(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108402a70; end: 108402a8b;  */

uint FUN_108402a70(uint param_1)

{
  func_0x000108403df8();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108402a8c; end: 108402b3f;  */

void FUN_108402a8c(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int extraout_w8;
  undefined8 *extraout_x9;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long lVar5;
  ulong uVar6;
  long lStack_48;
  
  func_0x000108403e64();
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar6 = (ulong)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  lStack_48 = lVar5;
  func_0x000108403af4(SUB168(auVar1 * ZEXT816(0x18),8));
  puVar2 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x18;
  puVar2[1] = uVar6;
  if (unaff_w20 != 0) {
    lVar3 = uVar6 * 0x18;
    puVar4 = puVar2 + 2;
    do {
      *(undefined4 *)puVar4 = 0;
      lVar3 = lVar3 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar3 != 0);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2 + 2;
  lVar5 = lVar5 + 8;
  for (uVar6 = (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    if (*(int *)(lVar5 + -8) != 0) {
      func_0x000108403784();
      FUN_108402b40();
    }
    lVar5 = lVar5 + 0x18;
  }
  func_0x000108402774(&lStack_48);
  return;
}



/* Entry: 108402b40; end: 108402ba7;  */

undefined8 FUN_108402b40(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int iVar2;
  int extraout_w11_00;
  undefined4 *extraout_x13;
  int extraout_w14;
  
  func_0x00010840389c();
  FUN_108402a70();
  func_0x0001084037b8();
  iVar2 = extraout_w11;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    func_0x000108403cac();
    if (extraout_w14 == 0) break;
    bVar1 = (int)param_2 == extraout_w14;
    if ((bVar1) && (func_0x000108403cf0(), bVar1)) {
      *extraout_x13 = 0;
      func_0x0001084037a8(extraout_x13 + 2);
      return extraout_x8_00;
    }
    func_0x00010840369c();
    iVar2 = extraout_w11_00;
  }
  func_0x000108403724();
  return extraout_x8;
}



/* Entry: 108402ba8; end: 108402bab;  */

undefined8 * FUN_108402ba8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402bac; end: 108402bbf;  */

void FUN_108402bac(void)

{
  FUN_1084025a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108402bc0; end: 108402bd7;  */

undefined8 FUN_108402bc0(void)

{
  return 0;
}



/* Entry: 108402bd8; end: 108402c33;  */

undefined8 FUN_108402bd8(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108403e50();
  if (in_x3 == 0) {
    FUN_1084017dc(unaff_x21 + 0x30);
  }
  else {
    FUN_108402bc0();
    func_0x00010840399c();
    FUN_1083f9ac4();
  }
  if (unaff_x19 != 0) {
    func_0x000108403750();
  }
  return 1;
}



/* Entry: 108402c34; end: 108402c3b;  */

undefined8 FUN_108402c34(void)

{
  return 0;
}



/* Entry: 108402c3c; end: 108402c4f;  */

void FUN_108402c3c(void)

{
  FUN_1084025a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108402c50; end: 108402c8b;  */

bool FUN_108402c50(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 0x10) + 0x30) & 8) == 0;
}



/* Entry: 108402c8c; end: 108402d27;  */

undefined8 FUN_108402c8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108403e50();
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x30) >> 3 & 1) == 0) {
    if (param_4 == 0) {
      FUN_1083ffef4(unaff_x21 + 0x30);
    }
    else {
      func_0x000108402c64();
      func_0x00010840399c();
      FUN_1083f9ac4();
    }
  }
  else if (param_4 == 0) {
    FUN_1083f9ae4(unaff_x21 + 0x30);
  }
  else {
    func_0x000108402c64();
    func_0x00010840399c();
    FUN_1083f9b5c();
  }
  if (unaff_x19 != 0) {
    func_0x000108403750();
  }
  return 1;
}



/* Entry: 108402d28; end: 108402e23;  */

undefined8
FUN_108402d28(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_6 == 0) {
    if (param_4 == 0) {
      func_0x000108403e0c();
      FUN_1083f9fc8();
    }
    else {
      func_0x000108403950();
      func_0x000108403e0c();
      FUN_1083fa190();
    }
  }
  else if (param_4 == 0) {
    func_0x000108403e0c();
    func_0x0001083fa318();
  }
  else {
    func_0x000108403950();
    func_0x000108403e0c();
    FUN_1083fa38c();
  }
  if ((*(long *)(param_2 + 0x50) != 0) && (*(char *)(param_2 + 0x58) == '\x01')) {
    uVar1 = *(undefined4 *)(param_2 + 0xd8);
    if (param_4 == 0) {
      FUN_1083fe67c(param_2 + 0x30,uVar1,param_3);
    }
    else {
      uVar2 = *(undefined4 *)(param_4 + 8);
      func_0x000108403950();
      func_0x0001083f9b78(param_2 + 0x30,uVar1,param_3,uVar2,param_1);
    }
  }
  return 1;
}



/* Entry: 108402e24; end: 108402e27;  */

undefined8 * FUN_108402e24(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    func_0x00010840381c();
  }
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402e28; end: 108402e3b;  */

void FUN_108402e28(void)

{
  FUN_108402e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108402e3c; end: 108402e8b;  */

undefined8 * FUN_108402e3c(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    func_0x00010840381c();
  }
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402e8c; end: 108402e8f;  */

undefined8 * FUN_108402e8c(undefined8 *param_1)

{
  func_0x0001084028c8(param_1 + 2);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402e90; end: 108402ea3;  */

void FUN_108402e90(void)

{
  FUN_108402f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108402ea4; end: 108402f0b;  */

void FUN_108402ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001084039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108402f0c; end: 108402f2f;  */

undefined8 * FUN_108402f0c(undefined8 *param_1)

{
  func_0x0001084028c8(param_1 + 2);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402f30; end: 108402f33;  */

undefined8 * FUN_108402f30(undefined8 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(char *)(param_1 + 6) == '\x01';
  if ((bool)uVar1) {
    FUN_1083fcf3c(param_1 + 4);
    FUN_1083f9178(param_1[2] + 0x30,1);
    func_0x000108403a14(param_1[4]);
    if (!(bool)uVar1) {
      func_0x000108403c80();
    }
  }
  FUN_10840251c(param_1 + 4);
  func_0x0001084028c8(param_1 + 3);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108402f34; end: 108402f47;  */

void FUN_108402f34(void)

{
  FUN_108402fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108402f48; end: 108402f4f;  */

void FUN_108402f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001084039cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108402f50; end: 108402f87;  */

ulong FUN_108402f50(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x000108403db0(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  func_0x000108403618(lVar2);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}



/* Entry: 108402f88; end: 108402f9f;  */

long FUN_108402f88(long param_1)

{
  return param_1 + 0x20;
}



/* Entry: 108402fa0; end: 108403007;  */

undefined8 * FUN_108402fa0(undefined8 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(char *)(param_1 + 6) == '\x01';
  if ((bool)uVar1) {
    FUN_1083fcf3c(param_1 + 4);
    FUN_1083f9178(param_1[2] + 0x30,1);
    func_0x000108403a14(param_1[4]);
    if (!(bool)uVar1) {
      func_0x000108403c80();
    }
  }
  FUN_10840251c(param_1 + 4);
  func_0x0001084028c8(param_1 + 3);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108403008; end: 10840302f;  */

void FUN_108403008(long param_1)

{
  func_0x000108403cbc();
  if (param_1 != 0) {
    FUN_108402fa0();
    __ZdlPv();
  }
  return;
}


