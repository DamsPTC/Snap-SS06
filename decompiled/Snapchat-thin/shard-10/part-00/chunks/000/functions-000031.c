/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10737c564; end: 10737c597;  */

long FUN_10737c564(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10737cf48();
  }
  else {
    FUN_10737cf1c();
  }
  return param_1;
}



/* Entry: 10737c598; end: 10737c5cf;  */

void FUN_10737c598(undefined8 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *extraout_x8_04;
  int *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_50 [12];
  int iStack_44;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  if (*param_2 == 7) {
LAB_10737f3d8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar4 = *param_2 == 6;
  if ((bool)uVar4) {
    param_2 = param_2 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010737f004(param_3);
    iStack_44 = *param_2;
    uStack_28 = extraout_x8;
    FUN_10737c664(aiStack_40,&iStack_44,1);
    param_3 = aiStack_40;
    func_0x00010737f198();
    unaff_x19 = aiStack_40;
    func_0x000104c336c8();
    func_0x00010737eff0(uStack_28);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    param_2 = aiStack_40;
    func_0x000104c336c8();
    unaff_x30 = FUN_10737c640;
    func_0x00010737f080();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    param_1 = extraout_x8_00;
  }
  uVar4 = *param_2 == 5;
  if ((bool)uVar4) {
    piVar1 = param_2 + 2;
    piVar5 = (int *)((long)register0x00000008 + -0x40);
    param_2 = (int *)((long)register0x00000008 + -0x40);
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010737f004(param_3,piVar1);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_01;
    FUN_10737c8e8((undefined1 *)((long)register0x00000008 + -0x40));
    func_0x00010737f198();
    func_0x000104c336c8();
    func_0x00010737eff0(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010737f174();
    func_0x000104c336c8();
    unaff_x30 = FUN_10737c8c4;
    func_0x00010737f080();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_3 = piVar5;
    param_1 = extraout_x8_02;
  }
  if (*param_2 == 4) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974(unaff_x19);
    lVar2 = unaff_x20[1];
    for (lVar6 = *unaff_x20; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      func_0x00010737cbe4(unaff_x19,lVar6);
    }
  }
  else {
    uVar4 = *param_2 == 3;
    if ((bool)uVar4) {
      piVar1 = param_2 + 2;
      piVar5 = (int *)((long)register0x00000008 + -0x40);
      param_2 = (int *)((long)register0x00000008 + -0x40);
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      func_0x00010737f004(param_3,piVar1);
      *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_03;
      FUN_10737cd7c((undefined1 *)((long)register0x00000008 + -0x40));
      func_0x00010737f198();
      func_0x000104c336c8();
      func_0x00010737eff0(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010737f174();
      func_0x000104c336c8();
      unaff_x30 = FUN_10737cd58;
      func_0x00010737f080();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      param_3 = piVar5;
      param_1 = extraout_x8_04;
    }
    if (*param_2 != 2) {
      if (*param_2 == 1) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        plVar3 = *(long **)(param_2 + 4);
        for (plVar7 = *(long **)(param_2 + 2); plVar7 != plVar3; plVar7 = plVar7 + 3) {
          lVar2 = plVar7[1];
          for (lVar6 = *plVar7; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
            func_0x00010737f368();
            func_0x00010737cbe4();
          }
        }
        return;
      }
      goto LAB_10737f3d8;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974(unaff_x19);
    lVar2 = unaff_x20[1];
    for (lVar6 = *unaff_x20; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      FUN_10737ce04(unaff_x19,lVar6);
    }
  }
  return;
}



/* Entry: 10737c5d0; end: 10737c63f;  */

void FUN_10737c5d0(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *puVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 unaff_x21;
  long *plVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  int aiStack_90 [6];
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  piVar4 = (int *)auStack_50;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010737f004();
  uStack_44 = *param_2;
  uStack_28 = extraout_x8;
  FUN_10737c664(aiStack_40,&uStack_44,1);
  piVar8 = aiStack_40;
  func_0x00010737f198();
  piVar6 = aiStack_40;
  func_0x000104c336c8();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  piVar7 = aiStack_40;
  func_0x000104c336c8();
  pcVar14 = FUN_10737c640;
  func_0x00010737f080();
  uVar5 = *piVar7 == 5;
  puVar10 = extraout_x8_00;
  if ((bool)uVar5) {
    piVar1 = piVar7 + 2;
    piVar4 = aiStack_90;
    piVar9 = aiStack_90;
    piVar7 = aiStack_90;
    pcStack_58 = FUN_10737c640;
    ppppppuStack_60 = pppppppuVar13;
    func_0x00010737f004(piVar8,piVar1);
    uStack_78 = extraout_x8_01;
    FUN_10737c8e8(aiStack_90);
    func_0x00010737f198();
    func_0x000104c336c8();
    func_0x00010737eff0(uStack_78);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010737f174();
    func_0x000104c336c8();
    pcVar14 = FUN_10737c8c4;
    func_0x00010737f080();
    piVar8 = piVar9;
    puVar10 = extraout_x8_02;
    pppppppuVar13 = &ppppppuStack_60;
  }
  if (*piVar7 == 4) {
    *(undefined8 *)((long)piVar4 + -0x30) = unaff_x22;
    *(undefined8 *)((long)piVar4 + -0x28) = unaff_x21;
    *(long **)((long)piVar4 + -0x20) = unaff_x20;
    *(int **)((long)piVar4 + -0x18) = piVar6;
    *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar13;
    *(code **)((long)piVar4 + -8) = pcVar14;
    func_0x00010737f214(piVar8,piVar7 + 2);
    FUN_10737c974(piVar6);
    lVar2 = unaff_x20[1];
    for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x18) {
      func_0x00010737cbe4(piVar6,lVar11);
    }
  }
  else {
    uVar5 = *piVar7 == 3;
    if ((bool)uVar5) {
      piVar1 = piVar7 + 2;
      piVar9 = (int *)((long)piVar4 + -0x40);
      piVar7 = (int *)((long)piVar4 + -0x40);
      *(long **)((long)piVar4 + -0x20) = unaff_x20;
      *(int **)((long)piVar4 + -0x18) = piVar6;
      *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar13;
      *(code **)((long)piVar4 + -8) = pcVar14;
      pppppppuVar13 = (undefined8 *******)((long)piVar4 + -0x10);
      func_0x00010737f004(piVar8,piVar1);
      *(undefined8 *)((long)piVar4 + -0x28) = extraout_x8_03;
      FUN_10737cd7c((undefined1 *)((long)piVar4 + -0x40));
      func_0x00010737f198();
      func_0x000104c336c8();
      func_0x00010737eff0(*(undefined8 *)((long)piVar4 + -0x28));
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010737f174();
      func_0x000104c336c8();
      pcVar14 = FUN_10737cd58;
      func_0x00010737f080();
      piVar4 = (int *)((long)piVar4 + -0x40);
      piVar8 = piVar9;
      puVar10 = extraout_x8_04;
    }
    if (*piVar7 != 2) {
      if (*piVar7 == 1) {
        *(undefined8 *)((long)piVar4 + -0x40) = unaff_x24;
        *(undefined8 *)((long)piVar4 + -0x38) = unaff_x23;
        *(undefined8 *)((long)piVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)piVar4 + -0x28) = unaff_x21;
        *(long **)((long)piVar4 + -0x20) = unaff_x20;
        *(int **)((long)piVar4 + -0x18) = piVar6;
        *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar13;
        *(code **)((long)piVar4 + -8) = pcVar14;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        plVar3 = *(long **)(piVar7 + 4);
        for (plVar12 = *(long **)(piVar7 + 2); plVar12 != plVar3; plVar12 = plVar12 + 3) {
          lVar2 = plVar12[1];
          for (lVar11 = *plVar12; lVar11 != lVar2; lVar11 = lVar11 + 0x18) {
            func_0x00010737f368();
            func_0x00010737cbe4();
          }
        }
        return;
      }
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      return;
    }
    *(undefined8 *)((long)piVar4 + -0x30) = unaff_x22;
    *(undefined8 *)((long)piVar4 + -0x28) = unaff_x21;
    *(long **)((long)piVar4 + -0x20) = unaff_x20;
    *(int **)((long)piVar4 + -0x18) = piVar6;
    *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar13;
    *(code **)((long)piVar4 + -8) = pcVar14;
    func_0x00010737f214(piVar8,piVar7 + 2);
    FUN_10737c974(piVar6);
    lVar2 = unaff_x20[1];
    for (lVar11 = *unaff_x20; lVar11 != lVar2; lVar11 = lVar11 + 0x18) {
      FUN_10737ce04(piVar6,lVar11);
    }
  }
  return;
}



/* Entry: 10737c640; end: 10737c663;  */

void FUN_10737c640(undefined8 *param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  long *plVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  uVar4 = *param_2 == 5;
  if ((bool)uVar4) {
    piVar1 = param_2 + 2;
    piVar5 = aiStack_40;
    param_2 = aiStack_40;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010737f004(param_3,piVar1);
    uStack_28 = extraout_x8;
    FUN_10737c8e8(aiStack_40);
    func_0x00010737f198();
    func_0x000104c336c8();
    func_0x00010737eff0(uStack_28);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010737f174();
    func_0x000104c336c8();
    unaff_x30 = FUN_10737c8c4;
    func_0x00010737f080();
    register0x00000008 = (BADSPACEBASE *)aiStack_40;
    param_3 = (undefined1 *)piVar5;
    param_1 = extraout_x8_00;
  }
  if (*param_2 == 4) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar7 = *unaff_x20; lVar7 != lVar2; lVar7 = lVar7 + 0x18) {
      func_0x00010737cbe4();
    }
  }
  else {
    uVar4 = *param_2 == 3;
    if ((bool)uVar4) {
      piVar1 = param_2 + 2;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x40);
      param_2 = (int *)((long)register0x00000008 + -0x40);
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      func_0x00010737f004(param_3,piVar1);
      *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_01;
      FUN_10737cd7c((undefined1 *)((long)register0x00000008 + -0x40));
      func_0x00010737f198();
      func_0x000104c336c8();
      func_0x00010737eff0(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010737f174();
      func_0x000104c336c8();
      unaff_x30 = FUN_10737cd58;
      func_0x00010737f080();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      param_3 = puVar6;
      param_1 = extraout_x8_02;
    }
    if (*param_2 != 2) {
      if (*param_2 == 1) {
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        plVar3 = *(long **)(param_2 + 4);
        for (plVar8 = *(long **)(param_2 + 2); plVar8 != plVar3; plVar8 = plVar8 + 3) {
          lVar2 = plVar8[1];
          for (lVar7 = *plVar8; lVar7 != lVar2; lVar7 = lVar7 + 0x18) {
            func_0x00010737f368();
            func_0x00010737cbe4();
          }
        }
        return;
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar7 = *unaff_x20; lVar7 != lVar2; lVar7 = lVar7 + 0x18) {
      FUN_10737ce04();
    }
  }
  return;
}



/* Entry: 10737c664; end: 10737c693;  */

undefined8 * FUN_10737c664(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10737c694(param_1,param_2,param_2 + param_3 * 4,param_3);
  return param_1;
}



/* Entry: 10737c694; end: 10737c6ef;  */

void FUN_10737c694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010737f358();
    func_0x0001072975c8();
    func_0x00010737f4a4();
    FUN_10737c6f0();
  }
  uStack_38 = 1;
  func_0x000107297600(&uStack_40);
  return;
}



/* Entry: 10737c6f0; end: 10737c70f;  */

void FUN_10737c6f0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10737c710; end: 10737c743;  */

undefined8 * FUN_10737c710(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10737c744(param_1,param_2,param_2 + param_3 * 0x18,param_3);
  return param_1;
}



/* Entry: 10737c744; end: 10737c79f;  */

void FUN_10737c744(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010737f358();
    func_0x0001072973e4();
    func_0x00010737f4a4();
    FUN_10737c7a0();
  }
  uStack_38 = 1;
  func_0x000107297694(&uStack_40);
  return;
}



/* Entry: 10737c7a0; end: 10737c7d3;  */

void FUN_10737c7a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10737c7d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10737c7d4; end: 10737c7e7;  */

void FUN_10737c7d4(void)

{
  FUN_10737c7e8();
  return;
}



/* Entry: 10737c7e8; end: 10737c86f;  */

long FUN_10737c7e8(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107297530(param_4,param_2);
    param_4 = lStack_38 + 0x18;
  }
  uStack_48 = 1;
  func_0x000107297628(&uStack_60);
  return param_4;
}



/* Entry: 10737c870; end: 10737c8c3;  */

void FUN_10737c870(void)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar10;
  undefined8 unaff_x21;
  long *plVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar12;
  code *pcVar13;
  int aiStack_80 [4];
  undefined8 ******ppppppuStack_50;
  code *pcStack_48;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  piVar4 = aiStack_40;
  piVar7 = aiStack_40;
  piVar6 = aiStack_40;
  pppppppuVar12 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010737f004();
  uStack_28 = extraout_x8;
  FUN_10737c8e8(aiStack_40);
  func_0x00010737f198();
  func_0x000104c336c8();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010737f174();
  func_0x000104c336c8();
  pcVar13 = FUN_10737c8c4;
  func_0x00010737f080();
  if (*piVar6 == 4) {
    pcStack_48 = FUN_10737c8c4;
    ppppppuStack_50 = pppppppuVar12;
    func_0x00010737f214(piVar7,piVar6 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar10 = *unaff_x20; lVar10 != lVar2; lVar10 = lVar10 + 0x18) {
      func_0x00010737cbe4();
    }
  }
  else {
    uVar5 = *piVar6 == 3;
    puVar9 = extraout_x8_00;
    if ((bool)uVar5) {
      piVar1 = piVar6 + 2;
      piVar4 = aiStack_80;
      piVar8 = aiStack_80;
      piVar6 = aiStack_80;
      pcStack_48 = FUN_10737c8c4;
      ppppppuStack_50 = pppppppuVar12;
      func_0x00010737f004(piVar7,piVar1);
      FUN_10737cd7c(aiStack_80);
      func_0x00010737f198();
      func_0x000104c336c8();
      func_0x00010737eff0(extraout_x8_01);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010737f174();
      func_0x000104c336c8();
      pcVar13 = FUN_10737cd58;
      func_0x00010737f080();
      piVar7 = piVar8;
      puVar9 = extraout_x8_02;
      pppppppuVar12 = &ppppppuStack_50;
    }
    if (*piVar6 != 2) {
      if (*piVar6 == 1) {
        *(undefined8 *)((long)piVar4 + -0x40) = unaff_x24;
        *(undefined8 *)((long)piVar4 + -0x38) = unaff_x23;
        *(undefined8 *)((long)piVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)piVar4 + -0x28) = unaff_x21;
        *(long **)((long)piVar4 + -0x20) = unaff_x20;
        *(undefined8 *)((long)piVar4 + -0x18) = unaff_x19;
        *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar12;
        *(code **)((long)piVar4 + -8) = pcVar13;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        plVar3 = *(long **)(piVar6 + 4);
        for (plVar11 = *(long **)(piVar6 + 2); plVar11 != plVar3; plVar11 = plVar11 + 3) {
          lVar2 = plVar11[1];
          for (lVar10 = *plVar11; lVar10 != lVar2; lVar10 = lVar10 + 0x18) {
            func_0x00010737f368();
            func_0x00010737cbe4();
          }
        }
        return;
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      return;
    }
    *(undefined8 *)((long)piVar4 + -0x30) = unaff_x22;
    *(undefined8 *)((long)piVar4 + -0x28) = unaff_x21;
    *(long **)((long)piVar4 + -0x20) = unaff_x20;
    *(undefined8 *)((long)piVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)piVar4 + -0x10) = pppppppuVar12;
    *(code **)((long)piVar4 + -8) = pcVar13;
    func_0x00010737f214(piVar7,piVar6 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar10 = *unaff_x20; lVar10 != lVar2; lVar10 = lVar10 + 0x18) {
      FUN_10737ce04();
    }
  }
  return;
}



/* Entry: 10737c8c4; end: 10737c8e7;  */

void FUN_10737c8c4(undefined8 *param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int aiStack_40 [4];
  
  if (*param_2 == 4) {
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar6 = *unaff_x20; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      func_0x00010737cbe4();
    }
  }
  else {
    uVar4 = *param_2 == 3;
    if ((bool)uVar4) {
      piVar1 = param_2 + 2;
      piVar5 = aiStack_40;
      param_2 = aiStack_40;
      unaff_x29 = &stack0xfffffffffffffff0;
      func_0x00010737f004(param_3,piVar1);
      FUN_10737cd7c(aiStack_40);
      func_0x00010737f198();
      func_0x000104c336c8();
      func_0x00010737eff0(extraout_x8);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010737f174();
      func_0x000104c336c8();
      unaff_x30 = FUN_10737cd58;
      func_0x00010737f080();
      register0x00000008 = (BADSPACEBASE *)aiStack_40;
      param_3 = (undefined1 *)piVar5;
      param_1 = extraout_x8_00;
    }
    if (*param_2 != 2) {
      if (*param_2 != 1) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar3 = *(long **)(param_2 + 4);
      for (plVar7 = *(long **)(param_2 + 2); plVar7 != plVar3; plVar7 = plVar7 + 3) {
        lVar2 = plVar7[1];
        for (lVar6 = *plVar7; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
          func_0x00010737f368();
          func_0x00010737cbe4();
        }
      }
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974();
    lVar2 = unaff_x20[1];
    for (lVar6 = *unaff_x20; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      FUN_10737ce04();
    }
  }
  return;
}



/* Entry: 10737c8e8; end: 10737c8ff;  */

void FUN_10737c8e8(void)

{
  func_0x000107297530();
  return;
}



/* Entry: 10737c900; end: 10737c94f;  */

void FUN_10737c900(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010737f214();
  FUN_10737c974();
  lVar1 = unaff_x20[1];
  for (lVar2 = *unaff_x20; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010737cbe4();
  }
  return;
}



/* Entry: 10737c950; end: 10737c973;  */

void FUN_10737c950(undefined8 *param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  uVar4 = *param_2 == 3;
  if ((bool)uVar4) {
    piVar1 = param_2 + 2;
    piVar5 = aiStack_40;
    param_2 = aiStack_40;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010737f004(param_3,piVar1);
    uStack_28 = extraout_x8;
    FUN_10737cd7c(aiStack_40);
    func_0x00010737f198();
    func_0x000104c336c8();
    func_0x00010737eff0(uStack_28);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010737f174();
    func_0x000104c336c8();
    unaff_x30 = FUN_10737cd58;
    func_0x00010737f080();
    register0x00000008 = (BADSPACEBASE *)aiStack_40;
    param_3 = (undefined1 *)piVar5;
    param_1 = extraout_x8_00;
  }
  if (*param_2 != 2) {
    if (*param_2 != 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar3 = *(long **)(param_2 + 4);
    for (plVar7 = *(long **)(param_2 + 2); plVar7 != plVar3; plVar7 = plVar7 + 3) {
      lVar2 = plVar7[1];
      for (lVar6 = *plVar7; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
        func_0x00010737f368();
        func_0x00010737cbe4();
      }
    }
    return;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010737f214(param_3,param_2 + 2);
  FUN_10737c974();
  lVar2 = unaff_x20[1];
  for (lVar6 = *unaff_x20; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
    FUN_10737ce04();
  }
  return;
}



/* Entry: 10737c974; end: 10737c9f3;  */

void FUN_10737c974(long *param_1,ulong param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000107297450();
      plVar1 = param_1;
      func_0x00010737f1b8();
      func_0x00010737f080();
      func_0x00010737f2f0();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
      FUN_10737cac0(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    FUN_10737ca74(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x00010737f1ac();
    func_0x00010737f1b8();
  }
  return;
}



/* Entry: 10737c9f4; end: 10737ca73;  */

void FUN_10737c9f4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010737f2f0();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_10737cac0(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10737ca74; end: 10737cabf;  */

long * FUN_10737ca74(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010729745c();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10737cac0; end: 10737cb4b;  */

void FUN_10737cac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_10737cb4c();
  func_0x000107297628(&uStack_50);
  return;
}



/* Entry: 10737cb4c; end: 10737cba7;  */

void FUN_10737cb4c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 10737cba8; end: 10737cbaf;  */

void FUN_10737cba8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010737f2f0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 10737cbb0; end: 10737cc43;  */

void FUN_10737cbb0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010737f2f0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 10737cc44; end: 10737cc9b;  */

undefined8 FUN_10737cc44(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x00010737f0e8();
  func_0x00010737f12c();
  FUN_10737cc9c(uStack_48);
  func_0x00010737f1ac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010737f1b8();
  return uVar1;
}



/* Entry: 10737cc9c; end: 10737ccb3;  */

void FUN_10737cc9c(void)

{
  func_0x000107297530();
  return;
}



/* Entry: 10737ccb4; end: 10737cd03;  */

int * FUN_10737ccb4(long *param_1,int *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar6;
  int *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long *plVar8;
  int aiStack_50 [6];
  undefined8 uStack_38;
  
  uVar4 = param_2 == (int *)0xaaaaaaaaaaaaaaa;
  if (param_2 < (int *)0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1) / 0x18;
    piVar6 = (int *)(uVar3 * 2);
    if (piVar6 < param_2 || (long)piVar6 - (long)param_2 == 0) {
      piVar6 = param_2;
    }
    if (0x555555555555554 < uVar3) {
      piVar6 = (int *)0xaaaaaaaaaaaaaaa;
    }
    return piVar6;
  }
  func_0x000107297450();
  piVar5 = aiStack_50;
  piVar6 = aiStack_50;
  func_0x00010737f004();
  uStack_38 = extraout_x8;
  FUN_10737cd7c(aiStack_50);
  func_0x00010737f198();
  func_0x000104c336c8();
  func_0x00010737eff0(uStack_38);
  if ((bool)uVar4) {
    return piVar6;
  }
  ___stack_chk_fail();
  func_0x00010737f174();
  func_0x000104c336c8();
  func_0x00010737f080();
  if (*piVar6 == 2) {
    func_0x00010737f214(piVar5,piVar6 + 2);
    piVar6 = unaff_x19;
    FUN_10737c974();
    lVar1 = unaff_x20[1];
    for (lVar7 = *unaff_x20; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      piVar6 = unaff_x19;
      FUN_10737ce04();
    }
    return piVar6;
  }
  if (*piVar6 != 1) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    return piVar6;
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  plVar2 = *(long **)(piVar6 + 4);
  for (plVar8 = *(long **)(piVar6 + 2); plVar8 != plVar2; plVar8 = plVar8 + 3) {
    lVar1 = plVar8[1];
    for (lVar7 = *plVar8; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
      func_0x00010737f368();
      func_0x00010737cbe4();
    }
  }
  return piVar5;
}



/* Entry: 10737cd04; end: 10737cd57;  */

void FUN_10737cd04(void)

{
  long lVar1;
  long *plVar2;
  undefined1 in_ZR;
  int *piVar3;
  int *piVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  int aiStack_40 [6];
  undefined8 uStack_28;
  
  piVar4 = aiStack_40;
  piVar3 = aiStack_40;
  func_0x00010737f004();
  uStack_28 = extraout_x8;
  FUN_10737cd7c(aiStack_40);
  func_0x00010737f198();
  func_0x000104c336c8();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010737f174();
  func_0x000104c336c8();
  func_0x00010737f080();
  if (*piVar3 == 2) {
    func_0x00010737f214(piVar4,piVar3 + 2);
    FUN_10737c974();
    lVar1 = unaff_x20[1];
    for (lVar5 = *unaff_x20; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
      FUN_10737ce04();
    }
    return;
  }
  if (*piVar3 == 1) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    plVar2 = *(long **)(piVar3 + 4);
    for (plVar6 = *(long **)(piVar3 + 2); plVar6 != plVar2; plVar6 = plVar6 + 3) {
      lVar1 = plVar6[1];
      for (lVar5 = *plVar6; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
        func_0x00010737f368();
        func_0x00010737cbe4();
      }
    }
    return;
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  return;
}



/* Entry: 10737cd58; end: 10737cd7b;  */

void FUN_10737cd58(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long *plVar4;
  
  if (*param_2 == 2) {
    func_0x00010737f214(param_3,param_2 + 2);
    FUN_10737c974();
    lVar1 = unaff_x20[1];
    for (lVar3 = *unaff_x20; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
      FUN_10737ce04();
    }
    return;
  }
  if (*param_2 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar2 = *(long **)(param_2 + 4);
    for (plVar4 = *(long **)(param_2 + 2); plVar4 != plVar2; plVar4 = plVar4 + 3) {
      lVar1 = plVar4[1];
      for (lVar3 = *plVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
        func_0x00010737f368();
        func_0x00010737cbe4();
      }
    }
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10737cd7c; end: 10737cd93;  */

void FUN_10737cd7c(void)

{
  func_0x000107297530();
  return;
}



/* Entry: 10737cd94; end: 10737cde3;  */

void FUN_10737cd94(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010737f214();
  FUN_10737c974();
  lVar1 = unaff_x20[1];
  for (lVar2 = *unaff_x20; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_10737ce04();
  }
  return;
}



/* Entry: 10737cde4; end: 10737ce03;  */

void FUN_10737cde4(undefined8 *param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*param_2 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar1 = *(long **)(param_2 + 4);
    for (plVar4 = *(long **)(param_2 + 2); plVar4 != plVar1; plVar4 = plVar4 + 3) {
      lVar2 = plVar4[1];
      for (lVar3 = *plVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
        func_0x00010737f368();
        func_0x00010737cbe4();
      }
    }
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10737ce04; end: 10737ce63;  */

long FUN_10737ce04(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010737ce40();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_10737ce64();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 10737ce64; end: 10737cebb;  */

undefined8 FUN_10737ce64(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x00010737f0e8();
  func_0x00010737f12c();
  FUN_10737c8e8(uStack_48);
  func_0x00010737f1ac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010737f1b8();
  return uVar1;
}



/* Entry: 10737cebc; end: 10737cf1b;  */

void FUN_10737cebc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (long *)param_3[1];
  for (plVar4 = (long *)*param_3; plVar4 != plVar1; plVar4 = plVar4 + 3) {
    lVar2 = plVar4[1];
    for (lVar3 = *plVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x18) {
      func_0x00010737f368();
      func_0x00010737cbe4();
    }
  }
  return;
}



/* Entry: 10737cf1c; end: 10737cf47;  */

void FUN_10737cf1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10737cf48; end: 10737cf6b;  */

undefined8 FUN_10737cf48(undefined8 param_1)

{
  FUN_10737cf6c();
  return param_1;
}



/* Entry: 10737cf6c; end: 10737cf9f;  */

undefined8 * FUN_10737cf6c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10737cfa0(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10737cfa0; end: 10737cfaf;  */

void FUN_10737cfa0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar2 = (param_3 - param_2) / 0x18;
  if ((ulong)((param_1[2] - *param_1) / 0x18) < uVar2) {
    FUN_10737d0a0(param_1);
    plVar1 = param_1;
    FUN_10737ccb4(param_1,uVar2);
    func_0x0001072973e4(param_1,plVar1);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar2 <= (ulong)(lVar3 / 0x18)) {
      FUN_10737d0d8(param_2,param_3);
      func_0x00010729e5f0();
      lVar3 = param_1[1];
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x18;
        func_0x000104c336c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10737d0d8(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
    uVar2 = (param_1[1] - *param_1) / -0x18 + uVar2;
  }
  func_0x00010729efa8(param_1,param_2,param_3,uVar2);
  param_1 = param_1 + 2;
  func_0x0001072974a8();
  *(long **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10737cfb0; end: 10737d09f;  */

void FUN_10737cfb0(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_4) {
    FUN_10737d0a0(param_1);
    plVar1 = param_1;
    FUN_10737ccb4(param_1,param_4);
    func_0x0001072973e4(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x18)) {
      FUN_10737d0d8(param_2,param_3);
      func_0x00010729e5f0();
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x18;
        func_0x000104c336c8();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10737d0d8(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
    param_4 = (param_1[1] - *param_1) / -0x18 + param_4;
  }
  func_0x00010729efa8(param_1,param_2,param_3,param_4);
  param_1 = param_1 + 2;
  func_0x0001072974a8();
  *(long **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10737d0a0; end: 10737d0d7;  */

void FUN_10737d0a0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001072976e8();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10737d0d8; end: 10737d103;  */

void FUN_10737d0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10737d104(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10737d104; end: 10737d157;  */

void FUN_10737d104(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010737f358();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    FUN_10737d158(in_x3,unaff_x21);
    in_x3 = in_x3 + 0x18;
  }
  return;
}



/* Entry: 10737d158; end: 10737d18b;  */

undefined8 * FUN_10737d158(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10737d18c(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 10737d18c; end: 10737d197;  */

void FUN_10737d18c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3 - param_2 >> 2;
  uVar3 = uVar2;
  func_0x00010737f260();
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 2) < uVar3) {
    FUN_10737d268();
    func_0x000104c33fb8();
    func_0x0001072975c8();
    lVar4 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar5 - lVar4 >> 2) < uVar2) {
      lVar1 = unaff_x20 + (lVar5 - lVar4);
      if (lVar5 != lVar4) {
        _memmove(lVar4);
        lVar5 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar5,lVar1,param_3);
      }
      lVar4 = lVar5 + param_3;
      goto LAB_10737d25c;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    _memmove(lVar4);
  }
  lVar4 = lVar4 + (param_3 - unaff_x20);
LAB_10737d25c:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 10737d198; end: 10737d267;  */

void FUN_10737d198(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  func_0x00010737f260();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 2) < uVar2) {
    FUN_10737d268();
    func_0x000104c33fb8();
    func_0x0001072975c8();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3 >> 2) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        _memmove(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_10737d25c;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    _memmove(lVar3);
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_10737d25c:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 10737d268; end: 10737d297;  */

void FUN_10737d268(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10737d298; end: 10737d2cf;  */

void FUN_10737d298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7900;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737d2d0; end: 10737d33f;  */

long * FUN_10737d2d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010737d314(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10737d340; end: 10737d403;  */

void FUN_10737d340(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010737f260();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    uVar4 = *unaff_x20;
    puVar3 = puVar2 + 2;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar4;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    plVar1 = unaff_x19;
    FUN_107373f5c();
    FUN_10737401c(auStack_58,plVar1,unaff_x19[1] - *unaff_x19 >> 4,(ulong *)(param_1 + 0x10));
    uVar4 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar4;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    puStack_48 = puStack_48 + 2;
    FUN_107373f9c();
    puVar3 = (undefined8 *)unaff_x19[1];
    FUN_1073740a4(auStack_58);
  }
  unaff_x19[1] = (long)puVar3;
  return;
}



/* Entry: 10737d404; end: 10737d427;  */

void FUN_10737d404(long param_1)

{
  func_0x00010737f2fc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10737d428; end: 10737d483;  */

long * FUN_10737d428(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_107374434(param_1 + 5);
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010737d314(plVar1 + 2);
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



/* Entry: 10737d484; end: 10737d4f3;  */

void FUN_10737d484(long param_1,long *param_2,undefined8 param_3)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010737d49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return;
  }
  func_0x000104bfeb48();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_107330fdc();
  }
  return;
}



/* Entry: 10737d4f4; end: 10737d527;  */

long * FUN_10737d4f4(long *param_1)

{
  param_1[1] = param_1[1] + 0x38;
  *param_1 = *param_1 + 1;
  FUN_10737d5f0();
  return param_1;
}



/* Entry: 10737d528; end: 10737d5ef;  */

bool FUN_10737d528(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  
  func_0x00010737f2f0();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x00010727e7fc(*param_1);
  lVar6 = 0;
  uVar7 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar11 = *(undefined8 *)(uVar7 + (uVar5 & uVar2));
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar4 = uVar1;
      func_0x000104c32db4();
      if ((uVar4 & 1) != 0) goto LAB_10737d5e0;
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + (uVar5 & uVar2);
  }
LAB_10737d5e0:
  return uVar8 != 0;
}



/* Entry: 10737d5f0; end: 10737d647;  */

void FUN_10737d5f0(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x38;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10737d648; end: 10737d683;  */

int * FUN_10737d648(int *param_1,int *param_2)

{
  int *piStack_18;
  
  if (*param_2 == *param_1) {
    piStack_18 = param_1;
    FUN_10737d684(param_2,&piStack_18);
    return param_2;
  }
  return (int *)0x0;
}



/* Entry: 10737d684; end: 10737d77b;  */

ulong FUN_10737d684(int *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  ulong uVar5;
  long lStack_30;
  long lStack_28;
  
  if (*param_1 == 7) {
    return 1;
  }
  if (*param_1 == 6) {
    return (ulong)(*(char *)(*param_2 + 8) == (char)param_1[2]);
  }
  if ((*param_1 == 5) || (*param_1 == 4)) {
    return (ulong)(*(long *)(*param_2 + 8) == *(long *)(param_1 + 2));
  }
  if (*param_1 == 3) {
    return (ulong)(*(double *)(*param_2 + 8) == *(double *)(param_1 + 2));
  }
  if (*param_1 == 2) {
    lVar1 = *param_2 + 8;
    func_0x000104c2fe38(lVar1,param_1 + 2);
    func_0x000104c345b0();
    func_0x000104c2fe38();
    return (ulong)(unaff_x20 == lVar1);
  }
  if (*param_1 == 1) {
    lVar1 = *(long *)(*param_2 + 8);
    lVar3 = *(long *)(param_1 + 2);
    if (*(long *)(lVar1 + 0x18) == *(long *)(lVar3 + 0x18)) {
      lVar2 = lVar3;
      if (*(ulong *)(lVar1 + 0x10) <= *(ulong *)(lVar3 + 0x10)) {
        lVar2 = lVar1;
        lVar1 = lVar3;
      }
      func_0x000104c2dd8c();
      lStack_30 = lVar2;
      lStack_28 = lVar3;
      while ((uVar5 = (ulong)(lStack_30 == 0), lStack_30 != 0 &&
             (lVar3 = lVar1, FUN_10737d7fc(lVar1,lStack_28), (int)lVar3 != 0))) {
        func_0x000104c2de10(&lStack_30);
      }
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  plVar4 = *(long **)(param_1 + 2);
  uVar5 = **(ulong **)(*param_2 + 8);
  if ((*(ulong **)(*param_2 + 8))[1] - uVar5 != plVar4[1] - *plVar4) {
    return 0;
  }
  FUN_10737d94c();
  return uVar5;
}



/* Entry: 10737d77c; end: 10737d7fb;  */

bool FUN_10737d77c(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    lVar2 = param_2;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      lVar2 = param_1;
      param_1 = param_2;
    }
    func_0x000104c2dd8c();
    lStack_30 = lVar2;
    lStack_28 = param_2;
    while ((bVar1 = lStack_30 == 0, lStack_30 != 0 &&
           (lVar2 = param_1, FUN_10737d7fc(param_1,lStack_28), (int)lVar2 != 0))) {
      func_0x000104c2de10(&lStack_30);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10737d7fc; end: 10737d8bb;  */

bool FUN_10737d7fc(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  uint6 uVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar10;
  byte bVar16;
  
  func_0x00010737f2f0();
  func_0x00010737f2e8();
  lVar4 = 0;
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[2];
  uVar2 = uVar5 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
  uVar9 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
          0x7f7f7f7f7f7f;
  while( true ) {
    uVar10 = *(undefined8 *)(uVar5 + (uVar2 & uVar6));
    cVar11 = (char)((ulong)uVar10 >> 8);
    cVar12 = (char)((ulong)uVar10 >> 0x10);
    cVar13 = (char)((ulong)uVar10 >> 0x18);
    cVar14 = (char)((ulong)uVar10 >> 0x20);
    cVar15 = (char)((ulong)uVar10 >> 0x28);
    bVar8 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar16 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar8 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar15 == (char)(uVar9 >> 0x28)),
                                            CONCAT14(-(cVar14 == (char)(uVar9 >> 0x20)),
                                                     CONCAT13(-(cVar13 == (char)(uVar9 >> 0x18)),
                                                              CONCAT12(-(cVar12 ==
                                                                        (char)(uVar9 >> 0x10)),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 (char)(uVar9 >> 8))
                                                                                ,-((char)uVar10 ==
                                                                                  (char)uVar9)))))))
                         ) & 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar3 = unaff_x20[1];
      FUN_10737d8bc();
      if ((uVar3 & 1) != 0) goto LAB_10737d8ac;
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar8 == 0x80),
                                         CONCAT15(-(cVar15 == -0x80),
                                                  CONCAT14(-(cVar14 == -0x80),
                                                           CONCAT13(-(cVar13 == -0x80),
                                                                    CONCAT12(-(cVar12 == -0x80),
                                                                             CONCAT11(-(cVar11 ==
                                                                                       -0x80),-((
                                                  char)uVar10 == -0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar2 = lVar4 + (uVar2 & uVar6);
  }
LAB_10737d8ac:
  return uVar7 != 0;
}



/* Entry: 10737d8bc; end: 10737d8f3;  */

int * FUN_10737d8bc(int *param_1)

{
  int *piVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010737f2f0();
  func_0x000104c32db4();
  if ((int)param_1 == 0) {
    return param_1;
  }
  piVar1 = (int *)(unaff_x19 + 0x38);
  if (*piVar1 == *(int *)(unaff_x20 + 0x38)) {
    FUN_10737d684(piVar1,&stack0xffffffffffffffe8);
    return piVar1;
  }
  return (int *)0x0;
}



/* Entry: 10737d8f4; end: 10737d92f;  */

long FUN_10737d8f4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(*param_1 + 8);
  if ((*(long **)(*param_1 + 8))[1] - lVar1 == ((long *)*param_2)[1] - *(long *)*param_2) {
    FUN_10737d94c();
    return lVar1;
  }
  return 0;
}



/* Entry: 10737d930; end: 10737d94b;  */

void FUN_10737d930(void)

{
  FUN_10737d94c();
  return;
}



/* Entry: 10737d94c; end: 10737d9a3;  */

bool FUN_10737d94c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 && (lVar1 = param_1, FUN_10737d648(param_1,param_3), (int)lVar1 != 0)))
  {
    param_1 = param_1 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return param_1 == param_2;
}



/* Entry: 10737d9a4; end: 10737d9c3;  */

void FUN_10737d9a4(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  long *unaff_x19;
  byte unaff_w20;
  long *plStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010737d9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  pcStack_18 = FUN_10737d9c4;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010737f260();
  func_0x00010737f018();
  uStack_38 = extraout_x8;
  func_0x000100061de0();
  lVar3 = *unaff_x19;
  if ((*(long *)(lVar3 + -8) == 0) && (*(char *)(lVar3 + (long)plVar2) != -2)) {
    plVar2 = unaff_x19;
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_10737dadc();
    }
    else {
      func_0x00010ae6c914();
    }
    func_0x00010737f368();
    func_0x000100061de0();
    lVar3 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar1 = *(char *)(lVar3 + (long)plVar2) == -0x80;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) - (ulong)bVar1;
  uVar4 = unaff_x19[2];
  *(byte *)(lVar3 + (long)plVar2) = unaff_w20 & 0x7f;
  *(byte *)(lVar3 + (uVar4 & (long)plVar2 - 7U) + (uVar4 & 7)) = unaff_w20 & 0x7f;
  func_0x00010737eff0(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10737dab0;
  plStack_58 = plVar2;
  ppuStack_50 = &puStack_20;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&plStack_58,&plStack_58);
  return;
}



/* Entry: 10737d9c4; end: 10737daaf;  */

void FUN_10737d9c4(long *param_1)

{
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  byte unaff_w20;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 uStack_28;
  
  func_0x00010737f260();
  func_0x00010737f018();
  uStack_28 = extraout_x8;
  func_0x000100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (*(char *)(lVar2 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_10737dadc();
    }
    else {
      func_0x00010ae6c914();
    }
    func_0x00010737f368();
    func_0x000100061de0();
    lVar2 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar1 = *(char *)(lVar2 + (long)param_1) == -0x80;
  *(ulong *)(lVar2 + -8) = *(long *)(lVar2 + -8) - (ulong)bVar1;
  uVar3 = unaff_x19[2];
  *(byte *)(lVar2 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar2 + (uVar3 & (long)param_1 - 7U) + (uVar3 & 7)) = unaff_w20 & 0x7f;
  func_0x00010737eff0(uStack_28);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_10737dab0;
  plStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&plStack_48,&plStack_48);
  return;
}



/* Entry: 10737dab0; end: 10737dadb;  */

void FUN_10737dab0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&uStack_18,&uStack_18);
  return;
}



/* Entry: 10737dadc; end: 10737dba3;  */

void FUN_10737dadc(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  plVar6 = (long *)param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  func_0x000100068914();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = *plVar6;
      FUN_10737dab0();
      lVar4 = lVar3;
      func_0x00010737f368();
      func_0x000100061de0();
      bVar2 = (byte)lVar3 & 0x7f;
      uVar5 = param_1[2];
      lVar3 = *param_1;
      *(byte *)(lVar3 + lVar4) = bVar2;
      *(byte *)(lVar3 + (lVar4 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      *(long *)(lVar9 + lVar4 * 8) = *plVar6;
    }
    plVar6 = plVar6 + 1;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10737dba4; end: 10737dbb3;  */

void FUN_10737dba4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x000100061c44(&PTR_LOOP_110c8acd8,&uStack_18,&uStack_18);
  return;
}



/* Entry: 10737dbb4; end: 10737dbe3;  */

long * FUN_10737dbb4(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10737dbe4; end: 10737dc37;  */

void FUN_10737dbe4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001072c92ec();
  }
  return;
}



/* Entry: 10737dc38; end: 10737dc3f;  */

void FUN_10737dc38(void)

{
  return;
}



/* Entry: 10737dc40; end: 10737dc63;  */

void FUN_10737dc40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a74e8;
  return;
}



/* Entry: 10737dc64; end: 10737dc8b;  */

void FUN_10737dc64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a74e8;
  return;
}



/* Entry: 10737dc8c; end: 10737dcb3;  */

void FUN_10737dc8c(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a7548);
  func_0x00010737f034();
  return;
}



/* Entry: 10737dcb4; end: 10737dcc7;  */

undefined ** FUN_10737dcb4(void)

{
  return &PTR_DAT_1109a7548;
}



/* Entry: 10737dcc8; end: 10737dceb;  */

void FUN_10737dcc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109a7568;
  return;
}



/* Entry: 10737dcec; end: 10737dd13;  */

void FUN_10737dcec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109a7568;
  return;
}



/* Entry: 10737dd14; end: 10737dd3b;  */

void FUN_10737dd14(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a75c8);
  func_0x00010737f034();
  return;
}



/* Entry: 10737dd3c; end: 10737dd47;  */

undefined ** FUN_10737dd3c(void)

{
  return &PTR_DAT_1109a75c8;
}



/* Entry: 10737dd48; end: 10737dd6b;  */

undefined8 FUN_10737dd48(undefined8 param_1)

{
  FUN_10737dd6c(param_1);
  return param_1;
}



/* Entry: 10737dd6c; end: 10737ddaf;  */

void FUN_10737dd6c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10737ddb0; end: 10737ddd3;  */

undefined8 FUN_10737ddb0(undefined8 param_1)

{
  FUN_10737ddd4(param_1);
  return param_1;
}



/* Entry: 10737ddd4; end: 10737de17;  */

void FUN_10737ddd4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10737de18; end: 10737de4b;  */

long FUN_10737de18(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10737de68();
  }
  else {
    FUN_10737de4c();
  }
  return param_1;
}



/* Entry: 10737de4c; end: 10737de67;  */

void FUN_10737de4c(long param_1)

{
  func_0x0001073248fc();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10737de68; end: 10737dec3;  */

long * FUN_10737de68(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar6;
  long *unaff_x20;
  long alStack_90 [3];
  undefined8 uStack_78;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x00010737f018();
  uStack_28 = extraout_x8;
  func_0x0001073248fc(alStack_48);
  plVar5 = param_1;
  FUN_10737dec4(alStack_48);
  plVar2 = alStack_48;
  func_0x0001072c92ec();
  func_0x00010737eff0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar3 = alStack_90;
  func_0x00010737f018();
  uVar1 = plVar5 == plVar2;
  uStack_78 = extraout_x8_00;
  if (!(bool)uVar1) {
    func_0x00010737f2f0();
    plVar2 = (long *)plVar2[3];
    plVar6 = (long *)plVar5[3];
    if (plVar2 == unaff_x20) {
      uVar1 = plVar6 == param_1;
      if ((bool)uVar1) {
        (**(code **)(*plVar2 + 0x18))(plVar2,alStack_90);
        func_0x00010737f0bc(unaff_x20[3]);
        unaff_x20[3] = 0;
        (**(code **)(*(long *)param_1[3] + 0x18))();
        func_0x00010737f0bc(param_1[3]);
        param_1[3] = 0;
        unaff_x20[3] = (long)unaff_x20;
        plVar5 = param_1;
        (**(code **)(alStack_90[0] + 0x18))(alStack_90);
        (**(code **)(alStack_90[0] + 0x20))(alStack_90);
      }
      else {
        plVar5 = param_1;
        (**(code **)(*plVar2 + 0x18))();
        plVar3 = (long *)unaff_x20[3];
        func_0x00010737f0bc(plVar3);
        unaff_x20[3] = param_1[3];
      }
      param_1[3] = (long)param_1;
      plVar2 = plVar3;
    }
    else {
      uVar1 = plVar6 == param_1;
      if ((bool)uVar1) {
        plVar5 = unaff_x20;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar2 = (long *)param_1[3];
        func_0x00010737f0bc(plVar2);
        param_1[3] = unaff_x20[3];
        unaff_x20[3] = (long)unaff_x20;
      }
      else {
        unaff_x20[3] = (long)plVar6;
        param_1[3] = (long)plVar2;
      }
    }
  }
  iVar4 = (int)plVar5;
  func_0x00010737eff0(uStack_78);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x000107331000(plVar2 + 7);
  func_0x000104c2f714(plVar2);
  return plVar2;
}



/* Entry: 10737dec4; end: 10737dfef;  */

long * FUN_10737dec4(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  int iVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x20;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar2 = alStack_40;
  func_0x00010737f018();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x00010737f2f0();
    param_1 = (long *)param_1[3];
    plVar4 = (long *)param_2[3];
    if (param_1 == unaff_x20) {
      uVar1 = plVar4 == unaff_x19;
      param_2 = unaff_x19;
      if ((bool)uVar1) {
        (**(code **)(*param_1 + 0x18))(param_1,alStack_40);
        func_0x00010737f0bc(unaff_x20[3]);
        unaff_x20[3] = 0;
        (**(code **)(*(long *)unaff_x19[3] + 0x18))();
        func_0x00010737f0bc(unaff_x19[3]);
        unaff_x19[3] = 0;
        unaff_x20[3] = (long)unaff_x20;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*param_1 + 0x18))();
        plVar2 = (long *)unaff_x20[3];
        func_0x00010737f0bc(plVar2);
        unaff_x20[3] = unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
      param_1 = plVar2;
    }
    else {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        param_1 = (long *)unaff_x19[3];
        func_0x00010737f0bc(param_1);
        unaff_x19[3] = unaff_x20[3];
        unaff_x20[3] = (long)unaff_x20;
      }
      else {
        unaff_x20[3] = (long)plVar4;
        unaff_x19[3] = (long)param_1;
      }
    }
  }
  iVar3 = (int)param_2;
  func_0x00010737eff0(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x000107331000(param_1 + 7);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10737dff0; end: 10737e10f;  */

long FUN_10737dff0(long param_1)

{
  func_0x000107331000(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10737e110; end: 10737e117;  */

void FUN_10737e110(void)

{
  return;
}



/* Entry: 10737e118; end: 10737e13f;  */

void FUN_10737e118(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a75e8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10737e140; end: 10737e15f;  */

void FUN_10737e140(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a75e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737e160; end: 10737e193;  */

undefined1 * FUN_10737e160(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_20 [16];
  
  func_0x00010737f348(*(undefined8 *)(param_1 + 8));
  (*extraout_x8)();
  func_0x000107268400(auStack_20,param_1);
  func_0x00010737f250();
  return auStack_20;
}



/* Entry: 10737e194; end: 10737e1bb;  */

void FUN_10737e194(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a7648);
  func_0x00010737f034();
  return;
}



/* Entry: 10737e1bc; end: 10737e1cf;  */

undefined ** FUN_10737e1bc(void)

{
  return &PTR_DAT_1109a7648;
}



/* Entry: 10737e1d0; end: 10737e1f7;  */

void FUN_10737e1d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a7668;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10737e1f8; end: 10737e21b;  */

void FUN_10737e1f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a7668;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737e21c; end: 10737e243;  */

void FUN_10737e21c(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a76c8);
  func_0x00010737f034();
  return;
}



/* Entry: 10737e244; end: 10737e257;  */

undefined ** FUN_10737e244(void)

{
  return &PTR_DAT_1109a76c8;
}



/* Entry: 10737e258; end: 10737e27f;  */

void FUN_10737e258(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a76e8;
  param_1[1] = uVar1;
  return;
}


