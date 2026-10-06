/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082e1ba0; end: 1082e1bb3;  */

void FUN_1082e1ba0(void)

{
  func_0x0001082e1b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e1bb4; end: 1082e1c4f;  */

void FUN_1082e1bb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uStack_48 = *param_3;
  *param_3 = 0;
  uStack_50 = 0;
  uStack_40 = (ulong)uVar1 | 0x200000000;
  uStack_38 = param_2;
  FUN_10810a400(&uStack_50);
  func_0x0001082e2084(auStack_58,*(undefined8 *)(param_1 + 0x40));
  func_0x0001082e20c8();
  FUN_10810a400(&uStack_48);
  return;
}



/* Entry: 1082e1c50; end: 1082e1cb3;  */

void FUN_1082e1c50(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1082e46d8(uVar4,param_2,&lStack_28,param_1 + 0x18);
  func_0x000106f47184(&lStack_28);
  return;
}



/* Entry: 1082e1cb4; end: 1082e1e93;  */

void FUN_1082e1cb4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + 0x10) + 200);
  FUN_10827a1fc(auStack_90);
  lVar1 = param_3;
  func_0x000108330824();
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  FUN_1082b8664();
  lVar4 = param_3;
  lStack_a0 = lVar1;
  uStack_98 = uVar2;
  func_0x000108330c80(param_3);
  FUN_1082b7f98(auStack_90,lVar4,&lStack_a0);
  FUN_1082b4954(&lStack_b0,uVar3,auStack_90);
  if (lStack_b0 == 0) {
    FUN_1082b8914(&lStack_c8,*(undefined8 *)(param_2 + 0x40),param_3,0,1,1);
    FUN_108279f20(&lStack_b0,&lStack_c8);
    func_0x0001082e2104();
    if (lStack_b0 == 0) {
      *param_1 = 0;
      goto LAB_1082e1e20;
    }
    FUN_1082b4bb8(auStack_d8,uVar3,auStack_90,&lStack_b0);
    FUN_1082764bc(auStack_d8);
  }
  lVar1 = param_3;
  func_0x000108330c80(param_3);
  lVar4 = *(long *)(param_2 + 0x40);
  uVar2 = 0x68;
  __Znwm();
  if (lVar4 != 0) {
    do {
      func_0x0001082e1fd0();
    } while (extraout_w10 != 0);
  }
  lStack_c8 = lStack_b0;
  lStack_b0 = 0;
  uStack_c0 = uStack_a8;
  uStack_bc = uStack_a4;
  uStack_58 = 0;
  lStack_48 = lVar4;
  if (*(long *)(param_3 + 0x18) != 0) {
    do {
      func_0x0001082e1fd0();
      uStack_58 = extraout_x8;
    } while (extraout_w10_00 != 0);
  }
  uStack_50 = *(undefined8 *)(param_3 + 0x20);
  FUN_1082e230c(uVar2,&lStack_48,lVar1,&lStack_c8,&uStack_58);
  FUN_10810a400(&uStack_58);
  func_0x0001082e2104();
  FUN_108281b98(&lStack_48);
  uStack_e0 = 0;
  *param_1 = uVar2;
  FUN_1082e1f7c(&uStack_e0);
LAB_1082e1e20:
  func_0x0001082e2210();
  func_0x00010827a384(auStack_90);
  return;
}



/* Entry: 1082e1e94; end: 1082e1ea7;  */

long FUN_1082e1e94(long param_1)

{
  return param_1 + 0x38;
}



/* Entry: 1082e1ea8; end: 1082e1ef7;  */

void FUN_1082e1ea8(long param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x0001082e2084(auStack_28,*(undefined8 *)(param_1 + 0x40),param_2,param_2);
  func_0x0001082e20c8();
  return;
}



/* Entry: 1082e1ef8; end: 1082e1f33;  */

undefined8 * FUN_1082e1ef8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -6;
  *puVar1 = &PTR_SUB_110a38d30;
  *param_1 = &PTR_FUN_110a38d90;
  param_1[1] = &PTR_DAT_110a38dd0;
  FUN_10827f63c(param_1 + 2);
  *puVar1 = &PTR_DAT_110a3ea18;
  FUN_1082e1f34(param_1 + -4);
  return puVar1;
}



/* Entry: 1082e1f34; end: 1082e1f7b;  */

void FUN_1082e1f34(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x0001082e21a8();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1082e1f7c; end: 1082e1fc3;  */

void FUN_1082e1f7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x0001082e21a8();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1082e1fc4; end: 1082e222b;  */

void FUN_1082e1fc4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082e1fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082e222c; end: 1082e230b;  */

void FUN_1082e222c(undefined8 *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_2[3] != *(long *)(param_4 + 0x10)) {
    FUN_10841076c(&UNK_10f487d6f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e230c);
    (*pcVar1)();
  }
  if ((param_3 != (long *)0x0) &&
     (plVar2 = param_3, (**(code **)(*param_3 + 0x40))(), (int)plVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082e22dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x48))(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0x3210;
  return;
}



/* Entry: 1082e230c; end: 1082e23eb;  */

undefined8 *
FUN_1082e230c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  uVar1 = *param_4;
  FUN_1082b1dfc();
  uStack_50 = *param_5;
  uStack_48 = param_5[1];
  *param_5 = 0;
  uStack_40 = uVar1;
  FUN_1082e38e0(param_1,&uStack_38,&uStack_50,param_3);
  FUN_10810a400(&uStack_50);
  FUN_108281b98(&uStack_38);
  *param_1 = &PTR_FUN_110a38e50;
  uVar1 = *param_4;
  *param_4 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  func_0x0001082e37cc();
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((long)param_4 + 0xc);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(param_4 + 1);
  return param_1;
}



/* Entry: 1082e23ec; end: 1082e241f;  */

undefined8 * FUN_1082e23ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a38fd0;
  FUN_108281b98(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1082e2420; end: 1082e2773;  */

void FUN_1082e2420(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  long lVar7;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x0001082e3814(*param_3);
  (*extraout_x8)();
  FUN_1082b33e8();
  uStack_a0 = 0;
  uStack_b0 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001082e37bc();
      uStack_b0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_1082b22dc(&lStack_a8);
  FUN_1082764bc(&uStack_b0);
  if (lStack_a8 == 0) {
    *param_1 = 0;
  }
  else {
    puVar5 = (undefined8 *)*param_2;
    func_0x0001082e3814();
    (*extraout_x8_01)();
    puVar6 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      puStack_b8 = (undefined8 *)0x0;
      func_0x0001082e38cc();
      lVar2 = lStack_a8;
      lStack_a8 = 0;
      lVar1 = param_3[1];
      func_0x0001082e37cc();
      func_0x0001082e3870();
      uStack_80 = *param_2;
      *param_2 = 0;
      lStack_78 = lVar2;
      lStack_70 = CONCAT26(lStack_70._6_2_,(int6)lVar1);
      puStack_98 = (undefined8 *)*param_4;
      lStack_90 = param_4[1];
      *param_4 = 0;
      func_0x0001082e38ac();
      FUN_10810a400(&puStack_98);
      FUN_1082764bc(&lStack_78);
      FUN_108281b98(&uStack_80);
      uStack_88 = 0;
      *param_1 = puVar5;
      FUN_1082e1f7c(&uStack_88);
      func_0x0001082e37d4();
    }
    else {
      do {
        func_0x0001082e3888();
      } while (extraout_w10 != 0);
      lVar7 = *param_3;
      uVar3 = *(undefined4 *)(lVar7 + 0xcc);
      puStack_b8 = puVar5;
      func_0x0001082e3870();
      uStack_e0 = uStack_a0;
      lStack_d8 = lStack_a8;
      uStack_c0 = 0;
      puStack_b8 = (undefined8 *)0x0;
      *param_3 = 0;
      uStack_c8 = (undefined4)param_3[1];
      uStack_c4 = *(undefined2 *)((long)param_3 + 0xc);
      lStack_a8 = 0;
      uStack_a0 = 0;
      lVar1 = *param_4;
      lVar2 = param_4[1];
      *param_4 = 0;
      lStack_d0 = lVar7;
      puStack_98 = puVar5;
      FUN_1082b1dfc();
      lStack_78 = lVar1;
      lStack_70 = lVar2;
      lStack_68 = lVar7;
      FUN_1082e38e0(puVar6,&puStack_98,&lStack_78,0);
      FUN_10810a400(&lStack_78);
      FUN_108281b98(&puStack_98);
      lVar2 = lStack_d0;
      lVar1 = lStack_d8;
      uVar4 = uStack_e0;
      *puVar6 = &PTR_FUN_110a38e50;
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_e0 = 0;
      *(undefined1 *)(puVar6 + 7) = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      puVar6[8] = lVar1;
      puVar6[9] = lVar2;
      puVar6[10] = uVar4;
      *(undefined4 *)(puVar6 + 0xb) = uVar3;
      FUN_10828ea04(&uStack_88);
      FUN_1082764bc(&uStack_80);
      func_0x0001082e37d4();
      *(undefined2 *)(puVar6 + 0xc) = uStack_c4;
      *(undefined4 *)((long)puVar6 + 100) = uStack_c8;
      *param_1 = puVar6;
      func_0x0001082e3838();
      FUN_10828ea04(&uStack_e0);
      FUN_1082764bc(&lStack_d8);
      FUN_1082764bc(&lStack_d0);
      func_0x000108114364(&uStack_c0);
      func_0x0001082e38cc();
    }
  }
  FUN_1082764bc(&lStack_a8);
  FUN_10828ea04(&uStack_a0);
  return;
}



/* Entry: 1082e2774; end: 1082e279b;  */

undefined8 * FUN_1082e2774(undefined8 *param_1)

{
  FUN_1082e36f4(param_1 + 7);
  *param_1 = &PTR_FUN_110a38fd0;
  FUN_108281b98(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1082e279c; end: 1082e279f;  */

undefined8 * FUN_1082e279c(undefined8 *param_1)

{
  FUN_1082e36f4(param_1 + 7);
  *param_1 = &PTR_FUN_110a38fd0;
  FUN_108281b98(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1082e27a0; end: 1082e27b3;  */

void FUN_1082e27a0(void)

{
  FUN_1082e2774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e27b4; end: 1082e2813;  */

bool FUN_1082e27b4(undefined1 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  FUN_1082a38f4();
  piVar1 = (int *)(param_2 + 0xa4);
  if (*(long *)(param_2 + 0x10) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x10) + 0x94);
  }
  iVar2 = *piVar1;
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0xa4);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x94);
  }
  iVar3 = *piVar1;
  *param_1 = 0;
  return iVar2 == iVar3;
}



/* Entry: 1082e2814; end: 1082e2843;  */

void FUN_1082e2814(void)

{
  code *extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082e3780();
  func_0x0001082e3814(*(undefined8 *)(unaff_x20 + 0x40));
  (*extraout_x8)();
  FUN_1082b33e8();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082e2844; end: 1082e287f;  */

undefined1 FUN_1082e2844(void)

{
  undefined1 uVar1;
  long *plVar2;
  code *extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082e3780();
  plVar2 = *(long **)(unaff_x20 + 0x40);
  func_0x0001082e3814();
  (*extraout_x8)();
  uVar1 = *(undefined1 *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xcb);
  *unaff_x19 = 0;
  return uVar1;
}



/* Entry: 1082e2880; end: 1082e2943;  */

undefined1 * FUN_1082e2880(long param_1,long *param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long *plStack_40;
  undefined8 uStack_38;
  
  pplVar2 = &plStack_40;
  if (((param_2 == (long *)0x0) ||
      (func_0x0001082e3790(*(undefined8 *)(param_1 + 0x30)), !(bool)in_ZR)) ||
     (plVar1 = param_2, (**(code **)(*param_2 + 0x40))(), (int)plVar1 != 0)) {
    if (*(code **)(param_3 + 0x30) != (code *)0x0) {
      (**(code **)(param_3 + 0x30))(*(undefined8 *)(param_3 + 0x38),0);
    }
    if (*(code **)(param_3 + 0x18) != (code *)0x0) {
      (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_3 + 0x28));
    }
    pplVar2 = (long **)0x0;
  }
  else {
    func_0x0001082e38a0(&uStack_38);
    plStack_40 = param_2;
    FUN_10828f4c4(&plStack_40,uStack_38,0,param_3,0);
    func_0x0001082e37cc();
  }
  return (undefined1 *)pplVar2;
}



/* Entry: 1082e2944; end: 1082e29cf;  */

void FUN_1082e2944(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082e3840();
  if (*(long *)(unaff_x19 + 0x10) == 0) {
LAB_1082e29a0:
    uVar1 = 0;
    if (*(long *)(unaff_x19 + 8) == 0) goto LAB_1082e29b4;
  }
  else {
    (**(code **)(*param_3 + 0x18))();
    if ((param_3 == (long *)0x0) ||
       (*(int *)(unaff_x19 + 0x20) != *(int *)(*(long *)(unaff_x19 + 0x10) + 0xcc))) {
      FUN_10827a5a4(unaff_x19 + 0x10,0);
      func_0x0001082e38c0();
      goto LAB_1082e29a0;
    }
  }
  do {
    func_0x0001082e37bc();
    uVar1 = extraout_x8;
  } while (extraout_w11 != 0);
LAB_1082e29b4:
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082e29d0; end: 1082e2a1b;  */

void FUN_1082e29d0(void)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082e3840();
  FUN_10827a5a4(unaff_x19 + 0x10,0);
  func_0x0001082e38c0();
  uVar1 = 0;
  if (*(long *)(unaff_x19 + 8) != 0) {
    do {
      func_0x0001082e37bc();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082e2a1c; end: 1082e2a47;  */

void FUN_1082e2a1c(void)

{
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082e3780();
  FUN_1082aa3f0(*(undefined8 *)(unaff_x20 + 0x40));
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082e2a48; end: 1082e2e77;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082e2a48(long *param_1,long *param_2,undefined4 param_3,long *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  undefined4 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  undefined4 extraout_w9;
  undefined4 uVar5;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long extraout_x10;
  int extraout_w11;
  int extraout_w12;
  int extraout_w12_00;
  long lVar6;
  long alStack_118 [3];
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long alStack_68 [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  uStack_4c = *(undefined4 *)((long)param_2 + 0x1c);
  alStack_68[2] = *param_4;
  *param_4 = 0;
  alStack_68[1] = 0;
  uStack_50 = param_3;
  FUN_10810a400(alStack_68 + 1);
  if ((param_5 == 0) || (func_0x0001082e3790(param_2[6]), !(bool)in_ZR)) {
    *param_1 = 0;
  }
  else {
    func_0x0001082e38a0(alStack_68);
    lStack_e8 = param_5;
    FUN_10828ae78(&lStack_a8,alStack_68 + 2);
    lStack_78 = param_2[4];
    uStack_90 = 0;
    if (lStack_a8 != 0) {
      do {
        func_0x0001082e37bc();
        lStack_78 = extraout_x8;
        uStack_90 = extraout_x9;
      } while (extraout_w11 != 0);
    }
    uStack_88 = 0;
    if (CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) != 0) {
      do {
        func_0x0001082e3878();
        lStack_78 = extraout_x8_00;
        uStack_88 = extraout_x9_00;
      } while (extraout_w12 != 0);
    }
    uStack_80 = uStack_98;
    FUN_1082a7cb4(&lStack_70,&lStack_e8,&uStack_90,1,1,0,*(undefined1 *)(alStack_68[0] + 0xcb),0,1);
    func_0x00010828afb8(&uStack_90);
    func_0x00010828afb8(&lStack_a8);
    if (lStack_70 == 0) {
      *param_1 = 0;
    }
    else {
      if (0x23 < *(uint *)(lStack_70 + 0x30)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082e2d64);
        (*pcVar2)();
      }
      uStack_a0 = *(undefined4 *)(&UNK_10df16838 + (ulong)*(uint *)(lStack_70 + 0x30) * 4);
      lStack_a8 = 0;
      uVar5 = uStack_4c;
      if (alStack_68[2] != 0) {
        do {
          func_0x0001082e3878();
          lStack_a8 = extraout_x10;
          uStack_a0 = extraout_w8;
          uVar5 = extraout_w9;
        } while (extraout_w12_00 != 0);
      }
      uStack_9c = (undefined2)uVar5;
      uStack_9a = (undefined2)((uint)uVar5 >> 0x10);
      func_0x00010835c5d8(alStack_68 + 2,&lStack_a8);
      FUN_10810a400(&lStack_a8);
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x90))(param_2);
      FUN_1082e0d0c(&lStack_a8,param_5,param_2,plVar3,0);
      lStack_c0 = lStack_a8;
      lStack_a8 = 0;
      uStack_b8 = uStack_a0;
      uStack_b4 = uStack_9c;
      FUN_1082cdd5c(&lStack_b0,&lStack_c0,*(undefined4 *)((long)param_2 + 0x1c),0x113254e20,0,0);
      FUN_1082764bc(&lStack_c0);
      lStack_d0 = lStack_b0;
      lStack_b0 = 0;
      FUN_10828ae78(&lStack_e8,param_2 + 2);
      FUN_10828ae78(&lStack_100,alStack_68 + 2);
      FUN_10828b764(&uStack_c8,&lStack_d0,&lStack_e8,&lStack_100);
      func_0x0001082e3830();
      func_0x00010828afb8(&lStack_e8);
      if (lStack_d0 != 0) {
        func_0x0001082e3774();
      }
      alStack_118[2] = uStack_c8;
      lVar4 = lStack_70;
      FUN_1082bdc90(lStack_70,alStack_118 + 2);
      func_0x0001082e38d4();
      if (lVar4 != 0) {
        func_0x0001082e3774();
      }
      do {
        func_0x0001082e3888();
        lVar1 = lStack_70;
      } while (extraout_w10 != 0);
      lVar6 = *(long *)(lStack_70 + 0x10);
      alStack_118[0] = param_5;
      if (lVar6 != 0) {
        do {
          func_0x0001082e3888();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001082e3870();
      lStack_100 = alStack_68[2];
      alStack_118[0] = 0;
      uStack_e0 = *(undefined4 *)(lVar1 + 0x18);
      uStack_dc = *(undefined2 *)(lVar1 + 0x1c);
      uStack_f8 = CONCAT44(uStack_4c,uStack_50);
      alStack_68[2] = 0;
      lStack_e8 = lVar6;
      lStack_48 = param_5;
      func_0x0001082e38ac();
      FUN_10810a400(&lStack_100);
      func_0x0001082e37dc();
      func_0x0001082e3868();
      alStack_118[1] = 0;
      *param_1 = lVar4;
      FUN_1082e1f7c(alStack_118 + 1);
      func_0x0001082e37cc();
      func_0x000108114364(alStack_118);
      lVar4 = lStack_b0;
      lStack_b0 = 0;
      if (lVar4 != 0) {
        func_0x0001082e3774();
      }
      FUN_1082764bc(&lStack_a8);
      lVar4 = lStack_70;
      lStack_70 = 0;
      if (lVar4 != 0) {
        func_0x0001082e3774();
      }
    }
    FUN_1082764bc(alStack_68);
  }
  FUN_10810a400(alStack_68 + 2);
  return;
}



/* Entry: 1082e2e78; end: 1082e2fbf;  */

void FUN_1082e2e78(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined8 uStack_48;
  
  FUN_1082e29d0(&uStack_80,param_2 + 0x38);
  uVar1 = uStack_80;
  uStack_70 = *(undefined4 *)(param_2 + 100);
  uStack_6c = *(undefined2 *)(param_2 + 0x60);
  uStack_80 = 0;
  uStack_78 = uVar1;
  puVar2 = &uStack_80;
  FUN_1082764bc();
  uVar4 = *param_3;
  *param_3 = 0;
  uStack_a0 = 0;
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  uStack_98 = uVar4;
  func_0x0001082e3870();
  puVar3 = &uStack_78;
  uStack_48 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x0001082e3878();
      puVar3 = extraout_x8;
      uStack_48 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_78 = 0;
  uStack_50 = *(undefined4 *)(puVar3 + 1);
  uStack_4c = *(undefined2 *)((long)puVar3 + 0xc);
  uStack_98 = 0;
  uStack_60 = uStack_90;
  uStack_58 = uVar1;
  uStack_68 = uVar4;
  func_0x0001082e38ac(puVar2,&uStack_48,param_4,&uStack_58,&uStack_68);
  FUN_10810a400(&uStack_68);
  func_0x0001082e37dc();
  func_0x0001082e3868();
  uStack_88 = 0;
  *param_1 = (long)puVar2;
  FUN_1082e1f7c(&uStack_88);
  FUN_10810a400(&uStack_98);
  FUN_10810a400(&uStack_a0);
  func_0x0001082e3860();
  return;
}



/* Entry: 1082e2fc0; end: 1082e313b;  */

void FUN_1082e2fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  long lVar1;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x0001082e37a4();
  if (lVar1 == 0) {
    lStack_68 = 0;
    (*param_7)(param_8,&lStack_68);
    lVar1 = lStack_68;
    lStack_68 = 0;
  }
  else {
    lStack_78 = lVar1;
    FUN_1082e313c(auStack_88,param_1,lVar1);
    FUN_10828ae78(auStack_a0,param_1 + 0x10);
    FUN_1082a72f8(&lStack_70,&lStack_78,auStack_88,auStack_a0);
    func_0x00010828afb8(auStack_a0);
    func_0x0001082e3860();
    if (lStack_70 == 0) {
      lStack_a8 = 0;
      (*param_7)(param_8,&lStack_a8);
      lVar1 = lStack_a8;
      lStack_a8 = 0;
      if (lVar1 != 0) {
        func_0x0001082e3774();
      }
    }
    else {
      FUN_1082bbd28(lStack_70,lVar1,param_2,&uStack_60,param_5,param_6,param_7,param_8);
    }
    lVar1 = lStack_70;
    lStack_70 = 0;
  }
  if (lVar1 != 0) {
    func_0x0001082e3774();
  }
  return;
}



/* Entry: 1082e313c; end: 1082e318f;  */

void FUN_1082e313c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  FUN_1082e2944(&uStack_28,param_2 + 0x38);
  uVar3 = uStack_28;
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined2 *)(param_2 + 0x60);
  uStack_28 = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined2 *)((long)param_1 + 0xc) = uVar2;
  func_0x0001082e37cc();
  return;
}



/* Entry: 1082e3190; end: 1082e3327;  */

void FUN_1082e3190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,code *param_11,long param_12)

{
  long lVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1;
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x0001082e37a4();
  if (lVar1 == 0) {
    lStack_78 = 0;
    (*param_11)(param_12,&lStack_78);
    lVar1 = lStack_78;
    lStack_78 = 0;
  }
  else {
    lStack_88 = lVar1;
    FUN_1082e313c(auStack_98,param_1,lVar1);
    FUN_10828ae78(auStack_b0,param_1 + 0x10);
    FUN_1082a72f8(&lStack_80,&lStack_88,auStack_98,auStack_b0);
    func_0x0001082e3830();
    func_0x0001082e37dc();
    if (lStack_80 == 0) {
      uStack_b8 = 0;
      (*param_11)(param_12,&uStack_b8);
      func_0x0001082e38d4();
      if (param_12 != 0) {
        func_0x0001082e3774();
      }
    }
    else {
      uStack_c0 = *param_4;
      *param_4 = 0;
      FUN_1082bc9b0(lStack_80,lVar1,param_2,param_3,&uStack_c0,&uStack_70,param_7,param_8,param_9);
      func_0x0001082e3838();
    }
    lVar1 = lStack_80;
    lStack_80 = 0;
  }
  if (lVar1 != 0) {
    func_0x0001082e3774();
  }
  return;
}



/* Entry: 1082e3328; end: 1082e33a3;  */

void FUN_1082e3328(void)

{
  int extraout_w11;
  undefined1 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082e3780();
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    FUN_10827a578(unaff_x20 + 0x40);
    FUN_1082a8754(*(undefined8 *)(unaff_x20 + 0x50));
    FUN_1082945a4((undefined8 *)(unaff_x20 + 0x50),0);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    do {
      func_0x0001082e37bc();
    } while (extraout_w11 != 0);
  }
  *unaff_x19 = 0;
  func_0x0001082e37cc();
  return;
}



/* Entry: 1082e33a4; end: 1082e34fb;  */

void FUN_1082e33a4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 auStack_70 [16];
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  if ((param_3 == 0) || (func_0x0001082e3790(*(undefined8 *)(param_2 + 0x30)), !(bool)in_ZR)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)((long)param_1 + 0xc) = 0x3210;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    if ((int)param_5 == 0) {
      func_0x0001082e38b4(&uStack_50);
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      FUN_1082e34fc();
      uVar1 = uStack_50;
      if ((int)param_4 != 0) {
        uStack_50 = 0;
        uStack_80 = uVar1;
        uStack_78 = uStack_48;
        uStack_74 = uStack_44;
        FUN_1082e15c8(auStack_70,param_3,&uStack_80,*(undefined4 *)(param_2 + 0x28));
        FUN_108279f20(&uStack_50,auStack_70);
        func_0x0001082e37d4();
        FUN_1082764bc(&uStack_80);
      }
      func_0x0001082e37f4();
      *(undefined4 *)(param_1 + 2) = uVar2;
      puVar3 = &uStack_50;
    }
    else {
      func_0x0001082e38b4(auStack_60);
      FUN_1082dff78(&uStack_50,param_3,auStack_60,param_4,param_5,&UNK_10f487e38,0x11);
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      FUN_1082e34fc();
      func_0x0001082e37f4();
      *(undefined4 *)(param_1 + 2) = uVar2;
      func_0x0001082e3898();
      puVar3 = auStack_60;
    }
    FUN_1082764bc(puVar3);
  }
  return;
}



/* Entry: 1082e34fc; end: 1082e3517;  */

undefined4 FUN_1082e34fc(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x1b) {
    return *(undefined4 *)(&UNK_10df168c8 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e3518);
  (*pcVar1)();
}



/* Entry: 1082e3518; end: 1082e361b;  */

void FUN_1082e3518(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  
  lVar1 = *(long *)(param_3 + 8);
  if ((lVar1 == 0) || (func_0x0001082e3790(*(undefined8 *)(param_2 + 0x30)), !(bool)in_ZR)) {
    *param_1 = 0;
  }
  else {
    FUN_1082e0d0c(&uStack_78,lVar1,param_2,*(int *)((long)param_4 + 0x14) != 0,0);
    uStack_60 = uStack_78;
    uStack_58 = uStack_70;
    uStack_54 = uStack_6c;
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_4[2];
    uStack_78 = 0;
    FUN_1082e128c(param_1,lVar1,&uStack_60,*(undefined4 *)(param_2 + 0x1c),&uStack_90,param_5,
                  param_6,param_7,param_8);
    func_0x0001082e3898();
    FUN_1082764bc(&uStack_78);
  }
  return;
}



/* Entry: 1082e361c; end: 1082e3683;  */

bool FUN_1082e361c(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  func_0x00010828f3d0();
  if ((param_1 & 1) == 0) {
    func_0x0001082e3820();
    if (iVar2 == 6) {
      bVar1 = true;
    }
    else {
      func_0x0001082e3850();
      bVar1 = iVar2 == 7;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1082e3684; end: 1082e36f3;  */

undefined8 FUN_1082e3684(void)

{
  return 0;
}



/* Entry: 1082e36f4; end: 1082e373f;  */

long FUN_1082e36f4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1082a8754();
  }
  FUN_10828ea04((long *)(param_1 + 0x18));
  FUN_1082764bc(param_1 + 0x10);
  FUN_1082764bc(param_1 + 8);
  return param_1;
}



/* Entry: 1082e3740; end: 1082e3773;  */

bool FUN_1082e3740(int param_1)

{
  bool bVar1;
  
  func_0x0001082e3820();
  if (param_1 == 6) {
    bVar1 = true;
  }
  else {
    func_0x0001082e3850();
    bVar1 = param_1 == 7;
  }
  return bVar1;
}



/* Entry: 1082e3774; end: 1082e38df;  */

void FUN_1082e3774(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082e377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082e38e0; end: 1082e391b;  */

void FUN_1082e38e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1083b5f80(param_1,param_3,param_4);
  *param_1 = &PTR_FUN_110a38fd0;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[6] = uVar1;
  return;
}



/* Entry: 1082e391c; end: 1082e3ba7;  */

ulong FUN_1082e391c(undefined8 param_1,long param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  undefined1 auStack_110 [56];
  ulong uStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 == 0) {
    return 0;
  }
  func_0x0001082e4380();
  func_0x0001082e42f8();
  if (!(bool)in_ZR) {
    return 0;
  }
  lStack_48 = unaff_x20[4];
  uStack_54 = (undefined4)unaff_x20[5];
  uStack_50 = 0;
  puVar2 = &uStack_54;
  FUN_108331598(puVar2,param_3);
  if (((ulong)puVar2 & 1) != 0) {
    return 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_4 == 0) {
    FUN_1083313f4(&uStack_98,&uStack_54,unaff_x20 + 2,&uStack_80);
    uVar3 = uStack_98;
    uVar4 = uStack_98;
joined_r0x0001082e39dc:
    if (uVar4 != 0) {
      func_0x0001082e4338(&uStack_98,param_2);
      if (uStack_98 == 0) {
        uVar4 = 0;
      }
      else {
        uStack_b8 = 0;
        if (unaff_x20[2] != 0) {
          do {
            func_0x0001082e430c();
            uStack_b8 = extraout_x8;
          } while (extraout_w10 != 0);
        }
        FUN_10828adb8(auStack_b0);
        func_0x0001082e4354();
        uStack_d8 = uStack_98;
        uStack_98 = 0;
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        lStack_c8 = param_2;
        FUN_1082a72f8(&uStack_c0,&lStack_c8,&uStack_d8,auStack_b0);
        FUN_1082764bc(&uStack_d8);
        uVar4 = uStack_c0;
        if (uStack_c0 == 0) {
          uVar4 = 0;
        }
        else {
          FUN_10827eb2c(auStack_110,&uStack_80);
          FUN_1082ba0d4(uVar4,param_2,auStack_110,0);
          func_0x00010827ec18(auStack_110);
          if (((uVar4 & 1) != 0) && (uVar3 != 0)) {
            FUN_1083923d8(uVar3,param_3);
            uVar3 = 0;
            (**(code **)(*unaff_x20 + 0xf8))();
          }
          uVar1 = uStack_c0;
          uStack_c0 = 0;
          if (uVar1 != 0) {
            func_0x0001082e431c();
          }
        }
        func_0x00010828afb8(auStack_b0);
      }
      FUN_1082764bc(&uStack_98);
      goto LAB_1082e3af8;
    }
  }
  else {
    uVar4 = param_3;
    func_0x00010821afec(param_3,unaff_x20 + 2);
    if ((int)uVar4 != 0) {
      uVar4 = param_3;
      FUN_108330de8(param_3,&uStack_80);
      uVar3 = 0;
      uVar4 = uVar4 & 1;
      goto joined_r0x0001082e39dc;
    }
    uVar3 = 0;
  }
  uVar4 = 0;
LAB_1082e3af8:
  func_0x0001082e4374();
  if (uVar3 != 0) {
    func_0x0001082e435c();
  }
  return uVar4;
}



/* Entry: 1082e3ba8; end: 1082e3c53;  */

void FUN_1082e3ba8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    func_0x0001082e4380();
    func_0x0001082e42f8();
    if (((bool)in_ZR) && (uVar1 = param_4, FUN_10821a6d8(), (int)uVar1 == 0)) {
      uStack_38 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack_40 = 0;
      puVar2 = &uStack_40;
      func_0x000108219544(puVar2,param_4);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = &uStack_40;
        FUN_108279bb8(puVar2,param_4);
        if ((int)puVar2 != 0) {
          do {
            func_0x0001082e430c();
          } while (extraout_w10 != 0);
          func_0x0001082e4344();
          return;
        }
        FUN_1082e3c54(param_1);
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082e3c54; end: 1082e3e17;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082e3c54(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined8 in_x7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long alStack_b0 [3];
  undefined4 uStack_98;
  undefined2 uStack_94;
  long lStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  long lStack_48;
  
  if (param_3 != 0) {
    func_0x0001082e4380();
    func_0x0001082e42f8();
    if ((bool)in_ZR) {
      func_0x0001082e4338(&lStack_80,param_3);
      alStack_b0[2] = lStack_80;
      puVar1 = (undefined1 *)(lStack_80 + 0x9c);
      lStack_80 = 0;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      FUN_1082b28ac(&lStack_90,param_3,alStack_b0 + 2,0,*param_4,param_4[1],1,*puVar1,in_x7,
                    &UNK_10f487e4a,0x17);
      FUN_1082764bc(alStack_b0 + 2);
      lVar2 = lStack_90;
      if (lStack_90 == 0) {
        *param_1 = 0;
      }
      else {
        do {
          func_0x0001082e430c();
        } while (extraout_w10 != 0);
        uVar3 = 0x68;
        alStack_b0[0] = param_3;
        __Znwm();
        alStack_b0[0] = 0;
        lStack_90 = 0;
        lStack_58 = lVar2;
        uStack_50 = uStack_88;
        uStack_4c = uStack_84;
        uStack_68 = 0;
        lStack_48 = param_3;
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          do {
            func_0x0001082e430c();
            uStack_68 = extraout_x8;
          } while (extraout_w10_00 != 0);
        }
        uStack_60 = *(undefined8 *)(unaff_x20 + 0x18);
        FUN_1082e230c(uVar3,&lStack_48,0,&lStack_58,&uStack_68);
        func_0x0001082e4354();
        FUN_1082764bc(&lStack_58);
        FUN_108281b98(&lStack_48);
        alStack_b0[1] = 0;
        *param_1 = uVar3;
        FUN_1082e1f7c(alStack_b0 + 1);
        func_0x000108114364(alStack_b0);
      }
      FUN_1082764bc(&lStack_90);
      FUN_1082764bc(&lStack_80);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082e3e18; end: 1082e3e27;  */

void FUN_1082e3e18(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1082e3e28; end: 1082e3e9f;  */

/* WARNING: Removing unreachable block (ram,0x00010830afb0) */

void FUN_1082e3e28(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  plVar2 = *(long **)(param_2 + 0x30);
  if ((((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 0x30))(), plVar2 != (long *)0x0)) &&
      (*(int *)(param_4 + 0x10) != 0)) && (*(int *)(param_4 + 0x14) != 0)) {
    if (plVar2 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      uStack_38 = 0x3f000000;
      uStack_40 = 0;
      FUN_10827b474(&lStack_28);
      if (lStack_28 == 0) {
        *param_1 = 0;
      }
      else {
        FUN_108276444(&uStack_40,&lStack_28);
        uVar1 = uStack_40;
        uStack_40 = 0;
        *param_1 = uVar1;
        FUN_1082768c4(&uStack_40);
      }
      FUN_108276880(&lStack_28);
    }
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082e3ea0; end: 1082e408b;  */

long FUN_1082e3ea0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar4;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  
  if (((param_2 != 0) && (FUN_1082e42f8(*(undefined8 *)(param_1 + 0x30)), (bool)in_ZR)) &&
     (uVar3 = param_3, func_0x0001082e421c(), (int)uVar3 != 0)) {
    iVar2 = (int)param_1 + 0x10;
    func_0x0001082e421c();
    if (iVar2 != 0) {
      func_0x0001082e4338(&uStack_68,param_2,param_1);
      uStack_88 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x0001082e430c();
          uStack_88 = extraout_x8;
        } while (extraout_w10 != 0);
      }
      FUN_10828adb8(auStack_80);
      FUN_10810a400(&uStack_88);
      uStack_a8 = uStack_68;
      uStack_68 = 0;
      uStack_a0 = uStack_60;
      uStack_9c = uStack_5c;
      lStack_98 = param_2;
      FUN_1082a72f8(&lStack_90,&lStack_98,&uStack_a8,auStack_80);
      FUN_1082764bc(&uStack_a8);
      lVar4 = lStack_90;
      if (lStack_90 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1082a0a90(auStack_100,param_3);
        FUN_10829082c(auStack_e0,auStack_100,param_4,param_5);
        FUN_1082ba0d4(lVar4,param_2,auStack_e0,param_6 & 0xffffffff | param_7 << 0x20);
        func_0x00010827ec18(auStack_e0);
        func_0x00010828afb8(auStack_100);
        lVar1 = lStack_90;
        lStack_90 = 0;
        if (lVar1 != 0) {
          func_0x0001082e431c();
        }
      }
      func_0x00010828afb8(auStack_80);
      FUN_1082764bc(&uStack_68);
      return lVar4;
    }
  }
  return 0;
}



/* Entry: 1082e408c; end: 1082e40f7;  */

undefined8 FUN_1082e408c(long param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  
  if ((param_2 == (long *)0x0) ||
     (plVar1 = param_2, (**(code **)(*param_2 + 0x40))(), ((ulong)plVar1 & 1) == 0)) {
    plVar1 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar1 + 0x40))();
    if ((((ulong)plVar1 & 1) == 0) &&
       ((param_2 == (long *)0x0 || (FUN_1082e42f8(*(undefined8 *)(param_1 + 0x30)), (bool)in_ZR))))
    {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1082e40f8; end: 1082e4207;  */

void FUN_1082e40f8(undefined8 *param_1,undefined8 param_2,long param_3,int param_4,long *param_5)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x20;
  
  if ((((param_4 == 0) || (*param_5 == 0)) || (param_3 == 0)) ||
     ((func_0x0001082e4380(), extraout_x8 == 0 || (func_0x0001082e42f8(), !(bool)in_ZR)))) {
    *param_1 = 0;
    return;
  }
  lVar1 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  if (uVar3 == 0) {
    FUN_108343afc();
  }
  if ((int)lVar1 == param_4) {
    FUN_108343f98();
    if ((uVar3 & 1) == 0) {
      if (0x1a < *(uint *)(unaff_x20 + 3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082e41fc);
        (*pcVar2)();
      }
      if ((1 << (ulong)(*(uint *)(unaff_x20 + 3) & 0x1f) & 0x7affffdU) != 0) goto LAB_1082e41c8;
    }
    do {
      func_0x0001082e430c();
    } while (extraout_w10 != 0);
    func_0x0001082e4344();
  }
  else {
LAB_1082e41c8:
    *param_5 = 0;
    (**(code **)(*unaff_x20 + 0x100))(param_1);
    func_0x0001082e436c();
  }
  return;
}



/* Entry: 1082e4208; end: 1082e425f;  */

void FUN_1082e4208(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e420c);
  (*pcVar1)();
}



/* Entry: 1082e4260; end: 1082e42ab;  */

long * FUN_1082e4260(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082e42ac; end: 1082e42f7;  */

long * FUN_1082e42ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082e42f8; end: 1082e43a3;  */

void FUN_1082e42f8(void)

{
  return;
}



/* Entry: 1082e43a4; end: 1082e43ef;  */

long * FUN_1082e43a4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082e43f0; end: 1082e4417;  */

void FUN_1082e43f0(void)

{
  return;
}



/* Entry: 1082e4418; end: 1082e449b;  */

undefined8 FUN_1082e4418(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10810a400(param_1 + 0x20);
  FUN_10810a400(param_1 + 8);
  func_0x0001082e21a8();
  if (param_1 != 0) {
    FUN_1082e1b00();
  }
  return unaff_x19;
}



/* Entry: 1082e449c; end: 1082e45c7;  */

void FUN_1082e449c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_78 [56];
  long in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar5 = (long *)param_2[0xd];
  iVar4 = (int)param_5;
  if (plVar5 != (long *)0x0) {
    if (iVar4 == 0) {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_1 = lVar6;
      lVar6 = plVar5[1];
      *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)plVar5 + 0xc);
      *(int *)(param_1 + 1) = (int)lVar6;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)plVar5 + 0x1c);
    }
    else {
      if (*plVar5 != 0) {
        piVar1 = (int *)(*plVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1082dff78(&stack0xffffffffffffffd0,param_3,&stack0xffffffffffffffc0,0,param_5,
                    &UNK_10f487e62,0x34);
      lVar6 = param_2[0xd];
      *param_1 = in_stack_ffffffffffffffd0;
      *(int *)(param_1 + 1) = (int)in_stack_ffffffffffffffd8;
      *(short *)((long)param_1 + 0xc) = (short)((ulong)in_stack_ffffffffffffffd8 >> 0x20);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar6 + 0x1c);
      FUN_1082764bc(&stack0xffffffffffffffd0);
      FUN_1082764bc(&stack0xffffffffffffffc0);
    }
    return;
  }
  if (iVar4 == 0) {
    plVar5 = param_2 + 6;
    (**(code **)(*param_2 + 0x90))(param_2);
    FUN_10833043c(auStack_78,plVar5);
    FUN_1082b8344(param_1,param_3,auStack_78,&UNK_10f487d20,0x29,(uint)param_4 | (uint)param_2);
  }
  else {
    FUN_10833043c(auStack_78,param_2 + 6);
    FUN_1082b8914(param_1,param_3,auStack_78,param_4,1,iVar4 != 1);
  }
  FUN_108330548(auStack_78);
  return;
}



/* Entry: 1082e45c8; end: 1082e460b;  */

undefined8 FUN_1082e45c8(void)

{
  return 1;
}



/* Entry: 1082e460c; end: 1082e468f;  */

void FUN_1082e460c(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  FUN_1083b7d24(param_2 + 0x30,1);
  lVar1 = *param_1;
  if (*param_3 == 0) {
    param_2 = param_2 + 0x38;
    FUN_1083686ac(param_2,0,1);
    FUN_1082e46c0(lVar1 + 0x60,param_2);
  }
  else {
    FUN_1082e4690(lVar1 + 0x60,param_3);
  }
  return;
}



/* Entry: 1082e4690; end: 1082e46bf;  */

undefined8 FUN_1082e4690(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_1082e46c0(param_1,uVar1);
  return param_1;
}



/* Entry: 1082e46c0; end: 1082e46d7;  */

void FUN_1082e46c0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 != (long *)0x0) {
    func_0x00010833b7ec();
    plVar2 = plVar1;
    FUN_10833b630(plVar1,0);
    func_0x00010833b7d0();
    if ((int)plVar2 != 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    return;
  }
  return;
}



/* Entry: 1082e46d8; end: 1082e482b;  */

void FUN_1082e46d8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  
  if (((param_2 == 0) || (*param_4 == 0)) || (uVar2 = param_3, FUN_10821a6d8(), (int)uVar2 != 0)) {
    *param_1 = 0;
  }
  else {
    lVar3 = *param_4;
    if (lVar3 != 0) {
      do {
        FUN_1082e4d80();
      } while (extraout_w10 != 0);
    }
    alStack_80[0] = lVar3;
    FUN_1082e0d0c(&uStack_58,param_2);
    FUN_10829bb10(alStack_80);
    uStack_68 = uStack_58;
    uVar1 = *(undefined4 *)(*param_4 + 0x28);
    uStack_58 = 0;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    if (*(long *)(*param_4 + 0x10) != 0) {
      do {
        FUN_1082e4d80();
      } while (extraout_w10_00 != 0);
    }
    FUN_10828adb8(alStack_80);
    FUN_1082e482c(param_1,param_2,param_3,uVar1,&uStack_68,alStack_80,param_5);
    func_0x00010828afb8(alStack_80);
    func_0x0001082e4db4();
    func_0x0001082e4dac();
    FUN_1082764bc(&uStack_58);
  }
  return;
}



/* Entry: 1082e482c; end: 1082e492f;  */

void FUN_1082e482c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                  long *param_5,undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uStack_70;
  int *piStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  long *plStack_48;
  
  if ((((param_2 == (long *)0x0) ||
       (uStack_4c = param_4, plStack_48 = param_2, (**(code **)(*param_2 + 0x40))(),
       ((ulong)param_2 & 1) != 0)) || (plVar5 = (long *)*param_5, plVar5 == (long *)0x0)) ||
     ((**(code **)(*plVar5 + 0x18))(), plVar5 == (long *)0x0)) {
    *param_1 = 0;
  }
  else {
    if (0x23 < *(uint *)(param_6 + 2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082e491c);
      (*pcVar4)();
    }
    uStack_60 = *(undefined4 *)(&UNK_10df16964 + (ulong)*(uint *)(param_6 + 2) * 4);
    uStack_5c = *(undefined4 *)((long)param_6 + 0x14);
    piStack_68 = (int *)*param_6;
    if (piStack_68 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
        if (bVar2) {
          *piStack_68 = *piStack_68 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_70 = 0;
    FUN_1082e4930(&uStack_58,&plStack_48,param_3,&uStack_4c,param_5,&piStack_68,param_7);
    uVar3 = uStack_58;
    uStack_58 = 0;
    *param_1 = uVar3;
    FUN_1082e4d34(&uStack_58);
    func_0x0001082e4db4();
    FUN_10810a400(&uStack_70);
  }
  return;
}



/* Entry: 1082e4930; end: 1082e49ef;  */

void FUN_1082e4930(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  
  uVar1 = 0x58;
  __Znwm();
  uStack_60 = *in_x3;
  *in_x3 = 0;
  uStack_58 = *(undefined4 *)(in_x3 + 1);
  uStack_54 = *(undefined2 *)((long)in_x3 + 0xc);
  func_0x0001082e4a60();
  *param_1 = uVar1;
  FUN_1082764bc(&uStack_60);
  return;
}



/* Entry: 1082e49f0; end: 1082e4ae7;  */

void FUN_1082e49f0(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined2 uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  int extraout_w11;
  
  if (((param_2 == 0) || (param_3 == (long *)0x0)) ||
     (plVar1 = param_3, (**(code **)(*param_3 + 0x38))(), ((ulong)plVar1 & 1) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = 0x3210;
  }
  else {
    uVar3 = 0;
    if (param_3[9] != 0) {
      do {
        func_0x0001082e4dbc();
        uVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar3;
    *(int *)(param_1 + 1) = (int)param_3[10];
    uVar2 = *(undefined2 *)((long)param_3 + 0x54);
  }
  *(undefined2 *)((long)param_1 + 0xc) = uVar2;
  return;
}



/* Entry: 1082e4ae8; end: 1082e4aeb;  */

undefined8 * FUN_1082e4ae8(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 9);
  *param_1 = &PTR_DAT_110a401d0;
  FUN_10810a400(param_1 + 4);
  return param_1;
}



/* Entry: 1082e4aec; end: 1082e4aff;  */

void FUN_1082e4aec(void)

{
  FUN_1082e4d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e4b00; end: 1082e4b0f;  */

ulong FUN_1082e4b00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x90);
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x98) == 1) {
    return uVar1;
  }
  uVar2 = uVar1 >> 0x20;
  FUN_108320fd8(uVar1);
  FUN_108320fd8(uVar2);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 1082e4b10; end: 1082e4c3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082e4b10(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar4;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  long lStack_48;
  
  uStack_58 = *(undefined8 *)(param_2 + 0x48);
  FUN_1082b2348(&uStack_58);
  lVar4 = *(long *)(param_2 + 0x40);
  if (lVar4 != 0) {
    do {
      FUN_1082e4d80();
    } while (extraout_w10 != 0);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = 0x68;
  alStack_78[0] = lVar4;
  __Znwm();
  alStack_78[0] = 0;
  uVar3 = 0;
  lStack_48 = lVar4;
  if (*(long *)(param_2 + 0x48) != 0) {
    do {
      func_0x0001082e4dbc();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_50 = *(undefined4 *)(param_2 + 0x50);
  uStack_4c = *(undefined2 *)(param_2 + 0x54);
  alStack_78[2] = 0;
  uStack_58 = uVar3;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      FUN_1082e4d80();
      alStack_78[2] = extraout_x8_00;
    } while (extraout_w10_00 != 0);
  }
  uStack_60 = *(undefined8 *)(param_2 + 0x28);
  FUN_1082e230c(uVar2,&lStack_48,uVar1,&uStack_58,alStack_78 + 2);
  FUN_10810a400(alStack_78 + 2);
  func_0x0001082e4dac();
  FUN_108281b98(&lStack_48);
  alStack_78[1] = 0;
  *param_1 = uVar2;
  FUN_1082e1f7c(alStack_78 + 1);
  FUN_10827f63c(alStack_78);
  return;
}



/* Entry: 1082e4c40; end: 1082e4c57;  */

undefined8 FUN_1082e4c40(void)

{
  return 1;
}



/* Entry: 1082e4c58; end: 1082e4d0b;  */

void FUN_1082e4c58(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uStack_50 = 0;
  if (*(long *)(param_2 + 0x48) != 0) {
    do {
      func_0x0001082e4dbc();
      uStack_50 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_48 = *(undefined4 *)(param_2 + 0x50);
  uStack_44 = *(undefined2 *)(param_2 + 0x54);
  FUN_10828ae78(auStack_68,param_2 + 0x20);
  FUN_1082e482c(param_1,uVar1,param_3,uVar2,&uStack_50,auStack_68,param_2 + 0x30);
  func_0x00010828afb8(auStack_68);
  FUN_1082764bc(&uStack_50);
  return;
}



/* Entry: 1082e4d0c; end: 1082e4d33;  */

undefined8 * FUN_1082e4d0c(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 9);
  *param_1 = &PTR_DAT_110a401d0;
  FUN_10810a400(param_1 + 4);
  return param_1;
}



/* Entry: 1082e4d34; end: 1082e4d7f;  */

long * FUN_1082e4d34(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1082e4d80; end: 1082e4dd3;  */

void FUN_1082e4d80(int *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1082e4dd4; end: 1082e4e9b;  */

undefined8 FUN_1082e4dd4(undefined8 param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(*param_2 + 0x10) + 5) == '\x01' && (int)param_2[7] == 1) {
    iVar2 = (int)param_2[4] + 0x40;
    FUN_10828786c();
    if (iVar2 != 0) {
      lVar3 = param_2[4];
      if (*(char *)(lVar3 + 0x38) == '\x04') {
        bVar1 = *(byte *)(lVar3 + 0xe) >> 1;
      }
      else {
        bVar1 = *(byte *)(lVar3 + 0x3b);
      }
      if ((((bVar1 & 1) == 0) && (func_0x0001082e4e70(), (int)lVar3 != 0)) &&
         ((lVar3 = param_2[4], *(char *)(lVar3 + 0x38) != '\x04' ||
          (FUN_108376fe8(), (int)lVar3 != 2)))) {
        return 2;
      }
    }
  }
  return 0;
}



/* Entry: 1082e4e9c; end: 1082e504b;  */

undefined8 FUN_1082e4e9c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lStack_98;
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(*param_2 + 0x20) + 0x54) == '\x01') {
    FUN_10827b938(*(long *)(*param_2 + 0x20),&UNK_10f487e97);
  }
  FUN_108376ad8(auStack_90);
  FUN_108287e50(param_2[7],auStack_90);
  puVar5 = (undefined8 *)param_2[6];
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  uStack_58 = puVar5[1];
  uStack_60 = *puVar5;
  uStack_48 = puVar5[3];
  uStack_50 = puVar5[2];
  uStack_40 = puVar5[4];
  func_0x000108376b14(auStack_80,auStack_90);
  uStack_68 = *(undefined8 *)(lVar1 + 0x24);
  uStack_70 = *(undefined8 *)(lVar1 + 0x1c);
  uVar3 = *(char *)(lVar1 + 0x18) == '\x01';
  if ((bool)uVar3) {
    lVar4 = 200;
    __Znwm();
    FUN_1082e5060();
  }
  else {
    lVar4 = 0xe8;
    __Znwm();
    FUN_1082a3af0(lVar4 + 200,lVar1);
    FUN_1082e5060(lVar4,lVar4 + 200,&uStack_70,&uStack_60,auStack_80,lVar2);
  }
  FUN_10837ca5c(auStack_80[0]);
  uStack_48 = 0;
  lStack_98 = lVar4;
  FUN_1082c0f08(param_2[3],param_2[4],&lStack_98,&uStack_60);
  FUN_10827fb18(&uStack_60);
  lVar1 = lStack_98;
  lStack_98 = 0;
  if (lVar1 != 0) {
    func_0x0001082e72c8();
  }
  FUN_10837ca5c(auStack_90[0]);
  func_0x0001082e73cc(uStack_38);
  if ((bool)uVar3) {
    return 1;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar4);
  FUN_10837ca5c(auStack_80[0]);
  FUN_10837ca5c(auStack_90[0]);
  func_0x0001082e73c4();
  return auStack_90[0];
}



/* Entry: 1082e504c; end: 1082e505f;  */

void FUN_1082e504c(void)

{
  return;
}



/* Entry: 1082e5060; end: 1082e528f;  */

undefined8 *
FUN_1082e5060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam000000011372a828 & 1) == 0) {
    iVar2 = 0x1372a828;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372a820 = iVar2;
      ___cxa_guard_release(0x11372a828);
    }
  }
  iVar2 = iRam000000011372a820;
  param_1[2] = 0;
  param_1[1] = 0;
  *(short *)(param_1 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_110a39208;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xf0 | 1;
  puVar1 = &UNK_10df14cb4;
  if (param_6 != (undefined *)0x0) {
    puVar1 = param_6;
  }
  plVar5 = param_1 + 0x12;
  *plVar5 = (long)(param_1 + 9);
  param_1[8] = puVar1;
  param_1[0x13] = 0x200000000;
  *(undefined4 *)(param_1 + 0x15) = 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_98 = param_4[3];
  uStack_a0 = param_4[2];
  uStack_90 = param_4[4];
  func_0x000108376b14(auStack_88,param_5);
  uStack_70 = param_3[1];
  uStack_78 = *param_3;
  iVar2 = *(int *)(param_1 + 0x13);
  lVar3 = (long)iVar2;
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0x9c) >> 1)) {
    FUN_1082e688c(*plVar5 + (long)iVar2 * 0x48,&uStack_b0);
  }
  else {
    uVar4 = 1;
    FUN_1082e68d0(lVar3,1);
    FUN_1082e688c(lVar3 + (long)*(int *)(param_1 + 0x13) * 0x48,&uStack_b0);
    FUN_1082e6918(plVar5,lVar3,uVar4);
  }
  *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + 1;
  FUN_10837ca5c(auStack_88[0]);
  func_0x0001083773e0(param_5);
  FUN_108364f90(param_4,param_1 + 4,param_5,1);
  *(undefined2 *)((long)param_1 + 0x1a) = 1;
  return param_1;
}



/* Entry: 1082e5290; end: 1082e52ef;  */

long FUN_1082e5290(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x50) * 0x48;
    do {
      FUN_10837ca38(uVar1 + 0x28);
      uVar1 = uVar1 + 0x48;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x48));
  }
  return param_1;
}



/* Entry: 1082e52f0; end: 1082e5327;  */

undefined8 * FUN_1082e52f0(undefined8 *param_1)

{
  FUN_10840f118(param_1 + 0x15);
  FUN_1082e5290(param_1 + 9);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082e5328; end: 1082e533b;  */

void FUN_1082e5328(void)

{
  FUN_1082e52f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e533c; end: 1082e535f;  */

undefined * FUN_1082e533c(void)

{
  return &UNK_10f487eb8;
}



/* Entry: 1082e5360; end: 1082e5497;  */

undefined8 FUN_1082e5360(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x0001082e73e0(param_1,param_2,param_4);
  param_1 = param_1 + 0x30;
  FUN_1082fcb80(param_1,param_2 + 0x30);
  if ((int)param_1 == 0) {
LAB_1082e547c:
    uVar4 = 2;
  }
  else {
    if ((*(byte *)(unaff_x19 + 0x39) >> 2 & 1) != 0) {
      if ((*(int *)(unaff_x19 + 0x98) < 1) || (*(int *)(unaff_x20 + 0x98) < 1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082e5498);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
      FUN_10829dddc(uVar4,*(undefined8 *)(unaff_x20 + 0x90));
      if ((int)uVar4 == 0) goto LAB_1082e547c;
    }
    uVar1 = *(uint *)(unaff_x20 + 0x98);
    uVar6 = (ulong)uVar1;
    lVar7 = *(long *)(unaff_x20 + 0x90);
    uVar3 = *(uint *)(unaff_x19 + 0x98);
    uVar8 = (ulong)uVar3;
    if ((int)((*(uint *)(unaff_x19 + 0x9c) >> 1) - uVar3) < (int)uVar1) {
      FUN_1082e68d0(uVar8,uVar6);
      FUN_1082e6918(unaff_x19 + 0x90,uVar8,uVar6);
      uVar3 = *(uint *)(unaff_x19 + 0x98);
    }
    *(uint *)(unaff_x19 + 0x98) = uVar3 + uVar1;
    lVar5 = *(long *)(unaff_x19 + 0x90) + (long)(int)uVar3 * 0x48 + 0x28;
    lVar7 = lVar7 + 0x28;
    for (uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1)
    {
      uVar9 = *(undefined8 *)(lVar7 + -0x20);
      uVar4 = *(undefined8 *)(lVar7 + -0x28);
      uVar11 = *(undefined8 *)(lVar7 + -0x10);
      uVar10 = *(undefined8 *)(lVar7 + -0x18);
      *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(lVar7 + -8);
      *(undefined8 *)(lVar5 + -0x10) = uVar11;
      *(undefined8 *)(lVar5 + -0x18) = uVar10;
      *(undefined8 *)(lVar5 + -0x20) = uVar9;
      *(undefined8 *)(lVar5 + -0x28) = uVar4;
      func_0x000108376b14(lVar5,lVar7);
      uVar4 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      lVar5 = lVar5 + 0x48;
      lVar7 = lVar7 + 0x48;
    }
    uVar4 = 0;
    *(byte *)(unaff_x19 + 0xa0) = *(byte *)(unaff_x19 + 0xa0) | *(byte *)(unaff_x20 + 0xa0);
  }
  return uVar4;
}



/* Entry: 1082e5498; end: 1082e54a3;  */

void FUN_1082e5498(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082e54a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}



/* Entry: 1082e54a4; end: 1082e5563;  */

void FUN_1082e54a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x88));
    iVar3 = *(int *)(param_1 + 0xbc);
    for (lVar4 = 0; lVar4 < iVar3; lVar4 = lVar4 + 1) {
      lVar5 = 0;
      lVar6 = 0;
      while( true ) {
        if (iVar3 <= lVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1082e5564);
          (*pcVar2)();
        }
        plVar1 = (long *)(*(long *)(param_1 + 0xb0) + lVar4 * 0x10);
        if ((int)plVar1[1] <= lVar6) break;
        FUN_1082a10bc(param_2,*plVar1 + lVar5);
        lVar6 = lVar6 + 1;
        iVar3 = *(int *)(param_1 + 0xbc);
        lVar5 = lVar5 + 0x30;
      }
    }
  }
  return;
}



/* Entry: 1082e5564; end: 1082e557b;  */

uint FUN_1082e5564(uint param_1)

{
  func_0x0001082e73ac();
  return param_1 & 1;
}



/* Entry: 1082e557c; end: 1082e55b3;  */

undefined8 FUN_1082e557c(void)

{
  return 0;
}



/* Entry: 1082e55b4; end: 1082e55cb;  */

uint FUN_1082e55b4(uint param_1)

{
  func_0x0001082e73ac();
  return param_1 >> 1 & 1;
}



/* Entry: 1082e55cc; end: 1082e55db;  */

uint FUN_1082e55cc(long param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 + 0x30;
  FUN_1082fc34c();
  if (*(undefined **)(param_1 + 0x40) != &UNK_10df14cb4) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}



/* Entry: 1082e55dc; end: 1082e57c3;  */

void FUN_1082e55dc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_88 = 0;
  lStack_90 = 0x3f800000;
  lStack_78 = 0;
  lStack_80 = 0x3f800000;
  lStack_70 = 0x103f800000;
  bVar1 = *(byte *)(param_1 + 0x39);
  if ((bVar1 >> 2 & 1) != 0) {
    if (*(int *)(param_1 + 0x98) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082e57c4);
      (*pcVar3)();
    }
    lVar4 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x98) * 0x48 + -0x48;
    FUN_10818cfd0(lVar4,&lStack_90);
    if ((int)lVar4 == 0) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  cVar2 = *(char *)(param_1 + 0xa0);
  plVar5 = param_3;
  FUN_10840f8d0(param_3,0xc9,8);
  lVar4 = param_3[1];
  param_3[1] = (long)(plVar5 + 0x18);
  plVar5[0x18] = (long)FUN_1082e69c8;
  lVar7 = param_3[1];
  param_3[1] = lVar7 + 8;
  *(char *)(lVar7 + 8) = (char)plVar5 - (char)(int)lVar4;
  *param_3 = param_3[1] + 1;
  param_3[1] = param_3[1] + 1;
  *(undefined4 *)(plVar5 + 1) = 0x35;
  *(undefined4 *)(plVar5 + 8) = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110a392b8;
  plVar5[0x16] = lStack_70;
  plVar5[0x13] = lStack_88;
  plVar5[0x12] = lStack_90;
  plVar5[0x15] = lStack_78;
  plVar5[0x14] = lStack_80;
  plVar5[9] = (long)&UNK_10f481dd5;
  *(byte *)(plVar5 + 0x17) = bVar1 >> 2 & 1;
  *(undefined4 *)(plVar5 + 10) = 1;
  *(undefined1 *)((long)plVar5 + 0x54) = 0xe;
  *(undefined4 *)(plVar5 + 0xb) = 1;
  uVar6 = 3;
  if (cVar2 == '\0') {
    uVar6 = 0x11;
  }
  plVar5[0xc] = (long)&UNK_10f481de0;
  *(undefined4 *)(plVar5 + 0xd) = uVar6;
  *(undefined1 *)((long)plVar5 + 0x6c) = 0x17;
  *(undefined4 *)(plVar5 + 0xe) = 1;
  plVar5[0xf] = (long)&UNK_10f487ec7;
  *(undefined4 *)(plVar5 + 0x10) = 3;
  *(undefined1 *)((long)plVar5 + 0x84) = 0x10;
  *(undefined4 *)(plVar5 + 0x11) = 1;
  FUN_10829e324(plVar5 + 2,plVar5 + 9,3);
  lVar4 = param_1 + 0x30;
  FUN_1082fcbb8(lVar4,param_2,param_3,param_4,param_5,param_6,param_7,plVar5,0,param_8,param_9);
  *(long *)(param_1 + 0xc0) = lVar4;
  return;
}



/* Entry: 1082e57c4; end: 1082e687f;  */

void FUN_1082e57c4(long param_1,long *param_2)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  undefined1 in_ZR;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined8 **ppuVar22;
  long *plVar23;
  int iVar24;
  float fVar25;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  long lVar26;
  undefined8 uVar27;
  uint *puVar28;
  long extraout_x8;
  long extraout_x8_00;
  long lVar29;
  undefined8 *puVar30;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 uVar31;
  ulong uVar32;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  undefined8 *extraout_x9_02;
  long extraout_x9_03;
  undefined8 *extraout_x9_04;
  float fVar33;
  long extraout_x10;
  undefined8 *extraout_x10_00;
  long extraout_x10_01;
  undefined8 *extraout_x10_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong uVar34;
  int iVar35;
  ulong uVar36;
  uint *puVar37;
  uint *puVar38;
  float *pfVar39;
  ulong uVar40;
  long lVar41;
  float *pfVar42;
  float *pfVar43;
  undefined8 *puVar44;
  long lVar45;
  uint uVar46;
  undefined8 uVar47;
  float fVar48;
  uint uVar49;
  float fVar50;
  float fVar52;
  undefined8 uVar51;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  long *plStack_418;
  long *plStack_410;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined4 uStack_3fc;
  char cStack_3f8;
  int iStack_3f4;
  long *plStack_3f0;
  int iStack_3e4;
  long *plStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 auStack_3d0 [14];
  byte bStack_3c2;
  byte bStack_3c0;
  int aiStack_3b8 [6];
  undefined8 uStack_3a0;
  uint auStack_398 [122];
  uint *puStack_1b0;
  ulong uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  int iStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined4 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(uint *)(param_1 + 0x98);
  lVar26 = *(long *)(param_1 + 0xc0);
  if (lVar26 == 0) {
    FUN_1082fbcfc(param_1,param_2);
    lVar26 = *(long *)(param_1 + 0xc0);
    if (lVar26 == 0) {
LAB_1082e6784:
      func_0x0001082e73cc(uStack_b0);
      if ((bool)in_ZR) {
        return;
      }
FUN_1082825d8:
      ___stack_chk_fail();
      FUN_1082e6dbc(&uStack_e8);
      FUN_1082647e4(&plStack_3f0);
      func_0x0001082e738c();
      func_0x0001082e72f4();
      func_0x0001082e730c();
      func_0x0001082e73c4();
      do {
        iVar24 = iRam0000000113254da8;
        cVar9 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(0x113254da8,0x10);
        if (bVar15) {
          cVar9 = ExclusiveMonitorsStatus();
          iRam0000000113254da8 = iRam0000000113254da8 + 1;
        }
      } while (cVar9 != '\0');
      if (iVar24 == 0) {
        FUN_10841076c(&UNK_10f481179);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x108282628);
        (*pcVar14)();
      }
      return;
    }
  }
  uVar27 = *(undefined8 *)(*(long *)(lVar26 + 0x98) + 0x20);
  func_0x00010840f1a4(param_1 + 0xa8,uVar5);
  uVar36 = 0;
LAB_1082e5894:
  in_ZR = 1;
  if (uVar36 != (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) {
    if ((long)*(int *)(param_1 + 0x98) <= (long)uVar36) goto LAB_1082e67c4;
    pfVar42 = (float *)(*(long *)(param_1 + 0x90) + uVar36 * 0x48);
    auStack_3d0[0] = 0;
    bStack_3c0 = 0;
    pfVar18 = pfVar42;
    FUN_10828e338();
    pfVar39 = pfVar42 + 10;
    pfVar43 = pfVar42;
    if ((int)pfVar18 != 0) {
      FUN_1082d9d64(auStack_3d0);
      FUN_1081a0fa4(auStack_3d0,pfVar39);
      if ((bStack_3c0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1082e67c4;
      }
      bStack_3c2 = bStack_3c2 | 4;
      pfVar39 = (float *)auStack_3d0;
      func_0x000108142294(auStack_3d0,pfVar42,1);
      pfVar43 = (float *)0x113254e20;
    }
    puStack_1b0 = auStack_398;
    uStack_1a8 = 0x1600000000;
    lVar26 = *(long *)pfVar39;
    uStack_e8 = *(undefined8 *)(lVar26 + 0x28);
    lStack_e0 = *(long *)(lVar26 + 0x40);
    lStack_d8 = lStack_e0 + *(int *)(lVar26 + 0x48);
    puStack_d0 = (undefined4 *)0x0;
    if (*(long *)(lVar26 + 0x58) != 0) {
      puStack_d0 = (undefined4 *)(*(long *)(lVar26 + 0x58) + -4);
    }
    puStack_c8 = (undefined8 *)0x0;
    uStack_c0 = 0;
    uStack_b8 = 1;
    aiStack_3b8[0] = 0;
    FUN_108376fe8();
    if ((int)pfVar39 != 2) {
      if (-(pfVar43[3] * pfVar43[1]) + pfVar43[4] * *pfVar43 < 0.0) {
        pfVar39 = (float *)(ulong)*(uint *)(&UNK_10df16b14 + ((ulong)pfVar39 & 0xffffffff) * 4);
      }
      do {
        puVar19 = &uStack_e8;
        FUN_108379cc8(puVar19,&uStack_108);
        switch((ulong)puVar19 & 0xffffffff) {
        case 0:
          func_0x0001082e73b8();
          func_0x0001082e6e14(aiStack_3b8,&uStack_108);
          break;
        case 1:
          puVar19 = &uStack_108;
          FUN_1082d213c(puVar19,2);
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001082e73b8();
            func_0x0001082e72bc();
            func_0x0001082e6f1c(&uStack_100,&puStack_1b0);
          }
          break;
        case 2:
          func_0x0001082e7394();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001082e72fc();
            func_0x0001082e72bc();
            func_0x0001082e73a0();
            func_0x0001082e6f58(&uStack_108,&puStack_1b0);
          }
          break;
        case 3:
          func_0x0001082e7394();
          if (((ulong)puVar19 & 1) == 0) {
            func_0x0001082e72fc();
            iStack_110 = 0;
            ppuVar22 = &puStack_1a0;
            puStack_1a0 = &uStack_198;
            FUN_1082d25dc(*puStack_d0,0x3e800000,ppuVar22,&uStack_108);
            for (lVar26 = 0; lVar26 < iStack_110; lVar26 = lVar26 + 1) {
              func_0x0001082e6e14(aiStack_3b8,ppuVar22 + 1);
              func_0x0001082e6e14(aiStack_3b8,ppuVar22 + 2);
              func_0x0001082e6f58(ppuVar22,&puStack_1b0);
              ppuVar22 = ppuVar22 + 2;
            }
            FUN_1082d2744(&puStack_1a0);
          }
          break;
        case 4:
          puVar19 = &uStack_108;
          FUN_1082d213c(puVar19,4);
          if (((ulong)puVar19 & 1) == 0) {
            func_0x00010827a0cc(pfVar43,&uStack_108,4);
            func_0x0001082e72bc();
            func_0x0001082e73a0();
            func_0x0001082e6e14(aiStack_3b8,auStack_f0);
            ppuStack_128 = &puStack_1a0;
            uStack_120 = 0x1e00000000;
            FUN_1082d325c(0x3f800000,&uStack_108,pfVar39,&ppuStack_128);
            lVar45 = 0;
            lVar41 = (long)(int)uStack_120;
            for (lVar26 = 0; lVar26 < lVar41; lVar26 = lVar26 + 3) {
              if ((int)uStack_120 <= lVar26) goto LAB_1082e67c4;
              func_0x0001082e6f58((long)ppuStack_128 + lVar45,&puStack_1b0);
              lVar45 = lVar45 + 0x18;
            }
            func_0x0001082e7088(&ppuStack_128);
          }
          break;
        case 6:
          goto code_r0x0001082e5b54;
        }
      } while( true );
    }
    goto LAB_1082e5c90;
  }
  goto LAB_1082e6784;
code_r0x0001082e5b54:
  if (aiStack_3b8[0] == 3) {
    uVar4 = (uint)uStack_1a8;
    uVar34 = uStack_1a8 & 0xffffffff;
    if (0 < (int)(uint)uStack_1a8) {
      if ((uint)uStack_1a8 < 3) {
        uVar47 = 0;
        fVar53 = 0.0;
        fVar48 = 0.0;
        fVar52 = 0.0;
      }
      else {
        uVar47 = *(undefined8 *)(puStack_1b0 + (ulong)*puStack_1b0 * 2 + 1);
        fVar33 = (float)((ulong)uVar47 >> 0x20);
        uVar32 = (ulong)((uint)uStack_1a8 - 1);
        puVar28 = puStack_1b0 + 0x17;
        fVar48 = 0.0;
        fVar52 = 0.0;
        fVar53 = 0.0;
        fVar50 = (float)*(undefined8 *)(puStack_1b0 + (ulong)puStack_1b0[0xb] * 2 + 0xc) -
                 (float)uVar47;
        fVar25 = (float)((ulong)*(undefined8 *)(puStack_1b0 + (ulong)puStack_1b0[0xb] * 2 + 0xc) >>
                        0x20) - fVar33;
        while (uVar32 = uVar32 - 1, uVar32 != 0) {
          fVar54 = (float)*(undefined8 *)(puVar28 + (ulong)puVar28[-1] * 2) - (float)uVar47;
          fVar55 = (float)((ulong)*(undefined8 *)(puVar28 + (ulong)puVar28[-1] * 2) >> 0x20) -
                   fVar33;
          fVar56 = -fVar54 * fVar25 + fVar50 * fVar55;
          fVar53 = fVar53 + fVar56;
          fVar48 = fVar48 + (fVar50 + fVar54) * fVar56;
          fVar52 = fVar52 + (fVar25 + fVar55) * fVar56;
          puVar28 = puVar28 + 0xb;
          fVar50 = fVar54;
          fVar25 = fVar55;
        }
      }
      if (ABS(fVar53) <= 0.00024414062) {
        puVar28 = puStack_1b0 + 1;
        fVar53 = 0.0;
        fVar48 = 0.0;
        for (uVar32 = uVar34; uVar32 != 0; uVar32 = uVar32 - 1) {
          fVar53 = fVar53 + (float)*(undefined8 *)(puVar28 + (ulong)puVar28[-1] * 2);
          fVar48 = fVar48 + (float)((ulong)*(undefined8 *)(puVar28 + (ulong)puVar28[-1] * 2) >> 0x20
                                   );
          puVar28 = puVar28 + 0xb;
        }
        fVar52 = 1.0 / (float)(uStack_1a8 & 0xffffffff);
        puVar19 = (undefined8 *)CONCAT44(fVar48 * fVar52,fVar53 * fVar52);
      }
      else {
        fVar53 = 1.0 / (fVar53 * 3.0);
        puVar19 = (undefined8 *)
                  CONCAT44((float)((ulong)uVar47 >> 0x20) + fVar52 * fVar53,
                           (float)uVar47 + fVar48 * fVar53);
      }
      fVar48 = (float)((ulong)puVar19 >> 0x20);
      fVar53 = SUB84(puVar19,0);
      bVar15 = true;
      if ((!NAN(fVar53)) && (bVar15 = true, !NAN(fVar48))) {
        bVar15 = false;
      }
      bVar16 = true;
      if ((!bVar15) && (bVar16 = true, !NAN((fVar53 - fVar53) * fVar48))) {
        bVar16 = false;
      }
      puStack_3d8 = puVar19;
      if (!bVar16) {
        uVar32 = 0;
        lVar26 = 0;
        lVar45 = 0;
        uVar31 = 1;
        if ((int)pfVar39 != 1) {
          uVar31 = 0xffffffff;
        }
        while (uVar32 != uVar34) {
          if ((long)(int)(uint)uStack_1a8 <= (long)uVar32) goto LAB_1082e67c4;
          iVar24 = 0;
          iVar35 = (int)(uVar32 + 1);
          if (uVar4 != 0) {
            iVar24 = iVar35 / (int)uVar4;
          }
          uVar6 = iVar35 - iVar24 * uVar4;
          if ((int)(uint)uStack_1a8 <= (int)uVar6) goto LAB_1082e67c4;
          puVar37 = puStack_1b0 + (ulong)uVar6 * 0xb;
          uVar6 = *puVar37;
          puVar28 = puStack_1b0 + uVar32 * 0xb + (ulong)puStack_1b0[uVar32 * 0xb] * 2 + 1;
          puVar38 = puVar37 + 5;
          for (lVar41 = 0; lVar41 <= (int)uVar6; lVar41 = lVar41 + 1) {
            uVar47 = *(undefined8 *)(puVar38 + -4);
            uVar51 = *(undefined8 *)puVar28;
            uVar47 = CONCAT44((float)((ulong)uVar47 >> 0x20) - (float)((ulong)uVar51 >> 0x20),
                              (float)uVar47 - (float)uVar51);
            *(undefined8 *)puVar38 = uVar47;
            func_0x000108384954(puVar38);
            uVar49 = (uint)uVar51;
            uVar46 = (uint)uVar47;
            FUN_1082d0668(puVar38,uVar31);
            *puVar38 = uVar46;
            puVar38[1] = uVar49;
            puVar28 = puVar38 + -4;
            puVar38 = puVar38 + 2;
          }
          lVar41 = 9;
          if (*puVar37 != 0) {
            lVar41 = 0xc;
          }
          lVar26 = lVar41 + lVar26;
          lVar41 = 5;
          if (*puVar37 != 0) {
            lVar41 = 6;
          }
          lVar45 = lVar41 + lVar45;
          uVar32 = uVar32 + 1;
        }
        uVar40 = lVar26 + uVar34 * 6;
        lVar26 = 0x14;
        uVar1 = lVar45 + uVar34 * 4;
        for (uVar32 = 0; in_ZR = uVar34 == uVar32, !(bool)in_ZR; uVar32 = uVar32 + 1) {
          if ((long)(int)(uint)uStack_1a8 <= (long)uVar32) goto LAB_1082e67c4;
          uVar6 = (int)uVar32 + 1;
          uVar46 = 0;
          if (uVar4 != 0) {
            uVar46 = uVar6 / uVar4;
          }
          uVar6 = uVar6 - uVar46 * uVar4;
          if ((int)(uint)uStack_1a8 <= (int)uVar6) goto LAB_1082e67c4;
          uVar47 = *(undefined8 *)
                    ((long)puStack_1b0 +
                    (ulong)*(uint *)((long)puStack_1b0 + lVar26 + -0x14) * 8 + lVar26);
          *(ulong *)(puStack_1b0 + (ulong)uVar6 * 0xb + 9) =
               CONCAT44((float)((ulong)*(undefined8 *)(puStack_1b0 + (ulong)uVar6 * 0xb + 5) >> 0x20
                               ) + (float)((ulong)uVar47 >> 0x20),
                        (float)*(undefined8 *)(puStack_1b0 + (ulong)uVar6 * 0xb + 5) + (float)uVar47
                       );
          lVar26 = lVar26 + 0x2c;
          func_0x000108384954();
        }
        if ((uVar1 >> 0x1f == 0) && (uVar40 >> 0x1f == 0)) {
          plStack_3e0 = (long *)0x0;
          plVar20 = param_2;
          (**(code **)(*param_2 + 0x18))(param_2,uVar27,uVar1,&plStack_3e0,&iStack_3e4);
          if (plVar20 == (long *)0x0) {
            FUN_10841076c(&UNK_10f488006);
            func_0x0001082e738c();
            func_0x0001082e72f4();
            func_0x0001082e730c();
            goto LAB_1082e6784;
          }
          plStack_3f0 = (long *)0x0;
          plVar21 = param_2;
          (**(code **)(*param_2 + 0x20))(param_2,uVar40,&plStack_3f0,&iStack_3f4);
          if (plVar21 == (long *)0x0) {
            FUN_10841076c(&UNK_10f488023);
          }
          else {
            uStack_c0 = 0x800000000;
            puStack_c8 = &uStack_e8;
            func_0x0001082e70b0(&uStack_408,pfVar42 + 0xe,*(undefined1 *)(param_1 + 0xa0));
            ppuVar22 = &puStack_c8;
            FUN_1082e70ec();
            uVar6 = (uint)uStack_1a8;
            uVar4 = (uint)uStack_1a8 & ((int)(uint)uStack_1a8 >> 0x1f ^ 0xffffffffU);
            lVar26 = 0x14;
            plVar23 = plVar21;
            for (uVar34 = 0; puVar28 = puStack_1b0, uVar4 != uVar34; uVar34 = uVar34 + 1) {
              if ((long)(int)(uint)uStack_1a8 <= (long)uVar34) goto LAB_1082e67c4;
              uVar46 = (int)uVar34 + 1;
              uVar49 = 0;
              if (uVar6 != 0) {
                uVar49 = uVar46 / uVar6;
              }
              uVar46 = uVar46 - uVar49 * uVar6;
              if ((int)(uint)uStack_1a8 <= (int)uVar46) goto LAB_1082e67c4;
              puVar38 = puStack_1b0 + (ulong)uVar46 * 0xb;
              iVar24 = 9;
              if (*puVar38 != 0) {
                iVar24 = 10;
              }
              if (0x10000 < iVar24 + *(int *)ppuVar22) {
                iVar24 = *(int *)((long)ppuVar22 + 4);
                ppuVar22 = &puStack_c8;
                FUN_1082e70ec();
                plVar23 = (long *)((long)plVar23 + (long)iVar24 * 2);
              }
              lVar45 = *(long *)((long)puVar28 +
                                lVar26 + (ulong)*(uint *)((long)puVar28 + lVar26 + -0x14) * 8 +
                                -0x10);
              *plVar20 = lVar45;
              *(undefined4 *)(plVar20 + 1) = uStack_408;
              uVar17 = cStack_3f8 == '\x01';
              if ((bool)uVar17) {
                *(undefined8 *)((long)plVar20 + 0xc) = uStack_404;
                *(undefined4 *)((long)plVar20 + 0x14) = uStack_3fc;
                plVar20 = plVar20 + 3;
              }
              else {
                plVar20 = (long *)((long)plVar20 + 0xc);
              }
              *plVar20 = 0;
              plVar20[1] = -0x407fffff40800000;
              lVar41 = lVar26;
              func_0x0001082e7344(lVar45,*(undefined8 *)
                                          ((long)puVar28 +
                                          lVar26 + (ulong)*(uint *)((long)puVar28 + lVar26 + -0x14)
                                                   * 8));
              if ((bool)uVar17) {
                func_0x0001082e735c();
                puVar30 = extraout_x10_00;
              }
              else {
                puVar30 = (undefined8 *)(extraout_x10 + 0x1c);
              }
              *puVar30 = 0xbf80000000000000;
              puVar30[1] = 0xbf800000bf800000;
              func_0x0001082e7344();
              if ((bool)uVar17) {
                func_0x0001082e735c();
                lVar29 = extraout_x8_00;
                puVar30 = extraout_x10_02;
                uVar31 = extraout_w9_00;
              }
              else {
                puVar30 = (undefined8 *)(extraout_x10_01 + 0x1c);
                lVar29 = extraout_x8;
                uVar31 = extraout_w9;
              }
              *puVar30 = 0xbf80000000000000;
              puVar30[1] = 0xbf800000bf800000;
              uVar47 = CONCAT44((float)((ulong)*(undefined8 *)(puVar38 + 5) >> 0x20) +
                                (float)((ulong)lVar45 >> 0x20),
                                (float)*(undefined8 *)(puVar38 + 5) + (float)lVar45);
              puVar30[2] = uVar47;
              *(undefined4 *)(puVar30 + 3) = uVar31;
              uVar17 = cStack_3f8 == '\x01';
              if ((bool)uVar17) {
                *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                puVar30 = puVar30 + 5;
                uVar47 = uStack_404;
              }
              else {
                puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
              }
              fVar52 = (float)uVar47;
              *puVar30 = 0xbf80000000000000;
              puVar30[1] = 0xbf800000bf800000;
              iVar24 = *(int *)ppuVar22;
              iVar35 = *(int *)((long)ppuVar22 + 4);
              psVar2 = (short *)((long)plVar23 + (long)iVar35 * 2);
              sVar7 = (short)iVar24;
              *psVar2 = sVar7;
              psVar2[1] = sVar7 + 2;
              psVar2[2] = sVar7 + 1;
              psVar2[3] = sVar7;
              psVar2[4] = sVar7 + 3;
              psVar2[5] = sVar7 + 2;
              *(int *)ppuVar22 = iVar24 + 4;
              *(int *)((long)ppuVar22 + 4) = iVar35 + 6;
              if (*puVar38 == 0) {
                puVar44 = *(undefined8 **)
                           ((long)puVar28 + lVar41 + (ulong)*(uint *)(lVar29 + -0x14) * 8 + -0x10);
                uVar47 = *(undefined8 *)(puVar38 + 1);
                puStack_1a0 = puVar44;
                uStack_108 = uVar47;
                func_0x000108384a68(&puStack_3d8,&puStack_1a0,&uStack_108,0);
                func_0x0001082e7374(puVar19);
                if ((bool)uVar17) {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *(undefined4 *)puVar30 = 0;
                *(float *)((long)puVar30 + 4) = SQRT(fVar52);
                puVar30[1] = 0xbf800000bf800000;
                puVar30[2] = puVar44;
                func_0x0001082e7324();
                if ((bool)uVar17) {
                  func_0x0001082e7290();
                  puVar30 = extraout_x9_00;
                }
                else {
                  puVar30 = (undefined8 *)(extraout_x9 + 0x1c);
                }
                *puVar30 = 0;
                puVar30[1] = 0xbf800000bf800000;
                puVar30[2] = uVar47;
                func_0x0001082e7324();
                if ((bool)uVar17) {
                  func_0x0001082e7290();
                  puVar30 = extraout_x9_02;
                }
                else {
                  puVar30 = (undefined8 *)(extraout_x9_01 + 0x1c);
                }
                *puVar30 = 0;
                puVar30[1] = 0xbf800000bf800000;
                fVar52 = (float)puVar38[6];
                *(float *)(puVar30 + 2) = (float)puVar38[5] + SUB84(puVar44,0);
                *(float *)((long)puVar30 + 0x14) = fVar52 + (float)((ulong)puVar44 >> 0x20);
                func_0x0001082e7324();
                if ((bool)uVar17) {
                  func_0x0001082e7290();
                  puVar30 = extraout_x9_04;
                  uVar51 = extraout_x11_00;
                  uVar31 = extraout_w8_01;
                }
                else {
                  puVar30 = (undefined8 *)(extraout_x9_03 + 0x1c);
                  uVar51 = extraout_x11;
                  uVar31 = extraout_w8_00;
                }
                *puVar30 = 0xbf80000000000000;
                puVar30[1] = uVar51;
                fVar52 = (float)puVar38[6];
                *(float *)(puVar30 + 2) = (float)puVar38[5] + (float)uVar47;
                *(float *)((long)puVar30 + 0x14) = fVar52 + (float)((ulong)uVar47 >> 0x20);
                *(undefined4 *)(puVar30 + 3) = uVar31;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = 0xbf80000000000000;
                puVar30[1] = 0xbf800000bf800000;
                iVar24 = *(int *)ppuVar22;
                iVar35 = *(int *)((long)ppuVar22 + 4);
                sVar8 = (short)iVar24;
                psVar2 = (short *)((long)plVar23 + (long)iVar35 * 2);
                *psVar2 = sVar8 + 3;
                psVar2[1] = sVar8 + 1;
                sVar7 = sVar8 + 2;
                psVar2[2] = sVar7;
                psVar2[3] = sVar8 + 4;
                psVar2[4] = sVar8 + 3;
                psVar2[5] = sVar7;
                *(int *)((long)ppuVar22 + 4) = iVar35 + 6;
                if (2 < uVar6) {
                  psVar2 = (short *)((long)plVar23 + (long)(iVar35 + 6) * 2);
                  *psVar2 = sVar8;
                  psVar2[1] = sVar7;
                  psVar2[2] = sVar8 + 1;
                  *(int *)((long)ppuVar22 + 4) = iVar35 + 9;
                }
                iVar24 = iVar24 + 5;
              }
              else {
                uStack_190 = *(undefined8 *)
                              ((long)puVar28 + lVar41 + (ulong)*(uint *)(lVar29 + -0x14) * 8 + -0x10
                              );
                uStack_100 = *(undefined8 *)(puVar38 + 1);
                uStack_180 = *(undefined8 *)(puVar38 + 3);
                fVar56 = (float)puVar38[5];
                fVar57 = (float)puVar38[6];
                fVar55 = (float)puVar38[7];
                fVar54 = (float)puVar38[8];
                fVar52 = (float)uStack_190;
                fVar33 = (float)((ulong)uStack_190 >> 0x20);
                fVar50 = (float)uStack_180;
                fVar25 = (float)((ulong)uStack_180 >> 0x20);
                fStack_170 = (float)puVar38[5] + fVar52;
                fStack_16c = (float)puVar38[6] + fVar33;
                fStack_160 = (float)puVar38[7] + fVar50;
                fStack_15c = (float)puVar38[8] + fVar25;
                uStack_3a0 = CONCAT44((float)((ulong)*(undefined8 *)(puVar38 + 5) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(puVar38 + 7) >> 0x20),
                                      (float)*(undefined8 *)(puVar38 + 5) +
                                      (float)*(undefined8 *)(puVar38 + 7));
                puStack_1a0 = puVar19;
                uStack_108 = uStack_190;
                uStack_f8 = uStack_180;
                func_0x000108384954(&uStack_3a0);
                uStack_150 = CONCAT44((float)((ulong)uStack_100 >> 0x20) +
                                      (float)((ulong)uStack_3a0 >> 0x20),
                                      (float)uStack_100 + (float)uStack_3a0);
                FUN_1082d2d74(aiStack_3b8,&uStack_108);
                FUN_1082e7188(aiStack_3b8,&puStack_1a0,6,0x10,8);
                func_0x0001082e7374(puStack_1a0);
                if ((bool)uVar17) {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                fVar52 = fVar57 * fVar33 + fVar52 * fVar56;
                fVar50 = fVar54 * fVar25 + fVar50 * fVar55;
                *puVar30 = uStack_198;
                *(float *)(puVar30 + 1) =
                     fVar52 - ((float)puVar38[6] * fVar48 + fVar53 * (float)puVar38[5]);
                *(float *)((long)puVar30 + 0xc) =
                     fVar50 - ((float)puVar38[8] * fVar48 + fVar53 * (float)puVar38[7]);
                puVar30[2] = uStack_190;
                *(undefined4 *)(puVar30 + 3) = extraout_w8;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = uStack_188;
                *(undefined4 *)(puVar30 + 1) = 0;
                *(float *)((long)puVar30 + 0xc) =
                     fVar50 - ((float)puVar38[8] * uStack_108._4_4_ +
                              (float)uStack_108 * (float)puVar38[7]);
                puVar30[2] = uStack_180;
                *(undefined4 *)(puVar30 + 3) = extraout_w8;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = uStack_178;
                *(float *)(puVar30 + 1) =
                     fVar52 - ((float)puVar38[6] * uStack_f8._4_4_ +
                              (float)uStack_f8 * (float)puVar38[5]);
                *(undefined4 *)((long)puVar30 + 0xc) = 0;
                puVar30[2] = CONCAT44(fStack_16c,fStack_170);
                *(undefined4 *)(puVar30 + 3) = extraout_w8;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = uStack_168;
                puVar30[1] = 0xf58637bcf58637bc;
                puVar30[2] = CONCAT44(fStack_15c,fStack_160);
                *(undefined4 *)(puVar30 + 3) = extraout_w8;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = uStack_158;
                puVar30[1] = 0xf58637bcf58637bc;
                puVar30[2] = uStack_150;
                *(undefined4 *)(puVar30 + 3) = extraout_w8;
                if (cStack_3f8 == '\x01') {
                  *(undefined8 *)((long)puVar30 + 0x1c) = uStack_404;
                  *(undefined4 *)((long)puVar30 + 0x24) = uStack_3fc;
                  puVar30 = puVar30 + 5;
                }
                else {
                  puVar30 = (undefined8 *)((long)puVar30 + 0x1c);
                }
                *puVar30 = uStack_148;
                puVar30[1] = 0xf58637bcf58637bc;
                iVar24 = *(int *)ppuVar22;
                iVar35 = *(int *)((long)ppuVar22 + 4);
                sVar10 = (short)iVar24;
                sVar7 = sVar10 + 3;
                psVar2 = (short *)((long)plVar23 + (long)iVar35 * 2);
                *psVar2 = sVar7;
                psVar2[1] = sVar10 + 1;
                sVar8 = sVar10 + 2;
                psVar2[2] = sVar8;
                psVar2[3] = sVar10 + 4;
                psVar2[4] = sVar7;
                psVar2[5] = sVar8;
                psVar2[6] = sVar10 + 5;
                psVar2[7] = sVar7;
                psVar2[8] = sVar10 + 4;
                *(int *)((long)ppuVar22 + 4) = iVar35 + 9;
                if (2 < uVar6) {
                  psVar2 = (short *)((long)plVar23 + (long)(iVar35 + 9) * 2);
                  *psVar2 = sVar10;
                  psVar2[1] = sVar8;
                  psVar2[2] = sVar10 + 1;
                  *(int *)((long)ppuVar22 + 4) = iVar35 + 0xc;
                }
                iVar24 = iVar24 + 6;
              }
              *(int *)ppuVar22 = iVar24;
              plVar20 = puVar30 + 2;
              lVar26 = lVar26 + 0x2c;
            }
            uVar4 = (uint)uStack_c0;
            uVar34 = uStack_c0 & 0xffffffff;
            plVar20 = param_2;
            (**(code **)(*param_2 + 0xe0))();
            if (((int)uVar4 < 0) || (0x5555555 < uVar4)) {
              _abort();
              goto FUN_1082825d8;
            }
            plVar23 = plVar20;
            FUN_10840f8d0();
            lVar26 = (long)(int)uVar4;
            lVar45 = plVar20[1];
            plVar20[1] = (long)(plVar23 + uVar34 * 6);
            *(uint *)(plVar23 + uVar34 * 6) = uVar4;
            lVar41 = plVar20[1];
            plVar20[1] = lVar41 + 4;
            *(code **)(lVar41 + 4) = FUN_1082e71d8;
            lVar41 = plVar20[1];
            plVar20[1] = lVar41 + 8;
            *(char *)(lVar41 + 8) = (char)plVar23 - (char)(int)lVar45;
            *plVar20 = plVar20[1] + 1;
            plVar20[1] = plVar20[1] + 1;
            plVar20 = plVar23;
            for (; lVar26 != 0; lVar26 = lVar26 + -1) {
              plVar20[3] = 0;
              plVar20[2] = 0;
              plVar20[5] = 0;
              plVar20[4] = 0;
              plVar20[1] = 0;
              *plVar20 = 0;
              plVar20 = plVar20 + 6;
            }
            lVar45 = 0;
            lVar26 = 0;
            plVar20 = plVar23;
            while( true ) {
              puVar19 = puStack_c8;
              plVar12 = plStack_3f0;
              iVar24 = (uint)uStack_c0;
              in_ZR = lVar26 == (int)(uint)uStack_c0;
              if ((int)(uint)uStack_c0 <= lVar26) break;
              if (plStack_3f0 != (long *)0x0) {
                (**(code **)(*plStack_3f0 + 0x10))(plStack_3f0);
              }
              plVar13 = plStack_3e0;
              iVar11 = iStack_3f4;
              plStack_410 = plVar12;
              piVar3 = (int *)((long)puVar19 + lVar45);
              iVar24 = *piVar3;
              iVar35 = piVar3[1];
              if (plStack_3e0 != (long *)0x0) {
                (**(code **)(*plStack_3e0 + 0x10))(plStack_3e0);
              }
              plStack_418 = plVar13;
              FUN_1082e6d44(plVar20,&plStack_410,iVar35,iVar11,0,iVar24 - 1U & 0xffff,0,&plStack_418
                            ,iStack_3e4);
              FUN_1082647e4(&plStack_418);
              FUN_1082647e4(&plStack_410);
              iStack_3f4 = iStack_3f4 + piVar3[1];
              iStack_3e4 = iStack_3e4 + *(int *)((long)puVar19 + lVar45);
              lVar26 = lVar26 + 1;
              lVar45 = lVar45 + 8;
              plVar20 = plVar20 + 6;
            }
            func_0x00010840f37c(param_1 + 0xa8);
            if (*(int *)(param_1 + 0xbc) == 0) {
LAB_1082e67c4:
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1082e67c8);
              (*pcVar14)();
            }
            lVar26 = *(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xbc) * 0x10;
            *(long **)(lVar26 + -0x10) = plVar23;
            *(int *)(lVar26 + -8) = iVar24;
            FUN_1082e6dbc(&uStack_e8);
          }
          FUN_1082647e4(&plStack_3f0);
          func_0x0001082e738c();
          func_0x0001082e72f4();
          func_0x0001082e730c();
          if (plVar21 == (long *)0x0) goto LAB_1082e6784;
          goto code_r0x0001082e5ca0;
        }
      }
    }
  }
LAB_1082e5c90:
  func_0x0001082e72f4();
  func_0x0001082e730c();
code_r0x0001082e5ca0:
  uVar36 = uVar36 + 1;
  goto LAB_1082e5894;
}



/* Entry: 1082e6880; end: 1082e688b;  */

void FUN_1082e6880(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  
  do {
    iVar3 = iRam0000000113254da8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254da8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113254da8 = iRam0000000113254da8 + 1;
    }
  } while (cVar1 != '\0');
  if (iVar3 != 0) {
    return;
  }
  FUN_10841076c(&UNK_10f481179);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108282628);
  (*pcVar4)();
}



/* Entry: 1082e688c; end: 1082e68cf;  */

undefined8 * FUN_1082e688c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x000108376b14(param_1 + 5,param_2 + 5);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 1082e68d0; end: 1082e6917;  */

void FUN_1082e68d0(long param_1,int param_2,ulong param_3)

{
  long unaff_x19;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < param_2) {
    func_0x00010bdb1a68();
    func_0x0001082e73e0();
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082e72d4();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001082e7314();
    }
    func_0x0001082e7268(param_3 / 0x48);
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x48;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,param_2 + (uint)param_1);
  return;
}



/* Entry: 1082e6918; end: 1082e696b;  */

void FUN_1082e6918(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001082e73e0();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001082e72d4();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082e7314();
  }
  func_0x0001082e7268(param_3 / 0x48);
  return;
}



/* Entry: 1082e696c; end: 1082e699b;  */

undefined8 * FUN_1082e696c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082e699c; end: 1082e69c7;  */

void FUN_1082e699c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e69a0);
  (*pcVar1)();
}



/* Entry: 1082e69c8; end: 1082e69f3;  */

undefined8 * FUN_1082e69c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0xc9);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 1082e69f4; end: 1082e6a07;  */

void FUN_1082e69f4(void)

{
  return;
}



/* Entry: 1082e6a08; end: 1082e6a83;  */

void FUN_1082e6a08(long param_1,undefined8 param_2,long *param_3)

{
  (**(code **)(*param_3 + 0x10))(param_3,1,*(undefined1 *)(param_1 + 0xb8),&UNK_10f487edb,0xf);
  FUN_10828e2dc(param_2,param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0001082e6a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,2,param_2,&UNK_10f484976,0xf);
  return;
}



/* Entry: 1082e6a84; end: 1082e6ae7;  */

void FUN_1082e6a84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  uVar4 = uRam0000000113254e60;
  uVar3 = uRam0000000113254e58;
  uVar2 = uRam0000000113254e50;
  uVar1 = uRam0000000113254e48;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = uVar2;
  puVar5[6] = uVar1;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 5) = 0x3f800000;
  *puVar5 = &PTR_FUN_110a39310;
  puVar5[9] = uVar4;
  puVar5[8] = uVar3;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[10] = uRam0000000113254e68;
  *(undefined4 *)(puVar5 + 0xb) = 0xffffffff;
  *param_1 = puVar5;
  return;
}



/* Entry: 1082e6ae8; end: 1082e6aeb;  */

undefined8 * FUN_1082e6ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}


