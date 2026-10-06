/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10833dee0; end: 10833df2b;  */

void FUN_10833dee0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108341d9c();
  func_0x000108341710();
  func_0x000108342368(unaff_x20 + 8,unaff_x19 + 8);
  FUN_10833de08(unaff_x20 + 0xd8,unaff_x19 + 0xd8);
  func_0x00010821e4a0(unaff_x20 + 0x140,unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x148) = *(undefined8 *)(unaff_x19 + 0x148);
  return;
}



/* Entry: 10833df2c; end: 10833e037;  */

void FUN_10833df2c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long in_x3;
  int extraout_w11;
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [104];
  
  func_0x000108341e84();
  FUN_108341774();
  fVar1 = *(float *)(in_x3 + 0x3c);
  uVar2 = 0x3f800000;
  if (fVar1 < 1.0) {
    FUN_10819a67c(in_x3);
    uStack_b8 = 0;
    fStack_b0 = fVar1;
    uStack_ac = uVar2;
    uStack_a8 = param_3;
    uStack_a4 = param_4;
    FUN_1083ad49c(auStack_a0,&fStack_b0,&uStack_b8,6);
    func_0x000108342034(auStack_98);
    FUN_108358b94();
    func_0x0001083422e8();
    func_0x000108342164();
    FUN_108115b2c(auStack_a0);
    func_0x000108341f3c();
  }
  if (*(long *)(in_x3 + 0x18) != 0) {
    do {
      func_0x000108341c8c();
    } while (extraout_w11 != 0);
    func_0x000108342034(auStack_98);
    FUN_108358b94();
    func_0x0001083422e8();
    func_0x000108342164();
    FUN_108115b2c(auStack_c0);
  }
  return;
}



/* Entry: 10833e038; end: 10833e077;  */

void FUN_10833e038(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1083436e4(param_1,&UNK_10df1caf0,0,0);
  func_0x000108341f64();
  FUN_1083417d8(auStack_30,&UNK_10df1caf0);
  return;
}



/* Entry: 10833e078; end: 10833e0cb;  */

void FUN_10833e078(long param_1)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = param_1;
  func_0x000108341ff0(*(undefined8 *)(*plVar1 + 0x38),plVar1,&uStack_38);
  FUN_1083417f0(&lStack_28);
  return;
}



/* Entry: 10833e0cc; end: 10833e127;  */

void FUN_10833e0cc(undefined1 (*param_1) [16],int *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  auVar1 = *param_1;
  auVar10 = NEON_ext(auVar1,auVar1,8,1);
  uVar8 = (long)auVar1._0_4_ + (long)-*param_2;
  uVar9 = (long)auVar1._4_4_ + (long)-param_2[1];
  uVar6 = (long)auVar10._0_4_ - (long)-*param_2;
  uVar7 = (long)auVar10._4_4_ - (long)-param_2[1];
  uVar8 = uVar8 ^ (uVar8 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar8);
  uVar9 = uVar9 ^ (uVar9 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar9);
  uVar6 = uVar6 ^ (uVar6 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar6);
  uVar7 = uVar7 ^ (uVar7 ^ 0xffffffff80000001) & ~-(ulong)(-0x7fffffff < (long)uVar7);
  uVar4 = (uint)uVar6;
  uVar5 = (uint)uVar7;
  uVar2 = (uint)uVar8;
  uVar3 = (uint)uVar9;
  *(uint *)(*param_1 + 8) = uVar4 ^ (uVar4 ^ 0x7fffffff) & ~-(uint)((long)uVar6 < 0x7fffffff);
  *(uint *)(*param_1 + 0xc) = uVar5 ^ (uVar5 ^ 0x7fffffff) & ~-(uint)((long)uVar7 < 0x7fffffff);
  *(uint *)*param_1 = uVar2 ^ (uVar2 ^ 0x7fffffff) & ~-(uint)((long)uVar8 < 0x7fffffff);
  *(uint *)(*param_1 + 4) = uVar3 ^ (uVar3 ^ 0x7fffffff) & ~-(uint)((long)uVar9 < 0x7fffffff);
  return;
}



/* Entry: 10833e128; end: 10833e1d7;  */

undefined8 FUN_10833e128(long *param_1,long *param_2,undefined8 *param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_60);
  if (((ulong)param_1 & 1) != 0) {
    if (param_2 != (long *)0x0) {
      func_0x000108152830(param_2,&uStack_50);
      param_1 = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = uStack_58;
    }
    uVar1 = uStack_60;
    if (param_4 == (ulong *)0x0) goto LAB_10833e1b4;
    func_0x000108341e9c();
    FUN_108346c64();
    if ((int)param_1 != 0) {
      func_0x000108341e9c();
      FUN_108346cac();
      *param_4 = (ulong)param_1;
      uVar1 = uStack_60;
      goto LAB_10833e1b4;
    }
  }
  uVar1 = 0;
LAB_10833e1b4:
  func_0x000108341768(uStack_50);
  return uVar1;
}



/* Entry: 10833e1d8; end: 10833e1e3;  */

long * FUN_10833e1d8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
  func_0x0001083485fc();
  (**(code **)(*plVar1 + 0x1e8))();
  func_0x0001083485cc();
  return plVar1;
}



/* Entry: 10833e1e4; end: 10833e2af;  */

void FUN_10833e1e4(float param_1,float param_2,long *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    return;
  }
  func_0x000108342320();
  func_0x00010834225c(param_3[0x188] + 0x18);
  FUN_10835e73c();
  func_0x000108342108();
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x98);
  func_0x00010834225c(param_3);
                    /* WARNING: Could not recover jumptable at 0x000108342310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10833e2b0; end: 10833e353;  */

void FUN_10833e2b0(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_60 [64];
  
  func_0x000108341e84();
  func_0x0001081420b8();
  if ((param_2 & 1) == 0) {
    func_0x00010818d67c(auStack_60);
    func_0x00010833e2f0();
  }
  return;
}



/* Entry: 10833e354; end: 10833e38b;  */

undefined4 * FUN_10833e354(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  uVar7 = param_2[3];
  func_0x00010835f3a0();
  func_0x00010835f3a0(param_2[4],param_2[5],param_2[6],param_2[7]);
  func_0x00010835f3d8();
  uVar8 = param_2[0xb];
  func_0x00010835f3a0(param_2[8],param_2[9],param_2[10]);
  func_0x00010835f3a8();
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar9 = param_2[0xf];
  func_0x00010835f3a0();
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  param_1[4] = unaff_s12;
  param_1[5] = unaff_s13;
  param_1[6] = unaff_s14;
  param_1[7] = unaff_s15;
  param_1[8] = unaff_s8;
  param_1[9] = unaff_s9;
  param_1[10] = unaff_s10;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar9;
  return param_1;
}



/* Entry: 10833e38c; end: 10833e3eb;  */

void FUN_10833e38c(void)

{
  func_0x000108341e10();
  func_0x00010818d67c();
  func_0x00010833e3b8();
  return;
}



/* Entry: 10833e3ec; end: 10833e43f;  */

void FUN_10833e3ec(undefined8 param_1,int param_2)

{
  long *unaff_x21;
  
  func_0x000108342398();
  FUN_1082ffd68();
  if (param_2 != 0) {
    func_0x00010833c27c();
    FUN_1082d8624();
    func_0x000108341f64();
    func_0x000108342298(*(undefined8 *)(*unaff_x21 + 0x170));
  }
  return;
}



/* Entry: 10833e440; end: 10833e46f;  */

void FUN_10833e440(void)

{
  long extraout_x8;
  
  func_0x000108341d28();
  (**(code **)(extraout_x8 + 0x38))();
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e470; end: 10833e497;  */

void FUN_10833e470(long *param_1)

{
  func_0x00010833c27c();
                    /* WARNING: Could not recover jumptable at 0x0001083422f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1);
  return;
}



/* Entry: 10833e498; end: 10833e513;  */

void FUN_10833e498(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc40) + 8);
  uStack_28 = *(undefined8 *)(lVar2 + 0x20);
  uStack_30 = 0;
  if ((-1 < *(int *)(param_1 + 0xc88)) && (lVar2 == *(long *)(param_1 + 0xc48))) {
    puVar1 = &uStack_30;
    func_0x00010821b838(puVar1,param_1 + 0xc78);
    if (((ulong)puVar1 & 1) == 0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
  }
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
  (**(code **)(extraout_x8 + 0x58))();
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e514; end: 10833e573;  */

void FUN_10833e514(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010833c27c();
  lVar1 = 0x170;
  if (*(int *)(param_2 + 0x30) != 1) {
    lVar1 = 0x178;
  }
                    /* WARNING: Could not recover jumptable at 0x00010833e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10833e574; end: 10833e5a3;  */

void FUN_10833e574(void)

{
  long extraout_x8;
  
  func_0x000108341d28();
  (**(code **)(extraout_x8 + 0x40))();
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e5a4; end: 10833e687;  */

void FUN_10833e5a4(void)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  func_0x000108342398();
  func_0x00010833c27c();
  if ((*(byte *)(unaff_x22 + 0xe) >> 1 & 1) == 0) {
    FUN_10816eab0(&uStack_80,unaff_x21[0x188] + 0x18);
    FUN_10827a0d8();
    if (iVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uVar2 = unaff_x22;
      FUN_1083773e8();
      if ((int)uVar2 != 0) goto LAB_10833e670;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar2 = unaff_x22;
      FUN_1083777d4();
      if ((int)uVar2 != 0) {
        FUN_108384c90(&uStack_80,&uStack_40);
        goto LAB_10833e670;
      }
      func_0x0001083777e0();
      if ((unaff_x22 & 1) != 0) goto LAB_10833e670;
    }
  }
  func_0x0001083423c0(*(undefined8 *)(*unaff_x21 + 0x180));
LAB_10833e670:
  func_0x000108342298();
  return;
}



/* Entry: 10833e688; end: 10833e6b7;  */

void FUN_10833e688(void)

{
  long extraout_x8;
  
  func_0x000108341d28();
  (**(code **)(extraout_x8 + 0x48))();
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e6b8; end: 10833e74b;  */

void FUN_10833e6b8(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  code *extraout_x8;
  
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
    if ((int)plVar1 == 0) {
      func_0x000108342320();
      *param_2 = 0;
      func_0x0001083423ec(*(undefined8 *)(*param_1 + 0x188));
      (*extraout_x8)();
      func_0x00010834216c();
    }
    else if (param_3 != 1) {
      func_0x000108342328();
    }
  }
  return;
}



/* Entry: 10833e74c; end: 10833e7ab;  */

void FUN_10833e74c(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = param_1;
  if (*param_2 != 0) {
    do {
      func_0x000108341c8c();
      uStack_30 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10833e7ac();
  func_0x000106f47224(&uStack_30);
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e7ac; end: 10833e847;  */

void FUN_10833e7ac(undefined8 param_1,undefined8 *param_2,int param_3)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000108341e84();
  FUN_1083be5fc(auStack_38,*param_2,unaff_x19 + 0x1f);
  func_0x000108342250();
  func_0x000108114f18();
  func_0x00010834216c();
  if (param_3 == 0) {
    FUN_1083be69c(auStack_38,*unaff_x20);
    func_0x000108342250();
    func_0x000108114f18();
    func_0x00010834216c();
  }
  uStack_40 = *unaff_x20;
  *unaff_x20 = 0;
  func_0x000108341ee8(*(undefined8 *)(*unaff_x19 + 0x1f8));
  func_0x000106f47224(&uStack_40);
  return;
}



/* Entry: 10833e848; end: 10833e887;  */

void FUN_10833e848(void)

{
  long *unaff_x21;
  
  func_0x000108341f70();
  func_0x00010833c27c();
                    /* WARNING: Could not recover jumptable at 0x00010833e884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x21 + 400))();
  return;
}



/* Entry: 10833e888; end: 10833e8bf;  */

void FUN_10833e888(long param_1)

{
  long extraout_x8;
  
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
  (**(code **)(extraout_x8 + 0x50))();
  func_0x000108341dcc();
  return;
}



/* Entry: 10833e8c0; end: 10833e8f7;  */

/* WARNING: Removing unreachable block (ram,0x000108390054) */

uint * FUN_10833e8c0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long lVar7;
  uint *puStack_60;
  ulong uStack_58;
  
  if (param_1 != (uint *)0x0) {
    lVar7 = *(long *)(param_1 + 4);
    if (lVar7 == -1) {
      func_0x000108390a10(param_1);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0xffffffffffffffff;
      return (uint *)0x0;
    }
    uVar1 = (ulong)*param_1;
    FUN_108390190(uVar1,param_1[2],param_2);
    uVar2 = (ulong)param_1[1];
    FUN_108390190(uVar2,param_1[3],param_3);
    if (lVar7 == 0) {
      puVar3 = param_1;
      FUN_108287534(param_1,uVar1,uVar2);
      puStack_60 = puVar3;
      uStack_58 = uVar1;
      FUN_10838f5dc(param_1,&puStack_60);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 4);
      FUN_10838f7ec();
      *(undefined8 *)(param_1 + 4) = uVar4;
      puVar3 = param_1;
      FUN_10821a06c(param_1,uVar1,uVar2);
      piVar5 = (int *)(*(long *)(param_1 + 4) + 0x14);
      piVar6 = (int *)(*(long *)(param_1 + 4) + 0x14);
      *(int *)(*(long *)(param_1 + 4) + 0x10) = *(int *)(*(long *)(param_1 + 4) + 0x10) + (int)uVar2
      ;
      while (*piVar5 != 0x7fffffff) {
        *piVar6 = *piVar5 + (int)uVar2;
        piVar6[1] = piVar5[1];
        piVar6 = piVar6 + 3;
        for (piVar5 = piVar5 + 3; piVar5[-1] != 0x7fffffff; piVar5 = piVar5 + 2) {
          piVar6[-1] = piVar5[-1] + (int)uVar1;
          *piVar6 = *piVar5 + (int)uVar1;
          piVar6 = piVar6 + 2;
        }
        piVar6[-1] = 0x7fffffff;
      }
      *piVar6 = 0x7fffffff;
      param_1 = puVar3;
    }
  }
  return param_1;
}



/* Entry: 10833e8f8; end: 10833e9b3;  */

void FUN_10833e8f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6)

{
  undefined1 in_OV;
  ulong uVar1;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x000108342370();
  FUN_1082ffd68();
  if (((param_6 != 0) && (uVar1 = unaff_x20, FUN_1083764bc(), (uVar1 & 1) == 0)) &&
     (uVar1 = unaff_x20, FUN_108376360(), (int)uVar1 != 0)) {
    if (unaff_x22 == 0) {
      param_1 = (undefined4)*unaff_x21;
    }
    else {
      func_0x000108142084();
      func_0x000108341f64();
    }
    func_0x0001083763a8();
    FUN_10835e94c(*(long *)(unaff_x19 + 0xc40) + 0x18,unaff_x20);
    uStack_40 = param_1;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    func_0x000108342220();
    if (!(bool)in_OV) {
      func_0x00010814000c(&uStack_40,unaff_x19 + 0xc8c);
    }
  }
  return;
}



/* Entry: 10833e9b4; end: 10833e9df;  */

void FUN_10833e9b4(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_10833bbb4(param_1,0);
  func_0x000108341f64();
  func_0x00010812f180(auStack_20);
  return;
}



/* Entry: 10833e9e0; end: 10833ea0f;  */

void FUN_10833e9e0(long param_1)

{
  long extraout_x8;
  
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
                    /* WARNING: Could not recover jumptable at 0x00010833e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0xa8))();
  return;
}



/* Entry: 10833ea10; end: 10833ea7f;  */

void FUN_10833ea10(undefined8 param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int unaff_w20;
  long *unaff_x22;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x0001083423f8();
    if (*(int *)(param_3 + 0x30) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x22 + 0xc0);
      func_0x000108342138();
                    /* WARNING: Could not recover jumptable at 0x000108341fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_108281a6c();
    if (unaff_w20 != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*unaff_x22 + 200);
      func_0x000108341f58();
                    /* WARNING: Could not recover jumptable at 0x000108341fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  return;
}



/* Entry: 10833ea80; end: 10833eaab;  */

void FUN_10833ea80(void)

{
  long *unaff_x20;
  
  func_0x0001083420d8();
  func_0x000108341f64();
  func_0x000108341d8c(*(undefined8 *)(*unaff_x20 + 0xb8));
  return;
}



/* Entry: 10833eaac; end: 10833eacf;  */

void FUN_10833eaac(long *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)param_2[1] == -1) {
    return;
  }
  if (*(long *)param_2[1] == 0) {
    auVar1 = NEON_scvtf(*param_2,4);
    uStack_18 = auVar1._8_8_;
    uStack_20 = auVar1._0_8_;
    FUN_10833ea80(param_1,&uStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010833eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}



/* Entry: 10833ead0; end: 10833eafb;  */

void FUN_10833ead0(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar1 = NEON_scvtf(*param_2,4);
  uStack_18 = auVar1._8_8_;
  uStack_20 = auVar1._0_8_;
  FUN_10833ea80(param_1,&uStack_20);
  return;
}



/* Entry: 10833eafc; end: 10833eb27;  */

void FUN_10833eafc(void)

{
  long *unaff_x20;
  
  func_0x0001083420d8();
  func_0x000108341f64();
  func_0x000108341d8c(*(undefined8 *)(*unaff_x20 + 0xd0));
  return;
}



/* Entry: 10833eb28; end: 10833ebaf;  */

void FUN_10833eb28(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *extraout_x8;
  long *unaff_x21;
  undefined1 auStack_38 [8];
  
  plVar1 = param_3;
  func_0x000108341f70();
  if (*plVar1 == 0) {
    FUN_108333b64(auStack_38,0xd);
    func_0x000108342250();
    FUN_108166224(param_3);
    FUN_108154c6c(auStack_38);
  }
  *param_3 = 0;
  func_0x0001083421d0(*(undefined8 *)(*unaff_x21 + 0x140));
  (*extraout_x8)();
  func_0x000108341ea8();
  return;
}



/* Entry: 10833ebb0; end: 10833ed1b;  */

void FUN_10833ebb0(undefined8 param_1,long param_2,undefined8 *param_3,float *param_4,
                  undefined4 param_5,long param_6)

{
  undefined8 uVar1;
  int iVar2;
  code *extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  ulong auStack_e8 [2];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  ulong uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((param_2 != 0) && (*param_4 < param_4[2])) && (param_4[1] < param_4[3])) {
    func_0x000108341f70();
    uStack_38 = 0;
    uStack_58 = param_3[3];
    uStack_60 = param_3[2];
    uStack_48 = param_3[5];
    puStack_50 = (undefined8 *)param_3[4];
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    if (puStack_50 == (undefined8 *)0x0) {
      uStack_38 = *(undefined8 *)(unaff_x20 + 0x20);
      puStack_50 = &uStack_40;
    }
    uStack_40 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_84 = 0x3f800000;
    uStack_7c = 0x40800000;
    if (param_6 != 0) {
      FUN_108376024(&uStack_c0,param_6);
      uVar1 = uStack_b0;
      auStack_e8[0] = 0;
      uStack_b0 = 0;
      FUN_108376540(uVar1);
      FUN_10810c718(auStack_e8);
      uStack_7c = uStack_7c & 0xfffffffeffffffff;
    }
    iVar2 = *(int *)(unaff_x20 + 0x20);
    FUN_10835d630(iVar2,*(undefined4 *)(unaff_x20 + 0x24),&uStack_70);
    if (iVar2 == 0) {
      uStack_c8 = NEON_scvtf(*(undefined8 *)(unaff_x20 + 0x20),4);
      uStack_d0 = 0;
      auStack_e8[0] = auStack_e8[0] & 0xffffff0000000000;
      auStack_e8[1] = 0;
      uStack_d4 = 0;
      uStack_d8 = param_5;
      func_0x0001083421d0();
      FUN_10833ed1c();
    }
    else {
      func_0x0001083421d0(*(undefined8 *)(*unaff_x21 + 0x120));
      (*extraout_x8)();
    }
    func_0x000108342118();
  }
  return;
}



/* Entry: 10833ed1c; end: 10833edbf;  */

void FUN_10833ed1c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (((param_2 != 0) && (uVar1 = param_4, FUN_108340070(), (int)uVar1 != 0)) &&
     (uVar1 = param_3, FUN_108340070(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010833eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  return;
}



/* Entry: 10833edc0; end: 10833ede3;  */

void FUN_10833edc0(long *param_1,long param_2)

{
  int in_w5;
  
  if ((param_2 != 0) && (0 < in_w5)) {
                    /* WARNING: Could not recover jumptable at 0x00010833eddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x128))();
    return;
  }
  return;
}



/* Entry: 10833ede4; end: 10833ee1f;  */

void FUN_10833ede4(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x000108341f70();
  func_0x000108341eb8();
  if (param_1 != 0) {
    func_0x000108341e1c();
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 0x168);
    func_0x000108342138();
                    /* WARNING: Could not recover jumptable at 0x000108341fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10833ee20; end: 10833ee73;  */

void FUN_10833ee20(long *param_1,undefined8 param_2)

{
  undefined1 auStack_50 [16];
  
  func_0x0001083423cc();
  FUN_1082d8624(param_2);
  func_0x000108341f64();
  func_0x000108342040(*(undefined8 *)(*param_1 + 0x168),param_1,auStack_50);
  return;
}



/* Entry: 10833ee74; end: 10833efc3;  */

void FUN_10833ee74(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_7 == 0) goto LAB_10833ef80;
  if (*(long *)(param_7 + 0x20) == 0) {
    if (((int)param_3 != 1) || (*(long *)(param_7 + 0x10) == 0)) goto LAB_10833ef80;
  }
  else if ((int)param_3 != 1) goto LAB_10833ef80;
  uVar3 = *(uint *)(param_2 + 5);
  if ((int)uVar3 < 0) {
    bVar1 = true;
  }
  else {
    iVar2 = (int)param_5 + uVar3 * 0x28;
    FUN_1082878d0();
    if (iVar2 == 0) goto LAB_10833ef80;
    uVar3 = *(uint *)(param_2 + 5);
    pfVar4 = (float *)(param_5 + (long)(int)uVar3 * 0x28);
    if (*pfVar4 <= 0.0) goto LAB_10833ef80;
    bVar1 = 0.0 < pfVar4[4];
  }
  if (((*(byte *)((long)param_2 + 0x34) & 1) == 0) && (bVar1)) {
    uStack_58 = param_2[4];
    uStack_60 = param_2[3];
    if (-1 < (int)uVar3) {
      func_0x000108342340(param_5 + (ulong)uVar3 * 0x28,&uStack_60);
    }
    FUN_10833ed1c(param_1,*param_2,param_2 + 1,&uStack_60,param_6,param_7,param_8);
    return;
  }
LAB_10833ef80:
                    /* WARNING: Could not recover jumptable at 0x00010833efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 10833efc4; end: 10833efdb;  */

void FUN_10833efc4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0xc70);
  if (plVar1 == (long *)0x0) {
    return;
  }
  *(undefined4 *)((long)plVar1 + 0x24) = 0;
  if (plVar1[6] == 0) {
    pcVar2 = *(code **)(*plVar1 + 0x80);
  }
  else {
    if (*(int *)(plVar1[6] + 8) != 1) {
      (**(code **)(*plVar1 + 0x88))();
      if ((int)plVar1 == 0) {
        return;
      }
      func_0x0001083b93b4();
      return;
    }
    func_0x0001083b93b4();
    pcVar2 = *(code **)(*plVar1 + 0x90);
  }
  (*pcVar2)(plVar1);
  return;
}



/* Entry: 10833efdc; end: 10833f057;  */

void FUN_10833efdc(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  code *extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_88 [104];
  
  func_0x000108341e84();
  FUN_1083764bc();
  if ((param_2 & 1) == 0) {
    func_0x000108341ef4();
    (*extraout_x8)();
    if ((param_2 & 1) == 0) {
      FUN_10833b874(auStack_88);
      func_0x000108341e68();
      if ((bool)in_ZR) {
        func_0x000108341edc(*(undefined8 *)(unaff_x19 + 0xc40));
        (**(code **)(extraout_x8_00 + 0xf0))();
      }
      func_0x000108341d18();
    }
  }
  return;
}



/* Entry: 10833f058; end: 10833f167;  */

void FUN_10833f058(ulong param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [72];
  uint uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((0 < param_3) && (uVar2 = param_5, FUN_1083764bc(), (uVar2 & 1) == 0)) {
    uStack_50 = 0;
    uStack_48 = 0;
    uVar1 = param_3 == 2;
    if ((bool)uVar1) {
      FUN_10833f168(&uStack_50,param_4,param_4 + 8);
    }
    else {
      FUN_10838eb84(&uStack_50,param_4,param_3);
    }
    FUN_108375f34(auStack_a0,param_5);
    uStack_58 = uStack_58 & 0xffffff3f | 0x40;
    uVar2 = param_1;
    func_0x000108341d70(param_1,&uStack_50,auStack_a0);
    if ((uVar2 & 1) == 0) {
      FUN_10833ba08(auStack_108,param_1,auStack_a0,&uStack_50);
      func_0x000108341e68();
      if ((bool)uVar1) {
        func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
        (**(code **)(extraout_x8 + 0xf8))();
      }
      func_0x000108341d18();
    }
    func_0x000108341f34();
  }
  return;
}



/* Entry: 10833f168; end: 10833f1bb;  */

void FUN_10833f168(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_3;
  if (*param_2 <= *param_3) {
    fVar1 = *param_2;
  }
  *param_1 = fVar1;
  fVar1 = *param_3;
  if (*param_3 <= *param_2) {
    fVar1 = *param_2;
  }
  param_1[2] = fVar1;
  fVar1 = param_3[1];
  if (param_2[1] <= param_3[1]) {
    fVar1 = param_2[1];
  }
  param_1[1] = fVar1;
  fVar1 = param_3[1];
  if (param_3[1] <= param_2[1]) {
    fVar1 = param_2[1];
  }
  param_1[3] = fVar1;
  return;
}



/* Entry: 10833f1bc; end: 10833f26b;  */

long * FUN_10833f1bc(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  undefined1 auStack_48 [4];
  float fStack_44;
  
  func_0x000108341e84();
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
  iVar1 = (int)param_1;
  (**(code **)(extraout_x8 + 0x90))();
  plVar2 = (long *)0x0;
  if ((iVar1 != 0) && (*unaff_x20 == 0)) {
    FUN_1083a6264(0x3f800000,auStack_48);
    if ((0.0 <= fStack_44) ||
       (((plVar2 = (long *)unaff_x20[2], plVar2 == (long *)0x0 ||
         (plVar3 = plVar2, (**(code **)(*plVar2 + 0x48))(), (int)plVar3 != 0)) ||
        ((int)plVar2[2] != 0)))) {
      plVar2 = (long *)0x0;
    }
    else {
      func_0x00010833b800(auStack_48);
      iVar1 = (int)auStack_48;
      FUN_108363c84(0x39800000);
      if (iVar1 == 0) {
        plVar2 = (long *)0x0;
      }
    }
  }
  return plVar2;
}



/* Entry: 10833f26c; end: 10833f343;  */

void FUN_10833f26c(void)

{
  undefined8 in_x4;
  long extraout_x8;
  undefined1 *unaff_x19;
  ulong unaff_x22;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [96];
  char cStack_38;
  
  func_0x000108342370(in_x4);
  FUN_10833b874(auStack_98);
  if (cStack_38 == '\x01') {
    func_0x00010833b800(auStack_c0);
    FUN_10833a61c();
    func_0x000108341e1c();
    (**(code **)(extraout_x8 + 0x1c8))();
    if ((unaff_x22 & 1) == 0) {
      FUN_1083429d4(auStack_98);
      *unaff_x19 = 0;
      unaff_x19[0x60] = 0;
      if (cStack_38 == '\x01') {
        func_0x000108341870();
      }
      goto LAB_10833f2e0;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[0x60] = 0;
LAB_10833f2e0:
  FUN_108341850(auStack_98);
  return;
}



/* Entry: 10833f344; end: 10833f407;  */

void FUN_10833f344(ulong param_1)

{
  long extraout_x8;
  undefined1 auStack_144 [52];
  undefined1 auStack_110 [104];
  undefined1 uStack_a8;
  char cStack_48;
  
  func_0x000108341c9c();
  func_0x000108341d70();
  if ((param_1 & 1) == 0) {
    uStack_a8 = 0;
    cStack_48 = '\0';
    func_0x000108341f4c();
    if (param_1 == 0) {
      func_0x000108341f58(auStack_110);
      FUN_10833b874();
      func_0x000108341da8();
    }
    else {
      func_0x000108277358(auStack_144);
      func_0x000108342238();
      FUN_10833f26c();
      func_0x000108341da8();
    }
    func_0x000108341f44();
    if (cStack_48 == '\x01') {
      func_0x000108341cc4();
      func_0x0001083421a8(*(undefined8 *)(extraout_x8 + 0x100));
    }
    func_0x0001083420e8();
  }
  return;
}



/* Entry: 10833f408; end: 10833f467;  */

void FUN_10833f408(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000108341c9c();
  FUN_10817500c();
  func_0x000108341c50();
  if ((param_2 & 1) == 0) {
    func_0x0001083423e0();
    func_0x000108341f58();
    FUN_10833ba08();
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341cc4();
      func_0x0001083421a8(*(undefined8 *)(extraout_x8 + 0x108));
    }
    func_0x000108341d18();
  }
  return;
}



/* Entry: 10833f468; end: 10833f59b;  */

void FUN_10833f468(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_118 [104];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  ulong uStack_48;
  
  plVar6 = *(long **)(*(long *)(param_5 + 0xc40) + 8);
  if (plVar6 != (long *)0x0) {
    FUN_10840ed0c(auStack_68,param_5 + 0xc08,1);
    do {
      puVar1 = auStack_68;
      func_0x00010840edac();
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      plVar4 = *(long **)(puVar1 + 0x10);
    } while (plVar4 == (long *)0x0);
    uVar2 = (ulong)*(uint *)(plVar4 + 1);
    uVar3 = (ulong)*(uint *)((long)plVar4 + 0xc);
    lVar5 = *plVar4;
    FUN_108219ff8(uVar2,uVar3,*(int *)(lVar5 + 0x14) - *(int *)(lVar5 + 0xc),
                  *(int *)(lVar5 + 0x18) - *(int *)(lVar5 + 0x10));
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    func_0x000108341ef4();
    (*extraout_x8)();
    uStack_a8 = 0;
    uStack_b0 = 0x3f800000;
    uStack_98 = 0;
    uStack_a0 = 0x3f80000000000000;
    uVar7 = 0;
    uVar8 = 0;
    uStack_88 = 0x3f800000;
    uStack_90 = 0;
    uStack_78 = 0x3f80000000000000;
    uStack_80 = 0;
    FUN_1083418c4(auStack_118,plVar6,&uStack_b0);
    FUN_10817500c(&uStack_50);
    uStack_b0 = CONCAT44(uVar8,uVar7);
    uStack_a8 = CONCAT44(param_4,param_3);
    func_0x000108341ff0(*(undefined8 *)(*plVar6 + 0x38),plVar6,&uStack_b0);
    FUN_1083418fc(auStack_118);
    func_0x000108341f58(auStack_118);
    func_0x0001083422d4();
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341cc4();
      (**(code **)(extraout_x8_00 + 0xf0))();
    }
    (**(code **)(*plVar6 + 0x30))(plVar6);
    func_0x000108341d18();
  }
  return;
}



/* Entry: 10833f59c; end: 10833f657;  */

void FUN_10833f59c(ulong param_1)

{
  long extraout_x8;
  undefined1 auStack_144 [52];
  undefined1 auStack_110 [104];
  undefined1 uStack_a8;
  char cStack_48;
  
  func_0x000108341c9c();
  func_0x000108341d70();
  if ((param_1 & 1) == 0) {
    uStack_a8 = 0;
    cStack_48 = '\0';
    func_0x000108341f4c();
    if (param_1 == 0) {
      func_0x000108341f58(auStack_110);
      FUN_10833ba08();
      func_0x000108341da8();
    }
    else {
      FUN_1081779a8(auStack_144);
      func_0x000108342238();
      func_0x000108342348();
      func_0x000108341da8();
    }
    func_0x000108341f44();
    if (cStack_48 == '\x01') {
      func_0x000108341cc4();
      func_0x0001083421a8(*(undefined8 *)(extraout_x8 + 0x110));
    }
    func_0x0001083420e8();
  }
  return;
}



/* Entry: 10833f658; end: 10833f783;  */

void FUN_10833f658(undefined4 param_1,float param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 auStack_154 [52];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  float fStack_10c;
  undefined1 uStack_108;
  undefined1 auStack_b8 [96];
  char cStack_58;
  
  func_0x000108341f70();
  func_0x000108341d70();
  if ((param_3 & 1) == 0) {
    auStack_b8[0] = 0;
    cStack_58 = '\0';
    func_0x0001083423c0();
    FUN_10833f1bc();
    if (360.0 <= ABS(param_2) && param_3 != 0) {
      FUN_1081779a8(auStack_154);
      func_0x000108342348(&uStack_120);
      func_0x0001083422dc();
    }
    else {
      func_0x000108342144(&uStack_120);
      func_0x0001083422dc();
    }
    func_0x000108341f44();
    if (cStack_58 == '\x01') {
      plVar1 = *(long **)(*(long *)(unaff_x21 + 0xc40) + 8);
      uStack_118 = unaff_x20[1];
      uStack_120 = *unaff_x20;
      uStack_110 = param_1;
      fStack_10c = param_2;
      uStack_108 = param_5;
      (**(code **)(*plVar1 + 0x118))(plVar1,&uStack_120,auStack_b8);
    }
    FUN_108341850(auStack_b8);
  }
  return;
}



/* Entry: 10833f784; end: 10833f89f;  */

void FUN_10833f784(ulong param_1,long param_2)

{
  long extraout_x8;
  long *unaff_x20;
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [96];
  char cStack_38;
  
  func_0x000108341c9c();
  if (*(int *)(param_2 + 0x30) == 2) {
    func_0x000108341e90();
    func_0x0001083420d8();
    func_0x000108341f64();
    func_0x000108341d8c(*(undefined8 *)(*unaff_x20 + 0xd0));
  }
  else {
    if (*(int *)(param_2 + 0x30) != 1) {
      func_0x000108341e90();
      func_0x000108341cf4();
      if ((param_1 & 1) == 0) {
        auStack_98[0] = 0;
        cStack_38 = '\0';
        func_0x000108341f4c();
        if (param_1 == 0) {
          func_0x000108341f58(auStack_100);
          FUN_10833ba08();
          func_0x0001083422b4();
        }
        else {
          func_0x000108342138(auStack_100);
          func_0x000108342348();
          func_0x0001083422b4();
        }
        FUN_108341850(auStack_100);
        if (cStack_38 == '\x01') {
          func_0x000108341cc4();
          func_0x0001083421a8(*(undefined8 *)(extraout_x8 + 0x120));
        }
        FUN_108341850(auStack_98);
      }
      return;
    }
    func_0x000108341e90();
    func_0x0001083420d8();
    func_0x000108341f64();
    func_0x000108341d8c(*(undefined8 *)(*unaff_x20 + 0xb8));
  }
  return;
}



/* Entry: 10833f8a0; end: 10833f8fb;  */

void FUN_10833f8a0(ulong param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined1 auStack_98 [104];
  
  func_0x000108341f70();
  func_0x000108341d70();
  if ((param_1 & 1) == 0) {
    func_0x000108342144(auStack_98);
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341e1c();
      func_0x0001083420f8(*(undefined8 *)(extraout_x8 + 0x128));
    }
    func_0x000108341d18();
  }
  return;
}



/* Entry: 10833f8fc; end: 10833f9d7;  */

void FUN_10833f8fc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  float *pfVar1;
  ulong uVar2;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  float *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  func_0x000108341c9c();
  func_0x000108377398();
  if (param_2 == 0) {
    return;
  }
  pfVar1 = unaff_x19;
  func_0x0001083773e0();
  if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) == 0) {
    uVar2 = unaff_x20;
    func_0x000108341cf4();
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((*(byte *)((long)unaff_x19 + 0xe) >> 1 & 1) == 0) goto LAB_10833f978;
  }
  in_ZR = pfVar1[2] - *pfVar1 == 0.0;
  if ((pfVar1[2] - *pfVar1 <= 0.0) &&
     (in_ZR = pfVar1[3] - pfVar1[1] == 0.0, pfVar1[3] - pfVar1[1] <= 0.0)) {
    func_0x000108341e84();
    FUN_1083764bc();
    if ((unaff_x21 & 1) == 0) {
      func_0x000108341ef4();
      (*extraout_x8)();
      if ((unaff_x21 & 1) == 0) {
        FUN_10833b874(auStack_88,unaff_x19,unaff_x20,0,4);
        func_0x000108341e68();
        if ((bool)in_ZR) {
          func_0x000108341edc(*(undefined8 *)(unaff_x19 + 0x310));
          (**(code **)(extraout_x8_00 + 0xf0))();
        }
        func_0x000108341d18();
      }
    }
    return;
  }
LAB_10833f978:
  func_0x000108341f58(auStack_98);
  FUN_10833ba08();
  func_0x000108341e68();
  if ((bool)in_ZR) {
    func_0x000108341cc4();
    (**(code **)(extraout_x8_01 + 0x130))();
  }
  func_0x000108341d18();
  return;
}



/* Entry: 10833f9d8; end: 10833fe83;  */

void FUN_10833f9d8(float *param_1,long param_2,float *param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  long *plVar6;
  undefined1 *puVar7;
  float *pfVar8;
  long **pplVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w11;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_720 [200];
  undefined1 *puStack_658;
  long **pplStack_650;
  undefined1 auStack_5d0 [336];
  long lStack_480;
  undefined1 auStack_478 [104];
  undefined8 uStack_410;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined1 uStack_3f8;
  char cStack_3a8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [192];
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c4 [208];
  byte bStack_f4;
  long lStack_f0;
  long *plStack_e8;
  float *pfStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  
  FUN_10833fe84(auStack_c0,param_6);
  FUN_10833ff0c(auStack_d8,param_5,param_7);
  pfVar5 = param_1;
  pfVar8 = param_4;
  func_0x000108341d70(param_1,param_4,auStack_c0);
  if (((ulong)pfVar5 & 1) != 0) goto LAB_10833fd90;
  func_0x000108341cb4();
  (**(code **)(extraout_x8 + 0x140))();
  iVar4 = 0;
  if ((int)pfVar5 != 0) {
    func_0x000108341cb4();
    pfVar8 = param_1;
    (**(code **)(extraout_x8_00 + 0x148))();
    iVar4 = (int)pfVar5;
    if (((ulong)pfVar5 & 1) != 0) goto LAB_10833fd90;
  }
  if (lStack_a0 == 0) {
LAB_10833fcc8:
    if (lStack_b0 != 0) goto LAB_10833fcd0;
  }
  else {
    if (0x1a < *(uint *)(param_2 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10833fdc0);
      (*pcVar2)();
    }
    if ((1 << (ulong)(*(uint *)(param_2 + 0x18) & 0x1f) & 0x7affffdU) == 0) goto LAB_10833fcc8;
    if (lStack_b0 == 0) {
      plVar10 = *(long **)(*(long *)(param_1 + 0x310) + 8);
      fVar12 = *param_4;
      fVar13 = param_4[1];
      fVar14 = param_4[2];
      fVar11 = param_4[3];
      plVar6 = plVar10;
      (**(code **)(*plVar10 + 0x20))();
      lStack_f0 = 0;
      plStack_e8 = plVar6;
      pfStack_e0 = pfVar8;
      if (lStack_a0 != 0) {
        do {
          func_0x000108341c8c();
          lStack_f0 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      plVar6 = &lStack_f0;
      if (lStack_f0 == 0) {
        plVar6 = (long *)0x0;
      }
      uStack_3f8 = 1;
      fStack_408 = fVar12;
      fStack_404 = fVar13;
      fStack_400 = fVar14;
      fStack_3fc = fVar11;
      FUN_10833d96c(0x3f800000,auStack_1c4,plVar6,lStack_f0 != 0,plVar10 + 7,&plStack_e8,&fStack_408
                   );
      if (((bStack_f4 & 1) != 0) && (func_0x000108341eb8(), (int)param_1 != 0)) {
        plVar6 = plVar10 + 2;
        FUN_10833d934(plVar6);
        (**(code **)(*plVar10 + 0x1d0))(&uStack_1d0,plVar10,plVar10 + 5,plVar6);
        func_0x000108342368(auStack_2a0,auStack_1c4);
        uStack_410 = uStack_1d0;
        uStack_2b0 = 0;
        uStack_2b8 = 0;
        uStack_2a8 = 0;
        uStack_1d0 = 0;
        FUN_10833dd8c(auStack_5d0);
        FUN_108341434(&fStack_408,&uStack_410,auStack_2a0,auStack_1e0,auStack_5d0,plVar10[2],
                      &uStack_2b8);
        func_0x000108342078();
        FUN_1082e4260(&uStack_410);
        do {
          func_0x000108341d44();
        } while (extraout_w10 != 0);
        lStack_480 = param_2;
        FUN_108359c68(auStack_478,*param_3,param_3[1],param_3[2],param_3[3],fVar12,fVar13,fVar14,
                      fVar11,&fStack_408,&lStack_480,param_5);
        func_0x000106f47184(&lStack_480);
        FUN_10833df2c(auStack_5d0,&fStack_408,auStack_478,auStack_c0);
        FUN_10833de08(auStack_478,auStack_5d0);
        func_0x000108342078();
        puVar7 = auStack_2a0;
        pplVar9 = &plStack_e8;
        func_0x00010833de38();
        FUN_1083415ec(auStack_720,&fStack_408);
        puStack_658 = puVar7;
        pplStack_650 = pplVar9;
        FUN_10833dea4(auStack_5d0,auStack_720,auStack_478);
        FUN_10833dee0(&fStack_408,auStack_5d0);
        FUN_108341670(auStack_5d0);
        FUN_108341670(auStack_720);
        FUN_108355a30(auStack_5d0,lStack_a0,&fStack_408);
        FUN_1083595b0(auStack_5d0,&fStack_408,plVar10,uStack_98);
        func_0x000108342078();
        FUN_1083414c4(auStack_478);
        FUN_108341670(&fStack_408);
        FUN_1082e4260(&uStack_1d0);
      }
      FUN_10811e834(&lStack_f0);
      goto LAB_10833fd90;
    }
LAB_10833fcd0:
    func_0x000108341cb4();
    (**(code **)(extraout_x8_02 + 0x90))();
    if (iVar4 != 0) {
      fVar11 = *param_3;
      fVar12 = param_3[1];
      fVar13 = param_3[2];
      fVar14 = param_3[3];
      func_0x000108342034();
      FUN_1083bb878();
      bVar3 = false;
      if ((fVar11 < fVar13) && (bVar3 = false, !NAN(fVar12) && !NAN(fVar14))) {
        bVar3 = fVar12 < fVar14;
      }
      fStack_408 = fVar11;
      fStack_404 = fVar12;
      fStack_400 = fVar13;
      fStack_3fc = fVar14;
      if (bVar3) {
        FUN_10833ea80(param_1,&fStack_408,auStack_c0);
      }
      goto LAB_10833fd90;
    }
  }
  uVar1 = 5;
  if (*(int *)(param_2 + 0x1c) != 1) {
    uVar1 = 6;
  }
  FUN_10833b874(&fStack_408,param_1,auStack_c0,param_4,uVar1);
  if (cStack_3a8 == '\x01') {
    func_0x000108341cb4();
    (**(code **)(extraout_x8_03 + 0x138))();
  }
  FUN_108341850(&fStack_408);
LAB_10833fd90:
  FUN_108375e94(auStack_c0);
  return;
}



/* Entry: 10833fe84; end: 10833ff0b;  */

void FUN_10833fe84(undefined8 *param_1,long param_2)

{
  undefined8 uStack_28;
  
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40800000;
  if (param_2 != 0) {
    FUN_108376024();
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffff3f;
    uStack_28 = 0;
    func_0x0001083422cc(param_1);
    func_0x000108115b70(&uStack_28);
  }
  return;
}



/* Entry: 10833ff0c; end: 10833ff67;  */

void FUN_10833ff0c(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    if (param_2[5] != 0) {
      iVar1 = param_2[4];
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 4) = 0;
      param_1[1] = 0;
      *(int *)(param_1 + 2) = iVar1;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      return;
    }
    if (*param_2 != 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)((long)param_1 + 4) = 0;
      param_1[1] = 0;
      param_1[2] = 1;
      return;
    }
  }
  uVar2 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(param_2 + 4);
  return;
}



/* Entry: 10833ff68; end: 10834001b;  */

void FUN_10833ff68(void)

{
  undefined1 in_ZR;
  undefined8 in_x5;
  long extraout_x8;
  code *extraout_x8_00;
  ulong unaff_x23;
  undefined1 auStack_f8 [104];
  undefined1 auStack_90 [80];
  
  func_0x000108342200();
  FUN_10833fe84(auStack_90,in_x5);
  func_0x000108341d70();
  if ((unaff_x23 & 1) == 0) {
    FUN_10833ba08(auStack_f8);
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341cb4();
      func_0x000108342094(*(undefined8 *)(extraout_x8 + 0x150));
      (*extraout_x8_00)();
    }
    func_0x000108341d18();
  }
  func_0x000108341f34();
  return;
}



/* Entry: 10834001c; end: 10834006f;  */

void FUN_10834001c(float param_1,float param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  float fStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    uStack_20 = 0;
    uStack_18 = NEON_scvtf(*(undefined8 *)(param_4 + 0x20),4);
    uStack_28 = CONCAT44(param_2 + (float)((ulong)uStack_18 >> 0x20),param_1 + (float)uStack_18);
    fStack_30 = param_1;
    fStack_2c = param_2;
    FUN_10833ed1c(param_3,param_4,&uStack_20,&fStack_30,param_5,param_6,1);
  }
  return;
}



/* Entry: 108340070; end: 1083400a3;  */

bool FUN_108340070(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)param_1[1] - (float)*param_1;
  fVar5 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)*param_1 >> 0x20);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 0.0;
      bVar2 = fVar4 == 0.0;
      bVar3 = false;
    }
  }
  return (!bVar2 && bVar1 == bVar3) && !NAN((fVar4 - fVar4) * fVar5);
}



/* Entry: 1083400a4; end: 1083400e7;  */

void FUN_1083400a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    uStack_20 = 0;
    uStack_18 = NEON_scvtf(*(undefined8 *)(param_2 + 0x20),4);
    FUN_10833ed1c(param_1,param_2,&uStack_20,param_3,param_4,param_5,1);
  }
  return;
}



/* Entry: 1083400e8; end: 10834011b;  */

void FUN_1083400e8(long param_1)

{
  long extraout_x8;
  
  FUN_108404764(*(undefined8 *)(param_1 + 0xca0));
  func_0x0001083420a0();
  func_0x000108341d8c(*(undefined8 *)(extraout_x8 + 0xf8));
  return;
}



/* Entry: 10834011c; end: 10834017b;  */

void FUN_10834011c(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  
  func_0x000108341c9c();
  FUN_108319c44();
  func_0x000108341c50();
  if ((param_2 & 1) == 0) {
    func_0x0001083423e0();
    func_0x000108341f58();
    func_0x000108342350();
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341e9c();
      func_0x000108342138();
      FUN_1083478e8();
    }
    func_0x000108341d18();
  }
  return;
}



/* Entry: 10834017c; end: 10834022b;  */

void FUN_10834017c(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  
  func_0x000108341f70();
  FUN_108319c44(param_6);
  bVar1 = false;
  if ((param_1 < param_3) && (bVar1 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar1 = param_2 < param_4;
  }
  uVar2 = 0;
  bVar3 = true;
  if (bVar1) {
    uVar2 = 0;
    bVar3 = true;
    if (!NAN(param_4 * param_3 * param_2 * (param_1 - param_1))) {
      uVar2 = 1;
      bVar3 = false;
    }
  }
  if ((bVar3) || (FUN_1083764bc(), param_7 != 0)) {
    *extraout_x8 = 0;
  }
  else {
    func_0x0001083423e0();
    func_0x000108342350();
    func_0x000108341e68();
    if ((bool)uVar2) {
      func_0x000108341e1c();
      (**(code **)(extraout_x8_00 + 0xe0))(extraout_x8);
    }
    else {
      *extraout_x8 = 0;
    }
    func_0x000108341d18();
  }
  return;
}



/* Entry: 10834022c; end: 108340283;  */

void FUN_10834022c(uint param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000108341c9c();
  func_0x0001083420c0();
  func_0x000108341c50();
  if ((param_1 & 1) == 0) {
    func_0x0001083423e0();
    func_0x000108341f58();
    func_0x000108342350();
    func_0x000108341e68();
    if ((bool)in_ZR) {
      func_0x000108341cc4();
      func_0x0001083420f8(*(undefined8 *)(extraout_x8 + 0xe8));
    }
    func_0x000108341d18();
  }
  return;
}



/* Entry: 108340284; end: 108340343;  */

void FUN_108340284(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  
  if (0 < (int)param_2) {
    uStack_80 = (ulong)param_2;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_90 = param_3;
    uStack_88 = param_4;
    if (*param_5 != 0) {
      do {
        func_0x000108341c8c();
        uStack_48 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_40 = (undefined7)param_5[1];
    uStack_39 = (undefined1)*(undefined8 *)((long)param_5 + 0xf);
    uStack_38 = (undefined7)((ulong)*(undefined8 *)((long)param_5 + 0xf) >> 8);
    FUN_1084040d0(auStack_c8,param_1[0x194],&uStack_90,param_6);
    (**(code **)(*param_1 + 0xf8))(param_1,auStack_c8,param_6);
    func_0x0001081298a0(&uStack_48);
  }
  return;
}



/* Entry: 108340344; end: 1083403f3;  */

void FUN_108340344(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 in_OV;
  long *plVar2;
  code *extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  undefined1 auStack_70 [8];
  int iStack_68;
  long lStack_58;
  
  if (param_2 != 0) {
    func_0x000108341f70();
    FUN_108183110(param_2 + 4);
    func_0x000108342220();
    if (!(bool)in_OV) {
      iVar3 = 0;
      lStack_58 = unaff_x20 + 0x28;
      do {
        plVar2 = &lStack_58;
        FUN_1083a8494(plVar2,auStack_70);
        if ((int)plVar2 == 0) {
          func_0x00010834225c(*(undefined8 *)(*unaff_x21 + 0xf0));
          (*extraout_x8)();
          return;
        }
        iVar1 = 0x200000 - iVar3;
        iVar3 = iStack_68 + iVar3;
      } while (iStack_68 <= iVar1);
    }
  }
  return;
}



/* Entry: 1083403f4; end: 1083404e7;  */

void FUN_1083403f4(ulong param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [104];
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [80];
  
  func_0x00010834228c();
  FUN_1083404e8(auStack_80,auStack_d0);
  func_0x000108341f34();
  uVar1 = param_1;
  func_0x000108341d70(param_1,param_2 + 0x28,auStack_80);
  if ((uVar1 & 1) == 0) {
    FUN_10833ba08(auStack_138,param_1,auStack_80,param_2 + 0x28);
    func_0x000108341e68();
    if ((bool)in_ZR) {
      plVar2 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
      FUN_108333b64(auStack_140,param_3);
      (**(code **)(*plVar2 + 0x158))(plVar2,param_2,auStack_140,auStack_138,0);
      func_0x000108341ea8();
    }
    func_0x000108341d18();
  }
  FUN_108375e94(auStack_80);
  return;
}



/* Entry: 1083404e8; end: 10834055b;  */

void FUN_1083404e8(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108341d9c();
  *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffff3f;
  uStack_28 = 0;
  func_0x00010837656c(param_2 + 0x10,0);
  FUN_10810c718(&uStack_28);
  uStack_30 = 0;
  func_0x0001083422cc();
  func_0x000108115b70(&uStack_30);
  func_0x000108341e90();
  func_0x000108375ff8();
  return;
}



/* Entry: 10834055c; end: 108340613;  */

void FUN_10834055c(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 auStack_148 [104];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  func_0x0001083423f8();
  func_0x00010834228c();
  FUN_1083404e8(auStack_90,auStack_e0);
  func_0x000108341f34();
  func_0x0001083422d4(auStack_148);
  func_0x000108341e68();
  if ((bool)in_ZR) {
    plVar1 = *(long **)(*(long *)(unaff_x22 + 0xc40) + 8);
    *unaff_x21 = 0;
    (**(code **)(*plVar1 + 0x160))();
    func_0x000108341ea8();
  }
  func_0x000108341d18();
  FUN_108375e94(auStack_90);
  return;
}



/* Entry: 108340614; end: 10834072f;  */

void FUN_108340614(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  ulong uVar1;
  code *extraout_x8;
  long *plVar2;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [104];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  FUN_108375f34(auStack_e0,param_6);
  FUN_1083404e8(auStack_90,auStack_e0);
  FUN_108375e94(auStack_e0);
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_10838eb84(&uStack_f0,param_2,0xc);
  uVar1 = param_1;
  func_0x000108341d70(param_1,&uStack_f0,auStack_90);
  if ((uVar1 & 1) == 0) {
    func_0x000108342284(auStack_158);
    func_0x000108341e68();
    if ((bool)in_ZR) {
      plVar2 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
      FUN_108333b64(auStack_160,param_5);
      func_0x0001083421c0(*(undefined8 *)(*plVar2 + 0x170),plVar2);
      (*extraout_x8)();
      func_0x000108341ea8();
    }
    func_0x000108341d18();
  }
  FUN_108375e94(auStack_90);
  return;
}



/* Entry: 108340730; end: 1083407b7;  */

void FUN_108340730(undefined8 param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000108341c9c();
  if (param_3 != 0) {
    func_0x0001081420b8();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x158);
  func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108341fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1083407b8; end: 10834093b;  */

void FUN_1083407b8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  code *extraout_x8;
  long *plVar3;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [96];
  char cStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  
  FUN_10833fe84(auStack_100,in_stack_00000008);
  FUN_1083404e8(auStack_b0,auStack_100);
  FUN_108375e94(auStack_100);
  FUN_1083b5b6c(&uStack_108,param_2,in_x7,0);
  uVar1 = uStack_a8;
  uStack_a8 = uStack_108;
  uStack_108 = 0;
  FUN_10834182c(uVar1);
  func_0x000106f47224(&uStack_108);
  if ((in_stack_00000000 == 0) ||
     (uVar2 = param_1, func_0x000108341d70(param_1,in_stack_00000000,auStack_b0), (uVar2 & 1) == 0))
  {
    func_0x0001083422d4(auStack_170,param_1,auStack_b0);
    if (cStack_110 == '\x01') {
      plVar3 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
      FUN_108333b64(auStack_178,in_x6);
      func_0x000108342094(*(undefined8 *)(*plVar3 + 0x178),plVar3);
      (*extraout_x8)();
      FUN_108154c6c(auStack_178);
    }
    FUN_108341850(auStack_170);
  }
  FUN_108375e94(auStack_b0);
  return;
}



/* Entry: 10834093c; end: 108340983;  */

void FUN_10834093c(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  iVar1 = (int)param_1;
  func_0x000108341eb8();
  if (iVar1 != 0) {
    func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
    UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 0x180);
    func_0x0001083421c0();
                    /* WARNING: Could not recover jumptable at 0x000108341fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108340984; end: 108340a0b;  */

void FUN_108340984(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long extraout_x8;
  undefined1 auStack_90 [80];
  
  func_0x0001083423cc();
  FUN_108375edc(auStack_90,param_5,0);
  FUN_1083762f4(auStack_90);
  uVar1 = param_1;
  func_0x000108341d70(param_1,param_2,auStack_90);
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000108341eb8(), (int)uVar1 != 0)) {
    func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
    func_0x000108342040(*(undefined8 *)(extraout_x8 + 0x188));
  }
  func_0x000108341e74();
  return;
}



/* Entry: 108340a0c; end: 108340d33;  */

void FUN_108340a0c(ulong param_1,long param_2,uint param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auStack_230 [64];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_150;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_98;
  
  if ((int)param_3 < 1) {
    return;
  }
  FUN_10833fe84(auStack_b8,param_7);
  puVar7 = auStack_d0;
  FUN_10833ff0c(puVar7,param_6,param_8);
  bVar4 = lStack_a8 != 0;
  uStack_d8 = SUB168(*(undefined1 (*) [16])(param_2 + 0x18),8);
  uStack_e0 = SUB168(*(undefined1 (*) [16])(param_2 + 0x18),0);
  if (-1 < (int)*(uint *)(param_2 + 0x28)) {
    puVar7 = (undefined1 *)(param_5 + (ulong)*(uint *)(param_2 + 0x28) * 0x28);
    func_0x000108342340(puVar7,&uStack_e0);
  }
  iVar6 = (int)puVar7;
  if (lStack_98 != 0 || bVar4) {
    puVar10 = (uint *)(param_2 + 0x60);
    for (uVar9 = 1; iVar6 = (int)puVar7, uVar9 < param_3; uVar9 = uVar9 + 1) {
      uStack_1b0 = *(undefined8 *)(puVar10 + -4);
      uStack_1a8 = *(undefined8 *)(puVar10 + -2);
      if (-1 < (int)*puVar10) {
        puVar7 = (undefined1 *)(param_5 + (ulong)*puVar10 * 0x28);
        func_0x000108342340(puVar7,&uStack_1b0);
      }
      auVar13._8_8_ = uStack_1a8;
      auVar13._0_8_ = uStack_1b0;
      auVar2._8_8_ = uStack_d8;
      auVar2._0_8_ = uStack_e0;
      auVar1._4_4_ = -(uint)((float)((ulong)uStack_1b0 >> 0x20) < (float)((ulong)uStack_e0 >> 0x20))
      ;
      auVar1._0_4_ = -(uint)((float)uStack_1b0 < (float)uStack_e0);
      auVar1._8_4_ = -(uint)((float)uStack_d8 < (float)uStack_1a8);
      auVar1._12_4_ =
           -(uint)((float)((ulong)uStack_d8 >> 0x20) < (float)((ulong)uStack_1a8 >> 0x20));
      auVar13 = auVar13 ^ (auVar13 ^ auVar2) & ~auVar1;
      uStack_d8 = auVar13._8_8_;
      uStack_e0 = auVar13._0_8_;
      puVar10 = puVar10 + 0xe;
    }
  }
  if (param_3 == 1 || (lStack_98 != 0 || bVar4)) {
    uVar9 = param_1;
    func_0x000108341d70(param_1,&uStack_e0,auStack_b8);
    iVar6 = (int)uVar9;
    if ((uVar9 & 1) != 0) goto LAB_108340cd8;
  }
  if (lStack_a8 != 0) {
    func_0x000108341cb4();
    (**(code **)(extraout_x8 + 0x90))();
    if (iVar6 != 0) {
      iVar6 = 0;
      param_2 = param_2 + 0x1c;
      lVar12 = (ulong)param_3 + 1;
      do {
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) break;
        FUN_108375f34(auStack_130,auStack_b8);
        fVar14 = *(float *)(param_2 + -0x10);
        fVar15 = *(float *)(param_2 + -0xc);
        fVar3 = *(float *)(param_2 + -8);
        fStack_140 = (float)FUN_1083bb878(*(undefined8 *)(param_2 + -0x1c),param_6,(int)param_8 == 0
                                          ,auStack_130);
        fStack_134 = fVar3;
        bVar4 = fStack_140 < fVar15;
        bVar5 = fVar14 < fStack_134;
        fStack_13c = fVar14;
        fStack_138 = fVar15;
        if (bVar5 && bVar4) {
          func_0x000108342284(&uStack_1b0);
          if (cStack_150 == '\x01') {
            if (-1 < (int)*(uint *)(param_2 + 0xc)) {
              lVar11 = *(long *)(*(long *)(param_1 + 0xc40) + 8);
              func_0x00010818d67c(auStack_230,param_5 + (ulong)*(uint *)(param_2 + 0xc) * 0x28);
              FUN_10835e5d0(&uStack_1f0,lVar11 + 0x38,auStack_230);
              FUN_108337d68(lVar11,&uStack_1f0);
            }
            plVar8 = *(long **)(*(long *)(param_1 + 0xc40) + 8);
            lVar11 = param_4 + (long)iVar6 * 8;
            if (*(char *)(param_2 + 0x18) == '\0') {
              lVar11 = 0;
            }
            uStack_1e8 = uStack_178;
            uStack_1f0 = uStack_180;
            (**(code **)(*plVar8 + 0x188))
                      (plVar8,&fStack_140,lVar11,*(undefined4 *)(param_2 + 0x14),&uStack_1f0,3);
          }
          iVar6 = iVar6 + (uint)*(byte *)(param_2 + 0x18) * 4;
          func_0x0001083420d0();
        }
        param_2 = param_2 + 0x38;
        FUN_108375e94(auStack_130);
      } while (bVar5 && bVar4);
      goto LAB_108340cd8;
    }
  }
  func_0x000108342284(&uStack_1b0);
  if (cStack_150 == '\x01') {
    func_0x000108341cb4();
    (**(code **)(extraout_x8_00 + 400))();
  }
  func_0x0001083420d0();
LAB_108340cd8:
  FUN_108375e94(auStack_b8);
  return;
}



/* Entry: 108340d34; end: 108340d9b;  */

void FUN_108340d34(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [80];
  
  func_0x000108341fbc();
  func_0x0001083421b0(0x3f800000);
  FUN_108375e28(auStack_70);
  FUN_1083762f4(auStack_70,param_3);
  func_0x000108341ee8(*(undefined8 *)(*param_1 + 0xa8));
  func_0x000108341e74();
  return;
}



/* Entry: 108340d9c; end: 108340e37;  */

void FUN_108340d9c(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x000108342210();
  (**(code **)(*param_1 + 0x108))();
  func_0x000108341fa0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10833eafc();
  return;
}



/* Entry: 108340e38; end: 108340e6b;  */

void FUN_108340e38(undefined8 param_1,float param_2,long *param_3,float *param_4)

{
  bool bVar1;
  
  if (*param_4 < param_4[2]) {
    bVar1 = false;
    if ((param_2 != 0.0) && (bVar1 = false, !NAN(param_4[1]) && !NAN(param_4[3]))) {
      bVar1 = param_4[1] < param_4[3];
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000108340e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0xd8))();
      return;
    }
  }
  return;
}



/* Entry: 108340e6c; end: 108340f3f;  */

void FUN_108340e6c(int param_1,long param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_40 [16];
  
  if (param_2 != 0) {
    lVar1 = param_3;
    func_0x000108341d9c();
    if (lVar1 != 0) {
      func_0x0001081420b8();
      param_1 = (int)param_3;
    }
    func_0x000108341ef4();
    (*extraout_x8)();
    if (1 < param_1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x160);
      func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108340f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*unaff_x19 + 0x20))();
    func_0x000108341f64();
    func_0x000108342278(auStack_40);
    func_0x000108342034(*(undefined8 *)(*unaff_x19 + 0x18));
    (*extraout_x8_00)();
    FUN_1083424c8(auStack_40);
  }
  return;
}



/* Entry: 108340f40; end: 108341023;  */

void FUN_108340f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long in_x3;
  code *extraout_x8;
  ulong unaff_x19;
  long *unaff_x20;
  undefined1 auStack_a0 [80];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  func_0x000108341e84();
  func_0x0001083420c0();
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  if (in_x3 == 0) {
    func_0x000108341fbc();
    param_1 = 0x3f800000;
    func_0x0001083421b0();
  }
  else {
    FUN_108375f34(auStack_a0,in_x3);
  }
  FUN_10833e8f8();
  func_0x000108341e74();
  if ((unaff_x19 & 1) == 0) {
    (**(code **)(*unaff_x20 + 0x20))();
    uStack_50 = param_1;
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    func_0x000108342278(auStack_a0);
    func_0x000108341e90(*(undefined8 *)(*unaff_x20 + 0x18));
    (*extraout_x8)();
    FUN_1083424c8(auStack_a0);
  }
  return;
}



/* Entry: 108341024; end: 10834109b;  */

void FUN_108341024(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000108341d9c();
  func_0x00010834105c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2d);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x25);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 8) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x2d) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x25) = uVar1;
  return;
}



/* Entry: 10834109c; end: 108341153;  */

void FUN_10834109c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = 0;
  func_0x000108342200();
  FUN_1083b93cc();
  if ((param_1 & 1) == 0) {
    *extraout_x8 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10814bdf0();
    if ((uVar1 & 1) == 0) {
      *extraout_x8 = 0;
    }
    else if (param_4 == 0) {
      FUN_108341190(extraout_x8,&uStack_80);
    }
    else {
      FUN_108341154(extraout_x8,&uStack_80,param_4);
    }
    FUN_108330548(&uStack_80);
  }
  return;
}



/* Entry: 108341154; end: 10834118f;  */

void FUN_108341154(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108342334();
  func_0x000108342094();
  FUN_108342e40();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108341190; end: 1083411c7;  */

void FUN_108341190(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108342334();
  FUN_1083430d8();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1083411c8; end: 10834120b;  */

void FUN_1083411c8(undefined8 *param_1)

{
  FUN_10833bdac();
  *param_1 = &PTR_FUN_110a3dca8;
  return;
}



/* Entry: 10834120c; end: 108341217;  */

undefined8 FUN_10834120c(void)

{
  return 1;
}



/* Entry: 108341218; end: 10834126b;  */

undefined8 FUN_108341218(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_48);
  iVar1 = (int)param_1;
  if (iVar1 != 0) {
    func_0x000108341e90();
    FUN_10834126c();
    if (iVar1 != 0) {
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 10834126c; end: 1083412a7;  */

ulong FUN_10834126c(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_3[2];
  uVar3 = param_3[3];
  pcVar2 = (code *)*param_3;
  uVar4 = param_3[1];
  uVar5 = param_1;
  FUN_1083306e4(param_1,param_2,uVar3);
  if ((uVar5 & 1) == 0) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1,uVar4);
    }
    func_0x0001083306b0(param_1);
  }
  else if (lVar1 == 0) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(0,uVar4);
    }
  }
  else {
    FUN_108383e4c(auStack_48,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),uVar3,
                  lVar1,pcVar2,uVar4);
    func_0x000108331358(param_1,auStack_48);
    func_0x000108331364();
  }
  return uVar5;
}



/* Entry: 1083412a8; end: 1083412bb;  */

void FUN_1083412a8(void)

{
  FUN_10833bf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083412bc; end: 108341347;  */

void FUN_1083412bc(void)

{
  return;
}



/* Entry: 108341348; end: 10834137f;  */

void FUN_108341348(long param_1)

{
  undefined1 auStack_48 [40];
  
  FUN_10816eab0(auStack_48,param_1 + 0x40);
  func_0x0001083423ec();
  FUN_1083574e8();
  return;
}



/* Entry: 108341380; end: 10834138b;  */

void FUN_108341380(float *param_1)

{
  func_0x00010835c2ac(*param_1 + 0.001,param_1[1] + 0.001,param_1[2],param_1[3],0xba83126f);
  func_0x00010812f180();
  return;
}



/* Entry: 10834138c; end: 1083413f3;  */

undefined1  [16] FUN_10834138c(long *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if ((ulong)((long *)*param_1)[1] <= (ulong)(long)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083413f4);
    (*pcVar1)();
  }
  lVar3 = *(long *)(*(long *)*param_1 + (long)param_2 * 8);
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    puVar4 = (undefined8 *)param_1[3];
    uStack_20 = *(undefined4 *)(puVar4 + 2);
    uStack_28 = puVar4[1];
    uStack_30 = *puVar4;
    FUN_108355c08(lVar3,lVar2,param_1[2],&uStack_30);
    auVar5._8_8_ = lVar2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  return *(undefined1 (*) [16])param_1[4];
}



/* Entry: 1083413f4; end: 108341433;  */

void FUN_1083413f4(void)

{
  func_0x000108341d60();
  FUN_10833ddc8();
  func_0x000108341fb4();
  return;
}



/* Entry: 108341434; end: 1083414c3;  */

undefined8 *
FUN_108341434(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,int *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  *param_2 = 0;
  *param_1 = uVar3;
  func_0x00010834205c(param_1 + 1,param_3);
  uVar3 = *param_4;
  param_1[0x1a] = param_4[1];
  param_1[0x19] = uVar3;
  FUN_108341774(param_1 + 0x1b,param_5);
  if (param_6 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_6,0x10);
      if (bVar2) {
        *param_6 = *param_6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x28] = param_6;
  param_1[0x29] = param_7;
  return param_1;
}



/* Entry: 1083414c4; end: 1083414eb;  */

undefined8 * FUN_1083414c4(undefined8 *param_1)

{
  FUN_108115b2c(param_1 + 10);
  FUN_1083389d8(*param_1);
  return param_1;
}



/* Entry: 1083414ec; end: 1083415af;  */

void FUN_1083414ec(undefined8 *param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000108341d60();
  *param_1 = extraout_x8;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined8 *)((long)param_1 + 0x1c) = 1;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 3;
  FUN_10814bdfc(&lStack_58,(float)*param_3,(float)param_3[1]);
  unaff_x19[6] = lStack_50;
  unaff_x19[5] = lStack_58;
  unaff_x19[8] = lStack_40;
  unaff_x19[7] = lStack_48;
  unaff_x19[9] = lStack_38;
  unaff_x19[10] = 0;
  lStack_50 = *unaff_x19;
  if (lStack_50 != 0) {
    FUN_1083415b0();
  }
  lStack_58 = 0;
  plVar1 = unaff_x19 + 5;
  plVar2 = &lStack_58;
  FUN_1083578b0();
  unaff_x19[0xb] = (long)plVar1;
  unaff_x19[0xc] = (long)plVar2;
  return;
}



/* Entry: 1083415b0; end: 1083415c7;  */

undefined8 FUN_1083415b0(long param_1)

{
  return CONCAT44(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                  *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc));
}



/* Entry: 1083415c8; end: 1083415eb;  */

void FUN_1083415c8(void)

{
  func_0x000108341d60();
  func_0x000108338a04();
  return;
}


