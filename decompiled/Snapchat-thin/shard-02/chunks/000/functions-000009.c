/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10169c6cc; end: 10169c6d3;  */

void FUN_10169c6cc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0;
    FUN_101699e44(0);
    lVar5 = lVar3;
    func_0x000107c614f0(lVar3);
    FUN_101699dec(uVar2,lVar3,uVar4,lVar5);
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101698dcc);
  (*pcVar1)();
}



/* Entry: 10169c6d4; end: 10169c6fb; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint begin] */

void FUN_10169c6d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10169c320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10169c6fc; end: 10169c73f; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint end] */

void FUN_10169c6fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10169c740; end: 10169c9af;  */

void FUN_10169c740(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd00000000000001d;
      if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef104a370)) ||
         (func_0x000107c605b8(0xd00000000000001d,0x800000010efb5c90,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52c9c();
      }
      else {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e6230)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53808();
        }
        else {
          uVar2 = 0xd000000000000025;
          if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef10f0340)) &&
             (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCBitmojiAvatarBuilderLensProcessingEntryPoint/SCBitmojiAvatarBuilderLensApiPluginEntryPoint.swift"
                                ,0x62,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10169c9b0);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52844();
        }
      }
      goto LAB_10169c7d4;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_10169c7d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10169c9b0; end: 10169ca5b; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint setValue:forIvarName:] */

void FUN_10169c9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10169c740(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10169ca5c; end: 10169caf7; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169ca5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dbf670,0);
  func_0x000107c61614(param_1 + _DAT_112dbf678,0);
  func_0x000107c61614(param_1 + _DAT_112dbf680,0);
  func_0x000107c61614(param_1 + _DAT_112dbf688,0);
  *(undefined8 *)(param_1 + _DAT_112dbf690) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10169caf8; end: 10169cb2b;  */

void FUN_10169caf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10169cb2c; end: 10169cb93; -[SCBitmojiAvatarBuilderLensApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10169cb2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dbf670);
  func_0x000107c61610(param_1 + _DAT_112dbf678);
  func_0x000107c61610(param_1 + _DAT_112dbf680);
  func_0x000107c61610(param_1 + _DAT_112dbf688);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbf690));
  return;
}



/* Entry: 10169cb94; end: 10169cbb3;  */

void FUN_10169cb94(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4b18);
  return;
}



/* Entry: 10169cbb4; end: 10169cbdf;  */

void FUN_10169cbb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_10169fdd0();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 10169cbe0; end: 10169cc37;  */

void FUN_10169cbe0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10169cc38;
  plVar1[4] = param_3;
  lVar2 = 0;
  func_0x000107c5f950();
  plVar1[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[6] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
  lVar2 = 0;
  func_0x000107c5f970();
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  plVar1[0xb] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)FUN_10169cd7c;
  plVar4[3] = uVar3;
  plVar4[4] = param_3;
  lVar2 = 0;
  func_0x000107c5f970();
  plVar4[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[6] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169f790,0,0);
  return;
}



/* Entry: 10169cc38; end: 10169ccc7;  */

void FUN_10169cc38(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10169cc88,0,0);
  return;
}



/* Entry: 10169ccc8; end: 10169cd7b;  */

void FUN_10169ccc8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_1;
  lVar1 = 0;
  func_0x000107c5f950();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar1 = 0;
  func_0x000107c5f970();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10169cd7c;
  plVar3[3] = uVar2;
  plVar3[4] = param_1;
  lVar1 = 0;
  func_0x000107c5f970();
  plVar3[5] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[6] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[7] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169f790,0,0);
  return;
}



/* Entry: 10169cd7c; end: 10169ce03;  */

void FUN_10169cd7c(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x58));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x68) = plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)FUN_10169ce04;
    plVar1[2] = *(long *)(lVar5 + 0x20);
    lVar5 = 0;
    func_0x000107c5f94c();
    plVar1[3] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[4] = lVar5;
    uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[5] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[6] = uVar3;
    lVar5 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[7] = uVar3;
    lVar5 = 0;
    func_0x000107c5eec8();
    plVar1[8] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[9] = lVar5;
    uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[10] = uVar3;
    pcVar4 = FUN_1016a1a10;
  }
  else {
    pcVar4 = FUN_10169d1c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 10169ce04; end: 10169ceab;  */

void FUN_10169ce04(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10169cf10,0,0);
    return;
  }
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKFTu_110347de0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x80) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10169ceac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKF_110347dd8)
            (plVar1,*(undefined8 *)(lVar2 + 0x38),param_1);
  return;
}



/* Entry: 10169ceac; end: 10169cf0f;  */

void FUN_10169ceac(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(long *)(lVar3 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x80));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10169d130;
  }
  else {
    pcVar2 = FUN_10169d3d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10169cf10; end: 10169d12f;  */

void FUN_10169cf10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar6,uVar7);
  uVar1 = uVar5;
  func_0x000107c5ed2c();
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(puVar6,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0xea0000000000203a;
  func_0x000107c5fb78(0x6e69616d6f642820,0xea0000000000203a);
  uVar7 = uVar1;
  func_0x000107c42210(uVar1);
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
  uVar7 = uVar1;
  func_0x000107c3fcb0();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  uVar7 = 0xd000000000000011;
  puVar3 = PTR_PTR_1126a7828;
  func_0x000107c610f8(PTR_PTR_1126a7828);
  func_0x000107c45e78();
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb5f90);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(0x800000010efb5f90);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar5);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010169d12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 10169d130; end: 10169d1bf;  */

void FUN_10169d130(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  uVar6 = uVar7;
  FUN_1016a1e2c(uVar7);
  (**(code **)(lVar5 + 8))(uVar7,uVar2);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010169d1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 10169d1c0; end: 10169d3cf;  */

void FUN_10169d1c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar6,uVar7);
  uVar1 = uVar5;
  func_0x000107c5ed2c();
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(puVar6,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0xea0000000000203a;
  func_0x000107c5fb78(0x6e69616d6f642820,0xea0000000000203a);
  uVar7 = uVar1;
  func_0x000107c42210(uVar1);
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
  uVar7 = uVar1;
  func_0x000107c3fcb0();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  uVar7 = 0xd000000000000011;
  puVar3 = PTR_PTR_1126a7828;
  func_0x000107c610f8(PTR_PTR_1126a7828);
  func_0x000107c45e78();
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb5f90);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(0x800000010efb5f90);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar5);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010169d3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 10169d3d0; end: 10169d5ef;  */

void FUN_10169d3d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar6 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar6 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar6,uVar7);
  uVar1 = uVar5;
  func_0x000107c5ed2c();
  func_0x000107c602fc(0x2a);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(puVar6,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0xea0000000000203a;
  func_0x000107c5fb78(0x6e69616d6f642820,0xea0000000000203a);
  uVar7 = uVar1;
  func_0x000107c42210(uVar1);
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
  uVar7 = uVar1;
  func_0x000107c3fcb0();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  uVar7 = 0xd000000000000011;
  puVar3 = PTR_PTR_1126a7828;
  func_0x000107c610f8(PTR_PTR_1126a7828);
  func_0x000107c45e78();
  func_0x000107c5fadc(0xd000000000000011,0x800000010efb5f90);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(0x800000010efb5f90);
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar5);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010169d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 10169d5f0; end: 10169d6ff; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl purchaseWithPayload:] */

void FUN_10169d5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_1103f4870;
  func_0x000107c613fc(&UNK_1103f4870,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 1;
  func_0x0001001ca524(1,0,0x8c,4,0,0,&UNK_10d97ae10,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10169d700; end: 10169d77f;  */

void FUN_10169d700(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  lVar1 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10169d780;
  plVar3[2] = param_3;
  plVar3[3] = param_4;
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[4] = uVar2;
  lVar1 = 0;
  func_0x000107c5f918();
  plVar3[5] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[6] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[7] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar2;
  lVar1 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar3[9] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xb] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xc] = uVar2;
  lVar1 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xd] = uVar2;
  lVar1 = 0;
  func_0x000107c5f8c0();
  plVar3[0xe] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0xf] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x10] = uVar2;
  lVar1 = 0;
  func_0x000107c5f8b8();
  plVar3[0x11] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x12] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x13] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 10169d780; end: 10169d7cf;  */

void FUN_10169d780(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169d7d0,0,0);
  return;
}



/* Entry: 10169d7d0; end: 10169da77;  */

void FUN_10169d7d0(void)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = *(long *)(unaff_x22 + 0x40);
  lVar13 = *(long *)(lVar16 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c6142c(lVar16);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar15 = *(long *)(unaff_x22 + 0x28);
    FUN_1016a0748(0,lVar13,0);
    lVar16 = lVar16 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar15 + 0x48);
    pcVar12 = *(code **)(lVar15 + 0x10);
    do {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      (*pcVar12)(uVar14,lVar16,*(undefined8 *)(unaff_x22 + 0x20));
      func_0x000107c5f8f4();
      *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
      pcVar2 = PTR___ss6UInt64VN_11034f048;
      pcVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      pcVar3 = pcVar2;
      pcVar9 = pcVar5;
      func_0x0001000ad07c();
      if ((*pcVar3 == '\x01') &&
         (pcVar4 = pcVar2, pcVar10 = pcVar5, func_0x000107c5fb5c(pcVar2,pcVar5), pcVar3 = pcVar4,
         pcVar9 = pcVar10, pcVar4 == (char *)0x1)) {
        FUN_10169fb18();
        pcVar9 = pcVar10;
        func_0x000107c6142c(pcVar5);
        pcVar3 = pcVar5;
        pcVar5 = pcVar10;
        pcVar2 = pcVar4;
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
      func_0x000107c5f914();
      puVar6 = PTR_PTR_1126a7820;
      func_0x000107c610f8();
      func_0x000107c5fadc(pcVar2,pcVar5);
      func_0x000107c6142c(pcVar5);
      func_0x000107c5fadc(pcVar3,pcVar9);
      func_0x000107c6142c(pcVar9);
      func_0x000107c48e58();
      func_0x000107c61170(pcVar3);
      func_0x000107c61170(pcVar2);
      (**(code **)(lVar15 + 8))(uVar14,uVar17);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_1016a0748(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar7 + uVar1 * 8 + 0x20) = puVar6;
      lVar16 = lVar16 + lVar11;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x40));
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar6 = puVar7;
  FUN_10169db8c(puVar7);
  func_0x000107c6142c(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar8 = puVar6;
  func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar6);
  func_0x000107c45788(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c43b74(uVar14);
  func_0x000107c61170(puVar7);
  func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010169da74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169da78; end: 10169db8b;  */

undefined * FUN_10169da78(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  func_0x000107c5f8f4();
  pcVar1 = PTR___ss6UInt64VN_11034f048;
  pcVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  pcVar2 = pcVar1;
  pcVar6 = pcVar4;
  func_0x0001000ad07c();
  if ((*pcVar2 == '\x01') &&
     (pcVar3 = pcVar1, pcVar7 = pcVar4, func_0x000107c5fb5c(pcVar1,pcVar4), pcVar2 = pcVar3,
     pcVar6 = pcVar7, pcVar3 == (char *)0x1)) {
    FUN_10169fb18();
    pcVar6 = pcVar7;
    func_0x000107c6142c(pcVar4);
    pcVar2 = pcVar4;
    pcVar4 = pcVar7;
    pcVar1 = pcVar3;
  }
  func_0x000107c5f914();
  puVar5 = PTR_PTR_1126a7820;
  func_0x000107c610f8(PTR_PTR_1126a7820);
  func_0x000107c5fadc(pcVar1,pcVar4);
  func_0x000107c6142c(pcVar4);
  func_0x000107c5fadc(pcVar2,pcVar6);
  func_0x000107c6142c(pcVar6);
  func_0x000107c48e58(puVar5);
  func_0x000107c61170(pcVar1);
  func_0x000107c61170(pcVar2);
  return puVar5;
}



/* Entry: 10169db8c; end: 10169dd4f;  */

undefined * FUN_10169db8c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10169dd50);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1016a2ef4(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1016a0888(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        FUN_1016a2ef4(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10169dd50; end: 10169de5b; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl getUnfinishedTransactionsWithMemberId:] */

void FUN_10169dd50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_1103f4848;
  func_0x000107c613fc(&UNK_1103f4848,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar3 = 1;
  func_0x0001001ca524(1,0,0x8c,4,0,0,&UNK_10d97ae08,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10169de5c; end: 10169df3f;  */

void FUN_10169de5c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(long *)(unaff_x22 + 0x10) = param_3;
  lVar2 = 0x112dbf780;
  func_0x0001000285a8(0x112dbf780,&UNK_10dc07eb0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  lVar2 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10169df40;
  plVar4[3] = param_3;
  plVar4[4] = param_4;
  plVar4[2] = uVar1;
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  plVar4[5] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_10169e24c;
  plVar5[2] = param_5;
  plVar5[3] = param_6;
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[4] = uVar1;
  lVar2 = 0;
  func_0x000107c5f918();
  plVar5[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[6] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[8] = uVar1;
  lVar2 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar5[9] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[10] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xb] = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar1;
  lVar2 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar1;
  lVar2 = 0;
  func_0x000107c5f8c0();
  plVar5[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[0xf] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x10] = uVar1;
  lVar2 = 0;
  func_0x000107c5f8b8();
  plVar5[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[0x12] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x13] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 10169df40; end: 10169df87;  */

void FUN_10169df40(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169df88,0,0);
  return;
}



/* Entry: 10169df88; end: 10169e113;  */

void FUN_10169df88(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = uVar4;
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar5);
  if ((int)uVar2 == 1) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x0001016a2fbc(uVar4,0x112dbf780,&UNK_10dc07eb0);
    func_0x000107c602fc(0x20);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar6,uVar5);
    func_0x000107c5fb78(0x756f6620746f6e20,0xea0000000000646e);
    uVar5 = 0xd000000000000014;
    FUN_1016a1570(0xd000000000000014,0x800000010efb5ef0);
    func_0x000107c6142c(0x800000010efb5ef0);
    uVar4 = uVar5;
    func_0x000107c5ed2c(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c43b70(uVar2);
    func_0x000107c61170(uVar4);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010169e0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(lVar1 + 0x20))(*(undefined8 *)(unaff_x22 + 0x40),uVar4,uVar5);
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10169e114;
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
  return;
}



/* Entry: 10169e114; end: 10169e15b;  */

void FUN_10169e114(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169e15c,0,0);
  return;
}



/* Entry: 10169e15c; end: 10169e1ef;  */

void FUN_10169e15c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar3 = PTR_PTR_1126b15a8;
  func_0x000107c61168();
  func_0x000107c5d1f4();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    lVar1 = *(long *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x20));
    func_0x000107c61170(puVar3);
    (**(code **)(lVar1 + 8))(uVar4,uVar5);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010169e1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10169e1f0);
  (*pcVar2)();
}



/* Entry: 10169e1f0; end: 10169e24b;  */

void FUN_10169e1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10169e24c;
  plVar1[2] = param_4;
  plVar1[3] = param_5;
  lVar3 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[4] = uVar2;
  lVar3 = 0;
  func_0x000107c5f918();
  plVar1[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[6] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar2;
  lVar3 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar1[9] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[10] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xb] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar2;
  lVar3 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xd] = uVar2;
  lVar3 = 0;
  func_0x000107c5f8c0();
  plVar1[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xf] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x10] = uVar2;
  lVar3 = 0;
  func_0x000107c5f8b8();
  plVar1[0x11] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x12] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x13] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 10169e24c; end: 10169e29b;  */

void FUN_10169e24c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169e29c,0,0);
  return;
}



/* Entry: 10169e29c; end: 10169e857;  */

void FUN_10169e29c(void)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  code *pcVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  code *pcVar31;
  long unaff_x22;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  undefined8 uStack_68;
  ulong uStack_60;
  
  lVar29 = *(long *)(unaff_x22 + 0x30);
  lVar14 = 0;
  func_0x000107c5f918();
  lVar32 = *(long *)(lVar14 + -8);
  uVar1 = *(long *)(lVar32 + 0x40) + 0xf;
  uVar15 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar22 = *(ulong *)(lVar29 + 0x10);
  if (uVar22 != 0) {
    uVar4 = *(ulong *)(unaff_x22 + 0x18);
    uVar5 = *(ulong *)(unaff_x22 + 0x20);
    iVar13 = 2;
    func_0x000100029b9c(2,0x10,0,0);
    uVar33 = 0;
    bVar6 = *(byte *)(lVar32 + 0x50);
    uVar25 = uVar5 >> 0x38 & 0xf;
    uVar3 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar3 = uVar25;
    }
    uVar2 = (uint)uVar4 & 0xff;
    do {
      if (*(ulong *)(lVar29 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x10169e848);
        (*pcVar23)();
      }
      (**(code **)(lVar32 + 0x10))
                (uVar15,lVar29 + ((ulong)bVar6 + 0x20 & ((ulong)bVar6 ^ 0xffffffffffffffff)) +
                        *(long *)(lVar32 + 0x48) * uVar33,lVar14);
      uVar16 = uVar1 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      pcVar23 = *(code **)(lVar32 + 0x20);
      uVar18 = uVar16;
      (*pcVar23)();
      if (iVar13 != 0) {
        lVar17 = 0;
        func_0x000107c5f888();
        lVar30 = *(long *)(lVar17 + -8);
        uVar19 = *(long *)(lVar30 + 0x40) + 0xf;
        uVar18 = uVar19 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x000107c5f8b0(uVar18);
        uVar19 = uVar19 & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar19);
        uVar20 = uVar19;
        func_0x000107c5f884(uVar19);
        FUN_1016a2dd0();
        uVar27 = uVar18;
        func_0x000107c5fab8(uVar18,uVar19,lVar17,uVar20);
        pcVar31 = *(code **)(lVar30 + 8);
        (*pcVar31)(uVar19,lVar17);
        (*pcVar31)(uVar18,lVar17);
        func_0x000107c615c0(uVar19);
        func_0x000107c615c0();
        if ((uVar27 & 1) == 0) goto LAB_10169e4b0;
LAB_10169e7a0:
        uVar28 = *(undefined8 *)(unaff_x22 + 0x10);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x30));
        (*pcVar23)(uVar28,uVar16,lVar14);
        (**(code **)(lVar32 + 0x38))(uVar28,0,1,lVar14);
        func_0x000107c615c0(uVar16);
        func_0x000107c615c0(uVar15);
        goto LAB_10169e820;
      }
LAB_10169e4b0:
      func_0x000107c5f8f4();
      if (uVar3 == 0) goto LAB_10169e374;
      if ((uVar5 >> 0x3c & 1) == 0) {
        if ((uVar5 >> 0x3d & 1) != 0) {
          uStack_68 = *(undefined8 *)(unaff_x22 + 0x18);
          uStack_60 = uVar5 & 0xffffffffffffff;
          if (uVar2 == 0x2b) {
            if (uVar25 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x10169e858);
              (*pcVar23)();
            }
            if (uVar25 == 1) goto LAB_10169e70c;
            uVar19 = 0;
            lVar17 = uVar25 - 1;
            pbVar24 = (byte *)((ulong)&uStack_68 | 1);
            do {
              if (((9 < *pbVar24 - 0x30) ||
                  (auVar10._8_8_ = 0, auVar10._0_8_ = uVar19, SUB168(auVar10 * ZEXT816(10),8) != 0))
                 || (uVar27 = uVar19 * 10, uVar20 = (ulong)(byte)(*pbVar24 - 0x30),
                    uVar19 = uVar27 + uVar20, CARRY8(uVar27,uVar20))) goto LAB_10169e70c;
              uVar34 = 0;
              lVar17 = lVar17 + -1;
              pbVar24 = pbVar24 + 1;
            } while (lVar17 != 0);
          }
          else if (uVar2 == 0x2d) {
            if (uVar25 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x10169e84c);
              (*pcVar23)();
            }
            if (uVar25 == 1) {
LAB_10169e70c:
              uVar19 = 0;
              uVar34 = 1;
            }
            else {
              uVar19 = 0;
              lVar17 = uVar25 - 1;
              pbVar24 = (byte *)((ulong)&uStack_68 | 1);
              do {
                if (((9 < *pbVar24 - 0x30) ||
                    (auVar8._8_8_ = 0, auVar8._0_8_ = uVar19, SUB168(auVar8 * ZEXT816(10),8) != 0))
                   || (uVar27 = uVar19 * 10, uVar20 = (ulong)(byte)(*pbVar24 - 0x30),
                      uVar19 = uVar27 - uVar20, uVar27 < uVar20)) goto LAB_10169e70c;
                uVar34 = 0;
                lVar17 = lVar17 + -1;
                pbVar24 = pbVar24 + 1;
              } while (lVar17 != 0);
            }
          }
          else {
            if (uVar25 == 0) goto LAB_10169e70c;
            uVar19 = 0;
            pbVar24 = (byte *)&uStack_68;
            uVar20 = uVar25;
            do {
              if (((9 < *pbVar24 - 0x30) ||
                  (auVar12._8_8_ = 0, auVar12._0_8_ = uVar19, SUB168(auVar12 * ZEXT816(10),8) != 0))
                 || (uVar26 = uVar19 * 10, uVar27 = (ulong)(byte)(*pbVar24 - 0x30),
                    uVar19 = uVar26 + uVar27, CARRY8(uVar26,uVar27))) goto LAB_10169e70c;
              uVar34 = 0;
              uVar20 = uVar20 - 1;
              pbVar24 = pbVar24 + 1;
            } while (uVar20 != 0);
          }
          goto LAB_10169e714;
        }
        uVar20 = uVar4 & 0xffffffffffff;
        pbVar24 = (byte *)((uVar5 & 0xfffffffffffffff) + 0x20);
        if ((uVar4 >> 0x3c & 1) == 0) {
          pbVar24 = *(byte **)(unaff_x22 + 0x18);
          uVar20 = *(ulong *)(unaff_x22 + 0x20);
          func_0x000107c60358();
        }
        if (*pbVar24 == 0x2b) {
          lVar17 = uVar20 - 1;
          if ((long)uVar20 < 1) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10169e854);
            (*pcVar23)();
          }
          if (lVar17 != 0) {
            uVar19 = 0;
            do {
              pbVar24 = pbVar24 + 1;
              if (((9 < *pbVar24 - 0x30) ||
                  (auVar9._8_8_ = 0, auVar9._0_8_ = uVar19, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
                 (uVar27 = uVar19 * 10, uVar20 = (ulong)(byte)(*pbVar24 - 0x30),
                 uVar19 = uVar27 + uVar20, CARRY8(uVar27,uVar20))) goto LAB_10169e374;
              uVar34 = 0;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            goto LAB_10169e714;
          }
        }
        else if (*pbVar24 == 0x2d) {
          lVar17 = uVar20 - 1;
          if ((long)uVar20 < 1) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10169e850);
            (*pcVar23)();
          }
          if (lVar17 != 0) {
            uVar19 = 0;
            do {
              pbVar24 = pbVar24 + 1;
              if (((9 < *pbVar24 - 0x30) ||
                  (auVar7._8_8_ = 0, auVar7._0_8_ = uVar19, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
                 (uVar27 = uVar19 * 10, uVar20 = (ulong)(byte)(*pbVar24 - 0x30),
                 uVar19 = uVar27 - uVar20, uVar27 < uVar20)) goto LAB_10169e374;
              uVar34 = 0;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            goto LAB_10169e714;
          }
        }
        else if (uVar20 != 0) {
          uVar19 = 0;
          if (pbVar24 == (byte *)0x0) {
            uVar34 = 0;
          }
          else {
            do {
              if (((9 < *pbVar24 - 0x30) ||
                  (auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, SUB168(auVar11 * ZEXT816(10),8) != 0))
                 || (uVar26 = uVar19 * 10, uVar27 = (ulong)(byte)(*pbVar24 - 0x30),
                    uVar19 = uVar26 + uVar27, CARRY8(uVar26,uVar27))) goto LAB_10169e374;
              uVar34 = 0;
              uVar20 = uVar20 - 1;
              pbVar24 = pbVar24 + 1;
            } while (uVar20 != 0);
          }
          goto LAB_10169e714;
        }
      }
      else {
        uVar19 = *(ulong *)(unaff_x22 + 0x18);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x20);
        func_0x000107c61434(uVar28);
        uVar21 = uVar28;
        func_0x000100f5015c(uVar19,uVar28,10);
        uVar34 = (uint)uVar21;
        func_0x000107c6142c(uVar28);
LAB_10169e714:
        if (((uVar34 & 0xff) != 1) && (uVar18 == uVar19)) goto LAB_10169e7a0;
      }
LAB_10169e374:
      uVar33 = uVar33 + 1;
      (**(code **)(lVar32 + 8))(uVar16,lVar14);
      func_0x000107c615c0(uVar16);
    } while (uVar33 != uVar22);
    lVar29 = *(long *)(unaff_x22 + 0x30);
  }
  func_0x000107c6142c(lVar29);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar15);
  (**(code **)(lVar32 + 0x38))(uVar28,1,1,lVar14);
LAB_10169e820:
                    /* WARNING: Could not recover jumptable at 0x00010169e840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169e858; end: 10169e993; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl finishTransactionWithTransactionId:memberId:] */

void FUN_10169e858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_1103f4820;
  func_0x000107c613fc(&UNK_1103f4820,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(puVar1);
  uVar3 = 1;
  func_0x0001001ca524(1,0,0x8c,4,0,0,&UNK_10d97ae00,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10169e994; end: 10169e9fb; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl getBuildFlavor] */

void FUN_10169e994(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001048969bc();
  uVar2 = 0x41544542;
  if (*param_1 == '\0') {
    uVar2 = 0x49544355444f5250;
  }
  uVar1 = 0xe400000000000000;
  if (*param_1 == '\0') {
    uVar1 = 0xea00000000004e4f;
  }
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10169e9fc; end: 10169eaef;  */

void FUN_10169e9fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar2 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x18) = uVar1;
  lVar2 = 0;
  func_0x000107c5f8a4();
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10169eaa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar4,uVar1);
  return;
}



/* Entry: 10169eaf0; end: 10169ec5b;  */

void FUN_10169eaf0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = uVar5;
  (**(code **)(lVar1 + 0x30))(uVar5,1,uVar6);
  if ((int)uVar2 == 1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x0001016a2fbc(uVar5,0x112dbf6f8,&UNK_10d97ae20);
    uVar2 = 0xd000000000000018;
    FUN_1016a1570(0xd000000000000018,0x800000010efb5ed0);
    uVar6 = uVar2;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar2);
    func_0x000107c43b70(uVar4);
    func_0x000107c61170(uVar6);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = uVar4;
    (**(code **)(lVar1 + 0x20))(uVar4,uVar5,uVar6);
    func_0x000107c5f894();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c5fadc(uVar2,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c48af4(puVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c43b74(uVar7);
    func_0x000107c61170(puVar3);
    (**(code **)(lVar1 + 8))(uVar4,uVar6);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010169ec58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169ec5c; end: 10169ee2b; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl getStorefrontCountryCode] */

void FUN_10169ec5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  puVar2 = &UNK_1103f47f8;
  func_0x000107c613fc(&UNK_1103f47f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  uVar3 = 1;
  func_0x0001001ca524(1,0,0x8c,4,0,0,&UNK_10d97adf8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10169ee2c; end: 10169ef4b;  */

void FUN_10169ee2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar1 = 0;
  func_0x000107c5ef0c();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  lVar1 = 0x112dbf6f0;
  func_0x0001000285a8(0x112dbf6f0,&UNK_10d97ae18);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10169ef04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 10169ef4c; end: 10169f1cb;  */

void FUN_10169ef4c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = 0;
  func_0x000107c5f8a4();
  lVar11 = *(long *)(lVar2 + -8);
  uVar3 = uVar9;
  (**(code **)(lVar11 + 0x30))(uVar9,1,lVar2);
  if ((int)uVar3 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    func_0x0001016a2fbc(uVar9,0x112dbf6f8,&UNK_10d97ae20);
    func_0x000107c615c0(uVar9);
    (**(code **)(lVar2 + 0x38))(uVar8,1,1,uVar3);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,4,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 == 0) {
      lVar4 = 0;
      func_0x000107c5ef14();
      lVar12 = *(long *)(lVar4 + -8);
      uVar5 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar5);
      func_0x000107c5f898(uVar5);
      func_0x000107c5ef10(uVar3);
      (**(code **)(lVar12 + 8))(uVar5,lVar4);
      func_0x000107c615c0(uVar5);
    }
    else {
      func_0x000107c5f8a0(uVar3);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(lVar11 + 8))(uVar8,lVar2);
    func_0x000107c615c0(uVar8);
    (**(code **)(lVar4 + 0x30))(uVar3,1,uVar9);
    if ((int)uVar3 != 1) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar2 = *(long *)(unaff_x22 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar7 = uVar8;
      (**(code **)(lVar2 + 0x20))(uVar3,uVar8,uVar9);
      func_0x000107c615c0(uVar8);
      func_0x000107c5ef08();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c5fadc(uVar8,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c48af4(puVar6);
      func_0x000107c61170(uVar8);
      func_0x000107c43b74(uVar10);
      func_0x000107c61170(puVar6);
      (**(code **)(lVar2 + 8))(uVar3,uVar9);
      func_0x000107c615c0(uVar3);
      goto LAB_10169f1ac;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001016a2fbc(uVar9,0x112dbf6f0,&UNK_10d97ae18);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar3);
  uVar9 = 0xd000000000000021;
  FUN_1016a1570(0xd000000000000021,0x800000010efb5e00);
  uVar3 = uVar9;
  func_0x000107c5ed2c();
  func_0x000107c61170(uVar9);
  func_0x000107c43b70(uVar8);
  func_0x000107c61170(uVar3);
LAB_10169f1ac:
                    /* WARNING: Could not recover jumptable at 0x00010169f1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169f1cc; end: 10169f29b;  */

void FUN_10169f1cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZTu_110347dd0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = 0x112d9ff70;
  FUN_1016a2f38(0x112d9ff70,0x112d38270,&UNK_10d905a20,PTR___sSayxGSlsMc_11034dd20);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10169f29c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZ_110347dc8)
            ((undefined8 *)(unaff_x22 + 0x10),uVar1,uVar3);
  return;
}



/* Entry: 10169f29c; end: 10169f2fb;  */

void FUN_10169f29c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10169f2fc;
  }
  else {
    pcVar1 = FUN_10169f5ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10169f2fc; end: 10169f5ab;  */

void FUN_10169f2fc(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar13 = *(long *)(unaff_x22 + 0x28);
  lVar3 = 0;
  func_0x000107c5f970();
  lVar18 = *(long *)(lVar3 + -8);
  uVar5 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c6142c(lVar13);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar4);
    uVar7 = 0xd000000000000022;
    FUN_1016a1570(0xd000000000000022,0x800000010efb5ea0);
    uVar17 = uVar7;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar7);
    func_0x000107c43b70(uVar14);
    func_0x000107c61170(uVar17);
  }
  else {
    (**(code **)(lVar18 + 0x10))
              (uVar5,lVar13 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)),lVar3);
    func_0x000107c6142c(lVar13);
    (**(code **)(lVar18 + 0x20))(uVar4,uVar5,lVar3);
    func_0x000107c615c0(uVar5);
    lVar13 = 0;
    func_0x000107c60154();
    lVar15 = *(long *)(lVar13 + -8);
    uVar5 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar5);
    uVar6 = 2;
    lVar12 = 0x10;
    func_0x000100029b9c(2,0x10,0,0);
    if ((int)uVar6 == 0) {
      lVar8 = 0;
      func_0x000107c5ef14();
      lVar16 = *(long *)(lVar8 + -8);
      uVar10 = *(long *)(lVar16 + 0x40) + 0xf;
      uVar6 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      uVar9 = uVar6;
      FUN_1016a00a4(uVar6);
      func_0x000107c5eedc();
      uVar1 = 0;
      if (lVar12 != 0) {
        uVar1 = uVar9;
      }
      lVar2 = -0x2000000000000000;
      if (lVar12 != 0) {
        lVar2 = lVar12;
      }
      uVar10 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar10);
      (**(code **)(lVar16 + 0x10))();
      func_0x000107c60150(uVar5,uVar1,lVar2,uVar10);
      (**(code **)(lVar16 + 8))(uVar6,lVar8);
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(uVar6);
    }
    else {
      func_0x000107c5f958(uVar5);
      lVar8 = lVar12;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c6014c();
    (**(code **)(lVar15 + 8))(uVar5,lVar13);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c5fadc(uVar6,lVar8);
    func_0x000107c6142c(lVar8);
    func_0x000107c48af4(puVar11);
    func_0x000107c61170(uVar6);
    func_0x000107c615c0(uVar5);
    func_0x000107c43b74(uVar17);
    func_0x000107c61170(puVar11);
    (**(code **)(lVar18 + 8))(uVar4,lVar3);
    func_0x000107c615c0(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010169f5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169f5ac; end: 10169f62f;  */

void FUN_10169f5ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = 0xd000000000000022;
  FUN_1016a1570(0xd000000000000022,0x800000010efb5e70);
  uVar2 = uVar1;
  func_0x000107c5ed2c();
  func_0x000107c61170(uVar1);
  func_0x000107c43b70(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c614ac(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010169f62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169f630; end: 10169f663; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl getStorefrontCurrency] */

void FUN_10169f630(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010169ed3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10169f664; end: 10169f6bf; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl isIAPSupported] */

void FUN_10169f664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10169f6c0; end: 10169f6fb; -[_TtC23BusinessIAPServicesImpl22BusinessIAPServiceImpl init] */

void FUN_10169f6c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10169f6fc; end: 10169f78f;  */

void FUN_10169f6fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10169f790; end: 10169f8fb;  */

void FUN_10169f790(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x20);
  func_0x000107c4a8a8();
  func_0x000107c61180();
  uVar7 = param_2;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(param_2);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar7 = 0x800000010efb5e50;
      uVar6 = 0xd00000000000001b;
      goto LAB_10169f838;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c4f31c();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
LAB_10169f838:
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x40) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(ulong *)(lVar4 + 0x28) = uVar7;
  *(long *)(unaff_x22 + 0x10) = lVar4;
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZTu_110347dd0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = 0x112d9ff70;
  FUN_1016a2f38(0x112d9ff70,0x112d38270,&UNK_10d905a20,PTR___sSayxGSlsMc_11034dd20);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10169f8fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZ_110347dc8)
            ((long *)(unaff_x22 + 0x10),uVar6,uVar3);
  return;
}



/* Entry: 10169f8fc; end: 10169f963;  */

void FUN_10169f8fc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x40));
    pcVar1 = FUN_10169f964;
  }
  else {
    pcVar1 = FUN_10169fad4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10169f964; end: 10169fad3;  */

void FUN_10169f964(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c6142c(lVar5);
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c4f31c(uVar3);
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x000107c5fb78(uVar2,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5fb78(0x756f6620746f6e20,0xea0000000000646e);
    FUN_1016a1570(0xd000000000000010,0x800000010efb6090);
    func_0x000107c6142c(0x800000010efb6090);
    func_0x000107c61654();
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    (**(code **)(lVar1 + 0x10))
              (uVar2,lVar5 + ((ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff)),uVar3);
    func_0x000107c6142c(lVar5);
    (**(code **)(lVar1 + 0x20))(uVar4,uVar2,uVar3);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010169fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10169fad4; end: 10169fb0f;  */

void FUN_10169fad4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010169fb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10169fb10; end: 10169fb17;  */

undefined8 FUN_10169fb10(void)

{
  return 0;
}



/* Entry: 10169fb18; end: 10169fcf7;  */

void FUN_10169fb18(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_68;
  
  lVar13 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    uVar6 = 0xd00000000000003e;
    func_0x000107c5fb5c(0xd00000000000003e,0x800000010efb5f50);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10169fcf4);
      (*pcVar5)();
    }
    if (uVar6 == 0) break;
    puStack_68 = (undefined *)0x0;
    func_0x000107c61598(&puStack_68,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = puStack_68;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar11 = SUB168(auVar1 * auVar3,8);
    if ((long)puStack_68 * uVar6 < uVar6) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = -uVar6 / uVar6;
      }
      uVar12 = -uVar6 - uVar12 * uVar6;
      if ((long)puStack_68 * uVar6 < uVar12) {
        do {
          puStack_68 = (undefined *)0x0;
          func_0x000107c61598(&puStack_68,8);
        } while ((long)puStack_68 * uVar6 < uVar12);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = puStack_68;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar6;
        uVar11 = SUB168(auVar2 * auVar4,8);
      }
    }
    uVar7 = 0xf;
    func_0x000107c5fb6c(0xf,uVar11,0xd00000000000003e,0x800000010efb5f50);
    uVar11 = 0xd00000000000003e;
    func_0x000107c5fbcc();
    puVar8 = puVar9;
    func_0x000107c61558();
    puVar10 = puVar9;
    if (((ulong)puVar8 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      FUN_101692914(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar6 = *(ulong *)(puVar10 + 0x10);
    puVar9 = puVar10;
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_101692914(puVar9,uVar6 + 1,1,puVar10);
    }
    *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
    *(undefined8 *)(puVar9 + uVar6 * 0x10 + 0x20) = uVar7;
    *(undefined8 *)(puVar9 + uVar6 * 0x10 + 0x28) = uVar11;
    lVar13 = lVar13 + 1;
    if (lVar13 == 10) {
      uVar11 = 0x112da2fe0;
      puStack_68 = puVar9;
      func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
      uVar7 = 0x112da2fe8;
      FUN_1016a2f38(0x112da2fe8,0x112da2fe0,&UNK_10d947420,PTR___sSayxGSTsMc_11034dd08);
      func_0x000107c5fbd0(&puStack_68,uVar11,uVar7);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10169fcf8);
  (*pcVar5)();
}



/* Entry: 10169fcf8; end: 10169fd5b;  */

void FUN_10169fcf8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1016a2ffc;
  plVar5[3] = lVar1;
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0,uVar3);
  func_0x000107c61538();
  plVar5[2] = lVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZTu_110347dd0
                                   + 4);
  func_0x000107c615b8();
  plVar5[4] = (long)plVar2;
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = 0x112d9ff70;
  FUN_1016a2f38(0x112d9ff70,0x112d38270,&UNK_10d905a20,PTR___sSayxGSlsMc_11034dd20);
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_10169f29c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZ_110347dc8)
            (plVar5 + 2,uVar3,uVar4);
  return;
}



/* Entry: 10169fd5c; end: 10169fdbf;  */

void FUN_10169fd5c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1016a3000;
  plVar5[2] = lVar6;
  lVar2 = 0;
  func_0x000107c5ef0c(0,lVar6,uVar1);
  plVar5[3] = lVar2;
  lVar6 = *(long *)(lVar2 + -8);
  plVar5[4] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[5] = uVar3;
  lVar6 = 0x112dbf6f0;
  func_0x0001000285a8(0x112dbf6f0,&UNK_10d97ae18);
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[6] = uVar3;
  lVar6 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar3 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar5[8] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x10169ef04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar4,uVar3);
  return;
}



/* Entry: 10169fdc0; end: 10169fdcf;  */

undefined1  [16] FUN_10169fdc0(void)

{
  return ZEXT816(0x1103f47d8);
}



/* Entry: 10169fdd0; end: 10169fdef;  */

void FUN_10169fdd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e4bf0);
  return;
}



/* Entry: 10169fdf0; end: 10169fe53;  */

void FUN_10169fdf0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1016a3004;
  plVar6[2] = lVar3;
  lVar3 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20,uVar1);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[3] = uVar2;
  lVar3 = 0;
  func_0x000107c5f8a4();
  plVar6[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[5] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[6] = uVar4;
  plVar5 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar6[7] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x10169eaa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar5,uVar2);
  return;
}



/* Entry: 10169fe54; end: 10169fe8f;  */

void FUN_10169fe54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10169fe90; end: 10169ff1b;  */

void FUN_10169fe90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10169ff1c;
  plVar9[3] = lVar1;
  plVar9[4] = lVar6;
  plVar9[2] = lVar3;
  lVar6 = 0x112dbf780;
  func_0x0001000285a8(0x112dbf780,&UNK_10dc07eb0);
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[5] = uVar5;
  lVar6 = 0;
  func_0x000107c5f918();
  plVar9[6] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[7] = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[8] = uVar7;
  plVar8 = (long *)0x40;
  func_0x000107c615b8();
  plVar9[9] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_10169df40;
  plVar8[3] = lVar3;
  plVar8[4] = lVar1;
  plVar8[2] = uVar5;
  plVar9 = (long *)0xb0;
  func_0x000107c615b8();
  plVar8[5] = (long)plVar9;
  *plVar9 = (long)plVar8;
  plVar9[1] = (long)FUN_10169e24c;
  plVar9[2] = lVar4;
  plVar9[3] = lVar2;
  lVar6 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[4] = uVar5;
  lVar6 = 0;
  func_0x000107c5f918();
  plVar9[5] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[6] = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[7] = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[8] = uVar5;
  lVar6 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar9[9] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[10] = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xb] = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xc] = uVar5;
  lVar6 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xd] = uVar5;
  lVar6 = 0;
  func_0x000107c5f8c0();
  plVar9[0xe] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[0xf] = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x10] = uVar5;
  lVar6 = 0;
  func_0x000107c5f8b8();
  plVar9[0x11] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar9[0x12] = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x13] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 10169ff1c; end: 10169ff8b;  */

void FUN_10169ff1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010169ff54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10169ff8c; end: 1016a0003;  */

void FUN_10169ff8c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1016a3008;
  plVar6[3] = lVar3;
  lVar3 = 0;
  func_0x000107c5f918(0,uVar1);
  plVar6[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[5] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[6] = uVar4;
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  plVar6[7] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_10169d780;
  plVar5[2] = lVar2;
  plVar5[3] = lVar7;
  lVar7 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[4] = uVar4;
  lVar7 = 0;
  func_0x000107c5f918();
  plVar5[5] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[6] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar8;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[8] = uVar4;
  lVar7 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar5[9] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[10] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar8 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xb] = uVar8;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar4;
  lVar7 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar4;
  lVar7 = 0;
  func_0x000107c5f8c0();
  plVar5[0xe] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[0xf] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x10] = uVar4;
  lVar7 = 0;
  func_0x000107c5f8b8();
  plVar5[0x11] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[0x12] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x13] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 1016a0004; end: 1016a0037;  */

void FUN_1016a0004(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016a0038; end: 1016a00a3;  */

void FUN_1016a0038(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1016a300c;
  plVar5[2] = lVar6;
  plVar2 = (long *)0x90;
  func_0x000107c615b8(0x90,uVar1);
  plVar5[3] = (long)plVar2;
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_10169cc38;
  plVar2[4] = lVar4;
  lVar6 = 0;
  func_0x000107c5f950();
  plVar2[5] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar2[6] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
  lVar6 = 0;
  func_0x000107c5f970();
  plVar2[8] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar2[9] = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[10] = uVar3;
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  plVar2[0xb] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)FUN_10169cd7c;
  plVar5[3] = uVar3;
  plVar5[4] = lVar4;
  lVar4 = 0;
  func_0x000107c5f970();
  plVar5[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10169f790,0,0);
  return;
}



/* Entry: 1016a00a4; end: 1016a056f;  */

void FUN_1016a00a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  iVar4 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar4 == 0) {
    lVar5 = 0;
    uStack_78 = param_1;
    func_0x000107c5f920();
    lVar7 = *(long *)(lVar5 + -8);
    lVar11 = *(long *)(lVar7 + 0x40);
    puStack_68 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar9 = lVar11 + 0xfU & 0xfffffffffffffff0;
    puVar12 = auStack_a0 + -uVar9;
    func_0x000107c5f964(puVar12);
    puStack_70 = puVar12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = (long)puVar12 - uVar9;
    pcVar15 = *(code **)(lVar7 + 0x10);
    puStack_80 = puVar12;
    (*pcVar15)(lVar8,puVar12,lVar5);
    uVar2 = uRam0000000112dbf768;
    uVar1 = uRam0000000112dbf760;
    iVar4 = *(int *)PTR___s8StoreKit12BackingValueO3nilyA2CmFWC_110347c78;
    pcStack_88 = (code *)lVar8;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    func_0x000107c61434(uVar2);
    func_0x000107c5f924(lVar8 - uVar9,uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    pcVar6 = *(code **)(lVar7 + 8);
    (*pcVar6)(lVar8,lVar5);
    pcStack_98 = *(code **)(lVar7 + 0x20);
    (*pcStack_98)(lVar8,lVar8 - uVar9,lVar5);
    pcVar10 = pcStack_88;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar13 = (long)pcVar10 - uVar9;
    pcStack_88 = pcVar15;
    (*pcVar15)(lVar13,lVar8,lVar5);
    pcVar15 = *(code **)(lVar7 + 0x58);
    lVar7 = lVar13;
    (*pcVar15)(lVar13,lVar5);
    lStack_90 = CONCAT44(lStack_90._4_4_,iVar4);
    if ((int)lVar7 != iVar4) {
      (*pcVar6)(lVar13,lVar5);
      uVar2 = uRam0000000112dbf778;
      uVar1 = uRam0000000112dbf770;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      func_0x000107c61434(uVar2);
      func_0x000107c5f924((long)pcVar10 - uVar9,uVar1,uVar2);
      func_0x000107c6142c(uVar2);
      (*pcVar6)(lVar8,lVar5);
      (*pcStack_98)(lVar8,(long)pcVar10 - uVar9,lVar5);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      pcVar3 = pcStack_88;
      lVar13 = (long)pcVar10 - uVar9;
      (*pcStack_88)(lVar13,lVar8,lVar5);
      lVar7 = lVar13;
      (*pcVar15)(lVar13,lVar5);
      if ((int)lVar7 != (int)lStack_90) {
        (*pcVar6)(lVar13,lVar5);
        lVar7 = 0x112d483a8;
        func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
        lStack_90 = (long)pcVar10;
        uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar13 = (long)pcVar10 - uVar9;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar11 = lVar13 - (lVar11 + 0xfU & 0xfffffffffffffff0);
        lVar7 = lVar8;
        (*pcVar3)(lVar11,lVar8,lVar5);
        func_0x000107c5fb88(lVar11);
        if (lVar7 != 0) {
          func_0x000107c5eed0(lVar13);
        }
        lVar11 = 0;
        func_0x000107c5ef14();
        lVar16 = *(long *)(lVar11 + -8);
        (**(code **)(lVar16 + 0x38))(lVar13,lVar7 == 0,1,lVar11);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar14 = lVar13 - uVar9;
        FUN_1016a2e14(lVar13,lVar14,0x112d483a8,&UNK_10d910f00);
        pcVar10 = *(code **)(lVar16 + 0x30);
        lVar7 = lVar14;
        (*pcVar10)(lVar14,1,lVar11);
        if ((int)lVar7 == 1) {
          func_0x000107c5eed0(uStack_78,0x58585f7878,0xe500000000000000);
          (*pcVar6)(lVar8,lVar5);
          (*pcVar6)(puStack_80,lVar5);
          lVar7 = lVar14;
          (*pcVar10)(lVar14,1,lVar11);
          if ((int)lVar7 == 1) {
            return;
          }
          func_0x0001016a2fbc(lVar14,0x112d483a8,&UNK_10d910f00);
          return;
        }
        (*pcVar6)(lVar8,lVar5);
        (*pcVar6)(puStack_80,lVar5);
        (**(code **)(lVar16 + 0x20))(uStack_78,lVar14,lVar11);
        return;
      }
    }
    (*pcVar6)(lVar13,lVar5);
    func_0x000107c5eed0(uStack_78,0x58585f7878,0xe500000000000000);
    (*pcVar6)(lVar8,lVar5);
    (*pcVar6)(puStack_80,lVar5);
  }
  else {
    func_0x000107c5f95c(param_1);
  }
  return;
}



/* Entry: 1016a0570; end: 1016a05cb;  */

void FUN_1016a0570(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1016a2ef4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dbf7d0;
  plVar5 = (long *)&UNK_10d97ae78;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016a05cc; end: 1016a0747;  */

undefined * FUN_1016a05cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016a0748);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112dbf7b0;
    func_0x0001000285a8(0x112dbf7b0,&UNK_10d97ae60);
    lVar5 = 0;
    func_0x000107c5f918();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016a0740);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016a0744);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5f918();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1016a0748; end: 1016a0763;  */

void FUN_1016a0748(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1016a0764();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1016a0764; end: 1016a0887;  */

undefined * FUN_1016a0764(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a0888);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1016a0570();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1016a2ef4(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1016a0888; end: 1016a0a3b;  */

ulong FUN_1016a0888(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a096c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a0970);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a7820;
    func_0x000107c61168(PTR_PTR_1126a7820);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a7820;
    func_0x000107c61168(PTR_PTR_1126a7820);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016a2ef4(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016a0a3c);
  (*pcVar2)();
}



/* Entry: 1016a0a3c; end: 1016a156f;  */

undefined8 FUN_1016a0a3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = 0;
  func_0x000107c5f94c();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *unaff_x20;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  uVar2 = 0x112dbf7e8;
  func_0x0001016a2f7c(0x112dbf7e8,PTR___s8StoreKit7ProductV14PurchaseOptionVSHAAMc_110347d60);
  func_0x000107c5fa4c(uVar6,lVar1,uVar2);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    pcVar7 = *(code **)(lVar11 + 0x10);
  }
  else {
    lVar8 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    do {
      lVar12 = lVar8 * uVar6;
      (*pcVar7)(puVar10,*(long *)(lVar5 + 0x30) + lVar12,lVar1);
      uVar2 = 0x112dbf7f0;
      func_0x0001016a2f7c(0x112dbf7f0,PTR___s8StoreKit7ProductV14PurchaseOptionVSQAAMc_110347d68);
      puVar3 = puVar10;
      func_0x000107c5fab8(puVar10,param_2,lVar1,uVar2);
      pcVar9 = *(code **)(lVar11 + 8);
      (*pcVar9)(puVar10,lVar1);
      if (((ulong)puVar3 & 1) != 0) {
        (*pcVar9)(param_2,lVar1);
        (*pcVar7)(param_1,*(long *)(lVar5 + 0x30) + lVar12,lVar1);
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  (*pcVar7)(puVar10,param_2,lVar1);
  lVar8 = *unaff_x20;
  func_0x0001016a0c4c(puVar10,uVar6,lVar5);
  *unaff_x20 = lVar8;
  (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar1);
  return 1;
}



/* Entry: 1016a1570; end: 1016a16bb;  */

undefined * FUN_1016a1570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x0001016a2fbc((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efb5e30);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1016a16bc; end: 1016a194f;  */

undefined * FUN_1016a16bc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5f94c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar15 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dbf7f8,&UNK_10d97aeb0);
    puVar3 = puVar15;
    func_0x000107c602e8();
    puStack_78 = (undefined *)0x0;
    puStack_70 = puVar3 + 0x38;
    lStack_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar16 = *(long *)(lVar12 + 0x48);
    pcVar14 = *(code **)(lVar12 + 0x10);
    puStack_98 = puVar15;
    do {
      lVar1 = lStack_88;
      (*pcVar14)(lStack_88,lStack_90 + lVar16 * (long)puStack_78,lVar2);
      pcStack_80 = *(code **)(lVar12 + 0x20);
      (*pcStack_80)(lStack_68,lVar1,lVar2);
      uVar10 = *(ulong *)(puVar3 + 0x28);
      uVar4 = 0x112dbf7e8;
      func_0x0001016a2f7c(0x112dbf7e8,PTR___s8StoreKit7ProductV14PurchaseOptionVSHAAMc_110347d60);
      func_0x000107c5fa4c(uVar10,lVar2,uVar4);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar10 >> 6;
      uVar7 = *(ulong *)(puStack_70 + uVar6 * 8);
      uVar8 = 1L << (uVar10 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        do {
          (*pcVar14)(puVar11,*(long *)(puVar3 + 0x30) + uVar10 * lVar16,lVar2);
          uVar4 = 0x112dbf7f0;
          func_0x0001016a2f7c(0x112dbf7f0,PTR___s8StoreKit7ProductV14PurchaseOptionVSQAAMc_110347d68
                             );
          puVar5 = puVar11;
          func_0x000107c5fab8(puVar11,lStack_68,lVar2,uVar4);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar2);
          if (((ulong)puVar5 & 1) != 0) {
            (*pcVar13)(lStack_68,lVar2);
            puVar15 = puStack_98;
            goto LAB_1016a17c4;
          }
          uVar10 = uVar10 + 1 & ~uVar9;
          uVar6 = uVar10 >> 6;
          uVar7 = *(ulong *)(puStack_70 + uVar6 * 8);
          uVar8 = 1L << (uVar10 & 0x3f);
          puVar15 = puStack_98;
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puStack_70 + uVar6 * 8) = uVar8 | uVar7;
      (*pcStack_80)(*(long *)(puVar3 + 0x30) + uVar10 * lVar16,lStack_68,lVar2);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1016a1950);
        (*pcVar14)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_1016a17c4:
      puStack_78 = puStack_78 + 1;
    } while (puStack_78 != puVar15);
  }
  return puVar3;
}



/* Entry: 1016a1950; end: 1016a1a0f;  */

void FUN_1016a1950(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000107c5f94c();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a1a10,0,0);
  return;
}



/* Entry: 1016a1a10; end: 1016a1e2b;  */

void FUN_1016a1a10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4caec(uVar2);
  func_0x000107c61180();
  uVar11 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c5eea8(uVar7,uVar11,param_2);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar3 + 0x30))(uVar7,1,uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((int)uVar7 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar11 = 0x112d3bc20;
    func_0x0001016a2fbc(uVar7,0x112d3bc20,&UNK_10d904ef0);
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c4caec(uVar9);
    func_0x000107c61180();
    uVar5 = uVar9;
    func_0x000107c5faec();
    func_0x000107c61170(uVar9);
    func_0x000107c5fb78(uVar5,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x000107c5fb78(0xd000000000000018,0x800000010efb6030);
    FUN_1016a1570(0xd000000000000012,0x800000010efb6010);
    func_0x000107c6142c(0x800000010efb6010);
    func_0x000107c61654();
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001016a1bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar10 = *(ulong *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x20))
            (uVar8,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  lVar3 = 0x112dbf7e0;
  func_0x0001000285a8(0x112dbf7e0,&UNK_10d97aea8);
  lVar13 = *(long *)(lVar1 + 0x48);
  uVar6 = (ulong)*(byte *)(lVar1 + 0x50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  lVar1 = lVar3 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  func_0x000107c5f940(lVar1,uVar8);
  func_0x000107c5f944(lVar1 + lVar13,FUN_10169fb10,0);
  lVar13 = lVar3;
  FUN_1016a16bc();
  func_0x000107c61588(lVar3);
  func_0x000107c61408(lVar1,2,uVar11);
  uVar6 = 0x20;
  func_0x000107c6145c(lVar3,0x20,7);
  func_0x000107c4a8a8();
  func_0x000107c61180();
  if (uVar10 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
  }
  else {
    uVar4 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    uVar10 = uVar4 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar10 = uVar6 >> 0x38 & 0xf;
    }
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    if (uVar10 == 0) {
      (**(code **)(lVar3 + 8))(uVar8,uVar11);
      func_0x000107c6142c(uVar6);
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar1 = *(long *)(unaff_x22 + 0x20);
      func_0x000107c602fc(0x20);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(uVar4,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c5fb78(0x7d7d22,0xe300000000000000);
      uVar5 = 0xd00000000000001b;
      uVar12 = 0x800000010efb6050;
      func_0x000100e35e30(0xd00000000000001b,0x800000010efb6050);
      func_0x000107c5f948(uVar2,0xd000000000000014,0x800000010efb6070,uVar5,uVar12);
      func_0x00010006c090(uVar5,uVar12);
      FUN_1016a0a3c(uVar9,uVar2);
      (**(code **)(lVar1 + 8))(uVar9,uVar7);
      (**(code **)(lVar3 + 8))(uVar8,uVar11);
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016a1e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar13);
  return;
}



/* Entry: 1016a1e2c; end: 1016a27bb;  */

void FUN_1016a1e2c(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112dbf7a8;
  func_0x0001000285a8(0x112dbf7a8,&UNK_10d97ae58);
  lStack_88 = *(long *)(lVar3 + -8);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  lStack_90 = (long)&lStack_90 - extraout_x8;
  func_0x000107c5f918();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = ((long)&lStack_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar11 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5f950();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x10))(lVar15,param_1,lVar5);
  lVar6 = lVar15;
  (**(code **)(lVar14 + 0x58))(lVar15,lVar5);
  iVar2 = (int)lVar6;
  if (iVar2 == *(int *)
                PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
     ) {
    (**(code **)(lVar14 + 0x60))(lVar15,lVar5);
    FUN_1016a2e14(lVar15,lVar13,0x112dbf790,&UNK_10d97ae40);
    func_0x0001016a2e5c(lVar13,lVar11,0x112dbf790,&UNK_10d97ae40);
    lVar6 = lVar11;
    func_0x000107c614c4(lVar11,lVar3);
    if ((int)lVar6 == 1) {
      (**(code **)(lVar10 + 0x20))(lVar12,lVar11,lVar4);
      puVar9 = PTR_PTR_1126a7828;
      func_0x000107c610f8(PTR_PTR_1126a7828);
      func_0x000107c45e78();
      puVar7 = puVar9;
      FUN_10169da78();
      func_0x000107c5a028(puVar9);
      func_0x000107c61170(puVar7);
      (**(code **)(lVar10 + 8))(lVar12,lVar4);
      func_0x0001016a2fbc(lVar13,0x112dbf790,&UNK_10d97ae40);
    }
    else {
      lVar3 = 0x112dbf7a0;
      func_0x0001000285a8(0x112dbf7a0,&UNK_10d97ae50);
      iVar2 = *(int *)(lVar3 + 0x30);
      (**(code **)(lVar10 + 0x20))(lVar12,lVar11,lVar4);
      lVar5 = lStack_80;
      lVar6 = lStack_88;
      lVar3 = lStack_90;
      (**(code **)(lStack_88 + 0x20))(lStack_90,lVar11 + iVar2,lStack_80);
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x37);
      uVar8 = 0xd00000000000001f;
      func_0x000107c5fb78(0xd00000000000001f,0x800000010efb5fd0);
      func_0x000107c5f8f4();
      puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      uStack_78 = uVar8;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      uVar8 = 0x800000010efb5ff0;
      func_0x000107c5fb78(0xd000000000000010,0x800000010efb5ff0);
      func_0x000107c5f914();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(0x203a,0xe200000000000000);
      uVar8 = 0x112dbf7d8;
      func_0x0001016a2f38(0x112dbf7d8,0x112dbf7a8,&UNK_10d97ae58,
                          PTR___s8StoreKit18VerificationResultO0C5ErrorOyx_Gs0E0AAMc_110347c98);
      func_0x000107c60640(lVar5,uVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      uVar1 = uStack_68;
      uVar8 = uStack_70;
      puVar9 = PTR_PTR_1126a7828;
      func_0x000107c610f8(PTR_PTR_1126a7828);
      func_0x000107c45e78();
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c54664(puVar9);
      func_0x000107c6142c(uVar1);
      func_0x000107c61170(uVar8);
      (**(code **)(lVar6 + 8))(lVar3,lVar5);
      (**(code **)(lVar10 + 8))(lVar12,lVar4);
      func_0x0001016a2fbc(lVar13,0x112dbf790,&UNK_10d97ae40);
    }
  }
  else if ((iVar2 == *(int *)
                      PTR___s8StoreKit7ProductV14PurchaseResultO13userCancelledyA2EmFWC_110347d70)
          || (iVar2 == *(int *)PTR___s8StoreKit7ProductV14PurchaseResultO7pendingyA2EmFWC_110347d78)
          ) {
    func_0x000107c610f8(PTR_PTR_1126a7828);
    func_0x000107c45e78();
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1a);
    func_0x000107c5fb78(0xd000000000000018,0x800000010efb5fb0);
    func_0x000107c603d0(param_1,&uStack_70,lVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_68;
    uVar8 = uStack_70;
    puVar9 = PTR_PTR_1126a7828;
    func_0x000107c610f8(PTR_PTR_1126a7828);
    func_0x000107c45e78();
    func_0x000107c5fadc(uVar8,uVar1);
    func_0x000107c54664(puVar9);
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar8);
    (**(code **)(lVar14 + 8))(lVar15,lVar5);
  }
  return;
}



/* Entry: 1016a27bc; end: 1016a290f;  */

void FUN_1016a27bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x20) = uVar1;
  lVar2 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  lVar2 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  func_0x000107c5f8c0();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  lVar2 = 0;
  func_0x000107c5f8b8();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a2910,0,0);
  return;
}



/* Entry: 1016a2910; end: 1016a29a7;  */

void FUN_1016a2910(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c5f8ac(uVar2);
  func_0x000107c5f8bc(uVar4);
  (**(code **)(lVar1 + 8))(uVar2,uVar5);
  *(undefined **)(unaff_x22 + 0xa0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016a29a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar3,*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 1016a29a8; end: 1016a29ef;  */

void FUN_1016a29a8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016a29f0,0,0);
  return;
}



/* Entry: 1016a29f0; end: 1016a2dcf;  */

void FUN_1016a29f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x22;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = uVar12;
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x30))(uVar12,1,uVar15);
  if ((int)uVar10 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001016a2abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa0));
    return;
  }
  puVar16 = (ulong *)(unaff_x22 + 0x58);
  uVar13 = *puVar16;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1016a2e14(uVar12,uVar10,0x112dbf790,&UNK_10d97ae40);
  func_0x0001016a2e5c(uVar10,uVar13,0x112dbf790,&UNK_10d97ae40);
  func_0x000107c614c4(uVar13,uVar15);
  if ((int)uVar13 == 1) {
    puVar16 = (ulong *)(unaff_x22 + 0x40);
    uVar13 = *puVar16;
    pcVar18 = *(code **)(*(long *)(unaff_x22 + 0x30) + 0x20);
    (*pcVar18)(uVar13,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x28));
    func_0x0001016a23a4();
    if ((uVar13 & 1) == 0) {
LAB_1016a2d10:
      uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar6 = *(long *)(unaff_x22 + 0x30);
      func_0x0001016a2fbc(*(undefined8 *)(unaff_x22 + 0x60),0x112dbf790,&UNK_10d97ae40);
      (**(code **)(lVar6 + 8))(uVar10,uVar15);
      goto LAB_1016a2d40;
    }
    uVar13 = *(ulong *)(unaff_x22 + 0x20);
    func_0x000107c5f8cc(uVar13);
    lVar6 = 0;
    func_0x000107c5eec8();
    lVar19 = *(long *)(lVar6 + -8);
    lVar8 = 1;
    (**(code **)(lVar19 + 0x30))(uVar13,1,lVar6);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
    if ((int)uVar13 == 1) {
      func_0x0001016a2fbc(uVar15,0x112d3bc20,&UNK_10d904ef0);
    }
    else {
      uVar11 = *(ulong *)(unaff_x22 + 0x10);
      lVar9 = *(long *)(unaff_x22 + 0x18);
      func_0x000107c5eeac();
      (**(code **)(lVar19 + 8))(uVar15,lVar6);
      func_0x000107c5fb24();
      if ((uVar13 == uVar11) && (lVar8 == lVar9)) {
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(lVar9);
      }
      else {
        func_0x000107c605b8(uVar13,lVar8,uVar11,lVar9,0);
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(lVar9);
        if ((uVar13 & 1) == 0) goto LAB_1016a2d10;
      }
    }
    uVar13 = *(ulong *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61558();
    uVar14 = *(ulong *)(unaff_x22 + 0xa0);
    uVar11 = uVar14;
    if ((uVar13 & 1) == 0) {
      uVar11 = 0;
      FUN_1016a05cc(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
    }
    uVar14 = *(ulong *)(uVar11 + 0x10);
    uVar13 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar14) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1016a05cc(uVar13,uVar14 + 1,1,uVar11);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
    uVar11 = (ulong)*(byte *)(lVar6 + 0x50);
    (*pcVar18)(uVar13 + (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff)) +
               *(long *)(lVar6 + 0x48) * uVar14,uVar15,uVar10);
    func_0x0001016a2fbc(uVar12,0x112dbf790,&UNK_10d97ae40);
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x58);
    func_0x0001016a2fbc(*(undefined8 *)(unaff_x22 + 0x60),0x112dbf790,&UNK_10d97ae40);
    lVar6 = 0x112dbf7a0;
    func_0x0001000285a8(0x112dbf7a0,&UNK_10d97ae50);
    iVar5 = *(int *)(lVar6 + 0x30);
    lVar6 = 0x112dbf7a8;
    func_0x0001000285a8(0x112dbf7a8,&UNK_10d97ae58);
    (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar8 + iVar5,lVar6);
    uVar13 = *(ulong *)(unaff_x22 + 0xa0);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(*puVar16,*(undefined8 *)(unaff_x22 + 0x28));
  *(ulong *)(unaff_x22 + 0xa0) = uVar13;
LAB_1016a2d40:
  plVar7 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1016a29a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar7,*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 1016a2dd0; end: 1016a2e13;  */

void FUN_1016a2dd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbf788 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f888(0xff);
  puVar2 = PTR___s8StoreKit03AppA0O11EnvironmentVSQAAMc_110347ac0;
  func_0x000107c61520(PTR___s8StoreKit03AppA0O11EnvironmentVSQAAMc_110347ac0,uVar1);
  puRam0000000112dbf788 = puVar2;
  return;
}



/* Entry: 1016a2e14; end: 1016a2ea3;  */

undefined8 FUN_1016a2e14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1016a2ea4; end: 1016a2ee3;  */

void FUN_1016a2ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97af68;
  func_0x000107c61520(&UNK_10d97af68,&UNK_1103f4910);
  puRam0000000112dbf7b8 = puVar1;
  return;
}



/* Entry: 1016a2ee4; end: 1016a2ef3;  */

void FUN_1016a2ee4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1016a2ef4; end: 1016a2f37;  */

void FUN_1016a2ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbf7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7820;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dbf7c8 = puVar1;
  return;
}



/* Entry: 1016a2f38; end: 1016a2ffb;  */

void FUN_1016a2f38(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1016a2ffc; end: 1016a300f;  */

void FUN_1016a2ffc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010169ff54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016a3010; end: 1016a3057;  */

void FUN_1016a3010(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001001d7248(0);
  func_0x000107c610f8();
  func_0x000103e34464(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1016a3058; end: 1016a306f;  */

void FUN_1016a3058(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001001d7248(0);
  func_0x000107c610f8();
  func_0x000103e34464(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1016a3070; end: 1016a30ef;  */

/* WARNING: Possible PIC construction at 0x0001016a3084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016a3088) */
/* WARNING: Removing unreachable block (ram,0x0001016a30a0) */
/* WARNING: Removing unreachable block (ram,0x0001016a3094) */

void FUN_1016a3070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1016a30f0; end: 1016a3197;  */

undefined8 * FUN_1016a30f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  plVar3 = param_1 + 2;
  lVar4 = *plVar3;
  lVar1 = param_2[2];
  if (lVar4 == 1) {
    if (lVar1 != 1) {
      *plVar3 = lVar1;
      func_0x000107c61434();
      return param_1;
    }
    lVar1 = 1;
  }
  else {
    if (lVar1 != 1) {
      *plVar3 = lVar1;
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      return param_1;
    }
    FUN_1016a3198(plVar3);
    lVar1 = param_2[2];
  }
  *plVar3 = lVar1;
  return param_1;
}



/* Entry: 1016a3198; end: 1016a31bf;  */

undefined8 * FUN_1016a3198(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  return param_1;
}



/* Entry: 1016a31c0; end: 1016a3233;  */

undefined8 * FUN_1016a31c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  plVar4 = param_1 + 2;
  lVar3 = param_2[2];
  if (*plVar4 != 1) {
    if (lVar3 != 1) {
      *plVar4 = lVar3;
      func_0x000107c6142c();
      return param_1;
    }
    FUN_1016a3198(plVar4);
    lVar3 = 1;
  }
  *plVar4 = lVar3;
  return param_1;
}



/* Entry: 1016a3234; end: 1016a32d3;  */

int FUN_1016a3234(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016a32d4; end: 1016a333b;  */

undefined8 * FUN_1016a32d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016a333c; end: 1016a340f;  */

int FUN_1016a333c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016a3410; end: 1016a3493;  */

void FUN_1016a3410(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x554b53 && param_3 == -0x1d00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x53;
    func_0x000107c605b8(0x554b53,0xe300000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}


