/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c749ac; end: 108c749bb;  */

void FUN_108c749ac(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010048b470();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108c749bc; end: 108c749e3;  */

void FUN_108c749bc(void)

{
  undefined8 uStack_20;
  
  func_0x000108c74be8();
  if (uStack_20 != 0) {
    *(undefined1 *)(uStack_20 + 0x98) = 0;
  }
  func_0x000107c34d90();
  return;
}



/* Entry: 108c749e4; end: 108c749f3;  */

void FUN_108c749e4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010048b470();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108c749f4; end: 108c74aa3;  */

/* WARNING: Removing unreachable block (ram,0x000108c74a4c) */

void FUN_108c749f4(long param_1)

{
  long alStack_30 [2];
  
  func_0x000107c2a8d4(alStack_30,param_1 + 0x10);
  if ((alStack_30[0] != 0) && (*(char *)(alStack_30[0] + 0x98) == '\x01')) {
    func_0x000108c74bb0();
    func_0x000108c74c28();
    func_0x000108c74be0();
    func_0x000107c34dd0();
    FUN_108c72fbc(alStack_30[0]);
  }
  func_0x000107c2a89c(alStack_30);
  return;
}



/* Entry: 108c74aa4; end: 108c74c7b;  */

void FUN_108c74aa4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010048b470();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108c74c7c; end: 108c74d53;  */

undefined8 * FUN_108c74c7c(undefined8 *param_1)

{
  undefined1 auStack_60 [40];
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110abdf80;
  while (param_1[0x14] != 0) {
    FUN_108c75184(auStack_60,
                  *(long *)(param_1[0x10] + ((ulong)param_1[0x13] / 0x55) * 8) +
                  ((ulong)param_1[0x13] % 0x55) * 0x30);
    func_0x000108c757bc(param_1 + 0xf);
    if (plStack_38 != (long *)0x0) {
      (**(code **)(*plStack_38 + 0x18))(plStack_38,0);
    }
    func_0x000108c751ac(auStack_60);
  }
  FUN_108c74fc0(param_1 + 0xf);
  FUN_108c78f80(param_1 + 10);
  func_0x000107c27c20(param_1 + 7);
  func_0x000107c2a910(param_1 + 6);
  func_0x000107c28460(param_1 + 5);
  func_0x000108c75794(param_1 + 3);
  func_0x000107c2a90c(param_1 + 1);
  return param_1;
}



/* Entry: 108c74d54; end: 108c74d57;  */

undefined8 * FUN_108c74d54(undefined8 *param_1)

{
  undefined1 auStack_60 [40];
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110abdf80;
  while (param_1[0x14] != 0) {
    FUN_108c75184(auStack_60,
                  *(long *)(param_1[0x10] + ((ulong)param_1[0x13] / 0x55) * 8) +
                  ((ulong)param_1[0x13] % 0x55) * 0x30);
    func_0x000108c757bc(param_1 + 0xf);
    if (plStack_38 != (long *)0x0) {
      (**(code **)(*plStack_38 + 0x18))(plStack_38,0);
    }
    func_0x000108c751ac(auStack_60);
  }
  FUN_108c74fc0(param_1 + 0xf);
  FUN_108c78f80(param_1 + 10);
  func_0x000107c27c20(param_1 + 7);
  func_0x000107c2a910(param_1 + 6);
  func_0x000107c28460(param_1 + 5);
  func_0x000108c75794(param_1 + 3);
  func_0x000107c2a90c(param_1 + 1);
  return param_1;
}



/* Entry: 108c74d58; end: 108c74d6b;  */

void FUN_108c74d58(void)

{
  FUN_108c74c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c74d6c; end: 108c74dff;  */

void FUN_108c74d6c(long param_1,undefined8 param_2,long *param_3)

{
  long unaff_x19;
  undefined1 auStack_50 [40];
  long lStack_28;
  
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c74dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x18))(param_3,0);
      return;
    }
  }
  else {
    func_0x000108c75df8();
    FUN_108c7290c();
    lStack_28 = *param_3;
    *param_3 = 0;
    func_0x000108c75208(unaff_x19 + 0x78,auStack_50);
    func_0x000108c751ac(auStack_50);
    func_0x000107c2a928();
  }
  return;
}



/* Entry: 108c74e00; end: 108c74e5f;  */

void FUN_108c74e00(long param_1)

{
  byte bVar1;
  undefined1 auStack_30 [16];
  
  bVar1 = *(byte *)(param_1 + 0xa9);
  *(undefined1 *)(param_1 + 0xa9) = 1;
  if (((bVar1 & 1) == 0) && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
    FUN_108c74f1c(auStack_30,param_1 + 0x18);
    FUN_108c74e60(param_1,auStack_30);
    func_0x000107c2a908(auStack_30);
  }
  return;
}



/* Entry: 108c74e60; end: 108c74f1b;  */

void FUN_108c74e60(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*param_2 == 0) {
    func_0x000108c75e18(0x12,*(undefined4 *)(param_1 + 0xac));
  }
  func_0x000107c34e58();
  lStack_28 = param_2[1];
  lStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c34e4c();
    } while (extraout_w10 != 0);
  }
  puVar3 = (undefined8 *)0x40;
  __Znwm();
  func_0x000107c34e5c();
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  *puVar3 = &PTR_FUN_110abe088;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar3[5] = uVar2;
  puVar3[4] = uVar1;
  puVar3[7] = lStack_28;
  puVar3[6] = lStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000107c34e4c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108c74fa4(&uStack_40);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(*(long **)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 108c74f1c; end: 108c74f5b;  */

void FUN_108c74f1c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 108c74f5c; end: 108c74f87;  */

void FUN_108c74f5c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000108c75794(&uStack_20);
  return;
}



/* Entry: 108c74f88; end: 108c74fbf;  */

long FUN_108c74f88(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108c75e68();
  lVar1 = unaff_x19;
  func_0x0001004a5628();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108c74fc0; end: 108c75003;  */

long * FUN_108c74fc0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_108c75004();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_108c75160();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c75004; end: 108c750f3;  */

void FUN_108c75004(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x55) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5 + (*(ulong *)(param_1 + 0x20) % 0x55) * 0x30;
  }
  func_0x000108c75e50();
  do {
    lVar6 = lVar4 + -0xff0;
    do {
      if (lVar4 == param_2) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar1 = *(undefined8 **)(param_1 + 8);
        while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
          __ZdlPv(*puVar1);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar1;
        }
        if (uVar3 == 1) {
          uVar2 = 0x2a;
        }
        else {
          if (uVar3 != 2) {
            return;
          }
          uVar2 = 0x55;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        return;
      }
      func_0x000108c751ac(lVar4);
      lVar4 = lVar4 + 0x30;
      lVar6 = lVar6 + 0x30;
    } while (*plVar5 != lVar6);
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  } while( true );
}



/* Entry: 108c750f4; end: 108c75133;  */

void FUN_108c750f4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 108c75134; end: 108c7515f;  */

long * FUN_108c75134(long *param_1)

{
  FUN_108c75160();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c75160; end: 108c75183;  */

void FUN_108c75160(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108c75184; end: 108c75293;  */

void FUN_108c75184(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_108c7290c();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 108c75294; end: 108c755b7;  */

void FUN_108c75294(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  ulong *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[4] < 0x55) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    puVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0xff0;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          puStack_70 = puVar13;
          FUN_108c756f4();
          func_0x000108c75e38(lVar11 * 2 + 6);
          FUN_108c756cc(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (ulong)puStack_88;
          *param_1 = (ulong)puStack_90;
          param_1[3] = (ulong)puStack_78;
          param_1[2] = (ulong)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108c75e74();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (ulong)puVar12;
        FUN_108c755dc(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (ulong)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      puStack_98 = puVar13;
      FUN_108c756f4();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0xff0;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a8 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puStack_c8 = param_1 + 5;
      uStack_c0 = 0x55;
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          uStack_d0 = uVar7;
          puStack_70 = puVar13;
          FUN_108c756f4();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_108c756cc(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x000108c75e74();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      uStack_d0 = 0;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            puStack_70 = puVar13;
            FUN_108c756f4(lVar11);
            func_0x000108c75e38(lVar11 * 2 + 6);
            FUN_108c756cc(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x000108c75e74();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (ulong)puVar9;
      param_1[1] = (ulong)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (ulong)puVar12;
      param_1[3] = (ulong)puVar15;
      puStack_b0 = puVar10;
      func_0x000108c75728(&uStack_d0);
      func_0x000108c75754(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x55;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      puVar13 = (ulong *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        puVar13 = (ulong *)0x1;
      }
      puVar6 = puVar13;
      FUN_108c756f4();
      puStack_70 = puVar6;
      puStack_68 = puVar6 + ((ulong)puVar13 >> 2);
      FUN_108c756cc(&puStack_70,param_1[1],param_1[2]);
      uVar17 = param_1[1];
      puVar18 = (ulong *)*param_1;
      param_1[1] = (ulong)puStack_68;
      *param_1 = (ulong)puStack_70;
      param_1[3] = (ulong)(puVar6 + uVar8);
      param_1[2] = (ulong)(puVar6 + ((ulong)puVar13 >> 2));
      puStack_70 = puVar18;
      puStack_68 = (ulong *)uVar17;
      func_0x000108c75754(&puStack_70);
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = param_1[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      param_1[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = uVar7;
  param_1[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 108c755b8; end: 108c755db;  */

long FUN_108c755b8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x55 + -1;
  }
  return lVar1;
}



/* Entry: 108c755dc; end: 108c756cb;  */

void FUN_108c755dc(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  puStack_50 = param_1 + 3;
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_108c756f4();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_108c756cc(&uStack_70,param_1[1],param_1[2]);
      uVar4 = param_1[1];
      uVar7 = *param_1;
      uVar8 = param_1[3];
      uVar6 = param_1[2];
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[3] = uStack_58;
      param_1[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x000108c75754(&uStack_70);
      puVar5 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = param_1[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      param_1[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = param_2;
  param_1[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 108c756cc; end: 108c756f3;  */

void FUN_108c756cc(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 108c756f4; end: 108c7585b;  */

undefined1  [16] FUN_108c756f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 108c7585c; end: 108c7586f;  */

void FUN_108c7585c(void)

{
  func_0x000108c75830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c75870; end: 108c7597b;  */

void FUN_108c75870(long param_1,int param_2)

{
  long *aplStack_58 [5];
  long *aplStack_30 [2];
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0xa9) & 1) == 0) {
    if (param_2 == 0) {
      func_0x000108c75e58(aplStack_58);
      if (aplStack_58[0] == (long *)0x0) {
        func_0x000108c75e18(0x10,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xac));
      }
      else {
        (**(code **)(*aplStack_58[0] + 0x10))();
      }
      func_0x000107c2a908(aplStack_58);
    }
    else {
      FUN_108c7136c(*(ulong *)(*(long *)(param_1 + 0x20) + 0x60) & 0xfffffffffffffffc);
      FUN_108c71568(*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xac));
      func_0x000108c75e58(aplStack_30);
      if (aplStack_30[0] == (long *)0x0) {
        func_0x000108c75e18(0xf,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xac));
      }
      else {
        FUN_108c7290c(aplStack_58,*(long *)(param_1 + 0x20) + 0x50);
        (**(code **)(*aplStack_30[0] + 0x20))(aplStack_30[0],aplStack_58);
        FUN_108c78f80(aplStack_58);
      }
      func_0x000107c2a908(aplStack_30);
      func_0x000107c2a924(*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}



/* Entry: 108c7597c; end: 108c759a7;  */

undefined8 * FUN_108c7597c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe030;
  FUN_108c74f88(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 108c759a8; end: 108c759bb;  */

void FUN_108c759a8(void)

{
  FUN_108c7597c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c759bc; end: 108c75b13;  */

void FUN_108c759bc(long param_1,uint param_2)

{
  long lVar1;
  long *aplStack_60 [2];
  undefined1 auStack_50 [16];
  ulong uStack_40;
  long *plStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0xa0) == 0) {
    FUN_108c71734(*(undefined4 *)(lVar1 + 0xac));
  }
  else {
    FUN_108c75184(auStack_50,
                  *(long *)(*(long *)(lVar1 + 0x80) + (*(ulong *)(lVar1 + 0x98) / 0x55) * 8) +
                  (*(ulong *)(lVar1 + 0x98) % 0x55) * 0x30);
    func_0x000108c757bc(*(long *)(param_1 + 0x20) + 0x78);
    if (param_2 == 0) {
      FUN_108c712d4(uStack_40 & 0xfffffffffffffffc,0);
      if (plStack_28 != (long *)0x0) {
        (**(code **)(*plStack_28 + 0x18))(plStack_28,0);
      }
      if (*(char *)(*(long *)(param_1 + 0x20) + 0xaa) == '\x01') {
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xa8) = 0;
        func_0x000108c75e58(aplStack_60);
        if (aplStack_60[0] == (long *)0x0) {
          func_0x000108c75e18(0x11,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xac));
        }
        else {
          (**(code **)(*aplStack_60[0] + 0x10))();
        }
        func_0x000107c2a908(aplStack_60);
      }
    }
    else {
      FUN_108c711e4(uStack_40 & 0xfffffffffffffffc);
      if (plStack_28 != (long *)0x0) {
        (**(code **)(*plStack_28 + 0x10))();
      }
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0xa9) & 1) == 0) {
        func_0x000107c2a928(*(long *)(param_1 + 0x20),1);
      }
    }
    func_0x000108c751ac(auStack_50);
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x20) + 0xa9) == '\x01') {
    FUN_108c74e60(*(long *)(param_1 + 0x20),param_1 + 0x30);
  }
  return;
}



/* Entry: 108c75b14; end: 108c75b3f;  */

undefined8 * FUN_108c75b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe088;
  func_0x000108c74fa4(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 108c75b40; end: 108c75b53;  */

void FUN_108c75b40(void)

{
  FUN_108c75b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c75b54; end: 108c75caf;  */

void FUN_108c75b54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar11;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110abe0e0;
  puVar11 = puVar7 + 3;
  *(undefined4 *)puVar11 = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  uStack_a0 = uVar1;
  lStack_98 = lVar3;
  uStack_90 = uVar2;
  lStack_88 = lVar4;
  puStack_80 = puVar11;
  puStack_78 = puVar7;
  puStack_70 = puVar11;
  puStack_68 = puVar7;
  if (lVar4 != 0) {
    plVar10 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    func_0x000107c34e4c();
  } while (extraout_w10 != 0);
  puVar8 = (undefined8 *)0x50;
  __Znwm();
  puVar9 = puVar8;
  func_0x000107c28100();
  *puVar9 = &PTR_FUN_110abe130;
  puVar9[4] = uVar1;
  puVar9[5] = lVar3;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar9[6] = uVar2;
  puVar9[7] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c34e4c();
    } while (extraout_w10_00 != 0);
  }
  puVar8[8] = puVar11;
  puVar8[9] = puVar7;
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  FUN_108c75cb0(&uStack_a0);
  plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
  (**(code **)(*plVar10 + 0x20))(plVar10,puVar11,puVar8);
  FUN_108c75dc8(&puStack_70);
  return;
}



/* Entry: 108c75cb0; end: 108c75cdb;  */

undefined8 FUN_108c75cb0(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_108c75dc8(param_1 + 0x20);
  func_0x000107c2a908(param_1 + 0x10);
  func_0x0001004a5628();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108c75cdc; end: 108c75cdf;  */

void FUN_108c75cdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe0e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c75ce0; end: 108c75cf3;  */

void FUN_108c75ce0(void)

{
  func_0x000108c75d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c75cf4; end: 108c75d0f;  */

long FUN_108c75cf4(long param_1)

{
  func_0x000107c60ca0(param_1 + 0x38);
  func_0x000100601cb4();
  return param_1 + 0x18;
}



/* Entry: 108c75d10; end: 108c75d3b;  */

undefined8 * FUN_108c75d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe130;
  FUN_108c75cb0(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 108c75d3c; end: 108c75d4f;  */

void FUN_108c75d3c(void)

{
  FUN_108c75d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c75d50; end: 108c75dc7;  */

void FUN_108c75d50(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    func_0x000107c27c84(auStack_58,*(undefined8 *)(param_1 + 0x40));
    (**(code **)(*plVar2 + 0x18))(plVar2,auStack_58);
    func_0x000107c27cbc(auStack_58);
    return;
  }
  func_0x000107c2a93c(0x40013,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xac));
  func_0x000108c71854();
  uStack_38 = 10;
  puVar1 = auStack_58;
  FUN_108c71700(puVar1,0x40013);
  func_0x000108c71894();
  func_0x000108c71908();
  func_0x000107c2a8ac(puVar1,auStack_70);
  func_0x000108c7186c();
  func_0x000107c34d08();
  func_0x000108c718f8();
  func_0x000108c71900();
  return;
}



/* Entry: 108c75dc8; end: 108c75def;  */

long FUN_108c75dc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c75df0; end: 108c75e7f;  */

void FUN_108c75df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108c75e80; end: 108c75fbf;  */

/* WARNING: Removing unreachable block (ram,0x0001004b7020) */
/* WARNING: Removing unreachable block (ram,0x0001004b6ff0) */

long * FUN_108c75e80(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long *plVar11;
  long lVar12;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined **ppuStack_288;
  long *plStack_280;
  undefined ***pppuStack_270;
  undefined **ppuStack_268;
  long *plStack_260;
  undefined ***pppuStack_250;
  undefined **ppuStack_248;
  long *plStack_240;
  undefined ***pppuStack_230;
  undefined **ppuStack_228;
  long *plStack_220;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  long *plStack_190;
  undefined1 uStack_180;
  undefined8 uStack_48;
  
  lVar12 = param_1;
  func_0x000108c78d28();
  plVar11 = *(long **)(lVar12 + 8);
  plVar4 = (long *)0xc8;
  __Znwm();
  *plVar4 = (long)&PTR_FUN_110abe240;
  plVar4[1] = (long)&PTR_FUN_110abe290;
  plVar4[2] = (long)&PTR_DAT_110abe2b8;
  plVar4[3] = (long)param_2;
  uStack_1a8 = 0x100000002;
  uStack_1a0 = 0;
  uStack_198 = 0;
  func_0x000104c4f3d4(plVar4 + 4,&uStack_1a8);
  puVar8 = (undefined8 *)(param_1 + 0x28);
  plVar6 = param_2;
  (**(code **)(*plVar11 + 0x18))(plVar4 + 0x13);
  if ((*(byte *)(plVar4[3] + 0x150) & 1) == 0) {
    func_0x0001053ad34c(&uStack_1a8);
    plVar6 = param_2 + 0x17;
    func_0x000107c27cc8();
    uStack_180 = 0;
    uStack_1a0._0_2_ = CONCAT11(1,(undefined1)uStack_1a0);
    uStack_19c = SUB84(param_2,0);
    plStack_190 = plVar6;
    func_0x000108c78d94(plVar4[0x13]);
    puVar8 = &uStack_1a8;
    plVar6 = plVar4 + 0x13;
    (*extraout_x8)();
    func_0x000108c78ecc();
    func_0x0001053ad5dc();
  }
  func_0x000107c34e74(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c4f64c(plVar4 + 4);
    __ZdlPv();
    func_0x000108c78e98();
    pcStack_1b8 = FUN_108c75fc0;
    uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = plVar4[1];
    plVar11 = *(long **)(lVar12 + 8);
    plVar4 = plVar11;
    puStack_1c0 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar11 + 0x48))(plVar11);
    (**(code **)(*plVar11 + 0x18))(&lStack_2b8,plVar11,lVar12 + 0x28,puVar8,plVar4);
    (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,lStack_2a8);
    plVar5 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_2a8,0x9a8);
    lStack_2e8 = lStack_2b0;
    lStack_2f0 = lStack_2b8;
    lStack_2d8 = lStack_2a0;
    lStack_2e0 = lStack_2a8;
    lStack_2c8 = lStack_290;
    lStack_2d0 = lStack_298;
    *plVar5 = (long)&PTR_DAT_110abe5b8;
    plVar5[1] = (long)puVar8;
    plVar5[3] = lStack_2b0;
    plVar5[2] = lStack_2b8;
    plVar5[5] = lStack_2a0;
    plVar5[4] = lStack_2a8;
    plVar5[7] = lStack_290;
    plVar5[6] = lStack_298;
    plVar5[8] = (long)plVar6;
    FUN_108c7764c(plVar5 + 9);
    plVar4 = plVar5 + 0x37;
    plVar5[0x3a] = 0;
    plVar5[0x3e] = 0;
    uVar3 = *(undefined1 *)(plVar5[1] + 0x150);
    *(undefined1 *)(plVar5 + 0x40) = uVar3;
    *(undefined1 *)((long)plVar5 + 0x201) = uVar3;
    func_0x000108c778ec(plVar5 + 0x41);
    plVar11 = plVar5 + 0x72;
    plVar5[0x75] = 0;
    plVar5[0x79] = 0;
    *(undefined4 *)(plVar5 + 0x7b) = 0;
    plVar5[0x7d] = 0;
    plVar5[0x7c] = 0;
    plVar5[0x7f] = 0;
    plVar5[0x7e] = 0;
    plVar5[0x81] = 0;
    plVar5[0x80] = 0;
    func_0x000107c27ccc(plVar5 + 0x82);
    plVar1 = plVar5 + 0xb7;
    plVar5[0xba] = 0;
    plVar5[0xbe] = 0;
    func_0x000108c77b68(plVar5 + 0xc0);
    plVar5[0xf0] = 0;
    plVar5[0xf4] = 0;
    func_0x000108c77e38(plVar5 + 0xf6);
    plVar2 = plVar5 + 0x121;
    plVar5[0x124] = 0;
    plVar5[0x128] = 0;
    *(undefined2 *)(plVar5 + 0x12a) = 0;
    *(undefined1 *)((long)plVar5 + 0x952) = 0;
    plVar5[299] = 3;
    *(undefined1 *)(plVar5 + 300) = 0;
    (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,plVar5 + 0x12d);
    plVar6[1] = (long)plVar5;
    ppuStack_228 = &PTR_FUN_110abe990;
    pppuStack_210 = &ppuStack_228;
    plStack_220 = plVar5;
    func_0x000108c78e30(plVar4,plVar5[4],&ppuStack_228,plVar5 + 9);
    FUN_108c783f0(&ppuStack_228);
    func_0x000107c34ec8(plVar5[1]);
    plVar5[0x10] = extraout_x8_00;
    plVar5[0x11] = (long)plVar4;
    ppuStack_248 = &PTR_FUN_110abea20;
    pppuStack_230 = &ppuStack_248;
    plStack_240 = plVar5;
    func_0x000108c78e30(plVar1,plVar5[4],&ppuStack_248,plVar5 + 0x82);
    FUN_108c783f0(&ppuStack_248);
    plVar5[0x91] = (long)plVar1;
    ppuStack_268 = &PTR_DAT_110abeaa0;
    pppuStack_250 = &ppuStack_268;
    plStack_260 = plVar5;
    func_0x000108c78e30(plVar2,plVar5[4],&ppuStack_268,plVar5 + 0xf6);
    FUN_108c783f0(&ppuStack_268);
    plVar5[0xfb] = (long)plVar2;
    ppuStack_288 = &PTR_DAT_110abeb20;
    pppuStack_270 = &ppuStack_288;
    plStack_280 = plVar5;
    func_0x000108c78e30(plVar11,plVar5[4],&ppuStack_288,plVar5 + 0x41);
    FUN_108c783f0(&ppuStack_288);
    plVar6 = plVar5 + 0x42;
    func_0x000107c27cc0(plVar6,plVar5[1],plVar5 + 0x7b);
    plVar5[0x4c] = (long)plVar11;
    func_0x000107c34e74(uStack_208);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      FUN_108c76808(plVar5 + 0x12d);
      FUN_108c7860c(plVar2);
      func_0x000108c78678(plVar5 + 0xf6);
      FUN_108c7860c(plVar5 + 0xed);
      func_0x000108c786b4(plVar5 + 0xc0);
      FUN_108c7860c(plVar1);
      func_0x000104c01224(plVar5 + 0x82);
      func_0x000107c27cbc(plVar5 + 0x7b);
      FUN_108c7860c(plVar11);
      func_0x000108c786e4(plVar5 + 0x41);
      FUN_108c7860c(plVar4);
      func_0x000108c78714(plVar5 + 9);
      func_0x000108c78d94(plRam0000000113815c70);
      puVar9 = &DAT_10f6842c6;
      puVar10 = &UNK_10f50ef39;
      (*extraout_x8_01)();
      __Unwind_Resume(plVar6);
      plVar7 = plVar6;
      func_0x000104bd46a0();
      pcStack_2f8 = FUN_108c76358;
      plStack_330 = plVar6;
      plStack_328 = plVar2;
      plStack_320 = plVar1;
      plStack_318 = plVar11;
      plStack_310 = plVar4;
      plStack_308 = plVar5;
      ppuStack_300 = &puStack_1c0;
      (**(code **)(*(long *)plVar7[1] + 0x18))
                (&lStack_360,(long *)plVar7[1],plVar7 + 5,puVar9,puVar10);
      plVar6 = plRam0000000113815c70;
      (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_350,0x648);
      *plVar6 = (long)&PTR_DAT_110abec20;
      plVar6[1] = (long)&PTR_FUN_110abec78;
      plVar6[2] = (long)&PTR_DAT_110abeca8;
      plVar6[3] = (long)puVar9;
      plVar6[5] = lStack_358;
      plVar6[4] = lStack_360;
      plVar6[7] = lStack_348;
      plVar6[6] = lStack_350;
      plVar6[9] = lStack_338;
      plVar6[8] = lStack_340;
      *(undefined1 *)(plVar6 + 10) = 0;
      func_0x0001004b91c8(plVar6 + 0xb);
      func_0x0001004b9298(plVar6 + 0x34);
      func_0x0001004b9300(plVar6 + 0x61);
      func_0x0001004b9360(plVar6 + 0x96);
      return plVar6;
    }
    return plVar6;
  }
  return plVar4;
}



/* Entry: 108c75fc0; end: 108c76357;  */

/* WARNING: Removing unreachable block (ram,0x0001004b7020) */
/* WARNING: Removing unreachable block (ram,0x0001004b6ff0) */

long * FUN_108c75fc0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  code *extraout_x8_00;
  long *plVar10;
  long lVar11;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined ***pppuStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined ***pppuStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 8);
  plVar10 = *(long **)(lVar11 + 8);
  plVar4 = plVar10;
  (**(code **)(*plVar10 + 0x48))(plVar10);
  (**(code **)(*plVar10 + 0x18))(&lStack_108,plVar10,lVar11 + 0x28,param_2,plVar4);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,lStack_f8);
  plVar5 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_f8,0x9a8);
  lStack_138 = lStack_100;
  lStack_140 = lStack_108;
  lStack_128 = lStack_f0;
  lStack_130 = lStack_f8;
  lStack_118 = lStack_e0;
  lStack_120 = lStack_e8;
  *plVar5 = (long)&PTR_DAT_110abe5b8;
  plVar5[1] = param_2;
  plVar5[3] = lStack_100;
  plVar5[2] = lStack_108;
  plVar5[5] = lStack_f0;
  plVar5[4] = lStack_f8;
  plVar5[7] = lStack_e0;
  plVar5[6] = lStack_e8;
  plVar5[8] = param_3;
  FUN_108c7764c(plVar5 + 9);
  plVar4 = plVar5 + 0x37;
  plVar5[0x3a] = 0;
  plVar5[0x3e] = 0;
  uVar3 = *(undefined1 *)(plVar5[1] + 0x150);
  *(undefined1 *)(plVar5 + 0x40) = uVar3;
  *(undefined1 *)((long)plVar5 + 0x201) = uVar3;
  func_0x000108c778ec(plVar5 + 0x41);
  plVar10 = plVar5 + 0x72;
  plVar5[0x75] = 0;
  plVar5[0x79] = 0;
  *(undefined4 *)(plVar5 + 0x7b) = 0;
  plVar5[0x7d] = 0;
  plVar5[0x7c] = 0;
  plVar5[0x7f] = 0;
  plVar5[0x7e] = 0;
  plVar5[0x81] = 0;
  plVar5[0x80] = 0;
  func_0x000107c27ccc(plVar5 + 0x82);
  plVar1 = plVar5 + 0xb7;
  plVar5[0xba] = 0;
  plVar5[0xbe] = 0;
  func_0x000108c77b68(plVar5 + 0xc0);
  plVar5[0xf0] = 0;
  plVar5[0xf4] = 0;
  func_0x000108c77e38(plVar5 + 0xf6);
  plVar2 = plVar5 + 0x121;
  plVar5[0x124] = 0;
  plVar5[0x128] = 0;
  *(undefined2 *)(plVar5 + 0x12a) = 0;
  *(undefined1 *)((long)plVar5 + 0x952) = 0;
  plVar5[299] = 3;
  *(undefined1 *)(plVar5 + 300) = 0;
  (**(code **)(*plRam0000000113815c70 + 0x70))(plRam0000000113815c70,plVar5 + 0x12d);
  *(long **)(param_3 + 8) = plVar5;
  ppuStack_78 = &PTR_FUN_110abe990;
  pppuStack_60 = &ppuStack_78;
  plStack_70 = plVar5;
  func_0x000108c78e30(plVar4,plVar5[4],&ppuStack_78,plVar5 + 9);
  FUN_108c783f0(&ppuStack_78);
  func_0x000107c34ec8(plVar5[1]);
  plVar5[0x10] = extraout_x8;
  plVar5[0x11] = (long)plVar4;
  ppuStack_98 = &PTR_FUN_110abea20;
  pppuStack_80 = &ppuStack_98;
  plStack_90 = plVar5;
  func_0x000108c78e30(plVar1,plVar5[4],&ppuStack_98,plVar5 + 0x82);
  FUN_108c783f0(&ppuStack_98);
  plVar5[0x91] = (long)plVar1;
  ppuStack_b8 = &PTR_DAT_110abeaa0;
  pppuStack_a0 = &ppuStack_b8;
  plStack_b0 = plVar5;
  func_0x000108c78e30(plVar2,plVar5[4],&ppuStack_b8,plVar5 + 0xf6);
  FUN_108c783f0(&ppuStack_b8);
  plVar5[0xfb] = (long)plVar2;
  ppuStack_d8 = &PTR_DAT_110abeb20;
  pppuStack_c0 = &ppuStack_d8;
  plStack_d0 = plVar5;
  func_0x000108c78e30(plVar10,plVar5[4],&ppuStack_d8,plVar5 + 0x41);
  FUN_108c783f0(&ppuStack_d8);
  plVar6 = plVar5 + 0x42;
  func_0x000107c27cc0(plVar6,plVar5[1],plVar5 + 0x7b);
  plVar5[0x4c] = (long)plVar10;
  func_0x000107c34e74(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108c76808(plVar5 + 0x12d);
    FUN_108c7860c(plVar2);
    func_0x000108c78678(plVar5 + 0xf6);
    FUN_108c7860c(plVar5 + 0xed);
    func_0x000108c786b4(plVar5 + 0xc0);
    FUN_108c7860c(plVar1);
    func_0x000104c01224(plVar5 + 0x82);
    func_0x000107c27cbc(plVar5 + 0x7b);
    FUN_108c7860c(plVar10);
    func_0x000108c786e4(plVar5 + 0x41);
    FUN_108c7860c(plVar4);
    func_0x000108c78714(plVar5 + 9);
    func_0x000108c78d94(plRam0000000113815c70);
    puVar8 = &DAT_10f6842c6;
    puVar9 = &UNK_10f50ef39;
    (*extraout_x8_00)();
    __Unwind_Resume(plVar6);
    plVar7 = plVar6;
    func_0x000104bd46a0();
    pcStack_148 = FUN_108c76358;
    plStack_180 = plVar6;
    plStack_178 = plVar2;
    plStack_170 = plVar1;
    plStack_168 = plVar10;
    plStack_160 = plVar4;
    plStack_158 = plVar5;
    puStack_150 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)plVar7[1] + 0x18))(&lStack_1b0,(long *)plVar7[1],plVar7 + 5,puVar8,puVar9)
    ;
    plVar4 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_1a0,0x648);
    *plVar4 = (long)&PTR_DAT_110abec20;
    plVar4[1] = (long)&PTR_FUN_110abec78;
    plVar4[2] = (long)&PTR_DAT_110abeca8;
    plVar4[3] = (long)puVar8;
    plVar4[5] = lStack_1a8;
    plVar4[4] = lStack_1b0;
    plVar4[7] = lStack_198;
    plVar4[6] = lStack_1a0;
    plVar4[9] = lStack_188;
    plVar4[8] = lStack_190;
    *(undefined1 *)(plVar4 + 10) = 0;
    func_0x0001004b91c8(plVar4 + 0xb);
    func_0x0001004b9298(plVar4 + 0x34);
    func_0x0001004b9300(plVar4 + 0x61);
    func_0x0001004b9360(plVar4 + 0x96);
    return plVar4;
  }
  return plVar6;
}



/* Entry: 108c76358; end: 108c7637f;  */

/* WARNING: Removing unreachable block (ram,0x0001004b7020) */
/* WARNING: Removing unreachable block (ram,0x0001004b6ff0) */

long * FUN_108c76358(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&lStack_70,*(long **)(param_1 + 8),param_1 + 0x28,param_2,param_3);
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0x130))(plRam0000000113815c70,lStack_60,0x648);
  *plVar1 = (long)&PTR_DAT_110abec20;
  plVar1[1] = (long)&PTR_FUN_110abec78;
  plVar1[2] = (long)&PTR_DAT_110abeca8;
  plVar1[3] = param_2;
  plVar1[5] = lStack_68;
  plVar1[4] = lStack_70;
  plVar1[7] = lStack_58;
  plVar1[6] = lStack_60;
  plVar1[9] = lStack_48;
  plVar1[8] = lStack_50;
  *(undefined1 *)(plVar1 + 10) = 0;
  func_0x0001004b91c8(plVar1 + 0xb);
  func_0x0001004b9298(plVar1 + 0x34);
  func_0x0001004b9300(plVar1 + 0x61);
  func_0x0001004b9360(plVar1 + 0x96);
  return plVar1;
}



/* Entry: 108c76380; end: 108c7639b;  */

void FUN_108c76380(void)

{
  func_0x000107c34ed0();
  return;
}



/* Entry: 108c7639c; end: 108c763a3;  */

long FUN_108c7639c(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108c763a4; end: 108c763df;  */

void FUN_108c763a4(void)

{
  func_0x000108c78f08();
  return;
}



/* Entry: 108c763e0; end: 108c764ef;  */

int * FUN_108c763e0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  int aiStack_4c8 [2];
  undefined1 uStack_4bf;
  undefined8 uStack_388;
  int *piStack_380;
  int *piStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  int aiStack_360 [82];
  undefined8 uStack_218;
  int *piStack_210;
  undefined8 uStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  int aiStack_1f0 [4];
  byte *pbStack_1e0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  piVar4 = aiStack_1f0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c27cd4(aiStack_1f0);
  pbVar8 = *(byte **)(param_2 + 0x18);
  if ((*pbVar8 & 1) == 0) {
    pbStack_1e0 = pbVar8 + 0xd0;
    *pbVar8 = 1;
  }
  func_0x000108c78ea8();
  lStack_1c8 = extraout_x8 + 0x108;
  uStack_1c0 = param_1;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
  uStack_1a0 = uStack_50;
  uStack_1a8 = uStack_58;
  uStack_190 = uStack_40;
  uStack_198 = uStack_48;
  puVar7 = (undefined8 *)(param_2 + 0x98);
  func_0x000108c78d94(*puVar7);
  func_0x000108c78eec();
  uVar3 = param_2 + 0x20;
  func_0x000105395128(uVar3,aiStack_1f0);
  if ((uVar3 & 1) == 0) {
    func_0x000108c78d94(plRam0000000113815c70);
    puVar7 = (undefined8 *)&UNK_10f50edf8;
    (*extraout_x8_00)();
  }
  func_0x000104c01188();
  func_0x000107c34e74(uStack_38);
  if ((bool)in_ZR) {
    return piVar4;
  }
  ___stack_chk_fail();
  piVar5 = piVar4;
  func_0x000108c78e98();
  piVar6 = aiStack_360;
  pcStack_1f8 = FUN_108c764f0;
  piStack_210 = piVar4;
  uStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x000108c78cd0();
  uVar2 = **(char **)(piVar5 + 6) == '\x01';
  uStack_218 = extraout_x8_01;
  if ((bool)uVar2) {
    func_0x000108c78cbc();
    puVar7 = (undefined8 *)&UNK_10f50edf8;
    (**(code **)(extraout_x8_02 + 0x10))();
  }
  func_0x000107c27cd0(aiStack_360);
  func_0x000108c78f68();
  func_0x000107c34ec8(puVar7[-0x10]);
  func_0x000108c78d94();
  func_0x000108c78eec();
  func_0x000108c78ec0();
  func_0x000104c011f4();
  func_0x000107c34e74(uStack_218);
  if ((bool)uVar2) {
    return piVar6;
  }
  ___stack_chk_fail();
  func_0x000108c78dd0();
  pcStack_368 = FUN_108c7659c;
  piStack_380 = piVar4;
  piStack_378 = piVar6;
  ppuStack_370 = &puStack_200;
  func_0x000108c78cd0();
  piVar4 = aiStack_4c8;
  uStack_388 = extraout_x8_03;
  FUN_108c7683c(piVar4);
  uStack_4bf = 1;
  func_0x000108c78f68();
  func_0x000108c78d94();
  piVar5 = aiStack_4c8;
  (*extraout_x8_04)();
  func_0x000108c78ecc();
  piVar6 = aiStack_4c8;
  func_0x000108c76af8();
  func_0x000107c34e74(uStack_388);
  if ((bool)uVar2) {
    return piVar4;
  }
  ___stack_chk_fail();
  func_0x000108c78dd0();
  iVar1 = piVar6[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar5 = iVar1;
  return (int *)0x1;
}



/* Entry: 108c764f0; end: 108c7659b;  */

int * FUN_108c764f0(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  int aiStack_2d8 [2];
  undefined1 uStack_2cf;
  undefined8 uStack_198;
  int aiStack_170 [82];
  undefined8 uStack_28;
  
  piVar3 = aiStack_170;
  func_0x000108c78cd0();
  uVar2 = **(char **)(param_1 + 0x18) == '\x01';
  uStack_28 = extraout_x8;
  if ((bool)uVar2) {
    func_0x000108c78cbc();
    param_3 = &UNK_10f50edf8;
    (**(code **)(extraout_x8_00 + 0x10))();
  }
  func_0x000107c27cd0(aiStack_170);
  func_0x000108c78f68();
  func_0x000107c34ec8(*(undefined8 *)(param_3 + -0x80));
  func_0x000108c78d94();
  func_0x000108c78eec();
  func_0x000108c78ec0();
  func_0x000104c011f4();
  func_0x000107c34e74(uStack_28);
  if ((bool)uVar2) {
    return piVar3;
  }
  ___stack_chk_fail();
  func_0x000108c78dd0();
  func_0x000108c78cd0();
  piVar3 = aiStack_2d8;
  uStack_198 = extraout_x8_01;
  FUN_108c7683c(piVar3);
  uStack_2cf = 1;
  func_0x000108c78f68();
  func_0x000108c78d94();
  piVar5 = aiStack_2d8;
  (*extraout_x8_02)();
  func_0x000108c78ecc();
  piVar4 = aiStack_2d8;
  func_0x000108c76af8();
  func_0x000107c34e74(uStack_198);
  if ((bool)uVar2) {
    return piVar3;
  }
  ___stack_chk_fail();
  func_0x000108c78dd0();
  iVar1 = piVar4[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar5 = iVar1;
  return (int *)0x1;
}



/* Entry: 108c7659c; end: 108c7661f;  */

int * FUN_108c7659c(void)

{
  int iVar1;
  undefined1 in_ZR;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int aiStack_168 [2];
  undefined1 uStack_15f;
  undefined8 uStack_28;
  
  func_0x000108c78cd0();
  piVar2 = aiStack_168;
  uStack_28 = extraout_x8;
  FUN_108c7683c(piVar2);
  uStack_15f = 1;
  func_0x000108c78f68();
  func_0x000108c78d94();
  piVar4 = aiStack_168;
  (*extraout_x8_00)();
  func_0x000108c78ecc();
  piVar3 = aiStack_168;
  func_0x000108c76af8();
  func_0x000107c34e74(uStack_28);
  if ((bool)in_ZR) {
    return piVar2;
  }
  ___stack_chk_fail();
  func_0x000108c78dd0();
  iVar1 = piVar3[0x2c];
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *piVar4 = iVar1;
  return (int *)0x1;
}



/* Entry: 108c76620; end: 108c76627;  */

undefined8 FUN_108c76620(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  *param_2 = iVar1;
  return 1;
}



/* Entry: 108c76628; end: 108c766bf;  */

undefined8 * FUN_108c76628(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [9];
  undefined1 uStack_387;
  undefined4 uStack_384;
  long lStack_378;
  undefined1 uStack_368;
  undefined1 auStack_360 [65];
  undefined1 uStack_31f;
  undefined8 uStack_1e8;
  undefined1 auStack_1a0 [24];
  byte bStack_188;
  undefined8 uStack_180;
  undefined8 uStack_38;
  
  uVar3 = (uint)auStack_1a0;
  puVar4 = auStack_1a0;
  uVar6 = param_2;
  func_0x000108c78cd0();
  uStack_38 = extraout_x8;
  func_0x000107c2a944(auStack_1a0);
  if ((**(byte **)(unaff_x19 + 0x18) & 1) == 0) {
    func_0x000107c34ec8();
  }
  uStack_180 = param_2;
  func_0x000108c78f68();
  func_0x000108c78d94();
  func_0x000108c78eec();
  func_0x000108c78ec0();
  FUN_108c76e2c();
  func_0x000107c34e74(uStack_38);
  if ((bool)in_ZR) {
    return (undefined8 *)(ulong)(uVar3 & bStack_188);
  }
  ___stack_chk_fail();
  FUN_108c76e2c(auStack_1a0);
  func_0x000108c78dd0();
  func_0x000108c78cd0();
  uStack_1e8 = extraout_x8_00;
  func_0x000107c27ccc(auStack_390);
  uVar8 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar8 = param_3 | 1;
    uStack_31f = 1;
  }
  lVar5 = *(long *)(puVar4 + 0x18);
  uVar2 = *(char *)(lVar5 + 0x150) == '\x01';
  if ((bool)uVar2) {
    lVar1 = lVar5 + 0xb8;
    func_0x000107c27cc8();
    uStack_368 = 0;
    uStack_387 = 1;
    uStack_384 = (undefined4)lVar5;
    *(undefined1 *)(*(long *)(puVar4 + 0x18) + 0x150) = 0;
    lStack_378 = lVar1;
  }
  func_0x000108c76e68(auStack_3c8,auStack_360,uVar6,
                      param_3 & 0xffffffff00000000 | uVar8 & 0xffffffff);
  func_0x000108c78df8();
  if ((int)uVar8 == 0) {
    func_0x000108c78f68();
    func_0x000108c78d94();
    (*extraout_x8_01)();
    puVar7 = (undefined8 *)(puVar4 + 0x20);
    func_0x000105395128(puVar7,auStack_390);
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  func_0x000104c01224();
  func_0x000107c34e74(uStack_1e8);
  if ((bool)uVar2) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = auStack_390;
  func_0x000104c01224();
  func_0x000108c78dd0();
  puVar7 = (undefined8 *)(puVar4 + 0x18);
  *puVar7 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,*(undefined8 *)(puVar4 + 0x28))
  ;
  func_0x000104c4f4f4(puVar4 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,puVar4 + 0x38);
  *puVar7 = &PTR_DAT_1107ec4f0;
  if (puVar4[0x20] == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar7;
}



/* Entry: 108c766c0; end: 108c767cf;  */

undefined8 * FUN_108c766c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auStack_228 [56];
  undefined1 auStack_1f0 [9];
  undefined1 uStack_1e7;
  undefined4 uStack_1e4;
  long lStack_1d8;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [65];
  undefined1 uStack_17f;
  undefined8 uStack_48;
  
  func_0x000108c78cd0();
  uStack_48 = extraout_x8;
  func_0x000107c27ccc(auStack_1f0);
  uVar6 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar6 = param_3 | 1;
    uStack_17f = 1;
  }
  lVar3 = *(long *)(unaff_x19 + 0x18);
  uVar2 = *(char *)(lVar3 + 0x150) == '\x01';
  if ((bool)uVar2) {
    lVar1 = lVar3 + 0xb8;
    func_0x000107c27cc8();
    uStack_1c8 = 0;
    uStack_1e7 = 1;
    uStack_1e4 = (undefined4)lVar3;
    *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x150) = 0;
    lStack_1d8 = lVar1;
  }
  func_0x000108c76e68(auStack_228,auStack_1c0,param_2,
                      param_3 & 0xffffffff00000000 | uVar6 & 0xffffffff);
  func_0x000108c78df8();
  if ((int)uVar6 == 0) {
    func_0x000108c78f68();
    func_0x000108c78d94();
    (*extraout_x8_00)();
    puVar5 = (undefined8 *)(unaff_x19 + 0x20);
    func_0x000105395128(puVar5,auStack_1f0);
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  func_0x000104c01224();
  func_0x000107c34e74(uStack_48);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar4 = auStack_1f0;
  func_0x000104c01224();
  func_0x000108c78dd0();
  puVar5 = (undefined8 *)(puVar4 + 0x18);
  *puVar5 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))(plRam0000000113815c70,*(undefined8 *)(puVar4 + 0x28))
  ;
  func_0x000104c4f4f4(puVar4 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,puVar4 + 0x38);
  *puVar5 = &PTR_DAT_1107ec4f0;
  if (puVar4[0x20] == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar5;
}



/* Entry: 108c767d0; end: 108c76807;  */

undefined8 * FUN_108c767d0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_DAT_1107ec498;
  (**(code **)(*plRam0000000113815c70 + 0x40))
            (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x28));
  func_0x000104c4f4f4(param_1 + 0x78);
  (**(code **)(*plRam0000000113815c70 + 0x78))(plRam0000000113815c70,param_1 + 0x38);
  *puVar1 = &PTR_DAT_1107ec4f0;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return puVar1;
}



/* Entry: 108c76808; end: 108c76837;  */

undefined8 FUN_108c76808(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x000108c78cbc();
  (**(code **)(extraout_x8 + 0x78))();
  return param_1;
}



/* Entry: 108c76838; end: 108c7683b;  */

undefined8 * FUN_108c76838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe378;
  func_0x000104c00298(param_1 + 0xb);
  return param_1;
}



/* Entry: 108c7683c; end: 108c7688f;  */

undefined8 * FUN_108c7683c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110abe378;
  param_1[2] = param_1;
  param_1[3] = param_1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  func_0x000107c27c68(param_1 + 0xb);
  return param_1;
}



/* Entry: 108c76890; end: 108c768a3;  */

void FUN_108c76890(void)

{
  func_0x000108c76af8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c768a4; end: 108c7691f;  */

undefined8 FUN_108c768a4(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x28));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x18);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x138);
  }
  else {
    *(undefined1 *)(unaff_x19 + 9) = 0;
    *(undefined1 *)(unaff_x19 + 0x138) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_108c76a70();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x18);
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return 1;
}



/* Entry: 108c76920; end: 108c76963;  */

void FUN_108c76920(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x000107c34ea8();
  *(undefined1 *)(param_4 + 0x50) = 0;
  func_0x000107c34e70();
  func_0x000107c34ec0();
  *(undefined8 *)(unaff_x19 + 0x38) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x30) = param_2;
  *(undefined8 *)(unaff_x19 + 0x48) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x40) = param_3;
  *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  func_0x000108c76a94();
  if ((int)unaff_x19 != 0) {
    func_0x000108c78db0();
                    /* WARNING: Could not recover jumptable at 0x000108c78e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108c76964; end: 108c76977;  */

undefined8 FUN_108c76964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c76978; end: 108c76a2f;  */

void FUN_108c76978(code *UNRECOVERED_JUMPTABLE)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_48;
  
  func_0x000108c78d28();
  plVar3 = plRam0000000113815c70;
  uVar1 = UNRECOVERED_JUMPTABLE[9] == (code)0x1;
  if (((bool)uVar1) && (((byte)UNRECOVERED_JUMPTABLE[8] & 1) == 0)) {
    uStack_228 = 2;
    uStack_220 = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x30);
  func_0x000108c78d3c();
  (**(code **)(*plVar3 + 0x108))(plVar3,uVar5,&uStack_228,uVar4,UNRECOVERED_JUMPTABLE,0);
  if ((int)plVar3 != 0) {
    plVar3 = plRam0000000113815c70;
    func_0x000108c78c78();
  }
  func_0x000107c34e74(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(plVar3 + 10) = 1;
  func_0x000108c78dc0();
  iVar2 = (int)plVar3;
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar2 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c76a30; end: 108c76a6f;  */

void FUN_108c76a30(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c76a70; end: 108c76b27;  */

undefined8 FUN_108c76a70(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c27c90(param_1 + 0x58);
  if (*(long *)(param_1 + 0x88) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0x58);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x58);
  }
  return 0;
}



/* Entry: 108c76b28; end: 108c76b2b;  */

undefined8 * FUN_108c76b28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe450;
  func_0x000104c00298(param_1 + 0x10);
  func_0x000107c27c64(param_1 + 5);
  return param_1;
}



/* Entry: 108c76b2c; end: 108c76b3f;  */

void FUN_108c76b2c(void)

{
  FUN_108c76e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c76b40; end: 108c76be7;  */

void FUN_108c76b40(long param_1)

{
  int iVar1;
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x50));
    func_0x000108c78f5c();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x160);
  }
  else {
    FUN_108c76c58(unaff_x19 + 0x18);
    *(undefined1 *)(unaff_x19 + 0x160) = *unaff_x21;
    func_0x000107c27c90(unaff_x19 + 0x80);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      *(undefined1 *)(unaff_x19 + 0x90) = 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    if (*(char *)(unaff_x19 + 0x18) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x91) = 1;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x138) = 0;
      *(undefined8 *)(unaff_x19 + 0x140) = 0;
    }
    iVar1 = (int)unaff_x19 + 0x80;
    func_0x000107c27c98();
    if (iVar1 == 0) {
      return;
    }
    func_0x000108c78f5c();
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return;
}



/* Entry: 108c76be8; end: 108c76c17;  */

void FUN_108c76be8(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x8d) = 1;
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



/* Entry: 108c76c18; end: 108c76c57;  */

void FUN_108c76c18(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c76c58; end: 108c76e2b;  */

/* WARNING: Possible PIC construction at 0x000108c76d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c76d80) */

void FUN_108c76c58(undefined1 *param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  char *unaff_x19;
  undefined1 *unaff_x20;
  long *plVar5;
  ulong uVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  int aiStack_130 [14];
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [56];
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    plVar5 = (long *)(param_1 + 0x10);
    if (*plVar5 != 0) {
      if (*param_2 == '\x01') {
        puVar3 = param_1;
        func_0x000108c78cbc();
        (**(code **)(extraout_x8_00 + 0x1b0))();
        func_0x000107c27c84(auStack_88,puVar3);
        func_0x000107c27d44(auStack_f8,plVar5);
        func_0x000108c78ee0();
        iVar2 = aiStack_130[0];
        func_0x000108c78ed8();
        if (iVar2 == 0) {
          uVar4 = uVar6;
          func_0x000107c3033c(uVar6,auStack_f8);
          if ((uVar4 & 1) == 0) {
            func_0x00010b4d12e4(auStack_148,uVar6);
            func_0x000105394120(aiStack_130,0xd,auStack_148);
            func_0x000107c27c88(auStack_88,aiStack_130);
            func_0x000108c78ed8();
            func_0x000108c78e5c();
          }
        }
        else {
          func_0x000108c78ee0();
        }
        func_0x000107c27d48(auStack_f8);
        if (iVar2 != 0) {
          func_0x000107c27cbc(auStack_88);
          *param_2 = aiStack_130[0] == 0;
          *param_1 = aiStack_130[0] == 0;
          func_0x000108c78ed8();
          *(undefined8 *)(param_1 + 0x10) = 0;
          return;
        }
        unaff_x30 = 0x108c76d80;
        register0x00000008 = (BADSPACEBASE *)auStack_150;
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        unaff_x29 = puVar1;
      }
      else {
        *param_1 = 0;
      }
      if (*plVar5 != 0) {
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(char **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x000100608b94();
        (**(code **)(extraout_x8 + 0xc0))();
        *plVar5 = 0;
      }
      return;
    }
    if (((param_1[0x19] != '\x01') || (param_1[0x1a] == '\x01')) &&
       (*param_1 = 0, (param_1[0x18] & 1) == 0)) {
      *param_2 = '\0';
    }
  }
  return;
}



/* Entry: 108c76e2c; end: 108c76ed3;  */

undefined8 * FUN_108c76e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe450;
  func_0x000104c00298(param_1 + 0x10);
  func_0x000107c27c64(param_1 + 5);
  return param_1;
}



/* Entry: 108c76ed4; end: 108c76edb;  */

void FUN_108c76ed4(void)

{
  return;
}



/* Entry: 108c76edc; end: 108c76f03;  */

void FUN_108c76edc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108c78d70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110abe538;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108c76f04; end: 108c76f23;  */

void FUN_108c76f04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110abe538;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c76f24; end: 108c76fb3;  */

void FUN_108c76f24(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_21;
  
  lVar1 = *(long *)(param_2 + 8);
  FUN_108c76fe8(auStack_60,*param_3,lVar1 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(lVar1 + 0x10);
  }
  *param_1 = auStack_60[0];
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_38;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0xc) = uStack_30;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x000108c78ea0();
  return;
}



/* Entry: 108c76fb4; end: 108c76fdb;  */

void FUN_108c76fb4(undefined8 param_1)

{
  func_0x000108c78e8c();
  func_0x000108c78e0c(param_1,&PTR_DAT_110abe598);
  func_0x000108c78da0();
  return;
}



/* Entry: 108c76fdc; end: 108c76fe7;  */

undefined ** FUN_108c76fdc(void)

{
  return &PTR_DAT_110abe598;
}



/* Entry: 108c76fe8; end: 108c771e3;  */

void FUN_108c76fe8(undefined8 param_1,long *param_2,undefined8 *param_3,long *param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined8 uStack_58;
  
  plVar3 = param_2;
  func_0x000108c78cd0();
  *(undefined1 *)param_4 = 1;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar3 + 0x28))();
  uVar2 = (uint)plVar3 == 0x17;
  if ((uint)plVar3 < 0x18) {
    (**(code **)(*plRam0000000113815c70 + 0x148))(&lStack_c0);
    puVar1 = auStack_b8 + 1;
    if (lStack_c0 != 0) {
      puVar1 = puStack_b0;
    }
    func_0x000107c30350(param_2,puVar1);
    plVar3 = (long *)(auStack_b8 + 1 + ((ulong)auStack_b8 & 0xff));
    if (lStack_c0 != 0) {
      plVar3 = (long *)(puStack_b0 + (long)auStack_b8);
    }
    uVar2 = plVar3 == param_2;
    if (!(bool)uVar2) {
      func_0x000108c78d94(plRam0000000113815c70);
      param_4 = (long *)0x3b;
      (*extraout_x8_00)();
    }
    puVar4 = (undefined8 *)0x1;
    plVar3 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0xf0))(plRam0000000113815c70,&lStack_c0,1);
    auStack_d8[0] = *param_3;
    *param_3 = plVar3;
    param_2 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x1b0))();
    func_0x000107c27c84();
    func_0x000107c27c64(auStack_d8);
    func_0x000107c28118();
  }
  else {
    puVar4 = (undefined8 *)0x100000;
    func_0x000107c27d4c(&lStack_c0,param_3,0x100000);
    func_0x000107c3035c(param_2,&lStack_c0);
    if ((int)param_2 == 0) {
      func_0x000107c278b8(auStack_d8,"Failed to serialize message");
      puVar4 = auStack_d8;
      param_2 = (long *)0xd;
      func_0x000105394120();
      func_0x000108c78e5c();
      param_4 = plVar3;
    }
    else {
      func_0x000108c78cbc();
      (**(code **)(extraout_x8_01 + 0x1b0))();
      func_0x000107c27c84();
      param_4 = plVar3;
    }
    func_0x000107c27d50();
  }
  func_0x000107c34e74(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c78e5c();
  plVar3 = &lStack_c0;
  func_0x000107c27d50();
  func_0x000108c78dd0();
  if (plVar3[3] != 0) {
    func_0x000108c78d94(plRam0000000113815c70);
    (*extraout_x8_02)();
  }
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,param_2);
  plVar3[3] = (long)param_2;
  FUN_108c78084(plVar3 + 4,puVar4);
  plVar3[8] = (long)param_4;
  *plVar3 = (long)FUN_108c780e4;
  *(undefined4 *)(plVar3 + 1) = param_5;
  return;
}



/* Entry: 108c771e4; end: 108c7727b;  */

void FUN_108c771e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *extraout_x8;
  
  if (param_1[3] != 0) {
    func_0x000108c78d94(plRam0000000113815c70);
    (*extraout_x8)();
  }
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,param_2);
  param_1[3] = param_2;
  FUN_108c78084(param_1 + 4,param_3);
  param_1[8] = param_4;
  *param_1 = FUN_108c780e4;
  *(undefined4 *)(param_1 + 1) = param_5;
  return;
}



/* Entry: 108c7727c; end: 108c77293;  */

undefined8 * FUN_108c7727c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abe8b8;
  func_0x000104c00298(param_1 + 0xe);
  func_0x000107c27c64(param_1 + 3);
  return param_1;
}



/* Entry: 108c77294; end: 108c7737f;  */

void FUN_108c77294(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    lVar1 = param_1;
    func_0x000108c78f38();
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x51) = 1;
    *(int *)(param_1 + 0x54) = (int)lVar1;
    *(undefined8 *)(param_1 + 0x60) = unaff_x20;
  }
  func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
  func_0x000108c78e38();
  func_0x000108c78cbc();
  func_0x000108c78f00();
  if (*(char *)(param_1 + 0x952) == '\x01') {
    func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
    func_0x000108c78e38();
  }
  if (*(char *)(param_1 + 0x950) == '\x01') {
    func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
    func_0x000108c78e38();
  }
  if (*(char *)(param_1 + 0x951) == '\x01') {
    func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
    func_0x000108c78e38();
  }
  func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
  func_0x000108c78e38();
  *(undefined1 *)(param_1 + 0x960) = 1;
  func_0x000108c78e04();
  FUN_108c782b4(param_1,0);
  return;
}



/* Entry: 108c77380; end: 108c77493;  */

void FUN_108c77380(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long alStack_68 [7];
  
  uVar4 = param_3;
  if ((param_3 >> 0x20 & 1) != 0) {
    uVar4 = param_3 | 1;
    *(undefined1 *)(param_1 + 0x481) = 1;
  }
  func_0x000108c76e68(alStack_68,param_1 + 0x440,param_2,
                      param_3 & 0xffffffff00000000 | uVar4 & 0xffffffff);
  iVar2 = (int)alStack_68[0];
  func_0x000107c27cbc(alStack_68);
  if (iVar2 != 0) {
    func_0x000108c78d94(puRam0000000113815c70);
    (*extraout_x8)();
  }
  do {
    func_0x000107c34e94();
  } while (extraout_w10 != 0);
  if (*(char *)(param_1 + 0x201) == '\x01') {
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = lVar3 + 0xb8;
    func_0x000107c27cc8();
    *(undefined1 *)(param_1 + 0x438) = 0;
    *(undefined1 *)(param_1 + 0x419) = 1;
    *(int *)(param_1 + 0x41c) = (int)lVar3;
    *(long *)(param_1 + 0x428) = lVar1;
    *(undefined1 *)(param_1 + 0x201) = 0;
  }
  if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
    alStack_68[0] = param_1 + 0x968;
    func_0x000108c78f00(*puRam0000000113815c70);
    if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x950) = 1;
      func_0x000108c78e04();
      return;
    }
    func_0x000108c78e04();
  }
  func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8_00)();
  return;
}



/* Entry: 108c77494; end: 108c775ab;  */

void FUN_108c77494(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  long lStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x000108c78cd0();
  *(undefined1 *)(param_1 + 0x631) = 1;
  lVar1 = param_1 + 0x768;
  ppuStack_48 = &PTR_FUN_110abeba0;
  pppuStack_30 = &ppuStack_48;
  lStack_40 = param_1;
  uStack_28 = extraout_x8;
  func_0x000108c78e30(lVar1,*(undefined8 *)(param_1 + 0x20),&ppuStack_48,param_1 + 0x600);
  pppuVar4 = &ppuStack_48;
  FUN_108c783f0();
  *(long *)(unaff_x19 + 0x638) = lVar1;
  do {
    func_0x000107c34e94();
    uVar3 = SUB84(pppuVar4,0);
  } while (extraout_w10 != 0);
  uVar2 = *(char *)(unaff_x19 + 0x201) == '\x01';
  if ((bool)uVar2) {
    func_0x000108c78f38();
    *(undefined1 *)(unaff_x19 + 0x628) = 0;
    *(undefined1 *)(unaff_x19 + 0x609) = 1;
    *(undefined4 *)(unaff_x19 + 0x60c) = uVar3;
    *(long *)(unaff_x19 + 0x618) = lVar1;
    *(undefined1 *)(unaff_x19 + 0x201) = 0;
  }
  if ((*(byte *)(unaff_x19 + 0x960) & 1) != 0) {
    while( true ) {
      func_0x000108c78d94(*(undefined8 *)(unaff_x19 + 0x10));
      (*extraout_x8_00)();
LAB_108c77540:
      func_0x000107c34e74(uStack_28);
      if ((bool)uVar2) break;
      ___stack_chk_fail();
LAB_108c77588:
      FUN_108c787d0(&lStack_50);
    }
    return;
  }
  lStack_50 = unaff_x19 + 0x968;
  func_0x000108c78cbc();
  (**(code **)(extraout_x8_01 + 0x80))();
  if ((*(byte *)(unaff_x19 + 0x960) & 1) != 0) goto LAB_108c77588;
  *(undefined1 *)(unaff_x19 + 0x951) = 1;
  FUN_108c787d0(&lStack_50);
  goto LAB_108c77540;
}



/* Entry: 108c775ac; end: 108c77627;  */

void FUN_108c775ac(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  int extraout_w10;
  
  *(undefined8 *)(param_1 + 0x7c0) = param_2;
  do {
    func_0x000107c34e94();
  } while (extraout_w10 != 0);
  if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
    func_0x000108c78cbc();
    func_0x000108c78f00();
    if ((*(byte *)(param_1 + 0x960) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x952) = 1;
      func_0x000108c78e04();
      return;
    }
    func_0x000108c78e04();
  }
  func_0x000108c78d94(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8)();
  return;
}



/* Entry: 108c77628; end: 108c7764b;  */

void FUN_108c77628(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x958);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (long)param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 108c7764c; end: 108c776a7;  */

undefined8 * FUN_108c7764c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_DAT_110abe630;
  param_1[7] = 0;
  param_1[8] = param_1;
  param_1[9] = param_1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  func_0x000107c27c68(param_1 + 0x11);
  return param_1;
}



/* Entry: 108c776a8; end: 108c776bb;  */

void FUN_108c776a8(void)

{
  func_0x000108c78714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c776bc; end: 108c7772f;  */

void FUN_108c776bc(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x58));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x48);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x168);
  }
  else {
    func_0x000108c78f50();
    *(undefined1 *)(unaff_x19 + 0x168) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_108c77840();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x48);
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return;
}



/* Entry: 108c77730; end: 108c77773;  */

void FUN_108c77730(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x000107c34ea8();
  *(undefined1 *)(param_4 + 0x80) = 0;
  func_0x000107c34e70();
  func_0x000107c34ec0();
  *(undefined8 *)(unaff_x19 + 0x68) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x60) = param_2;
  *(undefined8 *)(unaff_x19 + 0x78) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x70) = param_3;
  *(undefined8 *)(unaff_x19 + 0x58) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x50) = param_1;
  func_0x000108c77878();
  if ((int)unaff_x19 != 0) {
    func_0x000108c78db0();
                    /* WARNING: Could not recover jumptable at 0x000108c78e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108c77774; end: 108c77797;  */

undefined8 FUN_108c77774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108c77798; end: 108c777ff;  */

void FUN_108c77798(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  long *unaff_x23;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [480];
  undefined8 uStack_48;
  
  func_0x000107c34e78();
  func_0x000107c27cac();
  lVar2 = unaff_x19 + 0x30;
  func_0x000107c27cb4(lVar2,auStack_228,auStack_230);
  func_0x000107c34ebc();
  func_0x000107c34e90();
  func_0x000107c34e80();
  if ((int)lVar2 != 0) {
    lVar2 = *unaff_x23;
    func_0x000108c78c78();
  }
  func_0x000107c34e74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0x80) = 1;
  func_0x000108c78dc0();
  iVar1 = (int)lVar2;
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c77800; end: 108c7783f;  */

void FUN_108c77800(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c77840; end: 108c77943;  */

undefined8 FUN_108c77840(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c27c90(param_1 + 0x88);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0xb8) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xb0) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0x88);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x88);
  }
  return 0;
}



/* Entry: 108c77944; end: 108c77957;  */

void FUN_108c77944(void)

{
  func_0x000108c786e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c77958; end: 108c779d3;  */

void FUN_108c77958(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x000107c34e9c();
  if (*(char *)(param_1 + 0x98) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x70));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x60);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x180);
  }
  else {
    func_0x000107c27c7c(unaff_x19 + 8);
    *(undefined1 *)(unaff_x19 + 0x180) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_108c77ad4();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x60);
  }
  func_0x000108c78d00();
  func_0x000108c78d58();
  return;
}



/* Entry: 108c779d4; end: 108c77a1b;  */

void FUN_108c779d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x000107c34ea8();
  *(undefined1 *)(param_4 + 0x98) = 0;
  func_0x000107c34e70();
  func_0x000107c34ec0();
  *(undefined8 *)(unaff_x19 + 0x90) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x88) = param_3;
  *(undefined8 *)(unaff_x19 + 0x80) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x78) = param_2;
  *(undefined8 *)(unaff_x19 + 0x70) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x68) = param_1;
  func_0x000108c77b0c();
  if ((int)unaff_x19 != 0) {
    func_0x000108c78db0();
                    /* WARNING: Could not recover jumptable at 0x000108c78e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108c77a1c; end: 108c77a3b;  */

undefined8 FUN_108c77a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108c77a3c; end: 108c77a93;  */

void FUN_108c77a3c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x23;
  undefined8 uStack_48;
  
  func_0x000107c34e78();
  func_0x000107c27cb8();
  func_0x000107c34ebc();
  func_0x000107c34e90();
  func_0x000107c34e80();
  if ((int)param_1 != 0) {
    param_1 = *unaff_x23;
    func_0x000108c78c78();
  }
  func_0x000107c34e74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_1 + 0x98) = 1;
  func_0x000108c78dc0();
  iVar1 = (int)param_1;
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c77a94; end: 108c77ad3;  */

void FUN_108c77a94(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  func_0x000108c78dc0();
  func_0x000108c78d3c();
  func_0x000108c78c54();
  if (iVar1 == 0) {
    return;
  }
  func_0x000108c78c98();
                    /* WARNING: Could not recover jumptable at 0x000108c78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


