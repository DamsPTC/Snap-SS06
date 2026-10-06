/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e946e0; end: 101e94813;  */

void FUN_101e946e0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x1e8);
  if (*(long *)(unaff_x22 + 0x1e0) != 0) {
    func_0x000107c614ac(lVar6);
    lVar6 = *(long *)(unaff_x22 + 0x1e0);
  }
  *(long *)(unaff_x22 + 0x1f0) = lVar6;
  puVar1 = PTR___sytN_11034f1b0;
  uVar2 = unaff_x22 + 0x10;
  func_0x000107c5fd8c(uVar2,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x1c8),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar2 & 1) != 0) {
    if (lVar6 == 0) {
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1d8) = plVar3;
      func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
      pcVar4 = FUN_101e94458;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x000107c61654();
      func_0x000107c5fd94(unaff_x22 + 0x10,puVar1 + 8,uVar5,PTR___ss5ErrorWS_11034ee10);
      plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1f8) = plVar3;
      func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
      pcVar4 = FUN_101e94644;
    }
    *plVar3 = unaff_x22;
    plVar3[1] = (long)pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
    return;
  }
  *(long *)(unaff_x22 + 0x1e0) = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x210,unaff_x22 + 0x10,FUN_101e944e4,unaff_x22 + 0x150);
  return;
}



/* Entry: 101e94814; end: 101e9499f;  */

void FUN_101e94814(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x1b0);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x178,0,0);
  puVar1 = *(undefined1 **)(lVar2 + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    FUN_101e95c20();
    func_0x000107c613f8(&UNK_1106e9230,puVar1,0,0);
    *puVar1 = 2;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    func_0x000107c61654();
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
    func_0x000107c61174();
    func_0x000107c60ad0();
    func_0x000107c60ad0(uVar3,0);
    FUN_101e95ecc(puVar1,uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a8);
    if (lVar2 == 0) {
      FUN_101e9606c(*(undefined8 *)(unaff_x22 + 0x198),uVar5);
      func_0x000107c60ae0(uVar5,0);
      func_0x000107c60ae0(puVar1,1);
      func_0x000107c61170(puVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e9499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x1b8));
      return;
    }
    func_0x000107c60ae0(uVar5,0);
    func_0x000107c60ae0(puVar1,1);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e94938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e949a0; end: 101e949e7;  */

void FUN_101e949a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1b8));
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e949e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e949e8; end: 101e94f7f;  */

void FUN_101e949e8(long param_1,ulong param_2,undefined8 param_3,undefined1 **param_4,long param_5,
                  undefined2 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *unaff_x21;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 **ppuVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined1 *puStack_1d0;
  undefined1 *apuStack_1c8 [43];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_1;
  func_0x000107c60ac8();
  lVar15 = *(long *)(unaff_x20 + 0x18);
  puVar18 = (undefined1 *)(lVar12 * *(long *)(lVar15 + 0x30));
  if (SUB168(SEXT816(lVar12) * SEXT816(*(long *)(lVar15 + 0x30)),8) != (long)puVar18 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e94f60);
    (*pcVar1)();
  }
  func_0x000107c60ab8();
  puVar6 = PTR___sypN_11034f1a8;
  puVar14 = (undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  ppuVar17 = (undefined1 **)(param_1 * *(long *)(lVar15 + 0x30));
  if (SUB168(SEXT816(param_1) * SEXT816(*(long *)(lVar15 + 0x30)),8) != (long)ppuVar17 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e94f64);
    (*pcVar1)();
  }
  lVar12 = 0x34323066;
  if (((param_2 & 1) != 0) && (*(long *)(lVar15 + 0x40) != 0)) {
    func_0x00010006c804();
    puVar3 = *(undefined1 **)(unaff_x20 + 0x70);
    if (puVar3 == (undefined1 *)0x0) {
LAB_101e94afc:
      puVar3 = (undefined1 *)0x112da90a0;
      func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
      puVar4 = puVar3;
      func_0x000107c61534();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined8 *)(puVar4 + 0x20) =
           *(undefined8 *)PTR__kCVPixelBufferPoolMinimumBufferCountKey_11034a3c8;
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x40);
      *(undefined **)(puVar4 + 0x40) = PTR___sSuN_11034e220;
      *(undefined8 *)(puVar4 + 0x28) = uVar11;
      func_0x000107c61174();
      puVar5 = puVar4;
      func_0x0001014c14a8();
      func_0x000107c61588(puVar4);
      FUN_101e96490(puVar4 + 0x20,0x112da90b0,&UNK_10d950510);
      func_0x000107c61534(puVar3,apuStack_1c8);
      *(undefined8 *)(puVar3 + 0x20) =
           *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
      puVar6 = PTR___ss6UInt32VN_11034f020;
      *(undefined8 *)(puVar3 + 0x18) = 0xc;
      *(undefined8 *)(puVar3 + 0x10) = 6;
      *(undefined4 *)(puVar3 + 0x28) = 0x34323066;
      uVar11 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
      *(undefined **)(puVar3 + 0x40) = puVar6;
      *(undefined8 *)(puVar3 + 0x48) = uVar11;
      puVar6 = PTR___sSiN_11034deb0;
      *(undefined1 **)(puVar3 + 0x50) = puVar18;
      uVar19 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
      *(undefined **)(puVar3 + 0x68) = puVar6;
      *(undefined8 *)(puVar3 + 0x70) = uVar19;
      *(undefined1 ***)(puVar3 + 0x78) = ppuVar17;
      uVar16 = *(undefined8 *)PTR__kCVPixelBufferCGImageCompatibilityKey_11034a380;
      *(undefined **)(puVar3 + 0x90) = puVar6;
      *(undefined8 *)(puVar3 + 0x98) = uVar16;
      puVar6 = PTR___sSbN_11034dd40;
      puVar3[0xa0] = 1;
      uVar13 = *(undefined8 *)PTR__kCVPixelBufferCGBitmapContextCompatibilityKey_11034a378;
      *(undefined **)(puVar3 + 0xb8) = puVar6;
      *(undefined8 *)(puVar3 + 0xc0) = uVar13;
      puVar3[200] = 1;
      uVar8 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
      *(undefined **)(puVar3 + 0xe0) = puVar6;
      *(undefined8 *)(puVar3 + 0xe8) = uVar8;
      func_0x000107c61174();
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar19);
      func_0x000107c61174(uVar16);
      func_0x000107c61174(uVar13);
      func_0x000107c61174(uVar8);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0();
      uVar11 = 0x112da99a0;
      func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
      *(undefined8 *)(puVar3 + 0x108) = uVar11;
      *(undefined **)(puVar3 + 0xf0) = puVar6;
      puVar7 = puVar3;
      func_0x0001014c14a8(puVar3);
      puVar6 = PTR___sypN_11034f1a8;
      func_0x000107c61588(puVar3);
      uVar11 = 0x112da90b0;
      func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
      func_0x000107c61408(puVar3 + 0x20,6,uVar11);
      puStack_1d0 = (undefined1 *)0x0;
      lVar12 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
      uVar11 = 0;
      func_0x0001014bede8(0);
      puVar3 = (undefined1 *)0x112da8f90;
      FUN_101e96234(0x112da8f90,&SUB_1014bede8,&UNK_10dcb8d78);
      puVar4 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar11,puVar6 + 8,puVar3);
      func_0x000107c6142c(puVar5);
      puVar5 = puVar7;
      func_0x000107c5f9dc(puVar7,uVar11,puVar6 + 8,puVar3);
      func_0x000107c6142c(puVar7);
      param_4 = &puStack_1d0;
      lVar15 = lVar12;
      func_0x000107c60ad4(lVar12,puVar4,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170();
      if (((int)lVar15 == 0) && (puVar4 = (undefined1 *)0x0, puStack_1d0 != (undefined1 *)0x0)) {
        uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
        *(undefined1 **)(unaff_x20 + 0x70) = puStack_1d0;
        puVar3 = puStack_1d0;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar11);
        *(undefined1 **)(unaff_x20 + 0x78) = puVar18;
        *(undefined1 ***)(unaff_x20 + 0x80) = ppuVar17;
        func_0x000107c61170(puStack_1d0);
        func_0x000100070bfc();
        puVar14 = (undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      }
      else {
        FUN_101e95c20();
        unaff_x21 = &UNK_1106e9230;
        param_4 = (undefined1 **)0x0;
        func_0x000107c613f8(&UNK_1106e9230,puVar4,0);
        *puVar4 = 0xb;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        func_0x000107c61654();
        func_0x000107c61170(puStack_1d0);
        func_0x000100070bfc();
        puVar14 = (undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      }
    }
    else {
      if ((*(undefined1 **)(unaff_x20 + 0x78) != puVar18) ||
         (*(undefined1 ***)(unaff_x20 + 0x80) != ppuVar17)) {
        *(undefined8 *)(unaff_x20 + 0x70) = 0;
        func_0x000107c61170();
        goto LAB_101e94afc;
      }
      func_0x000107c61174();
      func_0x000100070bfc();
    }
    if (unaff_x21 == (undefined *)0x0) {
      apuStack_1c8[0] = (undefined1 *)0x0;
      iVar2 = (int)*puVar14;
      ppuVar10 = apuStack_1c8;
      puVar4 = puVar3;
      func_0x000107c60ad8();
      func_0x000107c61170(puVar3);
      if (iVar2 == 0) {
        if (apuStack_1c8[0] != (undefined1 *)0x0) goto LAB_101e94f18;
      }
      else {
        func_0x000107c61170();
      }
    }
    else {
      func_0x000107c614ac(unaff_x21);
    }
  }
  apuStack_1c8[0] = (undefined1 *)0x0;
  iVar2 = (int)*puVar14;
  if (lRam000000011349fee0 != -1) {
    func_0x000107c61568(0x11349fee0,FUN_101e92b38);
  }
  lVar12 = lRam0000000113804558;
  uVar8 = 0;
  func_0x0001014bede8(0);
  uVar11 = 0x112da8f90;
  FUN_101e96234(0x112da8f90,&SUB_1014bede8,&UNK_10dcb8d78);
  func_0x000107c5f9dc(lVar12,uVar8,puVar6 + 8,uVar11);
  param_6 = SUB82(apuStack_1c8,0);
  param_4 = (undefined1 **)0x34323066;
  param_5 = lVar12;
  func_0x000107c60aa0();
  func_0x000107c61170(lVar12);
  puVar4 = puVar18;
  ppuVar10 = ppuVar17;
  if (iVar2 != 0 || apuStack_1c8[0] == (undefined1 *)0x0) {
    puVar4 = apuStack_1c8[0];
    FUN_101e95c20();
    ppuVar10 = (undefined1 **)0x0;
    param_4 = (undefined1 **)0x0;
    func_0x000107c613f8(&UNK_1106e9230);
    *puVar4 = 6;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    func_0x000107c61654();
    func_0x000107c61170(apuStack_1c8[0]);
  }
LAB_101e94f18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(undefined8 *)(lVar12 + 0x30) = param_7;
    *(undefined8 *)(lVar12 + 0x38) = param_8;
    *(undefined2 *)(lVar12 + 0x50) = param_6;
    *(undefined1 ***)(lVar12 + 0x20) = param_4;
    *(long *)(lVar12 + 0x28) = param_5;
    *(undefined1 **)(lVar12 + 0x10) = puVar4;
    *(undefined1 ***)(lVar12 + 0x18) = ppuVar10;
    lVar15 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar9 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(lVar12 + 0x40) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e94ff0,0,0);
    return;
  }
  return;
}



/* Entry: 101e94f80; end: 101e94fef;  */

void FUN_101e94f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined2 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined2 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e94ff0,0,0);
  return;
}



/* Entry: 101e94ff0; end: 101e951ab;  */

void FUN_101e94ff0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined2 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar8 = 0;
  func_0x000107c5fd0c();
  pcVar11 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar11)(uVar4,1,1,lVar8);
  puVar9 = &UNK_110492038;
  func_0x000107c613fc(&UNK_110492038,0x3a,7);
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x20) = uVar3;
  *(undefined8 *)(puVar9 + 0x28) = uVar6;
  *(undefined8 *)(puVar9 + 0x30) = uVar2;
  puVar9[0x38] = (byte)uVar7 & 1;
  puVar9[0x39] = (byte)((ushort)uVar7 >> 8) & 1;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar2);
  FUN_101e9558c(uVar4,&UNK_10da1e940,puVar9);
  FUN_101e96490(uVar4,0x112d453c8,&UNK_10d90ac60);
  (*pcVar11)(uVar4,1,1,lVar8);
  puVar9 = &UNK_110492060;
  func_0x000107c613fc(&UNK_110492060,0x38,7);
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x18) = 0;
  *(undefined8 *)(puVar9 + 0x20) = uVar1;
  *(undefined8 *)(puVar9 + 0x28) = uVar2;
  *(undefined8 *)(puVar9 + 0x30) = uVar5;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar5);
  FUN_101e9558c(uVar4,&UNK_10da1e948,puVar9);
  FUN_101e96490(uVar4,0x112d453c8,&UNK_10d90ac60);
  plVar10 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101e951ac;
                    /* WARNING: Could not recover jumptable at 0x000101e951a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101a2c0b4(0,0);
  return;
}



/* Entry: 101e951ac; end: 101e951ef;  */

void FUN_101e951ac(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e951ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101e951f0; end: 101e9520f;  */

void FUN_101e951f0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined2 in_w6;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x28) = in_w6;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e95210,0,0);
  return;
}



/* Entry: 101e95210; end: 101e952a7;  */

/* WARNING: Removing unreachable block (ram,0x000101e95284) */

void FUN_101e95210(void)

{
  undefined8 uVar1;
  ushort uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(ushort *)(unaff_x22 + 0x28);
  func_0x000107c60ad0(uVar3,1);
  func_0x000107c60ad0(uVar1,0);
  FUN_101e952a8(uVar3,uVar1,uVar2 & 1);
  func_0x000107c60ae0(uVar1,0);
  func_0x000107c60ae0(uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x000101e952a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e952a8; end: 101e9558b;  */

void FUN_101e952a8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined1 *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 **ppuVar14;
  long lVar15;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar16;
  undefined *unaff_x21;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  ppuVar5 = (undefined8 **)0xd00000000000002a;
  func_0x000100029b28(0xd00000000000002a,0x800000010f017390);
  func_0x000107c61170(uVar4);
  puVar6 = param_1;
  func_0x000107c60acc(param_1,1);
  puVar12 = param_1;
  func_0x000107c60abc(param_1,1);
  puVar7 = param_1;
  func_0x000107c60ab4(param_1,1);
  puVar8 = param_1;
  func_0x000107c60aac(param_1,1);
  ppuVar11 = ppuVar5;
  if (puVar8 != (undefined8 *)0x0) {
    if ((long)((ulong)puVar12 | (ulong)puVar6) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e95584);
      (*pcVar2)();
    }
    param_1 = param_2;
    puStack_a0 = puVar8;
    puStack_98 = puVar12;
    puStack_90 = puVar6;
    puStack_88 = puVar7;
    func_0x000107c60acc(param_2,1);
    puVar6 = param_2;
    func_0x000107c60abc(param_2,1);
    puVar12 = param_2;
    func_0x000107c60ab4(param_2,1);
    puVar7 = param_2;
    func_0x000107c60aac(param_2,1);
    if (puVar7 != (undefined8 *)0x0) {
      if ((long)((ulong)puVar6 | (ulong)param_1) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e95588);
        (*pcVar2)();
      }
      puStack_c0 = puVar7;
      puStack_b8 = puVar6;
      puStack_b0 = param_1;
      puStack_a8 = puVar12;
      if (((param_3 & 1) == 0) || (*(char *)(*(long *)(unaff_x20 + 0x18) + 0x38) != '\x01')) {
        ppuVar14 = (undefined8 **)0x0;
      }
      else {
        ppuVar9 = &puStack_a0;
        func_0x000107c616c4(ppuVar9,&puStack_c0,0,0x80);
        ppuVar14 = *(undefined8 ***)(unaff_x20 + 0x30);
        if (ppuVar14 != (undefined8 **)0x0) {
          if ((*(char *)(unaff_x20 + 0x28) != '\x01') &&
             (*(undefined8 ***)(unaff_x20 + 0x20) == ppuVar9)) goto LAB_101e954b0;
          func_0x000107c61590(ppuVar14,0xffffffffffffffff,0xffffffffffffffff);
        }
        ppuVar14 = ppuVar9;
        func_0x000107c610a0();
        *(undefined8 ***)(unaff_x20 + 0x30) = ppuVar14;
        ppuVar1 = (undefined8 **)0x0;
        if (ppuVar14 != (undefined8 **)0x0) {
          ppuVar1 = ppuVar9;
        }
        *(undefined8 ***)(unaff_x20 + 0x20) = ppuVar1;
        *(bool *)(unaff_x20 + 0x28) = ppuVar14 == (undefined8 **)0x0;
      }
LAB_101e954b0:
      ppuVar9 = &puStack_a0;
      func_0x000107c616c4(ppuVar9,&puStack_c0,ppuVar14,0);
      if (ppuVar9 != (undefined8 **)0x0) {
        ppuVar11 = ppuVar9;
        func_0x000101e962b4();
        ppuVar14 = ppuVar11;
        FUN_101e95c20();
        unaff_x21 = &UNK_1106e9230;
        func_0x000107c613f8(&UNK_1106e9230,ppuVar14,0,0);
        *(undefined1 *)ppuVar14 = 8;
        ppuVar14[1] = ppuVar9;
        ppuVar14[4] = (undefined8 *)&UNK_1106e9338;
        ppuVar14[5] = ppuVar11;
        func_0x000107c61654();
        ppuVar11 = ppuVar9;
      }
      goto LAB_101e95518;
    }
  }
  puVar10 = (undefined1 *)0x0;
  FUN_101e95c20();
  unaff_x21 = &UNK_1106e9230;
  func_0x000107c613f8(&UNK_1106e9230,puVar10,0,0);
  *puVar10 = 7;
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined8 *)(puVar10 + 8) = 0;
  *(undefined8 *)(puVar10 + 0x20) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(undefined8 *)(puVar10 + 0x28) = 0;
  func_0x000107c61654();
LAB_101e95518:
  ppuVar14 = &puStack_a0;
  lVar15 = 0;
  func_0x000107c61428(puVar3,ppuVar14,0,0);
  puVar12 = (undefined8 *)*puVar3;
  func_0x000107c61174();
  func_0x000100069b5c(ppuVar5);
  puVar6 = puVar12;
  func_0x000107c61170(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_d8 = FUN_101e9558c;
  lVar13 = 0x112d453c8;
  puStack_120 = param_1;
  puStack_118 = param_2;
  ppuStack_110 = ppuVar5;
  ppuStack_108 = ppuVar11;
  puStack_100 = puVar3;
  puStack_f8 = unaff_x21;
  puStack_f0 = puVar12;
  puStack_e8 = unaff_x21;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_160 + -extraout_x8;
  func_0x000101e964d0(puVar6,puVar16,0x112d453c8,&UNK_10d90ac60);
  lVar13 = 0;
  func_0x000107c5fd0c();
  lVar19 = *(long *)(lVar13 + -8);
  puVar10 = puVar16;
  (**(code **)(lVar19 + 0x30))(puVar16,1,lVar13);
  if ((int)puVar10 == 1) {
    func_0x000101e96490(puVar16,0x112d453c8,&UNK_10d90ac60);
    uVar17 = 0x3100;
    lVar13 = *(long *)(lVar15 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar19 + 8))(puVar16,lVar13);
    uVar17 = (ulong)puVar10 & 0xff | 0x3100;
    lVar13 = *(long *)(lVar15 + 0x10);
  }
  if (lVar13 == 0) {
    lVar19 = 0;
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(lVar15 + 0x18);
    lVar19 = lVar13;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar13);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar13);
  }
  uStack_148 = *puVar12;
  puStack_150 = (undefined8 *)0x0;
  if (lVar18 != 0 || lVar19 != 0) {
    uStack_140 = 0;
    uStack_138 = 0;
    puStack_150 = &uStack_140;
    lStack_130 = lVar19;
    lStack_128 = lVar18;
  }
  uStack_158 = 1;
  func_0x000107c615bc(uVar17,&uStack_158,PTR___sytN_11034f1b0 + 8,ppuVar14,lVar15);
  func_0x000107c61574();
  return;
}



/* Entry: 101e9558c; end: 101e9572f;  */

void FUN_101e9558c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  func_0x000101e964d0(param_1,puVar3,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101e96490(puVar3,0x112d453c8,&UNK_10d90ac60);
    uVar4 = 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar6 + 8))(puVar3,lVar1);
    uVar4 = (ulong)puVar2 & 0xff | 0x3100;
    lVar1 = *(long *)(param_3 + 0x10);
  }
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x18);
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  uStack_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar5 != 0 || lVar6 != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_80 = &uStack_70;
    lStack_60 = lVar6;
    lStack_58 = lVar5;
  }
  uStack_88 = 1;
  func_0x000107c615bc(uVar4,&uStack_88,PTR___sytN_11034f1b0 + 8,param_2,param_3);
  func_0x000107c61574();
  return;
}



/* Entry: 101e95730; end: 101e9574b;  */

void FUN_101e95730(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9574c,0,0);
  return;
}



/* Entry: 101e9574c; end: 101e957c3;  */

/* WARNING: Removing unreachable block (ram,0x000101e95774) */

void FUN_101e9574c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_101e936c0();
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e957c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e957c4; end: 101e95827;  */

void FUN_101e957c4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x8e) = *(undefined1 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101e95858;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101e9595c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101e95828; end: 101e95857;  */

void FUN_101e95828(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x8d);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101e95858;
  }
  else {
    *(long *)(unaff_x22 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101e9595c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101e95858; end: 101e9595b;  */

void FUN_101e95858(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x8e) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(ulong *)(unaff_x22 + 0x60);
    func_0x000107c5fd8c(uVar2,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar2 & 1) != 0) {
      if (lVar1 != 0) {
        func_0x000107c61654();
      }
                    /* WARNING: Could not recover jumptable at 0x000101e958c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x70) = lVar1;
  }
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    uVar4 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101e957c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101e95828,unaff_x22 + 0x10);
  return;
}



/* Entry: 101e9595c; end: 101e95a67;  */

void FUN_101e9595c(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x80);
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    func_0x000107c614ac(lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x70);
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c5fd8c(uVar1,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
    if (lVar4 != 0) {
      func_0x000107c61654();
    }
                    /* WARNING: Could not recover jumptable at 0x000101e959cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x70) = lVar4;
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101e957c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101e95828,unaff_x22 + 0x10);
  return;
}



/* Entry: 101e95a68; end: 101e95b03;  */

void FUN_101e95a68(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ushort uVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  bVar4 = *(byte *)(unaff_x20 + 0x28);
  uVar8 = 0x100;
  if (*(char *)(unaff_x20 + 0x29) == '\0') {
    uVar8 = 0;
  }
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101e95b04;
  plVar7[6] = lVar1;
  plVar7[7] = lVar3;
  *(ushort *)(plVar7 + 10) = uVar8 | bVar4;
  plVar7[4] = lVar2;
  plVar7[5] = lVar9;
  plVar7[2] = param_2;
  plVar7[3] = lVar5;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[8] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e94ff0,0,0);
  return;
}



/* Entry: 101e95b04; end: 101e95b3f;  */

void FUN_101e95b04(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e95b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e95b40; end: 101e95bbf;  */

void FUN_101e95b40(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  ushort uVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  bVar3 = *(byte *)(unaff_x20 + 0x38);
  uVar5 = 0x100;
  if (*(char *)(unaff_x20 + 0x39) == '\0') {
    uVar5 = 0;
  }
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e96668;
  *(ushort *)(plVar4 + 5) = uVar5 | bVar3;
  plVar4[3] = lVar2;
  plVar4[4] = lVar6;
  plVar4[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e95210,0,0);
  return;
}



/* Entry: 101e95bc0; end: 101e95c1f;  */

void FUN_101e95bc0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e9666c;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9574c,0,0);
  return;
}



/* Entry: 101e95c20; end: 101e95c5f;  */

void FUN_101e95c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65a90;
  func_0x000107c61520(&UNK_10dc65a90,&UNK_1106e9230);
  puRam0000000112e35408 = puVar1;
  return;
}



/* Entry: 101e95c60; end: 101e95cf7;  */

/* WARNING: Removing unreachable block (ram,0x000101e95c9c) */

undefined8 FUN_101e95c60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  FUN_101e932a8();
  uVar2 = param_1;
  if (unaff_x21 == 0) {
    FUN_101e933ac(param_1);
    uVar1 = param_1;
    FUN_101e936c0();
    uVar2 = uVar1;
    FUN_101e93bc8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return uVar2;
}



/* Entry: 101e95cf8; end: 101e95d47;  */

void FUN_101e95cf8(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x220;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e95d48;
  plVar1[0x33] = param_1;
  plVar1[0x34] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e93f64,0,0);
  return;
}



/* Entry: 101e95d48; end: 101e95d8f;  */

void FUN_101e95d48(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e95d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e95d90; end: 101e95ddb;  */

void FUN_101e95d90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10da1e914;
  func_0x000107c61520(&UNK_10da1e914,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_11034f618)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 101e95ddc; end: 101e95e17;  */

void FUN_101e95ddc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da1e914;
  func_0x000107c61520(&UNK_10da1e914,param_1);
  func_0x000107c5f0a8(param_1,puVar1);
  return;
}



/* Entry: 101e95e18; end: 101e95e5f;  */

void FUN_101e95e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da1e914;
  func_0x000107c61520(&UNK_10da1e914);
  func_0x000107c5f0a4(param_1,param_2,puVar1);
  return;
}



/* Entry: 101e95e60; end: 101e95e6b;  */

void FUN_101e95e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_78 [72];
  
  puVar1 = &UNK_10da1e914;
  func_0x000107c6068c(auStack_78);
  func_0x000107c61520(&UNK_10da1e914,param_2);
  func_0x000107c5f0a4(auStack_78,param_2,puVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e95e6c; end: 101e95ecb;  */

void FUN_101e95e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78);
  func_0x000107c61520(param_4,param_2);
  func_0x000107c5f0a4(auStack_78,param_2,param_4);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e95ecc; end: 101e9606b;  */

/* WARNING: Possible PIC construction at 0x000101e960c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e96104: Changing call to branch */

void FUN_101e95ecc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x000107c60ac8();
  uVar3 = param_1;
  func_0x000107c60ab8();
  uVar4 = param_1;
  func_0x000107c60ab0();
  func_0x000107c60aa8();
  if (param_1 == 0) {
LAB_101e95fec:
    puVar8 = (ulong *)0x0;
    FUN_101e95c20();
    puVar9 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar8,0,0);
    *(undefined1 *)puVar8 = 7;
    puVar8[2] = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[5] = 0;
  }
  else {
    if ((long)(uVar3 | uVar2) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e96064);
      (*pcVar1)();
    }
    uVar5 = param_2;
    uStack_68 = param_1;
    uStack_60 = uVar3;
    uStack_58 = uVar2;
    uStack_50 = uVar4;
    func_0x000107c60acc(param_2,0);
    uVar2 = param_2;
    func_0x000107c60abc(param_2,0);
    uVar3 = param_2;
    func_0x000107c60ab4(param_2,0);
    func_0x000107c60aac(param_2,0);
    if (param_2 == 0) goto LAB_101e95fec;
    if ((long)(uVar2 | uVar5) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e96068);
      (*pcVar1)();
    }
    puVar6 = &uStack_68;
    puVar8 = &uStack_88;
    uStack_88 = param_2;
    uStack_80 = uVar2;
    uStack_78 = uVar5;
    uStack_70 = uVar3;
    func_0x000107c616bc(puVar6,puVar8,1,0);
    puVar9 = (undefined *)0x0;
    if (puVar6 == (ulong *)0x0) goto LAB_101e9602c;
    puVar7 = puVar6;
    FUN_101e96274();
    puVar8 = puVar7;
    FUN_101e95c20();
    puVar9 = &UNK_1106e9230;
    func_0x000107c613f8(&UNK_1106e9230,puVar8,0,0);
    *(undefined1 *)puVar8 = 9;
    puVar8[1] = (ulong)puVar6;
    puVar8[4] = (ulong)&UNK_1106e9360;
    puVar8[5] = (ulong)puVar7;
  }
  func_0x000107c61654();
LAB_101e9602c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  uVar11 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
  puVar10 = puVar9;
  func_0x000107c60a84();
  if (puVar10 == (undefined *)0x0) {
    uVar11 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
    puVar10 = puVar9;
    func_0x000107c60a84(puVar9,uVar11,0);
    if (puVar10 == (undefined *)0x0) {
      uVar11 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
      func_0x000107c60a84(puVar9,uVar11,0);
      if (puVar9 == (undefined *)0x0) {
        return;
      }
      func_0x000107c615f0();
      func_0x000107c60a8c(puVar8,uVar11,puVar9,1);
    }
    else {
      func_0x000107c615f0();
      func_0x000107c60a8c(puVar8,uVar11,puVar10,1);
      puVar9 = puVar10;
    }
  }
  else {
    func_0x000107c615f0();
    func_0x000107c60a8c(puVar8,uVar11,puVar10,1);
    puVar9 = puVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar9);
  return;
}



/* Entry: 101e9606c; end: 101e96167;  */

/* WARNING: Possible PIC construction at 0x000101e960c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e96104: Changing call to branch */

void FUN_101e9606c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__kCVImageBufferColorPrimariesKey_11034a2b8;
  lVar1 = param_1;
  func_0x000107c60a84(param_1,uVar2,0);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)PTR__kCVImageBufferTransferFunctionKey_11034a310;
    lVar1 = param_1;
    func_0x000107c60a84(param_1,uVar2,0);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
      func_0x000107c60a84(param_1,uVar2,0);
      if (param_1 == 0) {
        return;
      }
      func_0x000107c615f0();
      func_0x000107c60a8c(param_2,uVar2,param_1,1);
    }
    else {
      func_0x000107c615f0();
      func_0x000107c60a8c(param_2,uVar2,lVar1,1);
      param_1 = lVar1;
    }
  }
  else {
    func_0x000107c615f0();
    func_0x000107c60a8c(param_2,uVar2,lVar1,1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101e96168; end: 101e961c7;  */

void FUN_101e96168(void)

{
  func_0x000107c61168(&PTR_PTR_112e35450);
  return;
}



/* Entry: 101e961c8; end: 101e961db;  */

void FUN_101e961c8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110492008;
  if (lRam0000000112e35678 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e35678 = param_1;
  }
  return;
}



/* Entry: 101e961dc; end: 101e96233;  */

void FUN_101e961dc(void)

{
  FUN_101e96234(0x112e35680,FUN_101e961c8,&UNK_10da1e8a4);
  return;
}



/* Entry: 101e96234; end: 101e96273;  */

void FUN_101e96234(long *param_1,code *param_2,long param_3)

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



/* Entry: 101e96274; end: 101e962f3;  */

void FUN_101e96274(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e35690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc65c1c;
  func_0x000107c61520(&DAT_10dc65c1c,&UNK_1106e9360);
  puRam0000000112e35690 = puVar1;
  return;
}



/* Entry: 101e962f4; end: 101e96337;  */

void FUN_101e962f4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101e96338; end: 101e96373;  */

void FUN_101e96338(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e96374; end: 101e963f3;  */

void FUN_101e96374(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  ushort uVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  bVar3 = *(byte *)(unaff_x20 + 0x38);
  uVar5 = 0x100;
  if (*(char *)(unaff_x20 + 0x39) == '\0') {
    uVar5 = 0;
  }
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101e96670;
  *(ushort *)(plVar4 + 5) = uVar5 | bVar3;
  plVar4[3] = lVar2;
  plVar4[4] = lVar6;
  plVar4[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e95210,0,0);
  return;
}



/* Entry: 101e963f4; end: 101e9642f;  */

void FUN_101e963f4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e96430; end: 101e9648f;  */

void FUN_101e96430(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101e96674;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9574c,0,0);
  return;
}



/* Entry: 101e96490; end: 101e96567;  */

undefined8 FUN_101e96490(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e96568; end: 101e96667;  */

void FUN_101e96568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc65b08;
  func_0x000107c61520(&DAT_10dc65b08,&UNK_1106e92e8);
  puRam0000000112e356a8 = puVar1;
  return;
}



/* Entry: 101e96668; end: 101e96677;  */

void FUN_101e96668(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e95b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e96678; end: 101e966bf;  */

void FUN_101e96678(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10da1eac0,0x147,2);
  uRam0000000113804568 = uStack_38;
  uRam0000000113804560 = uStack_40;
  uRam0000000113804578 = uStack_28;
  uRam0000000113804570 = uStack_30;
  uRam0000000113804588 = uStack_18;
  uRam0000000113804580 = uStack_20;
  return;
}



/* Entry: 101e966c0; end: 101e967eb;  */

/* WARNING: Removing unreachable block (ram,0x000101e967e8) */

void FUN_101e966c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x78);
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x78);
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x30);
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x78);
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x18);
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x138);
        break;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x78);
        break;
      default:
        goto LAB_101e967d8;
      }
      (*pcVar3)();
LAB_101e967d8:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101e967ec; end: 101e969d3;  */

void FUN_101e967ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 8))(3,param_2,param_3), unaff_x21 == 0)))) &&
      ((((unaff_x20[3] == 0 ||
         ((**(code **)(param_3 + 0x28))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)) &&
        (((unaff_x20[4] == 0 ||
          ((**(code **)(param_3 + 0x28))(unaff_x20[4],5,param_2,param_3), unaff_x21 == 0)) &&
         ((unaff_x20[5] == 0 || ((**(code **)(param_3 + 8))(6,param_2,param_3), unaff_x21 == 0))))))
       && (((unaff_x20[6] == 0 || ((**(code **)(param_3 + 8))(7,param_2,param_3), unaff_x21 == 0))
           && ((*(long *)(unaff_x20 + 8) == 0 ||
               ((**(code **)(param_3 + 0x10))(8,param_2,param_3), unaff_x21 == 0)))))))) &&
     ((((unaff_x20[10] == 0 ||
        ((**(code **)(param_3 + 0x28))(unaff_x20[10],9,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[0xb] == 0 || ((**(code **)(param_3 + 8))(10,param_2,param_3), unaff_x21 == 0))))
      && ((((char)unaff_x20[0xc] != '\x01' ||
           ((**(code **)(param_3 + 0x68))(1,0xb,param_2,param_3), unaff_x21 == 0)) &&
          ((unaff_x20[0xd] == 0 ||
           ((**(code **)(param_3 + 0x28))(unaff_x20[0xd],0xc,param_2,param_3), unaff_x21 == 0)))))))
     ) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0xe),*(undefined8 *)(unaff_x20 + 0x10),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101e969d4; end: 101e96a1f;  */

void FUN_101e969d4(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 101e96a20; end: 101e96a4f;  */

undefined1  [16] FUN_101e96a20(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 101e96a50; end: 101e96a83;  */

void FUN_101e96a50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 101e96a84; end: 101e96a97;  */

undefined1  [16] FUN_101e96a84(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x101e96a94;
  return auVar1;
}



/* Entry: 101e96a98; end: 101e96abf;  */

void FUN_101e96a98(void)

{
  FUN_101e966c0();
  return;
}



/* Entry: 101e96ac0; end: 101e96ac3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101e96ac0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101e96ac4; end: 101e96afb;  */

uint FUN_101e96ac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101e97214();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101e96afc; end: 101e96b53;  */

uint FUN_101e96afc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_101e96d9c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101e96b54; end: 101e96bf3;  */

/* WARNING: Possible PIC construction at 0x000101e96ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e96bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e96ba4) */
/* WARNING: Removing unreachable block (ram,0x000101e96bb4) */

void FUN_101e96b54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e356c8 != -1) {
    func_0x000107c61568(0x112e356c8,FUN_101e96678);
  }
  uVar5 = uRam0000000113804588;
  uVar4 = uRam0000000113804580;
  uVar3 = uRam0000000113804578;
  uVar2 = uRam0000000113804570;
  uVar1 = uRam0000000113804568;
  *param_1 = uRam0000000113804560;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101e96bf4; end: 101e96c2f;  */

void FUN_101e96bf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e356e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e356e8,&UNK_10da1eab8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101e96c30; end: 101e96d43;  */

void FUN_101e96c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e96d44; end: 101e96d9b;  */

uint FUN_101e96d44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_101e96d9c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101e96d9c; end: 101e96e77;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101e96d9c(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
       ((param_1[3] != param_2[3] || (param_1[4] != param_2[4])))) || (param_1[5] != param_2[5])) ||
     (((param_1[6] != param_2[6] || (*(double *)(param_1 + 8) != *(double *)(param_2 + 8))) ||
      ((param_1[10] != param_2[10] ||
       (((param_1[0xb] != param_2[0xb] ||
         (((*(byte *)(param_1 + 0xc) ^ *(byte *)(param_2 + 0xc)) & 1) != 0)) ||
        (param_1[0xd] != param_2[0xd])))))))) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + 0xe);
  pbVar25 = *(byte **)(param_1 + 0x10);
  lVar24 = *(long *)(param_2 + 0xe);
  uVar16 = *(ulong *)(param_2 + 0x10);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101e96e78; end: 101e96eb7;  */

void FUN_101e96e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1e9dc;
  func_0x000107c61520(&UNK_10da1e9dc,&UNK_1104921f8);
  puRam0000000112e356d0 = puVar1;
  return;
}



/* Entry: 101e96eb8; end: 101e96edb;  */

void FUN_101e96eb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e96edc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101e96edc; end: 101e96f1b;  */

void FUN_101e96edc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1e9b4;
  func_0x000107c61520(&UNK_10da1e9b4,&UNK_1104921f8);
  puRam0000000112e356d8 = puVar1;
  return;
}



/* Entry: 101e96f1c; end: 101e96f47;  */

void FUN_101e96f1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101e96e78();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101e7e2b0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101e96f48; end: 101e96f4b;  */

void FUN_101e96f48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ea1c;
  func_0x000107c61520(&UNK_10da1ea1c,&UNK_1104921f8);
  puRam0000000112e356e0 = puVar1;
  return;
}



/* Entry: 101e96f4c; end: 101e96f8b;  */

void FUN_101e96f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1ea1c;
  func_0x000107c61520(&UNK_10da1ea1c,&UNK_1104921f8);
  puRam0000000112e356e0 = puVar1;
  return;
}



/* Entry: 101e96f8c; end: 101e96fb7;  */

long FUN_101e96f8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101e96fb8; end: 101e96fc3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101e96fb8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101e96fc4; end: 101e970db;  */

undefined8 * FUN_101e96fc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  uVar2 = param_2[7];
  uVar1 = param_2[8];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[7] = uVar2;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 101e970dc; end: 101e9715b;  */

undefined8 * FUN_101e970dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101e9715c; end: 101e97213;  */

int FUN_101e9715c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0xc)) {
    uVar1 = *(byte *)(param_1 + 0xc) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101e97214; end: 101e97253;  */

void FUN_101e97214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e356f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da1e988;
  func_0x000107c61520(&DAT_10da1e988,&UNK_1104921f8);
  puRam0000000112e356f0 = puVar1;
  return;
}



/* Entry: 101e97254; end: 101e9726f;  */

void FUN_101e97254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_3;
  *(undefined8 *)(unaff_x22 + 0x160) = param_4;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e97270,0,0);
  return;
}



/* Entry: 101e97270; end: 101e974d3;  */

void FUN_101e97270(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x000107c5fd64();
  lVar7 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x120,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar3 = lVar7 + 0x50;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x168) = lVar3;
    func_0x000107c61574(lVar7);
    if (lVar3 != 0) {
      plVar4 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x170) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101e974d4;
      lVar7 = *(long *)(unaff_x22 + 0x158);
      plVar4[0xd] = *(long *)(unaff_x22 + 0x160);
      plVar4[0xe] = lVar3;
      plVar4[0xb] = unaff_x22 + 0x90;
      plVar4[0xc] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101e9a614,0,0);
      return;
    }
  }
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  func_0x000107c5fd64();
  func_0x000101e99498(unaff_x22 + 0x90,unaff_x22 + 0xe0);
  if (*(long *)(unaff_x22 + 0xf8) == 0) {
    puVar5 = (undefined1 *)(unaff_x22 + 0xe0);
    FUN_101e99450();
    FUN_101e6f23c();
    puVar6 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar5,0,0);
    *puVar5 = 2;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0;
    func_0x000107c61654();
    FUN_101e99450(unaff_x22 + 0x90);
    lVar7 = *(long *)(unaff_x22 + 0x150);
    func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x108,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61648();
    if (lVar7 == 0) {
      func_0x000107c614ac(puVar6);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
      *(undefined **)(unaff_x22 + 0x30) = &UNK_1106e9a18;
      lVar3 = lVar7;
      FUN_101e6fc54();
      *(long *)(unaff_x22 + 0x38) = lVar3;
      func_0x000101e6fc94();
      *(long *)(unaff_x22 + 0x40) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
      *(undefined **)(unaff_x22 + 0x28) = puVar6;
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined1 *)(unaff_x22 + 0x48) = 2;
      func_0x000107c61434(uVar2);
      func_0x000107c614b0(puVar6);
      FUN_101e977d4(unaff_x22 + 0x10);
      func_0x000107c61574(lVar7);
      func_0x000107c614ac(puVar6);
      func_0x000101e98bd0(unaff_x22 + 0x10);
    }
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x150);
    FUN_101960034(unaff_x22 + 0xe0,unaff_x22 + 0xb8);
    func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x138,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61648();
    if (lVar7 != 0) {
      FUN_101e926a0(unaff_x22 + 0xb8,unaff_x22 + 0x50);
      *(undefined1 *)(unaff_x22 + 0x88) = 1;
      FUN_101e977d4(unaff_x22 + 0x50);
      func_0x000107c61574(lVar7);
      func_0x000101e98bd0(unaff_x22 + 0x50);
    }
    FUN_101e9957c(unaff_x22 + 0xb8);
    FUN_101e99450(unaff_x22 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x000101e973fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e974d4; end: 101e97537;  */

void FUN_101e974d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x168));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e97538;
  }
  else {
    pcVar1 = FUN_101e976f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e97538; end: 101e976f7;  */

void FUN_101e97538(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x22;
  
  puVar6 = *(undefined **)(unaff_x22 + 0x178);
  func_0x000107c5fd64();
  if (puVar6 == (undefined *)0x0) {
    func_0x000101e99498(unaff_x22 + 0x90,unaff_x22 + 0xe0);
    if (*(long *)(unaff_x22 + 0xf8) != 0) {
      lVar5 = *(long *)(unaff_x22 + 0x150);
      FUN_101960034(unaff_x22 + 0xe0,unaff_x22 + 0xb8);
      func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x138,0,0);
      lVar5 = lVar5 + 0x10;
      func_0x000107c61648();
      if (lVar5 != 0) {
        FUN_101e926a0(unaff_x22 + 0xb8,unaff_x22 + 0x50);
        *(undefined1 *)(unaff_x22 + 0x88) = 1;
        FUN_101e977d4(unaff_x22 + 0x50);
        func_0x000107c61574(lVar5);
        func_0x000101e98bd0(unaff_x22 + 0x50);
      }
      FUN_101e9957c(unaff_x22 + 0xb8);
      FUN_101e99450(unaff_x22 + 0x90);
      goto LAB_101e97690;
    }
    puVar4 = (undefined1 *)(unaff_x22 + 0xe0);
    FUN_101e99450();
    FUN_101e6f23c();
    puVar6 = &UNK_1106e9908;
    func_0x000107c613f8(&UNK_1106e9908,puVar4,0,0);
    *puVar4 = 2;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x30) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    func_0x000107c61654();
  }
  FUN_101e99450(unaff_x22 + 0x90);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x108,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c614ac(puVar6);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined **)(unaff_x22 + 0x30) = &UNK_1106e9a18;
    lVar3 = lVar5;
    FUN_101e6fc54();
    *(long *)(unaff_x22 + 0x38) = lVar3;
    func_0x000101e6fc94();
    *(long *)(unaff_x22 + 0x40) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
    *(undefined **)(unaff_x22 + 0x28) = puVar6;
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    *(undefined1 *)(unaff_x22 + 0x48) = 2;
    func_0x000107c61434(uVar2);
    func_0x000107c614b0(puVar6);
    FUN_101e977d4(unaff_x22 + 0x10);
    func_0x000107c61574(lVar5);
    func_0x000107c614ac(puVar6);
    func_0x000101e98bd0(unaff_x22 + 0x10);
  }
LAB_101e97690:
                    /* WARNING: Could not recover jumptable at 0x000101e976a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e976f8; end: 101e977d3;  */

void FUN_101e976f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined1 *puVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x108,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c614ac(uVar4);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined **)(unaff_x22 + 0x30) = &UNK_1106e9a18;
    lVar3 = lVar5;
    FUN_101e6fc54();
    *(long *)(unaff_x22 + 0x38) = lVar3;
    func_0x000101e6fc94();
    puVar6 = (undefined1 *)(unaff_x22 + 0x10);
    *puVar6 = 1;
    *(long *)(unaff_x22 + 0x40) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
    *(undefined1 *)(unaff_x22 + 0x48) = 2;
    func_0x000107c61434(uVar2);
    func_0x000107c614b0(uVar4);
    FUN_101e977d4(puVar6);
    func_0x000107c61574(lVar5);
    func_0x000107c614ac(uVar4);
    func_0x000101e98bd0(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000101e977d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e977d4; end: 101e9796f;  */

void FUN_101e977d4(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 auStack_a0 [56];
  char cStack_68;
  
  lVar5 = param_1;
  func_0x00010006c804();
  func_0x000101e9811c();
  uVar7 = *(ulong *)(lVar5 + 0x10);
  if (uVar7 == 0) {
    func_0x000107c6142c(lVar5);
  }
  else {
    uVar8 = 0;
    pcVar9 = (char *)(lVar5 + 0x20);
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e97970);
        (*pcVar4)();
      }
      cVar2 = *pcVar9;
      cVar3 = pcVar9[1];
      pcVar4 = *(code **)(pcVar9 + 8);
      uVar1 = *(undefined8 *)(pcVar9 + 0x10);
      uVar6 = (uint)((ulong)*(undefined8 *)(unaff_x20 + 0x10) >> 0x3e);
      if (uVar6 == 0) {
        if (cVar2 == '\x01') goto LAB_101e97894;
      }
      else if (uVar6 == 1) {
        if (cVar2 == '\x02') {
LAB_101e97894:
          FUN_101e98b9c(param_1,auStack_a0);
          cVar2 = cStack_68;
          func_0x000107c6157c(uVar1);
          if (cVar2 == '\0') {
            func_0x000101e98bd0(auStack_a0);
            if (cVar3 != '\0') goto LAB_101e97834;
          }
          else if (cVar2 == '\x01') {
            FUN_101e9957c();
            if (cVar3 != '\x01') {
LAB_101e97834:
              func_0x000107c61574(uVar1);
              goto LAB_101e9783c;
            }
          }
          else {
            func_0x000101e98bd0(auStack_a0);
            if (cVar3 != '\x02') goto LAB_101e97834;
          }
          uVar8 = *(ulong *)(unaff_x20 + 0x10);
          func_0x000107c6157c(uVar8 & 0x3fffffffffffffff);
          func_0x000107c6157c(uVar1);
          uVar7 = uVar8;
          (*pcVar4)(uVar8,param_1);
          func_0x000107c6142c(lVar5);
          func_0x000107c61578(uVar1,2);
          func_0x000107c61574(uVar8 & 0x3fffffffffffffff);
          uVar8 = *(ulong *)(unaff_x20 + 0x10);
          *(ulong *)(unaff_x20 + 0x10) = uVar7;
          func_0x000107c61574(uVar8 & 0x3fffffffffffffff);
          goto LAB_101e97944;
        }
      }
      else if (cVar2 == '\0') goto LAB_101e97894;
LAB_101e9783c:
      uVar8 = uVar8 + 1;
      pcVar9 = pcVar9 + 0x18;
    } while (uVar7 != uVar8);
    func_0x000107c6142c(lVar5);
  }
LAB_101e97944:
  func_0x000100070bfc();
  return;
}



/* Entry: 101e97970; end: 101e97a77;  */

void FUN_101e97970(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,1,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e97a78);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar4);
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c6157c(uVar3);
      }
      else {
        uVar3 = uVar6;
        func_0x000101e990dc(uVar6,uVar4);
      }
      uVar6 = uVar6 + 1;
      func_0x000100b60084(param_1);
      func_0x000107c61574(uVar3);
    } while (uVar5 != uVar6);
    func_0x000107c6142c(uVar4);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101e97a78; end: 101e97bbb;  */

void FUN_101e97a78(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e97bbc);
      (*pcVar1)();
    }
    func_0x000107c61434(uVar6);
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        uVar2 = uVar5;
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar2 = uVar8;
        func_0x000101e990dc(uVar8,uVar6);
        uVar5 = uVar2;
      }
      uVar8 = uVar8 + 1;
      FUN_101e6f23c();
      puVar3 = &UNK_1106e9908;
      func_0x000107c613f8(&UNK_1106e9908,uVar2,0,0);
      func_0x000101e994e8(param_1);
      func_0x00010488ade0(puVar3);
      func_0x000107c614ac(puVar3);
      func_0x000107c61574(uVar5);
    } while (uVar7 != uVar8);
    func_0x000107c6142c(uVar6);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101e97bbc; end: 101e97bef;  */

void FUN_101e97bbc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e97bf0; end: 101e97c0b;  */

void FUN_101e97bf0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined4 *)(unaff_x22 + 0x4c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e97c0c,0,0);
  return;
}



/* Entry: 101e97c0c; end: 101e97cdf;  */

void FUN_101e97c0c(void)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  float fVar4;
  
  uVar2 = *(long *)(unaff_x22 + 0x68) + 0x10;
  func_0x000107c61428(uVar2,unaff_x22 + 0x50,0,0);
  func_0x000107c5fd5c();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e97c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  fVar4 = *(float *)(unaff_x22 + 0x4c) * 1e+09;
  if (0x7f7fffff < (uint)ABS(fVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e97cd8);
    (*pcVar1)();
  }
  if (fVar4 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e97cdc);
    (*pcVar1)();
  }
  if (fVar4 < 1.8446744e+19) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101e97ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              ((long)fVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e97ce0);
  (*pcVar1)();
}



/* Entry: 101e97ce0; end: 101e97d3b;  */

void FUN_101e97ce0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e97d3c;
  }
  else {
    pcVar1 = FUN_101e97ec8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e97d3c; end: 101e97ec7;  */

void FUN_101e97d3c(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  float fVar6;
  
  uVar3 = *(long *)(unaff_x22 + 0x68) + 0x10;
  func_0x000107c61648();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x0001000f11b0();
    uVar1 = uVar4 - *(long *)(uVar3 + 0x50);
    if (SBORROW8(uVar4,*(long *)(uVar3 + 0x50))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97eb0);
      (*pcVar2)();
    }
    fVar6 = *(float *)(unaff_x22 + 0x4c) * 1e+06;
    if (0x7f7fffff < (uint)ABS(fVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97eb4);
      (*pcVar2)();
    }
    if (fVar6 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97eb8);
      (*pcVar2)();
    }
    if (1.8446744e+19 <= fVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97ebc);
      (*pcVar2)();
    }
    if (((long)uVar1 >= 1 && (ulong)(long)fVar6 <= uVar1) &&
        ((long)uVar1 < 1 || uVar1 != (long)fVar6)) {
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x30) = 2;
      *(undefined1 *)(unaff_x22 + 0x48) = 2;
      FUN_101e977d4(unaff_x22 + 0x10);
      func_0x000107c61574(uVar3);
      func_0x000101e98bd0(unaff_x22 + 0x10);
    }
    else {
      func_0x000107c61574();
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        fVar6 = *(float *)(unaff_x22 + 0x4c) * 1e+09;
        if (0x7f7fffff < (uint)ABS(fVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97ec0);
          (*pcVar2)();
        }
        if (-1.0 < fVar6) {
          if (fVar6 < 1.8446744e+19) {
            plVar5 = (long *)(ulong)*(uint *)(
                                             PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                             + 4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x78) = plVar5;
            *plVar5 = unaff_x22;
            plVar5[1] = (long)FUN_101e97ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                      ((long)fVar6);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97ec8);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e97ec4);
        (*pcVar2)();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101e97ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e97ec8; end: 101e97f2b;  */

void FUN_101e97ec8(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101e97ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e97f2c; end: 101e98163;  */

/* WARNING: Possible PIC construction at 0x000101e97f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e98078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e97f8c) */
/* WARNING: Removing unreachable block (ram,0x000101e9807c) */

void FUN_101e97f2c(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar1 == 0) {
    func_0x000101e98c5c(param_1,&uStack_98);
    if (lStack_78 == 1) {
      uStack_30 = 0;
      uStack_38 = 0;
      lStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = CONCAT71(uStack_60._1_7_,2);
    }
    else if (lStack_78 == 2) {
      uStack_30 = 0;
      uStack_38 = 0;
      lStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = CONCAT71(uStack_60._1_7_,4);
    }
    else if (lStack_78 == 3) {
      uStack_30 = 0;
      uStack_38 = 0;
      lStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = CONCAT71(uStack_60._1_7_,3);
    }
    else {
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_48 = uStack_80;
      uStack_50 = uStack_88;
      uStack_38 = uStack_70;
      lStack_40 = lStack_78;
      uStack_30 = uStack_68;
    }
    FUN_101e97a78(&uStack_60);
    FUN_101e6fcd4(&uStack_60);
    lVar2 = *(long *)(param_2 + 0x18);
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
  }
  else {
    if ((uVar1 != 1) || (lVar2 = *(long *)(param_2 + 0x48), lVar2 == 0)) {
      return;
    }
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return;
}



/* Entry: 101e98164; end: 101e982d7;  */

long FUN_101e98164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  lVar3 = 0x112e359c8;
  func_0x0001000285a8(0x112e359c8,&UNK_10da1ed50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0xc;
  *(undefined8 *)(lVar3 + 0x10) = 6;
  puVar6 = &UNK_110492460;
  puVar4 = puVar6;
  func_0x000107c613fc(&UNK_110492460,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,param_1);
  puVar5 = &UNK_110492488;
  func_0x000107c613fc(&UNK_110492488,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined2 *)(lVar3 + 0x20) = 0;
  *(code **)(lVar3 + 0x28) = FUN_101e98bfc;
  *(undefined **)(lVar3 + 0x30) = puVar5;
  *(undefined2 *)(lVar3 + 0x38) = 1;
  *(code **)(lVar3 + 0x40) = FUN_101e983b0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined2 *)(lVar3 + 0x50) = 2;
  *(undefined8 *)(lVar3 + 0x58) = 0x101e9849c;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  func_0x000107c613fc(&UNK_110492460,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,param_1);
  puVar5 = &UNK_1104924b0;
  func_0x000107c613fc(&UNK_1104924b0,0x2c,7);
  *(undefined **)(puVar5 + 0x10) = puVar6;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined4 *)(puVar5 + 0x28) = uVar7;
  *(undefined2 *)(lVar3 + 0x68) = 0x101;
  *(undefined8 *)(lVar3 + 0x70) = 0x101e98c08;
  *(undefined **)(lVar3 + 0x78) = puVar5;
  *(undefined2 *)(lVar3 + 0x80) = 0x202;
  *(undefined8 *)(lVar3 + 0x88) = 0x101e9a1d0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined2 *)(lVar3 + 0x98) = 0x201;
  *(undefined8 *)(lVar3 + 0xa0) = 0x101e9a1cc;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  func_0x000107c61438(uVar2,2);
  return lVar3;
}



/* Entry: 101e982d8; end: 101e983af;  */

undefined8
FUN_101e982d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 auStack_80 [7];
  char cStack_48;
  
  FUN_101e98b9c(param_2,auStack_80);
  if (cStack_48 == '\0') {
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x000101e98870();
      func_0x000107c613fc();
      func_0x000107c61434(param_5);
      FUN_101e99290(param_4,param_5,auStack_80[0],param_3);
      func_0x000107c61574(param_3);
      return param_4;
    }
    func_0x000107c61574(auStack_80[0]);
  }
  else {
    func_0x000101e98bd0(auStack_80);
  }
  return 0x8000000000000000;
}



/* Entry: 101e983b0; end: 101e98543;  */

ulong FUN_101e983b0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 auStack_70 [7];
  char cStack_38;
  
  FUN_101e98b9c(param_2,auStack_70);
  if (cStack_38 == '\0') {
    if (param_1 >> 0x3e == 0) {
      func_0x000107c61428(param_1 + 0x10,auStack_70,0x21,0);
      func_0x000107c6157c(param_1);
      FUN_101e9906c();
      uVar2 = *(ulong *)(param_1 + 0x10);
      uVar3 = uVar2 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar3 + 0x10);
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
        uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_101e98e20(uVar2,uVar1 + 1,1);
        uVar3 = uVar2 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = auStack_70[0];
      *(ulong *)(param_1 + 0x10) = uVar2;
      func_0x000107c614a8(auStack_70);
      return param_1;
    }
    func_0x000107c61574(auStack_70[0]);
  }
  else {
    func_0x000101e98bd0(auStack_70);
  }
  return 0x8000000000000000;
}



/* Entry: 101e98544; end: 101e986fb;  */

ulong FUN_101e98544(undefined4 param_1,ulong param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [56];
  char cStack_80;
  undefined1 auStack_78 [40];
  
  FUN_101e98b9c(param_3,auStack_b8);
  if (cStack_80 == '\x01') {
    FUN_101960034(auStack_b8,auStack_78);
    if (param_2 >> 0x3e == 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_b8,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61648();
      if (param_4 != 0) {
        func_0x000107c6157c(param_2);
        puVar1 = auStack_78;
        FUN_101e97970();
        func_0x000101e98890();
        func_0x000107c613fc();
        *(undefined8 *)(puVar1 + 0x48) = 0;
        puVar2 = puVar1;
        func_0x0001000f11b0();
        *(undefined1 **)(puVar1 + 0x50) = puVar2;
        *(undefined8 *)(puVar1 + 0x10) = param_5;
        *(undefined8 *)(puVar1 + 0x18) = param_6;
        FUN_101e926a0(auStack_78,puVar1 + 0x20);
        puVar3 = &UNK_1104924d8;
        func_0x000107c613fc(&UNK_1104924d8,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,puVar1);
        puVar4 = &UNK_110492500;
        func_0x000107c613fc(&UNK_110492500,0x28,7);
        *(undefined4 *)(puVar4 + 0x10) = param_1;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        *(long *)(puVar4 + 0x20) = param_4;
        func_0x000107c61434(param_6);
        func_0x000107c6157c(param_4);
        uVar5 = 1;
        func_0x0001001ca524(1,3,0x40,0,0,0,&UNK_10da1ed60,puVar4,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(param_4);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(param_2);
        FUN_101e9957c(auStack_78);
        uVar6 = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)(puVar1 + 0x48) = uVar5;
        func_0x000107c61574(uVar6);
        return (ulong)puVar1 | 0x4000000000000000;
      }
    }
    FUN_101e9957c(auStack_78);
  }
  else {
    func_0x000101e98bd0(auStack_b8);
  }
  return 0x8000000000000000;
}



/* Entry: 101e986fc; end: 101e9882f;  */

undefined8 FUN_101e986fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_101e98b9c(param_2,&uStack_a0);
  if (cStack_68 == '\x02') {
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    uStack_38 = uStack_78;
    uStack_40 = uStack_80;
    uStack_30 = uStack_70;
    FUN_101e97f2c(&uStack_60,param_1);
    FUN_101e98c18(&uStack_60);
  }
  else {
    func_0x000101e98bd0(&uStack_a0);
  }
  return 0x8000000000000000;
}



/* Entry: 101e98830; end: 101e988af;  */

void FUN_101e98830(void)

{
  func_0x000101e98778();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e988b0; end: 101e988b7;  */

void FUN_101e988b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101e988b8; end: 101e98973;  */

undefined2 * FUN_101e988b8(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101e98974; end: 101e98a17;  */

int FUN_101e98974(int *param_1,int param_2)

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



/* Entry: 101e98a18; end: 101e98a87;  */

ulong * FUN_101e98a18(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  func_0x000107c6157c(uVar1 & 0x3fffffffffffffff);
  func_0x000107c61574(uVar2 & 0x3fffffffffffffff);
  return param_1;
}



/* Entry: 101e98a88; end: 101e98b9b;  */

int FUN_101e98a88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101e98b9c; end: 101e98bfb;  */

undefined8 FUN_101e98b9c(undefined8 param_1,undefined8 param_2)

{
  FUN_101e99b44(param_2,param_1,&UNK_110492650);
  return param_2;
}


