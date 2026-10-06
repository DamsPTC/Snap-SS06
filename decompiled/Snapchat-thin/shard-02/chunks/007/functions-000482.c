/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020c6198; end: 1020c61db;  */

void FUN_1020c6198(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x178));
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c6138,0,0);
  return;
}



/* Entry: 1020c61dc; end: 1020c61e3;  */

void FUN_1020c61dc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_removeCancellationHandler_110350120)(*(undefined8 *)(unaff_x22 + 0x178))
  ;
  return;
}



/* Entry: 1020c61e4; end: 1020c62b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c61e4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (((uint)param_3 & 0xff00) == 0x100) {
    plVar1 = param_1;
    FUN_101769b78();
    puVar2 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,plVar1,0,0);
    *plVar1 = (long)param_1;
    plVar1[1] = param_2;
    *(char *)(plVar1 + 2) = (char)param_3;
    uStack_48 = 1;
    puStack_50 = puVar2;
    func_0x000101765ad4(param_1,param_2,param_3);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar2 = *(undefined **)((long)param_1 + _DAT_11307d350);
    uStack_48 = 0;
    puStack_50 = puVar2;
    func_0x000107c61174();
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1020c62b8; end: 1020c6323;  */

void FUN_1020c62b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  lVar2 = 0;
  func_0x000100de1f70();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1020c6324;
  plVar1[7] = param_2;
  plVar1[8] = lVar2;
  plVar1[6] = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 1020c6324; end: 1020c636b;  */

void FUN_1020c6324(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c636c,0,0);
  return;
}



/* Entry: 1020c636c; end: 1020c64e7;  */

void FUN_1020c636c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  if (*(char *)(unaff_x22 + 0x18) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_101c17ab4(uVar8,1);
    uVar8 = 0;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar6 = &UNK_1104c8538;
  func_0x000107c613fc(&UNK_1104c8538,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,uVar3);
  puVar7 = &UNK_1104c8740;
  func_0x000107c613fc(&UNK_1104c8740,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar5;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = uVar8;
  puVar6 = &UNK_1104c8768;
  func_0x000107c613fc(&UNK_1104c8768,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10da5a4d0;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  func_0x000107c61174(uVar8);
  func_0x000107c61434(uVar2);
  uVar5 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a4d8,puVar6,uVar5);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  *puVar1 = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0001020c64e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020c64e8; end: 1020c6557;  */

void FUN_1020c64e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020c6f68,uVar1,uVar2);
  return;
}



/* Entry: 1020c6558; end: 1020c6593;  */

void FUN_1020c6558(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1020c6594; end: 1020c65a3;  */

undefined1  [16] FUN_1020c6594(void)

{
  return ZEXT816(0x1104c83b0);
}



/* Entry: 1020c65a4; end: 1020c65c3;  */

void FUN_1020c65a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e56fb0);
  return;
}



/* Entry: 1020c65c4; end: 1020c662b;  */

void FUN_1020c65c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f061e10);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puRam0000000113804670 = puVar2;
  return;
}



/* Entry: 1020c662c; end: 1020c663f;  */

void FUN_1020c662c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e56be8,&UNK_10da59fd0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1020c670c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1020c670c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020c67a0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1020c6778;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1020c6778:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1020c6640; end: 1020c679f;  */

void FUN_1020c6640(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1020c670c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1020c670c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020c67a0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1020c6778;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1020c6778:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1020c67a0; end: 1020c67b3;  */

void FUN_1020c67a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  uVar6 = 0x112e56be8;
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112e56be8,&UNK_10da59fd0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1020c6a14:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c6a44);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1020c6a14;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c6a48);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1020c67b4; end: 1020c6a47;  */

void FUN_1020c67b4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1020c6a14:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020c6a44);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1020c6a14;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020c6a48);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1020c6a48; end: 1020c6a83;  */

void FUN_1020c6a48(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar8 = &UNK_1104c8448;
  func_0x000107c613fc(&UNK_1104c8448,0x30,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar3;
  *(undefined8 *)(puVar8 + 0x18) = uVar15;
  *(undefined8 *)(puVar8 + 0x20) = uVar4;
  *(undefined8 *)(puVar8 + 0x28) = uVar2;
  puVar9 = &UNK_1104c8470;
  func_0x000107c613fc(&UNK_1104c8470,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x1020c6a78;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = FUN_1020c6a84;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1104c8488;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_78;
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_1104c84c0;
  func_0x000107c613fc(&UNK_1104c84c0,0x28,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar2;
  *(undefined8 *)(puVar11 + 0x18) = uVar5;
  *(undefined8 *)(puVar11 + 0x20) = uVar14;
  puVar12 = &UNK_1104c84e8;
  func_0x000107c613fc(&UNK_1104c84e8,0x20,7);
  *(code **)(puVar12 + 0x10) = FUN_1020c6aa4;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  pcStack_80 = (code *)0x1020c6f58;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104c8500;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar6 = puStack_78;
  func_0x000107c61434(uVar14);
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61428(lVar1 + 0x10,&puStack_a0,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_b8,1,0);
  uVar15 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c61574(puVar8);
  func_0x000107c61170(uVar15);
  puVar8 = puVar9;
  func_0x000107c61544(puVar9,"",0x88,0x5f,0x25,1);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = puVar12;
    func_0x000107c61544(puVar12,"",0x88,100,0x1c,1);
    func_0x000107c61574(puVar12);
    if (((ulong)puVar8 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1020c5978);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1020c5974);
  (*pcVar7)();
}



/* Entry: 1020c6a84; end: 1020c6aa3;  */

void FUN_1020c6a84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020c6aa4; end: 1020c6aaf;  */

void FUN_1020c6aa4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (lRam0000000112e57028 != -1) {
    func_0x000107c61568(0x112e57028,FUN_1020c65c4);
  }
  uVar2 = uRam0000000113804670;
  func_0x000107c61174(uRam0000000113804670);
  FUN_1020c42dc(uVar3,uVar4);
  puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28);
  *puVar5 = uVar2;
  puVar5[1] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1020c6ab0; end: 1020c6b13;  */

void FUN_1020c6ab0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1020c6b14;
  plVar5[10] = lVar3;
  plVar5[0xb] = lVar2;
  plVar5[8] = lVar4;
  plVar5[9] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5b14,lVar3,lVar4);
  return;
}



/* Entry: 1020c6b14; end: 1020c6b57;  */

void FUN_1020c6b14(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020c6b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1020c6b58; end: 1020c6bc7;  */

void FUN_1020c6b58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020c6f74;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020c6bc8; end: 1020c6bd7;  */

void FUN_1020c6bc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar6 = &UNK_1104c8600;
  func_0x000107c613fc(&UNK_1104c8600,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  puVar7 = &UNK_1104c8628;
  func_0x000107c613fc(&UNK_1104c8628,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1020c6c04;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x1020c6f5c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1104c8640;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1104c8678;
  func_0x000107c613fc(&UNK_1104c8678,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar12;
  puVar10 = &UNK_1104c86a0;
  func_0x000107c613fc(&UNK_1104c86a0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x1020c6c10;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_80 = 0x1020c6f60;
  puStack_a0 = puVar4;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1104c86b8;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar4 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61428(lVar1 + 0x10,&puStack_a0,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_b8,1,0);
  uVar13 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c61574(puVar6);
  func_0x000107c61170(uVar13);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x88,0x38,0x25,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = puVar10;
    func_0x000107c61544(puVar10,"",0x88,0x3d,0x1c,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar6 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c4f14);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c4f10);
  (*pcVar5)();
}



/* Entry: 1020c6bd8; end: 1020c6c03;  */

void FUN_1020c6bd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020c6c04; end: 1020c6c23;  */

void FUN_1020c6c04(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  puVar2 = &UNK_1104c8538;
  func_0x000107c613fc(&UNK_1104c8538,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar5);
  puVar3 = &UNK_1104c86f0;
  func_0x000107c613fc(&UNK_1104c86f0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  puVar2 = &UNK_1104c8718;
  func_0x000107c613fc(&UNK_1104c8718,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10da5a498;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar4 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar6);
  uVar5 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar6 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5a4a0,puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar6);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1020c6c24; end: 1020c6c87;  */

void FUN_1020c6c24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1020c6f6c;
  plVar5[10] = lVar3;
  plVar5[0xb] = lVar2;
  plVar5[8] = lVar4;
  plVar5[9] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020c6f64,lVar3,lVar4);
  return;
}



/* Entry: 1020c6c88; end: 1020c6cf7;  */

void FUN_1020c6c88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1020c6cf8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020c6cf8; end: 1020c6d33;  */

void FUN_1020c6cf8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020c6d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020c6d34; end: 1020c6d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c6d34(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (((uint)param_3 & 0xff00) == 0x100) {
    plVar1 = param_1;
    FUN_101769b78();
    puVar2 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,plVar1,0,0);
    *plVar1 = (long)param_1;
    plVar1[1] = param_2;
    *(char *)(plVar1 + 2) = (char)param_3;
    uStack_48 = 1;
    puStack_50 = puVar2;
    func_0x000101765ad4(param_1,param_2,param_3);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar2 = *(undefined **)((long)param_1 + _DAT_11307d350);
    uStack_48 = 0;
    puStack_50 = puVar2;
    func_0x000107c61174();
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1020c6d3c; end: 1020c6db3;  */

void FUN_1020c6d3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1020c6db4;
  plVar6[7] = lVar5;
  plVar6[8] = lVar3;
  plVar6[5] = param_1;
  plVar6[6] = lVar2;
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  plVar6[9] = (long)plVar4;
  lVar5 = 0;
  func_0x000100de1f70();
  *plVar4 = (long)plVar6;
  plVar4[1] = (long)FUN_1020c6324;
  plVar4[7] = lVar1;
  plVar4[8] = lVar5;
  plVar4[6] = (long)(plVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 1020c6db4; end: 1020c6def;  */

void FUN_1020c6db4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020c6dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020c6df0; end: 1020c6e1f;  */

void FUN_1020c6df0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c3f474(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = 0;
  func_0x000100de1f70();
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar3 = 0xff;
  uStack_40 = uVar1;
  __sSccMa(0xff,lVar2,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar1 = 0;
  __sSqMa(0,uVar3);
  func_0x000100075034(&lStack_38,&UNK_10488cea0,auStack_50,uVar1);
  if (lStack_38 != 0) {
    uVar1 = 0;
    __sScEMa();
    uVar3 = uVar1;
    func_0x000100f5abbc();
    _swift_allocError(uVar1,uVar3,0,0);
    __sS2cEycfC(uVar3);
    *puVar4 = uVar1;
    _swift_storeEnumTagMultiPayload(puVar4,lVar2,1);
    func_0x000103969044(puVar4,lStack_38,lVar2);
  }
  return;
}



/* Entry: 1020c6e20; end: 1020c6e53;  */

void FUN_1020c6e20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020c6e54; end: 1020c6eb7;  */

void FUN_1020c6e54(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1020c6f70;
  plVar5[10] = lVar3;
  plVar5[0xb] = lVar2;
  plVar5[8] = lVar4;
  plVar5[9] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020c6f68,lVar3,lVar4);
  return;
}



/* Entry: 1020c6eb8; end: 1020c6f27;  */

void FUN_1020c6eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020c6f78;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020c6f28; end: 1020c6f7f;  */

void FUN_1020c6f28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1020c6f80; end: 1020c7253;  */

undefined1  [16] FUN_1020c6f80(double param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  
  lVar1 = 0x112e57030;
  func_0x0001000285a8(0x112e57030,&UNK_10daf8a30);
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_00;
  uVar2 = 0;
  func_0x000107c5ef14();
  lVar15 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar9 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef04(lVar9);
  func_0x000107c5eee8();
  (**(code **)(lVar15 + 8))(lVar9,uVar2);
  puVar4 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
  if ((uVar3 & 1) == 0) {
    func_0x000107c4cec0();
  }
  else {
    func_0x000107c4a918();
  }
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
  func_0x000107c4ce58();
  func_0x000107c61180();
  uVar6 = 0;
  FUN_1020c7254(0);
  func_0x000107c5eb5c(lVar12,puVar5,uVar6);
  func_0x000107c5eb64(lVar11,puVar4,lVar1);
  pcVar14 = *(code **)(lVar13 + 8);
  (*pcVar14)(lVar12,lVar1);
  func_0x000107c5eb60(lVar1);
  (*pcVar14)(lVar11,lVar1);
  dVar16 = 0.01;
  if (0.01 < param_1) {
    dVar16 = param_1;
  }
  dVar17 = (double)(long)dVar16;
  if (dVar17 < 10.0) {
    if (0.1 <= dVar16) {
      dVar17 = (double)(long)(dVar16 * 10.0) / 10.0;
      if (10.0 <= dVar17) {
        dVar17 = 10.0;
      }
    }
    else {
      dVar17 = (double)(long)(dVar16 * 100.0) / 100.0;
    }
  }
  func_0x000107c61174(puVar4);
  func_0x000107c5eb5c(puVar10,dVar17);
  puVar5 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a18c();
  func_0x000107c5a188(puVar5);
  puVar7 = puVar5;
  func_0x000107c4d900();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c56390();
    func_0x000107c61170(puVar7);
    puVar8 = puVar10;
    func_0x000107c60070(puVar10,uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    (*pcVar14)(puVar10,lVar1);
    auVar18._8_8_ = uVar6;
    auVar18._0_8_ = puVar8;
    return auVar18;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1020c7254);
  (*pcVar14)();
}



/* Entry: 1020c7254; end: 1020c7297;  */

void FUN_1020c7254(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57038 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e57038 = puVar1;
  return;
}



/* Entry: 1020c7298; end: 1020c75bb;  */

void FUN_1020c7298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e57040,&UNK_10da5a4e0);
  puVar1 = &UNK_1104c8790;
  func_0x000107c613fc(&UNK_1104c8790,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_1020c75bc,puVar1);
  return;
}



/* Entry: 1020c75bc; end: 1020c75f7;  */

void FUN_1020c75bc(void)

{
  long unaff_x20;
  
  func_0x0001020c73cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1020c75f8; end: 1020c7767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c75f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e57048);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e57050) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e57058);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e57060) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e57068);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e57070) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e57078) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e57080) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e57088) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e57090) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e57098) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e570a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e570a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e570b0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e570b8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e570c0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e570c8) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020c7768; end: 1020c7943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c7768(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lStack_48;
  
  lVar1 = _DAT_112e58428;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e570c0);
  lVar2 = *(long *)(lVar6 + _DAT_112e58428);
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c420a8(*(undefined8 *)(lVar6 + lVar1));
  }
  puVar3 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x0001045162e4(0);
  func_0x000107c610f8();
  uVar4 = 0x12;
  func_0x000104515e00(0x12,4,0x1d,0x18);
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61174(puVar3);
  func_0x000104517200();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_48);
    lVar1 = lStack_48;
    lVar2 = lStack_48;
    func_0x000107c4ffe8(lStack_48);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_48);
  func_0x000107c42c1c(lStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lStack_48);
  return;
}



/* Entry: 1020c7944; end: 1020c7b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c7944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lStack_68;
  
  func_0x000104523254(0);
  func_0x000107c610f8();
  uVar5 = 0x1d;
  func_0x000104522fdc(0x1d,0,1);
  puVar6 = PTR_PTR_1126b3530;
  func_0x000107c610f8(PTR_PTR_1126b3530);
  func_0x000107c4807c();
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  func_0x000104522c9c(0);
  func_0x00010452281c(param_1,param_2);
  uVar7 = param_1;
  func_0x000104520f00();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  lVar8 = lStack_68;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar8 != 0) {
    func_0x000107c61170(lVar8);
    func_0x000100083b20(&lStack_68);
    lVar4 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4ffe8(lStack_68);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar8);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e57048);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000100ce1784(param_3,param_4);
  func_0x000100ce1724(uVar2,uVar3);
  func_0x000100083b20(&lStack_68);
  func_0x000107c42c1c(lStack_68);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lStack_68);
  return;
}



/* Entry: 1020c7b24; end: 1020c7caf;  */

void FUN_1020c7b24(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  puVar1 = PTR_PTR_1126b1010;
  func_0x000107c610f8();
  func_0x000107c479e4();
  if (puVar1 != (undefined *)0x0) {
    uVar3 = *param_1;
    func_0x000107c5fadc(uVar3,param_1[1]);
    func_0x000107c57d6c(puVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
    func_0x0001020c31a0();
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x1c));
    uVar3 = *param_1;
    func_0x000107c5fadc(uVar3,param_1[1]);
    func_0x000107c57d54(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = 0x454d5f5241454e;
    func_0x000107c5fadc(0x454d5f5241454e,0xe700000000000000);
    func_0x000107c54c90(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c571e4(puVar1);
    puVar4 = &UNK_1104c87d8;
    func_0x000107c613fc(&UNK_1104c87d8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1104c8800;
    func_0x000107c613fc(&UNK_1104c8800,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar1;
    uStack_40 = 0x1020c8d40;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1104c8818;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar4 = puStack_38;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar4);
    func_0x0001000d76cc(&UNK_10da5a50c,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1020c7cb0; end: 1020c7e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c7cb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(&lStack_60);
    lVar1 = lStack_60;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112e570c0) + _DAT_112e58428);
    func_0x000107c61174(uVar2);
    func_0x000107c5cb04(param_2);
    func_0x000107c61180();
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000104314d44(uVar2,param_2,param_1,1,0,0,0,0,0);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000100083b20(&lStack_60);
    lVar1 = lStack_60;
    lVar4 = lStack_60;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      func_0x000107c61170(lVar4);
      func_0x000100083b20(&lStack_60);
      lVar1 = lStack_60;
      lVar4 = lStack_60;
      func_0x000107c4ffe8(lStack_60);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar4);
    }
    func_0x000100083b20(&lStack_60);
    func_0x000107c42c1c(lStack_60);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lStack_60);
  }
  return;
}



/* Entry: 1020c7e5c; end: 1020c7f47;  */

void FUN_1020c7e5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *param_1;
    uVar1 = param_1[1];
    bVar2 = *(byte *)(param_1 + 4) >> 6;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar3 = 0;
        func_0x00010451c820(0);
        func_0x0001045198cc(uVar4,uVar1,0,0,10,uVar3);
        FUN_1020c7768();
        func_0x000107c61170(uVar4);
      }
      else {
        func_0x0001020c8208();
      }
    }
    else if (bVar2 == 2) {
      FUN_1020c8420(uVar4,uVar1,param_1[2],param_1[3],*(byte *)(param_1 + 4) & 0x3f);
    }
    else {
      func_0x0001020c80e0();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1020c7f48; end: 1020c841f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c7f48(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar7 = _DAT_112e57060;
  if (*(long *)(unaff_x20 + _DAT_112e57060) == 0) {
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar4 = unaff_x20;
    func_0x000107c61174();
    puVar5 = puVar3;
    func_0x000103a28f00(puVar3,lVar4,0x12,PTR___swiftEmptyArrayStorage_11034f1c8,2);
    func_0x000100083b20(&uStack_58);
    uVar6 = uStack_58;
    puStack_60 = puVar5;
    func_0x00010008a7c8(&uStack_58,&puStack_60);
    func_0x000107c61574(uVar6);
    func_0x000100083b20(&puStack_60);
    func_0x000107c61574(uStack_58);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined **)(unaff_x20 + lVar7) = puStack_60;
    func_0x000107c615e8(uVar6);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (lVar7 != 0) {
      func_0x000107c615f0(lVar7);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar1 = (undefined8 *)(lVar4 + _DAT_112e57068);
    uVar6 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000100ce1784(param_1,param_2);
    func_0x000100ce1724(uVar6,uVar2);
  }
  else if (param_1 != (code *)0x0) {
    (*param_1)(0);
  }
  return;
}



/* Entry: 1020c8420; end: 1020c854f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b3530;
  func_0x000107c610f8(PTR_PTR_1126b3530);
  func_0x000107c4807c();
  func_0x000100083b20(&uStack_70);
  uVar2 = uStack_70;
  func_0x000107c614f0();
  puVar3 = &UNK_1104c87d8;
  func_0x000107c613fc(&UNK_1104c87d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar4 = *(code **)(lStack_68 + 8);
  func_0x000107c6157c(puVar3);
  (*pcVar4)(param_3,param_4,param_5,param_1,param_2,1,puVar1,FUN_1020c8d38,puVar3,0,uVar2,lStack_68)
  ;
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uStack_70);
  func_0x000107c61578(puVar3,2);
  return;
}



/* Entry: 1020c8550; end: 1020c860b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8550(char param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e570c0;
  if (param_2 != 0) {
    if (param_1 == '\0') {
      lVar2 = *(long *)(*(long *)(param_2 + _DAT_112e570c0) + _DAT_112e58428);
      func_0x000107c4f078();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c420a8(*(undefined8 *)(*(long *)(param_2 + lVar1) + _DAT_112e58428));
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1020c860c; end: 1020c866b; -[_TtC20NearMeImplementation12NearMeRouter init] */

void FUN_1020c860c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NearMeImplementation.NearMeRouter",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020c8638);
  (*pcVar1)();
}



/* Entry: 1020c866c; end: 1020c879f; -[_TtC20NearMeImplementation12NearMeRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c866c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57078));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57080));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57088));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57098));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e570a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e570a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57090));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e570b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e570c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e57070));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e570b8));
  func_0x000100ce1724(*(undefined8 *)(param_1 + _DAT_112e57048),
                      ((undefined8 *)(param_1 + _DAT_112e57048))[1]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e57050));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e57058 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e57060));
  func_0x000100ce1724(*(undefined8 *)(param_1 + _DAT_112e57068),
                      ((undefined8 *)(param_1 + _DAT_112e57068))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e570c0));
  return;
}



/* Entry: 1020c87a0; end: 1020c889b; -[_TtC20NearMeImplementation12NearMeRouter chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001020c87d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c87d8) */

void FUN_1020c87a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1020c8b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1020c889c; end: 1020c88eb; -[_TtC20NearMeImplementation12NearMeRouter mapScopeDidEnd:] */

/* WARNING: Possible PIC construction at 0x0001020c88d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c88d8) */

void FUN_1020c889c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001020c87ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1020c88ec; end: 1020c893f; -[_TtC20NearMeImplementation12NearMeRouter dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x0001020c8928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c892c) */

void FUN_1020c88ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001020c8c74(&DAT_112e57078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1020c8940; end: 1020c8993; -[_TtC20NearMeImplementation12NearMeRouter friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001020c897c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c8980) */

void FUN_1020c8940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001020c8c74(&DAT_112e570a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1020c8994; end: 1020c8a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e57050;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e57050);
  if (lVar2 != 0) {
    if (param_1 != 0) {
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e57058))[1];
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e57058);
        func_0x000107c61174(param_1);
        func_0x000107c61434(lVar3);
        lVar2 = param_1;
        func_0x0001038ba5f8(param_1);
        FUN_1020c8420(uVar4,lVar3,lVar2,param_2,param_3);
        func_0x000101107184(lVar2,param_2,param_3);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar3);
        lVar2 = *(long *)(unaff_x20 + lVar1);
      }
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1020c8a74; end: 1020c8ac7; -[_TtC20NearMeImplementation12NearMeRouter emojiPickerScopeDidCompleteWith:] */

/* WARNING: Possible PIC construction at 0x0001020c8ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c8ab4) */

void FUN_1020c8a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1020c8994(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1020c8ac8; end: 1020c8adf; -[_TtC20NearMeImplementation12NearMeRouter emojiPickerScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8ac8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e57050);
  *(undefined8 *)(param_1 + _DAT_112e57050) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1020c8ae0; end: 1020c8af7; -[_TtC20NearMeImplementation12NearMeRouter shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8ae0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e57060);
  *(undefined8 *)(param_1 + _DAT_112e57060) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1020c8af8; end: 1020c8b8f; -[_TtC20NearMeImplementation12NearMeRouter onExitGhostModeWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e57068);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61174(param_1);
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100ce1784(pcVar3,uVar4);
    (*pcVar3)(param_3);
    func_0x000100ce1724(pcVar3,uVar4);
    uVar4 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100ce1724(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020c8b90; end: 1020c8d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8b90(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar3 = lStack_38;
  lVar2 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_38);
    lVar3 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar3);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e57048);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = puVar1[1];
    func_0x000107c6157c(uVar6);
    (*pcVar5)();
    func_0x000100ce1724(pcVar5,uVar6);
    uVar6 = *puVar1;
  }
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100ce1724(uVar6,uVar4);
  return;
}



/* Entry: 1020c8d08; end: 1020c8d17;  */

undefined1  [16] FUN_1020c8d08(void)

{
  return ZEXT816(0x1104c87b8);
}



/* Entry: 1020c8d18; end: 1020c8d37;  */

void FUN_1020c8d18(void)

{
  func_0x000107c61168(&PTR_PTR_11281dd30);
  return;
}



/* Entry: 1020c8d38; end: 1020c8d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020c8d38(char param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e570c0;
  if (lVar2 != 0) {
    if (param_1 == '\0') {
      lVar3 = *(long *)(*(long *)(lVar2 + _DAT_112e570c0) + _DAT_112e58428);
      func_0x000107c4f078();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170(lVar3);
        func_0x000107c420a8(*(undefined8 *)(*(long *)(lVar2 + lVar1) + _DAT_112e58428));
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1020c8d64; end: 1020c8e8f;  */

/* WARNING: Possible PIC construction at 0x0001020c8e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c8e58) */

void FUN_1020c8d64(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  lVar4 = lVar7;
  func_0x000107c61538();
  func_0x000107c61538(lVar7,0x112e57188);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168();
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5ce94();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5d9c8();
  func_0x000107c61170(puVar6);
  if (puVar5 != (undefined *)0x2) {
    lVar4 = lVar7;
  }
  func_0x000107c5fbbc(param_1,param_2);
  if ((param_1 < 0) && (bVar3 = SBORROW8(0,param_1), param_1 = -param_1, bVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c8e90);
    (*pcVar2)();
  }
  lVar7 = *(long *)(lVar4 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c8e88);
    (*pcVar2)();
  }
  lVar1 = 0;
  if (lVar7 != 0) {
    lVar1 = param_1 / lVar7;
  }
  param_1 = param_1 - lVar1 * lVar7;
  if (-1 < param_1) {
    func_0x000107c61434(*(undefined8 *)(lVar4 + param_1 * 0x10 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c8e8c);
  (*pcVar2)();
}



/* Entry: 1020c8e90; end: 1020c8f23;  */

undefined8 FUN_1020c8e90(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
LAB_1020c8f0c:
    uVar3 = 0;
  }
  else {
    uVar1 = unaff_x20;
    func_0x000107c406e8();
    uVar2 = unaff_x20;
    if ((uVar1 == 1) || (uVar1 = unaff_x20, func_0x000107c4a3d0(), (uVar1 & 1) == 0)) {
      func_0x000107c4cda8();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (uVar2 == 0) goto LAB_1020c8f0c;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    func_0x000107c61170(uVar2);
  }
  return uVar3;
}



/* Entry: 1020c8f24; end: 1020c93af;  */

undefined1 FUN_1020c8f24(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined1 uVar16;
  long unaff_x20;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  FUN_1020c8e90();
  if ((param_1 & 1) != 0) {
    func_0x000107c3d15c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4cda8();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uStack_71 = 0;
        puVar3 = &UNK_1104c8850;
        func_0x000107c613fc(&UNK_1104c8850,0x20,7);
        *(long *)(puVar3 + 0x10) = unaff_x20;
        *(undefined1 **)(puVar3 + 0x18) = &uStack_71;
        puVar4 = &UNK_1104c8878;
        func_0x000107c613fc(&UNK_1104c8878,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = 0x1020ca41c;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_88 = (code *)0x1020ca8a4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8ac;
        puStack_90 = &UNK_1104c8890;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        puVar4 = puStack_80;
        func_0x000107c61174();
        func_0x000107c61574(puVar4);
        pcStack_88 = FUN_1020c94d0;
        puStack_80 = (undefined *)0x0;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8b0;
        puStack_90 = &UNK_1104c88b8;
        ppuVar6 = &puStack_a8;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_80);
        pcStack_88 = FUN_1020c94d0;
        puStack_80 = (undefined *)0x0;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8b4;
        puStack_90 = &UNK_1104c88e0;
        ppuVar7 = &puStack_a8;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_80);
        puVar4 = &UNK_1104c8918;
        func_0x000107c613fc(&UNK_1104c8918,0x18,7);
        *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
        puVar8 = &UNK_1104c8940;
        func_0x000107c613fc(&UNK_1104c8940,0x20,7);
        *(code **)(puVar8 + 0x10) = FUN_1020ca440;
        *(undefined **)(puVar8 + 0x18) = puVar4;
        pcStack_88 = (code *)0x1020ca8a0;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8b8;
        puStack_90 = &UNK_1104c8958;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        puVar8 = &UNK_1104c8990;
        func_0x000107c613fc(&UNK_1104c8990,0x18,7);
        *(undefined1 **)(puVar8 + 0x10) = &uStack_71;
        puVar10 = &UNK_1104c89b8;
        func_0x000107c613fc(&UNK_1104c89b8,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_1020ca46c;
        *(undefined **)(puVar10 + 0x18) = puVar8;
        pcStack_88 = FUN_1020ca474;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8bc;
        puStack_90 = &UNK_1104c89d0;
        ppuVar11 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c61574(puStack_80);
        pcStack_88 = FUN_1020ca244;
        puStack_80 = (undefined *)0x0;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8c0;
        puStack_90 = &UNK_1104c89f8;
        ppuVar12 = &puStack_a8;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_80);
        puVar10 = &UNK_1104c8a30;
        func_0x000107c613fc(&UNK_1104c8a30,0x18,7);
        *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
        puVar17 = &UNK_1104c8a58;
        func_0x000107c613fc(&UNK_1104c8a58,0x20,7);
        *(code **)(puVar17 + 0x10) = FUN_1020ca494;
        *(undefined **)(puVar17 + 0x18) = puVar10;
        pcStack_88 = (code *)0x1020ca8a8;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8c4;
        puStack_90 = &UNK_1104c8a70;
        ppuVar13 = &puStack_a8;
        puStack_80 = puVar17;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_80);
        puVar17 = &UNK_1104c8aa8;
        func_0x000107c613fc(&UNK_1104c8aa8,0x18,7);
        *(undefined1 **)(puVar17 + 0x10) = &uStack_71;
        puVar14 = &UNK_1104c8ad0;
        func_0x000107c613fc(&UNK_1104c8ad0,0x20,7);
        uVar18 = 0x1020ca8c4;
        *(undefined8 *)(puVar14 + 0x10) = 0x1020ca8c4;
        *(undefined **)(puVar14 + 0x18) = puVar17;
        pcStack_88 = (code *)0x1020ca8ac;
        puStack_a8 = puVar1;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x101b5b8c8;
        puStack_90 = &UNK_1104c8ae8;
        ppuVar15 = &puStack_a8;
        puStack_80 = puVar14;
        func_0x000107c60bc4();
        func_0x000107c61574(puStack_80);
        func_0x000107c4c710(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(unaff_x20);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c60bd0(ppuVar12);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar5);
        uVar16 = uStack_71;
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar3);
        goto LAB_1020c937c;
      }
      func_0x000107c61170(unaff_x20);
    }
  }
  uVar16 = 0;
  uVar18 = 0;
  puVar17 = (undefined *)0x0;
LAB_1020c937c:
  FUN_1020ca40c(uVar18,puVar17);
  return uVar16;
}



/* Entry: 1020c93b0; end: 1020c94cf;  */

void FUN_1020c93b0(ulong param_1,ulong param_2,undefined1 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  uVar5 = param_2;
  func_0x000107c5d328();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(uVar5);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  func_0x000107c4cdf0();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  uVar3 = 0;
  FUN_101681c68(0);
  uVar1 = param_2;
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c61170(param_2);
  if (uVar1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar5 = uVar1;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar1);
  if (uVar5 == 0) {
    return;
  }
  func_0x000107c5b348();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c44b24();
    func_0x000107c61170(param_1);
    if ((uVar1 & 1) != 0) {
      uVar4 = 3;
      goto LAB_1020c94a0;
    }
  }
  uVar4 = 2;
LAB_1020c94a0:
  *param_3 = uVar4;
  return;
}



/* Entry: 1020c94d0; end: 1020c94d7;  */

void FUN_1020c94d0(void)

{
  return;
}



/* Entry: 1020c94d8; end: 1020ca0a7;  */

void FUN_1020c94d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined **ppuVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined **ppuVar41;
  ulong uVar42;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar3 = &UNK_1104c8b98;
  func_0x000107c613fc(&UNK_1104c8b98,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1104c8bc0;
  func_0x000107c613fc(&UNK_1104c8bc0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1020ca4d0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1020ca4e4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca0a8;
  puStack_90 = &UNK_1104c8bd8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_80;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104c8c10;
  func_0x000107c613fc(&UNK_1104c8c10,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar7 = &UNK_1104c8c38;
  func_0x000107c613fc(&UNK_1104c8c38,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1020ca504;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = FUN_1020ca518;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca114;
  puStack_90 = &UNK_1104c8c50;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1104c8c88;
  func_0x000107c613fc(&UNK_1104c8c88,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = param_2;
  puVar10 = &UNK_1104c8cb0;
  func_0x000107c613fc(&UNK_1104c8cb0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x1020ca834;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = (code *)0x1020ca538;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8cc8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4();
  puVar12 = puStack_80;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_1104c8d00;
  func_0x000107c613fc(&UNK_1104c8d00,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = param_2;
  puVar13 = &UNK_1104c8d28;
  func_0x000107c613fc(&UNK_1104c8d28,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1020ca7bc;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_88 = (code *)0x1020ca7c4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca894;
  puStack_90 = &UNK_1104c8d40;
  ppuVar14 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4();
  puVar15 = puStack_80;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_1104c8d78;
  func_0x000107c613fc(&UNK_1104c8d78,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = param_2;
  puVar16 = &UNK_1104c8da0;
  func_0x000107c613fc(&UNK_1104c8da0,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = 0x1020ca89c;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_88 = (code *)0x1020ca8c0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca114;
  puStack_90 = &UNK_1104c8db8;
  ppuVar17 = &puStack_a8;
  puStack_80 = puVar16;
  func_0x000107c60bc4();
  puVar18 = puStack_80;
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar18);
  puVar18 = &UNK_1104c8df0;
  func_0x000107c613fc(&UNK_1104c8df0,0x18,7);
  *(undefined8 *)(puVar18 + 0x10) = param_2;
  puVar19 = &UNK_1104c8e18;
  func_0x000107c613fc(&UNK_1104c8e18,0x20,7);
  *(undefined8 *)(puVar19 + 0x10) = 0x1020ca828;
  *(undefined **)(puVar19 + 0x18) = puVar18;
  pcStack_88 = (code *)0x1020ca8b0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8e30;
  ppuVar20 = &puStack_a8;
  puStack_80 = puVar19;
  func_0x000107c60bc4();
  puVar21 = puStack_80;
  func_0x000107c6157c(puVar19);
  func_0x000107c61574(puVar21);
  puVar21 = &UNK_1104c8e68;
  func_0x000107c613fc(&UNK_1104c8e68,0x18,7);
  *(undefined8 *)(puVar21 + 0x10) = param_2;
  puVar22 = &UNK_1104c8e90;
  func_0x000107c613fc(&UNK_1104c8e90,0x20,7);
  *(undefined8 *)(puVar22 + 0x10) = 0x1020ca82c;
  *(undefined **)(puVar22 + 0x18) = puVar21;
  pcStack_88 = (code *)0x1020ca8b4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8ea8;
  ppuVar23 = &puStack_a8;
  puStack_80 = puVar22;
  func_0x000107c60bc4();
  puVar27 = puStack_80;
  func_0x000107c6157c(puVar22);
  func_0x000107c61574(puVar27);
  pcStack_88 = FUN_1020ca168;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1104c8ed0;
  ppuVar24 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x1020ca170;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca174;
  puStack_90 = &UNK_1104c8ef8;
  ppuVar25 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x1020ca16c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1104c8f20;
  ppuVar26 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  puVar27 = &UNK_1104c8f58;
  func_0x000107c613fc(&UNK_1104c8f58,0x18,7);
  *(undefined8 *)(puVar27 + 0x10) = param_2;
  puVar28 = &UNK_1104c8f80;
  func_0x000107c613fc(&UNK_1104c8f80,0x20,7);
  *(undefined8 *)(puVar28 + 0x10) = 0x1020ca830;
  *(undefined **)(puVar28 + 0x18) = puVar27;
  pcStack_88 = (code *)0x1020ca8b8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8f98;
  ppuVar29 = &puStack_a8;
  puStack_80 = puVar28;
  func_0x000107c60bc4();
  puVar30 = puStack_80;
  func_0x000107c6157c(puVar28);
  func_0x000107c61574(puVar30);
  puVar30 = &UNK_1104c8fd0;
  func_0x000107c613fc(&UNK_1104c8fd0,0x18,7);
  *(undefined8 *)(puVar30 + 0x10) = param_2;
  puVar31 = &UNK_1104c8ff8;
  func_0x000107c613fc(&UNK_1104c8ff8,0x20,7);
  *(code **)(puVar31 + 0x10) = FUN_1020ca558;
  *(undefined **)(puVar31 + 0x18) = puVar30;
  pcStack_88 = (code *)0x1020ca8bc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c9010;
  ppuVar32 = &puStack_a8;
  puStack_80 = puVar31;
  func_0x000107c60bc4();
  puVar33 = puStack_80;
  func_0x000107c6157c(puVar31);
  func_0x000107c61574(puVar33);
  puVar33 = &UNK_1104c9048;
  func_0x000107c613fc(&UNK_1104c9048,0x18,7);
  *(undefined8 *)(puVar33 + 0x10) = param_2;
  puVar34 = &UNK_1104c9070;
  func_0x000107c613fc(&UNK_1104c9070,0x20,7);
  *(undefined8 *)(puVar34 + 0x10) = 0x1020ca56c;
  *(undefined **)(puVar34 + 0x18) = puVar33;
  pcStack_88 = FUN_1020ca580;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca198;
  puStack_90 = &UNK_1104c9088;
  ppuVar35 = &puStack_a8;
  puStack_80 = puVar34;
  func_0x000107c60bc4();
  puVar36 = puStack_80;
  func_0x000107c6157c(puVar34);
  func_0x000107c61574(puVar36);
  puVar36 = &UNK_1104c90c0;
  func_0x000107c613fc(&UNK_1104c90c0,0x18,7);
  *(undefined8 *)(puVar36 + 0x10) = param_2;
  puVar37 = &UNK_1104c90e8;
  func_0x000107c613fc(&UNK_1104c90e8,0x20,7);
  *(code **)(puVar37 + 0x10) = FUN_1020ca5a0;
  *(undefined **)(puVar37 + 0x18) = puVar36;
  pcStack_88 = FUN_1020ca5b4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca898;
  puStack_90 = &UNK_1104c9100;
  ppuVar38 = &puStack_a8;
  puStack_80 = puVar37;
  func_0x000107c60bc4();
  puVar39 = puStack_80;
  func_0x000107c6157c(puVar37);
  func_0x000107c61574(puVar39);
  puVar39 = &UNK_1104c9138;
  func_0x000107c613fc(&UNK_1104c9138,0x18,7);
  *(undefined8 *)(puVar39 + 0x10) = param_2;
  puVar40 = &UNK_1104c9160;
  func_0x000107c613fc(&UNK_1104c9160,0x20,7);
  *(undefined8 *)(puVar40 + 0x10) = 0x1020ca7c0;
  *(undefined **)(puVar40 + 0x18) = puVar39;
  pcStack_88 = (code *)0x1020ca7c8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca898;
  puStack_90 = &UNK_1104c9178;
  ppuVar41 = &puStack_a8;
  puStack_80 = puVar40;
  func_0x000107c60bc4();
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar40);
  func_0x000107c61574(puVar1);
  func_0x000107c4c578(param_1);
  func_0x000107c60bd0(ppuVar41);
  func_0x000107c60bd0(ppuVar38);
  func_0x000107c60bd0(ppuVar35);
  func_0x000107c60bd0(ppuVar32);
  func_0x000107c60bd0(ppuVar29);
  func_0x000107c60bd0(ppuVar26);
  func_0x000107c60bd0(ppuVar25);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar23);
  func_0x000107c60bd0(ppuVar20);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x50,0x22,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca070);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x75,0x52,0x1a,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca074);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x75,0x54,0x20,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca078);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x75,0x56,0x22,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca07c);
    (*pcVar2)();
  }
  puVar3 = puVar16;
  func_0x000107c61544(puVar16,"",0x75,0x58,0x15,1);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(puVar16);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca080);
    (*pcVar2)();
  }
  puVar3 = puVar19;
  func_0x000107c61544(puVar19,"",0x75,0x5a,0x23,1);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(puVar19);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca084);
    (*pcVar2)();
  }
  puVar3 = puVar22;
  func_0x000107c61544(puVar22,"",0x75,0x5c,0x27,1);
  func_0x000107c61574(puVar22);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca088);
    (*pcVar2)();
  }
  uVar42 = 0;
  func_0x000107c61544(0,"",0x75,0x5e,0x1d,1);
  if ((uVar42 & 1) == 0) {
    uVar42 = 0;
    func_0x000107c61544(0,"",0x75,0x5f,0x1e,1);
    if ((uVar42 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca090);
      (*pcVar2)();
    }
    uVar42 = 0;
    func_0x000107c61544(0,"",0x75,0x60,0x1b,1);
    func_0x000107c61574(puVar27);
    if ((uVar42 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca094);
      (*pcVar2)();
    }
    puVar3 = puVar28;
    func_0x000107c61544(puVar28,"",0x75,0x61,0x24,1);
    func_0x000107c61574(puVar30);
    func_0x000107c61574(puVar28);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca098);
      (*pcVar2)();
    }
    puVar3 = puVar31;
    func_0x000107c61544(puVar31,"",0x75,99,0x25,1);
    func_0x000107c61574(puVar33);
    func_0x000107c61574(puVar31);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = puVar34;
      func_0x000107c61544(puVar34,"",0x75,0x65,0x23,1);
      func_0x000107c61574(puVar36);
      func_0x000107c61574(puVar34);
      if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a0);
        (*pcVar2)();
      }
      puVar3 = puVar37;
      func_0x000107c61544(puVar37,"",0x75,0x67,0x1c,1);
      func_0x000107c61574(puVar39);
      func_0x000107c61574(puVar37);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = puVar40;
        func_0x000107c61544(puVar40,"",0x75,0x69,0x19,1);
        func_0x000107c61574(puVar40);
        if (((ulong)puVar3 & 1) == 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a8);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a4);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca09c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca08c);
  (*pcVar2)();
}



/* Entry: 1020ca0a8; end: 1020ca113;  */

void FUN_1020ca0a8(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_2);
  }
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020ca114; end: 1020ca167;  */

void FUN_1020ca114(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_2);
  }
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020ca168; end: 1020ca173;  */

void FUN_1020ca168(void)

{
  return;
}



/* Entry: 1020ca174; end: 1020ca197;  */

void FUN_1020ca174(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 1020ca198; end: 1020ca1e7;  */

void FUN_1020ca198(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1020ca1e8; end: 1020ca243;  */

void FUN_1020ca1e8(long param_1,long param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_2);
  }
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020ca244; end: 1020ca247;  */

void FUN_1020ca244(void)

{
  return;
}



/* Entry: 1020ca248; end: 1020ca36b;  */

void FUN_1020ca248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_1104c8b20;
  func_0x000107c613fc(&UNK_1104c8b20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &UNK_1104c8b48;
  func_0x000107c613fc(&UNK_1104c8b48,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1020ca49c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1020ca4b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1020ca36c;
  puStack_58 = &UNK_1104c8b60;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e8(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x6e,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca36c);
  (*pcVar2)();
}



/* Entry: 1020ca36c; end: 1020ca40b;  */

/* WARNING: Possible PIC construction at 0x0001020ca3ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ca3f0) */

void FUN_1020ca36c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
    uVar2 = param_2;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_4);
    uVar2 = uVar3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  (*pcVar1)(param_2,param_3,param_4,uVar3,param_5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1020ca40c; end: 1020ca43f;  */

void FUN_1020ca40c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1020ca440; end: 1020ca46b;  */

void FUN_1020ca440(int param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c4a2e8();
  if (param_1 != 0) {
    *puVar1 = 1;
  }
  return;
}



/* Entry: 1020ca46c; end: 1020ca473;  */

void FUN_1020ca46c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined **ppuVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined **ppuVar41;
  ulong uVar42;
  undefined8 uVar43;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar43 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar3 = &UNK_1104c8b98;
  func_0x000107c613fc(&UNK_1104c8b98,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar43;
  puVar4 = &UNK_1104c8bc0;
  func_0x000107c613fc(&UNK_1104c8bc0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1020ca4d0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1020ca4e4;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca0a8;
  puStack_90 = &UNK_1104c8bd8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_80;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104c8c10;
  func_0x000107c613fc(&UNK_1104c8c10,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar43;
  puVar7 = &UNK_1104c8c38;
  func_0x000107c613fc(&UNK_1104c8c38,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1020ca504;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = FUN_1020ca518;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca114;
  puStack_90 = &UNK_1104c8c50;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1104c8c88;
  func_0x000107c613fc(&UNK_1104c8c88,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar43;
  puVar10 = &UNK_1104c8cb0;
  func_0x000107c613fc(&UNK_1104c8cb0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x1020ca834;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = (code *)0x1020ca538;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8cc8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4();
  puVar12 = puStack_80;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_1104c8d00;
  func_0x000107c613fc(&UNK_1104c8d00,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar43;
  puVar13 = &UNK_1104c8d28;
  func_0x000107c613fc(&UNK_1104c8d28,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1020ca7bc;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_88 = (code *)0x1020ca7c4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca894;
  puStack_90 = &UNK_1104c8d40;
  ppuVar14 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4();
  puVar15 = puStack_80;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_1104c8d78;
  func_0x000107c613fc(&UNK_1104c8d78,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar43;
  puVar16 = &UNK_1104c8da0;
  func_0x000107c613fc(&UNK_1104c8da0,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = 0x1020ca89c;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_88 = (code *)0x1020ca8c0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca114;
  puStack_90 = &UNK_1104c8db8;
  ppuVar17 = &puStack_a8;
  puStack_80 = puVar16;
  func_0x000107c60bc4();
  puVar18 = puStack_80;
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar18);
  puVar18 = &UNK_1104c8df0;
  func_0x000107c613fc(&UNK_1104c8df0,0x18,7);
  *(undefined8 *)(puVar18 + 0x10) = uVar43;
  puVar19 = &UNK_1104c8e18;
  func_0x000107c613fc(&UNK_1104c8e18,0x20,7);
  *(undefined8 *)(puVar19 + 0x10) = 0x1020ca828;
  *(undefined **)(puVar19 + 0x18) = puVar18;
  pcStack_88 = (code *)0x1020ca8b0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8e30;
  ppuVar20 = &puStack_a8;
  puStack_80 = puVar19;
  func_0x000107c60bc4();
  puVar21 = puStack_80;
  func_0x000107c6157c(puVar19);
  func_0x000107c61574(puVar21);
  puVar21 = &UNK_1104c8e68;
  func_0x000107c613fc(&UNK_1104c8e68,0x18,7);
  *(undefined8 *)(puVar21 + 0x10) = uVar43;
  puVar22 = &UNK_1104c8e90;
  func_0x000107c613fc(&UNK_1104c8e90,0x20,7);
  *(undefined8 *)(puVar22 + 0x10) = 0x1020ca82c;
  *(undefined **)(puVar22 + 0x18) = puVar21;
  pcStack_88 = (code *)0x1020ca8b4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8ea8;
  ppuVar23 = &puStack_a8;
  puStack_80 = puVar22;
  func_0x000107c60bc4();
  puVar27 = puStack_80;
  func_0x000107c6157c(puVar22);
  func_0x000107c61574(puVar27);
  pcStack_88 = FUN_1020ca168;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1104c8ed0;
  ppuVar24 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x1020ca170;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca174;
  puStack_90 = &UNK_1104c8ef8;
  ppuVar25 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x1020ca16c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1104c8f20;
  ppuVar26 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  puVar27 = &UNK_1104c8f58;
  func_0x000107c613fc(&UNK_1104c8f58,0x18,7);
  *(undefined8 *)(puVar27 + 0x10) = uVar43;
  puVar28 = &UNK_1104c8f80;
  func_0x000107c613fc(&UNK_1104c8f80,0x20,7);
  *(undefined8 *)(puVar28 + 0x10) = 0x1020ca830;
  *(undefined **)(puVar28 + 0x18) = puVar27;
  pcStack_88 = (code *)0x1020ca8b8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c8f98;
  ppuVar29 = &puStack_a8;
  puStack_80 = puVar28;
  func_0x000107c60bc4();
  puVar30 = puStack_80;
  func_0x000107c6157c(puVar28);
  func_0x000107c61574(puVar30);
  puVar30 = &UNK_1104c8fd0;
  func_0x000107c613fc(&UNK_1104c8fd0,0x18,7);
  *(undefined8 *)(puVar30 + 0x10) = uVar43;
  puVar31 = &UNK_1104c8ff8;
  func_0x000107c613fc(&UNK_1104c8ff8,0x20,7);
  *(code **)(puVar31 + 0x10) = FUN_1020ca558;
  *(undefined **)(puVar31 + 0x18) = puVar30;
  pcStack_88 = (code *)0x1020ca8bc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_1104c9010;
  ppuVar32 = &puStack_a8;
  puStack_80 = puVar31;
  func_0x000107c60bc4();
  puVar33 = puStack_80;
  func_0x000107c6157c(puVar31);
  func_0x000107c61574(puVar33);
  puVar33 = &UNK_1104c9048;
  func_0x000107c613fc(&UNK_1104c9048,0x18,7);
  *(undefined8 *)(puVar33 + 0x10) = uVar43;
  puVar34 = &UNK_1104c9070;
  func_0x000107c613fc(&UNK_1104c9070,0x20,7);
  *(undefined8 *)(puVar34 + 0x10) = 0x1020ca56c;
  *(undefined **)(puVar34 + 0x18) = puVar33;
  pcStack_88 = FUN_1020ca580;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1020ca198;
  puStack_90 = &UNK_1104c9088;
  ppuVar35 = &puStack_a8;
  puStack_80 = puVar34;
  func_0x000107c60bc4();
  puVar36 = puStack_80;
  func_0x000107c6157c(puVar34);
  func_0x000107c61574(puVar36);
  puVar36 = &UNK_1104c90c0;
  func_0x000107c613fc(&UNK_1104c90c0,0x18,7);
  *(undefined8 *)(puVar36 + 0x10) = uVar43;
  puVar37 = &UNK_1104c90e8;
  func_0x000107c613fc(&UNK_1104c90e8,0x20,7);
  *(code **)(puVar37 + 0x10) = FUN_1020ca5a0;
  *(undefined **)(puVar37 + 0x18) = puVar36;
  pcStack_88 = FUN_1020ca5b4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca898;
  puStack_90 = &UNK_1104c9100;
  ppuVar38 = &puStack_a8;
  puStack_80 = puVar37;
  func_0x000107c60bc4();
  puVar39 = puStack_80;
  func_0x000107c6157c(puVar37);
  func_0x000107c61574(puVar39);
  puVar39 = &UNK_1104c9138;
  func_0x000107c613fc(&UNK_1104c9138,0x18,7);
  *(undefined8 *)(puVar39 + 0x10) = uVar43;
  puVar40 = &UNK_1104c9160;
  func_0x000107c613fc(&UNK_1104c9160,0x20,7);
  *(undefined8 *)(puVar40 + 0x10) = 0x1020ca7c0;
  *(undefined **)(puVar40 + 0x18) = puVar39;
  pcStack_88 = (code *)0x1020ca7c8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1020ca898;
  puStack_90 = &UNK_1104c9178;
  ppuVar41 = &puStack_a8;
  puStack_80 = puVar40;
  func_0x000107c60bc4();
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar40);
  func_0x000107c61574(puVar1);
  func_0x000107c4c578(param_1);
  func_0x000107c60bd0(ppuVar41);
  func_0x000107c60bd0(ppuVar38);
  func_0x000107c60bd0(ppuVar35);
  func_0x000107c60bd0(ppuVar32);
  func_0x000107c60bd0(ppuVar29);
  func_0x000107c60bd0(ppuVar26);
  func_0x000107c60bd0(ppuVar25);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar23);
  func_0x000107c60bd0(ppuVar20);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x50,0x22,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca070);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x75,0x52,0x1a,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca074);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x75,0x54,0x20,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca078);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x75,0x56,0x22,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca07c);
    (*pcVar2)();
  }
  puVar3 = puVar16;
  func_0x000107c61544(puVar16,"",0x75,0x58,0x15,1);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(puVar16);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca080);
    (*pcVar2)();
  }
  puVar3 = puVar19;
  func_0x000107c61544(puVar19,"",0x75,0x5a,0x23,1);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(puVar19);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca084);
    (*pcVar2)();
  }
  puVar3 = puVar22;
  func_0x000107c61544(puVar22,"",0x75,0x5c,0x27,1);
  func_0x000107c61574(puVar22);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca088);
    (*pcVar2)();
  }
  uVar42 = 0;
  func_0x000107c61544(0,"",0x75,0x5e,0x1d,1);
  if ((uVar42 & 1) == 0) {
    uVar42 = 0;
    func_0x000107c61544(0,"",0x75,0x5f,0x1e,1);
    if ((uVar42 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca090);
      (*pcVar2)();
    }
    uVar42 = 0;
    func_0x000107c61544(0,"",0x75,0x60,0x1b,1);
    func_0x000107c61574(puVar27);
    if ((uVar42 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca094);
      (*pcVar2)();
    }
    puVar3 = puVar28;
    func_0x000107c61544(puVar28,"",0x75,0x61,0x24,1);
    func_0x000107c61574(puVar30);
    func_0x000107c61574(puVar28);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca098);
      (*pcVar2)();
    }
    puVar3 = puVar31;
    func_0x000107c61544(puVar31,"",0x75,99,0x25,1);
    func_0x000107c61574(puVar33);
    func_0x000107c61574(puVar31);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = puVar34;
      func_0x000107c61544(puVar34,"",0x75,0x65,0x23,1);
      func_0x000107c61574(puVar36);
      func_0x000107c61574(puVar34);
      if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a0);
        (*pcVar2)();
      }
      puVar3 = puVar37;
      func_0x000107c61544(puVar37,"",0x75,0x67,0x1c,1);
      func_0x000107c61574(puVar39);
      func_0x000107c61574(puVar37);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = puVar40;
        func_0x000107c61544(puVar40,"",0x75,0x69,0x19,1);
        func_0x000107c61574(puVar40);
        if (((ulong)puVar3 & 1) == 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a8);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca0a4);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca09c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca08c);
  (*pcVar2)();
}



/* Entry: 1020ca474; end: 1020ca493;  */

void FUN_1020ca474(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca494; end: 1020ca4af;  */

void FUN_1020ca494(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_1104c8b20;
  func_0x000107c613fc(&UNK_1104c8b20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar4 = &UNK_1104c8b48;
  func_0x000107c613fc(&UNK_1104c8b48,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1020ca49c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1020ca4b0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1020ca36c;
  puStack_58 = &UNK_1104c8b60;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e8(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x6e,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ca36c);
  (*pcVar2)();
}



/* Entry: 1020ca4b0; end: 1020ca4cf;  */

void FUN_1020ca4b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca4d0; end: 1020ca4e3;  */

void FUN_1020ca4d0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1020ca4e4; end: 1020ca503;  */

void FUN_1020ca4e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca504; end: 1020ca517;  */

void FUN_1020ca504(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1020ca518; end: 1020ca557;  */

void FUN_1020ca518(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca558; end: 1020ca57f;  */

void FUN_1020ca558(uint param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1020ca580; end: 1020ca59f;  */

void FUN_1020ca580(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca5a0; end: 1020ca5b3;  */

void FUN_1020ca5a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1020ca5b4; end: 1020ca5d3;  */

void FUN_1020ca5b4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ca5d4; end: 1020ca7bb;  */

undefined8 FUN_1020ca5d4(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020ca7b4);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      uVar8 = (ulong)param_1;
      if ((long)uVar8 < 0x3c) {
        func_0x0001020e75c4();
      }
      else {
        if (uVar8 < 0xe10) {
          lVar6 = (long)uVar8 / 0x3c;
          func_0x0001020e7680();
        }
        else if (uVar8 >> 7 < 0x2a3) {
          lVar6 = (long)uVar8 / 0xe10;
          func_0x0001020e774c();
        }
        else {
          lVar6 = (long)uVar8 / 0x15180;
          func_0x0001020e7818();
        }
        lVar5 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        puVar1 = PTR___sSiN_11034deb0;
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        puVar2 = PTR___sSis7CVarArgsWP_11034df08;
        *(undefined **)(lVar5 + 0x38) = puVar1;
        *(undefined **)(lVar5 + 0x40) = puVar2;
        *(long *)(lVar5 + 0x20) = lVar6;
        func_0x000107c5fb00(param_2,param_3,lVar5);
        func_0x000107c6142c(param_3);
      }
      (**(code **)(lVar7 + 8))
                (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020ca7bc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020ca7b8);
  (*pcVar3)();
}



/* Entry: 1020ca7bc; end: 1020ca8d3;  */

void FUN_1020ca7bc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long unaff_x20;
  
  if ((param_3 & 1) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Entry: 1020ca8d4; end: 1020ca8fb;  */

void FUN_1020ca8d4(void)

{
  func_0x0001020ca9fc();
  return;
}



/* Entry: 1020ca8fc; end: 1020ca907;  */

void FUN_1020ca8fc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020ca908,param_1);
  return;
}



/* Entry: 1020ca908; end: 1020ca92f;  */

void FUN_1020ca908(void)

{
  func_0x0001020ca9fc();
  return;
}



/* Entry: 1020ca930; end: 1020ca93b;  */

void FUN_1020ca930(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020ca93c,param_1);
  return;
}



/* Entry: 1020ca93c; end: 1020ca963;  */

void FUN_1020ca93c(void)

{
  func_0x0001020ca9fc();
  return;
}



/* Entry: 1020ca964; end: 1020ca96f;  */

void FUN_1020ca964(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1020ca970,param_1);
  return;
}


