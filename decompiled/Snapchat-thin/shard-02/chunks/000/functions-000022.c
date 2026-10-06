/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016d0750; end: 1016d07bb;  */

void FUN_1016d0750(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1016d07bc; end: 1016d0867;  */

void FUN_1016d07bc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001016d188c(3,1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1016d0868; end: 1016d08f7;  */

void FUN_1016d0868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1103f98b0;
  func_0x000107c613fc(&UNK_1103f98b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = unaff_x20;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c6157c();
  func_0x00010090569c(0x1016d3514,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016d08f8; end: 1016d094f;  */

void FUN_1016d08f8(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x78);
  if ((lVar1 != 0) && (func_0x000107c5bcc0(), lVar1 == 1)) {
    func_0x0001016d188c(2,1);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 1016d0950; end: 1016d0a5b;  */

void FUN_1016d0950(double param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar8;
  long extraout_x8_02;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long alStack_110 [2];
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long alStack_a8 [5];
  long lStack_80;
  long lStack_78;
  long in_stack_ffffffffffffff90;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100bc7fa4();
  lVar11 = *(long *)(unaff_x20 + 0x78);
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar11;
    func_0x000107c5bcc0();
  }
  lVar17 = param_2;
  func_0x000107c5bcc0();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  *(long *)(unaff_x20 + 0x78) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar15);
  if ((lVar11 != 0) && (lVar13 != lVar17)) {
    if (lVar13 == 2) {
      if (lVar17 == 1) {
        lVar11 = 0;
        FUN_1016d3a44();
        lStack_f0 = *(long *)(lVar11 + -8);
        lStack_e8 = lVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
        lVar11 = (long)alStack_110 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
        lStack_f8 = lVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar8 = (undefined8 *)(lVar11 - extraout_x12_01);
        lVar11 = 0;
        puStack_100 = puVar8;
        func_0x000107c5eea4();
        lStack_d0 = *(long *)(lVar11 + -8);
        lStack_c8 = lVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
        lVar11 = (long)puVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
        uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x000107c40ef8(uVar15);
        func_0x000107c61180();
        lStack_d8 = lVar11;
        func_0x000107c5ee94(lVar11);
        func_0x000107c61170(uVar15);
        lVar13 = *(long *)(unaff_x20 + 0x60);
        lStack_c0 = unaff_x20;
        func_0x0001000285a8(0x112dc1d10,&UNK_10d97e598);
        lVar11 = lVar13;
        func_0x000107c6048c();
        uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
        uVar5 = 0xffffffffffffffff;
        if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
          uVar5 = ~(-1L << (uVar10 & 0x3f));
        }
        uVar5 = uVar5 & *(ulong *)(lVar13 + 0x40);
        alStack_110[0] = lVar11 + 0x40;
        lStack_e0 = lVar13;
        func_0x000107c61434(lVar13);
        puVar8 = puStack_100;
        lVar17 = 0;
        alStack_110[1] = lVar11;
        if (uVar5 == 0) goto LAB_1016d1d04;
        do {
          uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          uStack_b8 = uVar5 - 1 & uVar5;
          while( true ) {
            uVar5 = LZCOUNT(uVar9);
            uVar9 = uVar5 | lVar17 << 6;
            alStack_a8[1] = uVar9 * 0x10;
            plVar2 = (long *)(*(long *)(lStack_e0 + 0x30) + alStack_a8[1]);
            alStack_a8[2] = *(long *)(lStack_f0 + 0x48) * uVar9;
            FUN_1016d3b68(*(long *)(lStack_e0 + 0x38) + alStack_a8[2],puVar8);
            lVar16 = lStack_f8;
            alStack_a8[0] = *plVar2;
            lVar11 = plVar2[1];
            _uStack_b0 = lVar11;
            FUN_1016d3b68(puVar8,lStack_f8);
            uVar15 = *(undefined8 *)(lVar16 + 8);
            func_0x000107c61434(lVar11);
            func_0x000107c6142c(uVar15);
            *(undefined **)(lVar16 + 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
            lVar11 = lStack_e8;
            (**(code **)(lStack_d0 + 0x18))(lVar16 + *(int *)(lStack_e8 + 0x20),lStack_d8,lStack_c8)
            ;
            func_0x0001000d224c(alStack_a8 + 3);
            lVar1 = lStack_78;
            func_0x0001000a8868(alStack_a8 + 3,lStack_78);
            uVar15 = *puVar8;
            (**(code **)(in_stack_ffffffffffffff90 + 8))(uVar15,lVar1,in_stack_ffffffffffffff90);
            *(byte *)(lVar16 + *(int *)(lVar11 + 0x24)) = (byte)uVar15 & 1;
            func_0x0001000834e4(alStack_a8 + 3);
            func_0x0001016d3bac(puVar8);
            lVar11 = alStack_110[1];
            uVar9 = (uVar5 & 0xffffffffffffffc0 | lVar17 << 6) >> 3;
            *(ulong *)(alStack_110[0] + uVar9) =
                 *(ulong *)(alStack_110[0] + uVar9) | 1L << (uVar5 & 0x3f);
            plVar2 = (long *)(*(long *)(alStack_110[1] + 0x30) + alStack_a8[1]);
            *plVar2 = alStack_a8[0];
            plVar2[1] = _uStack_b0;
            func_0x0001016d3be8(lVar16,*(long *)(alStack_110[1] + 0x38) + alStack_a8[2]);
            if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1016d1ec0);
              (*pcVar3)();
            }
            *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
            uVar5 = uStack_b8;
            if (uStack_b8 != 0) break;
LAB_1016d1d04:
            do {
              lVar16 = lVar17 + 1;
              if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1016d1ebc);
                (*pcVar3)();
              }
              if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
                func_0x000107c6142c(lStack_e0);
                uVar15 = *(undefined8 *)(lStack_c0 + 0x60);
                *(long *)(lStack_c0 + 0x60) = lVar11;
                func_0x000107c6142c(uVar15);
                (**(code **)(lStack_d0 + 8))(lStack_d8,lStack_c8);
                return;
              }
              uVar5 = ((ulong *)(lVar13 + 0x40))[lVar16];
              lVar17 = lVar17 + 1;
            } while (uVar5 == 0);
            uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
            uStack_b8 = uVar5 - 1 & uVar5;
            lVar17 = lVar16;
          }
        } while( true );
      }
    }
    else if (lVar13 == 1) {
      if (lVar17 == 0) {
        uVar7 = 1;
LAB_1016d0a48:
        _uStack_b0 = CONCAT44(uVar7,uStack_b0);
        alStack_a8[3] = 2;
        lVar11 = 0;
        FUN_1016d3a44();
        alStack_a8[1] = *(long *)(lVar11 + -8);
        alStack_a8[2] = lVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a8[1] + 0x40));
        lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        lVar17 = (long)&lStack_c0 + lVar11;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar16 = lVar17 - extraout_x12;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar5 = 0;
        alStack_a8[0] = lVar16 - extraout_x12_00;
        func_0x000107c5eea4();
        lStack_c0 = *(long *)(uVar5 - 8);
        uStack_b8 = uVar5;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
        lVar13 = (lVar16 - extraout_x12_00) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x20));
        func_0x000100bc7fa4();
        uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
        func_0x000107c40ef8(uVar15);
        func_0x000107c61180();
        lStack_78 = lVar13;
        func_0x000107c5ee94(lVar13);
        func_0x000107c61170(uVar15);
        lStack_80 = *(long *)(unaff_x20 + 0x60);
        puVar14 = (ulong *)(lStack_80 + 0x40);
        uVar10 = 1L << ((ulong)*(byte *)(lStack_80 + 0x20) & 0x3f);
        uVar5 = 0xffffffffffffffff;
        if ((*(byte *)(lStack_80 + 0x20) & 0x3f) < 6) {
          uVar5 = ~(-1L << (uVar10 & 0x3f));
        }
        uVar5 = uVar5 & *puVar14;
        alStack_a8[4] = unaff_x20;
        func_0x000107c61434();
        lVar13 = 0;
        lVar1 = alStack_a8[0];
        while( true ) {
          for (; alStack_a8[0] = lVar1, uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
            uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            FUN_1016d3b68(*(long *)(lStack_80 + 0x38) +
                          *(long *)(alStack_a8[1] + 0x48) *
                          (LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar13 << 6),lVar1);
            func_0x0001016d3be8(lVar1,lVar16);
            uVar15 = *(undefined8 *)(lVar16 + 0x18);
            FUN_1016d3b68(lVar16,lVar17);
            func_0x000107c5ee68(lVar16 + *(int *)(alStack_a8[2] + 0x20));
            uVar12 = *(ulong *)((long)&uStack_b8 + lVar11);
            uVar9 = uVar12;
            func_0x000107c61558();
            uVar6 = uVar12;
            if ((uVar9 & 1) == 0) {
              uVar6 = 0;
              FUN_1016d30e0(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
            }
            uVar9 = *(ulong *)(uVar6 + 0x10);
            uVar12 = uVar6;
            if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
              uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
              FUN_1016d30e0(uVar12,uVar9 + 1,1,uVar6);
            }
            *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
            lVar1 = uVar12 + uVar9 * 0x10;
            *(undefined8 *)(lVar1 + 0x20) = uVar15;
            param_1 = (double)(long)(param_1 * 1000.0) / 1000.0;
            *(double *)(lVar1 + 0x28) = param_1;
            *(ulong *)((long)&uStack_b8 + lVar11) = uVar12;
            FUN_1016d1ec0(lVar17,alStack_a8[3]);
            func_0x0001016d3bac(lVar16);
            func_0x0001016d3bac(lVar17);
            lVar1 = alStack_a8[0];
          }
          bVar4 = SCARRY8(lVar13,1);
          lVar13 = lVar13 + 1;
          if (bVar4) break;
          if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
            (**(code **)(lStack_c0 + 8))(lStack_78,uStack_b8);
            func_0x000107c61574(lStack_80);
            if ((_uStack_b0 & 0x100000000) != 0) {
              uVar15 = *(undefined8 *)(alStack_a8[4] + 0x60);
              *(undefined **)(alStack_a8[4] + 0x60) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
              func_0x000107c6142c(uVar15);
              *(undefined8 *)(alStack_a8[4] + 0x68) = 0;
              *(undefined1 *)(alStack_a8[4] + 0x70) = 1;
            }
            return;
          }
          uVar5 = puVar14[lVar13];
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016d1b88);
        (*pcVar3)();
      }
      if (lVar17 == 2) {
        uVar7 = 0;
        goto LAB_1016d0a48;
      }
    }
    uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined **)(unaff_x20 + 0x60) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar15);
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined1 *)(unaff_x20 + 0x70) = 1;
  }
  return;
}



/* Entry: 1016d0a5c; end: 1016d1b87;  */

void FUN_1016d0a5c(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long alStack_e0 [4];
  ulong *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  long lStack_90;
  
  lVar4 = 0x112dc1d20;
  func_0x0001000285a8(0x112dc1d20,&UNK_10d97e5a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a8 = (long)alStack_e0 - extraout_x8;
  FUN_1016d3a44();
  lVar10 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = ((long)alStack_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar4 = 0x112dc1d28;
  func_0x0001000285a8(0x112dc1d28,&UNK_10d97e5b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puStack_a0 = puVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = (long *)((long)puVar12 - extraout_x12_00);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = (long)plVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100bc7fa4();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c40ef8(uVar5);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar14);
  func_0x000107c61170(uVar5);
  lVar6 = *(long *)(unaff_x20 + 0x60);
  func_0x000107c61434();
  uVar5 = param_2;
  alStack_e0[3] = lVar14;
  lStack_b8 = lVar6;
  func_0x0001016d104c();
  uVar9 = (undefined1)uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  *(long *)(unaff_x20 + 0x60) = lVar6;
  func_0x000107c6142c(uVar5);
  lVar14 = *(long *)(unaff_x20 + 0x68);
  cVar2 = *(char *)(unaff_x20 + 0x70);
  FUN_1016d3cf8();
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  *(undefined1 *)(unaff_x20 + 0x70) = uVar9;
  lVar6 = *(long *)(unaff_x20 + 0x78);
  if ((lVar6 != 0) && (func_0x000107c5bcc0(), lVar6 == 1)) {
    alStack_e0[2] = 0xffffffffffffffff;
    if ((cVar2 != '\x01') &&
       ((alStack_e0[2] = 0xffffffffffffffff, *(char *)(unaff_x20 + 0x70) != '\x01' &&
        (*(long *)(unaff_x20 + 0x68) != lVar14)))) {
      alStack_e0[2] = (long)(*(long *)(unaff_x20 + 0x68) <= lVar14);
    }
    puStack_c0 = (ulong *)(lStack_b8 + 0x40);
    uVar13 = 1L << ((ulong)*(byte *)(lStack_b8 + 0x20) & 0x3f);
    uVar19 = 0xffffffffffffffff;
    if ((*(byte *)(lStack_b8 + 0x20) & 0x3f) < 6) {
      uVar19 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar19 = uVar19 & *puStack_c0;
    uVar13 = uVar13 + 0x3f >> 6;
    lVar6 = 0;
    alStack_e0[0] = lVar17;
    alStack_e0[1] = lVar4;
    plStack_98 = plVar18;
LAB_1016d0d60:
    do {
      plVar18 = plStack_98;
      puVar12 = puStack_a0;
      lVar4 = lStack_b8;
      lVar17 = 0x112dc1d30;
      if (uVar19 == 0) {
        uVar19 = uVar13;
        if ((long)uVar13 <= lVar6 + 1) {
          uVar19 = lVar6 + 1;
        }
        lVar15 = uVar19 - 1;
        lVar14 = lVar6;
        do {
          lVar6 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016d104c);
            (*pcVar3)();
          }
          if ((long)uVar13 <= lVar6) {
            func_0x0001000285a8(0x112dc1d30,&UNK_10d97e5b8);
            (**(code **)(*(long *)(lVar17 + -8) + 0x38))(puVar12,1,1,lVar17);
            uVar19 = 0;
            goto LAB_1016d0e28;
          }
          uVar19 = puStack_c0[lVar6];
          lVar14 = lVar14 + 1;
        } while (uVar19 == 0);
      }
      uVar20 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar6 << 6;
      puVar1 = (undefined8 *)(*(long *)(lStack_b8 + 0x30) + uVar20 * 0x10);
      uVar5 = puVar1[1];
      uVar19 = uVar19 - 1 & uVar19;
      *puStack_a0 = *puVar1;
      puStack_a0[1] = uVar5;
      func_0x0001000285a8(0x112dc1d30,&UNK_10d97e5b8);
      FUN_1016d3b68(*(long *)(lVar4 + 0x38) + *(long *)(lVar10 + 0x48) * uVar20,
                    (long)puVar12 + (long)*(int *)(lVar17 + 0x30));
      (**(code **)(*(long *)(lVar17 + -8) + 0x38))(puVar12,0,1,lVar17);
      func_0x000107c61434(uVar5);
      lVar15 = lVar6;
      plVar18 = plStack_98;
LAB_1016d0e28:
      lVar4 = 0x112dc1d30;
      FUN_1016d3df0(puVar12,plVar18,0x112dc1d28,&UNK_10d97e5b0);
      func_0x0001000285a8(0x112dc1d30,&UNK_10d97e5b8);
      plVar7 = plVar18;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(plVar18,1,lVar4);
      if ((int)plVar7 == 1) goto LAB_1016d1008;
      lVar17 = *plVar18;
      uVar20 = plVar18[1];
      func_0x0001016d3be8((long)plVar18 + (long)*(int *)(lVar4 + 0x30),lVar11);
      lVar4 = *(long *)(unaff_x20 + 0x60);
      lVar6 = lVar15;
      if (*(long *)(lVar4 + 0x10) != 0) {
        func_0x000107c61434(lVar4);
        uVar8 = uVar20;
        func_0x000100029284(lVar17);
        lVar14 = lStack_a8;
        if ((uVar8 & 1) != 0) {
          FUN_1016d3b68(*(long *)(lVar4 + 0x38) + *(long *)(lVar10 + 0x48) * lVar17,lStack_a8);
          func_0x000107c6142c(lVar4);
          func_0x000107c6142c(uVar20);
          (**(code **)(lVar10 + 0x38))(lVar14,0,1,lStack_b0);
          func_0x0001016d3bac(lVar11);
          func_0x0001016d3c2c(lVar14);
          goto LAB_1016d0d60;
        }
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c6142c(uVar20);
      lVar17 = lStack_a8;
      lVar4 = lStack_b0;
      (**(code **)(lVar10 + 0x38))(lStack_a8,1,1,lStack_b0);
      func_0x0001016d3c2c(lVar17);
      lVar17 = lStack_90;
      uVar5 = *(undefined8 *)(lVar11 + 0x18);
      FUN_1016d3b68(lVar11,lStack_90);
      func_0x000107c5ee68(lVar11 + *(int *)(lVar4 + 0x20));
      uVar16 = *(ulong *)(lVar17 + 8);
      uVar20 = uVar16;
      func_0x000107c61558();
      uVar8 = uVar16;
      if ((uVar20 & 1) == 0) {
        uVar8 = 0;
        FUN_1016d30e0(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      }
      uVar20 = *(ulong *)(uVar8 + 0x10);
      uVar16 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar20) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1016d30e0(uVar16,uVar20 + 1,1,uVar8);
      }
      lVar17 = lStack_90;
      *(ulong *)(uVar16 + 0x10) = uVar20 + 1;
      lVar4 = uVar16 + uVar20 * 0x10;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      param_1 = (double)(long)(param_1 * 1000.0) / 1000.0;
      *(double *)(lVar4 + 0x28) = param_1;
      *(ulong *)(lStack_90 + 8) = uVar16;
      FUN_1016d1ec0(lVar17,alStack_e0[2]);
      func_0x0001016d3bac(lVar11);
      func_0x0001016d3bac(lVar17);
    } while( true );
  }
  func_0x000107c6142c(lStack_b8);
LAB_1016d1014:
  (**(code **)(lVar17 + 8))(alStack_e0[3],lVar4);
  return;
LAB_1016d1008:
  func_0x000107c61574(lStack_b8);
  lVar4 = alStack_e0[1];
  lVar17 = alStack_e0[0];
  goto LAB_1016d1014;
}



/* Entry: 1016d1b88; end: 1016d1ebf;  */

void FUN_1016d1b88(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined8 *puVar9;
  long extraout_x8_00;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long alStack_110 [2];
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_b8;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar6 = 0;
  FUN_1016d3a44();
  lStack_f0 = *(long *)(lVar6 + -8);
  lStack_e8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar6 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined8 *)(lVar6 - extraout_x12);
  lVar6 = 0;
  puStack_100 = puVar9;
  func_0x000107c5eea4();
  lStack_d0 = *(long *)(lVar6 + -8);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar6 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c40ef8(uVar7);
  func_0x000107c61180();
  lStack_d8 = lVar6;
  func_0x000107c5ee94(lVar6);
  func_0x000107c61170(uVar7);
  lVar14 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000285a8(0x112dc1d10,&UNK_10d97e598);
  lVar6 = lVar14;
  func_0x000107c6048c();
  uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uStack_b8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uStack_b8 = ~(-1L << (uVar12 & 0x3f));
  }
  uStack_b8 = uStack_b8 & *(ulong *)(lVar14 + 0x40);
  alStack_110[0] = lVar6 + 0x40;
  lStack_e0 = lVar14;
  func_0x000107c61434(lVar14);
  puVar9 = puStack_100;
  lVar16 = 0;
  alStack_110[1] = lVar6;
  if (uStack_b8 == 0) goto LAB_1016d1d04;
  do {
    uVar10 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uStack_b8 = uStack_b8 - 1 & uStack_b8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10);
      uVar17 = uVar10 | lVar16 << 6;
      lVar13 = uVar17 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lStack_e0 + 0x30) + lVar13);
      lVar11 = *(long *)(lStack_f0 + 0x48) * uVar17;
      FUN_1016d3b68(*(long *)(lStack_e0 + 0x38) + lVar11,puVar9);
      lVar1 = lStack_f8;
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      FUN_1016d3b68(puVar9,lStack_f8);
      uVar15 = *(undefined8 *)(lVar1 + 8);
      func_0x000107c61434(uVar3);
      func_0x000107c6142c(uVar15);
      *(undefined **)(lVar1 + 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar6 = lStack_e8;
      (**(code **)(lStack_d0 + 0x18))(lVar1 + *(int *)(lStack_e8 + 0x20),lStack_d8,lStack_c8);
      func_0x0001000d224c(auStack_90);
      lVar4 = lStack_70;
      uVar15 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      uVar8 = *puVar9;
      (**(code **)(lVar4 + 8))(uVar8,uVar15,lVar4);
      *(byte *)(lVar1 + *(int *)(lVar6 + 0x24)) = (byte)uVar8 & 1;
      func_0x0001000834e4(auStack_90);
      func_0x0001016d3bac(puVar9);
      lVar6 = alStack_110[1];
      uVar17 = (uVar10 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
      *(ulong *)(alStack_110[0] + uVar17) =
           *(ulong *)(alStack_110[0] + uVar17) | 1L << (uVar10 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(alStack_110[1] + 0x30) + lVar13);
      *puVar2 = uVar7;
      puVar2[1] = uVar3;
      func_0x0001016d3be8(lVar1,*(long *)(alStack_110[1] + 0x38) + lVar11);
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016d1ec0);
        (*pcVar5)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      if (uStack_b8 != 0) break;
LAB_1016d1d04:
      do {
        lVar1 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1016d1ebc);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar1) {
          func_0x000107c6142c(lStack_e0);
          uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
          *(long *)(unaff_x20 + 0x60) = lVar6;
          func_0x000107c6142c(uVar7);
          (**(code **)(lStack_d0 + 8))(lStack_d8,lStack_c8);
          return;
        }
        uStack_b8 = ((ulong *)(lVar14 + 0x40))[lVar1];
        lVar16 = lVar16 + 1;
      } while (uStack_b8 == 0);
      uVar10 = (uStack_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_b8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uStack_b8 = uStack_b8 - 1 & uStack_b8;
      lVar16 = lVar1;
    }
  } while( true );
}



/* Entry: 1016d1ec0; end: 1016d26c7;  */

/* WARNING: Possible PIC construction at 0x0001016d1f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d1fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d242c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d245c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d24e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d25bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d25d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d264c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d266c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d2684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d2670) */
/* WARNING: Removing unreachable block (ram,0x0001016d2650) */
/* WARNING: Removing unreachable block (ram,0x0001016d2608) */
/* WARNING: Removing unreachable block (ram,0x0001016d25d8) */
/* WARNING: Removing unreachable block (ram,0x0001016d260c) */
/* WARNING: Removing unreachable block (ram,0x0001016d2610) */
/* WARNING: Removing unreachable block (ram,0x0001016d25ec) */
/* WARNING: Removing unreachable block (ram,0x0001016d25c0) */
/* WARNING: Removing unreachable block (ram,0x0001016d25c4) */
/* WARNING: Removing unreachable block (ram,0x0001016d257c) */
/* WARNING: Removing unreachable block (ram,0x0001016d2624) */
/* WARNING: Removing unreachable block (ram,0x0001016d25a4) */
/* WARNING: Removing unreachable block (ram,0x0001016d2514) */
/* WARNING: Removing unreachable block (ram,0x0001016d24ec) */
/* WARNING: Removing unreachable block (ram,0x0001016d247c) */
/* WARNING: Removing unreachable block (ram,0x0001016d24cc) */
/* WARNING: Removing unreachable block (ram,0x0001016d24b4) */
/* WARNING: Removing unreachable block (ram,0x0001016d24d0) */
/* WARNING: Removing unreachable block (ram,0x0001016d2460) */
/* WARNING: Removing unreachable block (ram,0x0001016d2430) */
/* WARNING: Removing unreachable block (ram,0x0001016d2464) */
/* WARNING: Removing unreachable block (ram,0x0001016d2468) */
/* WARNING: Removing unreachable block (ram,0x0001016d2444) */
/* WARNING: Removing unreachable block (ram,0x0001016d235c) */
/* WARNING: Removing unreachable block (ram,0x0001016d2390) */
/* WARNING: Removing unreachable block (ram,0x0001016d2388) */
/* WARNING: Removing unreachable block (ram,0x0001016d23d0) */
/* WARNING: Removing unreachable block (ram,0x0001016d2084) */
/* WARNING: Removing unreachable block (ram,0x0001016d21d8) */
/* WARNING: Removing unreachable block (ram,0x0001016d26c0) */
/* WARNING: Removing unreachable block (ram,0x0001016d2118) */
/* WARNING: Removing unreachable block (ram,0x0001016d213c) */
/* WARNING: Removing unreachable block (ram,0x0001016d2170) */
/* WARNING: Removing unreachable block (ram,0x0001016d2154) */
/* WARNING: Removing unreachable block (ram,0x0001016d216c) */
/* WARNING: Removing unreachable block (ram,0x0001016d21e0) */
/* WARNING: Removing unreachable block (ram,0x0001016d21f4) */
/* WARNING: Removing unreachable block (ram,0x0001016d2204) */
/* WARNING: Removing unreachable block (ram,0x0001016d222c) */
/* WARNING: Removing unreachable block (ram,0x0001016d21e8) */
/* WARNING: Removing unreachable block (ram,0x0001016d2234) */
/* WARNING: Removing unreachable block (ram,0x0001016d2240) */
/* WARNING: Removing unreachable block (ram,0x0001016d2254) */
/* WARNING: Removing unreachable block (ram,0x0001016d2268) */
/* WARNING: Removing unreachable block (ram,0x0001016d228c) */
/* WARNING: Removing unreachable block (ram,0x0001016d22e8) */
/* WARNING: Removing unreachable block (ram,0x0001016d22cc) */
/* WARNING: Removing unreachable block (ram,0x0001016d22e4) */
/* WARNING: Removing unreachable block (ram,0x0001016d2308) */
/* WARNING: Removing unreachable block (ram,0x0001016d230c) */
/* WARNING: Removing unreachable block (ram,0x0001016d201c) */
/* WARNING: Removing unreachable block (ram,0x0001016d2058) */
/* WARNING: Removing unreachable block (ram,0x0001016d2070) */
/* WARNING: Removing unreachable block (ram,0x0001016d1f70) */
/* WARNING: Removing unreachable block (ram,0x0001016d1f8c) */
/* WARNING: Removing unreachable block (ram,0x0001016d1f98) */
/* WARNING: Removing unreachable block (ram,0x0001016d1fa0) */
/* WARNING: Removing unreachable block (ram,0x0001016d1fec) */
/* WARNING: Removing unreachable block (ram,0x0001016d1fb0) */
/* WARNING: Removing unreachable block (ram,0x0001016d1fbc) */
/* WARNING: Removing unreachable block (ram,0x0001016d26ac) */
/* WARNING: Removing unreachable block (ram,0x0001016d1ff4) */
/* WARNING: Removing unreachable block (ram,0x0001016d26bc) */
/* WARNING: Removing unreachable block (ram,0x0001016d2000) */
/* WARNING: Removing unreachable block (ram,0x0001016d1fc4) */
/* WARNING: Removing unreachable block (ram,0x0001016d2688) */

void FUN_1016d1ec0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    lVar2 = *(long *)(unaff_x20 + 0x78);
    puVar1 = PTR_PTR_1126a7968;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x78);
    puVar1 = PTR_PTR_1126a7968;
  }
  PTR_PTR_1126a7968 = puVar1;
  if (lVar2 != 0) {
    func_0x000107c610f8(puVar1);
    func_0x000107c61174();
    func_0x000107c453e4(puVar1);
    func_0x000107c52060(lVar2);
    func_0x000107c61180();
    func_0x000107c5faec();
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1016d26c8; end: 1016d274b;  */

void FUN_1016d26c8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001016d3504(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1016d274c; end: 1016d27df;  */

void FUN_1016d274c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f9988;
  func_0x000107c613fc(&UNK_1103f9988,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = lVar2;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c6157c(lVar2);
  func_0x00010090569c(0x1016d3f24,puVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016d27e0; end: 1016d284b;  */

void FUN_1016d27e0(void)

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
    func_0x0001016d3cb8(0,0x112dc1d00,&PTR_PTR_1126a7970);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc1d08;
  plVar5 = (long *)&UNK_10d97e590;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016d284c; end: 1016d2a0f;  */

ulong FUN_1016d284c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d2930);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d2934);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d1088;
    func_0x000107c61168(PTR_PTR_1126d1088);
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
    puVar4 = PTR_PTR_1126d1088;
    func_0x000107c61168(PTR_PTR_1126d1088);
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
  func_0x0001016d3cb8(0,0x112dc1630,&PTR_PTR_1126d1088);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d2a10);
  (*pcVar2)();
}



/* Entry: 1016d2a10; end: 1016d30df;  */

void FUN_1016d2a10(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  FUN_1016d3a44();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112dc1d10,&UNK_10d97e598);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_1016d2be0:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_1016d2b3c;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      FUN_1016d3b68(*(long *)(lVar13 + 0x38) + lVar12,
                    &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x0001016d3be8(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_1016d2b3c:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1016d2c08);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_1016d2be0;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 1016d30e0; end: 1016d31df;  */

undefined * FUN_1016d30e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d31e0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dc1d18;
    func_0x0001000285a8(0x112dc1d18,&UNK_10d97e5a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016d31e0; end: 1016d31fb;  */

void FUN_1016d31e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1016d31fc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1016d31fc; end: 1016d332f;  */

undefined * FUN_1016d31fc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d3330);
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
    FUN_1016d27e0();
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
    func_0x0001016d3cb8(0,0x112dc1d00,&PTR_PTR_1126a7970);
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



/* Entry: 1016d3330; end: 1016d34a3;  */

undefined * FUN_1016d3330(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112dc1d38;
  func_0x0001000285a8(0x112dc1d38,&UNK_10d97e5c0);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc1d10,&UNK_10d97e598);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      FUN_1016d3e6c(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016d34a0);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      FUN_1016d3a44();
      func_0x0001016d3be8((long)puVar9 + (long)iVar4,
                          lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1016d34a4);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1016d34a4; end: 1016d34b3;  */

void FUN_1016d34a4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1016d34b4; end: 1016d34f3;  */

void FUN_1016d34b4(void)

{
  FUN_1016d0750();
  return;
}



/* Entry: 1016d34f4; end: 1016d351f;  */

void FUN_1016d34f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001016d188c(3,1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1016d3520; end: 1016d354b;  */

long FUN_1016d3520(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016d354c; end: 1016d3553;  */

void FUN_1016d354c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1016d3554; end: 1016d358f;  */

undefined8 * FUN_1016d3554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1016d3590; end: 1016d35e7;  */

undefined8 * FUN_1016d3590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 1016d35e8; end: 1016d362b;  */

undefined8 * FUN_1016d35e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1016d362c; end: 1016d36c7;  */

int FUN_1016d362c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016d36c8; end: 1016d36e7;  */

void FUN_1016d36c8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1ae0);
  return;
}



/* Entry: 1016d36e8; end: 1016d37ab;  */

long * FUN_1016d36e8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    param_1[1] = lVar6;
    lVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar3;
    iVar2 = *(int *)(param_3 + 0x20);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar7 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61174(lVar5);
    func_0x000107c61434(lVar6);
    (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar5);
  }
  return param_1;
}



/* Entry: 1016d37ac; end: 1016d37f7;  */

void FUN_1016d37ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c61170(*param_1);
  func_0x000107c6142c(param_1[1]);
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001016d37f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 1016d37f8; end: 1016d388b;  */

undefined8 * FUN_1016d37f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar6 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  iVar3 = *(int *)(param_3 + 0x20);
  lVar4 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 1016d388c; end: 1016d3a2b;  */

undefined8 * FUN_1016d388c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  iVar1 = *(int *)(param_3 + 0x20);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 1016d3a2c; end: 1016d3a43;  */

void FUN_1016d3a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1016d3a44; end: 1016d3a7b;  */

void FUN_1016d3a44(undefined8 param_1)

{
  if (lRam0000000112dc1cb0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e64e400);
  return;
}



/* Entry: 1016d3a7c; end: 1016d3b17;  */

void FUN_1016d3a7c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_50 = PTR___sBOWV_11034d658 + 0x40;
  puStack_48 = PTR___sBbWV_11034d660 + 0x40;
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d97e560;
    func_0x000107c6153c(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1016d3b18; end: 1016d3b67;  */

void FUN_1016d3b18(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112dc1cf8 != 0) {
    return;
  }
  puVar1 = &UNK_1103f9968;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112dc1cf8 = param_1;
  return;
}



/* Entry: 1016d3b68; end: 1016d3cf7;  */

undefined8 FUN_1016d3b68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1016d3a44();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016d3cf8; end: 1016d3def;  */

undefined1  [16] FUN_1016d3cf8(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d3db8);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_1016d284c(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d3db4);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c519ec();
      if (uVar4 == 0) {
        uVar6 = uVar3;
        func_0x000107c3f6ac(uVar3);
        func_0x000107c61170(uVar3);
        uVar5 = 0;
        goto LAB_1016d3dd8;
      }
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  uVar6 = 0;
  uVar5 = 1;
LAB_1016d3dd8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1016d3df0; end: 1016d3e37;  */

undefined8 FUN_1016d3df0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1016d3e38; end: 1016d3e6b;  */

void FUN_1016d3e38(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016d3e6c; end: 1016d3ebb;  */

undefined8 FUN_1016d3e6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc1d38;
  func_0x0001000285a8(0x112dc1d38,&UNK_10d97e5c0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016d3ebc; end: 1016d3f27;  */

int FUN_1016d3ebc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1016d3f28; end: 1016d4027;  */

void FUN_1016d3f28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar1,uVar3);
  func_0x000107c5fb58(auStack_78,uVar2,uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016d4028; end: 1016d40ef;  */

void FUN_1016d4028(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_98 [72];
  
  uVar6 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  lVar7 = unaff_x20[5];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fb58(auStack_98,uVar6,uVar1);
  func_0x000107c5fb58(auStack_98,uVar3,uVar2);
  if (lVar7 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar4,lVar7);
  }
  bVar5 = *(byte *)(unaff_x20 + 7);
  func_0x000107c606a0(unaff_x20[6]);
  func_0x000107c60694(bVar5 & 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016d40f0; end: 1016d417f;  */

/* WARNING: Possible PIC construction at 0x0001016d412c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d4130) */

long FUN_1016d40f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 1016d4180; end: 1016d4183;  */

void FUN_1016d4180(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 auStack_98 [72];
  
  uVar6 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  lVar7 = unaff_x20[5];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fb58(auStack_98,uVar6,uVar1);
  func_0x000107c5fb58(auStack_98,uVar3,uVar2);
  if (lVar7 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_98,uVar4,lVar7);
  }
  bVar5 = *(byte *)(unaff_x20 + 7);
  func_0x000107c606a0(unaff_x20[6]);
  func_0x000107c60694(bVar5 & 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016d4184; end: 1016d4223;  */

void FUN_1016d4184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  lVar4 = unaff_x20[5];
  uVar6 = unaff_x20[6];
  uVar5 = *(undefined1 *)(unaff_x20 + 7);
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb58(param_1,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(param_1,uVar2,lVar4);
  }
  func_0x000107c606a0(uVar6);
  func_0x000107c60694(uVar5);
  return;
}



/* Entry: 1016d4224; end: 1016d42eb;  */

void FUN_1016d4224(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  lVar6 = unaff_x20[5];
  uVar8 = unaff_x20[6];
  uVar7 = *(undefined1 *)(unaff_x20 + 7);
  func_0x000107c6068c(auStack_a8);
  func_0x000107c5fb58(auStack_a8,uVar1,uVar4);
  func_0x000107c5fb58(auStack_a8,uVar2,uVar5);
  if (lVar6 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_a8,uVar3,lVar6);
  }
  func_0x000107c606a0(uVar8);
  func_0x000107c60694(uVar7);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016d42ec; end: 1016d4343;  */

uint FUN_1016d42ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_1016d6240(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1016d4344; end: 1016d43af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016d4344(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dc1d40;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dc1d40);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_1016d43b0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x0001016d63c4(uVar4);
  }
  FUN_1016d64a8(lVar3);
  return lVar2;
}



/* Entry: 1016d43b0; end: 1016d446b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016d43b0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1016d64d4(0,0x112dc1dd0,&PTR_PTR_1126a7978);
    func_0x000107c614e8();
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010efb7a90);
    lVar2 = lStack_38;
    func_0x000107c5cec8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lStack_38);
  }
  return lVar2;
}



/* Entry: 1016d446c; end: 1016d4733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1016d446c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 auStack_78 [8];
  long lStack_68;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d40) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d48) = 0x40f5180000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d50) = 0x409c200000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1d58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1d60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1d68);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x31) = 0;
  *(undefined8 *)((long)puVar1 + 0x29) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1d80) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x0001000d224c(&lStack_68);
  lVar4 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4f800();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  *(long *)(unaff_x20 + _DAT_112dc1d88) = lVar2;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
  }
  else {
    lVar4 = lStack_68;
    func_0x000107c4104c(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x0001000285a8(0x112dc1d90,&UNK_10d97e620);
    lVar2 = lVar4;
    func_0x0001000b637c(lVar4);
    plVar5 = *(long **)(puVar3 + _DAT_112dc1d88);
    func_0x000107c61174();
    plVar6 = plVar5;
    func_0x000100471e0c();
    func_0x000107c61574(lVar2);
    func_0x000107c61170(plVar5);
    puVar7 = &UNK_1103f9ab8;
    func_0x000107c613fc(&UNK_1103f9ab8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,puVar3);
    pcVar8 = FUN_1016d47fc;
    puVar9 = puVar7;
    (**(code **)(*plVar6 + 0x60))();
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c615e8(param_5);
    func_0x000107c61170(lVar4);
    puVar1 = (undefined8 *)(puVar3 + _DAT_112dc1d60);
    param_5 = *puVar1;
    *puVar1 = pcVar8;
    puVar1[1] = puVar9;
  }
  func_0x000107c615e8(param_5);
  return puVar3;
}



/* Entry: 1016d4734; end: 1016d47fb;  */

void FUN_1016d4734(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_1;
  uVar3 = 0;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = lVar4;
    func_0x000107c4f490();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d47f8);
      (*pcVar1)();
    }
    func_0x000107c4fa00();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d47fc);
      (*pcVar1)();
    }
    FUN_1016d6164(lVar2);
    if (lVar4 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      FUN_1016d4804();
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(lVar4);
    }
  }
  return;
}



/* Entry: 1016d47fc; end: 1016d4803;  */

void FUN_1016d47fc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar5 = *param_1;
  uVar4 = 0;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar5;
    func_0x000107c4f490();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d47f8);
      (*pcVar1)();
    }
    func_0x000107c4fa00();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d47fc);
      (*pcVar1)();
    }
    FUN_1016d6164(lVar3);
    if (lVar5 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      FUN_1016d4804();
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(lVar5);
    }
  }
  return;
}



/* Entry: 1016d4804; end: 1016d4a3f;  */

/* WARNING: Removing unreachable block (ram,0x0001016d4a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d4804(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112dc1d68);
  uVar7 = puVar1[1];
  if (uVar7 == 0) {
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    FUN_1016d653c(param_1,param_2,param_3,param_4);
    FUN_1016d653c(0,0,0,0);
  }
  else {
    uVar8 = *puVar1;
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar3);
    if ((param_1 == uVar8 && param_2 == uVar7) ||
       (uVar4 = param_1, func_0x000107c605b8(param_1,param_2,uVar8,uVar7,0), (uVar4 & 1) != 0)) {
      if (param_3 == uVar2 && uVar3 == param_4) {
        func_0x000107c61434(param_2);
        func_0x000107c6142c();
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar7);
      }
      else {
        uVar8 = param_3;
        func_0x000107c605b8(param_3,param_4,uVar2,uVar3,0);
        func_0x000107c61434(param_2);
        func_0x000107c6142c();
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar7);
        if ((uVar8 & 1) == 0) goto LAB_1016d497c;
      }
      uStack_a8 = puVar1[1];
      uStack_b0 = *puVar1;
      uStack_98 = puVar1[3];
      uStack_a0 = puVar1[2];
      uStack_90 = puVar1[4];
      uStack_88 = (undefined1)puVar1[5];
      uStack_7f = *(undefined8 *)((long)puVar1 + 0x31);
      uStack_87 = (undefined7)*(undefined8 *)((long)puVar1 + 0x29);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      *(undefined8 *)((long)puVar1 + 0x31) = 0;
      *(undefined8 *)((long)puVar1 + 0x29) = 0;
      func_0x0001016d6444(&uStack_b0);
    }
    else {
      func_0x000107c61434(param_2);
      func_0x000107c6142c();
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar7);
    }
  }
LAB_1016d497c:
  lVar5 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016d4344();
  if (lVar5 != 0) {
    uStack_88 = (undefined1)param_4;
    uStack_87 = (undefined7)(param_4 >> 8);
    uVar6 = 0;
    uStack_a0 = param_1;
    uStack_98 = param_2;
    uStack_90 = param_3;
    FUN_1016d64d4(0,0x112dc1dd0,&PTR_PTR_1126a7978);
    func_0x0001031acfe4(0,0,FUN_1016d656c,&uStack_b0,lVar5,uVar6,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1016d4a40; end: 1016d4adf;  */

void FUN_1016d4a40(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_1016d4ae4(param_4,param_5);
    (*param_2)();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1016d4ae0; end: 1016d4ae3;  */

void FUN_1016d4ae0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else {
    FUN_1016d4ae4(uVar3,uVar4);
    (*pcVar1)();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1016d4ae4; end: 1016d4e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016d4ae4(double param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined1 auStack_1c0 [64];
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  ulong uStack_140;
  ulong uStack_138;
  undefined **ppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined **ppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  ppuVar7 = &PTR_PTR_1126a6700;
  uVar5 = 0;
  FUN_1016d64d4(0,0x112d69830);
  func_0x000100bc7fa4();
  func_0x000100bc7fa4(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dc1d80);
  func_0x000107c3ceac(uVar5);
  pdVar1 = (double *)(unaff_x20 + _DAT_112dc1d58);
  dVar8 = param_1;
  if ((*(char *)(pdVar1 + 1) == '\x01') || (dVar8 = param_1 - *pdVar1, 1800.0 <= dVar8)) {
    FUN_1016d5970();
    *pdVar1 = param_1;
    *(undefined1 *)(pdVar1 + 1) = 0;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_1016d6164();
  if (param_3 == 0) {
    return 0;
  }
  func_0x000107c3ceac(uVar5);
  dVar8 = dVar8 + -86400.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016d4e8c);
    (*pcVar4)();
  }
  if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016d4e90);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016d4e94);
    (*pcVar4)();
  }
  puVar6 = (ulong *)(unaff_x20 + _DAT_112dc1d68);
  uStack_f8 = puVar6[1];
  uVar9 = *puVar6;
  uVar12 = puVar6[3];
  ppuVar11 = (undefined **)puVar6[2];
  uVar10 = puVar6[4];
  uStack_d8 = (undefined1)puVar6[5];
  uStack_cf = (undefined7)*(undefined8 *)((long)puVar6 + 0x31);
  uStack_c8 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x31) >> 0x38);
  uStack_d7 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x29) >> 0x38);
  uStack_100 = uVar9;
  ppuStack_f0 = ppuVar11;
  uStack_e8 = uVar12;
  uStack_e0 = uVar10;
  if (uStack_f8 != 0) {
    lVar2 = CONCAT71(uStack_d7,uStack_d8);
    lVar3 = CONCAT71(uStack_cf,uStack_d0);
    if ((((uVar9 == param_2) && (param_3 == uStack_f8)) ||
        (func_0x000107c605b8(uVar9,uStack_f8,param_2,param_3,0), (uVar9 & 1) != 0)) &&
       (((ppuVar11 == ppuVar7 && (param_5 == uVar12)) ||
        (func_0x000107c605b8(ppuVar11,uVar12,ppuVar7,param_5,0), ((ulong)ppuVar11 & 1) != 0)))) {
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uStack_a8 = uStack_e8;
      ppuStack_b0 = ppuStack_f0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_8f = CONCAT17(uStack_c8,uStack_cf);
      uStack_97 = uStack_d7;
      uStack_90 = uStack_d0;
      func_0x0001016d6410(&uStack_c0,&uStack_140);
      func_0x000107c6142c(param_5);
      func_0x000107c6142c(param_3);
      if (lVar3 < (long)dVar8) {
        func_0x0001016d6444(&uStack_100);
        uStack_138 = puVar6[1];
        uStack_140 = *puVar6;
        uStack_128 = puVar6[3];
        ppuStack_130 = (undefined **)puVar6[2];
        uStack_120 = puVar6[4];
        uStack_118 = (undefined1)puVar6[5];
        uStack_10f = (undefined7)*(undefined8 *)((long)puVar6 + 0x31);
        uStack_108 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x31) >> 0x38);
        uStack_117 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
        uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x29) >> 0x38);
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        *(undefined8 *)((long)puVar6 + 0x31) = 0;
        *(undefined8 *)((long)puVar6 + 0x29) = 0;
        puVar6 = &uStack_140;
      }
      else {
        if (lVar2 != 0) {
          func_0x000107c61434(lVar2);
          func_0x000107c5fadc(uVar10,lVar2);
          func_0x0001016d6444(&uStack_100);
          func_0x000107c6142c(lVar2);
          return uVar10;
        }
        puVar6 = &uStack_100;
      }
      goto LAB_1016d4e1c;
    }
  }
  FUN_1016d5374();
  FUN_1016d5668(&uStack_c0,param_2,param_3,ppuVar7,param_5);
  func_0x000107c6142c(param_5);
  func_0x000107c6142c(param_3);
  if (uStack_b8 == 0) {
    return 0;
  }
  uStack_140 = uStack_c0;
  uStack_138 = uStack_b8;
  uStack_10f = (undefined7)uStack_8f;
  uStack_108 = (undefined1)((ulong)uStack_8f >> 0x38);
  uStack_110 = uStack_90;
  uStack_128 = uStack_a8;
  ppuStack_130 = ppuStack_b0;
  uStack_118 = uStack_98;
  uStack_117 = uStack_97;
  uStack_120 = uStack_a0;
  if ((long)dVar8 < CONCAT71(uStack_10f,uStack_90)) {
    uStack_178 = puVar6[1];
    uStack_180 = *puVar6;
    uStack_168 = puVar6[3];
    uStack_170 = puVar6[2];
    uStack_160 = puVar6[4];
    uStack_158 = (undefined1)puVar6[5];
    uStack_14f = *(undefined8 *)((long)puVar6 + 0x31);
    uStack_157 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
    uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x29) >> 0x38);
    puVar6[1] = uStack_b8;
    *puVar6 = uStack_c0;
    puVar6[3] = uStack_a8;
    puVar6[2] = (ulong)ppuStack_b0;
    puVar6[5] = CONCAT71(uStack_97,uStack_98);
    puVar6[4] = uStack_a0;
    *(undefined8 *)((long)puVar6 + 0x31) = uStack_8f;
    *(ulong *)((long)puVar6 + 0x29) = CONCAT17(uStack_90,uStack_97);
    func_0x0001016d6410(&uStack_140,auStack_1c0);
    func_0x0001016d6444(&uStack_180);
    uVar9 = uStack_120;
    lVar2 = CONCAT71(uStack_117,uStack_118);
    if (lVar2 != 0) {
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar9,lVar2);
      func_0x0001016d6444(&uStack_c0);
      func_0x000107c6142c(lVar2);
      return uVar9;
    }
  }
  puVar6 = &uStack_c0;
LAB_1016d4e1c:
  func_0x0001016d6444(puVar6);
  return 0;
}



/* Entry: 1016d4e94; end: 1016d4ffb; -[_TtC30LensTurnBasedRetryServicesImpl39LensTurnBasedAssociatedDataProviderImpl getAssociatedDataWithPromptId:receiverUserId:completion:] */

/* WARNING: Possible PIC construction at 0x0001016d4fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d4fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d4fc0) */
/* WARNING: Removing unreachable block (ram,0x0001016d4fd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d4e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103f9b90;
  func_0x000107c613fc(&UNK_1103f9b90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  puVar2 = &UNK_1103f9ab8;
  func_0x000107c613fc(&UNK_1103f9ab8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103f9bb8;
  func_0x000107c613fc(&UNK_1103f9bb8,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1016d6368;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  uVar4 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x1016d6788,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1016d4ffc; end: 1016d5073;  */

void FUN_1016d4ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1016d5080(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016d5074; end: 1016d507f;  */

void FUN_1016d5074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1016d5080(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1016d5080; end: 1016d51cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d5080(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  ppuVar4 = &PTR_PTR_1126a6700;
  FUN_1016d64d4(0,0x112d69830);
  func_0x000100bc7fa4();
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_1016d6164();
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x000107c5faec();
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dc1d80));
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d51c8);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d51cc);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d51d0);
      (*pcVar2)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1d68);
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
    uStack_78 = puVar1[3];
    uStack_80 = puVar1[2];
    uStack_70 = puVar1[4];
    uStack_68 = (undefined1)puVar1[5];
    uStack_5f = *(undefined8 *)((long)puVar1 + 0x31);
    uStack_67 = (undefined7)*(undefined8 *)((long)puVar1 + 0x29);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = ppuVar4;
    puVar1[3] = param_5;
    puVar1[4] = param_4;
    puVar1[5] = lVar3;
    puVar1[6] = (long)param_1;
    *(undefined1 *)(puVar1 + 7) = 1;
    func_0x0001016d6444(&uStack_90);
  }
  return;
}



/* Entry: 1016d51d0; end: 1016d5317; -[_TtC30LensTurnBasedRetryServicesImpl39LensTurnBasedAssociatedDataProviderImpl setAssociatedDataWithPromptId:receiverUserId:associatedData:] */

/* WARNING: Possible PIC construction at 0x0001016d52e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016d52f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d52e4) */
/* WARNING: Removing unreachable block (ram,0x0001016d52f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d51d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103f9ab8;
  func_0x000107c613fc(&UNK_1103f9ab8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103f9b68;
  func_0x000107c613fc(&UNK_1103f9b68,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  uVar3 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_1016d6778,puVar2,uVar3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016d5318; end: 1016d536b;  */

void FUN_1016d5318(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1016d5374();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016d536c; end: 1016d5373;  */

void FUN_1016d536c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1016d5374();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1016d5374; end: 1016d55bb;  */

/* WARNING: Removing unreachable block (ram,0x0001016d54e8) */
/* WARNING: Removing unreachable block (ram,0x0001016d5594) */
/* WARNING: Removing unreachable block (ram,0x0001016d5504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d5374(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long alStack_150 [2];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1d68);
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uVar5 = puVar1[4];
  uStack_68 = (undefined1)puVar1[5];
  uVar7 = *(ulong *)((long)puVar1 + 0x31);
  uVar6 = *(ulong *)((long)puVar1 + 0x29);
  uStack_5f = (undefined7)uVar7;
  uStack_58 = (undefined1)(uVar7 >> 0x38);
  uStack_67 = (undefined7)uVar6;
  uStack_60 = (undefined1)(uVar6 >> 0x38);
  lStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  if (lStack_88 != 0) {
    lVar2 = CONCAT71(uStack_67,uStack_68);
    uStack_a0 = CONCAT71(uStack_5f,uStack_60);
    uStack_c8 = puVar1[1];
    uStack_d0 = *puVar1;
    uStack_b8 = puVar1[3];
    uStack_c0 = puVar1[2];
    uStack_98 = uStack_58;
    if ((uVar7 & 0x100000000000000) != 0) {
      uStack_108 = puVar1[1];
      uStack_110 = *puVar1;
      uStack_f8 = puVar1[3];
      uStack_100 = puVar1[2];
      uStack_f0 = puVar1[4];
      uStack_e8 = (undefined1)puVar1[5];
      uStack_df = *(undefined8 *)((long)puVar1 + 0x31);
      uStack_e7 = (undefined7)*(undefined8 *)((long)puVar1 + 0x29);
      uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      puVar3 = &uStack_110;
      uStack_b0 = uVar5;
      lStack_a8 = lVar2;
      uStack_70 = uVar5;
      func_0x0001016d6410(puVar3,alStack_150);
      FUN_1016d4344();
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0001016d6444(&uStack_90);
      }
      else {
        if (lVar2 == 0) {
          func_0x0001016d6444(&uStack_90);
        }
        else {
          if ((uVar6 & 0x10000000000000) != 0) {
            func_0x000107c5fb8c(uVar5,lVar2);
          }
          puStack_140 = &uStack_d0;
          uVar4 = 0;
          uStack_138 = uVar5;
          lStack_130 = lVar2;
          FUN_1016d64d4(0,0x112dc1dd0,&PTR_PTR_1126a7978);
          func_0x000107c61434(lVar2);
          func_0x0001031acfe4(0,0,FUN_1016d648c,alStack_150,puVar3,uVar4,PTR___sytN_11034f1b0 + 8);
          func_0x0001016d6444(&uStack_90);
          func_0x000107c6142c(lVar2);
          if (puVar1[1] != 0) {
            *(undefined1 *)(puVar1 + 7) = 0;
          }
          func_0x0001000d224c(alStack_150);
          if (alStack_150[0] != 0) {
            func_0x000107c502bc(alStack_150[0]);
            func_0x000107c615e8(alStack_150[0]);
          }
        }
        func_0x000107c61170(puVar3);
      }
    }
  }
  return;
}



/* Entry: 1016d55bc; end: 1016d5667; -[_TtC30LensTurnBasedRetryServicesImpl39LensTurnBasedAssociatedDataProviderImpl storeAssociatedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d55bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1103f9ab8;
  func_0x000107c613fc(&UNK_1103f9ab8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x1016d6784,puVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 1016d5668; end: 1016d58f3;  */

/* WARNING: Removing unreachable block (ram,0x0001016d5744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d5668(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_78;
  
  lVar2 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016d4344();
  if (lVar2 == 0) {
    param_3 = 0;
    param_4 = 0;
    param_5 = 0;
    param_6 = 0;
    lVar7 = 0;
    uVar6 = 0;
    lVar9 = 0;
  }
  else {
    uVar3 = 0;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    uStack_90 = param_5;
    uStack_88 = param_6;
    FUN_1016d64d4(0,0x112dc1dd0,&PTR_PTR_1126a7978);
    uVar8 = 0x112dc1dd8;
    func_0x0001000285a8(0x112dc1dd8,&UNK_10d97e708);
    uVar6 = 0;
    func_0x0001031ac8e8(&uStack_78,0,0,FUN_1016d64b8,auStack_b0,lVar2,uVar3,uVar8);
    if (uStack_78 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uStack_78 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uStack_78 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uStack_78) {
        uVar4 = uStack_78;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uStack_78);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc1d80);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_6);
      func_0x000107c3ceac(uVar8);
      func_0x000107c61170(lVar2);
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d58ec);
        (*pcVar1)();
      }
      if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d58f0);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d58f4);
        (*pcVar1)();
      }
      lVar7 = 0;
      uVar6 = 0;
      lVar9 = (long)param_2;
    }
    else {
      if ((uStack_78 & 0xc000000000000001) == 0) {
        if (*(long *)((uStack_78 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d58e8);
          (*pcVar1)();
        }
        lVar5 = *(long *)(uStack_78 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar5 = 0;
        uVar6 = uStack_78;
        FUN_1016d5fa0();
      }
      func_0x000107c6142c(uStack_78);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_6);
      lVar9 = lVar5;
      func_0x0001053d5cb8();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c5faec();
      func_0x000107c61170(lVar9);
      lVar9 = lVar5;
      func_0x0001053d5cc4();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
    }
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = lVar7;
  param_1[5] = uVar6;
  param_1[6] = lVar9;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 1016d58f4; end: 1016d596f;  */

void FUN_1016d58f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x0001053d57e0(param_1,param_2,param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1016d5970; end: 1016d5a9b;  */

/* WARNING: Removing unreachable block (ram,0x0001016d5a74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d5970(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lVar2 = 0;
  FUN_1016d64d4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000100bc7fa4();
  FUN_1016d4344();
  if (lVar2 != 0) {
    func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112dc1d80));
    param_1 = param_1 + -86400.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d5a94);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d5a98);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d5a9c);
      (*pcVar1)();
    }
    lStack_40 = (long)param_1;
    uVar3 = 0;
    FUN_1016d64d4(0,0x112dc1dd0,&PTR_PTR_1126a7978);
    func_0x0001031acfe4(0,0,FUN_1016d6514,auStack_50,lVar2,uVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1016d5a9c; end: 1016d5b5b;  */

void FUN_1016d5a9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x0001053d53a8(param_2,param_3,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  uVar1 = 0;
  FUN_1016d64d4(0,0x112dc1de0,&PTR_PTR_1126b8518);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 1016d5b5c; end: 1016d5c03;  */

void FUN_1016d5b5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  func_0x000107c5fadc(uVar2,param_2[1]);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001053d563c(param_1,uVar2,uVar3,param_3,param_2[6]);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1016d5c04; end: 1016d5c63; -[_TtC30LensTurnBasedRetryServicesImpl39LensTurnBasedAssociatedDataProviderImpl init] */

void FUN_1016d5c04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensTurnBasedRetryServicesImpl.LensTurnBasedAssociatedDataProviderImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016d5c30);
  (*pcVar1)();
}



/* Entry: 1016d5c64; end: 1016d5cff; -[_TtC30LensTurnBasedRetryServicesImpl39LensTurnBasedAssociatedDataProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016d5c80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d5c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016d5c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc1d70));
  return;
}



/* Entry: 1016d5d00; end: 1016d5d1f;  */

void FUN_1016d5d00(void)

{
  func_0x000107c61168(&PTR_PTR_1127e76f8);
  return;
}



/* Entry: 1016d5d20; end: 1016d5d4f;  */

/* WARNING: Possible PIC construction at 0x0001016d5d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d5d38) */

void FUN_1016d5d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1016d5d50; end: 1016d5e4f;  */

undefined8 * FUN_1016d5d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1016d5e50; end: 1016d5eb3;  */

undefined8 * FUN_1016d5e50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 1016d5eb4; end: 1016d5f5f;  */

int FUN_1016d5eb4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016d5f60; end: 1016d5f9f;  */

void FUN_1016d5f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc1dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97e698;
  func_0x000107c61520(&UNK_10d97e698,&UNK_1103f9b38);
  puRam0000000112dc1dc0 = puVar1;
  return;
}



/* Entry: 1016d5fa0; end: 1016d6163;  */

ulong FUN_1016d5fa0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d6084);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d6088);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b8518;
    func_0x000107c61168(PTR_PTR_1126b8518);
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
    puVar4 = PTR_PTR_1126b8518;
    func_0x000107c61168(PTR_PTR_1126b8518);
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
  FUN_1016d64d4(0,0x112dc1de0,&PTR_PTR_1126b8518);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016d6164);
  (*pcVar2)();
}



/* Entry: 1016d6164; end: 1016d623f;  */

ulong FUN_1016d6164(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5fb1c();
  uVar5 = uVar4;
  func_0x000107c6142c(uVar3);
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5fb1c();
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  uVar3 = uVar1 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar3 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    uVar3 = uVar2 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar3 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) {
      return uVar1;
    }
  }
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar6);
  return 0;
}



/* Entry: 1016d6240; end: 1016d632b;  */

byte FUN_1016d6240(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar6 = param_1[3];
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar3 == uVar4 && uVar6 == uVar1 ||
         (func_0x000107c605b8(uVar3,uVar6,uVar4,uVar1,0), (uVar3 & 1) != 0)))) {
    uVar4 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar4 == 0) goto LAB_1016d62ec;
    }
    else if ((uVar4 != 0) &&
            (((uVar3 = param_1[4], uVar3 == param_2[4] && (param_1[5] == uVar4)) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)))) {
LAB_1016d62ec:
      if (param_1[6] == param_2[6]) {
        bVar5 = (byte)param_1[7] ^ (byte)param_2[7] ^ 1;
        goto LAB_1016d6314;
      }
    }
  }
  bVar5 = 0;
LAB_1016d6314:
  return bVar5 & 1;
}



/* Entry: 1016d632c; end: 1016d6367;  */

void FUN_1016d632c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016d6368; end: 1016d6377;  */

void FUN_1016d6368(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001016d6374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1016d6378; end: 1016d63b3;  */

void FUN_1016d6378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016d63b4; end: 1016d63d3;  */

void FUN_1016d63b4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else {
    FUN_1016d4ae4(uVar3,uVar4);
    (*pcVar1)();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1016d63d4; end: 1016d648b;  */

/* WARNING: Possible PIC construction at 0x0001016d63f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d63f4) */

void FUN_1016d63d4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1016d648c; end: 1016d64a7;  */

void FUN_1016d648c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016d5b5c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1016d64a8; end: 1016d64b7;  */

void FUN_1016d64a8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1016d64b8; end: 1016d64d3;  */

void FUN_1016d64b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016d5a9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1016d64d4; end: 1016d6513;  */

void FUN_1016d64d4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016d6514; end: 1016d653b;  */

void FUN_1016d6514(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001053d5944(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016d653c; end: 1016d656b;  */

/* WARNING: Possible PIC construction at 0x0001016d6554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d6558) */

void FUN_1016d653c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1016d656c; end: 1016d6587;  */

void FUN_1016d656c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016d58f4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1016d6588; end: 1016d65eb;  */

/* WARNING: Possible PIC construction at 0x0001016d659c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016d65a0) */

void FUN_1016d6588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1016d65ec; end: 1016d6657;  */

undefined8 * FUN_1016d65ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016d6658; end: 1016d669b;  */

undefined8 * FUN_1016d6658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1016d669c; end: 1016d6737;  */

int FUN_1016d669c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016d6738; end: 1016d6777;  */

void FUN_1016d6738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc1de8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97e71c;
  func_0x000107c61520(&UNK_10d97e71c,&UNK_1103f9c38);
  puRam0000000112dc1de8 = puVar1;
  return;
}



/* Entry: 1016d6778; end: 1016d678b;  */

void FUN_1016d6778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1016d5080(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}


