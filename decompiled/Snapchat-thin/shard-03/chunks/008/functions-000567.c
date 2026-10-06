/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102dd95e4; end: 102dd95eb;  */

void FUN_102dd95e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102dd3cc4(param_1,param_2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102dd95ec; end: 102dd9613;  */

void FUN_102dd95ec(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102dd9614; end: 102dd9647;  */

void FUN_102dd9614(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102dd3f48(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102dd9648; end: 102dd96cf;  */

undefined8 FUN_102dd9648(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102dd96d0; end: 102dd97a3;  */

void FUN_102dd96d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = 0;
  func_0x000102dd6ac4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar3 = 0;
  func_0x000102dd6ad8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar7 = uVar5 + lVar6 + uVar4 & (uVar4 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  lVar6 = uVar8 + 0x10;
  lVar3 = 0;
  func_0x000102dd6ab0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8);
  puVar2 = (undefined8 *)(unaff_x20 + lVar6);
  func_0x000102dd4f5c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar5,unaff_x20 + uVar7,*puVar1,
                      puVar1[1],*puVar2,puVar2[1],
                      unaff_x20 + (uVar4 + lVar6 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 102dd97a4; end: 102dd97e7;  */

long FUN_102dd97a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102dd97e8; end: 102dd97ff;  */

undefined8 * FUN_102dd97e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102dd9800; end: 102dd98cf;  */

void FUN_102dd9800(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = 0;
  func_0x000102dd6ac4();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = uVar9 + 0x58 & (uVar9 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar8 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8));
  lVar7 = *plVar8;
  lVar5 = plVar8[1];
  lVar6 = plVar8[2];
  plVar8 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102dd98d0;
  *(short *)(plVar8 + 0x1f) = (short)lVar6;
  plVar8[0x15] = lVar7;
  plVar8[0x16] = lVar5;
  plVar8[0x13] = unaff_x20 + 0x30;
  plVar8[0x14] = unaff_x20 + uVar9;
  plVar8[0x11] = lVar2;
  plVar8[0x12] = lVar4;
  plVar8[0xf] = lVar1;
  plVar8[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dd308c,0,0);
  return;
}



/* Entry: 102dd98d0; end: 102dd9923;  */

void FUN_102dd98d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dd9908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dd9924; end: 102dd996b;  */

undefined8 FUN_102dd9924(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102dd996c; end: 102dd998b;  */

void FUN_102dd996c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102dd61d4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102dd998c; end: 102dd99ef;  */

void FUN_102dd998c(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102dd9fa0;
  plVar4[2] = lVar1;
  if (lVar5 == 0) {
    if (lVar1 == 0) {
      plVar3 = (long *)0x20;
      func_0x000107c615b8();
      plVar4[5] = (long)plVar3;
      *plVar3 = (long)plVar4;
      plVar3[1] = 0x102dd3a34;
      iVar2 = 2;
      func_0x000100029b9c(2,0x10,2,0);
      if (iVar2 != 0) {
        plVar4 = (long *)0x60;
        func_0x000107c615b8();
        plVar3[2] = (long)plVar4;
        *plVar4 = (long)plVar3;
        plVar4[1] = (long)&UNK_102fe9474;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_102feded8,0,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000102fe9470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])();
      return;
    }
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    plVar4[4] = (long)plVar3;
    lVar5 = 0x102dd39a4;
  }
  else {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    plVar4[3] = (long)plVar3;
    lVar5 = 0x102dd38c8;
  }
  *plVar3 = (long)plVar4;
  plVar3[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 102dd99f0; end: 102dd9a77;  */

undefined8 FUN_102dd99f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102dd9a78; end: 102dd9c3b;  */

undefined1  [16] FUN_102dd9a78(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar7 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  lVar4 = param_2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    lVar3 = param_2;
    lStack_60 = lVar4;
    lStack_58 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c5eb88(uVar7);
    func_0x000100e8b654();
    uVar8 = uVar7;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar7,PTR___sSSN_11034da80,lVar3);
    lVar4 = lVar2;
    (**(code **)(lVar9 + 8))(uVar7);
    func_0x000107c6142c(param_2);
    uVar1 = uVar8 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    func_0x000107c6142c(param_2);
    if (uVar1 != 0) goto LAB_102dd9c18;
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c5db08();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar5 = lVar4;
    lStack_60 = lVar3;
    lStack_58 = lVar4;
    func_0x000107c61434(lVar4);
    func_0x000107c5eb88(uVar7);
    func_0x000100e8b654();
    uVar8 = uVar7;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar7,PTR___sSSN_11034da80,lVar5);
    (**(code **)(lVar9 + 8))(uVar7,lVar2);
    func_0x000107c6142c(lVar4);
    uVar7 = uVar8 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar7 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    func_0x000107c6142c(lVar4);
    if (uVar7 != 0) goto LAB_102dd9c18;
    func_0x000107c6142c(puVar6);
  }
  uVar8 = 0;
  puVar6 = (undefined *)0x0;
LAB_102dd9c18:
  auVar10._8_8_ = puVar6;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 102dd9c3c; end: 102dd9c9f;  */

/* WARNING: Possible PIC construction at 0x000102dd9c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dd9c54) */

void FUN_102dd9c3c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 102dd9ca0; end: 102dd9d03;  */

undefined8 * FUN_102dd9ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102dd9d04; end: 102dd9d47;  */

undefined8 * FUN_102dd9d04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 102dd9d48; end: 102dd9f37;  */

int FUN_102dd9d48(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102dd9f38; end: 102dd9f77;  */

void FUN_102dd9f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4fa74;
  func_0x000107c61520(&UNK_10db4fa74,&UNK_1105d2900);
  puRam0000000112f19018 = puVar1;
  return;
}



/* Entry: 102dd9f78; end: 102dd9fa3;  */

undefined1 FUN_102dd9f78(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102dd9fa4; end: 102dda0cb;  */

undefined8 FUN_102dd9fa4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c613fc();
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    uVar2 = param_2;
    func_0x000107c444a4(param_2);
    func_0x000107c61180();
    uVar3 = 0;
    func_0x0001008f9e34(0);
    func_0x000107c613fc();
    func_0x0001008f9e54(uVar2,uVar3);
    uVar3 = 0;
    func_0x000107c5ea54(0);
    func_0x000107c5ea50();
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c6157c(uVar2);
    func_0x000107c5ea4c(&uStack_70,FUN_102dda124,uVar2,&UNK_1105d3f80);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(uVar3);
    func_0x000107c61578(uVar2,2);
    func_0x000100a119cc(&uStack_70);
  }
  return unaff_x20;
}



/* Entry: 102dda0cc; end: 102dda123;  */

void FUN_102dda0cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  FUN_102de20d8(&uStack_50,0x102dda30c,param_2);
  func_0x000107c61574(param_2);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 102dda124; end: 102dda12b;  */

void FUN_102dda124(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  FUN_102de20d8(&uStack_50,0x102dda30c);
  func_0x000107c61574();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 102dda12c; end: 102dda2ef;  */

void FUN_102dda12c(char param_1,byte param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == '\0') {
    uVar5 = 0xe600000000000000;
  }
  else {
    uVar5 = 0xe400000000000000;
  }
  uVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  uVar4 = uVar3;
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar5);
  if (uVar4 < 3) {
    uVar6 = 0xe900000000000064;
    uVar5 = 0x6572756c696166;
    if (param_2 != 2) {
      uVar5 = 0x656c6c65636e6163;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 != 2) {
      uVar1 = uVar6;
    }
    uVar2 = 0x6574706d65747461;
    if (param_2 != 0) {
      uVar6 = 0xe700000000000000;
      uVar2 = 0x73736563637573;
    }
    if (param_2 < 2) {
      uVar1 = uVar6;
      uVar5 = uVar2;
    }
    FUN_102dda314(uVar5,uVar1);
    if (((uint)uVar5 & 0xff) != 4) {
      uVar6 = 0xe800000000000000;
      if (param_3 != '\x01') {
        uVar6 = 0xe900000000000065;
      }
      func_0x000107c61538(uVar3,0x112f19188);
      func_0x000107c604c4();
      func_0x000107c6142c(uVar6);
      if (uVar3 == 0) {
        uVar6 = 0;
      }
      else {
        if (uVar3 != 1) {
          return;
        }
        uVar6 = 1;
      }
      FUN_102dddc74(uVar4,uVar5,uVar6);
    }
  }
  return;
}



/* Entry: 102dda2f0; end: 102dda313;  */

void FUN_102dda2f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dda314; end: 102dda377;  */

ulong FUN_102dda314(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102dda378; end: 102dda37b;  */

void FUN_102dda378(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  FUN_102de20d8(&uStack_50,0x102dda30c);
  func_0x000107c61574();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 102dda37c; end: 102dda42b;  */

void FUN_102dda37c(void)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,2,0);
  if (iVar1 != 0) {
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x10) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x102dda3f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_102feded8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102dda3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102dda42c; end: 102dda443;  */

void FUN_102dda42c(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined1 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dda444,param_2,0);
  return;
}



/* Entry: 102dda444; end: 102dda4e3;  */

void FUN_102dda444(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x10) + 0x70);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102dda4a4;
                    /* WARNING: Could not recover jumptable at 0x000102dda4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined1 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 102dda4e4; end: 102dda563;  */

void FUN_102dda4e4(long param_1,long param_2,undefined1 param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102dda564;
  plVar1[0xb] = param_5;
  plVar1[0xc] = param_6;
  plVar1[9] = param_2;
  plVar1[10] = param_4;
  *(undefined1 *)(plVar1 + 0x14) = param_3;
  plVar1[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddac20,param_6,0);
  return;
}



/* Entry: 102dda564; end: 102dda59f;  */

void FUN_102dda564(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dda59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dda5a0; end: 102dda617;  */

void FUN_102dda5a0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ddc950;
  plVar1[5] = param_4;
  plVar1[6] = param_5;
  plVar1[3] = param_2;
  plVar1[4] = param_3;
  plVar1[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb110,param_5,0);
  return;
}



/* Entry: 102dda618; end: 102dda633;  */

void FUN_102dda618(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined1 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dda634,0,0);
  return;
}



/* Entry: 102dda634; end: 102dda6c3;  */

void FUN_102dda634(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dda6c4,uVar2,uVar3);
  return;
}



/* Entry: 102dda6c4; end: 102dda6ff;  */

void FUN_102dda6c4(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_102dda700(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102dda6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102dda700; end: 102dda8df;  */

void FUN_102dda700(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar1 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000102ddc838(param_1);
  func_0x000107c5edd0(puVar8);
  puVar2 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000107c6142c(puVar6);
    func_0x000102ddc530(puVar8,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c414f8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      (**(code **)(lVar9 + 8))(lVar7,lVar1);
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x000107c5ed90();
      uVar5 = 0x54554354524f4853;
      func_0x000107c5fadc(0x54554354524f4853,0xe900000000000053);
      func_0x000107c44634(lVar4);
      func_0x000107c6142c(puVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar5);
      (**(code **)(lVar9 + 8))(lVar7,lVar1);
    }
  }
  return;
}



/* Entry: 102dda8e0; end: 102dda92f;  */

void FUN_102dda8e0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102dda930;
  plVar2[10] = param_1;
  plVar2[0xb] = (long)param_2;
  plVar2[0xc] = *param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar2[0xd] = lVar3;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0xe] = lVar4;
  lVar4 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar2[0xf] = lVar4;
  func_0x000107c5fca8();
  plVar2[0x10] = lVar3;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddaa18,lVar3,lVar4);
  return;
}



/* Entry: 102dda930; end: 102dda973;  */

void FUN_102dda930(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dda970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102dda974; end: 102ddaa17;  */

void FUN_102dda974(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 **)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = *unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddaa18,uVar2,uVar3);
  return;
}



/* Entry: 102ddaa18; end: 102ddaadb;  */

void FUN_102ddaa18(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0x10);
  func_0x000107c414f8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar2;
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x98) = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0xa0) = lVar1;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddaadc,lVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000102ddaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102ddaadc; end: 102ddab47;  */

void FUN_102ddaadc(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102ddab48;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_102ddc134();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102ddab48; end: 102ddabfb;  */

void FUN_102ddab48(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102ddab84,*(undefined8 *)(*unaff_x22 + 0xa0),*(undefined8 *)(*unaff_x22 + 0xa8));
  return;
}



/* Entry: 102ddabfc; end: 102ddac1f;  */

void FUN_102ddabfc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddac20);
  return;
}



/* Entry: 102ddac20; end: 102ddaee7;  */

/* WARNING: Removing unreachable block (ram,0x000102ddae08) */

void FUN_102ddac20(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar2 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if ((int)uVar2 == 0) {
    FUN_102ddc4b0();
    func_0x000107c613f8(&UNK_1105d4120,uVar2,0,0);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ddae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = PTR___sypN_11034f1a8;
  if (puVar6 == (undefined *)0x0) {
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_102ddadb4:
    func_0x000102ddc530(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar7 = puVar6;
    func_0x000107c5f9e8(puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar6);
    if (*(long *)(puVar7 + 0x10) == 0) {
LAB_102ddada4:
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      func_0x000107c6142c(puVar7);
      goto LAB_102ddadb4;
    }
    func_0x000107c61434(puVar7);
    uVar8 = 0;
    lVar3 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(puVar7);
      goto LAB_102ddada4;
    }
    func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar3 * 0x20,unaff_x22 + 0x10);
    func_0x000107c61430(puVar7,2);
    if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_102ddadb4;
    uVar8 = unaff_x22 + 0x30;
    func_0x000107c6147c(uVar8,unaff_x22 + 0x10,puVar5 + 8,PTR___sSSN_11034da80,6);
    if ((uVar8 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
      goto LAB_102ddade0;
    }
  }
  uVar2 = 0x7461686370616e73;
  uVar12 = 0xe800000000000000;
LAB_102ddade0:
  func_0x000102fed8ac(uVar4,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                      uVar2,uVar12,1,*(undefined1 *)(unaff_x22 + 0xa0));
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  cVar1 = *(char *)(unaff_x22 + 0xa0);
  func_0x000107c6142c(uVar12);
  if (cVar1 == '\x01') {
    plVar9 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102ddaee8;
    lVar3 = *(long *)(unaff_x22 + 0x60);
    plVar9[2] = uVar4;
    plVar9[3] = lVar3;
    pcVar10 = FUN_102ddb9f4;
  }
  else {
    plVar9 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102ddafe8;
    lVar3 = *(long *)(unaff_x22 + 0x60);
    lVar11 = *(long *)(unaff_x22 + 0x50);
    plVar9[4] = *(long *)(unaff_x22 + 0x58);
    plVar9[5] = lVar3;
    plVar9[2] = uVar4;
    plVar9[3] = lVar11;
    lVar11 = 0;
    func_0x000107c5ede0();
    plVar9[6] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    plVar9[7] = lVar11;
    lVar11 = *(long *)(lVar11 + 0x40);
    plVar9[8] = lVar11;
    uVar4 = lVar11 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[9] = uVar4;
    pcVar10 = FUN_102ddb4a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar10,lVar3,0);
  return;
}



/* Entry: 102ddaee8; end: 102ddaf3b;  */

void FUN_102ddaee8(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined1 *)(lVar1 + 0xa1) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddaf3c,uVar2,0);
  return;
}



/* Entry: 102ddaf3c; end: 102ddafe7;  */

void FUN_102ddaf3c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xa1) == '\x01') {
    func_0x000107c5fd64();
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    pcVar3 = *(code **)(*(long *)(unaff_x22 + 0x70) + 8);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    FUN_102ddc4b0();
    func_0x000107c613f8(&UNK_1105d4120,param_1,0,0);
    func_0x000107c61654();
    pcVar3 = *(code **)(lVar1 + 8);
  }
  (*pcVar3)(uVar4,uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ddafe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddafe8; end: 102ddb043;  */

void FUN_102ddafe8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ddb044;
  }
  else {
    pcVar1 = FUN_102ddb0a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Entry: 102ddb044; end: 102ddb0a7;  */

void FUN_102ddb044(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ddb0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddb0a8; end: 102ddb0ef;  */

void FUN_102ddb0a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ddb0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddb0f0; end: 102ddb10f;  */

void FUN_102ddb0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb110);
  return;
}



/* Entry: 102ddb110; end: 102ddb2a7;  */

void FUN_102ddb110(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  uVar3 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if ((int)uVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar4 = 0;
    func_0x000107c5ede0();
    *(long *)(unaff_x22 + 0x38) = lVar4;
    lVar9 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0x40) = lVar9;
    uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x48) = uVar3;
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000107c5edd0(uVar6,uVar1,uVar2);
    uVar7 = uVar6;
    (**(code **)(lVar9 + 0x30))(uVar6,1,lVar4);
    if ((int)uVar7 != 1) {
      (**(code **)(lVar9 + 0x20))(uVar3,uVar6,lVar4);
      func_0x000107c615c0(uVar6);
      plVar8 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_102ddb2a8;
      lVar5 = *(long *)(unaff_x22 + 0x30);
      lVar4 = *(long *)(unaff_x22 + 0x20);
      plVar8[4] = *(long *)(unaff_x22 + 0x28);
      plVar8[5] = lVar5;
      plVar8[2] = uVar3;
      plVar8[3] = lVar4;
      lVar4 = 0;
      func_0x000107c5ede0();
      plVar8[6] = lVar4;
      lVar4 = *(long *)(lVar4 + -8);
      plVar8[7] = lVar4;
      lVar4 = *(long *)(lVar4 + 0x40);
      plVar8[8] = lVar4;
      uVar3 = lVar4 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar8[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb4a0,lVar5,0);
      return;
    }
    func_0x000102ddc530(uVar6,0x112d36580,&UNK_10d9016d0);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar3);
  }
  FUN_102ddc4b0();
  func_0x000107c613f8(&UNK_1105d4120,uVar3,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ddb240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddb2a8; end: 102ddb303;  */

void FUN_102ddb2a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ddb304;
  }
  else {
    pcVar1 = (code *)0x102ddb3f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x30),0);
  return;
}



/* Entry: 102ddb304; end: 102ddb49f;  */

void FUN_102ddb304(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x30) + 0x90);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ddb35c;
                    /* WARNING: Could not recover jumptable at 0x000102ddb358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 102ddb4a0; end: 102ddb5f7;  */

void FUN_102ddb4a0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x22;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  piVar7 = *(int **)(unaff_x22 + 0x18);
  lVar8 = 0;
  func_0x000102ddc114();
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x50) = lVar8;
  func_0x000107c61474();
  *(undefined1 *)(lVar8 + 0x70) = 0;
  puVar9 = &UNK_1105d2a20;
  func_0x000107c613fc(&UNK_1105d2a20,0x18,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar9;
  func_0x000107c61644(puVar9 + 0x10,uVar13);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar4,uVar3);
  uVar12 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar14 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar15 = lVar2 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar10 = &UNK_1105d2a70;
  func_0x000107c613fc(&UNK_1105d2a70,uVar15 + 8,uVar12 | 7);
  *(undefined **)(unaff_x22 + 0x60) = puVar10;
  *(undefined **)(puVar10 + 0x10) = puVar9;
  (**(code **)(lVar6 + 0x20))(puVar10 + uVar14,uVar5,uVar3);
  *(long *)(puVar10 + uVar15) = lVar8;
  iVar1 = *piVar7;
  plVar11 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(lVar8);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_102ddb5f8;
                    /* WARNING: Could not recover jumptable at 0x000102ddb5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(&UNK_10db4fcc0,puVar10);
  return;
}



/* Entry: 102ddb5f8; end: 102ddb677;  */

void FUN_102ddb5f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x60));
    func_0x000107c61574(uVar4);
    pcVar1 = FUN_102ddb678;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x60));
    pcVar1 = FUN_102ddb7a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,0);
  return;
}



/* Entry: 102ddb678; end: 102ddb6eb;  */

void FUN_102ddb678(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c5fd64();
  if (lVar1 != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102ddb6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb6ec,*(undefined8 *)(unaff_x22 + 0x50),0);
  return;
}



/* Entry: 102ddb6ec; end: 102ddb70b;  */

void FUN_102ddb6ec(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x78) = *(undefined1 *)(*(long *)(unaff_x22 + 0x50) + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb70c,*(undefined8 *)(unaff_x22 + 0x28),0);
  return;
}



/* Entry: 102ddb70c; end: 102ddb7a7;  */

void FUN_102ddb70c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_102ddc4b0();
    func_0x000107c613f8(&UNK_1105d4120,param_1,0,0);
    func_0x000107c61654();
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ddb7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ddb7a8; end: 102ddb7eb;  */

void FUN_102ddb7a8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102ddb7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddb7ec; end: 102ddb883;  */

void FUN_102ddb7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb884,uVar2,uVar3);
  return;
}



/* Entry: 102ddb884; end: 102ddb91f;  */

void FUN_102ddb884(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x58) = lVar3;
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_x22 + 0x69) = 0;
    lVar3 = *(long *)(unaff_x22 + 0x38);
    pcVar2 = (code *)0x102ddb990;
  }
  else {
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102ddb920;
    plVar1[2] = *(long *)(unaff_x22 + 0x30);
    plVar1[3] = lVar3;
    pcVar2 = FUN_102ddb9f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,0);
  return;
}



/* Entry: 102ddb920; end: 102ddb973;  */

void FUN_102ddb920(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined1 *)(lVar2 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102ddb974,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 102ddb974; end: 102ddb9ab;  */

void FUN_102ddb974(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x69) = *(undefined1 *)(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ddb990,*(undefined8 *)(unaff_x22 + 0x38),0);
  return;
}



/* Entry: 102ddb9ac; end: 102ddb9db;  */

void FUN_102ddb9ac(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102ddb9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddb9dc; end: 102ddb9f3;  */

void FUN_102ddb9dc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb9f4);
  return;
}



/* Entry: 102ddb9f4; end: 102ddbc33;  */

void FUN_102ddb9f4(ulong param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102ddba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(lVar4 + 0xa0) + 1;
  *(long *)(lVar4 + 0xa0) = lVar1;
  puVar3 = &UNK_1105d2a20;
  func_0x000107c613fc(&UNK_1105d2a20,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar4);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  uVar5 = lVar13 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar12 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar14 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1105d2a48;
  func_0x000107c613fc(&UNK_1105d2a48,uVar14 + lVar13,uVar10 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(long *)(puVar6 + 0x18) = lVar1;
  (**(code **)(lVar12 + 0x20))(puVar6 + uVar14,uVar5,lVar4);
  func_0x000107c615c0(uVar5);
  uVar7 = 0x10;
  func_0x0001001ca524(0x10,2,0x34,4,0,0,&UNK_10db4fca0,puVar6,PTR___sSbN_11034dd40);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  func_0x000107c61574(puVar6);
  uVar8 = 0x112f194d8;
  FUN_102ddc4f0();
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
  if (iVar2 != 0) {
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102ddbc34;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar9,unaff_x22 + 0x50,&UNK_10db4fcb0,uVar7,FUN_102ddc408,uVar7,uVar11,uVar8,
      PTR___sSbN_11034dd40);
    return;
  }
  func_0x000107c614f0();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddbc9c,uVar11,uVar8);
  return;
}



/* Entry: 102ddbc34; end: 102ddbc9b;  */

void FUN_102ddbc34(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  *(undefined1 *)(lVar1 + 0x51) = *(undefined1 *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ddbd94,*(undefined8 *)(lVar1 + 0x18),0);
  return;
}



/* Entry: 102ddbc9c; end: 102ddbdc7;  */

void FUN_102ddbc9c(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  pcVar1 = FUN_102ddc408;
  func_0x000107c615b4(FUN_102ddc408,*(undefined8 *)(unaff_x22 + 0x20));
  *(code **)(unaff_x22 + 0x40) = pcVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ddbd0c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar2,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x20),PTR___sSbN_11034dd40);
  return;
}



/* Entry: 102ddbdc8; end: 102ddbde3;  */

void FUN_102ddbdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddbde4,0,0);
  return;
}



/* Entry: 102ddbde4; end: 102ddbea7;  */

void FUN_102ddbde4(ulong param_1)

{
  long lVar1;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x22 + 0x48);
    func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0x60) = lVar1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(0x102ddbe64,lVar1,0);
      return;
    }
  }
  **(undefined1 **)(unaff_x22 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ddbe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddbea8; end: 102ddbf77;  */

void FUN_102ddbea8(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x50) == *(long *)(unaff_x22 + 0x68)) {
    lVar5 = *(long *)(unaff_x22 + 0x48);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x28,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648();
    if (lVar5 != 0) {
      piVar2 = *(int **)(lVar5 + 0x80);
      uVar3 = *(undefined8 *)(lVar5 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(lVar5);
      iVar1 = *piVar2;
      plVar4 = (long *)(ulong)(uint)piVar2[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102ddbf78;
                    /* WARNING: Could not recover jumptable at 0x000102ddbf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x58));
      return;
    }
  }
  **(undefined1 **)(unaff_x22 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ddbf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ddbf78; end: 102ddc01f;  */

void FUN_102ddbf78(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x70);
  *(undefined1 *)(lVar2 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ddbfd0,0,0);
  return;
}



/* Entry: 102ddc020; end: 102ddc083;  */

void FUN_102ddc020(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ddc084;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar1,param_1,param_2,PTR___sSbN_11034dd40);
  return;
}



/* Entry: 102ddc084; end: 102ddc133;  */

void FUN_102ddc084(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddc0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ddc134; end: 102ddc307;  */

void FUN_102ddc134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  func_0x000107c5ed90();
  uVar2 = 0x54554354524f4853;
  func_0x000107c5fadc(0x54554354524f4853,0xe900000000000053);
  puVar3 = &UNK_1105d2a98;
  func_0x000107c613fc(&UNK_1105d2a98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  pcStack_50 = FUN_102ddc814;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1010f39c4;
  puStack_58 = &UNK_1105d2ab0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c44634(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ddc308; end: 102ddc32b;  */

void FUN_102ddc308(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ddc32c; end: 102ddc3b3;  */

void FUN_102ddc32c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ddc968;
  plVar3[10] = lVar1;
  plVar3[0xb] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  plVar3[8] = param_1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddbde4,0,0);
  return;
}



/* Entry: 102ddc3b4; end: 102ddc407;  */

void FUN_102ddc3b4(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ddc95c;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102ddc084;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar1,param_1);
  return;
}



/* Entry: 102ddc408; end: 102ddc427;  */

void FUN_102ddc408(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 102ddc428; end: 102ddc4af;  */

void FUN_102ddc428(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xffffffffffffff8));
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ddc96c;
  plVar3[6] = unaff_x20 + uVar4;
  plVar3[7] = lVar2;
  plVar3[5] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar5;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  lVar2 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[9] = lVar5;
  plVar3[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb884,lVar5,lVar2);
  return;
}



/* Entry: 102ddc4b0; end: 102ddc4ef;  */

void FUN_102ddc4b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f194e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db51848;
  func_0x000107c61520(&UNK_10db51848,&UNK_1105d4120);
  puRam0000000112f194e0 = puVar1;
  return;
}



/* Entry: 102ddc4f0; end: 102ddc56f;  */

void FUN_102ddc4f0(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 102ddc570; end: 102ddc5bf;  */

void FUN_102ddc570(undefined1 param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ddc5c0;
  plVar1[2] = unaff_x20;
  *(undefined1 *)(plVar1 + 4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dda634,0,0);
  return;
}



/* Entry: 102ddc5c0; end: 102ddc5fb;  */

void FUN_102ddc5c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddc5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ddc5fc; end: 102ddc64b;  */

void FUN_102ddc5fc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102ddc64c;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  plVar5[2] = (long)plVar2;
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_102dda930;
  plVar2[10] = param_1;
  plVar2[0xb] = (long)unaff_x20;
  plVar2[0xc] = *unaff_x20;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar2[0xd] = lVar3;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0xe] = lVar4;
  lVar4 = 0x112d45220;
  FUN_102ddc4f0(0x112d45220,0xff,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar2[0xf] = lVar4;
  func_0x000107c5fca8();
  plVar2[0x10] = lVar3;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddaa18,lVar3,lVar4);
  return;
}



/* Entry: 102ddc64c; end: 102ddc68f;  */

void FUN_102ddc64c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddc68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102ddc690; end: 102ddc6df;  */

void FUN_102ddc690(undefined1 param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ddc6e0;
  plVar1[2] = unaff_x20;
  *(undefined1 *)(plVar1 + 4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dda444);
  return;
}



/* Entry: 102ddc6e0; end: 102ddc71b;  */

void FUN_102ddc6e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddc718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ddc71c; end: 102ddc79b;  */

void FUN_102ddc71c(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ddc960;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102dda564;
  plVar1[0xb] = param_5;
  plVar1[0xc] = unaff_x20;
  plVar1[9] = param_2;
  plVar1[10] = param_4;
  *(undefined1 *)(plVar1 + 0x14) = param_3;
  plVar1[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddac20);
  return;
}



/* Entry: 102ddc79c; end: 102ddc813;  */

void FUN_102ddc79c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ddc964;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102ddc950;
  plVar1[5] = param_4;
  plVar1[6] = unaff_x20;
  plVar1[3] = param_2;
  plVar1[4] = param_3;
  plVar1[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ddb110);
  return;
}



/* Entry: 102ddc814; end: 102ddc96f;  */

void FUN_102ddc814(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126b6300;
  func_0x000107c61168(PTR_PTR_1126b6300,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4467c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    if (param_1 == 0) {
LAB_102ddc2d4:
      uVar4 = 1;
      goto LAB_102ddc2e4;
    }
  }
  else if (param_1 == 0) {
    func_0x000107c61170();
  }
  else {
    func_0x000101424504(0);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    puVar3 = puVar2;
    func_0x000107c60118(puVar2,param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    if (((ulong)puVar3 & 1) != 0) goto LAB_102ddc2d4;
  }
  uVar4 = 0;
LAB_102ddc2e4:
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102ddc970; end: 102ddcc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ddc970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  code *pcVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  func_0x000107c613fc();
  lVar1 = _DAT_112f194e8;
  lVar3 = 0;
  func_0x000107c5eec8();
  pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar6)(unaff_x20 + lVar1,1,1,lVar3);
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    lVar4 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = auStack_a0 + -extraout_x8;
    func_0x000100934d60(auStack_80,param_2,&UNK_10db4fcc8,0);
    func_0x000100934e4c(puVar5,auStack_80);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_68);
    func_0x000107c61574(uStack_58);
    (*pcVar6)(puVar5,0,1,lVar3);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_98,0x21,0);
    func_0x0001000c90cc(puVar5,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_98);
  }
  return unaff_x20;
}



/* Entry: 102ddcc80; end: 102ddccaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ddcc80(void)

{
  long unaff_x20;
  
  func_0x0001018d3afc(unaff_x20 + _DAT_112f194e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ddccb0; end: 102ddccb3;  */

void FUN_102ddccb0(void)

{
  return;
}



/* Entry: 102ddccb4; end: 102ddccd7;  */

undefined8 FUN_102ddccb4(void)

{
  func_0x000102ddcaf4();
  return 0;
}



/* Entry: 102ddccd8; end: 102ddccdf;  */

void FUN_102ddccd8(void)

{
  if (lRam0000000112f19518 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e730e18);
  return;
}



/* Entry: 102ddcce0; end: 102ddce7f;  */

void FUN_102ddcce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6f795f6465646461;
  if (cVar3 != '\x01') {
    uVar1 = 0x725f646e65697266;
  }
  uVar2 = 0xee006b6361625f75;
  if (cVar3 != '\x01') {
    uVar2 = 0xee00747365757165;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ddce80; end: 102ddcee3;  */

void FUN_102ddce80(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102ddcee4; end: 102ddcf57;  */

void FUN_102ddcee4(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6572756c696166;
  if (cVar2 != '\x01') {
    uVar1 = 0x73736563637573;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  func_0x000107c606a8();
  return;
}


