/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ba3918; end: 103ba394f;  */

void FUN_103ba3918(undefined8 param_1)

{
  if (lRam0000000112ff2b08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b4434);
  return;
}



/* Entry: 103ba3950; end: 103ba3a43;  */

void FUN_103ba3950(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dc5e670;
  puStack_58 = &UNK_10dc5e688;
  puStack_50 = &UNK_10dc5e688;
  puStack_48 = &UNK_10dc5e6a0;
  puStack_40 = &UNK_10dc5e6a0;
  puStack_38 = &UNK_10dc5e6b8;
  lVar1 = 0x13f;
  func_0x000103ba39f0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dc5e6d0;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 103ba3a44; end: 103ba3a5b;  */

undefined8 * FUN_103ba3a44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103ba3a5c; end: 103ba3b07;  */

void FUN_103ba3a5c(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar4 = *(undefined2 *)(unaff_x20 + 0x48);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x68);
  plVar7 = (long *)0x130;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103ba3b08;
  *(undefined1 *)((long)plVar7 + 0x122) = uVar3;
  plVar7[0x1b] = lVar2;
  plVar7[0x1c] = lVar8;
  *(undefined2 *)(plVar7 + 0x24) = uVar4;
  plVar7[0x19] = lVar1;
  plVar7[0x1a] = lVar5;
  plVar7[0x17] = unaff_x20 + 0x10;
  plVar7[0x18] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0x1d] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[0x1e] = lVar5;
  plVar7[0x1f] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ba3410,lVar5,lVar6);
  return;
}



/* Entry: 103ba3b08; end: 103ba3b43;  */

void FUN_103ba3b08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ba3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ba3b44; end: 103ba3b93;  */

undefined8 FUN_103ba3b44(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ff2ad0;
  func_0x0001000285a8(0x112ff2ad0,&UNK_10dc5e5f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103ba3b94; end: 103ba3bff;  */

void FUN_103ba3b94(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0xb8);
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  plVar5 = (long *)0x170;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ba48bc;
  plVar5[0x1f] = lVar3;
  plVar5[0x20] = lVar4;
  plVar5[0x1d] = unaff_x20 + 0x10;
  plVar5[0x1e] = unaff_x20 + 0x38;
  lVar3 = 0x112ff2ad0;
  func_0x0001000285a8(0x112ff2ad0,&UNK_10dc5e5f0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x21] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x22] = uVar2;
  lVar3 = 0;
  func_0x000107c5f83c();
  plVar5[0x23] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x24] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x25] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x26] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x27] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x28] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x29] = lVar4;
  plVar5[0x2a] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ba2a38,lVar4,lVar3);
  return;
}



/* Entry: 103ba3c00; end: 103ba3c47;  */

undefined8 FUN_103ba3c00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103ba3c48; end: 103ba3dab;  */

undefined8 FUN_103ba3c48(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  if ((param_2 & 0xff) == 0) {
    uVar2 = 0x635f636974617473;
    uVar3 = 0xed000074756f7475;
  }
  else {
    uVar2 = 0x646574616d696e61;
    uVar3 = 0xef74756f7475635f;
    if (((uint)param_2 & 0xff) != 1) {
      uVar2 = 0xd000000000000010;
      uVar3 = 0x800000010ef1cd20;
    }
  }
  func_0x000107c5fb58(alStack_88,uVar2,uVar3);
  func_0x000107c6142c();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar3) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_103ba3d90;
      }
      uVar3 = uVar3 + 1 & ~uVar1;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_103ba3dac(param_2,uVar3,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_103ba3d90:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 103ba3dac; end: 103ba3f53;  */

void FUN_103ba3dac(char param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_78 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_103ba41e0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_103ba3f54(uVar4 + 1);
    }
    else {
      FUN_103ba4320();
    }
    lVar6 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar6 + 0x28));
    uVar5 = 0x646574616d696e61;
    uVar4 = 0xef74756f7475635f;
    if (param_1 != '\x01') {
      uVar5 = 0xd000000000000010;
      uVar4 = 0x800000010ef1cd20;
    }
    param_2 = 0xed000074756f7475;
    uVar1 = 0x635f636974617473;
    if (param_1 != '\0') {
      param_2 = uVar4;
      uVar1 = uVar5;
    }
    func_0x000107c5fb58(auStack_78,uVar1,param_2);
    func_0x000107c6142c();
    func_0x000107c606a8();
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(char *)(*(long *)(lVar6 + 0x30) + param_2) == param_1) {
          func_0x000107c60620(&UNK_1106def60);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba3f54);
          (*pcVar2)();
        }
        param_2 = param_2 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar6 = lVar3 + (param_2 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_2 & 0x3f);
  *(char *)(*(long *)(lVar3 + 0x30) + param_2) = param_1;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba3f44);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  return;
}



/* Entry: 103ba3f54; end: 103ba41df;  */

void FUN_103ba3f54(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uStack_b8;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ff2be8;
  func_0x0001000285a8(0x112ff2be8,&UNK_10dc5e720);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar6);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_103ba41a8:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar13 + 0x38);
  uStack_b8 = 0x800000010ef1cd20;
  lVar1 = lVar5 + 0x38;
  lVar8 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ba41dc);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) goto LAB_103ba41a8;
        uVar15 = ((ulong *)(lVar13 + 0x38))[lVar14];
        lVar8 = lVar8 + 1;
      } while (uVar15 == 0);
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar8;
    }
    cVar2 = *(char *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar14 << 6));
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    if (cVar2 == '\0') {
      uVar6 = 0x635f636974617473;
      uVar7 = 0xed000074756f7475;
    }
    else if (cVar2 == '\x01') {
      uVar6 = 0x646574616d696e61;
      uVar7 = 0xef74756f7475635f;
    }
    else {
      uVar6 = 0xd000000000000010;
      uVar7 = uStack_b8;
    }
    func_0x000107c5fb58(auStack_a8,uVar6,uVar7);
    func_0x000107c6142c();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar7 >> 6;
    uVar12 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar12 = uVar9 + 1;
        if ((uVar12 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ba41e0);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar12 != uVar7) {
          uVar9 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar7 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    *(char *)(*(long *)(lVar5 + 0x30) + uVar7) = cVar2;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar14;
  } while( true );
}



/* Entry: 103ba41e0; end: 103ba431f;  */

void FUN_103ba41e0(void)

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
  
  func_0x0001000285a8(0x112ff2be8,&UNK_10dc5e720);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba4320);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_103ba4300;
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
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_103ba4300:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 103ba4320; end: 103ba45eb;  */

void FUN_103ba4320(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uStack_b0;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ff2be8;
  func_0x0001000285a8(0x112ff2be8,&UNK_10dc5e720);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar6);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_103ba45b8:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *puVar14;
  uStack_b0 = 0x800000010ef1cd20;
  lVar1 = lVar5 + 0x38;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ba45e8);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          uVar16 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar16 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_103ba45b8;
        }
        uVar16 = puVar14[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar8;
    }
    cVar2 = *(char *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    if (cVar2 == '\0') {
      uVar6 = 0x635f636974617473;
      uVar7 = 0xed000074756f7475;
    }
    else if (cVar2 == '\x01') {
      uVar6 = 0x646574616d696e61;
      uVar7 = 0xef74756f7475635f;
    }
    else {
      uVar6 = 0xd000000000000010;
      uVar7 = uStack_b0;
    }
    func_0x000107c5fb58(auStack_a8,uVar6,uVar7);
    func_0x000107c6142c();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar7 = uVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar7 >> 6;
    uVar12 = -1L << (uVar7 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar12 = uVar9 + 1;
        if ((uVar12 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103ba45ec);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar12 != uVar7) {
          uVar9 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar7 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    *(char *)(*(long *)(lVar5 + 0x30) + uVar7) = cVar2;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 103ba45ec; end: 103ba4623;  */

void FUN_103ba45ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103ba4624();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103ba4624; end: 103ba487b;  */

undefined * FUN_103ba4624(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ba471c);
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
    puVar3 = (undefined *)0x112ff2bd8;
    func_0x0001000285a8(0x112ff2bd8,&UNK_10dc5e718);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) =
         (long)(puVar4 + -0x20) - ((long)(puVar4 + -0x20) >> 0x3f) & 0xfffffffffffffffe;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 << 1);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 2 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 << 1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103ba487c; end: 103ba48bb;  */

void FUN_103ba487c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e8a0;
  func_0x000107c61520(&UNK_10dc5e8a0,&UNK_1106def60);
  puRam0000000112ff2be0 = puVar1;
  return;
}



/* Entry: 103ba48bc; end: 103ba48bf;  */

void FUN_103ba48bc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ba3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ba48c0; end: 103ba492f;  */

uint FUN_103ba48c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_103ba4be8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103ba4930; end: 103ba4973;  */

void FUN_103ba4930(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar2 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar4 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar3 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103ba4974; end: 103ba49e3;  */

uint FUN_103ba4974(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_103ba4aa4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103ba49e4; end: 103ba4a8f;  */

void FUN_103ba49e4(void)

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



/* Entry: 103ba4a90; end: 103ba4aa3;  */

bool FUN_103ba4a90(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ba4aa4; end: 103ba4be7;  */

void FUN_103ba4aa4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_110 [128];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  puVar2 = &uStack_60;
  func_0x000107c5ff24(puVar2,&uStack_90);
  iVar1 = (int)puVar2;
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)(param_2 + 10) != '\x01') {
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 10) == '\x01') {
      return;
    }
    func_0x000107c609ac(param_1[6],param_1[7],param_1[8],param_1[9],param_2[6],param_2[7],param_2[8]
                        ,param_2[9]);
    if (iVar1 == 0) {
      return;
    }
  }
  if (*(char *)((long)param_1 + 0x6c) == '\x01') {
    if (*(char *)((long)param_2 + 0x6c) != '\x01') {
      return;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x6c) == '\x01') {
      return;
    }
    uVar3 = *(ulong *)((long)param_1 + 0x54);
    func_0x000107c600bc(uVar3,*(undefined8 *)((long)param_1 + 0x5c),
                        *(undefined8 *)((long)param_1 + 100),*(undefined8 *)((long)param_2 + 0x54),
                        *(undefined8 *)((long)param_2 + 0x5c),*(undefined8 *)((long)param_2 + 100));
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  lVar4 = param_2[0xf];
  if (param_1[0xf] == 0) {
    if (lVar4 == 0) {
      FUN_103ba38d4(param_2,auStack_110);
    }
  }
  else if (lVar4 == 0) {
    FUN_103ba38d4(param_2,auStack_110);
  }
  else if ((param_1[0xe] != param_2[0xe]) || (param_1[0xf] != lVar4)) {
    func_0x000107c605b8();
  }
  return;
}



/* Entry: 103ba4be8; end: 103ba4f0f;  */

bool FUN_103ba4be8(long *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_310 [128];
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_148 = param_1[9];
  lStack_150 = param_1[8];
  lStack_138 = param_1[0xb];
  lStack_140 = param_1[10];
  lStack_128 = param_1[0xd];
  lStack_130 = param_1[0xc];
  lStack_118 = param_1[0xf];
  lStack_120 = param_1[0xe];
  lStack_188 = param_1[1];
  lStack_190 = *param_1;
  lStack_178 = param_1[3];
  lStack_180 = param_1[2];
  lStack_168 = param_1[5];
  lStack_170 = param_1[4];
  lStack_158 = param_1[7];
  lStack_160 = param_1[6];
  iVar3 = (int)&lStack_190;
  func_0x000103ba3838();
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      plVar4 = &lStack_190;
      func_0x000100d67c18();
      lStack_108 = plVar4[1];
      lStack_110 = *plVar4;
      lStack_f8 = plVar4[3];
      lStack_100 = plVar4[2];
      lStack_e8 = plVar4[5];
      lStack_f0 = plVar4[4];
      lVar10 = plVar4[6];
      lVar11 = plVar4[7];
      lVar12 = plVar4[8];
      lVar13 = plVar4[9];
      lVar2 = plVar4[10];
      uVar7 = *(ulong *)((long)plVar4 + 0x54);
      uVar8 = *(undefined8 *)((long)plVar4 + 0x5c);
      uVar9 = *(undefined8 *)((long)plVar4 + 100);
      cVar1 = *(char *)((long)plVar4 + 0x6c);
      uVar5 = plVar4[0xe];
      lVar6 = plVar4[0xf];
      lStack_228 = param_2[0xd];
      lStack_230 = param_2[0xc];
      lStack_218 = param_2[0xf];
      lStack_220 = param_2[0xe];
      lStack_248 = param_2[9];
      lStack_250 = param_2[8];
      lStack_238 = param_2[0xb];
      lStack_240 = param_2[10];
      lStack_288 = param_2[1];
      lStack_290 = *param_2;
      lStack_278 = param_2[3];
      lStack_280 = param_2[2];
      lStack_268 = param_2[5];
      lStack_270 = param_2[4];
      lStack_258 = param_2[7];
      lStack_260 = param_2[6];
      iVar3 = (int)&lStack_290;
      func_0x000103ba3838();
      if (iVar3 == 0) {
        plVar4 = &lStack_290;
        func_0x000100d67c18();
        lStack_208 = plVar4[1];
        lStack_210 = *plVar4;
        lStack_1f8 = plVar4[3];
        lStack_200 = plVar4[2];
        lStack_1e8 = plVar4[5];
        lStack_1f0 = plVar4[4];
        lStack_1d8 = plVar4[7];
        lStack_1e0 = plVar4[6];
        lStack_1c8 = plVar4[9];
        lStack_1d0 = plVar4[8];
        lStack_198 = plVar4[0xf];
        uStack_1a0 = plVar4[0xe];
        uStack_1a8 = (undefined4)plVar4[0xd];
        uStack_1a4 = (uint)((ulong)plVar4[0xd] >> 0x20);
        uStack_1b0 = (undefined4)plVar4[0xc];
        uStack_1ac = (undefined4)((ulong)plVar4[0xc] >> 0x20);
        uStack_1b8 = (undefined4)plVar4[0xb];
        uStack_1b4 = (undefined4)((ulong)plVar4[0xb] >> 0x20);
        uStack_1c0 = (uint)plVar4[10];
        uStack_1bc = (undefined4)((ulong)plVar4[10] >> 0x20);
        lStack_c8 = lStack_f8;
        lStack_d0 = lStack_100;
        lStack_b8 = lStack_e8;
        lStack_c0 = lStack_f0;
        lStack_d8 = lStack_108;
        lStack_e0 = lStack_110;
        lStack_a8 = plVar4[1];
        lStack_b0 = *plVar4;
        lStack_98 = plVar4[3];
        lStack_a0 = plVar4[2];
        lStack_88 = plVar4[5];
        lStack_90 = plVar4[4];
        plVar4 = &lStack_e0;
        func_0x000107c5ff24(plVar4,&lStack_b0);
        iVar3 = (int)plVar4;
        if (((ulong)plVar4 & 1) != 0) {
          if ((char)lVar2 == '\x01') {
            if ((uStack_1c0 & 0xff) != 1) {
              return false;
            }
          }
          else {
            if ((uStack_1c0 & 0xff) == 1) {
              return false;
            }
            func_0x000107c609ac(lVar10,lVar11,lVar12,lVar13,lStack_1e0,lStack_1d8,lStack_1d0,
                                lStack_1c8);
            if (iVar3 == 0) {
              return false;
            }
          }
          if (cVar1 == '\x01') {
            if ((uStack_1a4 & 0xff) != 1) {
              return false;
            }
          }
          else {
            if ((uStack_1a4 & 0xff) == 1) {
              return false;
            }
            func_0x000107c600bc(uVar7,uVar8,uVar9,CONCAT44(uStack_1b8,uStack_1bc),
                                CONCAT44(uStack_1b0,uStack_1b4),CONCAT44(uStack_1a8,uStack_1ac));
            if ((uVar7 & 1) == 0) {
              return false;
            }
          }
          if (lVar6 == 0) {
            if (lStack_198 == 0) {
              FUN_103ba38d4(&lStack_210,auStack_310);
              return true;
            }
          }
          else if (lStack_198 == 0) {
            FUN_103ba38d4(&lStack_210,auStack_310);
          }
          else {
            if ((uVar5 == uStack_1a0) && (lVar6 == lStack_198)) {
              return true;
            }
            func_0x000107c605b8(uVar5,lVar6,uStack_1a0,lStack_198,0);
            if ((uVar5 & 1) != 0) {
              return true;
            }
          }
        }
      }
    }
    else {
      plVar4 = &lStack_190;
      func_0x000100d67c18();
      lVar6 = *plVar4;
      lStack_1e8 = param_2[5];
      lStack_1f0 = param_2[4];
      lStack_1d8 = param_2[7];
      lStack_1e0 = param_2[6];
      lStack_208 = param_2[1];
      lStack_210 = *param_2;
      lStack_1f8 = param_2[3];
      lStack_200 = param_2[2];
      lStack_198 = param_2[0xf];
      uStack_1a0 = param_2[0xe];
      uStack_1a8 = (undefined4)param_2[0xd];
      uStack_1a4 = (uint)((ulong)param_2[0xd] >> 0x20);
      uStack_1b0 = (undefined4)param_2[0xc];
      uStack_1ac = (undefined4)((ulong)param_2[0xc] >> 0x20);
      lStack_1c8 = param_2[9];
      lStack_1d0 = param_2[8];
      uStack_1b8 = (undefined4)param_2[0xb];
      uStack_1b4 = (undefined4)((ulong)param_2[0xb] >> 0x20);
      uStack_1c0 = (uint)param_2[10];
      uStack_1bc = (undefined4)((ulong)param_2[10] >> 0x20);
      iVar3 = (int)&lStack_210;
      func_0x000103ba3838();
      if (iVar3 == 1) {
        plVar4 = &lStack_210;
        func_0x000100d67c18();
        return lVar6 == *plVar4;
      }
    }
  }
  else if (iVar3 == 2) {
    lStack_1c8 = param_2[9];
    lStack_1d0 = param_2[8];
    uStack_1b8 = (undefined4)param_2[0xb];
    uStack_1b4 = (undefined4)((ulong)param_2[0xb] >> 0x20);
    uStack_1c0 = (uint)param_2[10];
    uStack_1bc = (undefined4)((ulong)param_2[10] >> 0x20);
    lStack_198 = param_2[0xf];
    uStack_1a0 = param_2[0xe];
    uStack_1a8 = (undefined4)param_2[0xd];
    uStack_1a4 = (uint)((ulong)param_2[0xd] >> 0x20);
    uStack_1b0 = (undefined4)param_2[0xc];
    uStack_1ac = (undefined4)((ulong)param_2[0xc] >> 0x20);
    lStack_208 = param_2[1];
    lStack_210 = *param_2;
    lStack_1f8 = param_2[3];
    lStack_200 = param_2[2];
    lStack_1e8 = param_2[5];
    lStack_1f0 = param_2[4];
    lStack_1d8 = param_2[7];
    lStack_1e0 = param_2[6];
    iVar3 = (int)&lStack_210;
    func_0x000103ba3838();
    if (iVar3 == 2) {
      return true;
    }
  }
  else if (iVar3 == 3) {
    lStack_1c8 = param_2[9];
    lStack_1d0 = param_2[8];
    uStack_1b8 = (undefined4)param_2[0xb];
    uStack_1b4 = (undefined4)((ulong)param_2[0xb] >> 0x20);
    uStack_1c0 = (uint)param_2[10];
    uStack_1bc = (undefined4)((ulong)param_2[10] >> 0x20);
    lStack_198 = param_2[0xf];
    uStack_1a0 = param_2[0xe];
    uStack_1a8 = (undefined4)param_2[0xd];
    uStack_1a4 = (uint)((ulong)param_2[0xd] >> 0x20);
    uStack_1b0 = (undefined4)param_2[0xc];
    uStack_1ac = (undefined4)((ulong)param_2[0xc] >> 0x20);
    lStack_208 = param_2[1];
    lStack_210 = *param_2;
    lStack_1f8 = param_2[3];
    lStack_200 = param_2[2];
    lStack_1e8 = param_2[5];
    lStack_1f0 = param_2[4];
    lStack_1d8 = param_2[7];
    lStack_1e0 = param_2[6];
    iVar3 = (int)&lStack_210;
    func_0x000103ba3838();
    if (iVar3 == 3) {
      return true;
    }
  }
  else {
    lStack_1c8 = param_2[9];
    lStack_1d0 = param_2[8];
    uStack_1b8 = (undefined4)param_2[0xb];
    uStack_1b4 = (undefined4)((ulong)param_2[0xb] >> 0x20);
    uStack_1c0 = (uint)param_2[10];
    uStack_1bc = (undefined4)((ulong)param_2[10] >> 0x20);
    lStack_198 = param_2[0xf];
    uStack_1a0 = param_2[0xe];
    uStack_1a8 = (undefined4)param_2[0xd];
    uStack_1a4 = (uint)((ulong)param_2[0xd] >> 0x20);
    uStack_1b0 = (undefined4)param_2[0xc];
    uStack_1ac = (undefined4)((ulong)param_2[0xc] >> 0x20);
    lStack_208 = param_2[1];
    lStack_210 = *param_2;
    lStack_1f8 = param_2[3];
    lStack_200 = param_2[2];
    lStack_1e8 = param_2[5];
    lStack_1f0 = param_2[4];
    lStack_1d8 = param_2[7];
    lStack_1e0 = param_2[6];
    iVar3 = (int)&lStack_210;
    func_0x000103ba3838();
    if (iVar3 == 4) {
      return true;
    }
  }
  return false;
}



/* Entry: 103ba4f10; end: 103ba4f13;  */

void FUN_103ba4f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e7c0;
  func_0x000107c61520(&UNK_10dc5e7c0,&UNK_1106dee08);
  puRam0000000112ff2bf0 = puVar1;
  return;
}



/* Entry: 103ba4f14; end: 103ba4f53;  */

void FUN_103ba4f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e7c0;
  func_0x000107c61520(&UNK_10dc5e7c0,&UNK_1106dee08);
  puRam0000000112ff2bf0 = puVar1;
  return;
}



/* Entry: 103ba4f54; end: 103ba4f6b;  */

void FUN_103ba4f54(void)

{
  ulong in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (in_stack_00000028 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_stack_00000038);
    return;
  }
  return;
}



/* Entry: 103ba4f6c; end: 103ba4fb3;  */

void FUN_103ba4f6c(undefined8 *param_1)

{
  FUN_103ba4fb4(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf]);
  return;
}



/* Entry: 103ba4fb4; end: 103ba4fcb;  */

void FUN_103ba4fb4(void)

{
  ulong in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (in_stack_00000028 >> 0x3e == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_stack_00000038);
    return;
  }
  return;
}



/* Entry: 103ba4fcc; end: 103ba51b7;  */

undefined8 * FUN_103ba4fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar5 = param_2[8];
  uVar13 = param_2[9];
  uVar6 = param_2[10];
  uVar14 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar15 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar16 = param_2[0xf];
  FUN_103ba4f54(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,
                uVar15,uVar8,uVar16);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  param_1[8] = uVar5;
  param_1[9] = uVar13;
  param_1[10] = uVar6;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar15;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar16;
  return param_1;
}



/* Entry: 103ba51b8; end: 103ba5233;  */

undefined8 * FUN_103ba51b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar4 = param_1[0xe];
  uVar8 = param_1[0xf];
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = param_2[0xc];
  uVar19 = param_2[0xf];
  uVar18 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  param_1[0xf] = uVar19;
  param_1[0xe] = uVar18;
  FUN_103ba4fb4(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar4,uVar8);
  return param_1;
}



/* Entry: 103ba5234; end: 103ba53a7;  */

int FUN_103ba5234(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 0x1a) >> 2) & 0x80000000 | (uint)param_1[0x14] >> 1;
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 103ba53a8; end: 103ba551b;  */

undefined8 * FUN_103ba53a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 0x54) = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x5d);
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)((long)param_1 + 0x5d) = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103ba551c; end: 103ba5767;  */

int FUN_103ba551c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x1e);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ba5768; end: 103ba5c9b;  */

undefined8 * FUN_103ba5768(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar23;
  long *unaff_x22;
  uint uVar24;
  ulong unaff_x23;
  ulong unaff_x24;
  int iVar25;
  ulong unaff_x25;
  long unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar9 = (undefined1 *)register0x00000008;
  do {
    *(byte **)(puVar9 + -0x60) = unaff_x28;
    *(byte **)(puVar9 + -0x58) = unaff_x27;
    *(long *)(puVar9 + -0x50) = unaff_x26;
    *(ulong *)(puVar9 + -0x48) = unaff_x25;
    *(ulong *)(puVar9 + -0x40) = unaff_x24;
    *(ulong *)(puVar9 + -0x38) = unaff_x23;
    *(long **)(puVar9 + -0x30) = unaff_x22;
    *(ulong *)(puVar9 + -0x28) = unaff_x21;
    *(ulong *)(puVar9 + -0x20) = unaff_x20;
    *(ulong *)(puVar9 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar9 + -0x10) = unaff_x29;
    *(code **)(puVar9 + -8) = unaff_x30;
    unaff_x29 = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x26 = param_1[2];
    if (unaff_x26 == param_2[2]) {
      if ((unaff_x26 != 0) && (param_1 != param_2)) {
        *(undefined8 *)(puVar9 + -0xb0) = 0;
        unaff_x27 = (byte *)((long)param_2 + 0x31);
        unaff_x28 = (byte *)((long)param_1 + 0x31);
        do {
          unaff_x25 = *(ulong *)(unaff_x28 + -0x11);
          unaff_x22 = *(long **)(unaff_x28 + -9);
          bVar4 = unaff_x28[-1];
          unaff_x19 = (ulong)bVar4;
          bVar2 = *unaff_x28;
          unaff_x20 = (ulong)bVar2;
          *(undefined8 *)(puVar9 + -0x90) = *(undefined8 *)(unaff_x27 + -0x11);
          unaff_x24 = *(ulong *)(unaff_x27 + -9);
          bVar5 = unaff_x27[-1];
          unaff_x23 = (ulong)*unaff_x27;
          uVar24 = (uint)*unaff_x27;
          uVar1 = (uint)((ulong)unaff_x22 >> 0x20);
          uVar17 = uVar1 >> 0x1e;
          uVar7 = (uint)(unaff_x24 >> 0x20);
          uVar18 = uVar7 >> 0x1e;
          iVar25 = (int)unaff_x25;
          if ((ulong)unaff_x22 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((unaff_x25 != 0 || unaff_x22 != (long *)0xc000000000000000) ||
                  unaff_x24 >> 0x3e < 3) || (*(long *)(puVar9 + -0x90) != 0)) ||
               (unaff_x24 != 0xc000000000000000)) {
joined_r0x000103ba5a98:
              if (1 < uVar18) goto LAB_103ba586c;
LAB_103ba58a4:
              if (uVar18 == 0) {
                uVar20 = unaff_x24 >> 0x30 & 0xff;
              }
              else {
                iVar22 = (int)*(undefined8 *)(puVar9 + -0x90);
                iVar19 = (int)((ulong)*(undefined8 *)(puVar9 + -0x90) >> 0x20);
                if (SBORROW4(iVar19,iVar22)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c7c);
                  (*pcVar8)();
                }
                uVar20 = (ulong)(iVar19 - iVar22);
              }
              goto LAB_103ba58cc;
            }
            *(uint *)(puVar9 + -0x94) = uVar24;
            *(byte **)(puVar9 + -0xa8) = unaff_x27;
            *(byte **)(puVar9 + -0xa0) = unaff_x28;
            func_0x00010006c00c(0,0xc000000000000000);
            uVar10 = 0;
            uVar21 = 0xc000000000000000;
LAB_103ba59d4:
            func_0x00010006c00c(uVar10,uVar21);
            unaff_x27 = *(byte **)(puVar9 + -0xa8);
            unaff_x28 = *(byte **)(puVar9 + -0xa0);
            unaff_x23 = (ulong)*(uint *)(puVar9 + -0x94);
            unaff_x21 = unaff_x24;
            if ((uint)bVar4 != (uint)bVar5) {
LAB_103ba5c24:
              func_0x00010006c090(*(undefined8 *)(puVar9 + -0x90),unaff_x24);
              param_2 = unaff_x22;
              func_0x00010006c090(unaff_x25);
              goto LAB_103ba5c3c;
            }
          }
          else {
            if (1 < uVar1 >> 0x1e) {
              if (uVar17 == 2) {
                uVar21 = *(long *)(unaff_x25 + 0x18) - *(long *)(unaff_x25 + 0x10);
                if (SBORROW8(*(long *)(unaff_x25 + 0x18),*(long *)(unaff_x25 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c84);
                  (*pcVar8)();
                }
              }
              else {
                uVar21 = 0;
              }
              goto joined_r0x000103ba5a98;
            }
            if (uVar17 == 0) {
              uVar21 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)(unaff_x25 >> 0x20);
              if (SBORROW4(iVar19,iVar25)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c88);
                (*pcVar8)();
              }
              uVar21 = (ulong)(iVar19 - iVar25);
            }
            if (uVar7 >> 0x1e < 2) goto LAB_103ba58a4;
LAB_103ba586c:
            if (uVar18 != 2) {
              if (uVar21 == 0) {
LAB_103ba59a0:
                *(uint *)(puVar9 + -0x94) = uVar24;
                *(byte **)(puVar9 + -0xa8) = unaff_x27;
                *(byte **)(puVar9 + -0xa0) = unaff_x28;
                uVar10 = *(undefined8 *)(puVar9 + -0x90);
                func_0x00010006c00c(unaff_x25,unaff_x22);
                uVar21 = unaff_x24;
                goto LAB_103ba59d4;
              }
              goto LAB_103ba5c3c;
            }
            lVar13 = *(long *)(*(long *)(puVar9 + -0x90) + 0x10);
            lVar23 = *(long *)(*(long *)(puVar9 + -0x90) + 0x18);
            uVar20 = lVar23 - lVar13;
            if (SBORROW8(lVar23,lVar13)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c80);
              (*pcVar8)();
            }
LAB_103ba58cc:
            if (uVar21 != uVar20) goto LAB_103ba5c3c;
            if ((long)uVar21 < 1) goto LAB_103ba59a0;
            *(uint *)(puVar9 + -0xb8) = (uint)bVar5;
            *(uint *)(puVar9 + -0xb4) = (uint)bVar4;
            unaff_x19 = unaff_x25;
            if (uVar17 < 2) {
              if (uVar17 != 0) {
                *(uint *)(puVar9 + -0x94) = uVar24;
                *(uint *)(puVar9 + -0xa0) = (uint)bVar2;
                lVar23 = (long)iVar25;
                lVar13 = ((long)unaff_x25 >> 0x20) - lVar23;
                if ((long)unaff_x25 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c8c);
                  (*pcVar8)();
                }
                func_0x00010006c00c(unaff_x25,unaff_x22);
                lVar11 = *(long *)(puVar9 + -0x90);
                func_0x00010006c00c(lVar11,unaff_x24);
                func_0x000107c5ec30();
                if (lVar11 == 0) {
                  func_0x000107c5ec38();
                  lVar13 = 0;
                  lVar23 = 0;
                }
                else {
                  lVar12 = lVar11;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,lVar12)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c98);
                    (*pcVar8)();
                  }
                  lVar11 = (lVar23 - lVar12) + lVar11;
                  func_0x000107c5ec38();
                  if (lVar13 <= lVar12) {
                    lVar12 = lVar13;
                  }
                  lVar13 = 0;
                  if (lVar11 != 0) {
                    lVar13 = lVar11;
                  }
                  lVar23 = 0;
                  if (lVar11 != 0) {
                    lVar23 = lVar12 + lVar11;
                  }
                }
                unaff_x21 = *(ulong *)(puVar9 + -0xb0);
                func_0x000100e25bdc(puVar9 + -0x80,lVar13,lVar23,*(undefined8 *)(puVar9 + -0x90),
                                    unaff_x24);
                *(ulong *)(puVar9 + -0xb0) = unaff_x21;
                cVar3 = puVar9[-0x80];
                uVar1 = *(uint *)(puVar9 + -0xa0);
                goto LAB_103ba5bd4;
              }
              puVar9[-0x80] = (char)unaff_x25;
              puVar9[-0x7f] = (char)(unaff_x25 >> 8);
              puVar9[-0x7e] = (char)(unaff_x25 >> 0x10);
              puVar9[-0x7d] = (char)(unaff_x25 >> 0x18);
              puVar9[-0x7c] = (char)(unaff_x25 >> 0x20);
              puVar9[-0x7b] = (char)(unaff_x25 >> 0x28);
              puVar9[-0x7a] = (char)(unaff_x25 >> 0x30);
              puVar9[-0x79] = (char)(unaff_x25 >> 0x38);
              puVar9[-0x78] = (char)unaff_x22;
              puVar9[-0x77] = (char)((ulong)unaff_x22 >> 8);
              puVar9[-0x76] = (char)((ulong)unaff_x22 >> 0x10);
              puVar9[-0x75] = (char)((ulong)unaff_x22 >> 0x18);
              puVar9[-0x74] = (char)((ulong)unaff_x22 >> 0x20);
              puVar9[-0x73] = (char)((ulong)unaff_x22 >> 0x28);
              puVar15 = puVar9 + (((ulong)unaff_x22 >> 0x30 & 0xff) - 0x80);
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar21 = *(ulong *)(puVar9 + -0x90);
              func_0x00010006c00c(uVar21,unaff_x24);
LAB_103ba5b50:
              unaff_x21 = *(ulong *)(puVar9 + -0xb0);
              func_0x000100e25bdc(puVar9 + -0x81,puVar9 + -0x80,puVar15,uVar21,unaff_x24);
              *(ulong *)(puVar9 + -0xb0) = unaff_x21;
              if (puVar9[-0x81] == '\x01') goto LAB_103ba5be0;
              goto LAB_103ba5c24;
            }
            if (uVar17 != 2) {
              *(undefined8 *)(puVar9 + -0x7a) = 0;
              *(undefined8 *)(puVar9 + -0x80) = 0;
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar21 = *(ulong *)(puVar9 + -0x90);
              func_0x00010006c00c(uVar21,unaff_x24);
              puVar15 = puVar9 + -0x80;
              unaff_x19 = uVar21;
              goto LAB_103ba5b50;
            }
            *(uint *)(puVar9 + -0x94) = uVar24;
            *(uint *)(puVar9 + -0xa0) = (uint)bVar2;
            lVar11 = *(long *)(unaff_x25 + 0x10);
            lVar12 = *(long *)(unaff_x25 + 0x18);
            func_0x00010006c00c(unaff_x25,unaff_x22);
            lVar13 = *(long *)(puVar9 + -0x90);
            func_0x00010006c00c(lVar13,unaff_x24);
            func_0x000107c5ec30();
            lVar23 = lVar13;
            if (lVar13 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar11,lVar23)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c94);
                (*pcVar8)();
              }
              lVar13 = (lVar11 - lVar23) + lVar13;
            }
            lVar6 = lVar12 - lVar11;
            if (SBORROW8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c90);
              (*pcVar8)();
            }
            func_0x000107c5ec38();
            if (lVar13 == 0) {
              lVar23 = 0;
            }
            else {
              if (lVar6 <= lVar23) {
                lVar23 = lVar6;
              }
              lVar23 = lVar23 + lVar13;
            }
            uVar1 = *(uint *)(puVar9 + -0xa0);
            unaff_x21 = *(ulong *)(puVar9 + -0xb0);
            func_0x000100e25bdc(puVar9 + -0x80,lVar13,lVar23,*(undefined8 *)(puVar9 + -0x90),
                                unaff_x24);
            *(ulong *)(puVar9 + -0xb0) = unaff_x21;
            cVar3 = puVar9[-0x80];
LAB_103ba5bd4:
            unaff_x20 = (ulong)uVar1;
            unaff_x23 = (ulong)*(uint *)(puVar9 + -0x94);
            if (cVar3 != '\x01') goto LAB_103ba5c24;
LAB_103ba5be0:
            if (((*(uint *)(puVar9 + -0xb4) ^ *(uint *)(puVar9 + -0xb8)) & 1) != 0)
            goto LAB_103ba5c24;
          }
          func_0x00010006c090(*(undefined8 *)(puVar9 + -0x90),unaff_x24);
          param_2 = unaff_x22;
          func_0x00010006c090(unaff_x25);
          if ((int)unaff_x20 != (int)unaff_x23) goto LAB_103ba5c3c;
          unaff_x27 = unaff_x27 + 0x18;
          unaff_x28 = unaff_x28 + 0x18;
          unaff_x26 = unaff_x26 + -1;
        } while (unaff_x26 != 0);
      }
      puVar14 = (undefined8 *)0x1;
      plVar16 = param_2;
    }
    else {
LAB_103ba5c3c:
      puVar14 = (undefined8 *)0x0;
      plVar16 = param_2;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar9 + -0x68)) {
      return puVar14;
    }
    unaff_x30 = FUN_103ba5c9c;
    func_0x000107c60e78();
    param_1 = (long *)*puVar14;
    param_2 = (long *)*plVar16;
    cVar3 = (char)plVar16[1];
    bVar2 = *(byte *)(puVar14 + 1);
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if (cVar3 != '\x02') {
          return (undefined8 *)0x0;
        }
        return (undefined8 *)(ulong)(((uint)param_2 ^ (uint)param_1 ^ 1) & 1);
      }
      if (param_1 == (long *)0x0) {
        if (cVar3 != '\x03') {
          return (undefined8 *)0x0;
        }
        if (param_2 != (long *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        if (cVar3 != '\x03') {
          return (undefined8 *)0x0;
        }
        if (param_2 != (long *)0x1) {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)0x1;
    }
    if (bVar2 == 0) {
      puVar9 = puVar9 + -0xc0;
      if (cVar3 != '\0') {
        return (undefined8 *)0x0;
      }
    }
    else {
      puVar9 = puVar9 + -0xc0;
      if (cVar3 != '\x01') {
        return (undefined8 *)0x0;
      }
    }
  } while( true );
}



/* Entry: 103ba5c9c; end: 103ba5cc7;  */

long * FUN_103ba5c9c(long *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar21;
  ulong unaff_x21;
  long *unaff_x22;
  uint uVar22;
  ulong unaff_x23;
  ulong unaff_x24;
  int iVar23;
  ulong unaff_x25;
  long unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar15 = *param_1;
    plVar13 = (long *)*param_2;
    cVar2 = (char)param_2[1];
    bVar3 = *(byte *)(param_1 + 1);
    if (1 < bVar3) {
      if (bVar3 == 2) {
        if (cVar2 == '\x02') {
          return (long *)(ulong)(((uint)plVar13 ^ (uint)lVar15 ^ 1) & 1);
        }
      }
      else if (lVar15 == 0) {
        if ((cVar2 == '\x03') && (plVar13 == (long *)0x0)) {
          return (long *)0x1;
        }
      }
      else if ((cVar2 == '\x03') && (plVar13 == (long *)0x1)) {
        return (long *)0x1;
      }
      return (long *)0x0;
    }
    if (bVar3 == 0) {
      if (cVar2 != '\0') {
        return (long *)0x0;
      }
    }
    else if (cVar2 != '\x01') {
      return (long *)0x0;
    }
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x26 = *(long *)(lVar15 + 0x10);
    if (unaff_x26 == plVar13[2]) {
      if ((unaff_x26 != 0) && ((long *)lVar15 != plVar13)) {
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        unaff_x27 = (byte *)((long)plVar13 + 0x31);
        unaff_x28 = (byte *)(lVar15 + 0x31);
        do {
          unaff_x25 = *(ulong *)(unaff_x28 + -0x11);
          unaff_x22 = *(long **)(unaff_x28 + -9);
          bVar4 = unaff_x28[-1];
          unaff_x19 = (ulong)bVar4;
          bVar3 = *unaff_x28;
          unaff_x20 = (ulong)bVar3;
          *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(unaff_x27 + -0x11);
          unaff_x24 = *(ulong *)(unaff_x27 + -9);
          bVar5 = unaff_x27[-1];
          unaff_x23 = (ulong)*unaff_x27;
          uVar22 = (uint)*unaff_x27;
          uVar1 = (uint)((ulong)unaff_x22 >> 0x20);
          uVar14 = uVar1 >> 0x1e;
          uVar7 = (uint)(unaff_x24 >> 0x20);
          uVar16 = uVar7 >> 0x1e;
          iVar23 = (int)unaff_x25;
          if ((ulong)unaff_x22 >> 0x3e == 3) {
            uVar19 = 0;
            if ((((unaff_x25 != 0 || unaff_x22 != (long *)0xc000000000000000) ||
                  unaff_x24 >> 0x3e < 3) || (*(long *)((long)register0x00000008 + -0x90) != 0)) ||
               (unaff_x24 != 0xc000000000000000)) {
joined_r0x000103ba5a98:
              if (1 < uVar16) goto LAB_103ba586c;
LAB_103ba58a4:
              if (uVar16 == 0) {
                uVar18 = unaff_x24 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)*(undefined8 *)((long)register0x00000008 + -0x90);
                iVar17 = (int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x90) >> 0x20);
                if (SBORROW4(iVar17,iVar20)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c7c);
                  (*pcVar8)();
                }
                uVar18 = (ulong)(iVar17 - iVar20);
              }
              goto LAB_103ba58cc;
            }
            *(uint *)((long)register0x00000008 + -0x94) = uVar22;
            *(byte **)((long)register0x00000008 + -0xa8) = unaff_x27;
            *(byte **)((long)register0x00000008 + -0xa0) = unaff_x28;
            func_0x00010006c00c(0,0xc000000000000000);
            uVar9 = 0;
            uVar19 = 0xc000000000000000;
LAB_103ba59d4:
            func_0x00010006c00c(uVar9,uVar19);
            unaff_x27 = *(byte **)((long)register0x00000008 + -0xa8);
            unaff_x28 = *(byte **)((long)register0x00000008 + -0xa0);
            unaff_x23 = (ulong)*(uint *)((long)register0x00000008 + -0x94);
            unaff_x21 = unaff_x24;
            if ((uint)bVar4 != (uint)bVar5) {
LAB_103ba5c24:
              func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
              plVar13 = unaff_x22;
              func_0x00010006c090(unaff_x25);
              goto LAB_103ba5c3c;
            }
          }
          else {
            if (1 < uVar1 >> 0x1e) {
              if (uVar14 == 2) {
                uVar19 = *(long *)(unaff_x25 + 0x18) - *(long *)(unaff_x25 + 0x10);
                if (SBORROW8(*(long *)(unaff_x25 + 0x18),*(long *)(unaff_x25 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c84);
                  (*pcVar8)();
                }
              }
              else {
                uVar19 = 0;
              }
              goto joined_r0x000103ba5a98;
            }
            if (uVar14 == 0) {
              uVar19 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(unaff_x25 >> 0x20);
              if (SBORROW4(iVar17,iVar23)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c88);
                (*pcVar8)();
              }
              uVar19 = (ulong)(iVar17 - iVar23);
            }
            if (uVar7 >> 0x1e < 2) goto LAB_103ba58a4;
LAB_103ba586c:
            if (uVar16 != 2) {
              if (uVar19 == 0) {
LAB_103ba59a0:
                *(uint *)((long)register0x00000008 + -0x94) = uVar22;
                *(byte **)((long)register0x00000008 + -0xa8) = unaff_x27;
                *(byte **)((long)register0x00000008 + -0xa0) = unaff_x28;
                uVar9 = *(undefined8 *)((long)register0x00000008 + -0x90);
                func_0x00010006c00c(unaff_x25,unaff_x22);
                uVar19 = unaff_x24;
                goto LAB_103ba59d4;
              }
              goto LAB_103ba5c3c;
            }
            lVar15 = *(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x10);
            lVar21 = *(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x18);
            uVar18 = lVar21 - lVar15;
            if (SBORROW8(lVar21,lVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c80);
              (*pcVar8)();
            }
LAB_103ba58cc:
            if (uVar19 != uVar18) goto LAB_103ba5c3c;
            if ((long)uVar19 < 1) goto LAB_103ba59a0;
            *(uint *)((long)register0x00000008 + -0xb8) = (uint)bVar5;
            *(uint *)((long)register0x00000008 + -0xb4) = (uint)bVar4;
            unaff_x19 = unaff_x25;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                *(uint *)((long)register0x00000008 + -0x94) = uVar22;
                *(uint *)((long)register0x00000008 + -0xa0) = (uint)bVar3;
                lVar21 = (long)iVar23;
                lVar15 = ((long)unaff_x25 >> 0x20) - lVar21;
                if ((long)unaff_x25 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c8c);
                  (*pcVar8)();
                }
                func_0x00010006c00c(unaff_x25,unaff_x22);
                lVar10 = *(long *)((long)register0x00000008 + -0x90);
                func_0x00010006c00c(lVar10,unaff_x24);
                func_0x000107c5ec30();
                if (lVar10 == 0) {
                  func_0x000107c5ec38();
                  lVar15 = 0;
                  lVar21 = 0;
                }
                else {
                  lVar11 = lVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,lVar11)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c98);
                    (*pcVar8)();
                  }
                  lVar10 = (lVar21 - lVar11) + lVar10;
                  func_0x000107c5ec38();
                  if (lVar15 <= lVar11) {
                    lVar11 = lVar15;
                  }
                  lVar15 = 0;
                  if (lVar10 != 0) {
                    lVar15 = lVar10;
                  }
                  lVar21 = 0;
                  if (lVar10 != 0) {
                    lVar21 = lVar11 + lVar10;
                  }
                }
                unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x80),lVar15,lVar21,
                                    *(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
                *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
                cVar2 = *(char *)((long)register0x00000008 + -0x80);
                uVar1 = *(uint *)((long)register0x00000008 + -0xa0);
                goto LAB_103ba5bd4;
              }
              *(char *)((long)register0x00000008 + -0x80) = (char)unaff_x25;
              *(char *)((long)register0x00000008 + -0x7f) = (char)(unaff_x25 >> 8);
              *(char *)((long)register0x00000008 + -0x7e) = (char)(unaff_x25 >> 0x10);
              *(char *)((long)register0x00000008 + -0x7d) = (char)(unaff_x25 >> 0x18);
              *(char *)((long)register0x00000008 + -0x7c) = (char)(unaff_x25 >> 0x20);
              *(char *)((long)register0x00000008 + -0x7b) = (char)(unaff_x25 >> 0x28);
              *(char *)((long)register0x00000008 + -0x7a) = (char)(unaff_x25 >> 0x30);
              *(char *)((long)register0x00000008 + -0x79) = (char)(unaff_x25 >> 0x38);
              *(char *)((long)register0x00000008 + -0x78) = (char)unaff_x22;
              *(char *)((long)register0x00000008 + -0x77) = (char)((ulong)unaff_x22 >> 8);
              *(char *)((long)register0x00000008 + -0x76) = (char)((ulong)unaff_x22 >> 0x10);
              *(char *)((long)register0x00000008 + -0x75) = (char)((ulong)unaff_x22 >> 0x18);
              *(char *)((long)register0x00000008 + -0x74) = (char)((ulong)unaff_x22 >> 0x20);
              *(char *)((long)register0x00000008 + -0x73) = (char)((ulong)unaff_x22 >> 0x28);
              puVar12 = (undefined1 *)
                        ((long)register0x00000008 + (((ulong)unaff_x22 >> 0x30 & 0xff) - 0x80));
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar19 = *(ulong *)((long)register0x00000008 + -0x90);
              func_0x00010006c00c(uVar19,unaff_x24);
LAB_103ba5b50:
              unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x81),
                                  (undefined1 *)((long)register0x00000008 + -0x80),puVar12,uVar19,
                                  unaff_x24);
              *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
              if (*(char *)((long)register0x00000008 + -0x81) == '\x01') goto LAB_103ba5be0;
              goto LAB_103ba5c24;
            }
            if (uVar14 != 2) {
              *(undefined8 *)((long)register0x00000008 + -0x7a) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar19 = *(ulong *)((long)register0x00000008 + -0x90);
              func_0x00010006c00c(uVar19,unaff_x24);
              puVar12 = (undefined1 *)((long)register0x00000008 + -0x80);
              unaff_x19 = uVar19;
              goto LAB_103ba5b50;
            }
            *(uint *)((long)register0x00000008 + -0x94) = uVar22;
            *(uint *)((long)register0x00000008 + -0xa0) = (uint)bVar3;
            lVar10 = *(long *)(unaff_x25 + 0x10);
            lVar11 = *(long *)(unaff_x25 + 0x18);
            func_0x00010006c00c(unaff_x25,unaff_x22);
            lVar15 = *(long *)((long)register0x00000008 + -0x90);
            func_0x00010006c00c(lVar15,unaff_x24);
            func_0x000107c5ec30();
            lVar21 = lVar15;
            if (lVar15 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar10,lVar21)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c94);
                (*pcVar8)();
              }
              lVar15 = (lVar10 - lVar21) + lVar15;
            }
            lVar6 = lVar11 - lVar10;
            if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c90);
              (*pcVar8)();
            }
            func_0x000107c5ec38();
            if (lVar15 == 0) {
              lVar21 = 0;
            }
            else {
              if (lVar6 <= lVar21) {
                lVar21 = lVar6;
              }
              lVar21 = lVar21 + lVar15;
            }
            uVar1 = *(uint *)((long)register0x00000008 + -0xa0);
            unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x80),lVar15,lVar21,
                                *(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
            *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
            cVar2 = *(char *)((long)register0x00000008 + -0x80);
LAB_103ba5bd4:
            unaff_x20 = (ulong)uVar1;
            unaff_x23 = (ulong)*(uint *)((long)register0x00000008 + -0x94);
            if (cVar2 != '\x01') goto LAB_103ba5c24;
LAB_103ba5be0:
            if (((*(uint *)((long)register0x00000008 + -0xb4) ^
                 *(uint *)((long)register0x00000008 + -0xb8)) & 1) != 0) goto LAB_103ba5c24;
          }
          func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
          plVar13 = unaff_x22;
          func_0x00010006c090(unaff_x25);
          if ((int)unaff_x20 != (int)unaff_x23) goto LAB_103ba5c3c;
          unaff_x27 = unaff_x27 + 0x18;
          unaff_x28 = unaff_x28 + 0x18;
          unaff_x26 = unaff_x26 + -1;
        } while (unaff_x26 != 0);
      }
      param_1 = (long *)0x1;
    }
    else {
LAB_103ba5c3c:
      param_1 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return param_1;
    }
    unaff_x30 = FUN_103ba5c9c;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_2 = plVar13;
  } while( true );
}



/* Entry: 103ba5cc8; end: 103ba5eff;  */

void FUN_103ba5cc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x646574616d696e61;
  uVar1 = 0xef74756f7475635f;
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000010;
    uVar1 = 0x800000010ef1cd20;
  }
  uVar2 = 0xed000074756f7475;
  uVar4 = 0x635f636974617473;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ba5f00; end: 103ba5fa3;  */

void FUN_103ba5f00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x646574616d696e61;
  uVar1 = 0xef74756f7475635f;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x800000010ef1cd20;
  }
  uVar2 = 0xed000074756f7475;
  uVar3 = 0x635f636974617473;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103ba5fa4; end: 103ba6003;  */

bool FUN_103ba5fa4(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar4 = param_1[2];
  cVar1 = *(char *)((long)param_1 + 0x11);
  bVar2 = *(byte *)(param_2 + 2);
  cVar3 = *(char *)((long)param_2 + 0x11);
  func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
  return (uVar5 & 1) != 0 && ((((byte)uVar4 ^ bVar2) & 1) == 0 && cVar1 == cVar3);
}



/* Entry: 103ba6004; end: 103ba608f;  */

long * FUN_103ba6004(undefined8 *param_1,byte param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar21;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  uint uVar22;
  ulong unaff_x23;
  ulong unaff_x24;
  int iVar23;
  ulong unaff_x25;
  long unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    if (1 < param_2) {
      if (param_2 == 2) {
        if (param_4 == '\x02') {
          return (long *)(ulong)(((uint)param_3 ^ (uint)param_1 ^ 1) & 1);
        }
      }
      else if (param_1 == (undefined8 *)0x0) {
        if ((param_4 == '\x03') && (param_3 == (undefined8 *)0x0)) {
          return (long *)0x1;
        }
      }
      else if ((param_4 == '\x03') && (param_3 == (undefined8 *)0x1)) {
        return (long *)0x1;
      }
      return (long *)0x0;
    }
    if (param_2 == 0) {
      if (param_4 != '\0') {
        return (long *)0x0;
      }
    }
    else if (param_4 != '\x01') {
      return (long *)0x0;
    }
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(byte **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x26 = param_1[2];
    if (unaff_x26 == param_3[2]) {
      if ((unaff_x26 != 0) && (param_1 != param_3)) {
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        unaff_x27 = (byte *)((long)param_3 + 0x31);
        unaff_x28 = (byte *)((long)param_1 + 0x31);
        do {
          unaff_x25 = *(ulong *)(unaff_x28 + -0x11);
          unaff_x22 = *(undefined8 **)(unaff_x28 + -9);
          bVar4 = unaff_x28[-1];
          unaff_x19 = (ulong)bVar4;
          bVar2 = *unaff_x28;
          unaff_x20 = (ulong)bVar2;
          *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)(unaff_x27 + -0x11);
          unaff_x24 = *(ulong *)(unaff_x27 + -9);
          bVar5 = unaff_x27[-1];
          unaff_x23 = (ulong)*unaff_x27;
          uVar22 = (uint)*unaff_x27;
          uVar1 = (uint)((ulong)unaff_x22 >> 0x20);
          uVar15 = uVar1 >> 0x1e;
          uVar7 = (uint)(unaff_x24 >> 0x20);
          uVar16 = uVar7 >> 0x1e;
          iVar23 = (int)unaff_x25;
          if ((ulong)unaff_x22 >> 0x3e == 3) {
            uVar19 = 0;
            if ((((unaff_x25 != 0 || unaff_x22 != (undefined8 *)0xc000000000000000) ||
                  unaff_x24 >> 0x3e < 3) || (*(long *)((long)register0x00000008 + -0x90) != 0)) ||
               (unaff_x24 != 0xc000000000000000)) {
joined_r0x000103ba5a98:
              if (1 < uVar16) goto LAB_103ba586c;
LAB_103ba58a4:
              if (uVar16 == 0) {
                uVar18 = unaff_x24 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)*(undefined8 *)((long)register0x00000008 + -0x90);
                iVar17 = (int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x90) >> 0x20);
                if (SBORROW4(iVar17,iVar20)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c7c);
                  (*pcVar8)();
                }
                uVar18 = (ulong)(iVar17 - iVar20);
              }
              goto LAB_103ba58cc;
            }
            *(uint *)((long)register0x00000008 + -0x94) = uVar22;
            *(byte **)((long)register0x00000008 + -0xa8) = unaff_x27;
            *(byte **)((long)register0x00000008 + -0xa0) = unaff_x28;
            func_0x00010006c00c(0,0xc000000000000000);
            uVar9 = 0;
            uVar19 = 0xc000000000000000;
LAB_103ba59d4:
            func_0x00010006c00c(uVar9,uVar19);
            unaff_x27 = *(byte **)((long)register0x00000008 + -0xa8);
            unaff_x28 = *(byte **)((long)register0x00000008 + -0xa0);
            unaff_x23 = (ulong)*(uint *)((long)register0x00000008 + -0x94);
            unaff_x21 = unaff_x24;
            if ((uint)bVar4 != (uint)bVar5) {
LAB_103ba5c24:
              func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
              param_3 = unaff_x22;
              func_0x00010006c090(unaff_x25);
              goto LAB_103ba5c3c;
            }
          }
          else {
            if (1 < uVar1 >> 0x1e) {
              if (uVar15 == 2) {
                uVar19 = *(long *)(unaff_x25 + 0x18) - *(long *)(unaff_x25 + 0x10);
                if (SBORROW8(*(long *)(unaff_x25 + 0x18),*(long *)(unaff_x25 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c84);
                  (*pcVar8)();
                }
              }
              else {
                uVar19 = 0;
              }
              goto joined_r0x000103ba5a98;
            }
            if (uVar15 == 0) {
              uVar19 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(unaff_x25 >> 0x20);
              if (SBORROW4(iVar17,iVar23)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c88);
                (*pcVar8)();
              }
              uVar19 = (ulong)(iVar17 - iVar23);
            }
            if (uVar7 >> 0x1e < 2) goto LAB_103ba58a4;
LAB_103ba586c:
            if (uVar16 != 2) {
              if (uVar19 == 0) {
LAB_103ba59a0:
                *(uint *)((long)register0x00000008 + -0x94) = uVar22;
                *(byte **)((long)register0x00000008 + -0xa8) = unaff_x27;
                *(byte **)((long)register0x00000008 + -0xa0) = unaff_x28;
                uVar9 = *(undefined8 *)((long)register0x00000008 + -0x90);
                func_0x00010006c00c(unaff_x25,unaff_x22);
                uVar19 = unaff_x24;
                goto LAB_103ba59d4;
              }
              goto LAB_103ba5c3c;
            }
            lVar12 = *(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x10);
            lVar21 = *(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x18);
            uVar18 = lVar21 - lVar12;
            if (SBORROW8(lVar21,lVar12)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c80);
              (*pcVar8)();
            }
LAB_103ba58cc:
            if (uVar19 != uVar18) goto LAB_103ba5c3c;
            if ((long)uVar19 < 1) goto LAB_103ba59a0;
            *(uint *)((long)register0x00000008 + -0xb8) = (uint)bVar5;
            *(uint *)((long)register0x00000008 + -0xb4) = (uint)bVar4;
            unaff_x19 = unaff_x25;
            if (uVar15 < 2) {
              if (uVar15 != 0) {
                *(uint *)((long)register0x00000008 + -0x94) = uVar22;
                *(uint *)((long)register0x00000008 + -0xa0) = (uint)bVar2;
                lVar21 = (long)iVar23;
                lVar12 = ((long)unaff_x25 >> 0x20) - lVar21;
                if ((long)unaff_x25 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c8c);
                  (*pcVar8)();
                }
                func_0x00010006c00c(unaff_x25,unaff_x22);
                lVar10 = *(long *)((long)register0x00000008 + -0x90);
                func_0x00010006c00c(lVar10,unaff_x24);
                func_0x000107c5ec30();
                if (lVar10 == 0) {
                  func_0x000107c5ec38();
                  lVar12 = 0;
                  lVar21 = 0;
                }
                else {
                  lVar11 = lVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,lVar11)) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c98);
                    (*pcVar8)();
                  }
                  lVar10 = (lVar21 - lVar11) + lVar10;
                  func_0x000107c5ec38();
                  if (lVar12 <= lVar11) {
                    lVar11 = lVar12;
                  }
                  lVar12 = 0;
                  if (lVar10 != 0) {
                    lVar12 = lVar10;
                  }
                  lVar21 = 0;
                  if (lVar10 != 0) {
                    lVar21 = lVar11 + lVar10;
                  }
                }
                unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x80),lVar12,lVar21,
                                    *(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
                *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
                cVar3 = *(char *)((long)register0x00000008 + -0x80);
                uVar1 = *(uint *)((long)register0x00000008 + -0xa0);
                goto LAB_103ba5bd4;
              }
              *(char *)((long)register0x00000008 + -0x80) = (char)unaff_x25;
              *(char *)((long)register0x00000008 + -0x7f) = (char)(unaff_x25 >> 8);
              *(char *)((long)register0x00000008 + -0x7e) = (char)(unaff_x25 >> 0x10);
              *(char *)((long)register0x00000008 + -0x7d) = (char)(unaff_x25 >> 0x18);
              *(char *)((long)register0x00000008 + -0x7c) = (char)(unaff_x25 >> 0x20);
              *(char *)((long)register0x00000008 + -0x7b) = (char)(unaff_x25 >> 0x28);
              *(char *)((long)register0x00000008 + -0x7a) = (char)(unaff_x25 >> 0x30);
              *(char *)((long)register0x00000008 + -0x79) = (char)(unaff_x25 >> 0x38);
              *(char *)((long)register0x00000008 + -0x78) = (char)unaff_x22;
              *(char *)((long)register0x00000008 + -0x77) = (char)((ulong)unaff_x22 >> 8);
              *(char *)((long)register0x00000008 + -0x76) = (char)((ulong)unaff_x22 >> 0x10);
              *(char *)((long)register0x00000008 + -0x75) = (char)((ulong)unaff_x22 >> 0x18);
              *(char *)((long)register0x00000008 + -0x74) = (char)((ulong)unaff_x22 >> 0x20);
              *(char *)((long)register0x00000008 + -0x73) = (char)((ulong)unaff_x22 >> 0x28);
              puVar14 = (undefined1 *)
                        ((long)register0x00000008 + (((ulong)unaff_x22 >> 0x30 & 0xff) - 0x80));
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar19 = *(ulong *)((long)register0x00000008 + -0x90);
              func_0x00010006c00c(uVar19,unaff_x24);
LAB_103ba5b50:
              unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x81),
                                  (undefined1 *)((long)register0x00000008 + -0x80),puVar14,uVar19,
                                  unaff_x24);
              *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
              if (*(char *)((long)register0x00000008 + -0x81) == '\x01') goto LAB_103ba5be0;
              goto LAB_103ba5c24;
            }
            if (uVar15 != 2) {
              *(undefined8 *)((long)register0x00000008 + -0x7a) = 0;
              *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
              func_0x00010006c00c(unaff_x25,unaff_x22);
              uVar19 = *(ulong *)((long)register0x00000008 + -0x90);
              func_0x00010006c00c(uVar19,unaff_x24);
              puVar14 = (undefined1 *)((long)register0x00000008 + -0x80);
              unaff_x19 = uVar19;
              goto LAB_103ba5b50;
            }
            *(uint *)((long)register0x00000008 + -0x94) = uVar22;
            *(uint *)((long)register0x00000008 + -0xa0) = (uint)bVar2;
            lVar10 = *(long *)(unaff_x25 + 0x10);
            lVar11 = *(long *)(unaff_x25 + 0x18);
            func_0x00010006c00c(unaff_x25,unaff_x22);
            lVar12 = *(long *)((long)register0x00000008 + -0x90);
            func_0x00010006c00c(lVar12,unaff_x24);
            func_0x000107c5ec30();
            lVar21 = lVar12;
            if (lVar12 != 0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar10,lVar21)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c94);
                (*pcVar8)();
              }
              lVar12 = (lVar10 - lVar21) + lVar12;
            }
            lVar6 = lVar11 - lVar10;
            if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103ba5c90);
              (*pcVar8)();
            }
            func_0x000107c5ec38();
            if (lVar12 == 0) {
              lVar21 = 0;
            }
            else {
              if (lVar6 <= lVar21) {
                lVar21 = lVar6;
              }
              lVar21 = lVar21 + lVar12;
            }
            uVar1 = *(uint *)((long)register0x00000008 + -0xa0);
            unaff_x21 = *(ulong *)((long)register0x00000008 + -0xb0);
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x80),lVar12,lVar21,
                                *(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
            *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x21;
            cVar3 = *(char *)((long)register0x00000008 + -0x80);
LAB_103ba5bd4:
            unaff_x20 = (ulong)uVar1;
            unaff_x23 = (ulong)*(uint *)((long)register0x00000008 + -0x94);
            if (cVar3 != '\x01') goto LAB_103ba5c24;
LAB_103ba5be0:
            if (((*(uint *)((long)register0x00000008 + -0xb4) ^
                 *(uint *)((long)register0x00000008 + -0xb8)) & 1) != 0) goto LAB_103ba5c24;
          }
          func_0x00010006c090(*(undefined8 *)((long)register0x00000008 + -0x90),unaff_x24);
          param_3 = unaff_x22;
          func_0x00010006c090(unaff_x25);
          if ((int)unaff_x20 != (int)unaff_x23) goto LAB_103ba5c3c;
          unaff_x27 = unaff_x27 + 0x18;
          unaff_x28 = unaff_x28 + 0x18;
          unaff_x26 = unaff_x26 + -1;
        } while (unaff_x26 != 0);
      }
      plVar13 = (long *)0x1;
    }
    else {
LAB_103ba5c3c:
      plVar13 = (long *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
      return plVar13;
    }
    unaff_x30 = FUN_103ba5c9c;
    func_0x000107c60e78();
    param_1 = (undefined8 *)*plVar13;
    param_4 = *(char *)(param_3 + 1);
    param_2 = *(byte *)(plVar13 + 1);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_3 = (undefined8 *)*param_3;
  } while( true );
}



/* Entry: 103ba6090; end: 103ba60f3;  */

ulong FUN_103ba6090(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103ba60f4; end: 103ba60f7;  */

void FUN_103ba60f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e878;
  func_0x000107c61520(&UNK_10dc5e878,&UNK_1106def60);
  puRam0000000112ff2bf8 = puVar1;
  return;
}



/* Entry: 103ba60f8; end: 103ba6137;  */

void FUN_103ba60f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e878;
  func_0x000107c61520(&UNK_10dc5e878,&UNK_1106def60);
  puRam0000000112ff2bf8 = puVar1;
  return;
}



/* Entry: 103ba6138; end: 103ba6147;  */

void FUN_103ba6138(undefined8 *param_1)

{
  if (*(byte *)(param_1 + 1) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
    return;
  }
  return;
}



/* Entry: 103ba6148; end: 103ba6197;  */

undefined8 * FUN_103ba6148(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000100f75b4c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100f78e70(uVar3,uVar2);
  return param_1;
}



/* Entry: 103ba6198; end: 103ba61d3;  */

undefined8 * FUN_103ba6198(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100f78e70(uVar3,uVar2);
  return param_1;
}



/* Entry: 103ba61d4; end: 103ba656f;  */

int FUN_103ba61d4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ba6570; end: 103ba660f;  */

undefined8 * FUN_103ba6570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103ba6610; end: 103ba6657;  */

undefined8 * FUN_103ba6610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 103ba6658; end: 103ba672f;  */

int FUN_103ba6658(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = *(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ba6730; end: 103ba67db;  */

void FUN_103ba6730(void)

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



/* Entry: 103ba67dc; end: 103ba67df;  */

void FUN_103ba67dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e9e0;
  func_0x000107c61520(&UNK_10dc5e9e0,&UNK_1106df150);
  puRam0000000112ff2c70 = puVar1;
  return;
}



/* Entry: 103ba67e0; end: 103ba681f;  */

void FUN_103ba67e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e9e0;
  func_0x000107c61520(&UNK_10dc5e9e0,&UNK_1106df150);
  puRam0000000112ff2c70 = puVar1;
  return;
}



/* Entry: 103ba6820; end: 103ba6983;  */

int FUN_103ba6820(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ba689c;
        goto LAB_103ba6880;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ba6880:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103ba689c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ba6984; end: 103ba6993; -[_TtC19SCMyStoriesServices19SCMyStoriesServices playbackManagementDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2c80));
  return;
}



/* Entry: 103ba6994; end: 103ba69a3; -[_TtC19SCMyStoriesServices19SCMyStoriesServices storyMentionMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2c88));
  return;
}



/* Entry: 103ba69a4; end: 103ba69b3; -[_TtC19SCMyStoriesServices19SCMyStoriesServices cachedSummaryInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba69a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2c90));
  return;
}



/* Entry: 103ba69b4; end: 103ba6a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba69b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2c78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2c80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2c88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2c90) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ba6a40; end: 103ba6a73;  */

void FUN_103ba6a40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ba6a74; end: 103ba6acb; -[_TtC19SCMyStoriesServices19SCMyStoriesServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103ba6a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ba6ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba6a94) */
/* WARNING: Removing unreachable block (ram,0x000103ba6ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2c78));
  return;
}



/* Entry: 103ba6acc; end: 103ba6adb; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2cc0));
  return;
}



/* Entry: 103ba6adc; end: 103ba6b23; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6adc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2cc8;
  func_0x000107c61428(param_1 + _DAT_112ff2cc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ba6b24; end: 103ba6b7b; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2cc8;
  func_0x000107c61428(param_1 + _DAT_112ff2cc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ba6b7c; end: 103ba6b93; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope initialFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ba6b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2cd0);
}



/* Entry: 103ba6b94; end: 103ba6bab; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope targetFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ba6b94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2cd8);
}



/* Entry: 103ba6bac; end: 103ba6c73; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6bac(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_11380cf40,puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ba6c74; end: 103ba6c83; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope fadeOutDisappearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ba6c74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11380cf48);
}



/* Entry: 103ba6c84; end: 103ba6c93; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope sourceLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ba6c84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11380cf50);
}



/* Entry: 103ba6c94; end: 103ba6cff; -[_TtC27SCCreatorsProfileImageScope27SCCreatorsProfileImageScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ba6c94(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2cc0));
  func_0x000103ba6cdc(param_1 + _DAT_112ff2cc8);
  param_1 = param_1 + _DAT_11380cf40;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103ba6d00; end: 103ba6d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6d00(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033fe6c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff2ce8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103ba6d68; end: 103ba6db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba6d68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2ce8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ba6db4; end: 103ba6f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103ba6db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined1 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_e0 [2];
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  
  lVar4 = 0;
  func_0x000100335214();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ff2cc8;
  func_0x000107c61614(lVar5 + _DAT_112ff2cc8,0);
  *(undefined8 *)(lVar5 + _DAT_112ff2cc0) = param_9;
  func_0x000107c61428(lVar5 + lVar3,auStack_b8,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff2cd0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff2cd8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1[2] = param_7;
  puVar1[3] = param_8;
  func_0x000100029394(param_11,lVar5 + _DAT_11380cf40);
  *(undefined8 *)(lVar5 + _DAT_11380cf50) = param_12;
  *(undefined1 *)(lVar5 + _DAT_11380cf48) = param_13;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c8 = lVar5;
  lStack_c0 = lVar4;
  func_0x000107c61174(param_9);
  plVar6 = &lStack_c8;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_e0[0] = plVar6;
  func_0x00010008a7c8(&uStack_d0,aplStack_e0);
  func_0x000100083b20(aplStack_e0);
  func_0x000107c61574(uStack_d0);
  func_0x000107c615e8(aplStack_e0[0]);
  return plVar6;
}



/* Entry: 103ba6f50; end: 103ba70e3; -[_TtC27SCCreatorsProfileImageScope35SCCreatorsProfileImageScopeServices buildWithUIContainer:delegate:initialFrame:targetFrame:imageURL:sourceLocation:fadeOutDisappearance:] */

void FUN_103ba6f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffff70 + -extraout_x8;
  if (param_13 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_13);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_13 == 0,1);
  func_0x000107c61174(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c61174(param_9);
  uVar2 = param_11;
  FUN_103ba6db4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11,param_12,
                puVar3,param_14,param_15);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_9);
  func_0x0001000293e4(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ba70e4; end: 103ba70e7;  */

void FUN_103ba70e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ba70e8; end: 103ba711b;  */

void FUN_103ba70e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ba711c; end: 103ba7167; -[_TtC27SCCreatorsProfileImageScope35SCCreatorsProfileImageScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba711c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff2ce8));
  return;
}



/* Entry: 103ba7168; end: 103ba71ab;  */

void FUN_103ba7168(long param_1,long *param_2,long param_3)

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



/* Entry: 103ba71ac; end: 103ba71af;  */

void FUN_103ba71ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ba71b0; end: 103ba7243; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController lastCommittedSwipeStartLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba71b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2d60;
  func_0x000107c61428(param_1 + _DAT_112ff2d60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ba7244; end: 103ba724f; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController setLastCommittedSwipeStartLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba7244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2d60;
  func_0x000107c61428(param_1 + _DAT_112ff2d60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103ba7250; end: 103ba72e3; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController lastCommittedSwipeEndLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba7250(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff2d68;
  func_0x000107c61428(param_1 + _DAT_112ff2d68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103ba72e4; end: 103ba72ef; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController setLastCommittedSwipeEndLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba72e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2d68;
  func_0x000107c61428(param_1 + _DAT_112ff2d68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103ba72f0; end: 103ba73c7;  */

void FUN_103ba72f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103ba73c8; end: 103ba73d3;  */

undefined8
FUN_103ba73c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c614f0(param_3);
  uVar1 = param_1;
  FUN_103ba8e34(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103ba73d4; end: 103ba746b;  */

undefined8
FUN_103ba73d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  func_0x000107c614f0(param_3);
  uVar1 = param_1;
  (*param_7)(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103ba746c; end: 103ba7527; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController initWithViewController:viewForPresentationGesture:delegate:mode:swipeDirection:invertDismissDirection:] */

undefined8
FUN_103ba746c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  func_0x000107c614f0(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  uVar2 = param_3;
  FUN_103ba8bb4(param_3,param_4,param_5,param_6,param_7,param_8,param_1,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return uVar2;
}



/* Entry: 103ba7528; end: 103ba75a3; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController wantsInteractiveStart] */

uint FUN_103ba7528(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103ba755c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103ba75a4; end: 103ba75a7; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController setWantsInteractiveStart:] */

void FUN_103ba75a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c224730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setWantsInteractiveStart__112666bf0);
  return;
}



/* Entry: 103ba75a8; end: 103ba75d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ba75a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff2d70);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 103ba75d8; end: 103ba75e7; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController getPanGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba75d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2d70));
  return;
}



/* Entry: 103ba75e8; end: 103ba7aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba75e8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    dVar13 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    if ((0.0 < dVar13) &&
       (dVar13 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), 0.0 < dVar13)) {
      cVar1 = *(char *)(unaff_x20 + _DAT_112ff2de0);
      if (cVar1 == '\x01') {
        func_0x000107c609b0();
      }
      else {
        func_0x000107c609cc(param_1,param_2,param_3,param_4);
      }
      lVar3 = param_5;
      dVar11 = param_1;
      func_0x000107c5de64(param_5);
      func_0x000107c61180();
      func_0x000107c5cf78(param_5);
      dVar12 = dVar11;
      dVar13 = param_2;
      func_0x000107c61170(lVar3);
      lVar3 = param_5;
      func_0x000107c5de64(param_5);
      func_0x000107c61180();
      func_0x000107c5dc98(param_5);
      func_0x000107c61170(lVar3);
      dVar14 = param_2;
      if (cVar1 == '\0') {
        dVar14 = dVar11;
        dVar13 = dVar12;
      }
      dVar14 = dVar14 / param_1;
      dVar13 = dVar13 / param_1;
      if (*(ulong *)(unaff_x20 + _DAT_112ff2dd8) - 2 < 2) {
        if (*(char *)(unaff_x20 + _DAT_112ff2de8) == '\x01') {
          if (*(int *)(unaff_x20 + _DAT_112ff2da8) == 1) {
            dVar13 = -dVar13;
            dVar14 = -dVar14;
          }
        }
      }
      else {
        if (1 < *(ulong *)(unaff_x20 + _DAT_112ff2dd8)) {
          return;
        }
        dVar13 = -dVar13;
        dVar14 = -dVar14;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112ff2d98);
      if (lVar3 == 0) {
        bVar2 = false;
      }
      else {
        func_0x000107c4a358();
        bVar2 = (int)lVar3 != 0;
        if (bVar2) {
          dVar13 = -dVar13;
          dVar14 = -dVar14;
        }
      }
      lVar3 = _DAT_112ff2df0;
      dVar14 = dVar14 + *(double *)(unaff_x20 + _DAT_112ff2df0);
      dVar12 = 1.0;
      if (dVar14 <= 1.0) {
        dVar12 = dVar14;
      }
      uVar9 = 0;
      dVar10 = 0.0;
      if (0.0 <= dVar14) {
        dVar10 = dVar12;
      }
      lVar4 = param_5;
      func_0x000107c5bcc0();
      lVar8 = _DAT_112ff2d60;
      if (lVar4 - 3U < 2) {
        dVar10 = dVar13 * 0.5 + dVar10;
        dVar12 = 1.0 - dVar10;
        dVar13 = dVar12;
        if (!bVar2) {
          dVar13 = dVar10;
        }
        *(undefined8 *)(unaff_x20 + lVar3) = 0;
        lVar3 = param_5;
        func_0x000107c5bcc0();
        if ((lVar3 == 4) || (dVar14 = 0.4, dVar13 <= 0.4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        if (!bVar2) {
          lVar3 = param_5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c4b8b8(param_5);
            dVar11 = dVar14 - dVar11;
            param_2 = dVar12 - param_2;
            func_0x000107c40724(dVar11,param_2,lVar3);
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x000107c61168();
            puVar7 = puVar6;
            func_0x000107c5dc50(dVar11,param_2);
            func_0x000107c61180();
            lVar8 = _DAT_112ff2d60;
            func_0x000107c61428(unaff_x20 + _DAT_112ff2d60,auStack_88,1,0);
            uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
            *(undefined **)(unaff_x20 + lVar8) = puVar7;
            func_0x000107c61170(uVar9);
            func_0x000107c40724(dVar14,dVar12,lVar3);
            func_0x000107c5dc50();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            lVar3 = _DAT_112ff2d68;
            func_0x000107c61428(unaff_x20 + _DAT_112ff2d68,auStack_a0,1,0);
            uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
            *(undefined **)(unaff_x20 + lVar3) = puVar6;
            func_0x000107c61170(uVar9);
          }
        }
        func_0x000107c435a4();
      }
      else if (lVar4 == 2) {
        func_0x000107c5d4d0(dVar10);
        if ((0.4 < dVar10) && ((*(byte *)(unaff_x20 + _DAT_112ff2df8) & 1) == 0)) {
          lVar3 = unaff_x20 + _DAT_112ff2d88;
          func_0x000107c61618();
          if (lVar3 != 0) {
            func_0x000107c5c4c4();
            func_0x000107c615e8(lVar3);
          }
        }
        *(bool *)(unaff_x20 + _DAT_112ff2df8) = 0.4 < dVar10;
      }
      else if (lVar4 == 1) {
        func_0x000107c61428(unaff_x20 + _DAT_112ff2d60,auStack_88,1,0);
        uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
        *(undefined8 *)(unaff_x20 + lVar8) = 0;
        func_0x000107c61170(uVar5);
        lVar8 = _DAT_112ff2d68;
        func_0x000107c61428(unaff_x20 + _DAT_112ff2d68,auStack_a0,1,0);
        uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
        *(undefined8 *)(unaff_x20 + lVar8) = 0;
        func_0x000107c61170(uVar5);
        if (*(long *)(unaff_x20 + _DAT_112ff2d90) == 0) {
          lVar8 = param_5;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (lVar8 == 0) {
            return;
          }
          func_0x000107c5c490(param_5);
          func_0x000103ba7afc();
          func_0x000107c61170(lVar8);
        }
        else {
          func_0x000107c4e468();
        }
        func_0x000107c4e50c();
        *(undefined8 *)(unaff_x20 + lVar3) = uVar9;
        *(undefined1 *)(unaff_x20 + _DAT_112ff2df8) = 0;
      }
    }
  }
  return;
}



/* Entry: 103ba7aac; end: 103ba7c1f; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController onPanWithPanGestureRecognizer:] */

/* WARNING: Possible PIC construction at 0x000103ba7ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba7ae8) */

void FUN_103ba7aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103ba75e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103ba7c20; end: 103ba7ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba7c20(double param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_80 [48];
  
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112ff2dd8);
  dVar5 = param_1;
  if (1 < uVar4) {
    if (1 < uVar4 - 2) {
      return;
    }
    if ((*(char *)(unaff_x20 + _DAT_112ff2de8) != '\x01') ||
       (*(int *)(unaff_x20 + _DAT_112ff2da8) != 1)) {
      dVar5 = 1.0;
      param_1 = 1.0 - param_1;
    }
  }
  cVar1 = *(char *)(unaff_x20 + _DAT_112ff2de0);
  func_0x000107c3ec60(param_2);
  if (cVar1 == '\x01') {
    func_0x000107c609b0();
  }
  else {
    func_0x000107c609cc();
  }
  dVar7 = (1.0 - param_1) * dVar5;
  if (*(int *)(unaff_x20 + _DAT_112ff2da8) == 1) {
    if (*(char *)(unaff_x20 + _DAT_112ff2de8) == '\x01') {
      if (3 < (uint)uVar4 || (uint)uVar4 == 2) goto LAB_103ba7d34;
    }
    else if ((uVar4 & 0xfffffffe) != 0) goto LAB_103ba7d34;
  }
  else if ((uVar4 & 0xfffffffe) != 2) goto LAB_103ba7d34;
  dVar7 = dVar7 - dVar5;
  param_1 = 1.0 - param_1;
LAB_103ba7d34:
  if (cVar1 == '\0') {
    dVar6 = 0.0;
    dVar5 = dVar7;
  }
  else {
    dVar5 = 0.0;
    dVar6 = dVar7;
  }
  func_0x000107c60890(auStack_80,dVar5,dVar6);
  func_0x000107c5a03c(param_2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(param_1 * 0.5);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52b50(param_3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 103ba7de0; end: 103ba7e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103ba7de0(ulong param_1)

{
  uint uVar1;
  bool bVar2;
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + _DAT_112ff2da8) == 1) {
    if (*(char *)(unaff_x20 + _DAT_112ff2de8) == '\x01') {
      uVar1 = 0xb >> (param_1 & 0xf);
      if ((param_1 & 0xfffffffc) != 0) {
        uVar1 = 0;
      }
      return uVar1 & 1;
    }
    bVar2 = (param_1 & 0xfffffffe) == 0;
  }
  else {
    bVar2 = (param_1 & 0xfffffffe) == 2;
  }
  return (uint)bVar2;
}



/* Entry: 103ba7e40; end: 103ba7f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103ba7e40(void)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  
  lVar6 = _DAT_112ff2d78;
  uVar5 = 0;
  ppuVar1 = (undefined8 **)(unaff_x20 + _DAT_112ff2d78);
  func_0x000107c61618();
  if (ppuVar1 != (undefined8 **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x000107c614f0();
    uVar3 = 0x112daaff8;
    ppuStack_50 = ppuVar2;
    func_0x0001000285a8(0x112daaff8,&UNK_10d953990);
    pppuVar4 = &ppuStack_50;
    func_0x000107c5fb18();
    uStack_60 = 0xd000000000000025;
    uStack_58 = 0x800000010f1a7680;
    ppuStack_50 = pppuVar4;
    uStack_48 = uVar3;
    func_0x000100e8b654();
    func_0x000107c6022c(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppuVar4,pppuVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(ppuVar1);
    if ((uVar5 & 1) != 0) {
      lVar6 = unaff_x20 + lVar6;
      func_0x000107c61618();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        FUN_103ba7f44();
        uVar8 = (uint)lVar7;
        func_0x000107c61170(lVar6);
        goto LAB_103ba7f28;
      }
    }
  }
  uVar8 = 0;
LAB_103ba7f28:
  return uVar8 & 1;
}



/* Entry: 103ba7f44; end: 103ba80ff;  */

bool FUN_103ba7f44(undefined8 ***param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  bool bVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  
  uVar4 = 0;
  pppuVar2 = param_1;
  func_0x000107c614f0();
  uVar5 = 0x112daaff8;
  pppuStack_70 = pppuVar2;
  func_0x0001000285a8(0x112daaff8,&UNK_10d953990);
  ppppuVar3 = &pppuStack_70;
  func_0x000107c5fb18();
  uStack_80 = 0xd000000000000013;
  uStack_78 = 0x800000010f1a7660;
  pppuStack_70 = ppppuVar3;
  uStack_68 = uVar5;
  func_0x000100e8b654();
  func_0x000107c6022c(&uStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,ppppuVar3,ppppuVar3);
  func_0x000107c6142c(uVar5);
  if ((uVar4 & 1) == 0) {
    func_0x000107c3f9e0();
    func_0x000107c61180();
    uVar5 = 0;
    FUN_103ba9604(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
    pppuVar2 = param_1;
    func_0x000107c5fc54(param_1,uVar5);
    func_0x000107c61170(param_1);
    pppuVar11 = (undefined8 ***)((ulong)pppuVar2 & 0xffffffffffffff8);
    if ((ulong)pppuVar2 >> 0x3e == 0) {
      pppuVar8 = (undefined8 ***)pppuVar11[2];
    }
    else {
      pppuVar8 = pppuVar11;
      if ((undefined8 ***)0x7fffffffffffffff < pppuVar2) {
        pppuVar8 = pppuVar2;
      }
      func_0x000107c60480();
    }
    pppuVar10 = (undefined8 ***)0x0;
    do {
      bVar9 = pppuVar8 != pppuVar10;
      if (pppuVar8 == pppuVar10) break;
      if (((ulong)pppuVar2 & 0xc000000000000001) == 0) {
        if (pppuVar11[2] <= pppuVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba80ec);
          (*pcVar1)();
        }
        pppuVar6 = (undefined8 ***)pppuVar2[(long)pppuVar10 + 4];
        func_0x000107c61174();
      }
      else {
        pppuVar6 = pppuVar10;
        func_0x000100f3b77c(pppuVar10,pppuVar2);
      }
      if (SCARRY8((long)pppuVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba80bc);
        (*pcVar1)();
      }
      pppuVar7 = pppuVar6;
      FUN_103ba7f44();
      func_0x000107c61170(pppuVar6);
      pppuVar10 = (undefined8 ***)((long)pppuVar10 + 1);
    } while (((ulong)pppuVar7 & 1) == 0);
    func_0x000107c6142c(pppuVar2);
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}



/* Entry: 103ba8100; end: 103ba815b; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController init] */

void FUN_103ba8100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSwipeInteractionPresenter.SCSwipeInteractionController",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba812c);
  (*pcVar1)();
}



/* Entry: 103ba815c; end: 103ba8203; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba815c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ff2d78);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2d70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2d80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2d60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2d68));
  FUN_103ba8ec8(param_1 + _DAT_112ff2d88);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff2d90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2d98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff2da0));
  return;
}



/* Entry: 103ba8204; end: 103ba8377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103ba8204(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_3;
  func_0x000107c6148c(param_3,puVar1);
  if (uVar2 == 0) {
    return 1;
  }
  func_0x000107c61174(param_3);
  uVar3 = uVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
    lVar6 = 1;
    goto LAB_103ba8354;
  }
  if ((*(int *)(unaff_x20 + _DAT_112ff2da8) == 1) &&
     (uVar4 = uVar3, FUN_103ba7e40(), (uVar4 & 1) != 0)) {
LAB_103ba832c:
    lVar6 = 0;
    uVar4 = param_3;
    param_3 = uVar3;
  }
  else {
    uVar4 = uVar2;
    func_0x000107c5de64(uVar2);
    func_0x000107c61180();
    func_0x000107c5dc98(uVar2);
    func_0x000107c61170(uVar4);
    lVar6 = *(long *)(unaff_x20 + _DAT_112ff2d90);
    if (lVar6 != 0) {
      func_0x000107c5cf60(*(undefined8 *)(lVar6 + 0x10));
    }
    uVar4 = (ulong)(lVar6 != 0);
    FUN_103ba8eec(param_1,param_2);
    if ((uVar4 & 1) == 0) goto LAB_103ba832c;
    lVar5 = unaff_x20 + _DAT_112ff2d88;
    func_0x000107c61618();
    uVar4 = uVar3;
    if (lVar5 == 0) {
      lVar6 = 1;
    }
    else {
      func_0x000107c5c490(uVar2);
      lVar6 = lVar5;
      func_0x000107c5c4b8(lVar5);
      func_0x000107c615e8(lVar5);
    }
  }
  func_0x000107c61170(uVar4);
LAB_103ba8354:
  func_0x000107c61170(param_3);
  return lVar6;
}



/* Entry: 103ba8378; end: 103ba83d3; -[_TtC27SCSwipeInteractionPresenter28SCSwipeInteractionController gestureRecognizerShouldBegin:] */

uint FUN_103ba8378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103ba8204(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}


