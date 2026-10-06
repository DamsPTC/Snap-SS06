/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082a6df4; end: 1082a6e0b;  */

void FUN_1082a6df4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108292480(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a6e0c; end: 1082a6e2f;  */

void FUN_1082a6e0c(long param_1)

{
  long lVar1;
  
  FUN_1082a0a78();
  lVar1 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108292480(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a6e30; end: 1082a6e3b;  */

void FUN_1082a6e30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108292480(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a6e3c; end: 1082a6eff;  */

long FUN_1082a6e3c(long param_1)

{
  FUN_1082a7208(param_1 + 0x10);
  FUN_1082a71b4(param_1 + 8);
  return param_1;
}



/* Entry: 1082a6f00; end: 1082a6f4b;  */

void FUN_1082a6f00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20;
  __Znwm();
  FUN_108186568();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082a6f4c; end: 1082a6f8b;  */

void FUN_1082a6f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  __Znwm();
  FUN_1083164f8();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082a6f8c; end: 1082a6f93;  */

void FUN_1082a6f8c(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108293238(*(long *)(param_1 + 0x40) + 0x70,&uStack_18);
  return;
}



/* Entry: 1082a6f94; end: 1082a6fdb;  */

void FUN_1082a6f94(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_18;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0xb8);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = 0;
  *param_1 = lVar4;
  FUN_10826b6c8(&uStack_18);
  return;
}



/* Entry: 1082a6fdc; end: 1082a7027;  */

undefined1 FUN_1082a6fdc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x10) + 0xd8);
}



/* Entry: 1082a7028; end: 1082a705b;  */

undefined8 * FUN_1082a7028(undefined8 *param_1)

{
  FUN_108282f8c();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082a705c; end: 1082a708f;  */

undefined8 * FUN_1082a705c(undefined8 *param_1)

{
  func_0x000108282fe4();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082a7090; end: 1082a70af;  */

void FUN_1082a7090(void)

{
  func_0x0001082a7264();
  FUN_1082a70b0();
  return;
}



/* Entry: 1082a70b0; end: 1082a70c7;  */

void FUN_1082a70b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1082a70e4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a70c8; end: 1082a70e3;  */

void FUN_1082a70c8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1082a70e4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a70e4; end: 1082a7163;  */

undefined8 * FUN_1082a70e4(undefined8 *param_1)

{
  FUN_10815dbb8(param_1 + 8);
  FUN_1082a7028(param_1 + 6);
  FUN_1082829e0(param_1 + 5);
  FUN_108282c4c(param_1 + 3);
  func_0x000108282fe4();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082a7164; end: 1082a717b;  */

void FUN_1082a7164(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1082a49b4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a717c; end: 1082a71b3;  */

void FUN_1082a717c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1082a49b4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a71b4; end: 1082a71d3;  */

void FUN_1082a71b4(void)

{
  func_0x0001082a7264();
  FUN_1082a71d4();
  return;
}



/* Entry: 1082a71d4; end: 1082a71eb;  */

void FUN_1082a71d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10840f740(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a71ec; end: 1082a7207;  */

void FUN_1082a71ec(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10840f740(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a7208; end: 1082a7227;  */

void FUN_1082a7208(void)

{
  func_0x0001082a7264();
  FUN_1082a7228();
  return;
}



/* Entry: 1082a7228; end: 1082a723f;  */

void FUN_1082a7228(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108316384(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082a7240; end: 1082a725b;  */

void FUN_1082a7240(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108316384(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a725c; end: 1082a728b;  */

void FUN_1082a725c(void)

{
  return;
}



/* Entry: 1082a728c; end: 1082a72f7;  */

void FUN_1082a728c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  uStack_28 = *param_3;
  *param_3 = 0;
  uStack_30 = *param_4;
  *param_4 = 0;
  FUN_10827b28c(uVar1,param_2,&uStack_28,&uStack_30);
  FUN_10810a400(&uStack_30);
  FUN_1082764bc(&uStack_28);
  return;
}



/* Entry: 1082a72f8; end: 1082a756b;  */

void FUN_1082a72f8(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  long *plVar5;
  int *piVar6;
  int *piStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  int *piStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  long lStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  
  plVar3 = param_1;
  func_0x0001082a7f2c();
  if ((int)plVar3 == 0) {
    plVar5 = (long *)*param_2;
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x28))();
    if (plVar3 == (long *)0x0) {
      lVar4 = 0x38;
      __Znwm();
      lStack_60 = *param_2;
      *param_2 = 0;
      uStack_58 = (undefined4)param_2[1];
      uStack_54 = *(undefined2 *)((long)param_2 + 0xc);
      FUN_1082ba080();
      func_0x0001082a7ef0();
      *unaff_x19 = lVar4;
    }
    else {
      if (*(int *)(param_3 + 2) == 0) {
        plVar3 = (long *)0x3210;
      }
      else {
        plVar3 = *(long **)(*(long *)(*param_1 + 0x10) + 0xb8);
        (**(code **)(*plVar3 + 0x70))(plVar3,plVar5 + 4);
      }
      uStack_7c = SUB82(plVar3,0);
      uStack_88 = 0;
      if (*param_2 != 0) {
        do {
          func_0x0001082a7f64();
          uStack_7c = SUB82(plVar3,0);
          uStack_88 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_80 = (undefined4)param_2[1];
      uStack_90 = 0;
      func_0x0001082a7f8c();
      if (*(int *)((long)param_3 + 0x14) - 1U < 2) {
        piVar6 = (int *)*param_3;
        if (piVar6 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = *piVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar4 = 0x68;
        piStack_a0 = piVar6;
        __Znwm();
        uStack_70 = uStack_88;
        lStack_60 = *param_2;
        *param_2 = 0;
        uStack_58 = (undefined4)param_2[1];
        uStack_54 = *(undefined2 *)((long)param_2 + 0xc);
        uStack_88 = 0;
        uStack_68 = uStack_80;
        uStack_64 = uStack_7c;
        piStack_a0 = (int *)0x0;
        piStack_78 = piVar6;
        FUN_1082c018c();
        FUN_10810a400(&piStack_78);
        func_0x0001082a7f7c();
        func_0x0001082a7ef0();
        uStack_98 = 0;
        *unaff_x19 = lVar4;
        FUN_10827f5e4(&uStack_98);
        FUN_10810a400(&piStack_a0);
      }
      else {
        FUN_1082a756c(&lStack_60,*param_1,param_2,&uStack_88,param_3);
        *unaff_x19 = lStack_60;
      }
      FUN_1082764bc(&uStack_88);
    }
  }
  else {
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1082a756c; end: 1082a763b;  */

void FUN_1082a756c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  uVar1 = 0x50;
  __Znwm();
  uStack_50 = *param_3;
  *param_3 = 0;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  uStack_44 = *(undefined2 *)((long)param_3 + 0xc);
  uStack_60 = *param_4;
  *param_4 = 0;
  uStack_58 = *(undefined4 *)(param_4 + 1);
  uStack_54 = *(undefined2 *)((long)param_4 + 0xc);
  FUN_1082c40ac();
  *param_1 = uVar1;
  FUN_1082764bc(&uStack_60);
  FUN_1082764bc(&uStack_50);
  return;
}



/* Entry: 1082a763c; end: 1082a77bb;  */

void FUN_1082a763c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long lVar3;
  long lStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  long *plStack_68;
  
  plVar2 = param_1;
  func_0x0001082a7f2c();
  if ((int)plVar2 != 0) {
    *unaff_x19 = 0;
    return;
  }
  FUN_1082a5548(&plStack_68,*(undefined8 *)(*param_1 + 0x48),param_3,*(undefined8 *)(param_2 + 0x18)
                ,param_8,param_9,(undefined1)param_10,param_6,param_10._2_1_,param_10._1_1_);
  if (plStack_68 == (long *)0x0) {
    *unaff_x19 = 0;
    goto LAB_1082a7770;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
LAB_1082a76e8:
    uStack_6c = 0x3210;
  }
  else {
    func_0x00010828398c();
    iVar1 = (int)param_3;
    if (iVar1 != 0) goto LAB_1082a76e8;
    func_0x0001082a7f08();
    uStack_6c = (undefined2)iVar1;
    func_0x00010828a9ac();
  }
  plVar2 = plStack_68;
  plStack_68 = (long *)0x0;
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
  }
  uStack_80 = 0;
  uStack_70 = param_7;
  FUN_1082764bc(&uStack_80);
  uStack_78 = 0;
  uStack_88 = uStack_70;
  uStack_84 = uStack_6c;
  lStack_90 = lVar3;
  FUN_1082a72f8(param_1,&lStack_90,param_2);
  func_0x0001082a7f8c();
  func_0x0001082a7f54();
LAB_1082a7770:
  func_0x00010827aaa0(&plStack_68);
  return;
}



/* Entry: 1082a77bc; end: 1082a7a6b;  */

void FUN_1082a77bc(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,ulong param_5
                  ,long *param_6,undefined8 *param_7,undefined8 *param_8,undefined1 param_9,
                  uint param_10,byte param_11)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  long lVar8;
  long *plVar9;
  int **ppiVar10;
  int **ppiVar11;
  int *piVar12;
  undefined8 *puVar13;
  int **ppiVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  int *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar19;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined2 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  int *piStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1b8;
  int *piStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  long *plStack_178;
  int **ppiStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  uint uStack_110;
  undefined2 uStack_10c;
  undefined8 uStack_108;
  int *piStack_100;
  uint uStack_f8;
  undefined2 uStack_f4;
  int *piStack_f0;
  int *piStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_88;
  undefined8 uStack_70;
  
  uVar19 = (ulong)param_11;
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(int *)((long)param_3 + 0x14) - 1;
  uVar7 = uVar3 == 1;
  puStack_130 = param_1;
  if (uVar3 < 2) {
    lVar8 = *param_2;
    puVar13 = (undefined8 *)(ulong)*(uint *)(param_3 + 2);
    piStack_e8 = (int *)*param_3;
    if (piStack_e8 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_e8,0x10);
        if (bVar2) {
          *piStack_e8 = *piStack_e8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_e0 = 0;
    puVar16 = (undefined8 *)param_3[3];
    uStack_d8 = 0x3f000000;
    uStack_148 = (long *)CONCAT44(CONCAT31(uStack_148._5_3_,param_11),param_10);
    ppiVar14 = &piStack_e8;
    puVar17 = &uStack_e0;
    uStack_14c = SUB81(param_8,0);
    uStack_150 = SUB84(param_7,0);
    plVar15 = param_6;
    plVar18 = param_4;
    uVar19 = param_5;
    uStack_14b = param_9;
    FUN_1082bfec4(&piStack_100,lVar8);
    piVar12 = piStack_100;
    piStack_100 = (int *)0x0;
    *puStack_130 = piVar12;
    FUN_10827f5e4(&piStack_100);
    ppiVar10 = &piStack_e8;
    FUN_10810a400();
  }
  else {
    func_0x0001082a7f08();
    FUN_10828a818(&uStack_e0);
    plVar9 = *(long **)(*param_2 + 0x48);
    ppiVar14 = (int **)param_3[3];
    uStack_138 = 0x100000000;
    uStack_150 = CONCAT31(uStack_150._1_3_,param_9);
    puVar13 = &uStack_e0;
    plVar15 = (long *)0x1;
    puVar16 = param_7;
    puVar17 = param_8;
    plVar18 = param_6;
    uStack_148 = param_4;
    uStack_140 = param_5;
    FUN_1082a5548(&piStack_f0);
    if (piStack_f0 == (int *)0x0) {
      *puStack_130 = 0;
    }
    else {
      func_0x0001082a7f08();
      func_0x00010828a9ac();
      param_6 = plVar9;
      func_0x0001082a7f08();
      (**(code **)(*param_6 + 0x70))();
      piStack_100 = (int *)0x0;
      if (piStack_f0 != (int *)0x0) {
        func_0x0001082a7f94();
        do {
          func_0x0001082a7f64();
        } while (extraout_w11 != 0);
        func_0x0001082a7ef8();
        piStack_100 = extraout_x8;
      }
      uStack_108 = 0;
      uStack_f8 = param_10;
      uStack_f4 = SUB82(plVar9,0);
      func_0x0001082a7f84();
      piVar12 = piStack_f0;
      piStack_f0 = (int *)0x0;
      lStack_118 = 0;
      if (piVar12 != (int *)0x0) {
        func_0x0001082a7ef8();
        lStack_118 = extraout_x8_00;
      }
      param_8 = puStack_130;
      uStack_120 = 0;
      uStack_110 = param_10;
      uStack_10c = SUB82(param_6,0);
      FUN_1082764bc(&uStack_120);
      *param_8 = 0;
      puVar13 = (undefined8 *)*param_2;
      ppiVar14 = &piStack_100;
      plVar15 = &lStack_118;
      FUN_1082a756c(&uStack_128);
      *param_8 = uStack_128;
      FUN_1082c42e0();
      func_0x0001082a7f54();
      func_0x0001082a7ef0();
      puVar16 = param_3;
    }
    ppiVar10 = &piStack_f0;
    func_0x00010827aaa0();
    uVar7 = cStack_88 == '\x01';
    if ((bool)uVar7) {
      func_0x0001082a7f18();
    }
  }
  func_0x0001082a7fa8(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082a7eb8(puStack_130);
  func_0x0001082a7f54();
  func_0x0001082a7ef0();
  ppiVar11 = &piStack_f0;
  func_0x00010827aaa0();
  if (cStack_88 == '\x01') {
    func_0x0001082a7f18();
  }
  func_0x0001082a7f5c();
  uVar5 = uStack_140;
  plVar9 = uStack_148;
  pcStack_158 = FUN_1082a7a6c;
  uVar6 = (undefined4)uStack_138;
  plStack_1a8 = plVar15;
  plStack_1a0 = param_4;
  uStack_198 = param_5;
  puStack_190 = param_7;
  puStack_188 = param_8;
  plStack_180 = param_6;
  plStack_178 = param_2;
  ppiStack_170 = ppiVar10;
  uStack_168 = (ulong)param_10;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((int)puVar13 - 1U < 2) {
    piVar12 = *ppiVar11;
    piStack_1b0 = *ppiVar14;
    *ppiVar14 = (int *)0x0;
    uStack_1d8 = 0;
    uStack_1d0 = 0x3f000000;
    FUN_1082bfce0(&uStack_1f0,piVar12,&piStack_1b0,puVar16);
    uVar4 = uStack_1f0;
    uStack_1f0 = 0;
    *extraout_x8_01 = uVar4;
    FUN_10827f5e4(&uStack_1f0);
    FUN_10810a400(&piStack_1b0);
  }
  else {
    FUN_1082a5548(&lStack_1b8,*(undefined8 *)(*ppiVar11 + 0x12),puVar17,plVar15,1,plVar18,uVar19,
                  puVar16,uStack_138._4_1_,(undefined1)uStack_150,puStack_130,uStack_128,0x100000000
                 );
    if (lStack_1b8 == 0) {
      *extraout_x8_01 = 0;
    }
    else {
      piStack_1e0 = *ppiVar14;
      *ppiVar14 = (int *)0x0;
      FUN_1082a0b14(&uStack_1d8,0,puVar13,&piStack_1e0,&plStack_1a8);
      FUN_10810a400(&piStack_1e0);
      uStack_1f0 = 0;
      if (lStack_1b8 != 0) {
        func_0x0001082a7f94();
        do {
          func_0x0001082a7f64();
        } while (extraout_w11_00 != 0);
        func_0x0001082a7ef8();
        uStack_1f0 = extraout_x8_02;
      }
      uStack_1f8 = 0;
      uStack_1e8 = uVar6;
      uStack_1e4 = SUB82(plVar9,0);
      FUN_1082764bc(&uStack_1f8);
      lVar8 = lStack_1b8;
      lStack_1b8 = 0;
      uStack_208 = 0;
      if (lVar8 != 0) {
        func_0x0001082a7ef8();
        uStack_208 = extraout_x8_03;
      }
      uStack_210 = 0;
      uStack_200 = uVar6;
      uStack_1fc = (undefined2)uVar5;
      func_0x0001082a7f7c();
      *extraout_x8_01 = 0;
      FUN_1082a756c(&uStack_218,*ppiVar11,&uStack_1f0,&uStack_208,&uStack_1d8);
      *extraout_x8_01 = uStack_218;
      FUN_1082c42e0();
      func_0x0001082a7f84();
      FUN_1082764bc(&uStack_1f0);
      func_0x00010828afb8(&uStack_1d8);
    }
    func_0x00010827aaa0(&lStack_1b8);
  }
  return;
}



/* Entry: 1082a7a6c; end: 1082a7cb3;  */

void FUN_1082a7a6c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined2 param_12,
                  undefined4 param_13,undefined2 param_14,undefined4 param_15,undefined4 param_16,
                  undefined1 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_5;
  if ((int)param_3 - 1U < 2) {
    lVar2 = *param_2;
    uStack_60 = *param_4;
    *param_4 = 0;
    uStack_88 = 0;
    uStack_80 = 0x3f000000;
    FUN_1082bfce0(&uStack_a0,lVar2,&uStack_60,param_6,param_5,param_7,param_8,param_9,param_10,
                  param_12,param_14,param_16,param_17,&uStack_88,param_18,param_19);
    uVar1 = uStack_a0;
    uStack_a0 = 0;
    *param_1 = uVar1;
    FUN_10827f5e4(&uStack_a0);
    FUN_10810a400(&uStack_60);
  }
  else {
    FUN_1082a5548(&lStack_68,*(undefined8 *)(*param_2 + 0x48),param_7,param_5,1,param_8,param_9,
                  param_6,param_17,param_10,param_18,param_19,0x100000000);
    if (lStack_68 == 0) {
      *param_1 = 0;
    }
    else {
      uStack_90 = *param_4;
      *param_4 = 0;
      FUN_1082a0b14(&uStack_88,0,param_3,&uStack_90,&uStack_58);
      FUN_10810a400(&uStack_90);
      uStack_a0 = 0;
      if (lStack_68 != 0) {
        func_0x0001082a7f94();
        do {
          func_0x0001082a7f64();
        } while (extraout_w11 != 0);
        func_0x0001082a7ef8();
        uStack_a0 = extraout_x8;
      }
      uStack_a8 = 0;
      uStack_98 = param_16;
      uStack_94 = param_12;
      FUN_1082764bc(&uStack_a8);
      lVar2 = lStack_68;
      lStack_68 = 0;
      uStack_b8 = 0;
      if (lVar2 != 0) {
        func_0x0001082a7ef8();
        uStack_b8 = extraout_x8_00;
      }
      uStack_c0 = 0;
      uStack_b0 = param_16;
      uStack_ac = param_14;
      func_0x0001082a7f7c();
      *param_1 = 0;
      FUN_1082a756c(&uStack_c8,*param_2,&uStack_a0,&uStack_b8,&uStack_88);
      *param_1 = uStack_c8;
      FUN_1082c42e0();
      func_0x0001082a7f84();
      FUN_1082764bc(&uStack_a0);
      func_0x00010828afb8(&uStack_88);
    }
    func_0x00010827aaa0(&lStack_68);
  }
  return;
}



/* Entry: 1082a7cb4; end: 1082a7eb7;  */

int ** FUN_1082a7cb4(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                    undefined1 param_9)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  int **ppiVar8;
  long *plVar9;
  int *apiStack_128 [4];
  undefined8 auStack_108 [4];
  int *piStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_80;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(int *)((long)param_3 + 0x14) - 1;
  uVar6 = uVar4 == 1;
  if (uVar4 < 2) {
    lVar7 = *param_2;
    uVar1 = *(undefined4 *)(param_3 + 2);
    piStack_e8 = (int *)*param_3;
    if (piStack_e8 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piStack_e8,0x10);
        if (bVar3) {
          *piStack_e8 = *piStack_e8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_e0 = 0;
    uStack_d8 = 0x3f000000;
    FUN_1082c0054(auStack_108,lVar7,uVar1,&piStack_e8,param_4,param_3[3],&uStack_e0,param_5,param_6,
                  (char)param_7,param_8,param_9);
    uVar5 = auStack_108[0];
    auStack_108[0] = 0;
    *param_1 = uVar5;
    FUN_10827f5e4(auStack_108);
    ppiVar8 = &piStack_e8;
    FUN_10810a400();
  }
  else {
    ppiVar8 = *(int ***)(*(long *)(*param_2 + 0x10) + 0xb8);
    FUN_10828aae8(&uStack_e0,ppiVar8,*(undefined4 *)(param_3 + 2),param_5);
    if ((int)uStack_e0 == 0) {
      *param_1 = 0;
    }
    else {
      func_0x0001082a0bd8(auStack_108,param_3);
      func_0x0001082a0bb4(param_3,auStack_108);
      func_0x00010828afb8(auStack_108);
      func_0x0001082a0b6c(apiStack_128,param_3);
      FUN_1082a77bc(param_1,param_2,apiStack_128,&UNK_10f483b6f,0x1e,param_4,param_5,param_6,param_7
                    ,param_8,param_9);
      ppiVar8 = apiStack_128;
      func_0x00010828afb8();
    }
    uVar6 = cStack_80 == '\x01';
    if ((bool)uVar6) {
      func_0x0001082a7f40();
    }
  }
  func_0x0001082a7fa8(uStack_68);
  if ((bool)uVar6) {
    return ppiVar8;
  }
  ___stack_chk_fail();
  ppiVar8 = apiStack_128;
  func_0x00010828afb8();
  if (cStack_80 == '\x01') {
    func_0x0001082a7f40();
  }
  func_0x0001082a7f74();
  plVar9 = (long *)*ppiVar8;
  *ppiVar8 = (int *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  return ppiVar8;
}



/* Entry: 1082a7eb8; end: 1082a7eef;  */

long * FUN_1082a7eb8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1082a7ef0; end: 1082a7fbb;  */

void FUN_1082a7ef0(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  puVar3 = &stack0x00000050;
  func_0x000108276964();
  if (puVar3 != (undefined1 *)0x0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return;
}



/* Entry: 1082a7fbc; end: 1082a803b;  */

long * FUN_1082a7fbc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = param_5;
  plVar1 = param_1 + 2;
  if (param_5 < 2) {
    plVar1 = param_1 + 1;
  }
  FUN_1082a803c(plVar1,in_stack_00000000);
  return param_1;
}



/* Entry: 1082a803c; end: 1082a80e7;  */

undefined8 FUN_1082a803c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001082a81c4(param_1,uVar1);
  return param_1;
}



/* Entry: 1082a80e8; end: 1082a80f7;  */

void FUN_1082a80e8(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x30));
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a80f8; end: 1082a812f;  */

void FUN_1082a80f8(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a8130; end: 1082a813f;  */

void FUN_1082a8130(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x38));
  func_0x0001082a81d4(param_1 + 1);
  func_0x0001082a81d4(param_1 + 2);
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0);
  piVar5 = (int *)*puVar1;
  *puVar1 = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  do {
    iVar2 = *piVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar4) {
      *piVar5 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 != 0) {
    return;
  }
  if (piVar5 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a8140; end: 1082a81b3;  */

long * FUN_1082a8140(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = 0x10;
  if (param_3 == 0) {
    lVar1 = 8;
  }
  plVar2 = param_1;
  if (((*param_2 != 0) || (*(long *)((long)param_1 + lVar1) != 0)) &&
     ((**(code **)(*param_1 + 0x48))(), (int)plVar2 != 0)) {
    lVar3 = *param_2;
    *param_2 = 0;
    func_0x0001082a81c4((long *)((long)param_1 + lVar1),lVar3);
    return (long *)((long)param_1 + lVar1);
  }
  return plVar2;
}



/* Entry: 1082a81b4; end: 1082a81db;  */

void FUN_1082a81b4(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082a81dc; end: 1082a8267;  */

undefined8 * FUN_1082a81dc(undefined8 *param_1)

{
  undefined1 in_w4;
  undefined1 in_stack_00000008;
  
  FUN_1082b1954(param_1 + 6);
  *param_1 = &PTR_DAT_110a363d8;
  param_1[6] = &PTR_FUN_110a36478;
  *(undefined1 *)(param_1 + 1) = in_w4;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 10) = in_stack_00000008;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 1082a8268; end: 1082a82c3;  */

long * FUN_1082a8268(long *param_1)

{
  long *plVar1;
  undefined1 in_w4;
  
  plVar1 = param_1;
  FUN_1082a860c();
  plVar1 = *(long **)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x10);
  (**(code **)(*plVar1 + 0x68))();
  *(char *)(param_1 + 1) = (char)(int)plVar1[3];
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 10) = in_w4;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  return param_1;
}



/* Entry: 1082a82c4; end: 1082a830f;  */

/* WARNING: Removing unreachable block (ram,0x0001082b1ce4) */
/* WARNING: Removing unreachable block (ram,0x0001082b1cf0) */

bool FUN_1082a82c4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lStack_38;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if ((*(long *)(lVar1 + 0x10) == 0) && (*(long *)(lVar1 + 0xc0) != 0)) {
    return false;
  }
  if (*(long *)(lVar1 + 0x10) == 0) {
    FUN_1082b1b68(&lStack_38,lVar1,param_2,(long)(char)param_1[1],1,0);
    lVar2 = lStack_38;
    bVar3 = lStack_38 != 0;
    if (lStack_38 != 0) {
      lStack_38 = 0;
      func_0x0001082aa914((long *)(lVar1 + 0x10),lVar2);
      func_0x0001082b2730();
    }
    func_0x0001082b2718();
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 1082a8310; end: 1082a83bb;  */

long * FUN_1082a8310(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((*(char *)(param_2 + 0x1c) < '\0') || ((*(byte *)((long)param_1 + 10) & 1) != 0)) {
    plVar2 = (long *)0x0;
  }
  else {
    param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
      if ((param_1[0x18] != 0) && ((int)param_1[4] == 0)) {
        (**(code **)(*param_1 + 0x20))();
        return (long *)(ulong)(param_1 != (long *)0x0);
      }
    }
    else {
      (**(code **)(*plVar2 + 0x68))();
      lVar1 = 0x10;
      if ((int)plVar2[3] < 2) {
        lVar1 = 8;
      }
      if (*(long *)((long)plVar2 + lVar1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a8388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))();
        return plVar2;
      }
    }
    plVar2 = (long *)0x1;
  }
  return plVar2;
}



/* Entry: 1082a83bc; end: 1082a8413;  */

void FUN_1082a83bc(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_28;
  
  FUN_1082b1b68(&lStack_28,(long)param_2 + *(long *)(*param_2 + -0x18),param_3,
                (long)(char)param_2[1],1,0);
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    lStack_28 = 0;
  }
  *param_1 = lVar1;
  func_0x0001082a862c();
  return;
}



/* Entry: 1082a8414; end: 1082a84df;  */

void FUN_1082a8414(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_28;
  
  param_2 = (long *)((long)param_2 + *(long *)(*param_2 + -0x50));
  FUN_1082b1b68(&lStack_28,(long)param_2 + *(long *)(*param_2 + -0x18),param_3,
                (long)(char)param_2[1],1,0);
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    lStack_28 = 0;
  }
  *param_1 = lVar1;
  func_0x0001082a862c();
  return;
}



/* Entry: 1082a84e0; end: 1082a850f;  */

long FUN_1082a84e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082a85e4(param_1,&PTR_PTR_110a364d0);
  FUN_1082b1b18(lVar1 + 0x30);
  return param_1;
}



/* Entry: 1082a8510; end: 1082a8523;  */

void FUN_1082a8510(void)

{
  FUN_1082a84e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a8524; end: 1082a8573;  */

long FUN_1082a8524(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  FUN_1082a85e4(lVar1,&PTR_PTR_110a364d0);
  FUN_1082b1b18(lVar2 + 0x30);
  return lVar1;
}



/* Entry: 1082a8574; end: 1082a85e3;  */

undefined8 FUN_1082a8574(void)

{
  int iVar1;
  
  if ((bRam0000000113254d68 & 1) == 0) {
    iVar1 = 0x13254d68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10827a1fc(0x113254d30);
      ___cxa_guard_release(0x113254d68);
    }
  }
  return 0x113254d30;
}



/* Entry: 1082a85e4; end: 1082a860b;  */

long FUN_1082a85e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082a860c();
  FUN_108294260(lVar1 + 0x20);
  return param_1;
}



/* Entry: 1082a860c; end: 1082a8653;  */

void FUN_1082a860c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  return;
}



/* Entry: 1082a8654; end: 1082a86db;  */

undefined8 * FUN_1082a8654(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a36530;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_1 + 4;
  param_1[6] = 0x200000000;
  param_1[7] = 0;
  param_1[8] = 0x100000000;
  puVar1 = param_1;
  func_0x0001082a8634();
  *(int *)(param_1 + 9) = (int)puVar1;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[0xb] = param_1 + 10;
  param_1[0xc] = 0x200000000;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = 0x200000000;
  param_1[0x10] = 0;
  return param_1;
}



/* Entry: 1082a86dc; end: 1082a8753;  */

void FUN_1082a86dc(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*(uint *)(param_1 + 0x4c) >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 2;
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    for (lVar3 = (long)*(int *)(param_1 + 0x30) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      lVar1 = param_2;
      FUN_1082933ac(param_2,*puVar2);
      if (param_1 == lVar1) {
        FUN_1082932bc(param_2,*puVar2,0);
      }
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



/* Entry: 1082a8754; end: 1082a8773;  */

void FUN_1082a8754(long *param_1)

{
  if ((*(uint *)((long)param_1 + 0x4c) >> 2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x4c) = *(uint *)((long)param_1 + 0x4c) | 4;
                    /* WARNING: Could not recover jumptable at 0x0001082a876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))();
    return;
  }
  return;
}



/* Entry: 1082a8774; end: 1082a885b;  */

void FUN_1082a8774(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)((long)param_1 + 0x4c) & 1) == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,&uStack_40);
    if ((int)plVar2 != 0) {
      if ((int)param_1[6] < 1) {
LAB_1082a8858:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1082a885c);
        (*pcVar1)();
      }
      plVar2 = *(long **)param_1[5];
      if ((*(byte *)(plVar2 + 3) >> 2 & 1) != 0) {
        (**(code **)(*plVar2 + 0x28))();
        func_0x000108293440();
        if ((int)param_1[6] < 1) goto LAB_1082a8858;
        plVar2 = *(long **)param_1[5];
      }
      (**(code **)(*plVar2 + 0x18))();
      if ((plVar2 != (long *)0x0) && (plVar3 = plVar2, FUN_1082b33e8(), (int)plVar3 != 0)) {
        *(undefined4 *)((long)plVar2 + 0xc) = 1;
      }
    }
    if (param_1[0x10] != 0) {
      FUN_1082a885c(param_1);
      FUN_1082a8774(param_1[0x10],param_2);
      param_1[0x10] = 0;
    }
    *(uint *)((long)param_1 + 0x4c) = *(uint *)((long)param_1 + 0x4c) | 1;
  }
  return;
}



/* Entry: 1082a885c; end: 1082a889b;  */

void FUN_1082a885c(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x0001082a890c(param_1 + 0x58,&uStack_28);
  FUN_1082a894c(uStack_28,param_1);
  return;
}



/* Entry: 1082a889c; end: 1082a894b;  */

void FUN_1082a889c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  for (lVar1 = 0; lVar1 < (int)param_1[8]; lVar1 = lVar1 + 1) {
    uStack_38 = *(undefined8 *)(param_1[7] + lVar1 * 8);
    func_0x0001082b3320(&uStack_38,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001082a8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  return;
}



/* Entry: 1082a894c; end: 1082a896f;  */

void FUN_1082a894c(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001082a890c(param_1 + 0x70,&uStack_18);
  return;
}



/* Entry: 1082a8970; end: 1082a89c7;  */

void FUN_1082a8970(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x58);
  for (lVar4 = (long)*(int *)(param_2 + 0x60) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar3;
    uVar1 = param_1;
    FUN_1082a89c8(param_1,uVar2);
    if ((uVar1 & 1) == 0) {
      FUN_1082a885c(param_1,uVar2);
    }
    puVar3 = puVar3 + 1;
  }
  return;
}



/* Entry: 1082a89c8; end: 1082a89ff;  */

bool FUN_1082a89c8(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar3 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar5 = 0;
  do {
    uVar4 = uVar3;
    if (uVar3 == uVar5) break;
    lVar1 = uVar5 * 8;
    uVar4 = uVar5;
    uVar5 = uVar5 + 1;
  } while (*(long *)(*(long *)(param_1 + 0x58) + lVar1) != param_2);
  return (long)uVar4 < (long)(int)uVar2;
}



/* Entry: 1082a8a00; end: 1082a8bc3;  */

void FUN_1082a8a00(undefined8 *param_1,undefined8 *param_2,long *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  byte bVar8;
  long *plStack_70;
  long *plStack_68;
  
  puVar6 = param_2;
  FUN_1082933ac(param_2,param_3);
  if (puVar6 == param_1) {
    return;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar3 = param_1;
    FUN_1082a89c8(param_1,puVar6);
    if ((((ulong)puVar3 & 1) != 0) || ((undefined8 *)param_1[0x10] == puVar6)) {
      bVar8 = 0;
      puVar6 = (undefined8 *)0x0;
      goto LAB_1082a8a94;
    }
    if ((*(byte *)((long)puVar6 + 0x4c) >> 3 & 1) == 0) {
      FUN_1082a8774(puVar6,*param_2);
    }
  }
  bVar8 = 1;
LAB_1082a8a94:
  if ((*(byte *)(param_3 + 3) >> 2 & 1) == 0) {
    iVar7 = 0;
  }
  else {
    plVar4 = param_3;
    (**(code **)(*param_3 + 0x28))();
    iVar7 = (int)plVar4;
    func_0x000108293408();
  }
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x18))();
  plStack_68 = plVar4;
  if (((((param_4 == 0) || (plVar5 = plVar4, FUN_1082b33e8(), (int)plVar5 == 0)) ||
       ((char)plVar4[1] != '\x01')) || (*(int *)((long)plVar4 + 0xc) == 2)) && (iVar7 == 0)) {
    if (plVar4 != (long *)0x0) {
      bVar2 = (bool)(bVar8 ^ 1);
      if (plVar4[0xb] == 0) {
        bVar2 = true;
      }
      if (!bVar2) {
        FUN_1082a8bc4(param_1 + 7,&plStack_68);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1082a885c(param_1,puVar6);
    }
  }
  else {
    if (param_1[0x10] == 0) {
      FUN_108293614(param_5,param_6);
      param_1[0x10] = param_5;
    }
    plVar4 = param_3 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_70 = param_3;
    FUN_1082b4014();
    FUN_1082764bc(&plStack_70);
  }
  return;
}



/* Entry: 1082a8bc4; end: 1082a8c03;  */

void FUN_1082a8bc4(void)

{
  char in_NG;
  char in_OV;
  
  func_0x0001082a8fa8();
  if (in_NG == in_OV) {
    func_0x0001082a9018();
    FUN_1082a8e8c();
    func_0x0001082a8f60();
    FUN_1082a8eb0();
  }
  else {
    func_0x0001082a8fe4();
  }
  func_0x0001082a8ffc();
  return;
}



/* Entry: 1082a8c04; end: 1082a8c57;  */

void FUN_1082a8c04(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_18;
  
  plVar1 = *(long **)(param_1 + 0x58);
  lVar2 = (long)*(int *)(param_1 + 0x60) << 3;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -8;
  }
  *plVar1 = param_3;
  lStack_18 = param_1;
  FUN_1082a8c58(param_3 + 0x70,&lStack_18);
  return;
}



/* Entry: 1082a8c58; end: 1082a8c97;  */

void FUN_1082a8c58(void)

{
  char in_NG;
  char in_OV;
  
  func_0x0001082a8fa8();
  if (in_NG == in_OV) {
    func_0x0001082a9018();
    func_0x0001082a8e34();
    func_0x0001082a8f60();
    FUN_1082a8e58();
  }
  else {
    func_0x0001082a8fe4();
  }
  func_0x0001082a8ffc();
  return;
}



/* Entry: 1082a8c98; end: 1082a8ceb;  */

void FUN_1082a8c98(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_18;
  
  plVar1 = *(long **)(param_1 + 0x70);
  lVar2 = (long)*(int *)(param_1 + 0x78) << 3;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -8;
  }
  *plVar1 = param_3;
  lStack_18 = param_1;
  FUN_1082a8c58(param_3 + 0x58,&lStack_18);
  return;
}



/* Entry: 1082a8cec; end: 1082a8d23;  */

bool FUN_1082a8cec(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x28);
  lVar1 = (long)*(int *)(param_1 + 0x30) << 3;
  while (lVar3 = lVar1, lVar3 != 0) {
    lVar4 = *plVar2;
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (plVar2 = plVar2 + 1, lVar1 = lVar3 + -8, *(long *)(*(long *)(lVar4 + 0x10) + 0x80) == 0))
    break;
  }
  return lVar3 == 0;
}



/* Entry: 1082a8d24; end: 1082a8d6f;  */

void FUN_1082a8d24(long param_1,undefined8 param_2,long *param_3)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_1082932bc(param_2,*param_3,param_1);
  *(int *)(*param_3 + 0xcc) = *(int *)(*param_3 + 0xcc) + 1;
  param_1 = param_1 + 0x28;
  func_0x0001082a8fa8(param_1,param_3);
  if (in_NG == in_OV) {
    func_0x0001082a9018();
    func_0x0001082a8f08();
    lVar1 = unaff_x19[1];
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(param_1 + (long)(int)lVar1 * 8) = uVar2;
    FUN_1082a8f2c(unaff_x19,param_1,param_3);
  }
  else {
    lVar1 = *unaff_x19;
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(lVar1 + (long)extraout_w8 * 8) = uVar2;
  }
  func_0x0001082a8ffc();
  return;
}



/* Entry: 1082a8d70; end: 1082a8de3;  */

void FUN_1082a8d70(long param_1)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082a8fa8();
  if (in_NG == in_OV) {
    func_0x0001082a9018();
    func_0x0001082a8f08();
    lVar1 = unaff_x19[1];
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(param_1 + (long)(int)lVar1 * 8) = uVar2;
    FUN_1082a8f2c();
  }
  else {
    lVar1 = *unaff_x19;
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(lVar1 + (long)extraout_w8 * 8) = uVar2;
  }
  func_0x0001082a8ffc();
  return;
}



/* Entry: 1082a8de4; end: 1082a8deb;  */

void FUN_1082a8de4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082a8de8);
  (*pcVar1)();
}



/* Entry: 1082a8dec; end: 1082a8e57;  */

void FUN_1082a8dec(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082a900c(param_1,8,param_2,param_2);
  return;
}



/* Entry: 1082a8e58; end: 1082a8e8b;  */

void FUN_1082a8e58(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001082a9028();
  if (extraout_w8 != 0) {
    func_0x0001082a8fd4();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082a903c();
  }
  func_0x0001082a8f84();
  return;
}



/* Entry: 1082a8e8c; end: 1082a8eaf;  */

void FUN_1082a8e8c(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x0001082a900c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x0001082a9028();
  if (extraout_w8 != 0) {
    func_0x0001082a8fd4();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082a903c();
  }
  func_0x0001082a8f84();
  return;
}



/* Entry: 1082a8eb0; end: 1082a8ee3;  */

void FUN_1082a8eb0(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001082a9028();
  if (extraout_w8 != 0) {
    func_0x0001082a8fd4();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082a903c();
  }
  func_0x0001082a8f84();
  return;
}



/* Entry: 1082a8ee4; end: 1082a8f2b;  */

void FUN_1082a8ee4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082a900c(param_1,8,param_2,param_2);
  return;
}



/* Entry: 1082a8f2c; end: 1082a8f5f;  */

void FUN_1082a8f2c(void)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001082a9028();
  if (extraout_w8 != 0) {
    func_0x0001082a8fd4();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082a903c();
  }
  func_0x0001082a8f84();
  return;
}



/* Entry: 1082a8f60; end: 1082a9053;  */

void FUN_1082a8f60(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined8 *)(param_1 + (long)*(int *)(unaff_x19 + 8) * 8) = *unaff_x20;
  return;
}



/* Entry: 1082a9054; end: 1082a93b7;  */

uint FUN_1082a9054(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 < 3) {
    for (lVar11 = param_2 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      FUN_1082a96a4();
    }
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uStack_88 = 0;
    lStack_80 = 0;
    while (param_1 != param_1 + param_2) {
      lVar11 = *param_1;
      iVar20 = *(int *)(lVar11 + 0x30);
      if (iVar20 == 1) {
        lVar13 = **(long **)(lVar11 + 0x28);
        uVar7 = uStack_88._4_4_;
        puVar12 = (ulong *)(ulong)uStack_88._4_4_;
        lStack_78 = lVar13;
        FUN_1082a93e0(puVar12,lStack_80,&lStack_78);
        if (puVar12 == (ulong *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *puVar12;
        }
        lStack_70 = lVar13;
        lStack_68 = lVar11;
        if ((int)(uVar7 * 3) <= (int)uStack_88 * 4) {
          iVar20 = uVar7 << 1;
          if ((int)uVar7 < 1) {
            iVar20 = 4;
          }
          FUN_1082a94a0(&uStack_88,iVar20);
        }
        FUN_1082a9594(&uStack_88,&lStack_70);
        if ((uVar17 == 0) || (uVar17 == param_3[1])) goto LAB_1082a9314;
        uVar15 = *(ulong *)(uVar17 + 0x18);
        do {
          uVar19 = uVar17;
          uVar17 = *(ulong *)(uVar19 + 0x10);
          uVar2 = uVar15;
          if ((uVar17 == 0) || (*(int *)(uVar17 + 0x30) != 1)) break;
        } while (lVar13 == **(long **)(uVar17 + 0x28));
        for (; uVar17 = uVar19, uVar2 != 0; uVar2 = *(ulong *)(uVar2 + 0x18)) {
          for (; uVar17 != uVar15; uVar17 = *(ulong *)(uVar17 + 0x18)) {
            lVar11 = 0;
            while (lVar11 < *(int *)(uVar2 + 0x30)) {
              uVar5 = uVar17;
              func_0x00010828ca44(uVar17,*(undefined8 *)(*(long *)(uVar2 + 0x28) + lVar11 * 8));
              lVar11 = lVar11 + 1;
              if ((uVar5 & 1) != 0) goto LAB_1082a9314;
            }
            uVar5 = uVar2;
            FUN_1082a89c8(uVar2,uVar17);
            if ((uVar5 & 1) != 0) goto LAB_1082a9314;
          }
        }
        while (uVar15 != 0) {
          uVar17 = *(ulong *)(uVar15 + 0x10);
          uVar2 = *(ulong *)(uVar15 + 0x18);
          if (uVar17 == 0) {
            *param_3 = uVar2;
            if (uVar2 != 0) goto LAB_1082a9334;
LAB_1082a9344:
            param_3[1] = uVar17;
          }
          else {
            *(ulong *)(uVar17 + 0x18) = uVar2;
            if (uVar2 == 0) goto LAB_1082a9344;
LAB_1082a9334:
            *(ulong *)(uVar2 + 0x10) = uVar17;
          }
          *(undefined8 *)(uVar15 + 0x10) = 0;
          *(ulong *)(uVar15 + 0x18) = uVar19;
          lVar11 = *(long *)(uVar19 + 0x10);
          *(ulong *)(uVar19 + 0x10) = uVar15;
          *(long *)(uVar15 + 0x10) = lVar11;
          if (lVar11 == 0) {
            *param_3 = uVar15;
            uVar15 = uVar2;
          }
          else {
            *(ulong *)(lVar11 + 0x18) = uVar15;
            uVar15 = uVar2;
          }
        }
        uVar7 = 1;
      }
      else {
        for (iVar14 = 0; lVar13 = lStack_80, iVar14 < iVar20; iVar14 = iVar14 + 1) {
          lVar18 = **(long **)(lVar11 + 0x28);
          uVar7 = uStack_88._4_4_;
          uVar15 = (ulong)uStack_88._4_4_;
          uVar17 = uVar15;
          lStack_70 = lVar18;
          FUN_1082a93e0(uVar15,lStack_80,&lStack_70);
          if (uVar17 != 0) {
            uVar10 = (uint)&lStack_70;
            lStack_70 = lVar18;
            FUN_1082a947c();
            uVar6 = uVar10 & uVar7 - 1;
            for (uVar1 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU); uVar1 != 0; uVar1 = uVar1 - 1)
            {
              puVar8 = (uint *)(lVar13 + (long)(int)uVar6 * 0x18);
              uVar3 = *puVar8;
              if (uVar3 == 0) break;
              if ((uVar10 == uVar3) && (lVar18 == *(long *)(puVar8 + 2))) {
                uStack_88._0_4_ = (int)uStack_88 + -1;
                do {
                  uVar10 = (uint)uVar15;
                  uVar7 = uVar6;
                  do {
                    uVar1 = 0;
                    if ((int)uVar6 < 1) {
                      uVar1 = uVar10;
                    }
                    uVar6 = (uVar6 + uVar1) - 1;
                    puVar9 = (uint *)(lVar13 + (long)(int)uVar6 * 0x18);
                    uVar1 = *puVar9;
                    puVar8 = (uint *)(lVar13 + (long)(int)uVar7 * 0x18);
                    if (uVar1 == 0) {
                      if (*puVar8 != 0) {
                        *puVar8 = 0;
                      }
                      if (4 < (int)uVar10 && (int)uStack_88 * 4 <= (int)uVar10) {
                        FUN_1082a94a0(&uStack_88,uVar10 >> 1);
                      }
                      goto LAB_1082a922c;
                    }
                    uVar3 = uVar10 - 1 & uVar1;
                  } while (((int)uVar6 <= (int)uVar3 && (int)uVar3 < (int)uVar7) ||
                          ((((int)uVar7 < (int)uVar6 &&
                            ((int)uVar3 < (int)uVar7 || (int)uVar6 <= (int)uVar3)) ||
                           (bVar4 = uVar7 == uVar6, uVar7 = uVar6, bVar4))));
                  uVar21 = *(undefined8 *)(puVar9 + 2);
                  *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar9 + 4);
                  *(undefined8 *)(puVar8 + 2) = uVar21;
                  *puVar8 = uVar1;
                  uVar15 = (ulong)uStack_88._4_4_;
                } while( true );
              }
              uVar3 = 0;
              if ((int)uVar6 < 1) {
                uVar3 = uVar7;
              }
              uVar6 = (uVar6 + uVar3) - 1;
            }
LAB_1082a922c:
            iVar20 = *(int *)(lVar11 + 0x30);
          }
        }
LAB_1082a9314:
        uVar7 = 0;
      }
      uVar16 = uVar16 | uVar7;
      FUN_1082a96a4();
    }
    func_0x0001082a96b0();
  }
  return uVar16;
}



/* Entry: 1082a93b8; end: 1082a93df;  */

void FUN_1082a93b8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *(long *)(param_2 + 0x10) = lVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_2;
  }
  param_1[1] = param_2;
  if (*param_1 != 0) {
    return;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1082a93e0; end: 1082a947b;  */

uint * FUN_1082a93e0(uint param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  
  plVar5 = param_3;
  FUN_1082a947c();
  uVar1 = (uint)plVar5 & param_1 - 1;
  for (uVar2 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU); uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar6 = (uint *)(param_2 + (long)(int)uVar1 * 0x18);
    if (*puVar6 == 0) break;
    if (((uint)plVar5 == *puVar6) && (*param_3 == *(long *)(puVar6 + 2))) {
      puVar6 = puVar6 + 2;
      goto LAB_1082a9458;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = param_1;
    }
    uVar1 = (uVar1 + uVar3) - 1;
  }
  puVar6 = (uint *)0x0;
LAB_1082a9458:
  puVar4 = (uint *)0x0;
  if (puVar6 != (uint *)0x0) {
    puVar4 = puVar6 + 2;
  }
  return puVar4;
}



/* Entry: 1082a947c; end: 1082a949f;  */

uint FUN_1082a947c(undefined8 param_1)

{
  uint uVar1;
  
  FUN_108343308(param_1,8,0);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1082a94a0; end: 1082a9593;  */

void FUN_1082a94a0(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lStack_48;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  lVar8 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  uVar9 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  uVar5 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar5 + 0x10);
  if (0xffffffffffffffef < uVar5 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  lStack_48 = lVar8;
  __Znam();
  *puVar3 = 0x18;
  puVar3[1] = uVar9;
  if (iVar4 != 0) {
    lVar6 = uVar9 * 0x18;
    puVar7 = puVar3 + 2;
    do {
      *(undefined4 *)puVar7 = 0;
      lVar6 = lVar6 + -0x18;
      puVar7 = puVar7 + 3;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_1 + 2) = puVar3 + 2;
  lVar8 = lVar8 + 8;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    if (*(int *)(lVar8 + -8) != 0) {
      FUN_1082a9594(param_1,lVar8);
    }
    lVar8 = lVar8 + 0x18;
  }
  FUN_1082a9674(&lStack_48);
  return;
}



/* Entry: 1082a9594; end: 1082a9643;  */

void FUN_1082a9594(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  
  plVar6 = param_2;
  FUN_1082a947c();
  uVar4 = param_1[1];
  uVar5 = (uint)plVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x18);
    if (*puVar7 == 0) break;
    if ((uVar5 == *puVar7) && (*param_2 == *(long *)(puVar7 + 2))) {
      *puVar7 = 0;
      lVar8 = *param_2;
      *(long *)(puVar7 + 4) = param_2[1];
      *(long *)(puVar7 + 2) = lVar8;
      *puVar7 = uVar5;
      return;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  lVar8 = *param_2;
  *(long *)(puVar7 + 4) = param_2[1];
  *(long *)(puVar7 + 2) = lVar8;
  *puVar7 = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1082a9644; end: 1082a9673;  */

void FUN_1082a9644(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) * 0x18;
    do {
      if (*(int *)(param_1 + -0x18 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x18 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1082a9674; end: 1082a96a3;  */

long * FUN_1082a9674(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1082a9644();
  }
  return param_1;
}



/* Entry: 1082a96a4; end: 1082a96bb;  */

void FUN_1082a96a4(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x19[1];
  *(long *)(lVar1 + 0x10) = lVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = lVar1;
  }
  unaff_x19[1] = lVar1;
  if (*unaff_x19 != 0) {
    return;
  }
  *unaff_x19 = lVar1;
  return;
}



/* Entry: 1082a96bc; end: 1082a96fb;  */

long FUN_1082a96bc(long param_1)

{
  FUN_10840f740(param_1 + 0x1878);
  FUN_108293ed8(param_1 + 0x68);
  func_0x000108293f9c(param_1 + 0x28);
  FUN_108294008(param_1 + 8);
  return param_1;
}



/* Entry: 1082a96fc; end: 1082a982b;  */

void FUN_1082a96fc(long *param_1,ulong param_2,undefined4 param_3,uint param_4,int param_5,
                  ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulong uStack_48;
  
  uVar1 = param_2;
  uStack_50 = param_4;
  uStack_4c = param_3;
  uStack_48 = param_2;
  FUN_1082b1c64();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_2 + 0xa4));
      plVar2 = param_1 + 4;
      FUN_1082a982c(plVar2,&uStack_58);
      if (plVar2 == (long *)0x0) {
        plVar2 = param_1 + 0x30f;
        func_0x0001082a984c(plVar2,&uStack_48,&uStack_4c,&uStack_50);
        if (param_5 != 0) {
          *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
        }
        if ((param_6 & 1) == 0) {
          *(undefined1 *)(plVar2 + 5) = 0;
        }
        FUN_1082a9870(param_1 + 6,plVar2);
        FUN_1082a98c0(param_1 + 4,uStack_58 & 0xffffffff,plVar2);
      }
      else {
        lVar4 = *plVar2;
        if (param_5 != 0) {
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        }
        if ((param_6 & 1) == 0) {
          *(undefined1 *)(lVar4 + 0x28) = 0;
        }
        if (*(uint *)(lVar4 + 0xc) < param_4) {
          *(uint *)(lVar4 + 0xc) = param_4;
        }
      }
    }
    else if ((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 0xc0) != 0)) {
      puVar3 = &uStack_58;
      uStack_58 = param_2;
      FUN_1082b239c(puVar3,*(undefined8 *)(*param_1 + 0x80));
      if (((ulong)puVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x315) = 1;
      }
    }
  }
  return;
}



/* Entry: 1082a982c; end: 1082a986f;  */

long FUN_1082a982c(long param_1)

{
  long lVar1;
  
  func_0x0001082aa658();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 1082a9870; end: 1082a98bf;  */

void FUN_1082a9870(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    *param_1 = param_2;
    param_1[1] = param_2;
    return;
  }
  uVar1 = *(uint *)(param_2 + 8);
  if (*(uint *)(lVar2 + 8) < uVar1) {
    if (uVar1 < *(uint *)(param_1[1] + 8)) {
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 0x10);
      } while (*(uint *)(lVar2 + 8) < uVar1);
      *(long *)(param_2 + 0x10) = lVar2;
      *(long *)(lVar3 + 0x10) = param_2;
      return;
    }
    *(long *)(param_1[1] + 0x10) = param_2;
    param_1[1] = param_2;
    return;
  }
  *(long *)(param_2 + 0x10) = lVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1082a98c0; end: 1082a9913;  */

long FUN_1082a98c0(long param_1,undefined4 param_2)

{
  FUN_1082aa728(param_1,param_2);
  return param_1 + 8;
}



/* Entry: 1082a9914; end: 1082a994f;  */

void FUN_1082a9914(void)

{
  func_0x0001082aaee4();
  func_0x0001082aa914();
  return;
}



/* Entry: 1082a9950; end: 1082a99d7;  */

ulong FUN_1082a9950(undefined8 *param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  long *plVar1;
  
  if (param_5 == 0) {
    return 0;
  }
  func_0x0001082a98dc(param_2,param_3);
  if ((int)param_2 != 0) {
    if (*(short *)(param_1[1] + 4) != 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x38))();
      if (*(short *)(*plVar1 + 4) == 0) {
        return (ulong)(*(int *)(param_3 + 8) <= param_4);
      }
    }
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 1082a99d8; end: 1082a9b6b;  */

undefined8 FUN_1082a99d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  long lStack_48;
  long in_stack_ffffffffffffffc0;
  long lStack_38;
  
  func_0x0001082aae80();
  lStack_38 = 0;
  lVar5 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x30) == 0) {
    if (unaff_x20 == (long *)*unaff_x19) {
      (**(code **)(*unaff_x20 + 0x40))(&stack0xffffffffffffffc0);
      lVar5 = in_stack_ffffffffffffffc0;
      FUN_1082aa648(lStack_38);
      lStack_38 = lVar5;
    }
    else {
      lStack_38 = ((long *)*unaff_x19)[2];
      if (lStack_38 != 0) {
        piVar1 = (int *)(lStack_38 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    FUN_10826b5e8(&stack0xffffffffffffffc0);
    if (unaff_x19[6] == 0) {
      lVar5 = lStack_38;
      if (lStack_38 == 0) {
        uVar4 = 0;
        goto LAB_1082a9b10;
      }
    }
    else {
      lVar5 = unaff_x19[6];
      if (lStack_38 != 0) {
        lVar5 = lStack_38;
      }
    }
  }
  if ((*(char *)((long)unaff_x20 + 0x9c) == '\x01') && (*(char *)(lVar5 + 0x90) != '\0')) {
    FUN_1082a0950(lVar5);
  }
  (**(code **)(*unaff_x20 + 0x38))();
  if ((*(short *)(*unaff_x20 + 4) != 0) && (*(short *)(*(long *)(lVar5 + 0x48) + 4) == 0)) {
    func_0x0001082aedbc(param_3,unaff_x20,lVar5);
  }
  lVar5 = lStack_38;
  lStack_48 = unaff_x19[6];
  if (lStack_48 == 0) {
    lStack_38 = 0;
    lStack_48 = lVar5;
  }
  else {
    piVar1 = (int *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1082a9b6c(&stack0xffffffffffffffc0,&lStack_48);
  func_0x0001082aaf4c();
  uVar4 = 1;
LAB_1082a9b10:
  FUN_10826b5e8(&lStack_38);
  return uVar4;
}



/* Entry: 1082a9b6c; end: 1082a9baf;  */

void FUN_1082a9b6c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001082aa914(lVar2 + 0x10,uVar1);
  func_0x0001082aaf4c();
  return;
}



/* Entry: 1082a9bb0; end: 1082a9c23;  */

void FUN_1082a9bb0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      param_1[1] = 0;
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1082a9c24; end: 1082a9ff7;  */

long FUN_1082a9c24(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint **ppuVar9;
  int iVar10;
  ulong uVar11;
  ulong extraout_x8;
  long lVar12;
  long unaff_x19;
  int iVar13;
  uint unaff_w22;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  long *plStack_a0;
  uint *apuStack_98 [7];
  long lStack_60;
  long lStack_58;
  
  func_0x0001082aae80();
  uStack_a8 = *(undefined8 *)(*param_1 + 0x80);
  plStack_a0 = param_2;
  (**(code **)(*param_2 + 0x38))();
  if (*(short *)(*param_2 + 4) != 0) {
    func_0x0001082aaed4();
    uVar14 = *(uint *)(unaff_x19 + 100);
    uVar11 = (ulong)uVar14;
    for (iVar13 = 0; iVar13 < (int)uVar11; iVar13 = iVar13 + 1) {
      puVar15 = (uint *)(*(long *)(unaff_x19 + 0x68) + (long)(int)(uVar14 - 1 & unaff_w22) * 0x48);
      if (*puVar15 == 0) break;
      if ((unaff_w22 == *puVar15) &&
         (plVar7 = param_2, FUN_1082a5e3c(param_2,puVar15 + 2), ((ulong)plVar7 & 1) != 0)) {
        return *(long *)(puVar15 + 0x10);
      }
      func_0x0001082aaf7c();
      uVar11 = extraout_x8;
    }
    FUN_10827a214(apuStack_98);
    lVar8 = unaff_x19 + 0x1878;
    func_0x0001082aae8c();
    func_0x0001082aaf44();
    FUN_1082aa5ac(auStack_e0,param_2);
    FUN_1082aa5ac(apuStack_98,auStack_e0);
    uVar14 = *(uint *)(unaff_x19 + 100);
    lStack_60 = lVar8;
    if ((int)(uVar14 * 3) <= *(int *)(unaff_x19 + 0x60) * 4) {
      uVar5 = uVar14 << 1;
      if ((int)uVar14 < 1) {
        uVar5 = 4;
      }
      *(undefined4 *)(unaff_x19 + 0x60) = 0;
      *(uint *)(unaff_x19 + 100) = uVar5;
      lStack_58 = *(long *)(unaff_x19 + 0x68);
      *(undefined8 *)(unaff_x19 + 0x68) = 0;
      puVar6 = (undefined8 *)((ulong)uVar5 * 0x48 + 0x10);
      __Znam();
      *puVar6 = 0x48;
      puVar6[1] = (ulong)uVar5;
      if (uVar5 != 0) {
        lVar12 = (ulong)uVar5 * 0x48;
        puVar6 = puVar6 + 2;
        do {
          *(undefined4 *)puVar6 = 0;
          lVar12 = lVar12 + -0x48;
          puVar6 = puVar6 + 9;
        } while (lVar12 != 0);
      }
      FUN_1082aaa28(unaff_x19 + 0x68);
      for (lVar12 = 0; (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) * 0x48 - lVar12 != 0;
          lVar12 = lVar12 + 0x48) {
        if (*(int *)(lStack_58 + lVar12) != 0) {
          FUN_1082aa954(unaff_x19 + 0x60,lStack_58 + lVar12 + 8);
        }
      }
      FUN_108293ed8(&lStack_58);
    }
    FUN_1082aa954(unaff_x19 + 0x60,apuStack_98);
    func_0x00010827a384(apuStack_98);
    func_0x00010827a384(auStack_e0);
    return lVar8;
  }
  FUN_10827a214(apuStack_98);
  FUN_1082b1d54();
  plVar7 = (long *)(unaff_x19 + 8);
  FUN_1082aaa84(plVar7,apuStack_98);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    plVar3 = (long *)plVar7[1];
    if (plVar3 == (long *)0x0) {
      iVar13 = 0;
      uVar14 = *apuStack_98[0];
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      iVar10 = *(int *)(unaff_x19 + 0xc);
      uVar5 = iVar10 - 1U & uVar14;
      for (; uVar11 = (ulong)uVar5, iVar13 < iVar10; iVar13 = iVar13 + 1) {
        puVar15 = (uint *)(*(long *)(unaff_x19 + 0x10) + (long)(int)uVar5 * 0x10);
        uVar4 = *puVar15;
        if (uVar4 == 0) break;
        if (uVar14 == uVar4) {
          ppuVar9 = apuStack_98;
          FUN_1082a5e3c(ppuVar9,**(long **)(puVar15 + 2) + 8);
          if (((ulong)ppuVar9 & 1) != 0) {
            *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + -1;
            do {
              lVar12 = *(long *)(unaff_x19 + 0x10);
              uVar14 = (uint)uVar11;
              puVar15 = (uint *)(lVar12 + (long)(int)uVar14 * 0x10);
              do {
                uVar5 = (int)uVar11 - 1;
                if ((int)uVar11 < 1) {
                  uVar5 = *(int *)(unaff_x19 + 0xc) + uVar5;
                }
                uVar11 = (ulong)uVar5;
                uVar4 = *(uint *)(lVar12 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 |
                                           uVar11 << 4));
                if (uVar4 == 0) {
                  if (*puVar15 != 0) {
                    *puVar15 = 0;
                  }
                  uVar14 = *(uint *)(unaff_x19 + 0xc);
                  if ((4 < (int)uVar14) && (*(int *)(unaff_x19 + 8) * 4 <= (int)uVar14)) {
                    FUN_1082aab3c(unaff_x19 + 8,uVar14 >> 1);
                  }
                  goto LAB_1082a9df0;
                }
                uVar1 = *(int *)(unaff_x19 + 0xc) - 1U & uVar4;
              } while (((int)uVar5 <= (int)uVar1 && (int)uVar1 < (int)uVar14) ||
                      (((int)uVar14 < (int)uVar5 &&
                       ((int)uVar1 < (int)uVar14 || (int)uVar5 <= (int)uVar1))));
              if (uVar14 != uVar5) {
                *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar12 + (long)(int)uVar5 * 0x10 + 8)
                ;
                *puVar15 = uVar4;
              }
            } while( true );
          }
          iVar10 = *(int *)(unaff_x19 + 0xc);
        }
        iVar2 = 0;
        if ((int)uVar5 < 1) {
          iVar2 = iVar10;
        }
        uVar5 = (uVar5 + iVar2) - 1;
      }
    }
    else {
      lVar12 = *plVar3;
      plVar7[1] = plVar3[1];
      *plVar7 = lVar12;
      plVar7 = plVar3;
    }
LAB_1082a9df0:
    __ZdlPv(plVar7);
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + -1;
    if (lVar8 != 0) goto LAB_1082a9e18;
  }
  lVar8 = unaff_x19 + 0x1878;
  func_0x0001082aae8c(lVar8);
LAB_1082a9e18:
  func_0x0001082aaf44();
  return lVar8;
}



/* Entry: 1082a9ff8; end: 1082aa197;  */

long * FUN_1082a9ff8(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_10840f8d0(param_1,0x49,8);
  lVar6 = param_1[1];
  param_1[1] = (long)(plVar1 + 8);
  plVar1[8] = (long)FUN_1082aa924;
  lVar4 = param_1[1];
  param_1[1] = lVar4 + 8;
  *(char *)(lVar4 + 8) = (char)plVar1 - (char)(int)lVar6;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  lVar4 = *param_2;
  FUN_1082aa508(auStack_70,param_3);
  lVar6 = *param_4;
  *plVar1 = lVar4;
  FUN_1082aa508(plVar1 + 1,auStack_70);
  plVar5 = plVar1 + 6;
  *plVar5 = 0;
  *(undefined1 *)(plVar1 + 7) = 0;
  if (*(short *)(plVar1[1] + 4) == 0) {
    plVar3 = (long *)*plVar1;
    (**(code **)(*plVar3 + 0x38))();
    FUN_108283918(&uStack_48,lVar6,plVar3);
    uVar2 = uStack_48;
    uStack_48 = 0;
    func_0x0001082aa914(plVar5,uVar2);
    FUN_10826b5e8(&uStack_48);
  }
  else {
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    func_0x0001082a98dc(uVar2,lVar4);
    if ((int)uVar2 != 0) {
      FUN_1082aed18(&uStack_48,lVar6,plVar1 + 1,&UNK_10f483b8e,0x19);
      FUN_1082a9914(plVar5,&uStack_48);
      FUN_108283764(&uStack_48);
    }
  }
  FUN_10827a250(auStack_70);
  return plVar1;
}



/* Entry: 1082aa198; end: 1082aa283;  */

void FUN_1082aa198(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  while ((param_1[8] != 0 && (*(uint *)(param_1[8] + 0xc) < param_2))) {
    plVar1 = param_1 + 8;
    FUN_1082a9bb0();
    lVar3 = plVar1[4];
    if ((lVar3 != 0) &&
       (lVar2 = lVar3,
       FUN_1082a9950(lVar3,*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0xb8),*plVar1,(int)plVar1[3]
                     ,(char)plVar1[5]), (int)lVar2 != 0)) {
      func_0x0001082aa224(param_1 + 1,lVar3 + 8,lVar3);
    }
    FUN_1082a9870(param_1 + 10,plVar1);
  }
  return;
}



/* Entry: 1082aa284; end: 1082aa3ef;  */

byte FUN_1082aa284(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  func_0x0001082aad1c(param_1 + 0x20);
  do {
    do {
      while( true ) {
        do {
          plVar2 = (long *)(param_1 + 0x30);
          FUN_1082a9bb0();
          if (plVar2 == (long *)0x0) goto LAB_1082aa320;
          FUN_1082aa198(param_1,(int)plVar2[1]);
          lVar3 = param_1 + 0x40;
          func_0x0001082a9bd4(param_1 + 0x40,plVar2);
          uVar1 = (uint)lVar3;
          lVar3 = *plVar2;
        } while (*(long *)(lVar3 + 0x10) != 0);
        if (*(long *)(lVar3 + 0xc0) != 0) break;
        lVar3 = param_1;
        FUN_1082a9c24();
        plVar2[4] = lVar3;
      }
    } while (-1 < *(int *)(lVar3 + 0x90));
    func_0x0001082aae70();
    *(byte *)(param_1 + 0x18a8) = (byte)uVar1 ^ 1;
  } while ((uVar1 & 1) != 0);
LAB_1082aa320:
  FUN_1082aa198(param_1,0xffffffff);
  return (*(byte *)(param_1 + 0x18a8) ^ 0xff) & 1;
}


