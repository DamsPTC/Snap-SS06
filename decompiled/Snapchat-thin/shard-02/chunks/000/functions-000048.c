/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101743748; end: 1017438d7;  */

void FUN_101743748(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112dc5450,&UNK_10d9851f8);
  lVar9 = *unaff_x20;
  lVar5 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar9 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101743828;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 0x40);
        uStack_88 = puVar3[1];
        uStack_90 = *puVar3;
        uStack_78 = puVar3[3];
        uStack_80 = puVar3[2];
        uStack_68 = puVar3[5];
        uStack_70 = puVar3[4];
        uStack_58 = puVar3[7];
        uStack_60 = puVar3[6];
        *(undefined4 *)(*(long *)(lVar5 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar8 * 0x40);
        puVar3[5] = uStack_68;
        puVar3[4] = uStack_70;
        puVar3[7] = uStack_58;
        puVar3[6] = uStack_60;
        puVar3[1] = uStack_88;
        *puVar3 = uStack_90;
        puVar3[3] = uStack_78;
        puVar3[2] = uStack_80;
        FUN_1017405b4(&uStack_90,auStack_d0);
        if (uVar6 != 0) break;
LAB_101743828:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1017438d8);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1017438ac;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1017438ac:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 1017438d8; end: 101743b37;  */

void FUN_1017438d8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  
  lVar3 = 0;
  FUN_10174031c();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc5438,&UNK_10d9851e0);
  lVar14 = *unaff_x20;
  lVar3 = lVar14;
  func_0x000107c6048c();
  if (*(long *)(lVar14 + 0x10) == 0) {
    func_0x000107c61574(lVar14);
LAB_101743b10:
    *unaff_x20 = lVar3;
    return;
  }
  lVar1 = lVar14 + 0x40;
  uVar9 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar3 != lVar14) || (lVar1 + uVar9 * 8 <= lVar3 + 0x40U)) {
    func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar9 << 3);
  }
  lVar15 = 0;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
  uVar10 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(lVar14 + 0x40);
  if (uVar9 == 0) goto LAB_101743a50;
  do {
    uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    uVar9 = uVar9 - 1 & uVar9;
    while( true ) {
      uVar11 = LZCOUNT(uVar11) | lVar15 << 6;
      lVar13 = *(long *)(lVar7 + 0x48) * uVar11;
      (**(code **)(lVar7 + 0x10))(lVar8,*(long *)(lVar14 + 0x30) + lVar13,lVar4);
      lVar12 = *(long *)(lVar5 + 0x48) * uVar11;
      func_0x0001017404e0(*(long *)(lVar14 + 0x38) + lVar12,puVar6);
      (**(code **)(lVar7 + 0x20))(*(long *)(lVar3 + 0x30) + lVar13,lVar8,lVar4);
      FUN_10173a69c(puVar6,*(long *)(lVar3 + 0x38) + lVar12);
      if (uVar9 != 0) break;
LAB_101743a50:
      do {
        lVar12 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101743b38);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          func_0x000107c61574(lVar14);
          goto LAB_101743b10;
        }
        uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
        lVar15 = lVar15 + 1;
      } while (uVar9 == 0);
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar15 = lVar12;
    }
  } while( true );
}



/* Entry: 101743b38; end: 101743c93;  */

void FUN_101743b38(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112dc5468,&UNK_10d985210);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_101743c14;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar8 * 4) =
             *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_101743c14:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101743c94);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_101743c6c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_101743c6c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101743c94; end: 101743e07;  */

void FUN_101743c94(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  
  func_0x0001000285a8(0x112dc5428,&UNK_10d9851d0);
  lVar15 = *unaff_x20;
  lVar9 = lVar15;
  func_0x000107c6048c();
  if (*(long *)(lVar15 + 0x10) != 0) {
    lVar1 = lVar15 + 0x40;
    uVar10 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar15 || lVar1 + uVar10 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar10 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar15 + 0x40);
    lVar13 = lVar11;
    if (uVar10 == 0) goto LAB_101743d6c;
    do {
      uVar14 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar11 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar14 * 0x10);
        uVar5 = *(undefined4 *)(puVar2 + 1);
        puVar3 = (undefined1 *)(*(long *)(lVar15 + 0x38) + uVar14 * 2);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
        *puVar4 = *puVar2;
        *(undefined4 *)(puVar4 + 1) = uVar5;
        puVar3 = (undefined1 *)(*(long *)(lVar9 + 0x38) + uVar14 * 2);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        lVar13 = lVar11;
        if (uVar10 != 0) break;
LAB_101743d6c:
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101743e08);
            (*pcVar8)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar11) goto LAB_101743de8;
          uVar10 = *(ulong *)(lVar1 + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar10 == 0);
        uVar14 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar11 * 0x40;
      }
    } while( true );
  }
LAB_101743de8:
  func_0x000107c61574(lVar15);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 101743e08; end: 101744f67;  */

void FUN_101743e08(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dc5440;
  func_0x0001000285a8(0x112dc5440,&UNK_10d9851e8);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
    func_0x000107c61574(lVar15);
LAB_1017440c4:
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1017440ec);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          func_0x000107c61574(lVar15);
          goto LAB_1017440c4;
        }
        uVar14 = puVar16[lVar17];
        lVar10 = lVar10 + 1;
      } while (uVar14 == 0);
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar17 * 0x40;
      if ((param_2 & 1) != 0) goto LAB_101743f40;
LAB_101743fa8:
      uVar3 = *(undefined4 *)(*(long *)(lVar15 + 0x30) + uVar9 * 4);
      puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0x40);
      uStack_b8 = puVar2[5];
      uStack_c0 = puVar2[4];
      uStack_a8 = puVar2[7];
      uStack_b0 = puVar2[6];
      uStack_d8 = puVar2[1];
      uStack_e0 = *puVar2;
      uStack_c8 = puVar2[3];
      uStack_d0 = puVar2[2];
      func_0x0001017451e8(&uStack_e0,&uStack_a0);
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
    }
    else {
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar10 << 6;
      lVar17 = lVar10;
      if ((param_2 & 1) == 0) goto LAB_101743fa8;
LAB_101743f40:
      uVar3 = *(undefined4 *)(*(long *)(lVar15 + 0x30) + uVar9 * 4);
      puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 0x40);
      uStack_98 = puVar2[1];
      uStack_a0 = *puVar2;
      uStack_88 = puVar2[3];
      uStack_90 = puVar2[2];
      uStack_78 = puVar2[5];
      uStack_80 = puVar2[4];
      uStack_68 = puVar2[7];
      uStack_70 = puVar2[6];
    }
    uVar8 = *(ulong *)(lVar7 + 0x28);
    func_0x000107c60684(uVar8,uVar3,4);
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1017440f0);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
        uVar8 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar9 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    *(undefined4 *)(*(long *)(lVar7 + 0x30) + uVar9 * 4) = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x40);
    puVar2[1] = uStack_98;
    *puVar2 = uStack_a0;
    puVar2[3] = uStack_88;
    puVar2[2] = uStack_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    puVar2[7] = uStack_68;
    puVar2[6] = uStack_70;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Entry: 101744f68; end: 101744ff3;  */

void FUN_101744f68(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  ushort uVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  uVar5 = 0x100;
  if (*(char *)(unaff_x20 + 0x29) == '\0') {
    uVar5 = 0;
  }
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101744ff4;
  *(ushort *)(plVar4 + 5) = uVar5 | bVar3;
  plVar4[3] = lVar2;
  plVar4[4] = lVar6;
  plVar4[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017428d0,lVar1,0);
  return;
}



/* Entry: 101744ff4; end: 10174502f;  */

void FUN_101744ff4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010174502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101745030; end: 10174503f;  */

undefined1  [16] FUN_101745030(void)

{
  return ZEXT816(0x110401b98);
}



/* Entry: 101745040; end: 10174505f;  */

void FUN_101745040(void)

{
  func_0x000107c61168(&PTR_PTR_112dc5c18);
  return;
}



/* Entry: 101745060; end: 1017450d3;  */

void FUN_101745060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 1017450d4; end: 101745113;  */

void FUN_1017450d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9858e0;
  func_0x000107c61520(&UNK_10d9858e0,&UNK_110401c10);
  puRam0000000112dc5cd0 = puVar1;
  return;
}



/* Entry: 101745114; end: 101745237;  */

void FUN_101745114(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5eec8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101745238; end: 1017452c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101745238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc5ce0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc5ce8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dc5cf0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1017452c4; end: 10174532f; -[SCComplianceFlagsDeltaSyncProcessor type] */

void FUN_1017452c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0448;
  func_0x000107c610f8(PTR_PTR_1126b0448);
  uVar2 = 0x6e61696c706d6f43;
  func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
  func_0x000107c478bc(puVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101745330; end: 1017453eb; -[SCComplianceFlagsDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:] */

uint FUN_101745330(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar2 = param_3;
  func_0x000107c4a91c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0x6e61696c706d6f43 && param_2 == -0x108c989e93b99a9d) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(lVar3,param_2,0x6e61696c706d6f43,0xef7367616c466563,0);
    uVar1 = (uint)lVar3;
  }
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 1017453ec; end: 1017454e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1017453ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_101745710();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  puVar1 = PTR_PTR_1126b0438;
  func_0x000107c61168(PTR_PTR_1126b0438);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dc5ce0);
  func_0x000107c5fadc(uVar3,((undefined8 *)(unaff_x20 + _DAT_112dc5ce0))[1]);
  func_0x000107c4d3fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar2 = PTR_PTR_1126b0440;
  func_0x000107c610f8();
  uVar3 = 0x6e61696c706d6f43;
  func_0x000107c5fadc(0x6e61696c706d6f43,0xef7367616c466563);
  func_0x000107c4709c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  *(undefined **)(param_1 + 0x20) = puVar2;
  return param_1;
}



/* Entry: 1017454e8; end: 10174554b; -[SCComplianceFlagsDeltaSyncProcessor logInDeltaSyncGroupKeys] */

void FUN_1017454e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1017453ec();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_101745c1c(0,0x112dc5d20,&PTR_PTR_1126b0440);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10174554c; end: 1017455bf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10174554c(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar2 = param_2;
    uVar4 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(uVar2);
  }
  (*pcVar1)(param_2,uVar4);
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = (uint)(uVar4 >> 0x3e);
    if (uVar3 == 1) {
      param_2 = uVar4 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1017455c0; end: 101745663; -[SCComplianceFlagsDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_1017455c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101745c1c(0,0x112d6e3e8,&PTR_PTR_1126b8148);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_10174577c(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 101745664; end: 1017456c3; -[SCComplianceFlagsDeltaSyncProcessor init] */

void FUN_101745664(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComplianceEngineImpl.ComplianceFlagsDeltaSyncProcessor",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101745690);
  (*pcVar1)();
}



/* Entry: 1017456c4; end: 10174570f; -[SCComplianceFlagsDeltaSyncProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017456c4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dc5ce0 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc5ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc5cf0));
  return;
}



/* Entry: 101745710; end: 10174577b;  */

void FUN_101745710(void)

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
    FUN_101745c1c(0,0x112dc5d20,&PTR_PTR_1126b0440);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc5d28;
  plVar5 = (long *)&UNK_10d985998;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10174577c; end: 101745bfb;  */

/* WARNING: Possible PIC construction at 0x0001017457e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010174598c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101745bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101745a44) */
/* WARNING: Removing unreachable block (ram,0x000101745a34) */
/* WARNING: Removing unreachable block (ram,0x000101745b44) */
/* WARNING: Removing unreachable block (ram,0x000101745a50) */
/* WARNING: Removing unreachable block (ram,0x000101745b08) */
/* WARNING: Removing unreachable block (ram,0x000101745990) */
/* WARNING: Removing unreachable block (ram,0x0001017459a0) */
/* WARNING: Removing unreachable block (ram,0x000101745a74) */
/* WARNING: Removing unreachable block (ram,0x000101745a7c) */
/* WARNING: Removing unreachable block (ram,0x0001017459b0) */
/* WARNING: Removing unreachable block (ram,0x000101745a94) */
/* WARNING: Removing unreachable block (ram,0x000101745a9c) */
/* WARNING: Removing unreachable block (ram,0x000101745aa4) */
/* WARNING: Removing unreachable block (ram,0x000101745abc) */
/* WARNING: Removing unreachable block (ram,0x000101745bf8) */
/* WARNING: Removing unreachable block (ram,0x000101745ac8) */
/* WARNING: Removing unreachable block (ram,0x000101745aac) */
/* WARNING: Removing unreachable block (ram,0x000101745acc) */
/* WARNING: Removing unreachable block (ram,0x000101745ab8) */
/* WARNING: Removing unreachable block (ram,0x0001017459b4) */
/* WARNING: Removing unreachable block (ram,0x000101745a84) */
/* WARNING: Removing unreachable block (ram,0x0001017459bc) */
/* WARNING: Removing unreachable block (ram,0x000101745ad8) */
/* WARNING: Removing unreachable block (ram,0x000101745878) */
/* WARNING: Removing unreachable block (ram,0x0001017459c4) */
/* WARNING: Removing unreachable block (ram,0x000101745880) */
/* WARNING: Removing unreachable block (ram,0x0001017459d0) */
/* WARNING: Removing unreachable block (ram,0x0001017459dc) */
/* WARNING: Removing unreachable block (ram,0x0001017459e4) */
/* WARNING: Removing unreachable block (ram,0x0001017458b0) */
/* WARNING: Removing unreachable block (ram,0x0001017457e8) */
/* WARNING: Removing unreachable block (ram,0x000101745b64) */
/* WARNING: Removing unreachable block (ram,0x000101745b6c) */
/* WARNING: Removing unreachable block (ram,0x0001017457f0) */
/* WARNING: Removing unreachable block (ram,0x000101745b78) */
/* WARNING: Removing unreachable block (ram,0x0001017457fc) */
/* WARNING: Removing unreachable block (ram,0x000101745be4) */
/* WARNING: Removing unreachable block (ram,0x000101745804) */
/* WARNING: Removing unreachable block (ram,0x000101745bf4) */
/* WARNING: Removing unreachable block (ram,0x000101745810) */
/* WARNING: Removing unreachable block (ram,0x000101745818) */
/* WARNING: Removing unreachable block (ram,0x000101745bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10174577c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x79735f61746c6564;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112dc5cf0) + 0x10);
  func_0x000107c5fadc(0x79735f61746c6564,0xea0000000000636e);
  func_0x0001053dbefc(uVar2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101745bfc; end: 101745c1b;  */

void FUN_101745bfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e86c8);
  return;
}



/* Entry: 101745c1c; end: 101745cab;  */

void FUN_101745c1c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101745cac; end: 101745cc7;  */

void FUN_101745cac(long param_1,long param_2)

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



/* Entry: 101745cc8; end: 101745e3f;  */

long FUN_101745cc8(long param_1,ulong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 2;
  *(undefined8 *)(unaff_x20 + 0x28) = PTR___swiftEmptySetSingleton_11034f1d8;
  if (0xe < param_2 >> 0x3c) goto LAB_101745dc8;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      func_0x0001000b44c0(param_1,param_2);
      if ((param_2 >> 0x30 & 0xff) != 0) goto LAB_101745dc8;
    }
    else if ((long)(int)param_1 != param_1 >> 0x20) goto LAB_101745dc8;
  }
  else if (uVar4 == 2) {
    if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) goto LAB_101745dc8;
  }
  else {
    func_0x0001000b44c0(param_1,param_2);
  }
  func_0x0001000b44c0(param_1,param_2);
  param_1 = 0;
  param_2 = 0xf000000000000000;
LAB_101745dc8:
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x10),auStack_78,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(ulong *)(unaff_x20 + 0x18) = param_2;
  func_0x0001000b44c0(uVar1,uVar2);
  func_0x000107c61428((undefined1 *)(unaff_x20 + 0x20),auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x28),auStack_a8,1,0);
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return unaff_x20;
}



/* Entry: 101745e40; end: 101745f2f;  */

void FUN_101745e40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001001d7310();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_101745ff0(param_2,param_3,param_4,param_5);
  *param_1 = uVar1;
  return;
}



/* Entry: 101745f30; end: 101745f43;  */

bool FUN_101745f30(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101745f44; end: 101745fef;  */

void FUN_101745f44(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101745ff0; end: 101746a17;  */

/* WARNING: Removing unreachable block (ram,0x000101746a0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101745ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong *puVar24;
  undefined1 *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 ****ppppuVar29;
  long unaff_x20;
  undefined8 *****pppppuVar30;
  undefined8 uVar31;
  long *plVar32;
  ulong uVar33;
  ulong uVar34;
  undefined1 auStack_140 [24];
  ulong uStack_128;
  long lStack_120;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  long alStack_d8 [3];
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  plVar27 = (long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0xf000000000000000;
  *plVar27 = 0;
  puVar25 = (undefined1 *)(unaff_x20 + 0x20);
  *puVar25 = 2;
  plVar32 = (long *)(unaff_x20 + 0x28);
  *plVar32 = (long)PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000100083b20(&ppppuStack_c0);
  *(undefined8 *****)(unaff_x20 + 0x30) = ppppuStack_c0;
  ppppuVar7 = ppppuStack_c0;
  func_0x000107c61174();
  func_0x000100083b20(&ppppuStack_c0);
  ppppuVar5 = ppppuStack_c0;
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efb9e60);
  ppppuVar9 = ppppuStack_c0;
  func_0x000107c4c0d0();
  func_0x000107c61170(uVar8);
  FUN_101747ec4();
  puVar19 = auStack_90;
  func_0x000107c61428(plVar32,puVar19,1,0);
  lVar10 = *plVar32;
  *plVar32 = (long)ppppuVar9;
  func_0x000107c6142c();
  FUN_101749060();
  uVar22 = 0;
  if ((ulong)puVar19 >> 0x3c < 0xf) {
    uVar3 = (uint)((ulong)puVar19 >> 0x20);
    uVar20 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar20 == 0) {
        func_0x0001000b44c0();
        uVar22 = (ulong)puVar19 >> 0x30 & 0xff;
      }
      else {
        func_0x0001000b44c0();
        iVar21 = (int)((ulong)lVar10 >> 0x20);
        if (SBORROW4(iVar21,(int)lVar10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101746a04);
          (*pcVar6)();
        }
        uVar22 = (ulong)(iVar21 - (int)lVar10);
      }
    }
    else if (uVar20 == 2) {
      lVar1 = *(long *)(lVar10 + 0x10);
      lVar10 = *(long *)(lVar10 + 0x18);
      func_0x0001000b44c0();
      uVar22 = lVar10 - lVar1;
      if (SBORROW8(lVar10,lVar1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101746420);
        (*pcVar6)();
      }
    }
    else {
      func_0x0001000b44c0();
      uVar22 = 0;
    }
  }
  puVar13 = &UNK_110401d20;
  puVar11 = puVar13;
  func_0x000107c613fc(&UNK_110401d20,0x11,7);
  pbVar23 = puVar11 + 0x10;
  *pbVar23 = 0;
  puVar12 = &UNK_110401d48;
  func_0x000107c613fc(&UNK_110401d48,0x18,7);
  puVar24 = (ulong *)(puVar12 + 0x10);
  *puVar24 = 0;
  func_0x000107c613fc(&UNK_110401d20,0x11,7);
  puVar13[0x10] = 3;
  puVar14 = &UNK_110401d70;
  uVar8 = 0x20;
  func_0x000107c613fc(&UNK_110401d70,0x20,7);
  puVar15 = puVar14;
  FUN_101749060();
  plVar28 = (long *)(puVar14 + 0x10);
  *plVar28 = (long)puVar15;
  *(undefined8 *)(puVar14 + 0x18) = uVar8;
  func_0x000100083b20(alStack_d8);
  uVar8 = *(undefined8 *)(alStack_d8[0] + _DAT_113091ae0);
  func_0x000107c61174(uVar8);
  func_0x000107c61170(alStack_d8[0]);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a0 = FUN_101747f34;
  ppppuStack_c0 = (undefined8 ****)PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = (undefined *)0x42000000;
  puStack_b0 = &UNK_100288f10;
  puStack_a8 = &UNK_110401d88;
  pppppuVar30 = &ppppuStack_c0;
  puStack_98 = puVar13;
  func_0x000107c60bc4(pppppuVar30);
  puVar15 = puStack_98;
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110401dc0;
  func_0x000107c613fc(&UNK_110401dc0,0x30,7);
  *(undefined **)(puVar15 + 0x10) = puVar14;
  *(undefined **)(puVar15 + 0x18) = puVar11;
  *(undefined **)(puVar15 + 0x20) = puVar12;
  *(undefined **)(puVar15 + 0x28) = puVar13;
  pcStack_a0 = FUN_101747f80;
  ppppuStack_c0 = (undefined8 ****)puVar4;
  puStack_b8 = (undefined *)0x42000000;
  puStack_b0 = &UNK_100e2e93c;
  puStack_a8 = &UNK_110401dd8;
  pppppuVar16 = &ppppuStack_c0;
  puStack_98 = puVar15;
  func_0x000107c60bc4(pppppuVar16);
  puVar15 = puStack_98;
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110401e10;
  func_0x000107c613fc(&UNK_110401e10,0x30,7);
  *(undefined **)(puVar15 + 0x10) = puVar14;
  *(undefined **)(puVar15 + 0x18) = puVar11;
  *(undefined **)(puVar15 + 0x20) = puVar12;
  *(undefined **)(puVar15 + 0x28) = puVar13;
  pcStack_a0 = (code *)0x101747fdc;
  ppppuStack_c0 = (undefined8 ****)puVar4;
  puStack_b8 = (undefined *)0x42000000;
  puStack_b0 = &UNK_101527164;
  puStack_a8 = &UNK_110401e28;
  pppppuVar17 = &ppppuStack_c0;
  puStack_98 = puVar15;
  func_0x000107c60bc4(pppppuVar17);
  puVar15 = puStack_98;
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar15);
  func_0x000107c4c6fc(uVar8);
  func_0x000107c60bd0(pppppuVar17);
  func_0x000107c60bd0(pppppuVar16);
  func_0x000107c60bd0(pppppuVar30);
  func_0x000107c61170(uVar8);
  func_0x000107c61428(plVar28,alStack_d8,0,0);
  uVar33 = *(ulong *)(puVar14 + 0x18);
  lVar10 = *plVar28;
  if (uVar33 >> 0x3c < 0xf) {
    uVar3 = (uint)(uVar33 >> 0x20);
    uVar20 = uVar3 >> 0x1e;
    if (1 < uVar3 >> 0x1e) {
      if ((uVar20 != 2) || (*(long *)(lVar10 + 0x10) == *(long *)(lVar10 + 0x18)))
      goto LAB_101746470;
      goto LAB_1017463b0;
    }
    if (uVar20 != 0) {
      if ((long)(int)lVar10 == lVar10 >> 0x20) goto LAB_101746470;
      goto LAB_1017463b0;
    }
    if ((uVar33 >> 0x30 & 0xff) != 0) goto LAB_1017463b0;
LAB_101746470:
    lVar10 = 0;
    uVar33 = 0xf000000000000000;
  }
  else {
LAB_1017463b0:
    func_0x000100de78a0(lVar10,uVar33);
  }
  func_0x000107c61428(plVar27,auStack_f0,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar31 = *(undefined8 *)(unaff_x20 + 0x18);
  *(long *)(unaff_x20 + 0x10) = lVar10;
  *(ulong *)(unaff_x20 + 0x18) = uVar33;
  func_0x0001000b44c0(uVar8,uVar31);
  func_0x000100083b20(&ppppuStack_c0);
  ppppuVar9 = ppppuStack_c0;
  func_0x000107c61428(pbVar23,auStack_108,0,0);
  uVar33 = 0;
  bVar2 = *pbVar23;
  if (bVar2 == 1) {
    func_0x000107c61428(puVar24,auStack_140,0,0);
    uVar33 = *puVar24;
  }
  uVar26 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar26 >> 0x3c < 0xf) {
    lVar10 = *plVar27;
    uVar3 = (uint)(uVar26 >> 0x20);
    uVar20 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar34 = uVar26 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)lVar10 >> 0x20);
        if (SBORROW4(iVar21,(int)lVar10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101746a08);
          (*pcVar6)();
        }
        uVar34 = (ulong)(iVar21 - (int)lVar10);
      }
    }
    else {
      if (uVar20 != 2) goto LAB_101746500;
      uVar34 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1017468b0);
        (*pcVar6)();
      }
    }
  }
  else {
LAB_101746500:
    uVar34 = 0;
  }
  lVar10 = *plVar32;
  if ((ulong)puVar19 >> 0x3c < 0xf) {
    uStack_128 = uVar22;
    func_0x000107c61434(lVar10);
    pppppuVar30 = (undefined8 *****)PTR___sSiN_11034deb0;
    puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c();
    ppppuStack_c0 = pppppuVar30;
    puStack_b8 = puVar15;
    func_0x000107c5fb78(0x42,0xe100000000000000);
    func_0x000107c6142c(puStack_b8);
    pppppuVar30 = (undefined8 *****)PTR___sSiN_11034deb0;
    puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  }
  else {
    func_0x000107c61434(lVar10);
    pppppuVar30 = (undefined8 *****)PTR___sSiN_11034deb0;
    puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  }
  PTR___sSiN_11034deb0 = (undefined *)pppppuVar30;
  PTR___sSis23CustomStringConvertiblesWP_11034df00 = puVar15;
  if (bVar2 != 0) {
    uStack_128 = uVar33;
    func_0x000107c6057c();
    ppppuStack_c0 = pppppuVar30;
    puStack_b8 = puVar15;
    func_0x000107c5fb78(0x42,0xe100000000000000);
    func_0x000107c6142c(puStack_b8);
  }
  if (uVar26 >> 0x3c < 0xf) {
    pppppuVar30 = (undefined8 *****)PTR___sSiN_11034deb0;
    puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uStack_128 = uVar34;
    func_0x000107c6057c();
    ppppuStack_c0 = pppppuVar30;
    puStack_b8 = puVar15;
    func_0x000107c5fb78(0x42,0xe100000000000000);
    func_0x000107c6142c(puStack_b8);
    pppppuVar30 = *(undefined8 ******)(lVar10 + 0x10);
  }
  else {
    pppppuVar30 = *(undefined8 ******)(lVar10 + 0x10);
  }
  if (pppppuVar30 != (undefined8 *****)0x0) {
    uStack_128 = 0;
    lStack_120 = -0x2000000000000000;
    func_0x000107c61434(lVar10);
    pppppuVar16 = pppppuVar30;
    FUN_101746bf0(pppppuVar30,0);
    pppppuVar17 = &ppppuStack_c0;
    func_0x000101747dbc(pppppuVar17,pppppuVar16 + 4,pppppuVar30,lVar10);
    FUN_101747ffc(ppppuStack_c0,puStack_b8,puStack_b0,puStack_a8,pcStack_a0);
    if (pppppuVar17 != pppppuVar30) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101746a00);
      (*pcVar6)();
    }
    ppppuStack_c0 = pppppuVar16;
    FUN_101746c70(&ppppuStack_c0);
    ppppuVar29 = ppppuStack_c0;
    puVar15 = PTR___ss6UInt32VN_11034f020;
    func_0x000107c5fc58(ppppuStack_c0,PTR___ss6UInt32VN_11034f020);
    func_0x000107c5fb78();
    func_0x000107c61574(ppppuVar29);
    func_0x000107c6142c(puVar15);
    func_0x000107c6142c(lVar10);
    lVar10 = lStack_120;
  }
  func_0x000107c6142c(lVar10);
  if ((*pbVar23 & 1) != 0) {
    func_0x000107c61428(puVar25,&ppppuStack_c0,1,0);
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    ppppuVar29 = (undefined8 ****)ppppuVar9[2];
    uVar31 = 0x61727473746f6f62;
    uVar8 = uVar31;
    func_0x000107c5fadc(0x61727473746f6f62,0xe900000000000070);
    func_0x0001053dbefc(ppppuVar29,uVar8,1);
    func_0x000107c61170(uVar8);
    func_0x000107c61428(puVar24,&uStack_128,0,0);
    uVar22 = *puVar24;
    ppppuVar29 = (undefined8 ****)ppppuVar9[2];
    func_0x000107c5fadc(0x61727473746f6f62,0xe900000000000070);
    func_0x0001053dc2a0(ppppuVar29,uVar31,uVar22);
    func_0x000107c61170(uVar31);
    uVar31 = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar22 = *(ulong *)(unaff_x20 + 0x18);
    if (uVar22 >> 0x3c < 0xf) {
      func_0x00010006c00c(uVar8,uVar22);
      uVar31 = uVar8;
      func_0x000107c5ee20(uVar8,uVar22);
    }
    uVar18 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efb9c40);
    func_0x000107c56bcc(ppppuVar7);
    func_0x000107c615e8(uVar31);
    func_0x000107c61170(uVar18);
    func_0x0001000b44c0(uVar8,uVar22);
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puVar14);
    func_0x000107c615e8(ppppuVar5);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(ppppuVar9);
    func_0x000107c61170(ppppuVar7);
    goto LAB_1017469c4;
  }
  uVar22 = *(ulong *)(unaff_x20 + 0x18);
  if (0xe < uVar22 >> 0x3c) {
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puVar14);
    func_0x000107c615e8(ppppuVar5);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(ppppuVar9);
    func_0x000107c61170(ppppuVar7);
    goto LAB_1017469c4;
  }
  lVar10 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(puVar25,&ppppuStack_c0,1,0);
  *puVar25 = 1;
  uVar3 = (uint)(uVar22 >> 0x20);
  uVar20 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar20 == 0) {
      uVar33 = uVar22 >> 0x30 & 0xff;
    }
    else {
      iVar21 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar21,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101746a0c);
        (*pcVar6)();
      }
      uVar33 = (ulong)(iVar21 - (int)lVar10);
LAB_10174692c:
      func_0x00010006c00c(lVar10,uVar22);
    }
  }
  else {
    uVar33 = 0;
    if (uVar20 == 2) {
      uVar33 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10174691c);
        (*pcVar6)();
      }
      goto LAB_10174692c;
    }
  }
  ppppuVar29 = (undefined8 ****)ppppuVar9[2];
  uVar8 = 0x656761726f7473;
  func_0x000107c5fadc(0x656761726f7473,0xe700000000000000);
  func_0x0001053dc2a0(ppppuVar29,uVar8,uVar33);
  func_0x000107c615e8(ppppuVar5);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(ppppuVar9);
  func_0x000107c61170(ppppuVar7);
  func_0x000107c61170(uVar8);
  func_0x0001000b44c0(lVar10,uVar22);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar14);
LAB_1017469c4:
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar12);
  return unaff_x20;
}



/* Entry: 101746a18; end: 101746baf;  */

void FUN_101746a18(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = param_1;
  func_0x000107c3ff30();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar11 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar11 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  *(long *)(param_3 + 0x10) = lVar11;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  func_0x0001000b44c0(uVar1,uVar2);
  puVar7 = auStack_90;
  func_0x000107c61428(param_4 + 0x10,puVar7,1,0);
  *(undefined1 *)(param_4 + 0x10) = 1;
  func_0x000107c3ff30();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar6 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    uVar4 = (uint)((ulong)puVar7 >> 0x20);
    uVar8 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar8 == 0) {
        func_0x00010006c090(lVar6);
        uVar9 = (ulong)puVar7 >> 0x30 & 0xff;
      }
      else {
        func_0x00010006c090(lVar6);
        iVar10 = (int)((ulong)lVar6 >> 0x20);
        if (SBORROW4(iVar10,(int)lVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101746bb0);
          (*pcVar5)();
        }
        uVar9 = (ulong)(iVar10 - (int)lVar6);
      }
      goto LAB_101746b5c;
    }
    if (uVar8 == 2) {
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar3 = *(long *)(lVar6 + 0x18);
      func_0x00010006c090(lVar6);
      uVar9 = lVar3 - lVar11;
      if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101746b34);
        (*pcVar5)();
      }
      goto LAB_101746b5c;
    }
    func_0x00010006c090(lVar6);
  }
  uVar9 = 0;
LAB_101746b5c:
  func_0x000107c61428(param_5 + 0x10,auStack_a8,1,0);
  *(ulong *)(param_5 + 0x10) = uVar9;
  func_0x000107c61428(param_6 + 0x10,auStack_c0,1,0);
  *(undefined1 *)(param_6 + 0x10) = param_7;
  return;
}



/* Entry: 101746bb0; end: 101746bbb;  */

void FUN_101746bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar1;
  func_0x0001001d7310();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  FUN_101745ff0(uVar1,uVar3,uVar2,uVar4);
  *param_1 = uVar5;
  return;
}



/* Entry: 101746bbc; end: 101746bef;  */

void FUN_101746bbc(void)

{
  long unaff_x20;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101746bf0; end: 101746c6f;  */

undefined * FUN_101746bf0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112dc5808;
    func_0x0001000285a8(0x112dc5808,&UNK_10d9853b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x1d;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  return puVar2;
}



/* Entry: 101746c70; end: 101746da3;  */

void FUN_101746c70(ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  uint *puStack_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar7 = uVar11;
  func_0x000107c61558();
  if ((uVar7 & 1) == 0) {
    func_0x000101747eb0();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  puVar1 = (uint *)(uVar11 + 0x20);
  uVar7 = uVar12;
  puStack_50 = puVar1;
  uStack_48 = uVar12;
  func_0x000107c60574();
  if ((long)uVar7 < (long)uVar12) {
    puVar13 = (undefined *)(uVar12 >> 1);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      puVar5 = puVar13;
      func_0x000107c60380(puVar13,PTR___ss6UInt32VN_11034f020);
      *(undefined **)(puVar5 + 0x10) = puVar13;
    }
    puStack_68 = puVar5 + 0x20;
    puStack_60 = puVar13;
    FUN_101746da4(&puStack_68,auStack_58,&puStack_50,uVar7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    func_0x000107c61574(puVar5);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar6 = -1;
    uVar7 = 1;
    puVar8 = puVar1;
    do {
      uVar3 = puVar1[uVar7];
      lVar9 = lVar6;
      puVar10 = puVar8;
      do {
        uVar2 = *puVar10;
        if (uVar2 <= uVar3) break;
        *puVar10 = uVar3;
        puVar10[1] = uVar2;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar10 = puVar10 + -1;
      } while (bVar4);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (uVar7 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Entry: 101746da4; end: 10174710b;  */

void FUN_101746da4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  uint *puVar20;
  long unaff_x21;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = param_3[1];
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      puVar11 = puStack_58;
      lVar23 = lVar13 + 1;
      if (lVar23 < lVar12) {
        lVar14 = *param_3;
        uVar3 = *(uint *)(lVar14 + lVar23 * 4);
        uVar4 = *(uint *)(lVar14 + lVar13 * 4);
        lVar16 = lVar13 + 2;
        uVar19 = uVar3;
        do {
          lVar18 = lVar16;
          lVar23 = lVar12;
          if (lVar12 == lVar18) break;
          uVar5 = *(uint *)(lVar14 + lVar18 * 4);
          bVar8 = uVar19 <= uVar5;
          lVar16 = lVar18 + 1;
          uVar19 = uVar5;
          lVar23 = lVar18;
        } while (uVar3 < uVar4 != bVar8);
        if (uVar3 < uVar4) {
          if (lVar23 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470e0);
            (*pcVar7)();
          }
          lVar16 = lVar13;
          lVar18 = lVar23;
          if (lVar13 < lVar23) {
            do {
              lVar18 = lVar18 + -1;
              if (lVar16 != lVar18) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x101747100);
                  (*pcVar7)();
                }
                uVar6 = *(undefined4 *)(lVar14 + lVar16 * 4);
                *(undefined4 *)(lVar14 + lVar16 * 4) = *(undefined4 *)(lVar14 + lVar18 * 4);
                *(undefined4 *)(lVar14 + lVar18 * 4) = uVar6;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar18);
            lVar12 = param_3[1];
          }
        }
      }
      lVar16 = lVar23;
      if (lVar23 < lVar12) {
        if (SBORROW8(lVar23,lVar13)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470dc);
          (*pcVar7)();
        }
        if (lVar23 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470e4);
            (*pcVar7)();
          }
          lVar14 = lVar13 + param_4;
          if (lVar12 <= lVar13 + param_4) {
            lVar14 = lVar12;
          }
          if (lVar14 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470e8);
            (*pcVar7)();
          }
          if (lVar23 != lVar14) {
            lVar12 = *param_3;
            puVar17 = (uint *)(lVar12 + lVar23 * 4 + -4);
            lVar18 = lVar13 - lVar23;
            do {
              uVar3 = *(uint *)(lVar12 + lVar23 * 4);
              lVar16 = lVar18;
              puVar20 = puVar17;
              do {
                uVar4 = *puVar20;
                if (uVar4 <= uVar3) break;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470ec);
                  (*pcVar7)();
                }
                *puVar20 = uVar3;
                puVar20[1] = uVar4;
                bVar8 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                puVar20 = puVar20 + -1;
              } while (bVar8);
              lVar23 = lVar23 + 1;
              puVar17 = puVar17 + 1;
              lVar18 = lVar18 + -1;
              lVar16 = lVar14;
            } while (lVar23 != lVar14);
          }
        }
      }
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470cc);
        (*pcVar7)();
      }
      puVar9 = puStack_58;
      func_0x000107c61558();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar22 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar22) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        func_0x0001000a91e0(puVar11,uVar22 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar22 + 1;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101747104);
        (*pcVar7)();
      }
      FUN_10174710c(&puStack_58,*param_1,param_3);
      puVar11 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10174709c;
      lVar12 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar12);
  }
  puVar11 = puStack_58;
  lVar12 = *param_1;
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10174710c);
    (*pcVar7)();
  }
  puVar9 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar9 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar21 = (ulong *)(puVar11 + 0x10);
  uVar22 = *puVar21;
  while (1 < uVar22) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101747108);
      (*pcVar7)();
    }
    plVar1 = (long *)(puVar11 + uVar22 * 0x10);
    lVar23 = *plVar1;
    puVar2 = puVar21 + uVar22 * 2;
    uVar15 = puVar2[1];
    FUN_10174737c(lVar13 + lVar23 * 4,lVar13 + *puVar2 * 4,lVar13 + uVar15 * 4,lVar12);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar23) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470d0);
      (*pcVar7)();
    }
    if (*puVar21 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470d4);
      (*pcVar7)();
    }
    *plVar1 = lVar23;
    plVar1[1] = uVar15;
    uVar15 = *puVar21;
    lVar13 = uVar15 - uVar22;
    if (uVar15 < uVar22) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1017470d8);
      (*pcVar7)();
    }
    uVar22 = uVar15 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar13 * 0x10);
    *puVar21 = uVar22;
  }
LAB_10174709c:
  func_0x000107c6142c(puVar11);
  return;
}



/* Entry: 10174710c; end: 10174737b;  */

undefined8 FUN_10174710c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1017471e4;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10174735c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101747244:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10174734c);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101747354);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101747334);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101747338);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101747340);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101747348);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1017471e4:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10174733c);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101747344);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101747350);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101747358);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101747244;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101747360);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101747324);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10174737c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10174737c(lVar8 + lVar11 * 4,lVar8 + *plVar3 * 4,lVar8 + lVar9 * 4,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101747328);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10174732c);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101747330);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 10174737c; end: 101747583;  */

undefined8 FUN_10174737c(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar6;
  
  lVar11 = (long)param_2 - (long)param_1;
  lVar3 = lVar11 + 3;
  if (-1 < lVar11) {
    lVar3 = lVar11;
  }
  lVar3 = lVar3 >> 2;
  lVar12 = (long)param_3 - (long)param_2;
  lVar7 = lVar12 + 3;
  if (-1 < lVar12) {
    lVar7 = lVar12;
  }
  lVar7 = lVar7 >> 2;
  if (lVar3 < lVar7) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 2);
    }
    puVar6 = param_4 + lVar3;
    puVar9 = param_1;
    if (3 < lVar11) {
      do {
        if (param_3 <= param_2) break;
        uVar2 = *param_2;
        if (uVar2 < *param_4) {
          puVar10 = param_4;
          puVar8 = param_2 + 1;
          puVar4 = param_2;
        }
        else {
          uVar2 = *param_4;
          puVar10 = param_4 + 1;
          puVar8 = param_2;
          puVar4 = param_4;
        }
        param_2 = puVar8;
        param_4 = puVar10;
        if (puVar9 != puVar4) {
          *puVar9 = uVar2;
        }
        puVar9 = puVar9 + 1;
      } while (param_4 < puVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar7 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar7 << 2);
    }
    puVar4 = param_4 + lVar7;
    puVar6 = puVar4;
    puVar9 = param_2;
    if ((param_1 < param_2) && (3 < lVar12)) {
      do {
        puVar8 = param_2 + -1;
        puVar10 = param_3;
        while( true ) {
          param_3 = puVar10 + -1;
          puVar6 = puVar4 + -1;
          if (*puVar6 < *puVar8) break;
          if (puVar10 != puVar4) {
            *param_3 = *puVar6;
          }
          puVar4 = puVar6;
          puVar9 = param_2;
          puVar10 = param_3;
          if (puVar6 <= param_4) goto LAB_101747528;
        }
        if (puVar10 != param_2) {
          *param_3 = *puVar8;
        }
        puVar6 = puVar4;
        puVar9 = puVar8;
      } while ((param_1 < puVar8) && (param_2 = puVar8, param_4 < puVar4));
    }
  }
LAB_101747528:
  uVar5 = (long)puVar6 - (long)param_4;
  uVar1 = uVar5 + 3;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((puVar9 != param_4) || ((uint *)((long)param_4 + (uVar1 & 0xfffffffffffffffc)) <= puVar9)) {
    func_0x000107c610b8(puVar9,param_4,((long)uVar1 >> 2) << 2);
  }
  return 1;
}



/* Entry: 101747584; end: 10174765f;  */

undefined8 FUN_101747584(int *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60684(uVar1,param_2 & 0xffffffff,4);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(lVar5 + 0x30) + uVar1 * 4) == (int)param_2) {
        uVar2 = 0;
        goto LAB_101747644;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar3 = *unaff_x20;
  FUN_101747660(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_101747644:
  *param_1 = (int)param_2;
  return uVar2;
}



/* Entry: 101747660; end: 10174776b;  */

void FUN_101747660(int param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_101747960();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_10174776c(uVar3 + 1);
    }
    else {
      FUN_101747aa0();
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60684(param_2,param_1,4);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(int *)(*(long *)(lVar4 + 0x30) + param_2 * 4) == param_1) {
          func_0x000107c60620(PTR___ss6UInt32VN_11034f020);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10174776c);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(int *)(*(long *)(lVar2 + 0x30) + param_2 * 4) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10174775c);
  (*pcVar1)();
}



/* Entry: 10174776c; end: 10174795f;  */

void FUN_10174776c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112dc5e00;
  func_0x0001000285a8(0x112dc5e00,&UNK_10db7daf0);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101747930:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10174795c);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) goto LAB_101747930;
        uVar15 = ((ulong *)(lVar13 + 0x38))[lVar14];
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar9;
    }
    uVar2 = *(undefined4 *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar8) | lVar14 << 6) * 4);
    uVar7 = *(ulong *)(lVar6 + 0x28);
    func_0x000107c60684(uVar7,uVar2,4);
    uVar12 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar7 >> 6;
    uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar7 = uVar10 + 1;
        if ((uVar7 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101747960);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar7 != uVar8) {
          uVar10 = uVar7;
        }
        bVar3 = (bool)(uVar7 == uVar8 | bVar3);
        uVar7 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar7 == 0xffffffffffffffff);
      uVar7 = ~uVar7;
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar8 * 4) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar14;
  } while( true );
}



/* Entry: 101747960; end: 101747a9f;  */

void FUN_101747960(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112dc5e00,&UNK_10db7daf0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101747aa0);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101747a80;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar8 * 4) =
           *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
    } while( true );
  }
LAB_101747a80:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101747aa0; end: 101747cc7;  */

void FUN_101747aa0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112dc5e00;
  func_0x0001000285a8(0x112dc5e00,&UNK_10db7daf0);
  lVar6 = lVar15;
  func_0x000107c602e0(lVar15,lVar1,1,uVar5);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101747c94:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar6;
    return;
  }
  puVar16 = (ulong *)(lVar15 + 0x38);
  bVar12 = *(byte *)(lVar15 + 0x20) & 0x3f;
  uVar11 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar14 = -1L << (uVar11 & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (bVar12 < 6) {
    uVar18 = ~uVar14;
  }
  uVar18 = uVar18 & *puVar16;
  uVar11 = uVar11 + 0x3f >> 6;
  lVar1 = lVar6 + 0x38;
  lVar9 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101747cc4);
          (*pcVar4)();
        }
        if ((long)uVar11 <= lVar17) {
          if (bVar12 < 6) {
            *puVar16 = uVar14;
          }
          else {
            func_0x000107c60ee4(puVar16,uVar11 << 3);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_101747c94;
        }
        uVar18 = puVar16[lVar17];
        lVar9 = lVar9 + 1;
      } while (uVar18 == 0);
      uVar8 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar8 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = lVar9;
    }
    uVar2 = *(undefined4 *)(*(long *)(lVar15 + 0x30) + (LZCOUNT(uVar8) | lVar17 << 6) * 4);
    uVar7 = *(ulong *)(lVar6 + 0x28);
    func_0x000107c60684(uVar7,uVar2,4);
    uVar13 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar7 >> 6;
    uVar8 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar7 = uVar10 + 1;
        if ((uVar7 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101747cc8);
          (*pcVar4)();
        }
        uVar10 = 0;
        if (uVar7 != uVar8) {
          uVar10 = uVar7;
        }
        bVar3 = (bool)(uVar7 == uVar8 | bVar3);
        uVar7 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar7 == 0xffffffffffffffff);
      uVar7 = ~uVar7;
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar8 * 4) = uVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Entry: 101747cc8; end: 101747ec3;  */

long FUN_101747cc8(long *param_1,undefined4 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x40);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined4 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101747dbc);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101747db8);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_101747d9c;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined4 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 4 +
                  lVar7 * 0x100);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_101747d9c:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 101747ec4; end: 101747f33;  */

undefined * FUN_101747ec4(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_3c [4];
  undefined *puStack_38;
  
  puStack_38 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      if ((param_1 >> (uVar1 & 0x3f) & 1) != 0) {
        FUN_101747584(auStack_3c,uVar1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x3f);
  }
  return puStack_38;
}



/* Entry: 101747f34; end: 101747f63;  */

void FUN_101747f34(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 101747f64; end: 101747f7f;  */

void FUN_101747f64(long param_1,long param_2)

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



/* Entry: 101747f80; end: 101747ffb;  */

void FUN_101747f80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101746a18(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),1);
  return;
}



/* Entry: 101747ffc; end: 101748007;  */

void FUN_101747ffc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101748008; end: 101748047;  */

void FUN_101748008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9859a8;
  func_0x000107c61520(&UNK_10d9859a8,&UNK_110401ef0);
  puRam0000000112dc5d38 = puVar1;
  return;
}



/* Entry: 101748048; end: 1017481cb;  */

undefined1  [16] FUN_101748048(void)

{
  return ZEXT816(0x110401e60);
}



/* Entry: 1017481cc; end: 10174835f;  */

void FUN_1017481cc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 **ppuVar4;
  byte *pbVar5;
  uint uVar6;
  long unaff_x21;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = param_2;
  uStack_70 = param_1;
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    puVar8 = (undefined1 *)0x0;
    do {
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          ppuVar4 = (undefined1 **)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            ppuVar4 = (undefined1 **)param_3;
            func_0x000107c60358(param_3,param_4);
          }
        }
        else {
          puStack_80 = param_3;
          uStack_78 = param_4 & 0xffffffffffffff;
          ppuVar4 = &puStack_80;
        }
        pbVar5 = (byte *)((long)ppuVar4 + (long)puVar8);
        uVar2 = (uint)*pbVar5;
        if ((char)*pbVar5 < '\0') {
          uVar6 = (uint)LZCOUNT(uVar2 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 == 1) goto LAB_101748270;
            uVar2 = pbVar5[1] & 0x3f | (uVar2 & 0x1f) << 6;
            puVar7 = (undefined1 *)0x2;
          }
          else if (uVar6 == 3) {
            uVar2 = (uVar2 & 0xf) << 0xc | (pbVar5[1] & 0x3f) << 6 | pbVar5[2] & 0x3f;
            puVar7 = (undefined1 *)0x3;
          }
          else {
            uVar2 = (uVar2 & 0xf) << 0x12 | (pbVar5[1] & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6 |
                    pbVar5[3] & 0x3f;
            puVar7 = (undefined1 *)0x4;
          }
        }
        else {
LAB_101748270:
          puVar7 = (undefined1 *)0x1;
        }
      }
      else {
        lVar3 = (long)puVar8 << 0x10;
        puVar7 = param_3;
        func_0x000107c602f8(lVar3,param_3,param_4);
        uVar2 = (uint)lVar3;
      }
      puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,uVar2);
      FUN_1017489e4(&uStack_70,&puStack_80);
      if (unaff_x21 != 0) {
        func_0x000107c6142c(uStack_68);
        return;
      }
      puVar8 = puVar7 + (long)puVar8;
    } while ((long)puVar8 < (long)uVar1);
  }
  return;
}



/* Entry: 101748360; end: 101748373;  */

bool FUN_101748360(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101748374; end: 1017485db;  */

void FUN_101748374(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0xeb00000000656469;
  uVar5 = 0x64656c6261736964;
  if (bVar2 != 2) {
    uVar5 = 0xd000000000000013;
  }
  uVar1 = 0xe800000000000000;
  if (bVar2 != 2) {
    uVar1 = 0x800000010efb9da0;
  }
  uVar3 = 0x727265766f5f6f6e;
  if (bVar2 != 0) {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x64656c62616e65;
  }
  if (bVar2 < 2) {
    uVar1 = uVar4;
    uVar5 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1017485dc; end: 1017486ef;  */

void FUN_1017485dc(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar4 = 0xeb00000000656469;
  uVar5 = 0x64656c6261736964;
  if (bVar2 != 2) {
    uVar5 = 0xd000000000000013;
  }
  uVar1 = 0xe800000000000000;
  if (bVar2 != 2) {
    uVar1 = 0x800000010efb9da0;
  }
  uVar3 = 0x727265766f5f6f6e;
  if (bVar2 != 0) {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x64656c62616e65;
  }
  if (bVar2 < 2) {
    uVar1 = uVar4;
    uVar5 = uVar3;
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1017486f0; end: 10174872f;  */

void FUN_1017486f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dc5f20;
  func_0x0001000285a8(0x112dc5f20,&UNK_10d985bc0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101748730; end: 10174874b;  */

void FUN_101748730(undefined8 param_1)

{
  FUN_10174874c();
  uRam0000000112dc5e30 = param_1;
  return;
}



/* Entry: 10174874c; end: 10174895b;  */

undefined * FUN_10174874c(long *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000104004554();
  lVar11 = *param_1;
  lVar12 = *(long *)(lVar11 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    func_0x000107c61434(lVar11);
    puVar13 = (undefined1 *)(lVar11 + 0x28);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      lVar15 = *(long *)(puVar13 + -8);
      if (lVar15 != 0) {
        uVar2 = *puVar13;
        puVar5 = puVar10;
        func_0x000107c61558();
        puStack_a0 = puVar10;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_10173f270(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puStack_a0 + 0x10);
        if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar1) {
          FUN_10173f270(1 < *(ulong *)(puStack_a0 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_a0 + 0x10) = uVar1 + 1;
        *(long *)(puStack_a0 + uVar1 * 0x10 + 0x20) = lVar15;
        puStack_a0[uVar1 * 0x10 + 0x28] = uVar2;
        puVar10 = puStack_a0;
      }
      puVar13 = puVar13 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(lVar11);
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101739e80();
  lVar12 = *(long *)(puVar10 + 0x10);
  if (lVar12 != 0) {
    pcVar14 = puVar10 + 0x28;
    do {
      puVar16 = *(undefined **)(pcVar14 + -8);
      cVar3 = *pcVar14;
      uStack_b0 = CONCAT71(uStack_b0._1_7_,cVar3);
      ppuVar7 = &puStack_b8;
      puVar6 = &UNK_110733e90;
      puStack_b8 = puVar16;
      func_0x000107c5fb18(ppuVar7,&UNK_110733e90);
      puVar8 = (undefined *)0x0;
      uVar9 = 0xe000000000000000;
      FUN_1017481cc(0,0xe000000000000000,ppuVar7,puVar6);
      puStack_b8 = puVar8;
      uStack_b0 = uVar9;
      func_0x000100e8b654();
      func_0x000107c601e4(PTR___sSSN_11034da80,puVar8);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(puVar8);
      if (cVar3 != '\x01') {
        if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10174895c);
          (*pcVar4)();
        }
        if ((ulong)puVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10174892c);
          (*pcVar4)();
        }
      }
      pcVar14 = pcVar14 + 0x10;
      puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      puVar6 = puVar5;
      func_0x000107c61558(puVar5);
      puStack_b8 = puVar5;
      FUN_101742f60(&puStack_a0,puVar16,puVar6);
      lVar12 = lVar12 + -1;
      puVar5 = puStack_b8;
    } while (lVar12 != 0);
  }
  func_0x000107c61574(puVar10);
  return puVar5;
}



/* Entry: 10174895c; end: 1017489e3;  */

void FUN_10174895c(long param_1)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c54fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1017489e4; end: 101748b73;  */

void FUN_1017489e4(ulong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  ulong uStack_48;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar1 = *param_2;
  uVar5 = (ulong)uVar1;
  func_0x000107c5eb7c(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eb90();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  if ((uVar5 & 1) != 0) {
    uVar5 = *param_1 & 0xffffffffffff;
    if ((param_1[1] & 0x2000000000000000) != 0) {
      uVar5 = param_1[1] >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      func_0x000107c5fb78(0x20,0xe100000000000000);
    }
  }
  if (uVar1 < 0x80) {
    uVar4 = uVar1 + 1;
  }
  else {
    uVar2 = (uVar1 & 0x3f) * 0x100;
    if (uVar1 < 0x800) {
      uVar4 = (uVar1 >> 6) + uVar2 + 0x81c1;
    }
    else {
      uVar2 = (uVar2 | uVar1 >> 6 & 0x3f) * 0x100;
      uVar4 = ((uVar2 | uVar1 >> 0xc & 0x3f) << 8 | uVar1 >> 0x12) + 0x818181f1;
      if (uVar1 >> 0x10 == 0) {
        uVar4 = (uVar1 >> 0xc) + uVar2 + 0x8181e1;
      }
    }
  }
  uVar5 = (ulong)(4 - ((uint)LZCOUNT(uVar4) >> 3));
  uStack_48 = (ulong)uVar4 + 0xfefefefefefeff & (-1L << ((uVar5 & 7) << 3) ^ 0xffffffffffffffffU);
  func_0x000107c5fb54(&uStack_48);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101748b74; end: 101748cff;  */

void FUN_101748b74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_110401f48;
  func_0x000107c613fc(&UNK_110401f48,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_101748d00;
  pppuStack_80 = (undefined8 ***)PTR___NSConcreteStackBlock_11034bd00;
  pppuStack_78 = (undefined8 ***)0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110401f60;
  ppppuVar3 = &pppuStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4();
  ppppuVar4 = ppppuVar3;
  func_0x000107c60bc4();
  func_0x000107c61174();
  func_0x000107c60bd0(ppppuVar3);
  func_0x000107c61574(puStack_58);
  puVar2 = &UNK_110401f98;
  func_0x000107c613fc(&UNK_110401f98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_60 = (code *)0x101748d24;
  pppuStack_80 = (undefined8 ***)puVar1;
  pppuStack_78 = (undefined8 ***)0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110401fb0;
  ppppuVar3 = &pppuStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4();
  ppppuVar5 = ppppuVar3;
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  func_0x000107c60bd0(ppppuVar3);
  func_0x000107c61574(puStack_58);
  uVar6 = 0x112dc5e28;
  func_0x0001000285a8(0x112dc5e28,&UNK_10d985a90);
  pppuStack_80 = ppppuVar4;
  pppuStack_78 = ppppuVar5;
  puStack_68 = (undefined *)uVar6;
  func_0x000107c61428(0x112dc5e08,auStack_98,0x21,0);
  func_0x000107c60bc4(ppppuVar4);
  func_0x000107c60bc4(ppppuVar5);
  func_0x000100f72e88(&pppuStack_80,0x112dc5e08);
  func_0x000107c614a8(auStack_98);
  func_0x000107c60bd0(ppppuVar5);
  func_0x000107c60bd0(ppppuVar4);
  return;
}



/* Entry: 101748d00; end: 101748e93;  */

void FUN_101748d00(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c54fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101748e94; end: 101748ee3;  */

void FUN_101748e94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc5e40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc5e48;
  func_0x00010002969c(0x112dc5e48,&UNK_10d985ab8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dc5e40 = puVar2;
  return;
}



/* Entry: 101748ee4; end: 101748f0f;  */

void FUN_101748ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101748f10();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101748f50();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101748f10; end: 101748f8f;  */

void FUN_101748f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985ac0;
  func_0x000107c61520(&UNK_10d985ac0,&UNK_110402058);
  puRam0000000112dc5e50 = puVar1;
  return;
}



/* Entry: 101748f90; end: 101748f93;  */

void FUN_101748f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5e60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985b8c;
  func_0x000107c61520(&UNK_10d985b8c,&UNK_110402058);
  puRam0000000112dc5e60 = puVar1;
  return;
}



/* Entry: 101748f94; end: 101748fd3;  */

void FUN_101748f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc5e60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d985b8c;
  func_0x000107c61520(&UNK_10d985b8c,&UNK_110402058);
  puRam0000000112dc5e60 = puVar1;
  return;
}



/* Entry: 101748fd4; end: 101749037;  */

ulong FUN_101748fd4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101749038; end: 10174905f;  */

void FUN_101749038(long param_1,long param_2)

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



/* Entry: 101749060; end: 101749163;  */

undefined1  [16] FUN_101749060(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efb9c40);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_38 = 0;
    uStack_30 = 0xf000000000000000;
  }
  else {
    uVar1 = 0x112d373e8;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    puVar2 = &uStack_38;
    func_0x000107c6147c(puVar2,auStack_28,uVar1,PTR___s10Foundation4DataVN_110350ae0,6);
    if ((int)puVar2 == 0) {
      uStack_38 = 0;
      uStack_30 = 0xf000000000000000;
    }
  }
  auVar3._8_8_ = uStack_30;
  auVar3._0_8_ = uStack_38;
  return auVar3;
}



/* Entry: 101749164; end: 101749197;  */

void FUN_101749164(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101749198; end: 1017491a7; -[_TtC31SCNativeComplianceEngineAdapter31SCNativeComplianceEngineAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101749198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc5f38));
  return;
}



/* Entry: 1017491a8; end: 1017492a3;  */

void FUN_1017491a8(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long alStack_58 [3];
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(alStack_58);
  cVar1 = *(char *)(alStack_58[0] + 0x10);
  func_0x000107c61574();
  if (cVar1 == '\x01') {
    func_0x000100083b20(alStack_58);
    func_0x0001000a8868(alStack_58,lStack_40);
    param_1[3] = lStack_40;
    param_1[4] = *(long *)(lStack_38 + 8);
    func_0x0001000c5db4(param_1);
    (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
    func_0x0001000834e4(alStack_58);
  }
  else {
    func_0x000100083b20(alStack_58);
    lVar2 = alStack_58[0];
    func_0x000107c3e938();
    func_0x000107c61180();
    func_0x000107c61170(alStack_58[0]);
    lVar3 = 0;
    func_0x00010174c684();
    lVar4 = lVar3;
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar2;
    param_1[3] = lVar3;
    param_1[4] = (long)&PTR_DAT_1104024a0;
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 1017492a4; end: 1017492bf;  */

void FUN_1017492a4(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long alStack_58 [3];
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(alStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  cVar1 = *(char *)(alStack_58[0] + 0x10);
  func_0x000107c61574();
  if (cVar1 == '\x01') {
    func_0x000100083b20(alStack_58);
    func_0x0001000a8868(alStack_58,lStack_40);
    param_1[3] = lStack_40;
    param_1[4] = *(long *)(lStack_38 + 8);
    func_0x0001000c5db4(param_1);
    (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
    func_0x0001000834e4(alStack_58);
  }
  else {
    func_0x000100083b20(alStack_58);
    lVar2 = alStack_58[0];
    func_0x000107c3e938();
    func_0x000107c61180();
    func_0x000107c61170(alStack_58[0]);
    lVar3 = 0;
    func_0x00010174c684();
    lVar4 = lVar3;
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar2;
    param_1[3] = lVar3;
    param_1[4] = (long)&PTR_DAT_1104024a0;
    *param_1 = lVar4;
  }
  return;
}



/* Entry: 1017492c0; end: 101749307;  */

void FUN_1017492c0(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010021abb0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff55bc();
  *param_1 = param_2;
  return;
}



/* Entry: 101749308; end: 10174931f;  */

void FUN_101749308(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010021abb0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff55bc();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101749320; end: 101749373;  */

void FUN_101749320(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101749878();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110402300;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101749374; end: 10174937b;  */

void FUN_101749374(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101749878();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110402300;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10174937c; end: 1017493e7;  */

void FUN_10174937c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [56];
  
  puVar1 = auStack_78;
  func_0x000100de6718(param_1,puVar1);
  func_0x000103ff50d0(param_1);
  (*param_2)();
  func_0x000100dd0920(param_1,puVar1,param_3);
  return;
}



/* Entry: 1017493e8; end: 1017493ef;  */

void FUN_1017493e8(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [56];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = auStack_78;
  func_0x000100de6718(param_1,puVar2,uVar3);
  func_0x000103ff50d0(param_1);
  (*pcVar1)();
  func_0x000100dd0920(param_1,puVar2,uVar3);
  return;
}



/* Entry: 1017493f0; end: 10174964f;  */

void FUN_1017493f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [128];
  
  if (param_2 == 0) {
    (*param_8)(param_1,0,3);
  }
  else {
    func_0x000100de5f68(param_4,param_5,param_6,param_7);
    func_0x000103ff4498(auStack_e0,param_4,param_5,param_6,param_7);
    func_0x000100083b20(auStack_108);
    func_0x0001000a8868(auStack_108,uStack_f0);
    puVar1 = &UNK_1104022c0;
    func_0x000107c613fc(&UNK_1104022c0,0x30,7);
    *(code **)(puVar1 + 0x10) = param_8;
    *(undefined8 *)(puVar1 + 0x18) = param_9;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    *(long *)(puVar1 + 0x28) = param_2;
    pcVar2 = *(code **)(lStack_e8 + 0x10);
    func_0x000107c6157c(param_9);
    func_0x000107c61434(param_2);
    (*pcVar2)(param_1,param_2,param_3,auStack_e0,FUN_101749898,puVar1,uStack_f0,lStack_e8);
    func_0x000100de66dc(auStack_e0);
    func_0x000107c61574(puVar1);
    func_0x0001000834e4(auStack_108);
  }
  return;
}



/* Entry: 101749650; end: 1017496d7;  */

void FUN_101749650(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [64];
  
  func_0x000100de6798(param_1,auStack_80);
  func_0x000107c61434(param_5);
  func_0x000103ff4a78(param_1,param_4,param_5);
  (*param_2)();
  func_0x000100de5fcc(param_1,param_4,param_5);
  return;
}



/* Entry: 1017496d8; end: 101749743;  */

void FUN_1017496d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101749744; end: 10174977b;  */

void FUN_101749744(void)

{
  func_0x000101749528();
  return;
}



/* Entry: 10174977c; end: 101749837;  */

void FUN_10174977c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  puVar1 = &UNK_110402360;
  func_0x000107c613fc(&UNK_110402360,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcVar2 = *(code **)(lStack_58 + 8);
  func_0x000107c6157c(param_4);
  (*pcVar2)(param_1,0x10174989c,puVar1,uStack_60,lStack_58);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 101749838; end: 101749867;  */

void FUN_101749838(void)

{
  FUN_1017493f0();
  return;
}



/* Entry: 101749868; end: 101749877;  */

undefined1  [16] FUN_101749868(void)

{
  return ZEXT816(0x110402340);
}



/* Entry: 101749878; end: 101749897;  */

void FUN_101749878(void)

{
  func_0x000107c61168(&PTR_PTR_112dc5fc0);
  return;
}



/* Entry: 101749898; end: 10174989f;  */

void FUN_101749898(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101749650(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1017498a0; end: 1017498e7;  */

void FUN_1017498a0(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001002191a4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff5800();
  *param_1 = param_2;
  return;
}



/* Entry: 1017498e8; end: 1017498ff;  */

void FUN_1017498e8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001002191a4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103ff5800();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101749900; end: 10174994b;  */

void FUN_101749900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001001b7a94();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  FUN_101749954();
  *param_1 = uVar1;
  return;
}



/* Entry: 10174994c; end: 101749953;  */

void FUN_10174994c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001001b7a94();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_101749954();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101749954; end: 101749a13;  */

void FUN_101749954(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010efb9f10);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(param_1);
    *(char *)(unaff_x20 + 0x10) = (char)lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101749a14);
  (*pcVar1)();
}



/* Entry: 101749a14; end: 101749a33;  */

void FUN_101749a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101749a34; end: 101749b1f;  */

void FUN_101749a34(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = &uStack_60;
  lVar1 = param_2;
  func_0x000100083b20(&uStack_58);
  FUN_10174b9e4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a7a98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  uStack_60 = 1;
  func_0x0001000285a8(0x112dc60e0,&UNK_10d985ec8);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(lVar2 + 0x30) = param_5;
  *(undefined8 **)(lVar2 + 0x38) = puVar4;
  *(long *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = uStack_58;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110402440;
  *param_1 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  return;
}



/* Entry: 101749b20; end: 101749b2b;  */

void FUN_101749b20(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar7 = &uStack_60;
  lVar4 = lVar1;
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10174b9e4();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126a7a98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x10) = puVar6;
  uStack_60 = 1;
  func_0x0001000285a8(0x112dc60e0,&UNK_10d985ec8);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(lVar5 + 0x30) = uVar3;
  *(undefined8 **)(lVar5 + 0x38) = puVar7;
  *(long *)(lVar5 + 0x18) = lVar1;
  *(undefined8 *)(lVar5 + 0x20) = uStack_58;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110402440;
  *param_1 = lVar5;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 101749b2c; end: 101749b8f;  */

void FUN_101749b2c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = lVar2;
  if (lVar2 == 1) {
    FUN_101749b90();
    *param_2 = lVar1;
    func_0x000107c6157c();
  }
  *param_1 = lVar1;
  FUN_10174c570(lVar2);
  return;
}



/* Entry: 101749b90; end: 101749d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101749b90(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [40];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000019;
    uVar5 = 0x800000010efb9fe0;
    func_0x000107c5fadc(0xd000000000000019);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dadbd8;
    func_0x000107c5faec();
    uStack_a8 = 0;
    uStack_a0 = 0x201;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    ppuStack_b8 = ppuVar4;
    uStack_b0 = uVar5;
    func_0x000100083b20(auStack_108);
    func_0x0001000a8868(auStack_108,uStack_f0);
    pcVar6 = *(code **)(lStack_e8 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar6)(auStack_e0,0xd000000000000017,0x800000010efba000,&ppuStack_b8,lVar3,uStack_f0,
              lStack_e8);
    func_0x000100e1b054(&ppuStack_b8);
    func_0x000107c615e8(lVar1);
    func_0x000107c615ec(lVar3,2);
    func_0x0001000834e4(auStack_108);
    func_0x00010174d070(0);
    func_0x000107c613fc();
    FUN_10174ca00(auStack_e0);
  }
  return;
}


