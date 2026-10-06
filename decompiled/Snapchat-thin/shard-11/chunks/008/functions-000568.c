/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108979f80; end: 108979f83;  */

undefined8 FUN_108979f80(void)

{
  return 0;
}



/* Entry: 108979f84; end: 108979fef;  */

undefined8 FUN_108979f84(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [64];
  
  plVar1 = *(long **)(*param_3 + 0x58);
  auStack_70[0] = 0;
  uStack_68 = 0;
  FUN_108962d14(auStack_60,auStack_70,param_1);
  func_0x00010897ca44(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010b4fc988(auStack_60);
  return 1;
}



/* Entry: 108979ff0; end: 108979ff3;  */

undefined8 FUN_108979ff0(void)

{
  return 0;
}



/* Entry: 108979ff4; end: 10897a023;  */

undefined8 FUN_108979ff4(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  (**(code **)(**(long **)(*param_3 + 0x2a8) + 0x78))(*(long **)(*param_3 + 0x2a8),*param_1);
  return 1;
}



/* Entry: 10897a024; end: 10897a097;  */

void FUN_10897a024(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar1;
  
  func_0x00010897c328(*(undefined8 *)(param_1 + 8));
  FUN_108977ea8(extraout_x8 + (extraout_x9 & 0xffffffff) * 0x278);
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x1f < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x10;
  }
  return;
}



/* Entry: 10897a098; end: 10897a1e7;  */

long * FUN_10897a098(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return param_1;
  }
  plVar8 = (long *)(*(long *)(lVar4 + 0xd8) + (*(ulong *)(lVar4 + 0xf0) >> 4) * 8);
  if (*(long *)(lVar4 + 0xe0) == *(long *)(lVar4 + 0xd8)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar8 + (*(ulong *)(lVar4 + 0xf0) & 0xf) * 0x278;
  }
  lVar1 = lVar4 + 0xd0;
  FUN_108977e74();
  do {
    lVar9 = lVar5 + -0x2780;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        puVar6 = *(undefined8 **)(lVar4 + 0xd8);
        while( true ) {
          puVar7 = *(undefined8 **)(lVar4 + 0xe0);
          uVar2 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0xd8) + 8);
          *(undefined8 **)(lVar4 + 0xd8) = puVar6;
        }
        if (uVar2 == 1) {
          uVar3 = 8;
        }
        else {
          if (uVar2 != 2) goto LAB_10897a190;
          uVar3 = 0x10;
        }
        *(undefined8 *)(lVar4 + 0xf0) = uVar3;
LAB_10897a190:
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        lVar5 = *(long *)(lVar4 + 0xe0);
        while (lVar5 != *(long *)(lVar4 + 0xd8)) {
          lVar5 = lVar5 + -8;
          *(long *)(lVar4 + 0xe0) = lVar5;
        }
        if (*(long *)(lVar4 + 0xd0) != 0) {
          __ZdlPv();
        }
        func_0x000108b80d84(lVar4 + 0x68);
        __ZdlPv(lVar4);
        return param_1;
      }
      FUN_108977ea8(lVar5);
      lVar5 = lVar5 + 0x278;
      lVar9 = lVar9 + 0x278;
    } while (*plVar8 != lVar9);
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
  } while( true );
}



/* Entry: 10897a1e8; end: 10897a257;  */

void FUN_10897a1e8(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10897a258; end: 10897a26b;  */

void FUN_10897a258(void)

{
  func_0x00010897a230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897a26c; end: 10897a387;  */

void FUN_10897a26c(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 in_stack_0000001c;
  long in_stack_00000020;
  
  func_0x00010897cae8();
  lVar5 = *(long *)(param_1 + 0x18);
  FUN_10897a388(&stack0x00000020,param_1 + 0x20);
  if (in_stack_00000020 != 0) {
    in_stack_0000001c._1_1_ = (char)lVar5 + 'H';
    FUN_108991330();
    lVar4 = *(long *)(lVar5 + 0x40);
    func_0x000107c278b8();
    lVar3 = lVar4;
    FUN_10897cbdc();
    in_stack_0000001c._2_1_ = (undefined1)lVar3;
    in_stack_0000001c._3_1_ =
         7 < *(uint *)(lVar5 + 0x20c) | (byte)(0x20 >> (ulong)(*(uint *)(lVar5 + 0x20c) & 0x1f)) & 1
    ;
    FUN_108973d84(lVar5 + 0x70,(long)&stack0x0000001c + 1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    FUN_108973c0c(lVar5 + 0x70,*(undefined8 *)(lVar5 + 0x40));
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_FUN_110aa0b90)[extraout_x8]);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(lVar4 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(lVar5 + 0x318) = 0;
  }
  func_0x000104c053a0(&stack0x00000020);
  return;
}



/* Entry: 10897a388; end: 10897a42f;  */

void FUN_10897a388(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10897a430; end: 10897a443;  */

void FUN_10897a430(void)

{
  func_0x00010897a404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897a444; end: 10897a4a3;  */

void FUN_10897a444(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  
  func_0x00010897ca74();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010897c21c();
  func_0x00010897c1e8((&PTR_DAT_110aa0d40)[extraout_x8],&stack0x0000000f);
  func_0x00010897c280();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010897c10c();
      func_0x00010897c1d8();
      func_0x00010897c50c();
      lVar3 = *(long *)(unaff_x19 + 0xf8);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  *(undefined1 *)(lVar4 + 0x318) = 0;
  return;
}



/* Entry: 10897a4a4; end: 10897a4cf;  */

undefined8 * FUN_10897a4a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1070;
  FUN_108974ad0(param_1 + 3);
  return param_1;
}



/* Entry: 10897a4d0; end: 10897a4e3;  */

void FUN_10897a4d0(void)

{
  FUN_10897a4a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897a4e4; end: 10897a5df;  */

void FUN_10897a4e4(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_c0 [112];
  long alStack_50 [2];
  
  lVar4 = *(long *)(param_1 + 0x18);
  FUN_10897a388(alStack_50,param_1 + 0x20);
  if (alStack_50[0] != 0) {
    FUN_1089a02bc(auStack_c0,lVar4 + 0x228,param_1 + 0x30);
    *(undefined4 *)(lVar4 + 0x228) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)(lVar4 + 0x230) = *(undefined1 *)(param_1 + 0x38);
    FUN_10897a608(lVar4 + 0x238,param_1 + 0x40);
    *(undefined1 *)(lVar4 + 0x260) = *(undefined1 *)(param_1 + 0x68);
    FUN_10897a5e0(lVar4 + 0x268,param_1 + 0x70);
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_DAT_110aa0e90)[extraout_x8],auStack_c0);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(param_1 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(lVar4 + 0x318) = 0;
    func_0x00010897a8a4(auStack_c0);
  }
  func_0x000104c053a0(alStack_50);
  return;
}



/* Entry: 10897a5e0; end: 10897a607;  */

void FUN_10897a5e0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010897c5a0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10897a608; end: 10897a65f;  */

void FUN_10897a608(long param_1,long param_2)

{
  code *extraout_x8;
  undefined1 uStack_21;
  
  if (*(int *)(param_1 + 0x20) != -1 || *(int *)(param_2 + 0x20) != -1) {
    if (*(int *)(param_2 + 0x20) == -1) {
      if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110a9ac28)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      return;
    }
    func_0x00010897c650();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10897a660; end: 10897a673;  */

void FUN_10897a660(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x20) != 0) {
    uStack_18 = param_3;
    FUN_10897a6a0(&lStack_20);
  }
  return;
}



/* Entry: 10897a674; end: 10897a69f;  */

void FUN_10897a674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_10897a6a0(&lStack_20);
  }
  return;
}



/* Entry: 10897a6a0; end: 10897a6bf;  */

void FUN_10897a6a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010897c8e0();
  *(undefined4 *)(lVar1 + 0x20) = 0;
  return;
}



/* Entry: 10897a6c0; end: 10897a6c7;  */

void FUN_10897a6c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x20) != 1) {
    uStack_18 = param_3;
    FUN_10897a6f8(&lStack_20);
  }
  return;
}



/* Entry: 10897a6c8; end: 10897a6f7;  */

void FUN_10897a6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x20) != 1) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_10897a6f8(&lStack_20);
  }
  return;
}



/* Entry: 10897a6f8; end: 10897a71b;  */

void FUN_10897a6f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010897c8e0();
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return;
}



/* Entry: 10897a71c; end: 10897a723;  */

void FUN_10897a71c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(*param_1 + 0x20) == 2) {
    func_0x00010897c4f4(param_2,param_3);
    FUN_10897a7e8();
    uVar4 = unaff_x19[1];
    uVar3 = *unaff_x19;
    uVar2 = unaff_x19[3];
    uVar1 = unaff_x19[2];
    unaff_x19[1] = uStack_38;
    *unaff_x19 = uStack_40;
    unaff_x19[3] = uStack_28;
    unaff_x19[2] = uStack_30;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    uStack_30 = uVar1;
    uStack_28 = uVar2;
    FUN_1089394d0(&uStack_40);
    return;
  }
  FUN_10897a760(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10897a724; end: 10897a75f;  */

void FUN_10897a724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    func_0x00010897c4f4(param_2,param_3);
    FUN_10897a7e8();
    uVar4 = unaff_x19[1];
    uVar3 = *unaff_x19;
    uVar2 = unaff_x19[3];
    uVar1 = unaff_x19[2];
    unaff_x19[1] = uStack_38;
    *unaff_x19 = uStack_40;
    unaff_x19[3] = uStack_28;
    unaff_x19[2] = uStack_30;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    uStack_30 = uVar1;
    uStack_28 = uVar2;
    FUN_1089394d0(&uStack_40);
    return;
  }
  FUN_10897a760(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10897a760; end: 10897a7a7;  */

void FUN_10897a760(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = *param_1;
  FUN_108976598(auStack_40,param_1[1]);
  FUN_10897a874(uVar1,auStack_40);
  FUN_1089394d0(auStack_40);
  return;
}



/* Entry: 10897a7a8; end: 10897a7e7;  */

void FUN_10897a7a8(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010897c4f4();
  FUN_10897a7e8();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  FUN_1089394d0(&uStack_40);
  return;
}



/* Entry: 10897a7e8; end: 10897a86f;  */

void FUN_10897a7e8(void)

{
  long lVar1;
  long unaff_x21;
  long alStack_60 [2];
  
  func_0x00010897c2f8();
  FUN_10897a870();
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    func_0x00010897c814();
    FUN_108976664();
    lVar1 = unaff_x21;
    FUN_1089766b0();
    func_0x00010897c710();
    while (lVar1 != 0) {
      func_0x00010897c57c();
      func_0x00010897c164((uint)unaff_x21 & 0x7f);
      func_0x00010897c74c();
      FUN_108976724(alStack_60);
      lVar1 = alStack_60[0];
    }
    func_0x00010897c3d4();
  }
  return;
}



/* Entry: 10897a870; end: 10897a873;  */

void FUN_10897a870(undefined8 param_1,long param_2)

{
  func_0x00010897c53c();
  if (param_2 != 0) {
    func_0x00010897c564();
    func_0x000107810840();
  }
  return;
}



/* Entry: 10897a874; end: 10897a91f;  */

void FUN_10897a874(void)

{
  long unaff_x20;
  
  func_0x00010897c5a0();
  FUN_10893946c();
  func_0x00010893ba44();
  *(undefined4 *)(unaff_x20 + 0x20) = 2;
  return;
}



/* Entry: 10897a920; end: 10897a933;  */

void FUN_10897a920(void)

{
  func_0x00010897a8f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897a934; end: 10897a9c3;  */

void FUN_10897a934(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  long in_stack_00000000;
  
  func_0x00010897ca74();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010897c65c();
  if (in_stack_00000000 != 0) {
    func_0x00010897c978();
    func_0x00010897c1e8((&PTR_FUN_110aa0f80)[extraout_x8],param_1 + 0x30);
    func_0x00010897c5c0(*(undefined8 *)(unaff_x19 + 0xf8));
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c188();
        func_0x00010897c2c4();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(lVar4 + 0x318) = 0;
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897a9c4; end: 10897a9ef;  */

undefined8 * FUN_10897a9c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1108;
  FUN_108974cbc(param_1 + 3);
  return param_1;
}



/* Entry: 10897a9f0; end: 10897aa03;  */

void FUN_10897a9f0(void)

{
  FUN_10897a9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897aa04; end: 10897aa9f;  */

void FUN_10897aa04(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  long in_stack_00000000;
  
  func_0x00010897ca74();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010897c65c();
  if (in_stack_00000000 != 0) {
    FUN_108b80e0c(lVar4 + 0x328,param_1 + 0x30);
    func_0x00010897c978();
    func_0x00010897c1e8((&PTR_FUN_110aa0ec0)[extraout_x8],param_1 + 0x30);
    func_0x00010897c5c0(*(undefined8 *)(unaff_x19 + 0xf8));
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c188();
        func_0x00010897c2c4();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(lVar4 + 0x318) = 0;
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897aaa0; end: 10897aac7;  */

undefined8 FUN_10897aaa0(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1148);
  return param_1;
}



/* Entry: 10897aac8; end: 10897aadb;  */

void FUN_10897aac8(void)

{
  FUN_10897aaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897aadc; end: 10897ab5f;  */

void FUN_10897aadc(void)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 in_stack_0000000c;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  func_0x00010897c428();
  if (in_stack_00000010 != 0) {
    in_stack_0000000c._3_1_ = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x20 + 0x209) = in_stack_0000000c._3_1_;
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_FUN_110aa0fb0)[extraout_x8],(long)&stack0x0000000c + 3);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(unaff_x20 + 0x318) = 0;
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897ab60; end: 10897ab87;  */

undefined8 FUN_10897ab60(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1188);
  return param_1;
}



/* Entry: 10897ab88; end: 10897ab9b;  */

void FUN_10897ab88(void)

{
  FUN_10897ab60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ab9c; end: 10897ac1f;  */

void FUN_10897ab9c(void)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 in_stack_0000000c;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  func_0x00010897c428();
  if (in_stack_00000010 != 0) {
    in_stack_0000000c = *(undefined4 *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x20 + 0x20c) = in_stack_0000000c;
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_FUN_110aa0ef0)[extraout_x8],&stack0x0000000c);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(unaff_x20 + 0x318) = 0;
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897ac20; end: 10897ac47;  */

undefined8 FUN_10897ac20(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa11c8);
  return param_1;
}



/* Entry: 10897ac48; end: 10897ac5b;  */

void FUN_10897ac48(void)

{
  FUN_10897ac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ac5c; end: 10897acdf;  */

void FUN_10897ac5c(void)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 in_stack_0000000c;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  func_0x00010897c428();
  if (in_stack_00000010 != 0) {
    in_stack_0000000c = *(undefined4 *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x20 + 0x210) = in_stack_0000000c;
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_FUN_110aa0f50)[extraout_x8],&stack0x0000000c);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(unaff_x20 + 0x318) = 0;
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897ace0; end: 10897ad07;  */

undefined8 FUN_10897ace0(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1208);
  return param_1;
}



/* Entry: 10897ad08; end: 10897ad1b;  */

void FUN_10897ad08(void)

{
  FUN_10897ace0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ad1c; end: 10897ada7;  */

void FUN_10897ad1c(void)

{
  bool bVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  func_0x00010897c790();
  if (in_stack_00000010 != 0) {
    *(undefined1 *)(unaff_x20 + 0x208) = 1;
    *(undefined1 *)(unaff_x20 + 0x318) = 1;
    lVar4 = *(long *)(unaff_x20 + 800);
    func_0x00010897c1e8((&PTR_DAT_110aa0dd0)[*(byte *)(lVar4 + 200)],&stack0x0000000f);
    func_0x00010897c280();
    lVar3 = extraout_x8;
    lVar2 = extraout_x8;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(lVar4 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(unaff_x20 + 0x318) = 0;
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897ada8; end: 10897adcf;  */

undefined8 FUN_10897ada8(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1248);
  return param_1;
}



/* Entry: 10897add0; end: 10897ade3;  */

void FUN_10897add0(void)

{
  FUN_10897ada8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ade4; end: 10897ae2b;  */

void FUN_10897ade4(void)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010897c2d4();
  if ((uStack_30 != 0) && (plVar1 = *(long **)(unaff_x20 + 0x2a8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x80))
              (plVar1,*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x38));
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897ae2c; end: 10897ae57;  */

undefined8 * FUN_10897ae2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1288;
  FUN_1089750f4(param_1 + 3);
  return param_1;
}



/* Entry: 10897ae58; end: 10897ae6b;  */

void FUN_10897ae58(void)

{
  FUN_10897ae2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ae6c; end: 10897aea7;  */

void FUN_10897ae6c(void)

{
  undefined8 uStack_30;
  
  func_0x00010897c65c();
  if (uStack_30 != 0) {
    func_0x00010897c9b4();
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897aea8; end: 10897af4f;  */

void FUN_10897aea8(long param_1,undefined8 param_2)

{
  bool bVar1;
  long extraout_x8;
  long lVar2;
  code *extraout_x8_00;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x318) = 1;
  lVar4 = *(long *)(param_1 + 800);
  (*(code *)(&PTR_DAT_110aa0cb0)[*(byte *)(lVar4 + 200)])(param_2,lVar4 + 8,lVar4,lVar4 + 8);
  func_0x00010897c5c0(*(undefined8 *)(lVar4 + 0xf8));
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010897c328(*(undefined8 *)(lVar4 + 0xd8));
      func_0x00010897c2c4();
      (*extraout_x8_00)(lVar4 + 8,lVar4,lVar4 + 8);
      FUN_10897a024(lVar4 + 0xd0);
      lVar3 = *(long *)(lVar4 + 0xf8);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  *(undefined1 *)(param_1 + 0x318) = 0;
  return;
}



/* Entry: 10897af50; end: 10897af77;  */

undefined8 FUN_10897af50(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa12c8);
  return param_1;
}



/* Entry: 10897af78; end: 10897af8b;  */

void FUN_10897af78(void)

{
  FUN_10897af50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897af8c; end: 10897afe7;  */

void FUN_10897af8c(void)

{
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010897c2d4();
  if (uStack_30 != 0) {
    if (*(long *)(unaff_x20 + 0x2a8) != 0) {
      func_0x00010897ca9c();
      (*extraout_x8)();
    }
    if (*(long *)(unaff_x20 + 0x1c0) != 0) {
      func_0x00010897c918();
      (*extraout_x8_00)();
    }
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897afe8; end: 10897b00f;  */

undefined8 FUN_10897afe8(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1308);
  return param_1;
}



/* Entry: 10897b010; end: 10897b023;  */

void FUN_10897b010(void)

{
  FUN_10897afe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b024; end: 10897b06b;  */

void FUN_10897b024(void)

{
  code *extraout_x8;
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010897c2d4();
  if ((uStack_30 != 0) && (*(long *)(unaff_x20 + 0x1c0) != 0)) {
    func_0x00010897c770();
    (*extraout_x8)();
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897b06c; end: 10897b093;  */

undefined8 FUN_10897b06c(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1348);
  return param_1;
}



/* Entry: 10897b094; end: 10897b0a7;  */

void FUN_10897b094(void)

{
  FUN_10897b06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b0a8; end: 10897b0ef;  */

void FUN_10897b0a8(void)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010897c2d4();
  if ((uStack_30 != 0) && (plVar1 = *(long **)(unaff_x20 + 0x1c0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x00010897c478();
  return;
}



/* Entry: 10897b0f0; end: 10897b117;  */

undefined8 FUN_10897b0f0(undefined8 param_1)

{
  func_0x00010897c514(&PTR_FUN_110aa1388);
  return param_1;
}



/* Entry: 10897b118; end: 10897b12b;  */

void FUN_10897b118(void)

{
  FUN_10897b0f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b12c; end: 10897b1a3;  */

void FUN_10897b12c(void)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  func_0x00010897c790();
  if (in_stack_00000010 != 0) {
    func_0x00010897c21c();
    func_0x00010897c1e8((&PTR_DAT_110aa0c20)[extraout_x8],&stack0x0000000f);
    func_0x00010897c280();
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c10c();
        func_0x00010897c1d8();
        func_0x00010897c50c();
        lVar3 = *(long *)(unaff_x19 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(unaff_x20 + 0x318) = 0;
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897b1a4; end: 10897b1a7;  */

void FUN_10897b1a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa13c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897b1a8; end: 10897b1bb;  */

void FUN_10897b1a8(void)

{
  FUN_10897b1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b1bc; end: 10897b1eb;  */

long FUN_10897b1bc(long param_1)

{
  FUN_10897b1fc(param_1 + 0x48);
  FUN_10897b1fc(param_1 + 0x30);
  func_0x00010897b27c(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return param_1 + 0x18;
}



/* Entry: 10897b1ec; end: 10897b1fb;  */

void FUN_10897b1ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b1fc; end: 10897b30b;  */

long FUN_10897b1fc(long param_1)

{
  func_0x00010897b220(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10897b30c; end: 10897b30f;  */

void FUN_10897b30c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1418;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897b310; end: 10897b323;  */

void FUN_10897b310(void)

{
  FUN_10897b364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b324; end: 10897b363;  */

undefined8 FUN_10897b324(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c03d34(param_1 + 0x120);
  func_0x000104c03d34(param_1 + 200);
  func_0x000104c03d34(param_1 + 0x70);
  func_0x000107c27bec(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10897b364; end: 10897b373;  */

void FUN_10897b364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b374; end: 10897b397;  */

void FUN_10897b374(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10897b398; end: 10897b39b;  */

void FUN_10897b398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897b39c; end: 10897b3af;  */

void FUN_10897b39c(void)

{
  FUN_10897b408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b3b0; end: 10897b3bf;  */

void FUN_10897b3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010897b3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10897b3c0; end: 10897b407;  */

void FUN_10897b3c0(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10897b408; end: 10897b413;  */

void FUN_10897b408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897b414; end: 10897b45b;  */

void FUN_10897b414(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10897b45c; end: 10897b4af;  */

void FUN_10897b45c(long param_1)

{
  func_0x000107c28148(param_1 + 0x10);
  FUN_1089a3c0c();
  func_0x00010897c51c();
  func_0x00010897c640();
  func_0x00010897c9d0();
  func_0x00010897c678();
  return;
}



/* Entry: 10897b4b0; end: 10897b4d3;  */

void FUN_10897b4b0(void)

{
  return;
}



/* Entry: 10897b4d4; end: 10897b4ff;  */

undefined8 * FUN_10897b4d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa14d0;
  FUN_108975888(param_1 + 3);
  return param_1;
}



/* Entry: 10897b500; end: 10897b513;  */

void FUN_10897b500(void)

{
  FUN_10897b4d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897b514; end: 10897b633;  */

void FUN_10897b514(long param_1)

{
  bool bVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long extraout_x8_01;
  long lVar4;
  long unaff_x21;
  undefined4 in_stack_0000000c;
  long in_stack_00000010;
  
  func_0x00010897cad4();
  lVar4 = *(long *)(param_1 + 0x18);
  FUN_10897a388(&stack0x00000010,param_1 + 0x20);
  if (in_stack_00000010 != 0) {
    in_stack_0000000c = *(undefined4 *)(param_1 + 0x290);
    func_0x00010897c960();
    func_0x00010897c858((&PTR_FUN_110aa0f20)[extraout_x8],&stack0x0000000c);
    func_0x00010897c5c0(*(undefined8 *)(unaff_x21 + 0xf8));
    lVar3 = extraout_x8_00;
    lVar2 = extraout_x8_00;
    do {
      while (lVar3 != 0) {
        func_0x00010897c328(*(undefined8 *)(unaff_x21 + 0xd8));
        func_0x00010897c2c4();
        func_0x00010897c890();
        FUN_10897a024(unaff_x21 + 0xd0);
        lVar3 = *(long *)(unaff_x21 + 0xf8);
      }
      bVar1 = lVar2 != 0;
      lVar2 = 0;
    } while (bVar1);
    *(undefined1 *)(lVar4 + 0x318) = 0;
    if (*(char *)(param_1 + 0x58) == '\x01') {
      func_0x00010897c9b4();
    }
    else {
      func_0x00010897c960();
      func_0x00010897c858((&PTR_FUN_110aa0e00)[extraout_x8_01],param_1 + 0x30);
      lVar3 = *(long *)(unaff_x21 + 0xf8);
      lVar2 = lVar3;
      do {
        while (lVar3 != 0) {
          func_0x00010897c328(*(undefined8 *)(unaff_x21 + 0xd8));
          func_0x00010897c2c4();
          func_0x00010897c890();
          FUN_10897a024(unaff_x21 + 0xd0);
          lVar3 = *(long *)(unaff_x21 + 0xf8);
        }
        bVar1 = lVar2 != 0;
        lVar2 = 0;
      } while (bVar1);
      *(undefined1 *)(lVar4 + 0x318) = 0;
    }
  }
  func_0x00010897c4e0();
  return;
}



/* Entry: 10897b634; end: 10897b657;  */

void FUN_10897b634(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10897b658; end: 10897b737;  */

undefined1  [16] FUN_10897b658(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297;
  uVar4 = uVar7 >> 0xc ^ uVar3 >> 7;
  bVar8 = (byte)uVar3 & 0x7f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar11 = *(undefined8 *)(uVar7 + uVar4);
    bVar10 = (byte)((ulong)uVar11 >> 8);
    bVar12 = (byte)((ulong)uVar11 >> 0x10);
    bVar13 = (byte)((ulong)uVar11 >> 0x18);
    bVar14 = (byte)((ulong)uVar11 >> 0x20);
    bVar15 = (byte)((ulong)uVar11 >> 0x28);
    bVar16 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar17 == bVar8),
                          CONCAT16(-(bVar16 == bVar8),
                                   CONCAT15(-(bVar15 == bVar8),
                                            CONCAT14(-(bVar14 == bVar8),
                                                     CONCAT13(-(bVar13 == bVar8),
                                                              CONCAT12(-(bVar12 == bVar8),
                                                                       CONCAT11(-(bVar10 == bVar8),
                                                                                -((byte)uVar11 ==
                                                                                 bVar8)))))))) &
                 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]);
      if (*(long *)(param_1[1] + (long)puVar5 * 0x90) == param_2) {
        uVar11 = 0;
        goto LAB_10897b718;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(bVar15 == 0x80),
                                                   CONCAT14(-(bVar14 == 0x80),
                                                            CONCAT13(-(bVar13 == 0x80),
                                                                     CONCAT12(-(bVar12 == 0x80),
                                                                              CONCAT11(-(bVar10 ==
                                                                                        0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  FUN_10897b738(param_1,uVar3);
  uVar11 = 1;
  puVar5 = param_1;
LAB_10897b718:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar5;
  return auVar18;
}



/* Entry: 10897b738; end: 10897b82f;  */

void FUN_10897b738(long *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar7;
  
  func_0x00010897c7fc();
  func_0x00010897c468();
  func_0x000107c2b954();
  lVar4 = *unaff_x19;
  if ((*(long *)(lVar4 + -8) == 0) && (*(char *)(lVar4 + (long)param_1) != -2)) {
    param_1 = unaff_x19;
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_10897b830();
    }
    else {
      func_0x00010ae6c914();
    }
    func_0x00010897c814();
    func_0x000107c2b954();
    lVar4 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar3 = *(char *)(lVar4 + (long)param_1) == -0x80;
  *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) - (ulong)bVar3;
  bVar1 = (byte)unaff_x20 & 0x7f;
  uVar6 = unaff_x19[2];
  lVar4 = *unaff_x19;
  *(byte *)(lVar4 + (long)param_1) = bVar1;
  *(byte *)(lVar4 + (uVar6 & (long)param_1 - 7U) + (uVar6 & 7)) = bVar1;
  func_0x00010897c314(extraout_x8);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010897caa8();
  FUN_10897b900();
  lVar7 = unaff_x19[1];
  for (lVar4 = 0; unaff_x23 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar4)) {
      lVar5 = *unaff_x20;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar5;
      func_0x00010897ca38();
      func_0x00010897c164((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + lVar5) * -0x14c7d297) & 0x7f);
      param_1 = (long *)(lVar7 + (long)param_1 * 0x90);
      FUN_1089788dc(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x12;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10897b830; end: 10897b8ff;  */

void FUN_10897b830(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  long lVar4;
  
  func_0x00010897caa8();
  FUN_10897b900();
  lVar4 = *(long *)(unaff_x19 + 8);
  for (lVar3 = 0; unaff_x23 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar3)) {
      lVar2 = *unaff_x20;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar2;
      func_0x00010897ca38();
      func_0x00010897c164((SUB164(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + lVar2) * -0x14c7d297) & 0x7f);
      param_1 = lVar4 + param_1 * 0x90;
      FUN_1089788dc(param_1,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x12;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10897b900; end: 10897b98b;  */

void FUN_10897b900(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000107c27d1c(puVar1,uVar2 + param_1[2] * 0x90);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  func_0x000107c27d20(param_1,0x90);
  return;
}



/* Entry: 10897b98c; end: 10897ba3f;  */

void FUN_10897b98c(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_10897ba40();
    for (; (plVar1 != (long *)0x0 && (param_2 != param_3)); param_2 = (long *)*param_2) {
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((long)plVar1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
      lVar2 = *plVar1;
      FUN_10897ba70(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x00010897ca4c();
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10897baac(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10897ba40; end: 10897ba6f;  */

long FUN_10897ba40(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 10897ba70; end: 10897baab;  */

void FUN_10897ba70(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010897c5a0();
  *(ulong *)(unaff_x19 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  FUN_10897bb00();
  FUN_10897bc40();
  return;
}



/* Entry: 10897baac; end: 10897baff;  */

undefined8 FUN_10897baac(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10897bf04(auStack_38);
  FUN_10897ba70(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  FUN_10895b38c(auStack_38);
  return param_1;
}



/* Entry: 10897bb00; end: 10897bc3f;  */

long * FUN_10897bb00(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10897bd10(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10897bc40; end: 10897bd0f;  */

void FUN_10897bc40(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10897bc68;
LAB_10897bca4:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10897bd00;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10897bca4;
LAB_10897bc68:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10897bd00;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10897bd00;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10897bd00:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10897bd10; end: 10897bdd3;  */

void FUN_10897bd10(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (param_2 <= plVar10) {
    if (param_2 < plVar10) {
      plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar2) {
        plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 - 1) & 0x3fU));
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar10) goto LAB_10897bd58;
    }
    return;
  }
LAB_10897bd58:
  func_0x00010897c814();
  if (plVar3 == (long *)0x0) {
    FUN_10895b0bc(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar10 = plVar2 + 1;
    FUN_10895b0d4(plVar10);
    FUN_10895b0bc(plVar2,plVar10);
    plVar2[1] = (long)plVar3;
    for (plVar10 = (long *)0x0; plVar3 != plVar10; plVar10 = (long *)((long)plVar10 + 1)) {
      *(undefined8 *)(*plVar2 + (long)plVar10 * 8) = 0;
    }
    plVar10 = (long *)plVar2[2];
    if (plVar10 != (long *)0x0) {
      plVar6 = (long *)plVar10[1];
      uVar5 = (long)plVar3 - 1;
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (plVar3 <= plVar6) {
        uVar1 = 0;
        if (plVar3 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar3;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      *(long **)(*plVar2 + (long)plVar6 * 8) = plVar2 + 2;
      while (plVar4 = plVar10, plVar10 = (long *)*plVar4, plVar10 != (long *)0x0) {
        plVar7 = (long *)plVar10[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (plVar3 <= plVar7) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar3;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar3);
        }
        if (plVar7 != plVar6) {
          plVar9 = plVar10;
          if (*(long *)(*plVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(*plVar2 + (long)plVar7 * 8) = plVar4;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (*(int *)(plVar10 + 2) == *(int *)(plVar9 + 2));
            *plVar4 = (long)plVar9;
            *plVar8 = **(long **)(*plVar2 + (long)plVar7 * 8);
            **(long **)(*plVar2 + (long)plVar7 * 8) = (long)plVar10;
            plVar10 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10897bdd4; end: 10897bf03;  */

void FUN_10897bdd4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 == 0) {
    FUN_10895b0bc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10895b0d4(plVar3);
    FUN_10895b0bc(param_1,plVar3);
    param_1[1] = param_2;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar2 = plVar3[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar2 = uVar2 & uVar5;
      }
      else if (param_2 <= uVar2) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar2 / param_2;
        }
        uVar2 = uVar2 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar2 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (param_2 <= uVar6) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar1 * param_2;
        }
        if (uVar6 != uVar2) {
          plVar8 = plVar3;
          if (*(long *)(*param_1 + uVar6 * 8) == 0) {
            *(long **)(*param_1 + uVar6 * 8) = plVar4;
            uVar2 = uVar6;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)*plVar7;
              if (plVar8 == (long *)0x0) break;
            } while (*(int *)(plVar3 + 2) == *(int *)(plVar8 + 2));
            *plVar4 = (long)plVar8;
            *plVar7 = **(long **)(*param_1 + uVar6 * 8);
            **(long **)(*param_1 + uVar6 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}


