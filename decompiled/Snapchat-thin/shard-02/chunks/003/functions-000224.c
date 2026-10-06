/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bccff4; end: 101bcd093;  */

undefined1  [16] FUN_101bccff4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)PTR__NSFileProtectionComplete_110345428;
  puVar1 = PTR__OBJC_CLASS___CSSearchableIndex_1126a8c30;
  func_0x000107c610f8(PTR__OBJC_CLASS___CSSearchableIndex_1126a8c30);
  func_0x000107c61174(uVar3);
  uVar2 = 0x61737265766e6f63;
  func_0x000107c5fadc(0x61737265766e6f63,0xed0000736e6f6974);
  func_0x000107c478f4(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  auVar4._8_8_ = &PTR_DAT_110452ce8;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 101bcd094; end: 101bcd0b3;  */

void FUN_101bcd094(void)

{
  return;
}



/* Entry: 101bcd0b4; end: 101bcd23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcd0b4(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  uVar6 = 0x112e07de8;
  func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
  func_0x000100087bd4(unaff_x22 + 0x78,0x101bd07c8,unaff_x22 + 0x10,uVar6);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  uVar6 = _DAT_112e07d98;
  lVar5 = *(long *)(lVar5 + _DAT_112e07d60);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xc0) = _DAT_112e07da0;
  lVar4 = *(long *)(lVar5 + 0x10);
  *(long *)(unaff_x22 + 200) = lVar4;
  if (lVar4 != 0) {
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bcd23c);
      (*pcVar1)();
    }
    FUN_101bd0320(lVar5 + 0x20,unaff_x22 + 0x28);
    uVar3 = unaff_x22 + 0x28;
    FUN_101bd0364(uVar3,unaff_x22 + 0x50);
    func_0x000107c5fd5c();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x22 + 0x98);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0xb8));
      func_0x000107c6157c(uVar6);
      func_0x0001000c74f0(unaff_x22 + 0x88);
      func_0x000107c61574(uVar6);
      if (lVar5 == *(long *)(unaff_x22 + 0x88)) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0xc0));
        func_0x000107c6157c(uVar6);
        func_0x0001000c74f0(unaff_x22 + 0xe0);
        func_0x000107c61574(uVar6);
        if ((*(byte *)(unaff_x22 + 0xe0) & 1) == 0) {
          plVar2 = (long *)0x150;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xd8) = plVar2;
          *plVar2 = unaff_x22;
          plVar2[1] = (long)FUN_101bcd23c;
          lVar5 = *(long *)(unaff_x22 + 0x90);
          plVar2[0x16] = *(long *)(unaff_x22 + 0x98);
          plVar2[0x17] = lVar5;
          plVar2[0x15] = unaff_x22 + 0x50;
          lVar5 = 0;
          func_0x000107c5fcbc();
          plVar2[0x18] = lVar5;
          lVar5 = *(long *)(lVar5 + -8);
          plVar2[0x19] = lVar5;
          uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar2[0x1a] = uVar3;
          lVar5 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar2[0x1b] = uVar3;
          lVar5 = 0;
          func_0x000107c5eea4();
          plVar2[0x1c] = lVar5;
          lVar5 = *(long *)(lVar5 + -8);
          plVar2[0x1d] = lVar5;
          uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar2[0x1e] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101bce130,0,0);
          return;
        }
      }
    }
    func_0x0001000834e4(unaff_x22 + 0x50);
  }
  (**(code **)(unaff_x22 + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x000101bcd1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcd23c; end: 101bcd283;  */

void FUN_101bcd23c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd284,0,0);
  return;
}



/* Entry: 101bcd284; end: 101bcd3b3;  */

void FUN_101bcd284(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 200);
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000834e4(unaff_x22 + 0x50);
  if (lVar1 + 1 != lVar4) {
    uVar5 = *(long *)(unaff_x22 + 0xd0) + 1;
    *(ulong *)(unaff_x22 + 0xd0) = uVar5;
    if (*(ulong *)(*(long *)(unaff_x22 + 0xb0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bcd3b4);
      (*pcVar2)();
    }
    FUN_101bd0320(*(long *)(unaff_x22 + 0xb0) + uVar5 * 0x28 + 0x20,unaff_x22 + 0x28);
    uVar5 = unaff_x22 + 0x28;
    FUN_101bd0364(uVar5,unaff_x22 + 0x50);
    func_0x000107c5fd5c();
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(unaff_x22 + 0x98);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0xb8));
      func_0x000107c6157c(uVar6);
      func_0x0001000c74f0(unaff_x22 + 0x88);
      func_0x000107c61574(uVar6);
      if (lVar4 == *(long *)(unaff_x22 + 0x88)) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + *(long *)(unaff_x22 + 0xc0));
        func_0x000107c6157c(uVar6);
        func_0x0001000c74f0(unaff_x22 + 0xe0);
        func_0x000107c61574(uVar6);
        if ((*(byte *)(unaff_x22 + 0xe0) & 1) == 0) {
          plVar3 = (long *)0x150;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xd8) = plVar3;
          *plVar3 = unaff_x22;
          plVar3[1] = (long)FUN_101bcd23c;
          lVar4 = *(long *)(unaff_x22 + 0x90);
          plVar3[0x16] = *(long *)(unaff_x22 + 0x98);
          plVar3[0x17] = lVar4;
          plVar3[0x15] = unaff_x22 + 0x50;
          lVar4 = 0;
          func_0x000107c5fcbc();
          plVar3[0x18] = lVar4;
          lVar4 = *(long *)(lVar4 + -8);
          plVar3[0x19] = lVar4;
          uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar3[0x1a] = uVar5;
          lVar4 = 0x112d373d8;
          func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
          uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar3[0x1b] = uVar5;
          lVar4 = 0;
          func_0x000107c5eea4();
          plVar3[0x1c] = lVar4;
          lVar4 = *(long *)(lVar4 + -8);
          plVar3[0x1d] = lVar4;
          uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          plVar3[0x1e] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_101bce130,0,0);
          return;
        }
      }
    }
    func_0x0001000834e4(unaff_x22 + 0x50);
  }
  (**(code **)(unaff_x22 + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x000101bcd370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcd3b4; end: 101bcd3b7;  */

void FUN_101bcd3b4(void)

{
  return;
}



/* Entry: 101bcd3b8; end: 101bcd41b;  */

void FUN_101bcd3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x81) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  lVar1 = 0;
  FUN_101bcbb4c();
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd41c,0,0);
  return;
}



/* Entry: 101bcd41c; end: 101bcd693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcd41c(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112e07d98);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(unaff_x22 + 0x38);
  func_0x000107c61574(uVar7);
  if (lVar2 == *(long *)(unaff_x22 + 0x38)) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112e07da0);
    func_0x000107c6157c(uVar7);
    func_0x0001000c74f0(unaff_x22 + 0x80);
    func_0x000107c61574(uVar7);
    if ((*(byte *)(unaff_x22 + 0x80) & 1) == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x48);
      lVar9 = *(long *)(unaff_x22 + 0x50);
      uVar8 = *(undefined8 *)(lVar2 + _DAT_112e07d70);
      uVar7 = 0xd000000000000027;
      func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
      func_0x000107c52de0(uVar8);
      func_0x000107c61170(uVar7);
      *(long *)(unaff_x22 + 0x20) = lVar2;
      uVar7 = 0x112e07de8;
      func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
      func_0x000100087bd4(unaff_x22 + 0x28,0x101bd082c,unaff_x22 + 0x10,uVar7);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        lVar10 = *(long *)(unaff_x22 + 0x50);
        lVar12 = *(long *)(unaff_x22 + 0x58);
        func_0x000101bcb04c(0,lVar9,0);
        uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
        lVar10 = lVar10 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
        lVar12 = *(long *)(lVar12 + 0x48);
        do {
          uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
          uVar11 = (ulong)*(byte *)(unaff_x22 + 0x81);
          FUN_101bd05d4(lVar10,uVar8);
          FUN_101bcb724();
          func_0x000101bd0618(uVar8);
          uVar5 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
            func_0x000101bcb04c(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
          *(ulong *)(puVar3 + uVar5 * 8 + 0x20) = uVar11;
          lVar10 = lVar10 + lVar12;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      *(undefined **)(unaff_x22 + 0x70) = puVar3;
      func_0x000107c614f0(uVar7);
      piVar6 = *(int **)(lVar2 + 0x20);
      iVar1 = *piVar6;
      plVar4 = (long *)(ulong)(uint)piVar6[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x78) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101bcd694;
                    /* WARNING: Could not recover jumptable at 0x000101bcd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar6))(puVar3,uVar7,lVar2);
      return;
    }
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101bcd4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcd694; end: 101bcd70b;  */

void FUN_101bcd694(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  if (unaff_x20 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    func_0x000107c615e8(uVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bcd708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 101bcd70c; end: 101bcd72b;  */

void FUN_101bcd70c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 101bcd72c; end: 101bcd78f;  */

void FUN_101bcd72c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd790,0,0);
  return;
}



/* Entry: 101bcd790; end: 101bcd953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcd790(void)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(unaff_x22 + 0x48);
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 != 0) {
    lVar13 = *(long *)(unaff_x22 + 0x78);
    func_0x000100403514(0,lVar11,0);
    lVar12 = lVar12 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar13 + 0x48);
    pcVar7 = *(code **)(lVar13 + 0x10);
    do {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar4 = uVar10;
      lVar6 = lVar12;
      (*pcVar7)(uVar10,lVar12,uVar14);
      func_0x000107c5ed70();
      (**(code **)(lVar13 + 8))(uVar10,uVar14);
      uVar2 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar3 + uVar2 * 0x10 + 0x20) = uVar4;
      *(long *)(puVar3 + uVar2 * 0x10 + 0x28) = lVar6;
      lVar12 = lVar12 + lVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e07d88);
  *(long *)(unaff_x22 + 0x20) = *(long *)(unaff_x22 + 0x68);
  uVar4 = 0x112e07de8;
  func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  func_0x000100087bd4(unaff_x22 + 0x28,FUN_101bd00e0,unaff_x22 + 0x10,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar12 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  func_0x000107c614f0(uVar4);
  piVar8 = *(int **)(lVar12 + 0x28);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bcd954;
                    /* WARNING: Could not recover jumptable at 0x000101bcd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(puVar3,uVar4,lVar12);
  return;
}



/* Entry: 101bcd954; end: 101bcd9db;  */

void FUN_101bcd954(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
  if (unaff_x20 != 0) {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcda18,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x88);
  func_0x000107c615e8(*(undefined8 *)(lVar1 + 0xa0));
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101bcd9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101bcd9dc; end: 101bcda17;  */

void FUN_101bcd9dc(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101bcda14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcda18; end: 101bcdabb;  */

void FUN_101bcda18(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000100087bd4(unaff_x22 + 0x38,FUN_101bd07b4,unaff_x22 + 0x50,
                      *(undefined8 *)(unaff_x22 + 0x98));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x28);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bcdabc;
                    /* WARNING: Could not recover jumptable at 0x000101bcdab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x88),uVar3,lVar2);
  return;
}



/* Entry: 101bcdabc; end: 101bcdb2b;  */

void FUN_101bcdabc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  uVar3 = *(undefined8 *)(lVar2 + 0x88);
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0xb8));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bcd9dc;
  }
  else {
    pcVar1 = FUN_101bcdb2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bcdb2c; end: 101bcdb6b;  */

void FUN_101bcdb2c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bcdb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcdb6c; end: 101bcdb87;  */

void FUN_101bcdb6c(void)

{
  return;
}



/* Entry: 101bcdb88; end: 101bcddef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcdb88(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long unaff_x22;
  
  iVar8 = (int)*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112e07d70);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
  func_0x000107c3ebc0();
  func_0x000107c61170();
  if ((iVar8 != 0) &&
     ((**(code **)(*(long *)(unaff_x22 + 0x38) + _DAT_112e07d78))(),
     puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8, (uVar3 & 1) != 0)) {
    uVar6 = 2;
    func_0x000100403514(0,2,0);
    uVar4 = 0;
    FUN_101bccae0();
    uVar3 = *(ulong *)(puVar2 + 0x10);
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar3 + 1,1);
    }
    *(ulong *)(puVar2 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar2 + uVar3 * 0x10 + 0x20) = uVar4;
    *(undefined8 *)(puVar2 + uVar3 * 0x10 + 0x28) = uVar6;
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0x7370756f7267,0xe600000000000000);
    uVar3 = *(ulong *)(puVar2 + 0x10);
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar3 + 1,1);
    }
    *(undefined **)(unaff_x22 + 0x40) = puVar2;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    *(ulong *)(puVar2 + 0x10) = uVar3 + 1;
    *(undefined8 *)(puVar2 + uVar3 * 0x10 + 0x20) = 0xd00000000000001b;
    *(undefined8 *)(puVar2 + uVar3 * 0x10 + 0x28) = 0x800000010f0028f0;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
    uVar4 = 0x112e07de8;
    func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
    func_0x000100087bd4(unaff_x22 + 0x28,0x101bd0818,unaff_x22 + 0x10,uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
    func_0x000107c614f0(uVar4);
    piVar7 = *(int **)(lVar1 + 0x30);
    iVar8 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101bcddf0;
                    /* WARNING: Could not recover jumptable at 0x000101bcdd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar8 + (long)piVar7))(puVar2,uVar4,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bcdd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcddf0; end: 101bcde5f;  */

void FUN_101bcddf0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x48));
  func_0x000107c61574(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bcde3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcde60,0,0);
  return;
}



/* Entry: 101bcde60; end: 101bcde93;  */

void FUN_101bcde60(void)

{
  long unaff_x22;
  
  FUN_101bcde94();
                    /* WARNING: Could not recover jumptable at 0x000101bcde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcde94; end: 101bce053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcde94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112e07d70);
  uVar5 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
  func_0x000107c4ff88(lVar10);
  func_0x000107c61170(uVar5);
  lVar8 = lVar10;
  func_0x000107c41994();
  func_0x000107c61180();
  lVar6 = lVar8;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar8);
  lVar8 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(lVar6 + 0x40);
  while( true ) {
    while (uVar11 != 0) {
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      puVar1 = (undefined8 *)
               (*(long *)(lVar6 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 +
               lVar8 * 0x400);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      uVar7 = 0xd00000000000002d;
      func_0x000107c5fbb4(0xd00000000000002d,0x800000010f002920,uVar5,uVar2);
      if ((uVar7 & 1) == 0) {
        func_0x000107c6142c(uVar2);
      }
      else {
        func_0x000107c5fadc(uVar5,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c4ff88(lVar10);
        func_0x000107c61170(uVar5);
      }
    }
    bVar4 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar4) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(lVar6);
      return;
    }
    uVar11 = ((ulong *)(lVar6 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101bce054);
  (*pcVar3)();
}



/* Entry: 101bce054; end: 101bce057;  */

void FUN_101bce054(void)

{
  return;
}



/* Entry: 101bce058; end: 101bce077;  */

void FUN_101bce058(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101bce078; end: 101bce12f;  */

void FUN_101bce078(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bce130,0,0);
  return;
}



/* Entry: 101bce130; end: 101bce49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bce130(void)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(unaff_x22 + 0xb8);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  lVar9 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(lVar8,uVar4);
  (**(code **)(lVar9 + 8))(uVar4,lVar9);
  puVar1 = (undefined8 *)(lVar12 + _DAT_112e07d68);
  uStack_80 = 0xd00000000000002d;
  uStack_78 = 0x800000010f002920;
  func_0x000107c5fb78(*puVar1,puVar1[1]);
  uVar5 = uStack_78;
  func_0x000107c61434(uStack_78);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c6142c(uVar5);
  uVar5 = uStack_78;
  bVar3 = ((uint)uVar4 & 0xff) != 1;
  uVar4 = 0x7370756f7267;
  if (bVar3) {
    uVar4 = 0x73646e65697266;
  }
  uVar10 = 0xe600000000000000;
  if (bVar3) {
    uVar10 = 0xe700000000000000;
  }
  func_0x000107c61434(uStack_78);
  func_0x000107c5fb78(uVar4,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar5);
  uVar4 = uStack_78;
  *(undefined8 *)(unaff_x22 + 0xf8) = uStack_80;
  *(undefined8 *)(unaff_x22 + 0x100) = uStack_78;
  lVar9 = *(long *)(lVar12 + _DAT_112e07d70);
  uVar5 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (lVar9 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    dStack_70 = 0.0;
  }
  else {
    func_0x000107c60234(&uStack_80,lVar9);
    func_0x000107c615e8(lVar9);
  }
  *(undefined8 *)(unaff_x22 + 0x78) = uStack_78;
  *(undefined8 *)(unaff_x22 + 0x70) = uStack_80;
  *(undefined8 *)(unaff_x22 + 0x88) = uStack_68;
  *(double *)(unaff_x22 + 0x80) = dStack_70;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar9 = *(long *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  if (*(long *)(unaff_x22 + 0x88) == 0) {
    FUN_101bd037c(unaff_x22 + 0x70,0x112d387f8,&UNK_10d902650);
    (**(code **)(lVar9 + 0x38))(uVar10,1,1,uVar5);
  }
  else {
    uVar11 = uVar10;
    dVar13 = dStack_70;
    func_0x000107c6147c(uVar10,unaff_x22 + 0x70,PTR___sypN_11034f1a8 + 8,uVar5,6);
    (**(code **)(lVar9 + 0x38))(uVar10,(uint)uVar11 ^ 1,1,uVar5);
    (**(code **)(lVar9 + 0x30))(uVar10,1,uVar5);
    if ((int)uVar10 != 1) {
      lVar9 = *(long *)(unaff_x22 + 0xe8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
      (**(code **)(lVar9 + 0x20))(uVar5,*(undefined8 *)(unaff_x22 + 0xd8),uVar10);
      func_0x000107c5ee84();
      (**(code **)(lVar9 + 8))(uVar5,uVar10);
      if (-86400.0 < dVar13) {
        func_0x000107c6142c(uVar4);
        uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
        func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
        func_0x000107c615c0(uVar5);
        func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101bce3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      goto LAB_101bce3ec;
    }
  }
  FUN_101bd037c(*(undefined8 *)(unaff_x22 + 0xd8),0x112d373d8,&UNK_10d9014c0);
LAB_101bce3ec:
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar9 = *(long *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  uVar5 = *(undefined8 *)(lVar8 + 0x18);
  lVar8 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(uVar10,uVar5);
  uVar11 = *(undefined8 *)(lVar9 + _DAT_112e07db8);
  *(undefined8 **)(unaff_x22 + 0x20) = (undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 **)(unaff_x22 + 0x28) = (undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x30) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  piVar7 = *(int **)(lVar8 + 0x10);
  iVar2 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bce4a0;
                    /* WARNING: Could not recover jumptable at 0x000101bce49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar7))(uVar11,&UNK_10d9dc718,unaff_x22 + 0x10,uVar5,lVar8);
  return;
}



/* Entry: 101bce4a0; end: 101bce503;  */

void FUN_101bce4a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bce504;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x100));
    pcVar1 = FUN_101bce790;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bce504; end: 101bce683;  */

void FUN_101bce504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  if (*(long *)(unaff_x22 + 0x90) < 1) {
    func_0x000107c6142c(uVar5);
    if (*(long *)(unaff_x22 + 0x98) < 1) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101bce680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
    FUN_101bd0320(*(undefined8 *)(unaff_x22 + 0xa8),unaff_x22 + 0x48);
    puVar3 = &UNK_110452f00;
    func_0x000107c613fc(&UNK_110452f00,0x48,7);
    *(undefined **)(unaff_x22 + 0x130) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    FUN_101bd0364(unaff_x22 + 0x48,puVar3 + 0x20);
    plVar6 = (long *)0xb0;
    func_0x000107c61174(uVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101bce72c;
    lVar7 = *(long *)(unaff_x22 + 0xb8);
    puVar4 = &UNK_10d9dc730;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar3 = &UNK_110452f28;
    func_0x000107c613fc(&UNK_110452f28,0x30,7);
    *(undefined **)(unaff_x22 + 0x118) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    *(undefined8 *)(puVar3 + 0x20) = uVar8;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    plVar6 = (long *)0xb0;
    func_0x000107c61174(uVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101bce684;
    lVar7 = *(long *)(unaff_x22 + 0xb8);
    puVar4 = &UNK_10d9dc748;
  }
  plVar6[0x13] = (long)puVar3;
  plVar6[0x14] = lVar7;
  plVar6[0x12] = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf388,0,0);
  return;
}



/* Entry: 101bce684; end: 101bce6e7;  */

void FUN_101bce684(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x118);
  *(long *)(lVar3 + 0x128) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x120));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101bce6e8;
  }
  else {
    pcVar2 = FUN_101bce860;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bce6e8; end: 101bce72b;  */

void FUN_101bce6e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bce728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bce72c; end: 101bce78f;  */

void FUN_101bce72c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x130);
  *(long *)(lVar3 + 0x140) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x138));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101bd0854;
  }
  else {
    pcVar2 = FUN_101bce930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bce790; end: 101bce85f;  */

void FUN_101bce790(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar3 = (undefined8 *)(unaff_x22 + 0xa0);
  *puVar3 = uVar4;
  uVar5 = *(ulong *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c614b0(uVar4);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,puVar3,uVar2,uVar6,0);
  if ((uVar5 & 1) == 0) {
    func_0x000107c614ac(*puVar3);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c614ac(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  func_0x000107c614ac(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bce85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bce860; end: 101bce92f;  */

void FUN_101bce860(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar3 = (undefined8 *)(unaff_x22 + 0xa0);
  *puVar3 = uVar4;
  uVar5 = *(ulong *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c614b0(uVar4);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,puVar3,uVar2,uVar6,0);
  if ((uVar5 & 1) == 0) {
    func_0x000107c614ac(*puVar3);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c614ac(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  func_0x000107c614ac(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bce92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bce930; end: 101bce9ff;  */

void FUN_101bce930(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  puVar3 = (undefined8 *)(unaff_x22 + 0xa0);
  *puVar3 = uVar4;
  uVar5 = *(ulong *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c614b0(uVar4);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,puVar3,uVar2,uVar6,0);
  if ((uVar5 & 1) == 0) {
    func_0x000107c614ac(*puVar3);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c614ac(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  func_0x000107c614ac(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bce9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcea00; end: 101bcea1f;  */

void FUN_101bcea00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcea20,0,0);
  return;
}



/* Entry: 101bcea20; end: 101bceb37;  */

void FUN_101bcea20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long *plVar8;
  
  lVar5 = **(long **)(unaff_x22 + 0x40);
  if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bceb38);
    (*pcVar3)();
  }
  lVar6 = *(long *)(unaff_x22 + 0x38);
  **(long **)(unaff_x22 + 0x40) = lVar5 + 1;
  lVar5 = *(long *)(lVar6 + 0x10);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar5 = **(long **)(unaff_x22 + 0x48);
    FUN_101bd0320(*(undefined8 *)(unaff_x22 + 0x60),unaff_x22 + 0x10);
    puVar4 = &UNK_110452f78;
    func_0x000107c613fc(&UNK_110452f78,0x58,7);
    *(undefined **)(unaff_x22 + 0x70) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar2;
    puVar4[0x20] = lVar5 == 0;
    FUN_101bd0364(unaff_x22 + 0x10,puVar4 + 0x28);
    *(undefined8 *)(puVar4 + 0x50) = uVar7;
    plVar8 = (long *)0xb0;
    func_0x000107c61174(uVar2);
    func_0x000107c61434(uVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101bceb38;
    lVar5 = *(long *)(unaff_x22 + 0x50);
    plVar8[0x13] = (long)puVar4;
    plVar8[0x14] = lVar5;
    plVar8[0x12] = (long)&UNK_10d9dc760;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf388,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bceb38; end: 101bceb9b;  */

void FUN_101bceb38(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x78));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101bceb9c;
  }
  else {
    pcVar2 = (code *)0x101bcebc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bceb9c; end: 101bcebcf;  */

void FUN_101bceb9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = **(long **)(unaff_x22 + 0x48);
  if (!SCARRY8(lVar2,*(long *)(unaff_x22 + 0x68))) {
    **(long **)(unaff_x22 + 0x48) = lVar2 + *(long *)(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x000101bcebbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bcebc4);
  (*pcVar1)();
}



/* Entry: 101bcebd0; end: 101bcec33;  */

void FUN_101bcebd0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined1 *)(unaff_x22 + 0xd1) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  lVar1 = 0;
  FUN_101bcbb4c();
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcec34,0,0);
  return;
}



/* Entry: 101bcec34; end: 101bcf08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcec34(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar14 = *(long *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + _DAT_112e07d98);
  func_0x000107c6157c(uVar11);
  func_0x0001000c74f0(unaff_x22 + 0x48);
  func_0x000107c61574(uVar11);
  if (lVar14 == *(long *)(unaff_x22 + 0x48)) {
    uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + _DAT_112e07da0);
    func_0x000107c6157c(uVar11);
    func_0x0001000c74f0(unaff_x22 + 0xd0);
    func_0x000107c61574(uVar11);
    if ((*(byte *)(unaff_x22 + 0xd0) & 1) == 0) {
      cVar2 = *(char *)(unaff_x22 + 0xd1);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + _DAT_112e07d70);
      uVar11 = 0xd000000000000027;
      func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
      func_0x000107c52de0(uVar4);
      func_0x000107c61170(uVar11);
      if (cVar2 == '\x01') {
        lVar9 = *(long *)(unaff_x22 + 0x78);
        *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x70);
        uVar11 = 0x112e07de8;
        func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
        func_0x000100087bd4(unaff_x22 + 0x38,0x101bd0804,unaff_x22 + 0x50,uVar11);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
        lVar14 = *(long *)(unaff_x22 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
        puVar5 = (undefined *)0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined **)(unaff_x22 + 0xa0) = puVar5;
        *(undefined8 *)(puVar5 + 0x18) = 2;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        uVar4 = *(undefined8 *)(lVar9 + 0x18);
        lVar15 = *(long *)(lVar9 + 0x20);
        func_0x0001000a8868(lVar9,uVar4);
        (**(code **)(lVar15 + 8))(uVar4,lVar15);
        func_0x000107c602fc(0x1d);
        func_0x000107c6142c(0xe000000000000000);
        bVar3 = ((uint)uVar4 & 0xff) != 1;
        uVar4 = 0x7370756f7267;
        if (bVar3) {
          uVar4 = 0x73646e65697266;
        }
        uVar12 = 0xe600000000000000;
        if (bVar3) {
          uVar12 = 0xe700000000000000;
        }
        func_0x000107c614f0(uVar11);
        func_0x000107c5fb78(uVar4,uVar12);
        func_0x000107c6142c(uVar12);
        *(undefined8 *)(puVar5 + 0x20) = 0xd00000000000001b;
        *(undefined8 *)(puVar5 + 0x28) = 0x800000010f0028f0;
        piVar7 = *(int **)(lVar14 + 0x30);
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar7 + (long)piVar7);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa8) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101bcf090;
      }
      else {
        lVar9 = *(long *)(unaff_x22 + 0x80);
        *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
        uVar11 = 0x112e07de8;
        func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
        func_0x000100087bd4(unaff_x22 + 0x28,0x101bd07f0,unaff_x22 + 0x10,uVar11);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar14 = *(long *)(unaff_x22 + 0x30);
        *(undefined8 *)(unaff_x22 + 0xb8) = uVar11;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          lVar15 = *(long *)(unaff_x22 + 0x80);
          lVar10 = *(long *)(unaff_x22 + 0x88);
          lVar13 = *(long *)(unaff_x22 + 0x78);
          func_0x000101bcb04c(0,lVar9,0);
          uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
          lVar15 = lVar15 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
          lVar10 = *(long *)(lVar10 + 0x48);
          do {
            uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
            FUN_101bd05d4(lVar15,uVar16);
            uVar4 = *(undefined8 *)(lVar13 + 0x18);
            lVar1 = *(long *)(lVar13 + 0x20);
            func_0x0001000a8868(uVar12,uVar4);
            (**(code **)(lVar1 + 8))(uVar4,lVar1);
            FUN_101bcb724();
            func_0x000101bd0618(uVar16);
            uVar8 = *(ulong *)(puVar5 + 0x10);
            if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
              func_0x000101bcb04c(1 < *(ulong *)(puVar5 + 0x18),uVar8 + 1,1);
            }
            *(ulong *)(puVar5 + 0x10) = uVar8 + 1;
            *(undefined8 *)(puVar5 + uVar8 * 8 + 0x20) = uVar4;
            lVar15 = lVar15 + lVar10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        *(undefined **)(unaff_x22 + 0xc0) = puVar5;
        func_0x000107c614f0(uVar11);
        piVar7 = *(int **)(lVar14 + 0x20);
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        UNRECOVERED_JUMPTABLE = (code *)((long)*piVar7 + (long)piVar7);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 200) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101bcf2e8;
      }
                    /* WARNING: Could not recover jumptable at 0x000101bcf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar5,uVar11,lVar14);
      return;
    }
  }
  uVar4 = 0;
  func_0x000107c5fcbc(0);
  uVar11 = uVar4;
  func_0x000100f5abbc();
  func_0x000107c613f8(uVar4,uVar11,0,0);
  func_0x000107c5f9d4(uVar11);
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000101bced1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcf090; end: 101bcf11b;  */

void FUN_101bcf090(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa0);
  uVar2 = *(undefined8 *)(lVar4 + 0x98);
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xa8));
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
  if (unaff_x20 != 0) {
    func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000101bcf0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf11c,0,0);
  return;
}



/* Entry: 101bcf11c; end: 101bcf2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcf11c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = 0x112e07de8;
  func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
  func_0x000100087bd4(unaff_x22 + 0x28,0x101bd07f0,unaff_x22 + 0x10,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0x80);
    lVar11 = *(long *)(unaff_x22 + 0x88);
    lVar13 = *(long *)(unaff_x22 + 0x78);
    func_0x000101bcb04c(0,lVar10,0);
    uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
    lVar14 = lVar14 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    do {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      FUN_101bd05d4(lVar14,uVar15);
      uVar6 = *(undefined8 *)(lVar13 + 0x18);
      lVar3 = *(long *)(lVar13 + 0x20);
      func_0x0001000a8868(uVar12,uVar6);
      (**(code **)(lVar3 + 8))(uVar6,lVar3);
      FUN_101bcb724();
      func_0x000101bd0618(uVar15);
      uVar8 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
        func_0x000101bcb04c(1 < *(ulong *)(puVar4 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar8 + 1;
      *(undefined8 *)(puVar4 + uVar8 * 8 + 0x20) = uVar6;
      lVar14 = lVar14 + lVar11;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined **)(unaff_x22 + 0xc0) = puVar4;
  func_0x000107c614f0(uVar5);
  piVar9 = *(int **)(lVar2 + 0x20);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bcf2e8;
                    /* WARNING: Could not recover jumptable at 0x000101bcf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(puVar4,uVar5,lVar2);
  return;
}



/* Entry: 101bcf2e8; end: 101bcf36b;  */

void FUN_101bcf2e8(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x90);
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0xc0));
    func_0x000107c615e8(uVar1);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0xc0));
    func_0x000107c615e8(uVar1);
    func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bcf368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bcf36c; end: 101bcf387;  */

void FUN_101bcf36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf388,0,0);
  return;
}



/* Entry: 101bcf388; end: 101bcf44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcf388(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bcf44c;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  puVar2 = &UNK_110452f50;
  func_0x000107c613fc(&UNK_110452f50,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(code **)(unaff_x22 + 0x80) = FUN_101bd0534;
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  func_0x000100087bd4(FUN_101bd053c,unaff_x22 + 0x50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bcf44c; end: 101bcf497;  */

void FUN_101bcf44c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101bcf494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bcf498; end: 101bcf4fb;  */

void FUN_101bcf498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf4fc,0,0);
  return;
}



/* Entry: 101bcf4fc; end: 101bcf613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcf4fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112e07d98);
  func_0x000107c6157c(uVar6);
  func_0x0001000c74f0(unaff_x22 + 0x10);
  func_0x000107c61574(uVar6);
  if (lVar1 == *(long *)(unaff_x22 + 0x10)) {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112e07da0);
    func_0x000107c6157c(uVar6);
    func_0x0001000c74f0(unaff_x22 + 0x50);
    func_0x000107c61574(uVar6);
    if ((*(byte *)(unaff_x22 + 0x50) & 1) == 0) {
      lVar1 = *(long *)(unaff_x22 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + _DAT_112e07d70);
      func_0x000107c5eea0(uVar3);
      func_0x000107c5ee70();
      (**(code **)(lVar1 + 8))(uVar3,uVar4);
      func_0x000107c5fadc(uVar5,uVar2);
      func_0x000107c56bcc(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
    }
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101bcf610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcf614; end: 101bcf62f;  */

void FUN_101bcf614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf630,0,0);
  return;
}



/* Entry: 101bcf630; end: 101bcf86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcf630(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x40);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112e07d98);
  func_0x000107c6157c(uVar11);
  func_0x0001000c74f0(unaff_x22 + 0x38);
  func_0x000107c61574(uVar11);
  if (lVar7 == *(long *)(unaff_x22 + 0x38)) {
    uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112e07da0);
    func_0x000107c6157c(uVar11);
    func_0x0001000c74f0(unaff_x22 + 0x70);
    func_0x000107c61574(uVar11);
    if ((*(byte *)(unaff_x22 + 0x70) & 1) == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x48);
      uVar11 = 0x112e07de8;
      func_0x0001000285a8(0x112e07de8,&UNK_10d9dc6f0);
      func_0x000100087bd4(unaff_x22 + 0x28,0x101bd07dc,unaff_x22 + 0x10,uVar11);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar4 = *(long *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x58) = uVar8;
      lVar7 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(long *)(unaff_x22 + 0x60) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      uVar11 = *(undefined8 *)(lVar3 + 0x18);
      lVar5 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar11);
      (**(code **)(lVar5 + 8))(uVar11,lVar5);
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(0xe000000000000000);
      bVar6 = ((uint)uVar11 & 0xff) != 1;
      uVar11 = 0x7370756f7267;
      if (bVar6) {
        uVar11 = 0x73646e65697266;
      }
      uVar1 = 0xe600000000000000;
      if (bVar6) {
        uVar1 = 0xe700000000000000;
      }
      func_0x000107c614f0(uVar8);
      func_0x000107c5fb78(uVar11,uVar1);
      func_0x000107c6142c(uVar1);
      *(undefined8 *)(lVar7 + 0x20) = 0xd00000000000001b;
      *(undefined8 *)(lVar7 + 0x28) = 0x800000010f0028f0;
      piVar10 = *(int **)(lVar4 + 0x30);
      iVar2 = *piVar10;
      plVar9 = (long *)(ulong)(uint)piVar10[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x68) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_101bcf870;
                    /* WARNING: Could not recover jumptable at 0x000101bcf86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar10))(lVar7,uVar8,lVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101bcf6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcf870; end: 101bcf8c7;  */

void FUN_101bcf870(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bcf8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 101bcf8c8; end: 101bcfadf;  */

/* WARNING: Possible PIC construction at 0x000101bcf9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bcf9f0) */
/* WARNING: Removing unreachable block (ram,0x000101bcfa64) */
/* WARNING: Removing unreachable block (ram,0x000101bcfa68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcf8c8(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  cVar2 = cRam0000000112e07e18;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e07d70);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112e07d68),
                      ((undefined8 *)(unaff_x20 + _DAT_112e07d68))[1]);
  func_0x000107c61434(0x800000010f002920);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c6142c(0x800000010f002920);
  uVar3 = 0x7370756f7267;
  if (cVar2 != '\x01') {
    uVar3 = 0x73646e65697266;
  }
  uVar1 = 0xe600000000000000;
  if (cVar2 != '\x01') {
    uVar1 = 0xe700000000000000;
  }
  func_0x000107c61434(0x800000010f002920);
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(0x800000010f002920);
  func_0x000107c6142c(uVar1);
  uVar3 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f002920);
  func_0x000107c6142c(0x800000010f002920);
  func_0x000107c4ff88(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101bcfae0; end: 101bcfb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcfae0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  plVar1 = (long *)(param_2 + _DAT_112e07d90);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    (**(code **)(param_2 + _DAT_112e07d80))();
    func_0x000107c614f0();
    pcVar4 = *(code **)(param_3 + 0x10);
    func_0x000107c615f0(param_2);
    (*pcVar4)();
    lVar3 = *plVar1;
    *plVar1 = lVar2;
    plVar1[1] = param_3;
    func_0x000107c615f0(lVar2);
    func_0x000107c615e8(lVar3);
    lVar3 = 0;
  }
  else {
    param_3 = plVar1[1];
    lVar3 = lVar2;
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  func_0x000107c615f0(lVar3);
  return;
}



/* Entry: 101bcfba0; end: 101bcfd77;  */

void FUN_101bcfba0(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(int **)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  if (param_2 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101bcfc48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101bcfce8;
                    /* WARNING: Could not recover jumptable at 0x000101bcfc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))();
  return;
}



/* Entry: 101bcfd78; end: 101bcfdcf;  */

void FUN_101bcfd78(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar1 = *(code **)(unaff_x22 + 0x20);
  func_0x000107c614b0(uVar2);
  (*pcVar1)(uVar2);
  func_0x000107c614ac(uVar2);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bcfdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bcfdd0; end: 101bcfe4f;  */

void FUN_101bcfdd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_1;
    func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
  return;
}



/* Entry: 101bcfe50; end: 101bcfeaf; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer init] */

void FUN_101bcfe50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessagingSystemSearchIndexing.SystemSearchIndexer",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bcfe7c);
  (*pcVar1)();
}



/* Entry: 101bcfeb0; end: 101bcff93; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bcfef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bcfef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bcfeb0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e07d60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e07d68 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e07d70));
  return;
}



/* Entry: 101bcff94; end: 101bd0007; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:] */

/* WARNING: Possible PIC construction at 0x000101bcfff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bcfff4) */

void FUN_101bcff94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101bd0654();
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101bd0008; end: 101bd00d7; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd0008(long param_1)

{
  long in_x4;
  undefined8 uVar1;
  char cStack_31;
  
  func_0x000107c60bc4();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e07da0);
  func_0x000107c60bc4();
  func_0x000107c60bc4(in_x4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&cStack_31);
  func_0x000107c61574(uVar1);
  if (cStack_31 == '\x01') {
    (**(code **)(in_x4 + 0x10))(in_x4);
  }
  else {
    func_0x000107c60bc4(in_x4);
    FUN_101bd00f8(param_1,in_x4);
    func_0x000107c60bd0(in_x4);
  }
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(in_x4);
  func_0x000107c60bd0(in_x4);
  func_0x000107c60bd0(in_x4);
  return;
}



/* Entry: 101bd00d8; end: 101bd00db; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer searchableIndexDidThrottle:] */

void FUN_101bd00d8(void)

{
  return;
}



/* Entry: 101bd00dc; end: 101bd00df; -[_TtC31SCMessagingSystemSearchIndexing19SystemSearchIndexer searchableIndexDidFinishThrottle:] */

void FUN_101bd00dc(void)

{
  return;
}



/* Entry: 101bd00e0; end: 101bd00f7;  */

void FUN_101bd00e0(void)

{
  long unaff_x20;
  
  FUN_101bcfae0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101bd00f8; end: 101bd025f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd00f8(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  byte bStack_41;
  
  puVar2 = &UNK_110452eb0;
  func_0x000107c613fc(&UNK_110452eb0,0x18,7);
  *(ulong *)(puVar2 + 0x10) = param_2;
  pcVar1 = *(code **)(param_1 + _DAT_112e07d78);
  uVar3 = param_2;
  func_0x000107c60bc4();
  (*pcVar1)();
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112e07da0);
    func_0x000107c6157c(uVar6);
    func_0x0001000c74f0(&bStack_41);
    func_0x000107c61574(uVar6);
    if ((bStack_41 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112e07d98);
      func_0x000107c6157c(uVar6);
      func_0x0001000c74f0(&uStack_50);
      func_0x000107c61574(uVar6);
      puVar4 = &UNK_110452ed8;
      func_0x000107c613fc(&UNK_110452ed8,0x30,7);
      *(long *)(puVar4 + 0x10) = param_1;
      *(undefined8 *)(puVar4 + 0x18) = uStack_50;
      *(code **)(puVar4 + 0x20) = FUN_101bd0260;
      *(undefined **)(puVar4 + 0x28) = puVar2;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar2);
      puVar5 = (undefined *)0xc;
      func_0x0001001ca524(0xc,0,0x28,0,0,0,&UNK_10d9dc700,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar4);
      goto LAB_101bd0240;
    }
  }
  (**(code **)(param_2 + 0x10))(param_2);
  puVar5 = puVar2;
LAB_101bd0240:
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101bd0260; end: 101bd026b;  */

void FUN_101bd0260(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101bd0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101bd026c; end: 101bd02e3;  */

void FUN_101bd026c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bd02e4;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar4;
  plVar5[0x12] = lVar1;
  plVar5[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd0b4,0,0);
  return;
}



/* Entry: 101bd02e4; end: 101bd031f;  */

void FUN_101bd02e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd0320; end: 101bd0363;  */

long FUN_101bd0320(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101bd0364; end: 101bd037b;  */

undefined8 * FUN_101bd0364(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101bd037c; end: 101bd03bb;  */

undefined8 FUN_101bd037c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101bd03bc; end: 101bd0437;  */

void FUN_101bd03bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bd0438;
  plVar5[0xb] = lVar4;
  plVar5[0xc] = lVar6;
  plVar5[9] = lVar3;
  plVar5[10] = lVar2;
  plVar5[7] = param_1;
  plVar5[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcea20,0,0);
  return;
}



/* Entry: 101bd0438; end: 101bd0473;  */

void FUN_101bd0438(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd0474; end: 101bd04cf;  */

void FUN_101bd0474(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101bd0858;
  plVar3[9] = lVar2;
  plVar3[10] = unaff_x20 + 0x20;
  plVar3[8] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf630,0,0);
  return;
}



/* Entry: 101bd04d0; end: 101bd0533;  */

void FUN_101bd04d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101bd085c;
  plVar6[5] = lVar1;
  plVar6[6] = lVar3;
  plVar6[3] = lVar4;
  plVar6[4] = lVar2;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar6[7] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[8] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcf4fc,0,0);
  return;
}



/* Entry: 101bd0534; end: 101bd053b;  */

void FUN_101bd0534(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_1;
    func_0x000107c614b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar3,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar3);
  return;
}



/* Entry: 101bd053c; end: 101bd055f;  */

void FUN_101bd053c(void)

{
  long unaff_x20;
  
  func_0x00010095ad00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101bd0560; end: 101bd05d3;  */

void FUN_101bd0560(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bd0860;
  plVar5[0xf] = unaff_x20 + 0x28;
  plVar5[0x10] = lVar6;
  *(undefined1 *)((long)plVar5 + 0xd1) = uVar2;
  plVar5[0xd] = lVar3;
  plVar5[0xe] = lVar1;
  lVar3 = 0;
  FUN_101bcbb4c();
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x11] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcec34,0,0);
  return;
}



/* Entry: 101bd05d4; end: 101bd0653;  */

undefined8 FUN_101bd05d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101bcbb4c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101bd0654; end: 101bd0733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd0654(long param_1,long param_2)

{
  undefined8 uVar1;
  char acStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e07da0);
  func_0x000107c60bc4(param_2);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(acStack_38);
  func_0x000107c61574(uVar1);
  if (acStack_38[0] == '\x01') {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e07d98);
    func_0x000107c6157c(uVar1);
    func_0x000100075034(acStack_38,0x101bd0840,0,PTR___sSiN_11034deb0);
    func_0x000107c61574(uVar1);
    FUN_101bcf8c8();
    func_0x000107c60bc4(param_2);
    FUN_101bd00f8(param_1,param_2);
    func_0x000107c60bd0(param_2);
  }
  func_0x000107c60bd0(param_2);
  return;
}



/* Entry: 101bd0734; end: 101bd07b3;  */

void FUN_101bd0734(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  piVar4 = *(int **)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x101bd0864;
  plVar7[4] = lVar5;
  plVar7[5] = lVar8;
  plVar7[2] = (long)piVar4;
  plVar7[3] = lVar3;
  if (lVar2 != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    plVar7[6] = (long)plVar6;
    *plVar6 = (long)plVar7;
    plVar6[1] = 0x101bcfc48;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar7[7] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = 0x101bcfce8;
                    /* WARNING: Could not recover jumptable at 0x000101bcfc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))();
  return;
}



/* Entry: 101bd07b4; end: 101bd0853;  */

void FUN_101bd07b4(void)

{
  FUN_101bd00e0();
  return;
}



/* Entry: 101bd0854; end: 101bd0867;  */

void FUN_101bd0854(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bce728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd0868; end: 101bd0d13;  */

long FUN_101bd0868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001000285a8(0x112e07e20,&UNK_10d9dc788);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + 0xa0) = puVar1;
  *(undefined2 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000100959dcc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 101bd0d14; end: 101bd10b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101bd0d14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c615e8(uVar1);
  lVar5 = *(long *)(unaff_x20 + 0xa0);
  func_0x000107c6157c(lVar5);
  puVar6 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_101bd1da0,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x00010095a408();
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112e07da0);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(auStack_90,&UNK_10095acac,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(lVar5);
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    func_0x000101bd09d8();
    FUN_101bd250c();
    func_0x000107c61170(lVar5);
    *(undefined1 *)(unaff_x20 + 0xa9) = 0;
  }
  lVar5 = *(long *)(unaff_x20 + 0x90);
  iVar4 = (int)*(undefined8 *)(lVar5 + _DAT_112e07d70);
  func_0x000107c61174();
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
  func_0x000107c3ebc0();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar1);
  lVar5 = *(long *)(unaff_x20 + 0x90);
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + _DAT_112e07d98);
    func_0x000107c61174();
    func_0x000107c6157c(uVar1);
    func_0x000100075034(auStack_90,&UNK_10095acec,0,PTR___sSiN_11034deb0);
    func_0x000107c61574(uVar1);
    puVar2 = &UNK_110452ff0;
    func_0x000107c613fc(&UNK_110452ff0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar5;
    uStack_78 = 3;
    puStack_70 = &UNK_10d9dc790;
    pcStack_60 = FUN_101bce054;
    uStack_58 = 0;
    lStack_80 = lVar5;
    puStack_68 = puVar2;
    func_0x000107c61174(lVar5);
    func_0x000100087bd4(&SUB_10095ae54,auStack_90,puVar6 + 8);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puVar2);
    pcVar3 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_110453018;
    func_0x000107c613fc(&UNK_110453018,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar5;
    func_0x000107c61174(lVar5);
    pcVar3 = FUN_101bd1e38;
  }
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = pcVar3;
  return auVar7;
}



/* Entry: 101bd10b4; end: 101bd10b7;  */

void FUN_101bd10b4(void)

{
  return;
}



/* Entry: 101bd10b8; end: 101bd12d3;  */

void FUN_101bd10b8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      lVar5 = lVar3;
      func_0x000100403a6c();
      func_0x000100bcb1dc(lVar3 + 0x20);
      lVar3 = lVar5;
      func_0x000107c5fe08(lVar5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar5);
      FUN_101bd2390(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar10 + 0x68))
                (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar2);
      lVar5 = lVar9;
      func_0x000107c5fff0(lVar9);
      (**(code **)(lVar10 + 8))(lVar9,lVar2);
      puVar6 = &UNK_110453288;
      func_0x000107c613fc(&UNK_110453288,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      pcStack_60 = FUN_101bd2388;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_1019e993c;
      puStack_68 = &UNK_110453408;
      ppuVar7 = &puStack_80;
      puStack_58 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_58);
      lVar2 = lVar4;
      func_0x000107c4da68();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar2;
    func_0x000107c615e8(uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd12d4);
  (*pcVar1)();
}



/* Entry: 101bd12d4; end: 101bd14b3;  */

void FUN_101bd12d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    return;
  }
  ppuVar3 = &puStack_60;
  pcVar2 = "begin()";
  func_0x0001000c10c0("begin()");
  func_0x000107c61180();
  pcStack_40 = FUN_101bd2214;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110453318;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 101bd14b4; end: 101bd1627;  */

void FUN_101bd14b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434();
    uVar4 = 0;
    lVar1 = -0x2fffffffffffffec;
    func_0x000100029284(0xd000000000000014);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_78);
      func_0x000107c6142c(param_1);
      uVar2 = 0;
      FUN_101bd2390(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar3 = &uStack_48;
      func_0x000107c6147c(puVar3,&puStack_78,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        uVar4 = uStack_48;
        func_0x000107c3ebcc();
        if ((uVar4 & 1) == 0) {
          pcVar5 = "observeShareIntentsSetting()";
          func_0x0001000c10c0("observeShareIntentsSetting()");
          func_0x000107c61180();
          pcStack_58 = FUN_101bd23d0;
          puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0x42000000;
          puStack_68 = &UNK_1000f6b44;
          puStack_60 = &UNK_110453430;
          ppuVar6 = &puStack_78;
          uStack_50 = param_2;
          func_0x000107c60bc4(ppuVar6);
          uVar2 = uStack_50;
          func_0x000107c6157c(param_2);
          func_0x000107c61574(uVar2);
          func_0x000107c4e524(pcVar5);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(uStack_48);
          func_0x000107c615e8(pcVar5);
        }
        else {
          func_0x000107c61170(uStack_48);
        }
      }
    }
  }
  return;
}



/* Entry: 101bd1628; end: 101bd167b;  */

void FUN_101bd1628(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_101bd167c();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101bd167c; end: 101bd1827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd167c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  if ((*(byte *)(unaff_x20 + 0xa8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0xa8) = 1;
    if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
      func_0x000101bd09d8();
      FUN_101bd250c();
      func_0x000107c61170(param_1);
      *(undefined1 *)(unaff_x20 + 0xa9) = 0;
    }
    lVar3 = *(long *)(unaff_x20 + 0xa0);
    func_0x000107c6157c(lVar3);
    puVar1 = PTR___sytN_11034f1b0;
    func_0x000100075034(FUN_101bd1da0,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x00010095a408();
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112e07da0);
    func_0x000107c6157c(uVar4);
    func_0x000100075034(auStack_90,&UNK_10095acac,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x90);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112e07d98);
    func_0x000107c61174();
    func_0x000107c6157c(uVar4);
    func_0x000100075034(auStack_90,&UNK_10095acec,0,PTR___sSiN_11034deb0);
    func_0x000107c61574(uVar4);
    puVar2 = &UNK_110453468;
    func_0x000107c613fc(&UNK_110453468,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar3;
    uStack_78 = 3;
    puStack_70 = &UNK_10d9dc950;
    pcStack_60 = FUN_101bce054;
    uStack_58 = 0;
    lStack_80 = lVar3;
    puStack_68 = puVar2;
    func_0x000107c61174(lVar3);
    func_0x000100087bd4(0x101bd24dc,auStack_90,puVar1 + 8);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 101bd1828; end: 101bd183f;  */

void FUN_101bd1828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd1840,0,0);
  return;
}



/* Entry: 101bd1840; end: 101bd1a27;  */

void FUN_101bd1840(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x58,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar2 = *(long *)(lVar7 + 0x18);
    func_0x000107c5b478();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd1a28);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar2 = lVar3;
      func_0x000107c3e878();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar4 = lVar2;
      func_0x000107c5c6c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      puVar5 = &UNK_110453288;
      func_0x000107c613fc(&UNK_110453288,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,lVar7);
      puVar6 = &UNK_110453378;
      func_0x000107c613fc(&UNK_110453378,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = uVar8;
      *(code **)(unaff_x22 + 0x48) = FUN_101bd2300;
      *(undefined **)(unaff_x22 + 0x50) = puVar6;
      *(undefined **)(unaff_x22 + 0x28) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x38) = &UNK_101218f4c;
      *(undefined **)(unaff_x22 + 0x40) = &UNK_110453390;
      lVar3 = unaff_x22 + 0x28;
      func_0x000107c60bc4(lVar3);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c615f0(uVar8);
      func_0x000107c61574(uVar9);
      lVar2 = lVar4;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar3);
      func_0x000107c61170(lVar4);
    }
    uVar8 = *(undefined8 *)(lVar7 + 0xa0);
    *(long *)(unaff_x22 + 0x20) = lVar2;
    func_0x000107c6157c(uVar8);
    func_0x000100075034(0x101bd22bc,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101bd1a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd1a28; end: 101bd1b7b;  */

void FUN_101bd1a28(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x000107c44574();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd1b78);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar2 = lVar3;
      func_0x000107c44578();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd1b7c);
        (*pcVar1)();
      }
      puVar4 = &UNK_110453288;
      func_0x000107c613fc(&UNK_110453288,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_2);
      uStack_58 = 0x101bd2308;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1011b0640;
      puStack_60 = &UNK_1104533b8;
      ppuVar5 = &puStack_78;
      puStack_50 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_50);
      func_0x000107c5dc64(lVar2);
      func_0x000107c61574(param_2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101bd1b7c; end: 101bd1bcf;  */

void FUN_101bd1b7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_101bd1bd0();
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101bd1bd0; end: 101bd1d3f;  */

/* WARNING: Possible PIC construction at 0x000101bd1c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bd1d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd1c14) */
/* WARNING: Removing unreachable block (ram,0x000101bd1d28) */
/* WARNING: Removing unreachable block (ram,0x000101bd1c38) */
/* WARNING: Removing unreachable block (ram,0x000101bd1c64) */
/* WARNING: Removing unreachable block (ram,0x000101bd1d0c) */

void FUN_101bd1bd0(undefined8 param_1)

{
  long unaff_x20;
  
  if (((*(byte *)(unaff_x20 + 0xa8) & 1) == 0) && ((*(byte *)(unaff_x20 + 0xa9) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0xa9) = 1;
    func_0x000101bd09d8();
    FUN_101bd2590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101bd1d40; end: 101bd1d9f;  */

void FUN_101bd1d40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c4218c(param_2);
  }
  else {
    uVar1 = *param_1;
    func_0x000107c61174(param_2);
    func_0x000107c61170(uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101bd1da0; end: 101bd1deb;  */

void FUN_101bd1da0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c4218c(uVar1);
  func_0x000107c61170(uVar1);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101bd1dec; end: 101bd1e37;  */

void FUN_101bd1dec(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bd24f0;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcdb88,0,0);
  return;
}



/* Entry: 101bd1e38; end: 101bd1e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd1e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110453120;
  func_0x000107c613fc(&UNK_110453120,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uVar5 = *(undefined8 *)(lVar4 + _DAT_112e07d98);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(uVar5);
  func_0x000100075034(auStack_90,&UNK_10095acec,0,PTR___sSiN_11034deb0);
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_110453148;
  func_0x000107c613fc(&UNK_110453148,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar4;
  puVar3 = &UNK_110453170;
  func_0x000107c613fc(&UNK_110453170,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101bd2054;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  uStack_78 = 3;
  puStack_70 = &UNK_10d9dc910;
  pcStack_60 = FUN_101bd20fc;
  lStack_80 = lVar4;
  puStack_68 = puVar2;
  puStack_58 = puVar3;
  func_0x000107c61174(lVar4);
  func_0x000107c6157c(puVar1);
  func_0x000100087bd4(FUN_101bd24b4,auStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101bd1e40; end: 101bd1ee3;  */

void FUN_101bd1e40(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x00010095aa98(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x00010095ac2c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}


