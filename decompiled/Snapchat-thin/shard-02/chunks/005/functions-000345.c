/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e1931c; end: 101e19397;  */

void FUN_101e1931c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e19354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e19398; end: 101e1941f;  */

void FUN_101e19398(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined1 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_9;
  *(undefined8 *)(unaff_x22 + 0x28) = param_10;
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_8;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e19420;
  *(undefined1 *)(plVar1 + 0xf) = param_6;
  plVar1[4] = param_5;
  plVar1[5] = param_2;
  plVar1[2] = param_3;
  plVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1952c,0,0);
  return;
}



/* Entry: 101e19420; end: 101e1948b;  */

void FUN_101e19420(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_101e1948c;
  }
  else {
    pcVar1 = FUN_101e194cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1948c; end: 101e194cb;  */

void FUN_101e1948c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(unaff_x22 + 0x10))(uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e194c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e194cc; end: 101e1950b;  */

void FUN_101e194cc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x20))(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e19508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1950c; end: 101e1952b;  */

void FUN_101e1950c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1952c,0,0);
  return;
}



/* Entry: 101e1952c; end: 101e195a3;  */

/* WARNING: Removing unreachable block (ram,0x000101e19550) */

void FUN_101e1952c(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e195a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101e195a4; end: 101e195eb;  */

void FUN_101e195a4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e195ec,0,0);
  return;
}



/* Entry: 101e195ec; end: 101e196b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e195ec(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined1 uVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x19;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long unaff_x22;
  ulong uVar22;
  ulong unaff_x29;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_50;
  long *plStack_40;
  long *plStack_38;
  ulong uStack_30;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar18 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  puVar8 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar18,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0x38) = puVar8;
  func_0x000107c61170(uVar18);
  plVar9 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101e196b8;
  lVar19 = *(long *)(unaff_x22 + 0x28);
  lVar11 = *(long *)(unaff_x22 + 0x10);
  lVar16 = *(long *)(unaff_x22 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x78);
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar5 = (long *)&stack0xffffffffffffffe0;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9[0x19] = *(long *)(unaff_x22 + 0x20);
  plVar9[0x1a] = lVar19;
  *(undefined1 *)(plVar9 + 0x28) = uVar3;
  plVar9[0x17] = lVar16;
  plVar9[0x18] = (long)puVar8;
  plVar9[0x16] = lVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    pcVar4 = FUN_101e17ccc;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  lStack_50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = *(long **)(plVar9[0x1a] + _DAT_112e30280);
  plVar13 = plVar9 + 5;
  *plVar13 = 7;
  plVar7 = (long *)0xa0;
  plStack_40 = unaff_x19;
  plStack_38 = plVar9;
  func_0x000107c615b8();
  plVar9[0x1b] = (long)plVar7;
  plVar14 = plVar7;
  func_0x000101e19358();
  plVar9[0x1c] = (long)plVar14;
  *plVar7 = (long)plVar9;
  plVar7[1] = (long)FUN_101e17d88;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_50) {
    plVar10 = plVar9 + 4;
    plVar9 = plVar9 + 6;
    uVar22 = uStack_30 & 0xefffffffffffffff;
    pcVar4 = FUN_101e17ccc;
LAB_104876574:
    *(long **)((long)plVar5 + -0x20) = plStack_40;
    *(ulong *)((long)plVar5 + -0x10) = uVar22 | 0x1000000000000000;
    *(code **)((long)plVar5 + -8) = pcVar4;
    *(long **)((long)plVar5 + -0x18) = plVar7;
    plVar7[0xb] = (long)plVar14;
    plVar7[0xc] = (long)plVar9;
    plVar7[9] = (long)plVar13;
    plVar7[10] = (long)&UNK_1106c51c8;
    plVar7[8] = (long)plVar10;
    lVar19 = *plVar20;
    plVar7[0xd] = (long)&PTR_DAT_1106c5148;
    lVar11 = 0x10;
    _swift_task_alloc();
    plVar7[0xe] = lVar11;
    lVar11 = *(long *)(lVar19 + 0x50);
    plVar7[0xf] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    plVar7[0x10] = lVar11;
    plVar9 = (long *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    plVar7[0x11] = (long)plVar9;
    puVar12 = (undefined8 *)0x70;
    _swift_task_alloc();
    plVar7[0x12] = (long)puVar12;
    *puVar12 = plVar7;
    puVar12[1] = &UNK_104876614;
    puVar1 = *(ulong **)((long)plVar5 + -0x10);
    uStack_118 = *(undefined8 *)((long)plVar5 + -8);
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    plVar5 = &lStack_70;
    pcStack_58 = FUN_101e17d88;
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0xd8));
    if (plVar20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        pcVar4 = FUN_101e17e24;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      pcVar4 = FUN_101e18aa4;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_80 = (ulong)&uStack_60 | 0x1000000000000000;
    pcStack_78 = FUN_101e17e24;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9[0x1d] = plVar9[4];
    plVar20 = *(long **)(plVar9[0x1a] + _DAT_112e30288);
    plVar17 = plVar9 + 8;
    *plVar17 = 7;
    plVar7 = (long *)0xa0;
    plStack_90 = plVar13;
    plStack_88 = plVar9;
    func_0x000107c615b8();
    plVar9[0x1e] = (long)plVar7;
    *plVar7 = (long)plVar9;
    plVar7[1] = (long)FUN_101e17ee0;
    plVar14 = (long *)plVar9[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      plVar10 = plVar9 + 7;
      plVar9 = plVar9 + 9;
      uVar22 = uStack_80 & 0xefffffffffffffff;
      plVar13 = plVar17;
      plStack_40 = plStack_90;
      pcVar4 = pcStack_78;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
    plVar5 = &lStack_c0;
    pcStack_a8 = FUN_101e17ee0;
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_b8 = *plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)(lStack_b8 + 0xf0));
    if (plVar20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
        pcVar4 = FUN_101e17f7c;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      pcVar4 = (code *)0x101e18b00;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_d0 = (ulong)&uStack_b0 | 0x1000000000000000;
    pcStack_c8 = FUN_101e17f7c;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9[0x1f] = plVar9[7];
    plVar20 = *(long **)(plVar9[0x1a] + _DAT_112e30290);
    plVar13 = plVar9 + 0xb;
    *plVar13 = 7;
    plVar7 = (long *)0xa0;
    plStack_e0 = plVar17;
    plStack_d8 = plVar9;
    func_0x000107c615b8();
    plVar9[0x20] = (long)plVar7;
    *plVar7 = (long)plVar9;
    plVar7[1] = (long)FUN_101e18038;
    plVar14 = (long *)plVar9[0x1c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      plVar10 = plVar9 + 10;
      plVar9 = plVar9 + 0xc;
      uVar22 = uStack_d0 & 0xefffffffffffffff;
      plStack_40 = plStack_e0;
      pcVar4 = pcStack_c8;
      goto LAB_104876574;
    }
    func_0x000107c60e78();
    uStack_100 = (ulong)&uStack_d0 | 0x1000000000000000;
    plVar5 = &lStack_110;
    pcStack_f8 = FUN_101e18038;
    puVar1 = &uStack_100;
    lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_108 = *plVar9;
    plVar9 = (long *)*plVar9;
    func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x100));
    if (plVar20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
        pcVar4 = (code *)0x101e180d4;
        goto _swift_task_switch;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
      pcVar4 = (code *)0x101e18b64;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    uStack_118 = 0x101e180d4;
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9[0x21] = plVar9[10];
    plVar20 = *(long **)(plVar9[0x1a] + _DAT_112e30278);
    puVar12 = (undefined8 *)0x70;
    func_0x000107c615b8();
    plVar9[0x22] = (long)puVar12;
    *puVar12 = plVar9;
    puVar12[1] = 0x101e18168;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = *plVar9;
      func_0x000107c615c0(*(undefined8 *)(*plVar9 + 0x110));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar21 = *(undefined8 *)(lVar19 + 0xd0);
        uVar18 = *(undefined8 *)(lVar19 + 0xb0);
        lVar15 = *(long *)(lVar19 + 0x10);
        lVar11 = lVar15;
        func_0x000107c4a040();
        *(char *)(lVar19 + 0x141) = (char)lVar11;
        func_0x000107c615e8(lVar15);
        FUN_101e1a4e0(lVar11,uVar21,uVar18);
        *(long *)(lVar19 + 0x118) = lVar11;
        if (lVar11 == 0) {
          *(undefined8 *)(lVar19 + 0x68) = 3;
          iVar6 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar6 != 0) {
            func_0x000107c61658(lVar19 + 0x68,&UNK_1106c51c8,*(undefined8 *)(lVar19 + 0xe0));
          }
          uVar21 = *(undefined8 *)(lVar19 + 0x108);
          uVar18 = *(undefined8 *)(lVar19 + 0xe8);
          func_0x000107c615e8(*(undefined8 *)(lVar19 + 0xf8));
          func_0x000107c615e8(uVar21);
          func_0x000107c615e8(uVar18);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101e1833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar19 + 8))(3);
            return;
          }
        }
        else {
          func_0x000107c42400();
          func_0x000107c61180();
          if (lVar11 == 0) goto LAB_101e18444;
          cVar2 = *(char *)(lVar19 + 0x140);
          lVar15 = lVar11;
          func_0x000107c44b0c();
          func_0x000107c61170(lVar11);
          if ((int)lVar15 == 0 || cVar2 == '\0') {
            lVar11 = *(long *)(lVar19 + 0xe8);
            func_0x000107c50098();
            func_0x000107c61180();
            if (lVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e182b0);
              (*pcVar4)();
            }
          }
          else {
            lVar11 = *(long *)(lVar19 + 0xf8);
            func_0x000107c50090();
            func_0x000107c61180();
            if (lVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e18450);
              (*pcVar4)();
            }
          }
          *(long *)(lVar19 + 0x120) = lVar11;
          func_0x000107c506cc();
          func_0x000107c61180();
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101e1844c);
            (*pcVar4)();
          }
          func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
          func_0x0001000d224c(lVar19 + 0x70);
          uVar18 = *(undefined8 *)(lVar19 + 0x70);
          lVar15 = lVar11;
          func_0x000100759c94(lVar11,uVar18);
          *(long *)(lVar19 + 0x128) = lVar15;
          func_0x000107c61170(uVar18);
          func_0x000107c61170(lVar11);
          plVar9 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(lVar19 + 0x130) = plVar9;
          *plVar9 = lVar19;
          plVar9[1] = (long)FUN_101e18450;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
            (*(code *)&UNK_100ff4658)();
            return;
          }
        }
        func_0x000107c60e78();
LAB_101e18444:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e18448);
        (*pcVar4)();
      }
      pcVar4 = FUN_101e181dc;
      goto _swift_task_switch;
    }
    plVar9 = plVar9 + 2;
  }
  *(ulong *)((long)plVar5 + -0x10) = (ulong)puVar1 & 0xefffffffffffffff | 0x1000000000000000;
  *(undefined8 *)((long)plVar5 + -8) = uStack_118;
  *(undefined8 **)((long)plVar5 + -0x18) = puVar12;
  puVar12[5] = plVar9;
  puVar12[6] = plVar20;
  lVar19 = *(long *)(*plVar20 + 0x50);
  puVar12[7] = lVar19;
  lVar11 = 0;
  __sSqMa(0,lVar19);
  puVar12[8] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  puVar12[9] = lVar11;
  uVar22 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[10] = uVar22;
  lVar11 = *(long *)(lVar19 + -8);
  puVar12[0xb] = lVar11;
  uVar22 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar12[0xc] = uVar22;
  pcVar4 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e196b8; end: 101e19717;  */

void FUN_101e196b8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e19718;
  }
  else {
    pcVar1 = FUN_101e19a58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e19718; end: 101e19793;  */

void FUN_101e19718(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x10);
    func_0x000107c61174();
    lVar1 = 0;
  }
  *(long *)(unaff_x22 + 0x50) = lVar1;
  *(long *)(unaff_x22 + 0x58) = lVar2;
  plVar3 = (long *)0x90;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e19794;
  lVar1 = *(long *)(unaff_x22 + 0x28);
  plVar3[8] = *(long *)(unaff_x22 + 0x38);
  plVar3[9] = lVar1;
  plVar3[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e19ba8,0,0);
  return;
}



/* Entry: 101e19794; end: 101e197f3;  */

void FUN_101e19794(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e197f4;
  }
  else {
    pcVar1 = FUN_101e19afc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e197f4; end: 101e19a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e197f4(void)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c614f0();
  FUN_101e19f18();
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x28) + _DAT_112e30298;
    uVar1 = *(undefined1 *)(unaff_x22 + 0x78);
    func_0x0001000a8868(lVar3,*(undefined8 *)(lVar3 + 0x18));
    FUN_101e16a2c(uVar1,lVar4);
    func_0x000107c61654();
    func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101e198a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar13 = *(long *)(unaff_x22 + 0x28);
  cVar2 = *(char *)(unaff_x22 + 0x78);
  uVar12 = *(undefined8 *)(lVar13 + _DAT_112e30290);
  lVar3 = 0;
  func_0x000101e16988();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x28) = 0;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = uVar12;
  func_0x000107c6157c();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  *(undefined8 *)(lVar4 + 0x18) = uVar9;
  *(undefined8 *)(lVar4 + 0x20) = uVar12;
  plVar6 = (long *)(lVar13 + _DAT_112e30298);
  func_0x0001000a8868(plVar6,plVar6[3]);
  uVar10 = *(undefined8 *)(*plVar6 + 0x10);
  uVar5 = 0x74726f707865;
  if (cVar2 != '\x01') {
    uVar5 = 0x646e6573;
  }
  uVar9 = 0xe600000000000000;
  if (cVar2 != '\x01') {
    uVar9 = 0xe400000000000000;
  }
  uVar12 = 0x70756b636162;
  if (cVar2 != '\0') {
    uVar12 = uVar5;
  }
  uVar5 = 0xe600000000000000;
  if (cVar2 != '\0') {
    uVar5 = uVar9;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c5fadc(uVar12,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001058db6e0(uVar10,uVar12,1);
  func_0x000107c61170(uVar12);
  ppuStack_68 = &PTR_DAT_11048a428;
  alStack_88[0] = lVar4;
  lStack_70 = lVar3;
  func_0x000103a77d78(0);
  func_0x000107c610f8();
  func_0x000107c6157c(lVar4);
  func_0x000103a77b1c(uVar7,uVar8,alStack_88);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101e19a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7);
  return;
}



/* Entry: 101e19a58; end: 101e19afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e19a58(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000101e19358();
  puVar3 = &UNK_1106c51c8;
  func_0x000107c613f8(&UNK_1106c51c8,param_1,0,0);
  *param_1 = uVar4;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x28) + _DAT_112e30298;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x78);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_101e16a2c(uVar2,puVar3);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e19af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e19afc; end: 101e19b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e19afc(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x28) + _DAT_112e30298;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x78);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  FUN_101e16a2c(uVar2,uVar3);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e19b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e19b8c; end: 101e19ba7;  */

void FUN_101e19b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e19ba8,0,0);
  return;
}



/* Entry: 101e19ba8; end: 101e19c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e19ba8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x48) + _DAT_112e30290);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e19c48;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e19c48; end: 101e19c9f;  */

void FUN_101e19c48(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e19ca0;
  }
  else {
    pcVar1 = FUN_101e19ecc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e19ca0; end: 101e19dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e19ca0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  func_0x0001000285a8(0x112e2de80,&UNK_10da18eb0);
  func_0x0001000d224c(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar1 = &UNK_11048a548;
  func_0x000107c613fc(&UNK_11048a548,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar2 = uVar6;
  func_0x0001048897a0(uVar6,1,0,FUN_101e1aa50,puVar1);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar6);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e19dc0;
                    /* WARNING: Could not recover jumptable at 0x000101e19dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101e1a864();
  return;
}



/* Entry: 101e19dc0; end: 101e19e13;  */

void FUN_101e19dc0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e19e14,0,0);
  return;
}



/* Entry: 101e19e14; end: 101e19ecb;  */

void FUN_101e19e14(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e19e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e19ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101e19ecc; end: 101e19f17;  */

void FUN_101e19ecc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e19f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e19f18; end: 101e1a4df;  */

undefined8 ****** FUN_101e19f18(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 uVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  undefined8 *****pppppuVar12;
  long extraout_x12;
  undefined8 ******unaff_x20;
  undefined *puVar13;
  undefined8 ******ppppppuVar14;
  long lVar15;
  long lVar16;
  undefined8 *****pppppuVar17;
  undefined8 ******ppppppuVar18;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 uStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_58;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar10 - extraout_x12;
  ppppppuVar3 = unaff_x20;
  func_0x000107c4403c();
  func_0x000107c61180();
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    func_0x000107c61654();
    return unaff_x20;
  }
  func_0x000107c4412c();
  func_0x000107c61180();
  if (unaff_x20 == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1a4d8);
    (*pcVar1)();
  }
  ppppppuVar4 = (undefined8 ******)0x0;
  uStack_c0 = uVar10;
  func_0x000100fac9a0();
  uVar9 = 0x112d51160;
  func_0x0001000285a8(0x112d51160,&UNK_10da11350);
  uVar5 = uVar9;
  func_0x000100fac9e4();
  ppppppuVar14 = unaff_x20;
  uStack_70 = uVar9;
  func_0x000107c5f9e8(unaff_x20,ppppppuVar4,uVar9,uVar5);
  ppppppuVar3 = unaff_x20;
  func_0x000107c61170();
  lStack_b8 = lVar16;
  lStack_b0 = lVar15;
  if (((ulong)ppppppuVar14 & 0xc000000000000001) == 0) {
    uVar11 = -1L << ((ulong)*(byte *)(ppppppuVar14 + 4) & 0x3f);
    ppppppuVar18 = ppppppuVar14 + 8;
    uStack_88 = ~uVar11;
    uVar11 = -uVar11;
    uVar10 = 0xffffffffffffffff;
    if (uVar11 < 0x40) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    pppppuVar17 = (undefined8 *****)(uVar10 & (ulong)*ppppppuVar18);
  }
  else {
    ppppppuVar3 = (undefined8 ******)((ulong)ppppppuVar14 & 0xffffffffffffff8);
    if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar14) {
      ppppppuVar3 = ppppppuVar14;
    }
    func_0x000107c60418();
    ppppppuVar18 = (undefined8 ******)0x0;
    uStack_88 = 0;
    pppppuVar17 = (undefined8 *****)0x0;
    ppppppuVar14 = (undefined8 ******)((ulong)ppppppuVar3 | 0x8000000000000000);
  }
  pppppuStack_a0 = (undefined8 ******)0x0;
  pppppuStack_98 = (undefined8 ******)0x0;
  uStack_90 = 0;
  pppppuStack_80 = (undefined8 ******)0x0;
  pppppuStack_78 = (undefined8 ******)0x0;
  uVar10 = uStack_88 + 0x40;
  lVar15 = 0;
  lStack_a8 = lVar2;
  while (lVar2 = lVar15, pppppuVar12 = pppppuVar17, -1 < (long)ppppppuVar14) {
    while (pppppuVar12 == (undefined8 *****)0x0) {
      lVar16 = lVar2 + 1;
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1a4d4);
        (*pcVar1)();
      }
      if ((long)(uVar10 >> 6) <= lVar16) {
        pppppuVar17 = (undefined8 *****)0x0;
        goto LAB_101e1a278;
      }
      lVar2 = lVar16;
      pppppuVar12 = ppppppuVar18[lVar16];
    }
    uVar11 = ((ulong)pppppuVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 |
             ((ulong)pppppuVar12 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    unaff_x20 = (undefined8 ******)
                ppppppuVar14[7][LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar2 * 0x40];
    func_0x000107c615f0(unaff_x20);
    ppppppuVar8 = ppppppuVar4;
    pppppuVar12 = (undefined8 *****)((long)pppppuVar12 - 1U & (ulong)pppppuVar12);
    if (unaff_x20 == (undefined8 ******)0x0) goto LAB_101e1a278;
LAB_101e1a144:
    ppppppuVar4 = unaff_x20;
    func_0x000107c43ef0();
    ppppppuVar3 = unaff_x20;
    lVar15 = lVar2;
    pppppuVar17 = pppppuVar12;
    if ((int)ppppppuVar4 == 5) {
      ppppppuVar4 = unaff_x20;
      func_0x000107c43fb4();
      func_0x000107c61180();
      if (ppppppuVar4 == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1a4e0);
        (*pcVar1)();
      }
      ppppppuVar6 = ppppppuVar4;
      func_0x000107c4407c();
      func_0x000107c61180();
      func_0x000107c615e8(ppppppuVar4);
      if (ppppppuVar6 == (undefined8 ******)0x0) {
        func_0x000107c6142c(pppppuStack_80);
        pppppuStack_98 = (undefined8 ******)0x0;
        pppppuStack_80 = (undefined8 ******)0x0;
        ppppppuVar4 = ppppppuVar8;
      }
      else {
        ppppppuVar7 = ppppppuVar6;
        func_0x000107c5faec();
        ppppppuVar4 = ppppppuVar8;
        pppppuStack_98 = ppppppuVar7;
        func_0x000107c61170(ppppppuVar6);
        func_0x000107c6142c(pppppuStack_80);
        pppppuStack_80 = ppppppuVar8;
      }
      ppppppuVar8 = unaff_x20;
      func_0x000107c44130();
      uStack_90 = CONCAT44(uStack_90._4_4_,(int)ppppppuVar8);
      func_0x000107c615e8();
      uStack_90 = CONCAT44(1,(int)uStack_90);
    }
    else if ((int)ppppppuVar4 == 6) {
      func_0x000107c43fb4();
      func_0x000107c61180();
      if (ppppppuVar3 == (undefined8 ******)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e1a4dc);
        (*pcVar1)();
      }
      ppppppuVar6 = ppppppuVar3;
      func_0x000107c4407c();
      func_0x000107c61180();
      func_0x000107c615e8(ppppppuVar3);
      if (ppppppuVar6 == (undefined8 ******)0x0) {
        func_0x000107c615e8(unaff_x20);
        ppppppuVar3 = (undefined8 ******)pppppuStack_78;
        func_0x000107c6142c();
        pppppuStack_a0 = (undefined8 ******)0x0;
        pppppuStack_78 = (undefined8 ******)0x0;
        ppppppuVar4 = ppppppuVar8;
      }
      else {
        ppppppuVar3 = ppppppuVar6;
        func_0x000107c5faec();
        ppppppuVar4 = ppppppuVar8;
        pppppuStack_a0 = ppppppuVar3;
        func_0x000107c61170(ppppppuVar6);
        func_0x000107c615e8(unaff_x20);
        func_0x000107c6142c();
        ppppppuVar3 = (undefined8 ******)pppppuStack_78;
        pppppuStack_78 = ppppppuVar8;
      }
    }
    else {
      func_0x000107c615e8();
      ppppppuVar4 = ppppppuVar8;
    }
  }
  func_0x000107c60444();
  unaff_x20 = (undefined8 ******)((ulong)ppppppuVar14 & 0x7fffffffffffffff);
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    func_0x000107c615e8();
    ppppppuVar8 = &pppppuStack_68;
    pppppuStack_68 = ppppppuVar4;
    func_0x000107c6147c(&pppppuStack_58,ppppppuVar8,PTR___syXlN_11034f1a0 + 8,uStack_70,7);
    unaff_x20 = (undefined8 ******)pppppuStack_58;
    if ((undefined8 ******)pppppuStack_58 != (undefined8 ******)0x0) goto LAB_101e1a144;
  }
LAB_101e1a278:
  FUN_101d58fcc(ppppppuVar14,ppppppuVar18,uStack_88,lVar15,pppppuVar17);
  ppppppuVar3 = (undefined8 ******)pppppuStack_78;
  pppppuVar17 = pppppuStack_80;
  lVar2 = lStack_b8;
  if ((undefined8 ******)pppppuStack_80 == (undefined8 ******)0x0) {
    func_0x000101e19358();
    func_0x000107c613f8(&UNK_1106c51c8,ppppppuVar14,0,0);
    *ppppppuVar14 = (undefined8 *****)0x6;
    func_0x000107c61654();
    ppppppuVar3 = (undefined8 ******)pppppuStack_78;
    goto LAB_101e1a3a4;
  }
  if ((uStack_90 & 0x100000000) == 0) {
LAB_101e1a330:
    func_0x000101e19358();
    func_0x000107c613f8(&UNK_1106c51c8,ppppppuVar14,0,0);
    pppppuVar12 = (undefined8 *****)0xa;
  }
  else {
    if ((int)uStack_90 == 3) {
      func_0x000107c5ed80(lStack_b8,pppppuStack_98,pppppuStack_80);
      if (ppppppuVar3 == (undefined8 ******)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61434(ppppppuVar3);
        ppppppuVar14 = (undefined8 ******)pppppuStack_a0;
        func_0x000107c5fadc(pppppuStack_a0,ppppppuVar3);
        func_0x000107c5176c(puVar13);
        func_0x000107c61180();
        func_0x000107c6142c(ppppppuVar3);
        func_0x000107c61170(ppppppuVar14);
      }
      lVar16 = lStack_a8;
      lVar15 = lStack_b0;
      uVar10 = uStack_c0;
      (**(code **)(lStack_b0 + 0x10))(uStack_c0,lVar2,lStack_a8);
      uVar9 = 0;
      func_0x000103a779bc(0);
      func_0x000107c610f8();
      func_0x000103a776d0(uVar10,puVar13,uVar9);
      func_0x000107c6142c(pppppuVar17);
      func_0x000107c6142c(ppppppuVar3);
      (**(code **)(lVar15 + 8))(lVar2,lVar16);
      return (undefined8 ******)(uVar10 | 0x8000000000000000);
    }
    if ((int)uStack_90 != 2) goto LAB_101e1a330;
    ppppppuVar4 = (undefined8 ******)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    ppppppuVar14 = (undefined8 ******)pppppuStack_98;
    func_0x000107c5fadc(pppppuStack_98,pppppuVar17);
    func_0x000107c5176c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (ppppppuVar4 != (undefined8 ******)0x0) {
      uVar9 = 0;
      func_0x000103a77994(0);
      func_0x000107c610f8();
      func_0x000103a774ec(ppppppuVar4,uVar9);
      func_0x000107c6142c(pppppuVar17);
      func_0x000107c6142c(ppppppuVar3);
      return ppppppuVar4;
    }
    func_0x000101e19358();
    func_0x000107c613f8(&UNK_1106c51c8,ppppppuVar14,0,0);
    pppppuVar12 = (undefined8 *****)0x2;
    unaff_x20 = (undefined8 ******)0x0;
  }
  *ppppppuVar14 = pppppuVar12;
  func_0x000107c61654();
  func_0x000107c6142c(pppppuVar17);
LAB_101e1a3a4:
  func_0x000107c6142c(ppppppuVar3);
  return unaff_x20;
}



/* Entry: 101e1a4e0; end: 101e1a6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e1a4e0(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *apuStack_a8 [2];
  long lStack_98;
  undefined *puStack_50;
  undefined *apuStack_48 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_50 = param_3;
  puVar5 = param_3;
  if ((param_1 & 1) == 0) {
LAB_101e1a590:
    func_0x000107c61174();
  }
  else {
    func_0x0001000d224c(apuStack_48);
    puStack_50 = (undefined *)0x0;
    puVar5 = apuStack_48[0];
    func_0x000107c4c568();
    func_0x000107c61180();
    func_0x000107c615e8(apuStack_48[0]);
    if (puVar5 != (undefined *)0x0) goto LAB_101e1a590;
    puVar5 = puStack_50;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar5);
    func_0x000107c61654();
    func_0x000107c614ac();
    puVar5 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  func_0x000107c60e78();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar5 = param_3;
  if (((ulong)puStack_50 & 1) != 0) {
    func_0x0001000d224c(apuStack_a8);
    puVar5 = apuStack_a8[0];
    func_0x000107c4c56c();
    func_0x000107c61180();
    puVar4 = param_3;
    func_0x000107c615e8(apuStack_a8[0]);
    param_3 = (undefined *)0x0;
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_3;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(puVar5);
      func_0x000107c61654();
      func_0x000107c614ac();
      puVar5 = (undefined *)0x0;
      goto LAB_101e1a67c;
    }
  }
  func_0x000107c61174();
LAB_101e1a67c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78();
    ppuVar3 = &puStack_140;
    puVar1 = PTR_PTR_1126b1378;
    func_0x000107c61168(PTR_PTR_1126b1378);
    func_0x000107c4c950(puVar4);
    uVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar5 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c5d904(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    pcStack_120 = FUN_101e1aac0;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0x42000000;
    puStack_130 = &UNK_100fac344;
    puStack_128 = &UNK_11048a588;
    puStack_118 = param_3;
    func_0x000107c60bc4(&puStack_140);
    puVar5 = puStack_118;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c507d4(param_2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar1);
    return puVar1;
  }
  return puVar5;
}



/* Entry: 101e1a6b0; end: 101e1a823;  */

void FUN_101e1a6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = PTR_PTR_1126b1378;
  func_0x000107c61168(PTR_PTR_1126b1378);
  func_0x000107c4c950(param_3);
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar3 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c5d904(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  pcStack_60 = FUN_101e1aac0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100fac344;
  puStack_68 = &UNK_11048a588;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c507d4(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101e1a824; end: 101e1a863;  */

void FUN_101e1a824(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1ac60,0,0);
  return;
}



/* Entry: 101e1a864; end: 101e1a87b;  */

void FUN_101e1a864(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1a87c,0,0);
  return;
}



/* Entry: 101e1a87c; end: 101e1a943;  */

void FUN_101e1a87c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101e1a8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101e1a944;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11048a570;
  func_0x000107c613fc(&UNK_11048a570,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101e1aa5c,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101e1a944; end: 101e1a983;  */

void FUN_101e1a944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1a984,0,0);
  return;
}



/* Entry: 101e1a984; end: 101e1a9a7;  */

void FUN_101e1a984(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e1a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101e1a9a8; end: 101e1aa4f;  */

void FUN_101e1a9a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  plVar11 = (long *)0x50;
  uVar9 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101e1ac6c;
  plVar11[4] = lVar4;
  plVar11[5] = lVar8;
  plVar11[2] = lVar3;
  plVar11[3] = lVar7;
  plVar10 = (long *)0x80;
  func_0x000107c615b8();
  plVar11[6] = (long)plVar10;
  *plVar10 = (long)plVar11;
  plVar10[1] = (long)FUN_101e19420;
  *(undefined1 *)(plVar10 + 0xf) = uVar9;
  plVar10[4] = lVar6;
  plVar10[5] = lVar1;
  plVar10[2] = lVar5;
  plVar10[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1952c,0,0);
  return;
}



/* Entry: 101e1aa50; end: 101e1aa5f;  */

void FUN_101e1aa50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_80;
  puVar2 = PTR_PTR_1126b1378;
  func_0x000107c61168(PTR_PTR_1126b1378);
  func_0x000107c4c950(uVar3);
  uVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c5d904(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  pcStack_60 = FUN_101e1aac0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100fac344;
  puStack_68 = &UNK_11048a588;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar3 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar3);
  func_0x000107c507d4(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101e1aa60; end: 101e1aaab;  */

void FUN_101e1aa60(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101e1aaac(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101e1aaac; end: 101e1aabf;  */

void FUN_101e1aaac(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101e1aac0; end: 101e1aae3;  */

void FUN_101e1aac0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 101e1aae4; end: 101e1aaff;  */

void FUN_101e1aae4(long param_1,long param_2)

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



/* Entry: 101e1ab00; end: 101e1ab37;  */

void FUN_101e1ab00(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed2c();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e1ab38; end: 101e1ab7b;  */

void FUN_101e1ab38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e1ab7c; end: 101e1ac23;  */

void FUN_101e1ab7c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  plVar11 = (long *)0x50;
  uVar9 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101e1ac24;
  plVar11[4] = lVar4;
  plVar11[5] = lVar8;
  plVar11[2] = lVar3;
  plVar11[3] = lVar7;
  plVar10 = (long *)0x80;
  func_0x000107c615b8();
  plVar11[6] = (long)plVar10;
  *plVar10 = (long)plVar11;
  plVar10[1] = (long)FUN_101e19420;
  *(undefined1 *)(plVar10 + 0xf) = uVar9;
  plVar10[4] = lVar6;
  plVar10[5] = lVar1;
  plVar10[2] = lVar5;
  plVar10[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1952c,0,0);
  return;
}



/* Entry: 101e1ac24; end: 101e1ac5f;  */

void FUN_101e1ac24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e1ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e1ac60; end: 101e1ac6f;  */

void FUN_101e1ac60(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e1a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101e1ac70; end: 101e1b21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1ac70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  uVar1 = param_3;
  func_0x000107c4cca8(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0x112e30328;
  func_0x0001000285a8(0x112e30328,&UNK_10da18ef8);
  pcVar3 = FUN_101e1b220;
  func_0x0001000cb480(FUN_101e1b220,0,uVar1);
  func_0x000107c61574(uVar2);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar1 = param_5;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112e30330,&UNK_10db62670);
  uVar1 = param_4;
  func_0x000107c5b3ac();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(auStack_88);
  puVar5 = auStack_88;
  func_0x0001000a8868(puVar5,uStack_70);
  uVar6 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_70,uStack_68,puVar5);
  func_0x0001000834e4(auStack_88);
  uVar1 = param_7;
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar7 = &UNK_11048a640;
  func_0x000107c613fc(&UNK_11048a640,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(code **)(puVar7 + 0x18) = pcVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar6;
  *(undefined8 *)(puVar7 + 0x38) = uVar1;
  func_0x0001000285a8(0x112e30338,&UNK_10da18f00);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar1);
  pcVar8 = FUN_101e1b440;
  func_0x0001000bdd8c(FUN_101e1b440,puVar7);
  uVar9 = 0;
  func_0x0001002c4180(0);
  func_0x000107c610f8();
  func_0x000103a782dc(pcVar8,uVar9);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar3);
  *(code **)(unaff_x20 + 0x10) = pcVar8;
  return;
}



/* Entry: 101e1b220; end: 101e1b22b;  */

void FUN_101e1b220(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101e1b22c; end: 101e1b43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1b22c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *apuStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar10 = *(undefined8 *)(param_2 + _DAT_112ff4be0);
  lVar3 = 0;
  apuStack_e0[1] = (undefined8 *)param_6;
  apuStack_e0[2] = (undefined8 *)param_7;
  apuStack_e0[3] = param_1;
  func_0x000101e16a0c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126a95e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x10) = puVar5;
  ppuStack_68 = &PTR_DAT_11048a440;
  lVar6 = 0;
  alStack_88[0] = lVar4;
  lStack_70 = lVar3;
  FUN_101e177ac();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_88,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar9);
  lVar1 = _DAT_112e302b0;
  auStack_b0[0] = *puVar9;
  ppuStack_90 = &PTR_DAT_11048a440;
  lStack_98 = lVar3;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  lVar3 = lVar4;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(long *)(lVar7 + lVar1) = lVar3;
  *(undefined8 *)(lVar7 + _DAT_112e30278) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112e30280) = param_3;
  *(undefined8 *)(lVar7 + _DAT_112e30288) = param_4;
  *(undefined8 *)(lVar7 + _DAT_112e30290) = param_5;
  FUN_101e19240(auStack_b0,lVar7 + _DAT_112e30298);
  puVar2 = apuStack_e0[2];
  puVar9 = apuStack_e0[1];
  *(undefined8 **)(lVar7 + _DAT_112e302a0) = apuStack_e0[1];
  *(undefined8 **)(lVar7 + _DAT_112e302a8) = apuStack_e0[2];
  puVar5 = PTR_s_init_1125d9248;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar9);
  func_0x000107c615f0(puVar2);
  plVar8 = &lStack_c0;
  func_0x000107c61154(plVar8,puVar5);
  func_0x000107c61574(lVar4);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(alStack_88);
  *apuStack_e0[3] = plVar8;
  apuStack_e0[3][1] = &PTR_DAT_11048a460;
  return;
}



/* Entry: 101e1b440; end: 101e1b443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1b440(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *apuStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  apuStack_e0[1] = *(undefined8 **)(unaff_x20 + 0x30);
  apuStack_e0[2] = *(undefined8 **)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff4be0);
  lVar6 = 0;
  apuStack_e0[3] = param_1;
  func_0x000101e16a0c();
  lVar7 = lVar6;
  func_0x000107c613fc();
  puVar8 = PTR_PTR_1126a95e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x10) = puVar8;
  ppuStack_68 = &PTR_DAT_11048a440;
  lVar9 = 0;
  alStack_88[0] = lVar7;
  lStack_70 = lVar6;
  FUN_101e177ac();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_88,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  lVar4 = _DAT_112e302b0;
  auStack_b0[0] = *puVar12;
  ppuStack_90 = &PTR_DAT_11048a440;
  lStack_98 = lVar6;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  lVar6 = lVar7;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(long *)(lVar10 + lVar4) = lVar6;
  *(undefined8 *)(lVar10 + _DAT_112e30278) = uVar13;
  *(undefined8 *)(lVar10 + _DAT_112e30280) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112e30288) = uVar1;
  *(undefined8 *)(lVar10 + _DAT_112e30290) = uVar3;
  FUN_101e19240(auStack_b0,lVar10 + _DAT_112e30298);
  puVar5 = apuStack_e0[2];
  puVar12 = apuStack_e0[1];
  *(undefined8 **)(lVar10 + _DAT_112e302a0) = apuStack_e0[1];
  *(undefined8 **)(lVar10 + _DAT_112e302a8) = apuStack_e0[2];
  puVar8 = PTR_s_init_1125d9248;
  lStack_c0 = lVar10;
  lStack_b8 = lVar9;
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar12);
  func_0x000107c615f0(puVar5);
  plVar11 = &lStack_c0;
  func_0x000107c61154(plVar11,puVar8);
  func_0x000107c61574(lVar7);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(alStack_88);
  *apuStack_e0[3] = plVar11;
  apuStack_e0[3][1] = &PTR_DAT_11048a460;
  return;
}



/* Entry: 101e1b444; end: 101e1b48f;  */

void FUN_101e1b444(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e1b490; end: 101e1b4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1b490(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *apuStack_e0 [4];
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  apuStack_e0[1] = *(undefined8 **)(unaff_x20 + 0x30);
  apuStack_e0[2] = *(undefined8 **)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff4be0);
  lVar6 = 0;
  apuStack_e0[3] = param_1;
  func_0x000101e16a0c();
  lVar7 = lVar6;
  func_0x000107c613fc();
  puVar8 = PTR_PTR_1126a95e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + 0x10) = puVar8;
  ppuStack_68 = &PTR_DAT_11048a440;
  lVar9 = 0;
  alStack_88[0] = lVar7;
  lStack_70 = lVar6;
  FUN_101e177ac();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_88,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar12);
  lVar4 = _DAT_112e302b0;
  auStack_b0[0] = *puVar12;
  ppuStack_90 = &PTR_DAT_11048a440;
  lStack_98 = lVar6;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  lVar6 = lVar7;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(long *)(lVar10 + lVar4) = lVar6;
  *(undefined8 *)(lVar10 + _DAT_112e30278) = uVar13;
  *(undefined8 *)(lVar10 + _DAT_112e30280) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112e30288) = uVar1;
  *(undefined8 *)(lVar10 + _DAT_112e30290) = uVar3;
  FUN_101e19240(auStack_b0,lVar10 + _DAT_112e30298);
  puVar5 = apuStack_e0[2];
  puVar12 = apuStack_e0[1];
  *(undefined8 **)(lVar10 + _DAT_112e302a0) = apuStack_e0[1];
  *(undefined8 **)(lVar10 + _DAT_112e302a8) = apuStack_e0[2];
  puVar8 = PTR_s_init_1125d9248;
  lStack_c0 = lVar10;
  lStack_b8 = lVar9;
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar12);
  func_0x000107c615f0(puVar5);
  plVar11 = &lStack_c0;
  func_0x000107c61154(plVar11,puVar8);
  func_0x000107c61574(lVar7);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(alStack_88);
  *apuStack_e0[3] = plVar11;
  apuStack_e0[3][1] = &PTR_DAT_11048a460;
  return;
}



/* Entry: 101e1b4b0; end: 101e1b54f;  */

void FUN_101e1b4b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e1b550; end: 101e1b55f;  */

void FUN_101e1b550(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101e1b560; end: 101e1b787;  */

long FUN_101e1b560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11048a750;
  func_0x000107c613fc(&UNK_11048a750,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112e30410,&UNK_10da18f40);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar2 = FUN_101e1b89c;
  func_0x0001000bdd8c(FUN_101e1b89c,puVar1);
  uVar3 = 0;
  func_0x0001002c5e50(0);
  func_0x000107c610f8();
  func_0x000101e20bf0(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101e1b788; end: 101e1b89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1b788(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = 0x112e304e8;
  func_0x0001000285a8(0x112e304e8,&UNK_10db497d0);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112ff73d0);
  func_0x0001000bda74(uVar2,uVar1);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  func_0x0001000285a8(0x112e304f0,&UNK_10da18fa8);
  func_0x000107c4d8b4();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  lVar4 = 0;
  func_0x000101e1b9d0();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  *(undefined8 *)(lVar5 + 0x18) = uVar1;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11048a7a8;
  *param_1 = lVar5;
  return;
}



/* Entry: 101e1b89c; end: 101e1b8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e1b89c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0x112e304e8;
  func_0x0001000285a8(0x112e304e8,&UNK_10db497d0);
  uVar2 = *(undefined8 *)(lVar5 + _DAT_112ff73d0);
  func_0x0001000bda74(uVar2,uVar1);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112e304f0,&UNK_10da18fa8);
  func_0x000107c4d8b4();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar4 = 0;
  func_0x000101e1b9d0();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  *(undefined8 *)(lVar5 + 0x18) = uVar1;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11048a7a8;
  *param_1 = lVar5;
  return;
}



/* Entry: 101e1b8a8; end: 101e1b8db;  */

void FUN_101e1b8a8(void)

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



/* Entry: 101e1b8dc; end: 101e1b8eb;  */

void FUN_101e1b8dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e1b8ec; end: 101e1b98b;  */

void FUN_101e1b8ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e1b98c; end: 101e1b99b;  */

void FUN_101e1b98c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101e1b99c; end: 101e1b9ef;  */

void FUN_101e1b99c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e1b9f0; end: 101e1ba3f;  */

void FUN_101e1b9f0(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e1ba40;
  plVar1[9] = param_1;
  plVar1[10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c280,0,0);
  return;
}



/* Entry: 101e1ba40; end: 101e1baab;  */

void FUN_101e1ba40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  *(long *)(lVar1 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e1ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1baac,0,0);
  return;
}



/* Entry: 101e1baac; end: 101e1bc83;  */

void FUN_101e1baac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  uint uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  uVar3 = (uint)(*(ulong *)(unaff_x22 + 0x40) >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0x40) >> 0x30 & 0xff;
      if (uVar11 != (long)(int)uVar11) {
LAB_101e1bb28:
        uVar10 = 0;
        uVar12 = 1;
        goto LAB_101e1bb3c;
      }
    }
    else {
      if (SBORROW4(*(int *)(unaff_x22 + 0x3c),*(int *)(unaff_x22 + 0x38))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101e1bc84);
        (*pcVar4)();
      }
      uVar11 = (ulong)(*(int *)(unaff_x22 + 0x3c) - *(int *)(unaff_x22 + 0x38));
    }
  }
  else if (uVar13 == 2) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    lVar14 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    uVar11 = lVar14 - lVar9;
    if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101e1bc80);
      (*pcVar4)();
    }
    if (uVar11 != (long)(int)uVar11) goto LAB_101e1bb28;
  }
  else {
    uVar11 = 0;
  }
  uVar10 = (undefined4)uVar11;
  uVar12 = 0;
LAB_101e1bb3c:
  lVar14 = *(long *)(unaff_x22 + 0x48);
  *(undefined4 *)(unaff_x22 + 0xc0) = uVar10;
  *(undefined1 *)(unaff_x22 + 0xc4) = uVar12;
  puVar5 = (undefined8 *)0x112e305a8;
  func_0x0001000285a8(0x112e305a8,&UNK_10da19020);
  lVar9 = unaff_x22 + 0x10;
  func_0x0001048da110(unaff_x22 + 200);
  if (lVar14 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar5,0,0);
    *puVar5 = uVar15;
    func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined4 *)(unaff_x22 + 0xcc) = *(undefined4 *)(unaff_x22 + 200);
  func_0x00010011df08();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5faec();
  func_0x000107c61170(puVar5);
  puVar7 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(puVar6,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0x50) = puVar7;
  func_0x000107c61170(puVar6);
  plVar8 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101e1bc84;
  lVar9 = *(long *)(unaff_x22 + 0x38);
  lVar14 = *(long *)(unaff_x22 + 0x28);
  plVar8[9] = *(long *)(unaff_x22 + 0x40);
  plVar8[10] = lVar14;
  plVar8[8] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c75c,0,0);
  return;
}



/* Entry: 101e1bc84; end: 101e1bd23;  */

void FUN_101e1bc84(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x68) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_101e1bd24;
    lVar4 = *(long *)(lVar3 + 0x28);
    plVar1[6] = *(long *)(lVar3 + 0x50);
    plVar1[7] = lVar4;
    plVar1[5] = param_1;
    pcVar2 = FUN_101e1cb20;
  }
  else {
    *(long *)(lVar3 + 0x80) = unaff_x20;
    pcVar2 = FUN_101e1bde0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e1bd24; end: 101e1bd8f;  */

void FUN_101e1bd24(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_101e1bd90;
  }
  else {
    pcVar1 = FUN_101e1c224;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1bd90; end: 101e1bddf;  */

void FUN_101e1bd90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1bddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined4 *)(unaff_x22 + 0xcc));
  return;
}



/* Entry: 101e1bde0; end: 101e1bf07;  */

void FUN_101e1bde0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar4 = unaff_x22 + 0x20;
  func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x18),uVar3,&UNK_11048a838,6);
  if ((int)lVar4 != 0) {
    *(long *)(unaff_x22 + 0x88) = *(long *)(unaff_x22 + 0x20);
    if (*(long *)(unaff_x22 + 0x20) == 0) {
      plVar5 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa0) = plVar5;
      pcVar6 = FUN_101e1bf74;
    }
    else {
      func_0x000107c614b0();
      plVar5 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x90) = plVar5;
      pcVar6 = FUN_101e1bf08;
    }
    *plVar5 = unaff_x22;
    plVar5[1] = (long)pcVar6;
    lVar4 = *(long *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x40);
    lVar9 = *(long *)(unaff_x22 + 0x28);
    plVar5[7] = *(long *)(unaff_x22 + 0x50);
    plVar5[8] = lVar9;
    plVar5[5] = lVar4;
    plVar5[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1d2ec,0,0);
    return;
  }
  func_0x000107c614b0(*(undefined8 *)(unaff_x22 + 0x80));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61654();
  func_0x000107c614ac(uVar8);
  func_0x000107c61170(uVar7);
  func_0x00010006c090(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1bf08; end: 101e1bf73;  */

void FUN_101e1bf08(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xb8) = param_1;
    pcVar1 = FUN_101e1c0f4;
  }
  else {
    pcVar1 = FUN_101e1c1b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1bf74; end: 101e1bfdf;  */

void FUN_101e1bf74(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xb0) = param_1;
    pcVar1 = FUN_101e1bfe0;
  }
  else {
    pcVar1 = FUN_101e1c09c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1bfe0; end: 101e1c09b;  */

void FUN_101e1bfe0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(uint *)(unaff_x22 + 0xcc);
  FUN_101e1d504();
  func_0x000107c613f8(&UNK_11048ac40,param_1,0,0);
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = (ulong)uVar2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61174(uVar3);
  func_0x000107c61654();
  func_0x000107c614ac(uVar5);
  func_0x000107c61170(uVar6);
  func_0x00010006c090(uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1c098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c09c; end: 101e1c0f3;  */

void FUN_101e1c09c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar3);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c0f4; end: 101e1c1b7;  */

void FUN_101e1c0f4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined4 *)(unaff_x22 + 0xcc);
  FUN_101e1d504();
  func_0x000107c613f8(&UNK_11048ac40,param_1,0,0);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  func_0x000107c61174(uVar2);
  func_0x000107c614ac(uVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61654();
  func_0x000107c614ac(uVar4);
  func_0x000107c61170(uVar5);
  func_0x00010006c090(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e1c1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c1b8; end: 101e1c223;  */

void FUN_101e1c1b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c614ac(uVar3);
  func_0x000107c614ac(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar2);
  func_0x00010006c090(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1c220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c224; end: 101e1c267;  */

void FUN_101e1c224(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1bde0,0,0);
  return;
}



/* Entry: 101e1c268; end: 101e1c27f;  */

void FUN_101e1c268(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c280,0,0);
  return;
}



/* Entry: 101e1c280; end: 101e1c317;  */

void FUN_101e1c280(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x50) + 0x10);
  uVar1 = 0x112e305c8;
  func_0x0001000285a8(0x112e305c8,&UNK_10da19060);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1c318;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1c318; end: 101e1c38b;  */

void FUN_101e1c318(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x112d4f920;
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    *(undefined8 *)(lVar3 + 0x70) = uVar1;
    pcVar2 = FUN_101e1c38c;
  }
  else {
    pcVar2 = FUN_101e1c6f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e1c38c; end: 101e1c43b;  */

void FUN_101e1c38c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5c92c(0x4070e00000000000,uVar3,param_2,*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  uVar3 = uVar1;
  func_0x000100759c94(uVar1,0);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  func_0x000107c61170(uVar1);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1c43c;
                    /* WARNING: Could not recover jumptable at 0x000101e1c438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100f96304)();
  return;
}



/* Entry: 101e1c43c; end: 101e1c48f;  */

void FUN_101e1c43c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c490,0,0);
  return;
}



/* Entry: 101e1c490; end: 101e1c6f3;  */

void FUN_101e1c490(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x68);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    puVar3 = (undefined8 *)0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    func_0x0001048da110(unaff_x22 + 0x38);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    if (lVar8 == 0) {
      func_0x000100f838dc(uVar7,uVar1);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
      puVar3 = (undefined8 *)0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      puVar3[3] = 2;
      puVar3[2] = 1;
      uVar7 = 0;
      func_0x000100de1f70();
      puVar3[7] = uVar7;
      puVar3[4] = uVar9;
      func_0x000107c61174(uVar9);
      puVar6 = PTR___sypN_11034f1a8 + 8;
      puVar4 = puVar3;
      func_0x000107c5fc48(puVar3,puVar6);
      func_0x000107c61574(puVar3);
      puVar3 = puVar4;
      func_0x000107c30868();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = puVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
      func_0x000107c5ee20(puVar4,puVar6);
      puVar5 = puVar3;
      func_0x000107c3085c();
      func_0x000107c61170();
      if ((int)puVar5 != 0) {
        func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101e1c684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar4,puVar6);
        return;
      }
      FUN_101e1d504();
      func_0x000107c613f8(&UNK_11048ac40,puVar3,0,0);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *(undefined1 *)((long)puVar3 + 0x1c) = 3;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puVar6);
      func_0x000107c61170(uVar9);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000100faaf10();
      func_0x000107c613f8(&UNK_1107b5fe0,puVar3,0,0);
      *puVar3 = uVar9;
      func_0x000100f838dc(uVar7,uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101e1c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c6f4; end: 101e1c73f;  */

void FUN_101e1c6f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e1c73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1c740; end: 101e1c75b;  */

void FUN_101e1c740(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c75c,0,0);
  return;
}



/* Entry: 101e1c75c; end: 101e1c7f3;  */

void FUN_101e1c75c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x50) + 0x18);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1c7f4;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1c7f4; end: 101e1c84f;  */

void FUN_101e1c7f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1c850;
  }
  else {
    pcVar1 = FUN_101e1ca54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1c850; end: 101e1c91b;  */

void FUN_101e1c850(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = 0x1a;
  FUN_101e1cde4();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  func_0x000107c615e8(uVar6);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e1c8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x50) + 0x20);
  uVar1 = 0x112e305b8;
  func_0x0001000285a8(0x112e305b8,&UNK_10da19050);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1c91c;
  plVar2[0xb] = *(long *)(unaff_x22 + 0x60);
  plVar2[0xc] = unaff_x22 + 0x38;
  plVar2[9] = unaff_x22 + 0x30;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x28;
  lVar5 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar8 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar8;
  lVar8 = *(long *)(lVar5 + 0x50);
  plVar2[0xf] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar2[0x10] = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar3;
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar4;
  *plVar4 = (long)plVar2;
  plVar4[1] = (long)&UNK_104876614;
  plVar4[5] = uVar3;
  plVar4[6] = (long)plVar7;
  lVar5 = *(long *)(*plVar7 + 0x50);
  plVar4[7] = lVar5;
  lVar8 = 0;
  __sSqMa(0,lVar5);
  plVar4[8] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar4[9] = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar3;
  lVar8 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1c91c; end: 101e1c977;  */

void FUN_101e1c91c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1c978;
  }
  else {
    pcVar1 = FUN_101e1caa0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1c978; end: 101e1ca53;  */

void FUN_101e1c978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c4407c(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  FUN_101e1cff4(uVar1,uVar2,uVar4,param_2,0,1);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(uVar5);
  if (lVar6 != 0) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101e1ca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101e1ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 101e1ca54; end: 101e1ca9f;  */

void FUN_101e1ca54(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e1ca9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1caa0; end: 101e1cb03;  */

void FUN_101e1caa0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1cb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1cb04; end: 101e1cb1f;  */

void FUN_101e1cb04(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1cb20,0,0);
  return;
}



/* Entry: 101e1cb20; end: 101e1cbcb;  */

void FUN_101e1cb20(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x38);
  puVar1 = PTR_PTR_1126b25c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x40) = puVar1;
  plVar8 = *(long **)(lVar7 + 0x18);
  uVar2 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  plVar5 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e1cbcc;
  plVar3[0xb] = (long)plVar5;
  plVar3[0xc] = unaff_x22 + 0x20;
  plVar3[9] = unaff_x22 + 0x18;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x10;
  lVar6 = *plVar8;
  plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar7 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar7;
  lVar7 = *(long *)(lVar6 + 0x50);
  plVar3[0xf] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar3[0x10] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar8;
  lVar6 = *(long *)(*plVar8 + 0x50);
  plVar5[7] = lVar6;
  lVar7 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[9] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar7 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1cbcc; end: 101e1cc27;  */

void FUN_101e1cbcc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1cc28;
  }
  else {
    pcVar1 = FUN_101e1ccd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e1cc28; end: 101e1cccf;  */

void FUN_101e1cc28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_101e1d0b0(uVar1,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x28),2);
  func_0x000107c615e8(uVar2);
  if (lVar3 != 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101e1cc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_101e1d18c(uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e1cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 101e1ccd0; end: 101e1cd33;  */

void FUN_101e1ccd0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e1cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e1cd34; end: 101e1cd83;  */

void FUN_101e1cd34(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e1cd84;
  plVar2[5] = lVar3;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[6] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101e1ba40;
  plVar1[9] = param_1;
  plVar1[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1c280,0,0);
  return;
}



/* Entry: 101e1cd84; end: 101e1cde3;  */

void FUN_101e1cd84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e1cde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e1cde4; end: 101e1cff3;  */

undefined8 * FUN_101e1cde4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *unaff_x20;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [80];
  long lStack_58;
  
  ppuVar8 = &puStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar7 = auStack_a8;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar7;
  *(undefined8 *)(lVar2 + 0x30) = 0x6b614620656d6f53;
  *(undefined8 *)(lVar2 + 0x38) = 0xef726f7272452065;
  lVar4 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar3 = 0x656b6166656d6f53;
  func_0x000107c5fadc(0x656b6166656d6f53,0xee006e69616d6f44);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  puStack_b0 = puVar5;
  func_0x000107c40984();
  func_0x000107c61180();
  puVar6 = puStack_b0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_101e1d650();
    param_1 = (undefined8 *)0x0;
    ppuVar8 = (undefined8 **)0x0;
    func_0x000107c613f8();
    *puVar5 = puVar6;
    func_0x000107c61654();
    func_0x000107c61170(puVar6);
    puVar5 = unaff_x20;
    func_0x000107c615e8(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c5ee20();
  func_0x000107c5fadc(param_1,ppuVar8);
  func_0x000107c5e90c();
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  puVar5 = param_1;
  if ((int)unaff_x20 == 0) {
    FUN_101e1d650();
    puVar5 = (undefined8 *)&UNK_11048a838;
    func_0x000107c613f8(&UNK_11048a838,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  return puVar5;
}



/* Entry: 101e1cff4; end: 101e1d0af;  */

void FUN_101e1cff4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int unaff_w20;
  
  func_0x000107c5ee20();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5e90c();
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  if (unaff_w20 == 0) {
    FUN_101e1d650();
    func_0x000107c613f8(&UNK_11048a838,param_3,0,0);
    *param_3 = 0;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 101e1d0b0; end: 101e1d18b;  */

/* WARNING: Possible PIC construction at 0x000101e1d154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e1d290) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2cc) */
/* WARNING: Removing unreachable block (ram,0x000101e1d294) */
/* WARNING: Removing unreachable block (ram,0x000101e1d208) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2c8) */
/* WARNING: Removing unreachable block (ram,0x000101e1d274) */
/* WARNING: Removing unreachable block (ram,0x000101e1d1c8) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2c4) */
/* WARNING: Removing unreachable block (ram,0x000101e1d1dc) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2a8) */
/* WARNING: Removing unreachable block (ram,0x000101e1d108) */

void FUN_101e1d0b0(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3d75c();
  func_0x000107c61180();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    func_0x000107c60e78();
    puVar1 = PTR_PTR_1126b25e0;
    func_0x000107c610f8(PTR_PTR_1126b25e0);
    func_0x000107c453e4();
    func_0x000107c574b4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101e1d18c; end: 101e1d2cf;  */

/* WARNING: Possible PIC construction at 0x000101e1d1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e1d2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e1d290) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2cc) */
/* WARNING: Removing unreachable block (ram,0x000101e1d294) */
/* WARNING: Removing unreachable block (ram,0x000101e1d208) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2c8) */
/* WARNING: Removing unreachable block (ram,0x000101e1d274) */
/* WARNING: Removing unreachable block (ram,0x000101e1d1c8) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2c4) */
/* WARNING: Removing unreachable block (ram,0x000101e1d1dc) */
/* WARNING: Removing unreachable block (ram,0x000101e1d2a8) */

void FUN_101e1d18c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b25e0;
  func_0x000107c610f8(PTR_PTR_1126b25e0);
  func_0x000107c453e4();
  func_0x000107c574b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101e1d2d0; end: 101e1d2eb;  */

void FUN_101e1d2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e1d2ec,0,0);
  return;
}



/* Entry: 101e1d2ec; end: 101e1d397;  */

void FUN_101e1d2ec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x40);
  puVar1 = PTR_PTR_1126b25c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  plVar8 = *(long **)(lVar7 + 0x18);
  uVar2 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  plVar5 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e1d398;
  plVar3[0xb] = (long)plVar5;
  plVar3[0xc] = unaff_x22 + 0x20;
  plVar3[9] = unaff_x22 + 0x18;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x10;
  lVar6 = *plVar8;
  plVar3[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar7 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar7;
  lVar7 = *(long *)(lVar6 + 0x50);
  plVar3[0xf] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar3[0x10] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar8;
  lVar6 = *(long *)(*plVar8 + 0x50);
  plVar5[7] = lVar6;
  lVar7 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar5[9] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar7 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e1d398; end: 101e1d3f3;  */

void FUN_101e1d398(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e1d3f4;
  }
  else {
    pcVar1 = FUN_101e1d4a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


