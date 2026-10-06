/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037fe7b8; end: 1037fea03;  */

void FUN_1037fe7b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = 0;
  func_0x000107c5f040();
  lVar12 = *(long *)(lVar4 + -8);
  (**(code **)(lVar12 + 0x30))(uVar11,1,lVar4);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
              (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  }
  else {
    uVar8 = *(long *)(lVar12 + 0x40) + 0xf;
    uVar5 = uVar8 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    (**(code **)(lVar12 + 0x20))();
    uVar6 = uVar8 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar6);
    pcVar13 = *(code **)(lVar12 + 0x68);
    (*pcVar13)();
    uVar7 = uVar5;
    func_0x000107c5f03c(uVar5,uVar6);
    pcVar14 = *(code **)(lVar12 + 8);
    (*pcVar14)(uVar6,lVar4);
    func_0x000107c615c0(uVar6);
    if ((uVar7 & 1) == 0) {
      uVar8 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar8);
      (*pcVar13)();
      uVar7 = uVar5;
      func_0x000107c5f03c(uVar5,uVar8);
      (*pcVar14)(uVar8,lVar4);
      func_0x000107c615c0(uVar8);
      if ((uVar7 & 1) == 0) {
        (*pcVar14)(uVar5,lVar4);
        func_0x000107c615c0(uVar5);
        plVar9 = (long *)(ulong)*(uint *)(
                                         PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaFTu_11034b230
                                         + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x58) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_1037fe770;
                    /* WARNING: Could not recover jumptable at 0x00010bdb5648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___s11ActivityKit0A0C0A12StateUpdatesV8IteratorV4nextAA0aC0OSgyYaF_11034b228)
                  (plVar9,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
        return;
      }
    }
    lVar12 = *(long *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    func_0x000107c5fd28(uVar11);
    (**(code **)(lVar3 + 8))(uVar11,uVar10);
    (*pcVar14)(uVar5,lVar4);
    (**(code **)(lVar12 + 8))(uVar1,uVar2);
    func_0x000107c615c0(uVar5);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615c0(uVar11);
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  func_0x000107c5fd2c();
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001037fe99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037fea04; end: 1037feb1f;  */

void FUN_1037fea04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  uVar2 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  lVar3 = param_2;
  func_0x000107c61480(param_2,uVar2);
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar1);
  if (lVar3 == 0) {
    func_0x000107c5fd48(param_1,PTR___sytN_11034f1b0 + 8,puVar4,FUN_1037fe470,0,
                        PTR___sytN_11034f1b0 + 8);
  }
  else {
    func_0x000107c615f0(param_2);
    func_0x000107c5fd48(param_1,PTR___sytN_11034f1b0 + 8,puVar4,FUN_1037ff2a0,lVar3,
                        PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 1037feb20; end: 1037feb57;  */

void FUN_1037feb20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1037feb58();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1037feb58; end: 1037fedb7;  */

undefined * FUN_1037feb58(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1037fec88);
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
    puVar3 = (undefined *)0x112f9c920;
    func_0x0001000285a8(0x112f9c920,&UNK_10dc12c40);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f9c928;
    func_0x0001000285a8(0x112f9c928,&UNK_10dc12c48);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1037fedb8; end: 1037fee1f;  */

/* WARNING: Possible PIC construction at 0x0001037fede8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037fedec) */
/* WARNING: Removing unreachable block (ram,0x0001037fedf0) */

void FUN_1037fedb8(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f9c930;
    plVar5 = (long *)&UNK_10dc12c50;
  }
  else {
    puVar3 = (ulong *)0x112f9c8d0;
    plVar5 = (long *)&UNK_10dc12bf8;
    unaff_x30 = 0x1037fedec;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1037fee20; end: 1037fefd3;  */

ulong FUN_1037fee20(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037fef08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037fef0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112f9c8d0;
    func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112f9c8d0;
    func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010f16d0b0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037fefd4);
  (*pcVar2)();
}



/* Entry: 1037fefd4; end: 1037ff23f;  */

undefined1  [16]
FUN_1037fefd4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined *apuStack_a0 [2];
  long lStack_90;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = (long)apuStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_00;
  uVar2 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  lVar3 = 0x112f9c8f8;
  apuStack_a0[1] = (undefined *)uVar2;
  func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
  lVar7 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar9 - extraout_x8_01;
  auStack_80[0] = param_2;
  uStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c5ee98(lVar10);
  func_0x000107c5ee7c(lVar9,0x4072c00000000000,lVar10);
  (**(code **)(lVar6 + 8))(lVar10,lVar1);
  lVar3 = lVar9;
  (**(code **)(lVar6 + 0x38))(lVar9,0,1,lVar1);
  FUN_1037ff390();
  lVar1 = lVar3;
  func_0x0001037ff3d0();
  lVar6 = lVar1;
  func_0x0001037ff410();
  func_0x000107c5f044(lVar8,0,auStack_80,lVar9,&UNK_110699658,lVar3,lVar1,lVar6);
  lVar3 = 0x112ec57b0;
  func_0x0001000285a8(0x112ec57b0,&UNK_10db75f50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppuVar5 = (undefined **)(lVar8 - extraout_x8_02);
  lVar3 = 0;
  func_0x000107c5f04c();
  ppuVar4 = ppuVar5;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(ppuVar5,1,1,lVar3);
  func_0x000107c5f020();
  FUN_1037ff450(ppuVar5);
  (**(code **)(lVar7 + 8))(lVar8,lStack_90);
  if (unaff_x21 != 0) {
    ppuVar4 = &PTR_DAT_1106987c0;
  }
  auVar11._8_8_ = &PTR_DAT_1106987c0;
  auVar11._0_8_ = ppuVar4;
  return auVar11;
}



/* Entry: 1037ff240; end: 1037ff25f;  */

undefined1  [16] FUN_1037ff240(void)

{
  return ZEXT816(0x1106987e0);
}



/* Entry: 1037ff260; end: 1037ff29f;  */

void FUN_1037ff260(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1037ff2a0; end: 1037ff2a7;  */

void FUN_1037ff2a0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  ulong uVar4;
  undefined8 unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long alStack_60 [2];
  
  lVar1 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar6 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x8,param_1,lVar1);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &UNK_110698870;
  func_0x000107c613fc(&UNK_110698870,uVar7 + lVar5,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  (**(code **)(lVar6 + 0x20))(puVar2 + uVar7,&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  func_0x000107c6157c();
  *(undefined **)((long)alStack_60 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar3 = 4;
  func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12c10,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c5fd1c(FUN_1037ff36c,uVar3,lVar1);
  return;
}



/* Entry: 1037ff2a8; end: 1037ff32f;  */

void FUN_1037ff2a8(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1037ff330;
  plVar1[2] = lVar3;
  plVar1[3] = unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff));
  lVar3 = 0x112e00a00;
  func_0x0001000285a8(0x112e00a00,&UNK_10d9d5e90);
  plVar1[4] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[5] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037fe644,0,0);
  return;
}



/* Entry: 1037ff330; end: 1037ff36b;  */

void FUN_1037ff330(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037ff368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037ff36c; end: 1037ff38f;  */

void FUN_1037ff36c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 1037ff390; end: 1037ff44f;  */

void FUN_1037ff390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f9c900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc13110;
  func_0x000107c61520(&UNK_10dc13110,&UNK_110699658);
  puRam0000000112f9c900 = puVar1;
  return;
}



/* Entry: 1037ff450; end: 1037ff497;  */

undefined8 FUN_1037ff450(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ec57b0;
  func_0x0001000285a8(0x112ec57b0,&UNK_10db75f50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1037ff498; end: 1037ff4bb;  */

void FUN_1037ff498(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lStack_b0 = *(long *)(unaff_x20 + 0x10);
  puVar1 = auStack_c0;
  uVar4 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  func_0x000107c5f008();
  if (uVar4 >> 0x3e == 0) {
    uStack_90 = uVar4 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uStack_90 + 0x10);
  }
  else {
    uStack_90 = uVar4 & 0xffffffffffffff8;
    uVar5 = uStack_90;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    uVar7 = 0;
    uStack_98 = uVar4 & 0xc000000000000001;
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_a8 = uVar5;
    uStack_a0 = uVar4;
LAB_1037fe0b4:
    do {
      puStack_b8 = puVar15;
      if (uStack_98 == 0) {
        if (*(ulong *)(uStack_90 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1037fe3fc);
          (*pcVar12)();
        }
        uVar4 = *(ulong *)(uStack_a0 + uVar7 * 8 + 0x20);
        func_0x000107c6157c(uVar4);
      }
      else {
        uVar4 = uVar7;
        FUN_1037fee20(uVar7,uStack_a0);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1037fe3f8);
        (*pcVar12)();
      }
      uStack_78 = uVar7 + 1;
      lVar2 = 0;
      func_0x000107c5f040();
      lVar11 = *(long *)(lVar2 + -8);
      lVar14 = *(long *)(lVar11 + 0x40);
      puStack_80 = puVar1;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar8 = lVar14 + 0xfU & 0xfffffffffffffff0;
      uVar5 = (long)puVar1 - uVar8;
      func_0x000107c5f010(uVar5);
      uStack_70 = uVar4;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar6 = uVar5 - uVar8;
      pcStack_88 = *(code **)(lVar11 + 0x68);
      lVar14 = lVar6;
      (*pcStack_88)(lVar6,*(undefined4 *)PTR___s11ActivityKit0A5StateO5endedyA2CmFWC_11034b2d0,lVar2
                   );
      FUN_1037ff4bc();
      uVar4 = uVar5;
      func_0x000107c5fab8(uVar5,lVar6,lVar2,lVar14);
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(lVar6,lVar2);
      (*pcVar12)(uVar5,lVar2);
      puVar1 = puStack_80;
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar4 = (long)puVar1 - uVar8;
        func_0x000107c5f010(uVar4);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar6 = uVar4 - uVar8;
        (*pcStack_88)(lVar6,*(undefined4 *)PTR___s11ActivityKit0A5StateO9dismissedyA2CmFWC_11034b2e8
                      ,lVar2);
        uVar5 = uVar4;
        func_0x000107c5fab8(uVar4,lVar6,lVar2,lVar14);
        (*pcVar12)(lVar6,lVar2);
        (*pcVar12)(uVar4,lVar2);
        uVar4 = uStack_70;
        puVar1 = puStack_80;
        puVar15 = puStack_b8;
        if ((uVar5 & 1) == 0) {
          puVar9 = puStack_b8;
          func_0x000107c61558();
          puStack_68 = puVar15;
          if (((ulong)puVar9 & 1) == 0) {
            func_0x0001037feb3c(0,*(long *)(puVar15 + 0x10) + 1,1);
          }
          uVar7 = uStack_78;
          uVar8 = uStack_a8;
          uVar5 = *(ulong *)(puStack_68 + 0x10);
          if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar5) {
            func_0x0001037feb3c(1 < *(ulong *)(puStack_68 + 0x18),uVar5 + 1,1);
          }
          *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
          *(ulong *)(puStack_68 + uVar5 * 8 + 0x20) = uVar4;
          uVar4 = uStack_a0;
          puVar15 = puStack_68;
          if (uVar7 == uVar8) break;
          goto LAB_1037fe0b4;
        }
      }
      puVar1 = puStack_80;
      func_0x000107c61574(uStack_70);
      uVar7 = uVar7 + 1;
      uVar4 = uStack_a0;
      puVar15 = puStack_b8;
    } while (uStack_78 != uStack_a8);
  }
  func_0x000107c6142c(uVar4);
  if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
    puVar9 = puVar15;
    func_0x000107c60480();
  }
  else {
    puVar9 = *(undefined **)(puVar15 + 0x10);
  }
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c61574(puVar15);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001037feb20(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1037fe470);
      (*pcVar12)();
    }
    puVar10 = (undefined *)0x0;
    do {
      puVar3 = puStack_68;
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        puVar13 = *(undefined **)(puVar15 + (long)puVar10 * 8 + 0x20);
        func_0x000107c6157c(puVar13);
      }
      else {
        puVar13 = puVar10;
        FUN_1037fee20(puVar10,puVar15);
      }
      uVar4 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar4) {
        func_0x0001037feb20(1 < *(ulong *)(puVar3 + 0x18),uVar4 + 1,1);
      }
      puVar3 = puStack_68;
      puVar10 = puVar10 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined **)(puStack_68 + uVar4 * 0x10 + 0x20) = puVar13;
      *(undefined ***)(puStack_68 + uVar4 * 0x10 + 0x28) = &PTR_DAT_1106987c0;
    } while (puVar9 != puVar10);
    func_0x000107c61574(puVar15);
  }
  **(undefined8 **)(*(long *)(lStack_b0 + 0x40) + 0x28) = puVar3;
  func_0x000107c6144c();
  return;
}



/* Entry: 1037ff4bc; end: 1037ff4ff;  */

void FUN_1037ff4bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f9c918 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f040(0xff);
  puVar2 = PTR___s11ActivityKit0A5StateOSQAAMc_11034b300;
  func_0x000107c61520(PTR___s11ActivityKit0A5StateOSQAAMc_11034b300,uVar1);
  puRam0000000112f9c918 = puVar2;
  return;
}



/* Entry: 1037ff500; end: 1037ff5a3;  */

undefined8 FUN_1037ff500(void)

{
  undefined8 unaff_x20;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  puStack_40 = &UNK_110698800;
  ppuStack_38 = &PTR_DAT_110698828;
  puStack_68 = &UNK_1106987e0;
  ppuStack_60 = &PTR_DAT_110698810;
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_58,&UNK_110698800);
  func_0x0001000c6518(auStack_80,&UNK_1106987e0);
  FUN_1038046e4(0x3fe0000000000000,0x4008000000000000,unaff_x20);
  func_0x0001000834e4(auStack_80);
  func_0x0001000834e4(auStack_58);
  return unaff_x20;
}



/* Entry: 1037ff5a4; end: 1037ff64b;  */

void FUN_1037ff5a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  if (*(char *)(param_1 + 0x112) == '\x01') {
    lVar3 = *(long *)(param_1 + 0xf0);
    if (lVar3 == 1) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    func_0x000107c61434(lVar3);
    FUN_1038049a0(uVar4,uVar1,uVar2,lVar3);
    FUN_1038049a0(0,0,0,1);
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (*(long *)(param_1 + 0x20) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0)) {
    func_0x000103800ee0();
  }
  return;
}



/* Entry: 1037ff64c; end: 1037ff72f;  */

void FUN_1037ff64c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c6157c();
    pcVar2 = "performOnMain(_:)";
    func_0x0001000c10c0("performOnMain(_:)");
    func_0x000107c61180();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    ppuVar3 = &puStack_78;
    uStack_60 = param_4;
    uStack_58 = param_3;
    lStack_50 = param_2;
    func_0x000107c60bc4(ppuVar3);
    lVar1 = lStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(param_2,2);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1037ff730; end: 1037ff85b;  */

void FUN_1037ff730(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_68 [40];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    lVar4 = lVar6;
    func_0x000107c614f0();
    pcVar7 = *(code **)(lVar5 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar7)();
    func_0x000107c615e8(lVar6);
  }
  puVar1 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_103804a30(unaff_x20 + 0x30,auStack_68);
  puVar2 = &UNK_110698c38;
  func_0x000107c613fc(&UNK_110698c38,0x50,7);
  func_0x000100d5ec94(auStack_68,puVar2 + 0x10);
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(long *)(puVar2 + 0x40) = lVar4;
  *(long *)(puVar2 + 0x48) = lVar5;
  uVar3 = 4;
  func_0x0001009548b0(4,0,0x88,4,0,0,&UNK_10dc12dd0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 1037ff85c; end: 1037ff97b;  */

void FUN_1037ff85c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x118);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar1);
  }
  lVar2 = *(long *)(unaff_x20 + 0x120);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
  func_0x0001000834e4(unaff_x20 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  FUN_1038049a0(*(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0));
  FUN_1038049a0(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 1037ff97c; end: 1037ff99b;  */

void FUN_1037ff97c(void)

{
  FUN_1037ff85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037ff99c; end: 1037ffa87;  */

void FUN_1037ff99c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar2 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c6157c(puVar2);
  pcVar3 = "performOnMain(_:)";
  func_0x0001000c10c0("performOnMain(_:)");
  func_0x000107c61180();
  uStack_40 = 0x1038049b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110698908;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(pcVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61578(puVar2,2);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1037ffa88; end: 1037ffadb;  */

void FUN_1037ffa88(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1037ffadc();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1037ffadc; end: 1037ffda7;  */

/* WARNING: Removing unreachable block (ram,0x0001037ffcc0) */

void FUN_1037ffadc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_90 [48];
  
  uVar16 = *unaff_x20;
  uVar8 = 0;
  func_0x000107c5f02c();
  func_0x000107c613fc();
  func_0x000107c5f028();
  uVar9 = uVar8;
  func_0x000107c5f024();
  func_0x000107c61574(uVar8);
  if ((uVar9 & 1) != 0) {
    *(undefined2 *)((long)unaff_x20 + 0x111) = 0;
    uVar10 = unaff_x20[0x21];
    unaff_x20[0x1f] = 0;
    unaff_x20[0x20] = 0;
    unaff_x20[0x21] = 0;
    func_0x000107c6142c(uVar10);
    uVar10 = unaff_x20[0x1b];
    uVar17 = unaff_x20[0x1c];
    uVar15 = unaff_x20[0x1d];
    uVar4 = unaff_x20[0x1e];
    unaff_x20[0x1b] = 0;
    unaff_x20[0x1c] = 0;
    unaff_x20[0x1d] = 0;
    unaff_x20[0x1e] = 1;
    FUN_1037ff730();
    lVar14 = unaff_x20[2];
    if (lVar14 == 0) {
      FUN_1038049a0(uVar10,uVar17,uVar15,uVar4);
    }
    else {
      uVar1 = unaff_x20[3];
      uVar5 = unaff_x20[4];
      unaff_x20[4] = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
      unaff_x20[2] = 0;
      unaff_x20[3] = 0;
      uVar2 = unaff_x20[0x15];
      uVar6 = unaff_x20[0x16];
      uVar3 = unaff_x20[0x17];
      uVar7 = unaff_x20[0x18];
      unaff_x20[0x15] = 0;
      unaff_x20[0x16] = 0;
      unaff_x20[0x17] = 0;
      unaff_x20[0x18] = 1;
      FUN_1038049a0(uVar2,uVar6,uVar3,uVar7);
      puVar11 = &UNK_1106988f0;
      func_0x000107c613fc(&UNK_1106988f0,0x18,7);
      func_0x000107c61644(puVar11 + 0x10);
      FUN_103804a30(unaff_x20 + 6,auStack_90);
      FUN_103804a30(unaff_x20 + 0xb,auStack_b8);
      puVar12 = &UNK_110698be8;
      func_0x000107c613fc(&UNK_110698be8,0xa8,7);
      func_0x000100d5ec94(auStack_90,puVar12 + 0x10);
      *(long *)(puVar12 + 0x38) = lVar14;
      *(undefined8 *)(puVar12 + 0x40) = uVar1;
      *(undefined8 *)(puVar12 + 0x48) = uVar10;
      *(undefined8 *)(puVar12 + 0x50) = uVar17;
      *(undefined8 *)(puVar12 + 0x58) = uVar15;
      *(undefined8 *)(puVar12 + 0x60) = uVar4;
      *(undefined **)(puVar12 + 0x68) = puVar11;
      *(undefined8 *)(puVar12 + 0x70) = uVar5;
      func_0x000100d5ec94(auStack_b8,puVar12 + 0x78);
      *(undefined8 *)(puVar12 + 0xa0) = uVar16;
      func_0x000107c615f0(lVar14);
      uVar16 = 4;
      func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12da0,puVar12,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar14);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(uVar16);
    }
    uVar17 = 0;
    uVar10 = 0;
    lVar13 = 0;
    FUN_1037fefd4(0,0,0);
    uVar16 = uVar10;
    func_0x000107c614f0();
    lVar14 = lVar13;
    (**(code **)(lVar13 + 8))();
    uVar15 = unaff_x20[0x12];
    func_0x000107c4b940(uVar15);
    func_0x000107c61428(unaff_x20 + 0x13,auStack_90,0x21,0);
    func_0x000107c61434(lVar14);
    func_0x000100403b00(auStack_b8,uVar16,lVar14);
    func_0x000107c614a8(auStack_90);
    func_0x000107c6142c(uStack_b0);
    func_0x000107c5d278(uVar15);
    func_0x000107c6142c(lVar14);
    uVar16 = unaff_x20[2];
    unaff_x20[2] = uVar10;
    unaff_x20[3] = lVar13;
    func_0x000107c615f0(uVar10);
    func_0x000107c615e8(uVar16);
    FUN_103800d00(uVar10,lVar13);
    func_0x000107c6071c();
    unaff_x20[0x1a] = uVar17;
    func_0x000103800ee0();
    func_0x000107c615e8(uVar10);
  }
  return;
}



/* Entry: 1037ffda8; end: 1037ffedb;  */

void FUN_1037ffda8(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar2 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110698940;
  func_0x000107c613fc(&UNK_110698940,0x22,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar3[0x20] = param_2;
  puVar3[0x21] = param_3;
  func_0x000107c6157c(puVar2);
  pcVar4 = "performOnMain(_:)";
  func_0x0001000c10c0("performOnMain(_:)");
  func_0x000107c61180();
  uStack_60 = 0x1038049d8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110698958;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(pcVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 1037ffedc; end: 103800073;  */

void FUN_1037ffedc(undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001037fff5c(param_1,param_3 & 1,param_4 & 1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103800074; end: 10380019b;  */

void FUN_103800074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar2 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110698990;
  func_0x000107c613fc(&UNK_110698990,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_2);
  pcVar4 = "performOnMain(_:)";
  func_0x0001000c10c0("performOnMain(_:)");
  func_0x000107c61180();
  uStack_50 = 0x1038049ec;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106989a8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(pcVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 10380019c; end: 10380020b;  */

void FUN_10380019c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10380020c(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10380020c; end: 103800343;  */

void FUN_10380020c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  if (((*(long *)(unaff_x20 + 0x10) != 0) && ((*(byte *)(unaff_x20 + 0x112) & 1) == 0)) &&
     ((lVar7 = *(long *)(unaff_x20 + 0x108), lVar7 == 0 ||
      ((uVar6 = *(ulong *)(unaff_x20 + 0x100), uVar6 != param_1 || lVar7 != param_2 &&
       (func_0x000107c605b8(uVar6,lVar7,param_1,param_2,0), (uVar6 & 1) == 0)))))) {
    *(ulong *)(unaff_x20 + 0x100) = param_1;
    *(long *)(unaff_x20 + 0x108) = param_2;
    func_0x000107c6142c(lVar7);
    if ((*(byte *)(unaff_x20 + 0x111) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
      return;
    }
    dVar12 = *(double *)(unaff_x20 + 0xf8);
    uVar9 = 2;
    if (dVar12 < 0.95) {
      uVar9 = 1;
    }
    uVar10 = 0;
    if (0.1 <= dVar12) {
      uVar10 = uVar9;
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar13 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x20 + 0xa8) = uVar10;
    *(double *)(unaff_x20 + 0xb0) = dVar12;
    *(ulong *)(unaff_x20 + 0xb8) = param_1;
    *(long *)(unaff_x20 + 0xc0) = param_2;
    func_0x000107c61438(param_2,2);
    FUN_1038049a0(uVar9,uVar13,uVar11,uVar1);
    ppuVar5 = &puStack_70;
    if (((*(byte *)(unaff_x20 + 0xc9) & 1) == 0) && ((*(byte *)(unaff_x20 + 200) & 1) == 0)) {
      func_0x000107c6071c();
      dVar14 = dVar12 - *(double *)(unaff_x20 + 0xd0);
      dVar15 = *(double *)(unaff_x20 + 0x80);
      if (dVar15 <= dVar14) {
        if ((((*(byte *)(unaff_x20 + 200) & 1) == 0) &&
            (lVar7 = *(long *)(unaff_x20 + 0xc0), lVar7 != 1)) &&
           (lVar8 = *(long *)(unaff_x20 + 0x10), lVar8 != 0)) {
          uVar9 = *(undefined8 *)(unaff_x20 + 0xb8);
          uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
          uVar10 = *(undefined8 *)(unaff_x20 + 0xa8);
          uVar13 = *(undefined8 *)(unaff_x20 + 0xb0);
          *(undefined8 *)(unaff_x20 + 0xa8) = 0;
          *(undefined8 *)(unaff_x20 + 0xb0) = 0;
          *(undefined8 *)(unaff_x20 + 0xb8) = 0;
          *(undefined8 *)(unaff_x20 + 0xc0) = 1;
          *(undefined1 *)(unaff_x20 + 200) = 1;
          func_0x000107c615f0(lVar8);
          func_0x000107c6071c();
          *(double *)(unaff_x20 + 0xd0) = dVar12;
          puVar2 = &UNK_1106988f0;
          func_0x000107c613fc(&UNK_1106988f0,0x18,7);
          func_0x000107c61644(puVar2 + 0x10,unaff_x20);
          FUN_103804a30(unaff_x20 + 0x30,auStack_88);
          puVar3 = &UNK_110698b48;
          func_0x000107c613fc(&UNK_110698b48,0x70,7);
          func_0x000100d5ec94(auStack_88,puVar3 + 0x10);
          *(long *)(puVar3 + 0x38) = lVar8;
          *(undefined8 *)(puVar3 + 0x40) = uVar11;
          puVar3[0x48] = (char)uVar10;
          *(undefined8 *)(puVar3 + 0x50) = uVar13;
          *(undefined8 *)(puVar3 + 0x58) = uVar9;
          *(long *)(puVar3 + 0x60) = lVar7;
          *(undefined **)(puVar3 + 0x68) = puVar2;
          func_0x000107c615f0(lVar8);
          uVar9 = 4;
          func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12d88,puVar3,PTR___sytN_11034f1b0 + 8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61574(puVar3);
          func_0x000107c61574(uVar9);
        }
        return;
      }
      *(undefined1 *)(unaff_x20 + 0xc9) = 1;
      pcVar4 = "scheduleDeferredUpdateIfNeeded()";
      func_0x0001000c10c0("scheduleDeferredUpdateIfNeeded()");
      func_0x000107c61180();
      puVar2 = &UNK_1106988f0;
      func_0x000107c613fc(&UNK_1106988f0,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,unaff_x20);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_110698b60;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puVar2);
      func_0x000107c4e528(dVar15 - dVar14,pcVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar4);
    }
    return;
  }
  return;
}



/* Entry: 103800344; end: 10380045f;  */

void FUN_103800344(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar2 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1106989e0;
  func_0x000107c613fc(&UNK_1106989e0,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1;
  func_0x000107c6157c(puVar2);
  pcVar4 = "performOnMain(_:)";
  func_0x0001000c10c0("performOnMain(_:)");
  func_0x000107c61180();
  uStack_50 = 0x1038049f8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106989f8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e590(pcVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 103800460; end: 1038004bb;  */

void FUN_103800460(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1038004bc(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1038004bc; end: 1038005d7;  */

/* WARNING: Removing unreachable block (ram,0x0001038049ac) */

undefined * FUN_1038004bc(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    return param_1;
  }
  lVar11 = *(long *)(unaff_x20 + 0xf0);
  if (lVar11 != 1) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x20 + 0xd8);
    func_0x000107c61434(lVar11);
    FUN_1038049a0(uVar14,uVar1,uVar2,lVar11);
    return (undefined *)0x0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined1 *)(unaff_x20 + 0x112) = 1;
  uVar1 = 0x3ff0000000000000;
  if (((uint)param_1 & 0xff) != 4) {
    uVar1 = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(ulong *)(unaff_x20 + 0xd8) = (ulong)param_1 & 0xff;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar14;
  func_0x000107c61438(uVar14,2);
  FUN_1038049a0(uVar3,uVar4,uVar13,1);
  puVar10 = *(undefined **)(unaff_x20 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(ulong *)(unaff_x20 + 0xa8) = (ulong)param_1 & 0xff;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar14;
  FUN_1038049a0(puVar10,uVar4,uVar3,uVar13);
  FUN_103801164();
  if (*(char *)(unaff_x20 + 0x110) != '\x01') {
    return puVar10;
  }
  if (*(char *)(unaff_x20 + 0x112) == '\x01') {
    lVar11 = *(long *)(unaff_x20 + 0xf0);
    if (lVar11 == 1) {
      return puVar10;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar14 = *(undefined8 *)(unaff_x20 + 0xd8);
    func_0x000107c61434(lVar11);
    FUN_1038049a0(uVar14,uVar1,uVar2,lVar11);
    puVar10 = (undefined *)0x0;
    FUN_1038049a0(0,0,0,1);
  }
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (*(long *)(unaff_x20 + 0x20) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0)) {
    puVar10 = &UNK_110698a58;
    func_0x000107c613fc(&UNK_110698a58,0x18,7);
    puVar15 = *(undefined **)PTR__UIBackgroundTaskInvalid_110345af0;
    puVar12 = (undefined8 *)(puVar10 + 0x10);
    *puVar12 = puVar15;
    puVar5 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,unaff_x20);
    FUN_103804a30(unaff_x20 + 0x58,auStack_88);
    puVar6 = &UNK_110698a80;
    func_0x000107c613fc(&UNK_110698a80,0x48,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined **)(puVar6 + 0x18) = puVar10;
    func_0x000100d5ec94(auStack_88,puVar6 + 0x20);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar10);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    pcStack_98 = FUN_103804a24;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000b0c7c;
    puStack_a0 = &UNK_110698a98;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar9 = puStack_90;
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar9);
    puVar9 = puVar7;
    func_0x000107c3e760();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61428(puVar12,&puStack_b8,1,0);
    *puVar12 = puVar9;
    *(undefined **)(unaff_x20 + 0x20) = puVar9;
    if (puVar9 != puVar15) {
      func_0x000107c61428(unaff_x20 + 0x28,auStack_88,0x21,0);
      func_0x000100f73104(auStack_c0,puVar9);
      func_0x000107c614a8(auStack_88);
    }
    func_0x000107c61574(puVar10);
    return puVar10;
  }
  return puVar10;
}



/* Entry: 1038005d8; end: 10380067f;  */

void FUN_1038005d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x78) = param_10;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  lVar2 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103800680,0,0);
  return;
}



/* Entry: 103800680; end: 103800a27;  */

void FUN_103800680(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar12 = *(long *)(unaff_x22 + 0x68);
  lVar3 = 0;
  func_0x000107c5f038();
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  if (lVar12 == 1) {
    func_0x000107c5f034(uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = *(long *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar12);
    FUN_1038049a0(uVar10,uVar8,uVar2,lVar12);
    FUN_1038049a0(0,0,0,1);
    func_0x000107c5ee98(uVar5);
    func_0x000107c5ee7c(uVar1,0x404e000000000000,uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar7);
    func_0x000107c5f030(uVar4,uVar1);
    (*UNRECOVERED_JUMPTABLE)(uVar1,uVar7);
  }
  lVar11 = *(long *)(unaff_x22 + 0x48);
  uVar5 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  lVar3 = lVar11;
  func_0x000107c61480(lVar11,uVar5);
  if (lVar3 != 0) {
    if (lVar12 == 1) {
      lVar3 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xd0) = uVar6;
      lVar3 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar6,1,1,lVar3);
      plVar9 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615f0(lVar11);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd8) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_103800b1c;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar12 = *(long *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar3 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xc0) = uVar6;
      *(undefined1 *)(unaff_x22 + 0x10) = (char)uVar8;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
      (**(code **)(lVar12 + 0x38))(uVar10,1,1,uVar5);
      FUN_103804b18(uVar8,uVar2,uVar7,uVar1);
      FUN_1037ff390();
      uVar5 = uVar8;
      func_0x0001037ff3d0();
      uVar7 = uVar5;
      func_0x0001037ff410();
      func_0x000107c615f0(lVar11);
      func_0x000107c5f044(uVar6,0,(undefined1 *)(unaff_x22 + 0x10),uVar10,&UNK_110699658,uVar8,uVar5
                          ,uVar7);
      lVar3 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar6,0,1,lVar3);
      plVar9 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_103800a28;
    }
                    /* WARNING: Could not recover jumptable at 0x000103800a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar4);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar5);
  uVar7 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar7;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103800b84,uVar7,uVar5);
  return;
}



/* Entry: 103800a28; end: 103800a8f;  */

void FUN_103800a28(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103800a90,0,0);
  return;
}



/* Entry: 103800a90; end: 103800b1b;  */

void FUN_103800a90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar2);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103800b84,uVar1,uVar2);
  return;
}



/* Entry: 103800b1c; end: 103800b83;  */

void FUN_103800b1c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10380509c,0,0);
  return;
}



/* Entry: 103800b84; end: 103800c53;  */

void FUN_103800b84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x30,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    if (*(long *)(unaff_x22 + 0x78) != *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      func_0x000107c427f4();
      func_0x000107c61170(puVar2);
    }
  }
  else {
    FUN_103800c54();
    func_0x000107c61574(lVar4);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103800c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103800c54; end: 103800cff;  */

void FUN_103800c54(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined1 *puVar3;
  
  puVar3 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x28,puVar3,0x21,0);
  uVar2 = (uint)puVar3;
  func_0x000100f73bdc(param_1);
  func_0x000107c614a8(auStack_48);
  if ((uVar2 & 0xff) != 1) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c427f4();
    func_0x000107c61170(puVar1);
    if (*(long *)(unaff_x20 + 0x20) == param_1) {
      *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    }
  }
  return;
}



/* Entry: 103800d00; end: 1038010b7;  */

void FUN_103800d00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long alStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112e009e0;
  uStack_68 = param_2;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  lVar10 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar7 - extraout_x12;
  func_0x0001000a8868(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
  FUN_1037fea04(lVar6,param_1,param_2,&UNK_110698800);
  puVar2 = &UNK_1106988f0;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  (**(code **)(lVar10 + 0x10))(puVar7,lVar6,lVar1);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar11 = lVar8 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110698c10;
  func_0x000107c613fc(&UNK_110698c10,uVar11 + 0x18,uVar5 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar9,puVar7,lVar1);
  *(undefined **)(puVar3 + uVar11) = puVar2;
  *(undefined8 *)(puVar3 + uVar11 + 8) = param_1;
  *(undefined8 *)((long)(puVar3 + uVar11 + 8) + 8) = uStack_68;
  func_0x000107c615f0(param_1);
  *(undefined **)(lVar6 + -0x10) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 4;
  func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12db8,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  (**(code **)(lVar10 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 1038010b8; end: 103801163;  */

void FUN_1038010b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  if (*(char *)(unaff_x20 + 0x112) == '\x01') {
    lVar9 = *(long *)(unaff_x20 + 0xf0);
    if (lVar9 == 1) {
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xd8);
    func_0x000107c61434(lVar9);
    FUN_1038049a0(uVar11,uVar1,uVar2,lVar9);
    FUN_1038049a0(0,0,0,1);
  }
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (*(long *)(unaff_x20 + 0x20) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0)) {
    puVar3 = &UNK_110698a58;
    func_0x000107c613fc(&UNK_110698a58,0x18,7);
    puVar12 = *(undefined **)PTR__UIBackgroundTaskInvalid_110345af0;
    puVar10 = (undefined8 *)(puVar3 + 0x10);
    *puVar10 = puVar12;
    puVar4 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,unaff_x20);
    FUN_103804a30(unaff_x20 + 0x58,auStack_88);
    puVar5 = &UNK_110698a80;
    func_0x000107c613fc(&UNK_110698a80,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    func_0x000100d5ec94(auStack_88,puVar5 + 0x20);
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(puVar3);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    pcStack_98 = FUN_103804a24;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000b0c7c;
    puStack_a0 = &UNK_110698a98;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_90;
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar8);
    puVar8 = puVar6;
    func_0x000107c3e760();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61428(puVar10,&puStack_b8,1,0);
    *puVar10 = puVar8;
    *(undefined **)(unaff_x20 + 0x20) = puVar8;
    if (puVar8 != puVar12) {
      func_0x000107c61428(unaff_x20 + 0x28,auStack_88,0x21,0);
      func_0x000100f73104(auStack_c0,puVar8);
      func_0x000107c614a8(auStack_88);
    }
    func_0x000107c61574(puVar3);
    return;
  }
  return;
}



/* Entry: 103801164; end: 1038012b3;  */

void FUN_103801164(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [40];
  
  if ((((*(byte *)(unaff_x20 + 200) & 1) == 0) && (lVar4 = *(long *)(unaff_x20 + 0xc0), lVar4 != 1))
     && (lVar3 = *(long *)(unaff_x20 + 0x10), lVar3 != 0)) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xc0) = 1;
    *(undefined1 *)(unaff_x20 + 200) = 1;
    func_0x000107c615f0(lVar3);
    func_0x000107c6071c();
    *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
    puVar1 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    FUN_103804a30(unaff_x20 + 0x30,auStack_88);
    puVar2 = &UNK_110698b48;
    func_0x000107c613fc(&UNK_110698b48,0x70,7);
    func_0x000100d5ec94(auStack_88,puVar2 + 0x10);
    *(long *)(puVar2 + 0x38) = lVar3;
    *(undefined8 *)(puVar2 + 0x40) = uVar7;
    puVar2[0x48] = (char)uVar6;
    *(undefined8 *)(puVar2 + 0x50) = uVar8;
    *(undefined8 *)(puVar2 + 0x58) = uVar5;
    *(long *)(puVar2 + 0x60) = lVar4;
    *(undefined **)(puVar2 + 0x68) = puVar1;
    func_0x000107c615f0(lVar3);
    uVar5 = 4;
    func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12d88,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1038012b4; end: 1038013d3;  */

void FUN_1038012b4(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_70;
  if (((*(byte *)(unaff_x20 + 0xc9) & 1) == 0) && ((*(byte *)(unaff_x20 + 200) & 1) == 0)) {
    func_0x000107c6071c();
    dVar11 = param_1 - *(double *)(unaff_x20 + 0xd0);
    dVar12 = *(double *)(unaff_x20 + 0x80);
    if (dVar12 <= dVar11) {
      if ((((*(byte *)(unaff_x20 + 200) & 1) == 0) &&
          (lVar6 = *(long *)(unaff_x20 + 0xc0), lVar6 != 1)) &&
         (lVar5 = *(long *)(unaff_x20 + 0x10), lVar5 != 0)) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
        uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
        *(undefined8 *)(unaff_x20 + 0xa8) = 0;
        *(undefined8 *)(unaff_x20 + 0xb0) = 0;
        *(undefined8 *)(unaff_x20 + 0xb8) = 0;
        *(undefined8 *)(unaff_x20 + 0xc0) = 1;
        *(undefined1 *)(unaff_x20 + 200) = 1;
        func_0x000107c615f0(lVar5);
        func_0x000107c6071c();
        *(double *)(unaff_x20 + 0xd0) = param_1;
        puVar1 = &UNK_1106988f0;
        func_0x000107c613fc(&UNK_1106988f0,0x18,7);
        func_0x000107c61644(puVar1 + 0x10,unaff_x20);
        FUN_103804a30(unaff_x20 + 0x30,auStack_88);
        puVar2 = &UNK_110698b48;
        func_0x000107c613fc(&UNK_110698b48,0x70,7);
        func_0x000100d5ec94(auStack_88,puVar2 + 0x10);
        *(long *)(puVar2 + 0x38) = lVar5;
        *(undefined8 *)(puVar2 + 0x40) = uVar9;
        puVar2[0x48] = (char)uVar8;
        *(undefined8 *)(puVar2 + 0x50) = uVar10;
        *(undefined8 *)(puVar2 + 0x58) = uVar7;
        *(long *)(puVar2 + 0x60) = lVar6;
        *(undefined **)(puVar2 + 0x68) = puVar1;
        func_0x000107c615f0(lVar5);
        uVar7 = 4;
        func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12d88,puVar2,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar5);
        func_0x000107c61574(puVar2);
        func_0x000107c61574(uVar7);
      }
      return;
    }
    *(undefined1 *)(unaff_x20 + 0xc9) = 1;
    pcVar3 = "scheduleDeferredUpdateIfNeeded()";
    func_0x0001000c10c0("scheduleDeferredUpdateIfNeeded()");
    func_0x000107c61180();
    puVar1 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110698b60;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puVar1);
    func_0x000107c4e528(dVar12 - dVar11,pcVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1038013d4; end: 10380150b;  */

void FUN_1038013d4(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x18);
    lVar1 = lVar6;
    func_0x000107c614f0();
    pcVar8 = *(code **)(lVar7 + 8);
    func_0x000107c615f0(lVar6);
    (*pcVar8)();
    pcVar2 = "scheduleTerminalLinger()";
    func_0x0001000c10c0("scheduleTerminalLinger()");
    func_0x000107c61180();
    puVar3 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_110698b98;
    func_0x000107c613fc(&UNK_110698b98,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar1;
    *(long *)(puVar4 + 0x20) = lVar7;
    pcStack_50 = FUN_103804da8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110698bb0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4e528(*(undefined8 *)(unaff_x20 + 0x88),pcVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 10380150c; end: 10380160f;  */

void FUN_10380150c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == 0) {
    func_0x000107c61574();
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = uVar3;
  func_0x000107c614f0();
  pcVar5 = *(code **)(lVar4 + 8);
  func_0x000107c615f0(uVar3);
  lVar2 = lVar4;
  (*pcVar5)();
  if (uVar1 == param_2 && lVar2 == param_3) {
    func_0x000107c6142c(lVar2);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar2);
    if ((uVar1 & 1) == 0) goto LAB_1038015e4;
  }
  FUN_103801610(uVar3,lVar4,0);
LAB_1038015e4:
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 103801610; end: 103801a2f;  */

void FUN_103801610(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  long alStack_100 [2];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  uVar13 = *unaff_x20;
  lVar8 = 0;
  uStack_c4 = param_3;
  uStack_b8 = param_2;
  func_0x000107c5f83c();
  lStack_d8 = *(long *)(lVar8 + -8);
  lStack_d0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar8 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  uVar1 = unaff_x20[0x1b];
  uVar4 = unaff_x20[0x1c];
  uVar2 = unaff_x20[0x1d];
  uVar5 = unaff_x20[0x1e];
  lStack_e0 = lVar8;
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    FUN_103804b18(uVar1,uVar4,uVar2,uVar5);
    uVar14 = 1;
  }
  else {
    lVar12 = unaff_x20[0x18];
    if (lVar12 == 1) {
      FUN_103804b18(uVar1,uVar4,uVar2,uVar5);
      uVar14 = 0;
    }
    else {
      uVar11 = unaff_x20[0x16];
      uVar3 = unaff_x20[0x17];
      uVar16 = unaff_x20[0x15];
      uStack_f0 = uVar13;
      uStack_c0 = param_1;
      FUN_103804b18(uVar1,uVar4,uVar2,uVar5);
      FUN_103804b18(uVar16,uVar11,uVar3,lVar12);
      param_1 = uStack_c0;
      uVar13 = uStack_f0;
      FUN_1038049a0(uVar16,uVar11,uVar3,lVar12);
      uVar14 = 1;
      FUN_1038049a0(0,0,0,1);
    }
  }
  uStack_c0 = unaff_x20[4];
  uVar11 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  unaff_x20[3] = 0;
  unaff_x20[4] = uVar11;
  uVar11 = unaff_x20[2];
  unaff_x20[2] = 0;
  func_0x000107c615e8(uVar11);
  uVar11 = unaff_x20[0x15];
  uVar16 = unaff_x20[0x16];
  uVar3 = unaff_x20[0x17];
  uVar6 = unaff_x20[0x18];
  unaff_x20[0x15] = 0;
  unaff_x20[0x16] = 0;
  unaff_x20[0x17] = 0;
  unaff_x20[0x18] = 1;
  FUN_1038049a0(uVar11,uVar16,uVar3,uVar6);
  uVar11 = unaff_x20[0x1b];
  uVar16 = unaff_x20[0x1c];
  uVar3 = unaff_x20[0x1d];
  uVar6 = unaff_x20[0x1e];
  unaff_x20[0x1b] = 0;
  unaff_x20[0x1c] = 0;
  unaff_x20[0x1d] = 0;
  unaff_x20[0x1e] = 1;
  FUN_1038049a0(uVar11,uVar16,uVar3,uVar6);
  if ((uStack_c4 & 1) == 0) {
    puVar9 = &UNK_1106988f0;
    func_0x000107c613fc(&UNK_1106988f0,0x18,7);
    func_0x000107c61644(puVar9 + 0x10);
    FUN_103804a30(unaff_x20 + 6,auStack_88);
    FUN_103804a30(unaff_x20 + 0xb,auStack_b0);
    puVar10 = &UNK_110698af8;
    func_0x000107c613fc(&UNK_110698af8,0xa8,7);
    func_0x000100d5ec94(auStack_88,puVar10 + 0x10);
    *(undefined8 *)(puVar10 + 0x38) = param_1;
    *(undefined8 *)(puVar10 + 0x40) = uStack_b8;
    *(undefined8 *)(puVar10 + 0x48) = uVar1;
    *(undefined8 *)(puVar10 + 0x50) = uVar4;
    *(undefined8 *)(puVar10 + 0x58) = uVar2;
    *(undefined8 *)(puVar10 + 0x60) = uVar5;
    *(undefined **)(puVar10 + 0x68) = puVar9;
    *(undefined8 *)(puVar10 + 0x70) = uStack_c0;
    func_0x000100d5ec94(auStack_b0,puVar10 + 0x78);
    *(undefined8 *)(puVar10 + 0xa0) = uVar13;
    FUN_103804b18(uVar1,uVar4,uVar2,uVar5);
    func_0x000107c615f0(param_1);
    *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar13 = 4;
    func_0x0001001ca524(4,0,0x88,4,0,0,&UNK_10dc12d58,puVar10);
    FUN_1038049a0(uVar1,uVar4,uVar2,uVar5);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(uVar13);
  }
  else {
    uVar11 = 0;
    func_0x000107c60f6c();
    FUN_103804a30(unaff_x20 + 6,auStack_88);
    puVar9 = &UNK_110698b20;
    func_0x000107c613fc(&UNK_110698b20,0x80,7);
    puVar9[0x10] = uVar14;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    *(undefined8 *)(puVar9 + 0x20) = uVar4;
    *(undefined8 *)(puVar9 + 0x28) = uVar2;
    *(undefined8 *)(puVar9 + 0x30) = uVar5;
    func_0x000100d5ec94(auStack_88,puVar9 + 0x38);
    *(undefined8 *)(puVar9 + 0x60) = param_1;
    *(undefined8 *)(puVar9 + 0x68) = uStack_b8;
    *(undefined8 *)(puVar9 + 0x70) = uVar11;
    *(undefined8 *)(puVar9 + 0x78) = uVar13;
    FUN_103804b18(uVar1,uVar4,uVar2,uVar5);
    func_0x000107c615f0(param_1);
    func_0x000107c61174(uVar11);
    *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar13 = 4;
    func_0x0001009548b0(4,0,0x88,4,0,0,&UNK_10dc12d68,puVar9);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(uVar13);
    lVar8 = lStack_e8;
    func_0x000107c5f830(lStack_e8);
    lVar12 = lStack_e0;
    func_0x000107c5f85c(lStack_e0,0x3ff0000000000000,lVar8);
    lVar7 = lStack_d0;
    pcVar15 = *(code **)(lStack_d8 + 8);
    (*pcVar15)(lVar8,lStack_d0);
    func_0x000107c60058(lVar12);
    (*pcVar15)(lVar12,lVar7);
    FUN_103800c54(uStack_c0);
    FUN_1038049a0(uVar1,uVar4,uVar2,uVar5);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 103801a30; end: 103801ad7;  */

void FUN_103801a30(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_11;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103801ad8,0,0);
  return;
}



/* Entry: 103801ad8; end: 103801faf;  */

void FUN_103801ad8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar12 = *(long *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0x100) == '\x01' && lVar12 != 1) {
    uVar10 = 0x112f9c8d0;
    func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
    lVar8 = lVar4;
    func_0x000107c61480(lVar4,uVar10);
    if (lVar8 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar1 = *(long *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar8 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      *(long *)(unaff_x22 + 0xa8) = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      *(long *)(unaff_x22 + 0xb0) = lVar8;
      uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xb8) = uVar2;
      *(undefined1 *)(unaff_x22 + 0x30) = (char)uVar13;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
      *(long *)(unaff_x22 + 0x48) = lVar12;
      func_0x000107c615f0(lVar4);
      FUN_103804b18(uVar13,uVar3,uVar9,lVar12);
      func_0x000107c5ee98(uVar10);
      func_0x000107c5ee7c(uVar11,0x4085e00000000000,uVar10);
      (**(code **)(lVar1 + 8))(uVar10,uVar6);
      uVar10 = uVar11;
      (**(code **)(lVar1 + 0x38))(uVar11,0,1,uVar6);
      FUN_1037ff390();
      uVar6 = uVar10;
      func_0x0001037ff3d0();
      uVar3 = uVar6;
      func_0x0001037ff410();
      func_0x000107c5f044(uVar2,0,(undefined1 *)(unaff_x22 + 0x30),uVar11,&UNK_110699658,uVar10,
                          uVar6,uVar3);
      plVar7 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                       + 4);
      UNRECOVERED_JUMPTABLE_00 =
           (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
                   *(int *)
                    PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_103801fb0;
                    /* WARNING: Could not recover jumptable at 0x000103801c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(uVar2);
      return;
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar12 = *(long *)(unaff_x22 + 0x88);
  lVar8 = 0;
  func_0x000107c5f038();
  *(long *)(unaff_x22 + 200) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000107c5ee98(uVar10);
  func_0x000107c5ee7c(uVar3,0x404e000000000000,uVar10);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 8);
  (*UNRECOVERED_JUMPTABLE_00)(uVar10,uVar6);
  func_0x000107c5f030(uVar2,uVar3);
  (*UNRECOVERED_JUMPTABLE_00)(uVar3,uVar6);
  uVar10 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  func_0x000107c61480(lVar4,uVar10);
  if (lVar4 != 0) {
    lVar12 = *(long *)(unaff_x22 + 0x68);
    if (lVar12 == 1) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar12 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xf0) = uVar5;
      lVar12 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
      plVar7 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615f0(uVar10);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_103802450;
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar8 = *(long *)(unaff_x22 + 0x88);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar4 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xe0) = uVar5;
      *(undefined1 *)(unaff_x22 + 0x10) = (char)uVar11;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
      *(long *)(unaff_x22 + 0x28) = lVar12;
      (**(code **)(lVar8 + 0x38))(uVar13,1,1,uVar10);
      func_0x000107c615f0(uVar9);
      FUN_103804b18(uVar11,uVar6,uVar3,lVar12);
      FUN_1037ff390();
      uVar10 = uVar11;
      func_0x0001037ff3d0();
      uVar6 = uVar10;
      func_0x0001037ff410();
      func_0x000107c5f044(uVar5,0,(undefined1 *)(unaff_x22 + 0x10),uVar13,&UNK_110699658,uVar11,
                          uVar10,uVar6);
      lVar12 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,0,1,lVar12);
      plVar7 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe8) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_103802364;
    }
                    /* WARNING: Could not recover jumptable at 0x000103801fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar2);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar6);
  func_0x000107c60060();
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000103801e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103801fb0; end: 10380201b;  */

void FUN_103801fb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xb8);
  uVar2 = *(undefined8 *)(lVar4 + 0xa8);
  lVar3 = *(long *)(lVar4 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xc0));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10380201c,0,0);
  return;
}



/* Entry: 10380201c; end: 103802363;  */

void FUN_10380201c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x70));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x88);
  lVar10 = *(long *)(unaff_x22 + 0x70);
  lVar2 = 0;
  func_0x000107c5f038();
  *(long *)(unaff_x22 + 200) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  func_0x000107c5ee98(uVar8);
  func_0x000107c5ee7c(uVar1,0x404e000000000000,uVar8);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(uVar8,uVar5);
  func_0x000107c5f030(uVar3,uVar1);
  (*pcVar12)(uVar1,uVar5);
  uVar8 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  func_0x000107c61480(lVar10,uVar8);
  if (lVar10 != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x68);
    if (lVar11 == 1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar11 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar4 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xf0) = uVar4;
      lVar11 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar4,1,1,lVar11);
      plVar6 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615f0(uVar8);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_103802450;
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar10 = *(long *)(unaff_x22 + 0x88);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar2 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xe0) = uVar4;
      *(undefined1 *)(unaff_x22 + 0x10) = (char)uVar9;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
      *(long *)(unaff_x22 + 0x28) = lVar11;
      (**(code **)(lVar10 + 0x38))(uVar13,1,1,uVar8);
      func_0x000107c615f0(uVar7);
      FUN_103804b18(uVar9,uVar5,uVar1,lVar11);
      FUN_1037ff390();
      uVar8 = uVar9;
      func_0x0001037ff3d0();
      uVar5 = uVar8;
      func_0x0001037ff410();
      func_0x000107c5f044(uVar4,0,(undefined1 *)(unaff_x22 + 0x10),uVar13,&UNK_110699658,uVar9,uVar8
                          ,uVar5);
      lVar11 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar4,0,1,lVar11);
      plVar6 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_103802364;
    }
                    /* WARNING: Could not recover jumptable at 0x000103802360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4,uVar3);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar5);
  func_0x000107c60060();
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103802204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103802364; end: 1038023cb;  */

void FUN_103802364(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xe8));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038023cc,0,0);
  return;
}



/* Entry: 1038023cc; end: 10380244f;  */

void FUN_1038023cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x70));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar2);
  func_0x000107c60060();
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010380244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103802450; end: 10380255f;  */

void FUN_103802450(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038050f4,0,0);
  return;
}



/* Entry: 103802560; end: 1038028b7;  */

void FUN_103802560(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar12 = *(long *)(unaff_x22 + 0x90);
  lVar11 = *(long *)(unaff_x22 + 0x48);
  lVar3 = 0;
  func_0x000107c5f038();
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  func_0x000107c5ee98(uVar9);
  func_0x000107c5ee7c(uVar1,0x404e000000000000,uVar9);
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(uVar9,uVar6);
  func_0x000107c5f030(uVar4,uVar1);
  (*pcVar13)(uVar1,uVar6);
  uVar9 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  func_0x000107c61480(lVar11,uVar9);
  if (lVar11 != 0) {
    lVar12 = *(long *)(unaff_x22 + 0x68);
    if (lVar12 == 1) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar12 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar5 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xd0) = uVar5;
      lVar12 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,1,1,lVar12);
      plVar8 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615f0(uVar9);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1038029ac;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar11 = *(long *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar3 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0xc0) = uVar5;
      *(undefined1 *)(unaff_x22 + 0x10) = (char)uVar7;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
      *(long *)(unaff_x22 + 0x28) = lVar12;
      (**(code **)(lVar11 + 0x38))(uVar10,1,1,uVar9);
      func_0x000107c615f0(uVar1);
      FUN_103804b18(uVar7,uVar6,uVar2,lVar12);
      FUN_1037ff390();
      uVar9 = uVar7;
      func_0x0001037ff3d0();
      uVar6 = uVar9;
      func_0x0001037ff410();
      func_0x000107c5f044(uVar5,0,(undefined1 *)(unaff_x22 + 0x10),uVar10,&UNK_110699658,uVar7,uVar9
                          ,uVar6);
      lVar12 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(uVar5,0,1,lVar12);
      plVar8 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1038028b8;
    }
                    /* WARNING: Could not recover jumptable at 0x0001038028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar4);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar9);
  uVar6 = 0;
  func_0x000107c5fcec();
  uVar9 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar6,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038050f8,uVar6,uVar9);
  return;
}



/* Entry: 1038028b8; end: 10380291f;  */

void FUN_1038028b8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103802920,0,0);
  return;
}



/* Entry: 103802920; end: 1038029ab;  */

void FUN_103802920(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar2);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038050f8,uVar1,uVar2);
  return;
}



/* Entry: 1038029ac; end: 103802a13;  */

void FUN_1038029ac(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xd0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1038050a0,0,0);
  return;
}



/* Entry: 103802a14; end: 103802a2f;  */

void FUN_103802a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103802a30,0,0);
  return;
}



/* Entry: 103802a30; end: 103802abb;  */

void FUN_103802a30(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x103802a7c;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_1037fddc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103802abc; end: 103802b6b;  */

void FUN_103802abc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000107c5fcec();
    uVar3 = uVar2;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103802b6c,uVar2,uVar3);
    return;
  }
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103802b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103802b6c; end: 103802c03;  */

void FUN_103802b6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  code *pcVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    lVar2 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0xd0) + 0x18);
    lVar2 = lVar3;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar1 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar4)();
    func_0x000107c615e8(lVar3);
  }
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  *(long *)(unaff_x22 + 0xe8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103802c04,0,0);
  return;
}



/* Entry: 103802c04; end: 10380303b;  */

void FUN_103802c04(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_a0 [72];
  
  lVar11 = *(long *)(unaff_x22 + 0xd0);
  lVar8 = *(long *)(*(long *)(unaff_x22 + 200) + 0x10);
  *(long *)(unaff_x22 + 0xf0) = lVar8;
  if (lVar8 == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c6142c();
    func_0x000107c61574(lVar11);
  }
  else {
    func_0x000107c61428(lVar11 + 0x98,unaff_x22 + 0x68,0,0);
    uVar9 = 0;
    do {
      *(ulong *)(unaff_x22 + 0xf8) = uVar9;
      if (*(ulong *)(*(long *)(unaff_x22 + 200) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10380303c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar8 = *(long *)(unaff_x22 + 0xc0);
      lVar11 = *(long *)(unaff_x22 + 200) + uVar9 * 0x10;
      uVar9 = *(ulong *)(lVar11 + 0x20);
      *(ulong *)(unaff_x22 + 0x100) = uVar9;
      uVar12 = *(ulong *)(lVar11 + 0x28);
      uVar6 = uVar9;
      func_0x000107c614f0();
      UNRECOVERED_JUMPTABLE = *(code **)(uVar12 + 8);
      func_0x000107c615f0(uVar9);
      uVar10 = uVar6;
      uVar3 = uVar12;
      (*UNRECOVERED_JUMPTABLE)();
      if (lVar8 == 0) {
        func_0x000107c6142c(uVar3);
LAB_103802d04:
        lVar11 = *(long *)(unaff_x22 + 0xe8);
        uVar10 = uVar6;
        uVar3 = uVar12;
        (*UNRECOVERED_JUMPTABLE)();
        if (lVar11 == 0) {
          func_0x000107c6142c(uVar3);
        }
        else {
          if (uVar10 == *(ulong *)(unaff_x22 + 0xe0) && *(ulong *)(unaff_x22 + 0xe8) == uVar3)
          goto LAB_103802c5c;
          func_0x000107c605b8();
          func_0x000107c6142c(uVar3);
          if ((uVar10 & 1) != 0) goto LAB_103802c60;
        }
        lVar11 = *(long *)(unaff_x22 + 0xd0);
        uVar3 = uVar12;
        (*UNRECOVERED_JUMPTABLE)();
        uVar13 = *(undefined8 *)(lVar11 + 0x90);
        func_0x000107c4b940(uVar13);
        lVar11 = *(long *)(lVar11 + 0x98);
        if (*(long *)(lVar11 + 0x10) != 0) {
          func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar11 + 0x28));
          func_0x000107c61434(lVar11);
          puVar4 = auStack_a0;
          func_0x000107c5fb58(puVar4,uVar6,uVar3);
          func_0x000107c606a8();
          uVar10 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
          uVar12 = (ulong)puVar4 & (uVar10 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar11 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
              uVar5 = *puVar1;
              uVar2 = puVar1[1];
              if ((uVar5 == uVar6 && uVar2 == uVar3) ||
                 (func_0x000107c605b8(uVar5,uVar2,uVar6,uVar3,0), (uVar5 & 1) != 0)) {
                func_0x000107c6142c(lVar11);
                func_0x000107c5d278(uVar13);
                goto LAB_103802c5c;
              }
              uVar12 = uVar12 + 1 & ~uVar10;
            } while ((*(ulong *)(lVar11 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
          }
          func_0x000107c6142c(lVar11);
        }
        func_0x000107c61428(*(long *)(unaff_x22 + 0xd0) + 0xa0,unaff_x22 + 0x80,0x21,0);
        func_0x000107c61434(uVar3);
        uVar10 = unaff_x22 + 0x98;
        func_0x000100403b00(uVar10,uVar6,uVar3);
        func_0x000107c614a8(unaff_x22 + 0x80);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
        func_0x000107c5d278(uVar13);
        func_0x000107c6142c(uVar3);
        if ((uVar10 & 1) != 0) {
          lVar11 = 0;
          func_0x000107c5f038();
          *(long *)(unaff_x22 + 0x108) = lVar11;
          lVar11 = *(long *)(lVar11 + -8);
          *(long *)(unaff_x22 + 0x110) = lVar11;
          uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          *(ulong *)(unaff_x22 + 0x118) = uVar10;
          func_0x000107c5f034(uVar10);
          uVar13 = 0x112f9c8d0;
          func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
          uVar6 = uVar9;
          func_0x000107c61480(uVar9,uVar13);
          if (uVar6 != 0) {
            lVar11 = 0x112f9ca80;
            func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
            uVar6 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            func_0x000107c615b8();
            *(ulong *)(unaff_x22 + 0x120) = uVar6;
            lVar11 = 0x112f9c8f8;
            func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
            (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar6,1,1,lVar11);
            plVar7 = (long *)(ulong)*(uint *)(
                                             PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                             + 4);
            UNRECOVERED_JUMPTABLE =
                 (code *)(
                         PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                         + *(int *)
                            PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                         );
            func_0x000107c615f0(uVar9);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x128) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_10380303c;
                    /* WARNING: Could not recover jumptable at 0x000103803034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar6,uVar10);
            return;
          }
          uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar9 = *(ulong *)(unaff_x22 + 0x100);
          (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x108))
          ;
          func_0x000107c615c0(uVar13);
        }
      }
      else if (uVar10 == *(ulong *)(unaff_x22 + 0xb8) && *(ulong *)(unaff_x22 + 0xc0) == uVar3) {
LAB_103802c5c:
        func_0x000107c6142c(uVar3);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c6142c(uVar3);
        if ((uVar10 & 1) == 0) goto LAB_103802d04;
      }
LAB_103802c60:
      func_0x000107c615e8(uVar9);
      uVar9 = *(long *)(unaff_x22 + 0xf8) + 1;
    } while (uVar9 != *(ulong *)(unaff_x22 + 0xf0));
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
    func_0x000107c6142c(uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
  }
  func_0x000107c6142c(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000103802f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10380303c; end: 1038030a3;  */

void FUN_10380303c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x120);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x128));
  FUN_103804d34(uVar1,0x112f9ca80,&UNK_10dc12d70);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038030a4,0,0);
  return;
}



/* Entry: 1038030a4; end: 10380349f;  */

void FUN_1038030a4(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_a0 [72];
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x100));
  do {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar11 = *(ulong *)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c615c0(uVar13);
LAB_10380310c:
    do {
      while( true ) {
        func_0x000107c615e8(uVar11);
        uVar11 = *(long *)(unaff_x22 + 0xf8) + 1;
        if (uVar11 == *(ulong *)(unaff_x22 + 0xf0)) {
          uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000103803498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        *(ulong *)(unaff_x22 + 0xf8) = uVar11;
        if (*(ulong *)(*(long *)(unaff_x22 + 200) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1038034a0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar8 = *(long *)(unaff_x22 + 0xc0);
        lVar9 = *(long *)(unaff_x22 + 200) + uVar11 * 0x10;
        uVar11 = *(ulong *)(lVar9 + 0x20);
        *(ulong *)(unaff_x22 + 0x100) = uVar11;
        uVar12 = *(ulong *)(lVar9 + 0x28);
        uVar5 = uVar11;
        func_0x000107c614f0();
        UNRECOVERED_JUMPTABLE = *(code **)(uVar12 + 8);
        func_0x000107c615f0(uVar11);
        uVar7 = uVar5;
        uVar10 = uVar12;
        (*UNRECOVERED_JUMPTABLE)();
        if (lVar8 == 0) break;
        if (uVar7 == *(ulong *)(unaff_x22 + 0xb8) && *(ulong *)(unaff_x22 + 0xc0) == uVar10) {
LAB_103803104:
          func_0x000107c6142c(uVar10);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c(uVar10);
          if ((uVar7 & 1) == 0) goto LAB_1038031b4;
        }
      }
      func_0x000107c6142c(uVar10);
LAB_1038031b4:
      lVar9 = *(long *)(unaff_x22 + 0xe8);
      uVar7 = uVar5;
      uVar10 = uVar12;
      (*UNRECOVERED_JUMPTABLE)();
      if (lVar9 == 0) {
        func_0x000107c6142c(uVar10);
      }
      else {
        if (uVar7 == *(ulong *)(unaff_x22 + 0xe0) && *(ulong *)(unaff_x22 + 0xe8) == uVar10)
        goto LAB_103803104;
        func_0x000107c605b8();
        func_0x000107c6142c(uVar10);
        if ((uVar7 & 1) != 0) goto LAB_10380310c;
      }
      lVar9 = *(long *)(unaff_x22 + 0xd0);
      (*UNRECOVERED_JUMPTABLE)();
      uVar13 = *(undefined8 *)(lVar9 + 0x90);
      func_0x000107c4b940(uVar13);
      lVar9 = *(long *)(lVar9 + 0x98);
      if (*(long *)(lVar9 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar9 + 0x28));
        func_0x000107c61434(lVar9);
        puVar3 = auStack_a0;
        func_0x000107c5fb58(puVar3,uVar5,uVar12);
        func_0x000107c606a8();
        uVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
        uVar10 = (ulong)puVar3 & (uVar7 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar9 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
            uVar4 = *puVar1;
            uVar2 = puVar1[1];
            if ((uVar4 == uVar5 && uVar2 == uVar12) ||
               (func_0x000107c605b8(uVar4,uVar2,uVar5,uVar12,0), (uVar4 & 1) != 0)) {
              func_0x000107c6142c(lVar9);
              func_0x000107c5d278(uVar13);
              uVar10 = uVar12;
              goto LAB_103803104;
            }
            uVar10 = uVar10 + 1 & ~uVar7;
          } while ((*(ulong *)(lVar9 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(lVar9);
      }
      func_0x000107c61428(*(long *)(unaff_x22 + 0xd0) + 0xa0,unaff_x22 + 0x80,0x21,0);
      func_0x000107c61434(uVar12);
      uVar7 = unaff_x22 + 0x98;
      func_0x000100403b00(uVar7,uVar5,uVar12);
      func_0x000107c614a8(unaff_x22 + 0x80);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa0));
      func_0x000107c5d278(uVar13);
      func_0x000107c6142c(uVar12);
    } while ((uVar7 & 1) == 0);
    lVar9 = 0;
    func_0x000107c5f038();
    *(long *)(unaff_x22 + 0x108) = lVar9;
    lVar9 = *(long *)(lVar9 + -8);
    *(long *)(unaff_x22 + 0x110) = lVar9;
    uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x118) = uVar7;
    func_0x000107c5f034(uVar7);
    uVar13 = 0x112f9c8d0;
    func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
    uVar5 = uVar11;
    func_0x000107c61480(uVar11,uVar13);
    if (uVar5 != 0) {
      lVar9 = 0x112f9ca80;
      func_0x0001000285a8(0x112f9ca80,&UNK_10dc12d70);
      uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x120) = uVar5;
      lVar9 = 0x112f9c8f8;
      func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar5,1,1,lVar9);
      plVar6 = (long *)(ulong)*(uint *)(
                                       PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                                       + 4);
      UNRECOVERED_JUMPTABLE =
           (code *)(
                   PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   + *(int *)
                      PTR___s11ActivityKit0A0C3end_15dismissalPolicyyAA0A7ContentVy0F5StateQzGSg_AA0a11UIDismissalE0VtYaFTjTu_11034b270
                   );
      func_0x000107c615f0(uVar11);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x128) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10380303c;
                    /* WARNING: Could not recover jumptable at 0x000103803458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar5,uVar7);
      return;
    }
  } while( true );
}



/* Entry: 1038034a0; end: 10380350f;  */

void FUN_1038034a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  lVar2 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803510,0,0);
  return;
}



/* Entry: 103803510; end: 10380358b;  */

void FUN_103803510(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10380358c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x98,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 10380358c; end: 1038035d3;  */

void FUN_10380358c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038035d4,0,0);
  return;
}



/* Entry: 1038035d4; end: 103803687;  */

void FUN_1038035d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x98) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103803620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803688,uVar1,uVar2);
  return;
}



/* Entry: 103803688; end: 1038038af;  */

void FUN_103803688(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  code *pcVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  if (lVar8 == 0) goto LAB_103803864;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  if (uVar9 == 0) {
    uVar12 = 0;
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar8 + 0x18);
    uVar12 = uVar9;
    func_0x000107c614f0();
    pcVar13 = *(code **)(lVar10 + 8);
    func_0x000107c615f0(uVar9);
    (*pcVar13)();
    func_0x000107c615e8(uVar9);
  }
  uVar9 = *(ulong *)(unaff_x22 + 0x50);
  lVar11 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c614f0();
  (**(code **)(lVar11 + 8))();
  if (lVar10 == 0) {
    func_0x000107c6142c(lVar11);
  }
  else {
    if (uVar12 == uVar9 && lVar10 == lVar11) {
      func_0x000107c6142c(lVar11);
      func_0x000107c6142c(lVar10);
    }
    else {
      func_0x000107c605b8(uVar12,lVar10,uVar9,lVar11,0);
      func_0x000107c6142c(lVar11);
      func_0x000107c6142c(lVar10);
      if ((uVar12 & 1) == 0) goto LAB_10380385c;
    }
    lVar11 = *(long *)(lVar8 + 0x20);
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    *(ulong *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    func_0x000107c615e8(uVar4);
    uVar4 = *(undefined8 *)(lVar8 + 0xa8);
    uVar2 = *(undefined8 *)(lVar8 + 0xb0);
    uVar1 = *(undefined8 *)(lVar8 + 0xb8);
    uVar3 = *(undefined8 *)(lVar8 + 0xc0);
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0xb0) = 0;
    *(undefined8 *)(lVar8 + 0xb8) = 0;
    *(undefined8 *)(lVar8 + 0xc0) = 1;
    FUN_1038049a0(uVar4,uVar2,uVar1,uVar3);
    uVar4 = *(undefined8 *)(lVar8 + 0xd8);
    uVar2 = *(undefined8 *)(lVar8 + 0xe0);
    uVar1 = *(undefined8 *)(lVar8 + 0xe8);
    uVar3 = *(undefined8 *)(lVar8 + 0xf0);
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    *(undefined8 *)(lVar8 + 0xe0) = 0;
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    *(undefined8 *)(lVar8 + 0xf0) = 1;
    FUN_1038049a0(uVar4,uVar2,uVar1,uVar3);
    *(undefined1 *)(lVar8 + 0x112) = 1;
    lVar10 = unaff_x22 + 0x28;
    func_0x000107c61428(lVar8 + 0x28,lVar10,0x21,0);
    uVar7 = (uint)lVar10;
    func_0x000100f73bdc(lVar11);
    func_0x000107c614a8(unaff_x22 + 0x28);
    if ((uVar7 & 0xff) != 1) {
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      func_0x000107c427f4();
      func_0x000107c61170(puVar5);
      if (*(long *)(lVar8 + 0x20) == lVar11) {
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
      }
    }
  }
LAB_10380385c:
  func_0x000107c61574(lVar8);
LAB_103803864:
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1038038b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0x98,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 1038038b0; end: 1038038f7;  */

void FUN_1038038b0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038038f8,0,0);
  return;
}



/* Entry: 1038038f8; end: 10380399b;  */

void FUN_1038038f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x98) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103803944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803688,uVar1,uVar2);
  return;
}



/* Entry: 10380399c; end: 103803a4f;  */

void FUN_10380399c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    if (((*(byte *)(param_1 + 200) & 1) == 0) && (lVar3 = *(long *)(param_1 + 0xc0), lVar3 != 1)) {
      uVar1 = *(undefined8 *)(param_1 + 0xb0);
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      func_0x000107c61434(lVar3);
      FUN_1038049a0(uVar4,uVar1,uVar2,lVar3);
      FUN_1038049a0(0,0,0,1);
      FUN_103801164();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103803a50; end: 103803aeb;  */

void FUN_103803a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_9;
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803aec,0,0);
  return;
}



/* Entry: 103803aec; end: 103803cf3;  */

void FUN_103803aec(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x48);
  uVar5 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  lVar10 = lVar11;
  func_0x000107c61480(lVar11,uVar5);
  if (lVar10 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x78);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined1 *)(unaff_x22 + 0xb8);
    lVar10 = 0x112f9c8f8;
    func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
    *(long *)(unaff_x22 + 0x90) = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    *(long *)(unaff_x22 + 0x98) = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0xa0) = uVar6;
    *(undefined1 *)(unaff_x22 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(lVar11);
    func_0x000107c5ee98(uVar5);
    func_0x000107c5ee7c(uVar1,0x4085e00000000000,uVar5);
    (**(code **)(lVar2 + 8))(uVar5,uVar7);
    uVar5 = uVar1;
    (**(code **)(lVar2 + 0x38))(uVar1,0,1,uVar7);
    FUN_1037ff390();
    uVar7 = uVar5;
    func_0x0001037ff3d0();
    uVar8 = uVar7;
    func_0x0001037ff410();
    func_0x000107c5f044(uVar6,0,(undefined1 *)(unaff_x22 + 0x10),uVar1,&UNK_110699658,uVar5,uVar7,
                        uVar8);
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                     + 4);
    UNRECOVERED_JUMPTABLE =
         (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
                 *(int *)PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                 );
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_103803cf4;
                    /* WARNING: Could not recover jumptable at 0x000103803c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar6);
    return;
  }
  func_0x000107c5fcec();
  lVar11 = lVar10;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xb0) = lVar11;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar10,lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803dd0,lVar10,lVar11);
  return;
}



/* Entry: 103803cf4; end: 103803d5f;  */

void FUN_103803cf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa0);
  uVar2 = *(undefined8 *)(lVar4 + 0x90);
  lVar3 = *(long *)(lVar4 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803d60,0,0);
  return;
}



/* Entry: 103803d60; end: 103803dcf;  */

void FUN_103803d60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803dd0,uVar1,uVar2);
  return;
}



/* Entry: 103803dd0; end: 103803f2f;  */

void FUN_103803dd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x30,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000103803e44();
    func_0x000107c61574(lVar2);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103803e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103803f30; end: 103803ffb;  */

void FUN_103803f30(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    if (*(long *)(param_2 + 0x10) != *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      func_0x000107c427f4();
      func_0x000107c61170(puVar1);
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    FUN_103803ffc(*(undefined8 *)(param_2 + 0x10));
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103803ffc; end: 10380431f;  */

/* WARNING: Possible PIC construction at 0x000103804238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010380423c) */

void FUN_103803ffc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [40];
  undefined1 *puVar8;
  
  lVar5 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar8 - extraout_x12;
  if ((param_2 == *(long *)(unaff_x20 + 0x20)) && (*(char *)(unaff_x20 + 0x110) == '\x01')) {
    lVar10 = *(long *)(unaff_x20 + 0xf0);
    if (lVar10 == 1) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      if (((lVar10 == 0) || ((*(byte *)(unaff_x20 + 0x111) & 1) != 0)) ||
         ((*(byte *)(unaff_x20 + 0x112) & 1) != 0)) goto code_r0x000103800c54;
      uStack_a8 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined1 *)(unaff_x20 + 0x111) = 1;
      uVar14 = *(undefined8 *)(unaff_x20 + 0xf8);
      uStack_b0 = *(undefined8 *)(unaff_x20 + 0x100);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x108);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      *(undefined8 *)(unaff_x20 + 0xb0) = 0;
      *(undefined8 *)(unaff_x20 + 0xb8) = 0;
      *(undefined8 *)(unaff_x20 + 0xc0) = 1;
      lStack_b8 = lVar5;
      lStack_a0 = param_2;
      func_0x000107c61434(uVar12);
      func_0x000107c615f0(lVar10);
      FUN_1038049a0(uVar6,uVar2,uVar1,uVar3);
      func_0x000107c6071c();
      *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
      uVar6 = 0;
      func_0x000107c60f6c();
      FUN_103804a30(unaff_x20 + 0x30,auStack_98);
      puVar4 = &UNK_110698ad0;
      func_0x000107c613fc(&UNK_110698ad0,0x70,7);
      func_0x000100d5ec94(auStack_98,puVar4 + 0x10);
      *(long *)(puVar4 + 0x38) = lVar10;
      *(undefined8 *)(puVar4 + 0x40) = uStack_a8;
      puVar4[0x48] = 3;
      *(undefined8 *)(puVar4 + 0x50) = uVar14;
      *(undefined8 *)(puVar4 + 0x58) = uStack_b0;
      *(undefined8 *)(puVar4 + 0x60) = uVar12;
      *(undefined8 *)(puVar4 + 0x68) = uVar6;
      func_0x000107c615f0(lVar10);
      func_0x000107c61174(uVar6);
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar6 = 4;
      func_0x0001009548b0(4,0,0x88,4,0,0,&UNK_10dc12d48,puVar4);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar6);
      func_0x000107c5f830(puVar8);
      func_0x000107c5f85c(lVar9,0x3fd6666666666666,puVar8);
      lVar5 = lStack_b8;
      pcVar11 = *(code **)(lVar13 + 8);
      (*pcVar11)(puVar8,lStack_b8);
      func_0x000107c60058(lVar9);
      (*pcVar11)(lVar9,lVar5);
      FUN_103800c54(lStack_a0);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0xe0);
      uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
      uVar12 = *(undefined8 *)(unaff_x20 + 0xd8);
      func_0x000107c61434(lVar10);
      FUN_1038049a0(uVar12,uVar6,uVar1,lVar10);
      FUN_1038049a0(0,0,0,1);
      lVar10 = *(long *)(unaff_x20 + 0x10);
      if (lVar10 == 0) goto code_r0x000103800c54;
      func_0x000107c615f0(lVar10);
      FUN_103801610();
      FUN_103800c54(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar10);
    return;
  }
code_r0x000103800c54:
  puVar8 = &stack0xffffffffffffffb8;
  func_0x000107c61428(unaff_x20 + 0x28,puVar8,0x21,0);
  uVar7 = (uint)puVar8;
  func_0x000100f73bdc(param_2);
  func_0x000107c614a8(&stack0xffffffffffffffb8);
  if ((uVar7 & 0xff) != 1) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c427f4();
    func_0x000107c61170(puVar4);
    if (*(long *)(unaff_x20 + 0x20) == param_2) {
      *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    }
  }
  return;
}



/* Entry: 103804320; end: 1038043bb;  */

void FUN_103804320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined1 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038043bc,0,0);
  return;
}



/* Entry: 1038043bc; end: 1038045a3;  */

void FUN_1038043bc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x30);
  uVar5 = 0x112f9c8d0;
  func_0x0001000285a8(0x112f9c8d0,&UNK_10dc12bf8);
  lVar10 = lVar11;
  func_0x000107c61480(lVar11,uVar5);
  if (lVar10 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x98);
    lVar10 = 0x112f9c8f8;
    func_0x0001000285a8(0x112f9c8f8,&UNK_10dc12c38);
    *(long *)(unaff_x22 + 0x78) = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    *(long *)(unaff_x22 + 0x80) = lVar10;
    uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x88) = uVar6;
    *(undefined1 *)(unaff_x22 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(lVar11);
    func_0x000107c5ee98(uVar5);
    func_0x000107c5ee7c(uVar1,0x4085e00000000000,uVar5);
    (**(code **)(lVar2 + 8))(uVar5,uVar7);
    uVar5 = uVar1;
    (**(code **)(lVar2 + 0x38))(uVar1,0,1,uVar7);
    FUN_1037ff390();
    uVar7 = uVar5;
    func_0x0001037ff3d0();
    uVar8 = uVar7;
    func_0x0001037ff410();
    func_0x000107c5f044(uVar6,0,(undefined1 *)(unaff_x22 + 0x10),uVar1,&UNK_110699658,uVar5,uVar7,
                        uVar8);
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                                     + 4);
    UNRECOVERED_JUMPTABLE =
         (code *)(PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278 +
                 *(int *)PTR___s11ActivityKit0A0C6updateyyAA0A7ContentVy0D5StateQzGYaFTjTu_11034b278
                 );
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1038045a4;
                    /* WARNING: Could not recover jumptable at 0x00010380455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar6);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c60060();
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001038045a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038045a4; end: 10380460f;  */

void FUN_1038045a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x88);
  uVar2 = *(undefined8 *)(lVar4 + 0x78);
  lVar3 = *(long *)(lVar4 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103804610,0,0);
  return;
}



/* Entry: 103804610; end: 103804663;  */

void FUN_103804610(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c60060();
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103804660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103804664; end: 1038046e3;  */

void FUN_103804664(void)

{
  FUN_1037ff99c();
  return;
}



/* Entry: 1038046e4; end: 10380499f;  */

long FUN_1038046e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined **ppuStack_78;
  
  ppuVar5 = &puStack_f0;
  ppuVar8 = &puStack_f0;
  puStack_80 = &UNK_110698800;
  ppuStack_78 = &PTR_DAT_110698828;
  puStack_a8 = &UNK_1106987e0;
  ppuStack_a0 = &PTR_DAT_110698810;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  *(undefined **)(param_2 + 0x28) = puVar7;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x90) = puVar1;
  *(undefined **)(param_2 + 0x98) = puVar7;
  *(undefined **)(param_2 + 0xa0) = puVar7;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 1;
  *(undefined2 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 1;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined4 *)(param_2 + 0x10f) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  FUN_103804a30(auStack_98,param_2 + 0x30);
  FUN_103804a30(auStack_c0,param_2 + 0x58);
  *(ulong *)(param_2 + 0x80) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined8 *)(param_2 + 0x88) = param_1;
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c41570();
  func_0x000107c61180();
  puVar7 = &UNK_1106988f0;
  puVar4 = puVar7;
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_d0 = FUN_10380501c;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_100ef35e4;
  puStack_d8 = &UNK_110698c50;
  puStack_c8 = puVar4;
  func_0x000107c60bc4(&puStack_f0);
  puVar4 = puStack_c8;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar4);
  puVar4 = puVar3;
  func_0x000107c3d7c4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  *(undefined **)(param_2 + 0x118) = puVar4;
  func_0x000107c615e8(uVar6);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1106988f0,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,param_2);
  func_0x000107c61574(param_2);
  pcStack_d0 = (code *)0x103805044;
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_100ef35e4;
  puStack_d8 = &UNK_110698c78;
  puStack_c8 = puVar7;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c61574(puStack_c8);
  puVar7 = puVar2;
  func_0x000107c3d7c4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar2);
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  *(undefined **)(param_2 + 0x120) = puVar7;
  func_0x000107c615e8(uVar6);
  FUN_1037ff730();
  func_0x0001000834e4(auStack_c0);
  func_0x0001000834e4(auStack_98);
  return param_2;
}



/* Entry: 1038049a0; end: 103804a03;  */

void FUN_1038049a0(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
  return;
}



/* Entry: 103804a04; end: 103804a23;  */

void FUN_103804a04(void)

{
  func_0x000107c61168(&PTR_PTR_112f9c978);
  return;
}



/* Entry: 103804a24; end: 103804a2f;  */

void FUN_103804a24(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_50,0,0);
    if (*(long *)(lVar1 + 0x10) != *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      func_0x000107c427f4();
      func_0x000107c61170(puVar3);
    }
  }
  else {
    func_0x000107c61428(lVar1 + 0x10,auStack_50,0,0);
    FUN_103803ffc(*(undefined8 *)(lVar1 + 0x10));
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103804a30; end: 103804a73;  */

long FUN_103804a30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103804a74; end: 103804b17;  */

void FUN_103804a74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar8 = *(long *)(unaff_x20 + 0x68);
  plVar6 = (long *)0xa0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x48);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1038050fc;
  plVar6[9] = lVar2;
  plVar6[10] = lVar8;
  plVar6[8] = lVar4;
  plVar6[7] = lVar9;
  *(undefined1 *)(plVar6 + 0x13) = uVar3;
  plVar6[6] = lVar7;
  lVar4 = 0;
  func_0x000107c5eea4(0,unaff_x20 + 0x10,lVar7,uVar1);
  plVar6[0xb] = lVar4;
  lVar7 = *(long *)(lVar4 + -8);
  plVar6[0xc] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar5;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038043bc,0,0);
  return;
}



/* Entry: 103804b18; end: 103804b2b;  */

void FUN_103804b18(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x3);
  return;
}



/* Entry: 103804b2c; end: 103804bdb;  */

void FUN_103804b2c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  lVar3 = *(long *)(unaff_x20 + 0x68);
  lVar7 = *(long *)(unaff_x20 + 0x70);
  plVar11 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x103805108;
  plVar11[0xe] = lVar3;
  plVar11[0xf] = lVar7;
  plVar11[0xc] = lVar2;
  plVar11[0xd] = lVar6;
  plVar11[10] = lVar9;
  plVar11[0xb] = lVar5;
  plVar11[9] = lVar1;
  lVar9 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,lVar1,uVar4);
  uVar8 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x10] = uVar8;
  lVar9 = 0;
  func_0x000107c5eea4();
  plVar11[0x11] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar11[0x12] = lVar9;
  uVar8 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar10 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x13] = uVar10;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0x14] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103802560,0,0);
  return;
}



/* Entry: 103804bdc; end: 103804c8f;  */

void FUN_103804bdc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  uVar4 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x60);
  lVar10 = *(long *)(unaff_x20 + 0x70);
  plVar8 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x103805100;
  plVar8[0xe] = lVar9;
  plVar8[0xf] = lVar10;
  plVar8[0xc] = lVar1;
  plVar8[0xd] = lVar3;
  plVar8[10] = lVar5;
  plVar8[0xb] = lVar2;
  *(undefined1 *)(plVar8 + 0x20) = uVar4;
  lVar5 = 0;
  func_0x000107c5eea4();
  plVar8[0x10] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar8[0x11] = lVar5;
  uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar6 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x12] = uVar6;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x13] = uVar7;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x14] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103801ad8,0,0);
  return;
}



/* Entry: 103804c90; end: 103804d33;  */

void FUN_103804c90(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar8 = *(long *)(unaff_x20 + 0x68);
  plVar6 = (long *)0xc0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x48);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x103805104;
  plVar6[0xc] = lVar2;
  plVar6[0xd] = lVar8;
  plVar6[0xb] = lVar4;
  plVar6[10] = lVar9;
  *(undefined1 *)(plVar6 + 0x17) = uVar3;
  plVar6[9] = lVar7;
  lVar4 = 0;
  func_0x000107c5eea4(0,unaff_x20 + 0x10,lVar7,uVar1);
  plVar6[0xe] = lVar4;
  lVar7 = *(long *)(lVar4 + -8);
  plVar6[0xf] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar5;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103803aec,0,0);
  return;
}



/* Entry: 103804d34; end: 103804d73;  */

undefined8 FUN_103804d34(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103804d74; end: 103804d7b;  */

void FUN_103804d74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xc9) = 0;
    if (((*(byte *)(lVar3 + 200) & 1) == 0) && (lVar4 = *(long *)(lVar3 + 0xc0), lVar4 != 1)) {
      uVar1 = *(undefined8 *)(lVar3 + 0xb0);
      uVar2 = *(undefined8 *)(lVar3 + 0xb8);
      uVar5 = *(undefined8 *)(lVar3 + 0xa8);
      func_0x000107c61434(lVar4);
      FUN_1038049a0(uVar5,uVar1,uVar2,lVar4);
      FUN_1038049a0(0,0,0,1);
      FUN_103801164();
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 103804d7c; end: 103804da7;  */

void FUN_103804d7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103804da8; end: 103804db3;  */

void FUN_103804da8(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  uVar6 = *(ulong *)(lVar2 + 0x10);
  if (uVar6 == 0) {
    func_0x000107c61574();
    return;
  }
  lVar7 = *(long *)(lVar2 + 0x18);
  uVar3 = uVar6;
  func_0x000107c614f0();
  pcVar8 = *(code **)(lVar7 + 8);
  func_0x000107c615f0(uVar6);
  lVar4 = lVar7;
  (*pcVar8)();
  if (uVar3 == uVar1 && lVar4 == lVar5) {
    func_0x000107c6142c(lVar4);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(lVar4);
    if ((uVar3 & 1) == 0) goto LAB_1038015e4;
  }
  FUN_103801610(uVar6,lVar7,0);
LAB_1038015e4:
  func_0x000107c61574(lVar2);
  func_0x000107c615e8(uVar6);
  return;
}


