/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a044920; end: 10a044a8b;  */

ulong FUN_10a044920(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a044a8c(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a044a44);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a044920(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a044a8c; end: 10a044acf;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */
/* WARNING: Removing unreachable block (ram,0x00010ad044c8) */

undefined1  [16] FUN_10a044a8c(ulong *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong *unaff_x19;
  undefined *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if ((long *)*param_2 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f6337b7);
    puVar5 = (undefined8 *)&UNK_10f6334ac;
    FUN_109ffde64();
    if ((ulong)param_3 >> 0x3c == 0) {
      lVar7 = (long)param_3 << 4;
      __Znwm(lVar7);
      auVar19._8_8_ = param_3;
      auVar19._0_8_ = lVar7;
      return auVar19;
    }
    func_0x000109ffded8();
    uVar10 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar10;
    uVar11 = param_3[3];
    uVar10 = param_3[2];
    uVar13 = param_3[5];
    uVar12 = param_3[4];
    uVar14 = param_3[6];
    uVar16 = param_3[9];
    uVar15 = param_3[8];
    puVar5[7] = param_3[7];
    puVar5[6] = uVar14;
    puVar5[9] = uVar16;
    puVar5[8] = uVar15;
    puVar5[3] = uVar11;
    puVar5[2] = uVar10;
    puVar5[5] = uVar13;
    puVar5[4] = uVar12;
    uVar11 = param_3[0xb];
    uVar10 = param_3[10];
    uVar13 = param_3[0xd];
    uVar12 = param_3[0xc];
    uVar15 = param_3[0xf];
    uVar14 = param_3[0xe];
    puVar5[0x10] = param_3[0x10];
    puVar5[0xd] = uVar13;
    puVar5[0xc] = uVar12;
    puVar5[0xf] = uVar15;
    puVar5[0xe] = uVar14;
    puVar5[0xb] = uVar11;
    puVar5[10] = uVar10;
    if (puVar5 == param_3) {
      uVar11 = param_3[0x15];
      uVar10 = param_3[0x14];
      puVar5[0x16] = param_3[0x16];
      puVar5[0x15] = uVar11;
      puVar5[0x14] = uVar10;
      uVar11 = param_3[0x1b];
      uVar10 = param_3[0x1a];
      puVar5[0x1c] = param_3[0x1c];
      puVar5[0x1b] = uVar11;
      puVar5[0x1a] = uVar10;
      puVar9 = param_3;
    }
    else {
      FUN_10a044c8c(puVar5 + 0x11,param_3[0x11],param_3[0x12],
                    ((long)(param_3[0x12] - param_3[0x11]) >> 3) * -0x5555555555555555);
      uVar11 = param_3[0x15];
      uVar10 = param_3[0x14];
      puVar5[0x16] = param_3[0x16];
      puVar5[0x15] = uVar11;
      puVar5[0x14] = uVar10;
      FUN_10a044e88(puVar5 + 0x17,param_3[0x17],param_3[0x18],param_3[0x18] - param_3[0x17]);
      uVar11 = param_3[0x1b];
      uVar10 = param_3[0x1a];
      puVar5[0x1c] = param_3[0x1c];
      puVar5[0x1b] = uVar11;
      puVar5[0x1a] = uVar10;
      FUN_10a044ffc(puVar5 + 0x1d,param_3[0x1d],param_3[0x1e],
                    ((long)(param_3[0x1e] - param_3[0x1d]) >> 3) * 0x4ec4ec4ec4ec4ec5);
      *(undefined4 *)(puVar5 + 0x24) = *(undefined4 *)(param_3 + 0x24);
      FUN_10a0454ac(puVar5 + 0x20,param_3[0x22],0);
      *(undefined4 *)(puVar5 + 0x29) = *(undefined4 *)(param_3 + 0x29);
      puVar9 = (undefined8 *)param_3[0x27];
      FUN_10a045d6c(puVar5 + 0x25,puVar9,0);
    }
    uVar11 = param_3[0x2b];
    uVar10 = param_3[0x2a];
    uVar13 = param_3[0x2d];
    uVar12 = param_3[0x2c];
    puVar5[0x2e] = param_3[0x2e];
    puVar5[0x2b] = uVar11;
    puVar5[0x2a] = uVar10;
    puVar5[0x2d] = uVar13;
    puVar5[0x2c] = uVar12;
    auVar20._8_8_ = puVar9;
    auVar20._0_8_ = puVar5;
    return auVar20;
  }
  puVar6 = (undefined *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = &UNK_10f6a2cf4;
  }
  else {
    ___cxa_demangle(puVar6,0,0,&stack0xffffffffffffffcc);
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = puVar6;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = puVar6;
  puVar8 = puVar6;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar3) {
    func_0x000107c2b040();
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar3 = (undefined *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar3 != 0) {
        puVar5 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uVar10 = 0x1132ffc28;
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar5;
        puVar5[1] = 0x434948504152475f;
        *puVar5 = 0x45524f43534e454c;
        puVar5[3] = 0x525f595a414c5f54;
        puVar5[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar5 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar5 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar5 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        uVar11 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        auVar21._8_8_ = uVar10;
        auVar21._0_8_ = uVar11;
        return auVar21;
      }
    }
    auVar18._8_8_ = puVar8;
    auVar18._0_8_ = puVar3;
    return auVar18;
  }
  if (puVar3 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar3;
    puVar4 = param_1;
    if (puVar3 == (undefined *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar3 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar3 | 7) + 1);
    }
    puVar4 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  func_0x000107c610b8(puVar4,puVar6,puVar3);
  puVar8 = puVar6;
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar4 + (long)puVar3) = 0;
  auVar17._8_8_ = puVar8;
  auVar17._0_8_ = param_1;
  return auVar17;
}



/* Entry: 10a044ad0; end: 10a044c3b;  */

undefined1  [16] FUN_10a044ad0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar1 = (long)param_2 << 4;
    __Znwm(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000109ffded8();
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[6];
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  uVar8 = param_2[0xf];
  uVar7 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  if (param_1 == param_2) {
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
    puVar2 = param_2;
  }
  else {
    FUN_10a044c8c(param_1 + 0x11,param_2[0x11],param_2[0x12],
                  ((long)(param_2[0x12] - param_2[0x11]) >> 3) * -0x5555555555555555);
    uVar4 = param_2[0x15];
    uVar3 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
    FUN_10a044e88(param_1 + 0x17,param_2[0x17],param_2[0x18],param_2[0x18] - param_2[0x17]);
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
    FUN_10a044ffc(param_1 + 0x1d,param_2[0x1d],param_2[0x1e],
                  ((long)(param_2[0x1e] - param_2[0x1d]) >> 3) * 0x4ec4ec4ec4ec4ec5);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    FUN_10a0454ac(param_1 + 0x20,param_2[0x22],0);
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
    puVar2 = (undefined8 *)param_2[0x27];
    FUN_10a045d6c(param_1 + 0x25,puVar2,0);
  }
  uVar4 = param_2[0x2b];
  uVar3 = param_2[0x2a];
  uVar6 = param_2[0x2d];
  uVar5 = param_2[0x2c];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2b] = uVar4;
  param_1[0x2a] = uVar3;
  param_1[0x2d] = uVar6;
  param_1[0x2c] = uVar5;
  auVar11._8_8_ = puVar2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a044c3c; end: 10a044c8b;  */

void FUN_10a044c3c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a0467c4(uVar1);
    lVar2 = uVar1 + 0x178;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a046684();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a044c8c; end: 10a044de7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044c8c(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar8 = param_1[2];
  puVar14 = (undefined8 *)*param_1;
  if ((ulong)((lVar8 - (long)puVar14 >> 3) * -0x5555555555555555) < param_4) {
    puVar16 = param_1;
    uVar11 = param_2;
    uVar5 = param_3;
    uVar13 = param_4;
    if (puVar14 != (undefined8 *)0x0) {
      param_1[1] = puVar14;
      __ZdlPv();
      lVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar16 = puVar14;
    }
    if (0xaaaaaaaaaaaaaaa < param_4) {
      FUN_10a044e30();
      if (uVar11 < 0xaaaaaaaaaaaaaab) {
        puVar14 = puVar16;
        FUN_10a044e44();
        *puVar16 = puVar14;
        puVar16[1] = puVar14;
        puVar16[2] = puVar14 + uVar11 * 3;
        return;
      }
      FUN_10a044e30();
      puVar1 = (ulong *)&UNK_10f6334ac;
      FUN_109ffde64();
      if (0xaaaaaaaaaaaaaaa < uVar11) {
        func_0x000109ffded8();
        uVar9 = puVar1[2];
        puVar15 = (ulong *)*puVar1;
        if (uVar9 - (long)puVar15 < uVar13) {
          puVar17 = puVar1;
          uVar10 = uVar11;
          uVar6 = uVar5;
          uVar7 = uVar13;
          if (puVar15 != (ulong *)0x0) {
            puVar1[1] = (ulong)puVar15;
            puVar17 = puVar15;
            __ZdlPv();
            uVar9 = 0;
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
          }
          if ((long)uVar13 < 0) {
            FUN_10a044fe8();
            if (-1 < (long)uVar10) {
              uVar11 = uVar10;
              __Znwm();
              *puVar17 = uVar11;
              puVar17[1] = uVar11;
              puVar17[2] = uVar11 + uVar10;
              return;
            }
            FUN_10a044fe8();
            plVar2 = (long *)&UNK_10f6334ac;
            FUN_109ffde64();
            lVar8 = *plVar2;
            plVar4 = plVar2;
            if ((ulong)((plVar2[2] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar7) {
              plVar3 = plVar2;
              FUN_10a0451f4();
              if (0x276276276276276 < uVar7) {
                FUN_10a045450();
                plVar2[1] = (long)puVar15;
                __Unwind_Resume();
                plVar2[1] = 0x276276276276276;
                __Unwind_Resume();
                if (*plVar3 != 0) {
                  FUN_10a045404();
                  __ZdlPv(*plVar3);
                  *plVar3 = 0;
                  plVar3[1] = 0;
                  plVar3[2] = 0;
                }
                return;
              }
              lVar8 = plVar2[2] - *plVar2 >> 3;
              uVar11 = lVar8 * -0x6276276276276276;
              if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
                uVar11 = uVar7;
              }
              if (0x13b13b13b13b13a < (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
                uVar11 = 0x276276276276276;
              }
              func_0x00010a04522c(plVar2,uVar11);
              FUN_10a045278(plVar2,uVar10,uVar6,plVar2[1]);
            }
            else {
              lVar12 = plVar2[1];
              if (uVar7 <= (ulong)((lVar12 - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                if (uVar10 != uVar6) {
                  do {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (lVar8,uVar10);
                    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(uVar10 + 0x18);
                    uVar19 = *(undefined8 *)(uVar10 + 0x38);
                    uVar18 = *(undefined8 *)(uVar10 + 0x30);
                    uVar21 = *(undefined8 *)(uVar10 + 0x48);
                    uVar20 = *(undefined8 *)(uVar10 + 0x40);
                    uVar23 = *(undefined8 *)(uVar10 + 0x58);
                    uVar22 = *(undefined8 *)(uVar10 + 0x50);
                    *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(uVar10 + 0x60);
                    *(undefined8 *)(lVar8 + 0x48) = uVar21;
                    *(undefined8 *)(lVar8 + 0x40) = uVar20;
                    *(undefined8 *)(lVar8 + 0x58) = uVar23;
                    *(undefined8 *)(lVar8 + 0x50) = uVar22;
                    *(undefined8 *)(lVar8 + 0x38) = uVar19;
                    *(undefined8 *)(lVar8 + 0x30) = uVar18;
                    uVar18 = *(undefined8 *)(uVar10 + 0x20);
                    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(uVar10 + 0x28);
                    *(undefined8 *)(lVar8 + 0x20) = uVar18;
                    uVar10 = uVar10 + 0x68;
                    lVar8 = lVar8 + 0x68;
                  } while (uVar10 != uVar6);
                  lVar12 = plVar2[1];
                }
                for (; lVar12 != lVar8; lVar12 = lVar12 + -0x68) {
                }
                plVar2[1] = lVar8;
                return;
              }
              uVar11 = uVar10 + (lVar12 - lVar8);
              if (lVar12 != lVar8) {
                do {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (lVar8,uVar10);
                  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(uVar10 + 0x18);
                  uVar19 = *(undefined8 *)(uVar10 + 0x38);
                  uVar18 = *(undefined8 *)(uVar10 + 0x30);
                  uVar21 = *(undefined8 *)(uVar10 + 0x48);
                  uVar20 = *(undefined8 *)(uVar10 + 0x40);
                  uVar23 = *(undefined8 *)(uVar10 + 0x58);
                  uVar22 = *(undefined8 *)(uVar10 + 0x50);
                  *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(uVar10 + 0x60);
                  *(undefined8 *)(lVar8 + 0x48) = uVar21;
                  *(undefined8 *)(lVar8 + 0x40) = uVar20;
                  *(undefined8 *)(lVar8 + 0x58) = uVar23;
                  *(undefined8 *)(lVar8 + 0x50) = uVar22;
                  *(undefined8 *)(lVar8 + 0x38) = uVar19;
                  *(undefined8 *)(lVar8 + 0x30) = uVar18;
                  uVar18 = *(undefined8 *)(uVar10 + 0x20);
                  *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(uVar10 + 0x28);
                  *(undefined8 *)(lVar8 + 0x20) = uVar18;
                  uVar10 = uVar10 + 0x68;
                  lVar8 = lVar8 + 0x68;
                } while (uVar10 != uVar11);
                lVar12 = plVar2[1];
              }
              FUN_10a045278(plVar2,uVar11,uVar6,lVar12);
            }
            plVar2[1] = (long)plVar4;
            return;
          }
          uVar10 = uVar9 * 2;
          if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
            uVar10 = uVar13;
          }
          if (0x3ffffffffffffffe < uVar9) {
            uVar10 = 0x7fffffffffffffff;
          }
          FUN_10a044fac(puVar1,uVar10);
          uVar13 = puVar1[1];
          lVar8 = uVar5 - uVar11;
          if (lVar8 != 0) {
            _memmove(uVar13,uVar11,lVar8);
          }
          uVar13 = uVar13 + lVar8;
        }
        else {
          puVar17 = (ulong *)puVar1[1];
          if ((ulong)((long)puVar17 - (long)puVar15) < uVar13) {
            lVar8 = uVar11 + ((long)puVar17 - (long)puVar15);
            if (puVar17 != puVar15) {
              _memmove(puVar15,uVar11);
              puVar17 = (ulong *)puVar1[1];
            }
            lVar12 = uVar5 - lVar8;
            if (lVar12 != 0) {
              _memmove(puVar17,lVar8,lVar12);
            }
            uVar13 = (long)puVar17 + lVar12;
          }
          else {
            lVar8 = uVar5 - uVar11;
            if (lVar8 != 0) {
              _memmove(puVar15,uVar11,lVar8);
            }
            uVar13 = (long)puVar15 + lVar8;
          }
        }
        puVar1[1] = uVar13;
        return;
      }
      __Znwm(uVar11 * 0x18);
      return;
    }
    uVar11 = (lVar8 >> 3) * 0x5555555555555556;
    if (uVar11 < param_4 || uVar11 - param_4 == 0) {
      uVar11 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar8 >> 3) * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    FUN_10a044de8(param_1,uVar11);
    lVar12 = param_1[1];
    lVar8 = param_3 - param_2;
    if (lVar8 != 0) {
      _memmove(lVar12,param_2,lVar8 + -4);
    }
    lVar12 = lVar12 + lVar8;
  }
  else {
    puVar16 = (undefined8 *)param_1[1];
    lVar8 = (long)puVar16 - (long)puVar14;
    if ((ulong)((lVar8 >> 3) * -0x5555555555555555) < param_4) {
      if (puVar16 != puVar14) {
        _memmove(puVar14,param_2,lVar8 + -4);
        puVar16 = (undefined8 *)param_1[1];
      }
      lVar12 = param_3 - (param_2 + lVar8);
      if (lVar12 != 0) {
        _memmove(puVar16,param_2 + lVar8,lVar12 + -4);
      }
      lVar12 = (long)puVar16 + lVar12;
    }
    else {
      lVar12 = param_3 - param_2;
      if (lVar12 != 0) {
        _memmove(puVar14,param_2,lVar12 + -4);
      }
      lVar12 = (long)puVar14 + lVar12;
    }
  }
  param_1[1] = lVar12;
  return;
}



/* Entry: 10a044de8; end: 10a044e2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044de8(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar2 = param_1;
    FUN_10a044e44();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2 * 3);
    return;
  }
  FUN_10a044e30();
  puVar1 = (ulong *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    uVar7 = puVar1[2];
    puVar10 = (ulong *)*puVar1;
    if (uVar7 - (long)puVar10 < param_4) {
      puVar12 = puVar1;
      uVar8 = param_2;
      uVar5 = param_3;
      uVar6 = param_4;
      if (puVar10 != (ulong *)0x0) {
        puVar1[1] = (ulong)puVar10;
        puVar12 = puVar10;
        __ZdlPv();
        uVar7 = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      if ((long)param_4 < 0) {
        FUN_10a044fe8();
        if (-1 < (long)uVar8) {
          uVar7 = uVar8;
          __Znwm();
          *puVar12 = uVar7;
          puVar12[1] = uVar7;
          puVar12[2] = uVar7 + uVar8;
          return;
        }
        FUN_10a044fe8();
        plVar2 = (long *)&UNK_10f6334ac;
        FUN_109ffde64();
        lVar9 = *plVar2;
        plVar4 = plVar2;
        if ((ulong)((plVar2[2] - lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar6) {
          plVar3 = plVar2;
          FUN_10a0451f4();
          if (0x276276276276276 < uVar6) {
            FUN_10a045450();
            plVar2[1] = (long)puVar10;
            __Unwind_Resume();
            plVar2[1] = 0x276276276276276;
            __Unwind_Resume();
            if (*plVar3 != 0) {
              FUN_10a045404();
              __ZdlPv(*plVar3);
              *plVar3 = 0;
              plVar3[1] = 0;
              plVar3[2] = 0;
            }
            return;
          }
          lVar9 = plVar2[2] - *plVar2 >> 3;
          uVar7 = lVar9 * -0x6276276276276276;
          if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
            uVar7 = uVar6;
          }
          if (0x13b13b13b13b13a < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
            uVar7 = 0x276276276276276;
          }
          func_0x00010a04522c(plVar2,uVar7);
          FUN_10a045278(plVar2,uVar8,uVar5,plVar2[1]);
        }
        else {
          lVar11 = plVar2[1];
          if (uVar6 <= (ulong)((lVar11 - lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            if (uVar8 != uVar5) {
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (lVar9,uVar8);
                *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(uVar8 + 0x18);
                uVar14 = *(undefined8 *)(uVar8 + 0x38);
                uVar13 = *(undefined8 *)(uVar8 + 0x30);
                uVar16 = *(undefined8 *)(uVar8 + 0x48);
                uVar15 = *(undefined8 *)(uVar8 + 0x40);
                uVar18 = *(undefined8 *)(uVar8 + 0x58);
                uVar17 = *(undefined8 *)(uVar8 + 0x50);
                *(undefined4 *)(lVar9 + 0x60) = *(undefined4 *)(uVar8 + 0x60);
                *(undefined8 *)(lVar9 + 0x48) = uVar16;
                *(undefined8 *)(lVar9 + 0x40) = uVar15;
                *(undefined8 *)(lVar9 + 0x58) = uVar18;
                *(undefined8 *)(lVar9 + 0x50) = uVar17;
                *(undefined8 *)(lVar9 + 0x38) = uVar14;
                *(undefined8 *)(lVar9 + 0x30) = uVar13;
                uVar13 = *(undefined8 *)(uVar8 + 0x20);
                *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(uVar8 + 0x28);
                *(undefined8 *)(lVar9 + 0x20) = uVar13;
                uVar8 = uVar8 + 0x68;
                lVar9 = lVar9 + 0x68;
              } while (uVar8 != uVar5);
              lVar11 = plVar2[1];
            }
            for (; lVar11 != lVar9; lVar11 = lVar11 + -0x68) {
            }
            plVar2[1] = lVar9;
            return;
          }
          uVar7 = uVar8 + (lVar11 - lVar9);
          if (lVar11 != lVar9) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,uVar8);
              *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(uVar8 + 0x18);
              uVar14 = *(undefined8 *)(uVar8 + 0x38);
              uVar13 = *(undefined8 *)(uVar8 + 0x30);
              uVar16 = *(undefined8 *)(uVar8 + 0x48);
              uVar15 = *(undefined8 *)(uVar8 + 0x40);
              uVar18 = *(undefined8 *)(uVar8 + 0x58);
              uVar17 = *(undefined8 *)(uVar8 + 0x50);
              *(undefined4 *)(lVar9 + 0x60) = *(undefined4 *)(uVar8 + 0x60);
              *(undefined8 *)(lVar9 + 0x48) = uVar16;
              *(undefined8 *)(lVar9 + 0x40) = uVar15;
              *(undefined8 *)(lVar9 + 0x58) = uVar18;
              *(undefined8 *)(lVar9 + 0x50) = uVar17;
              *(undefined8 *)(lVar9 + 0x38) = uVar14;
              *(undefined8 *)(lVar9 + 0x30) = uVar13;
              uVar13 = *(undefined8 *)(uVar8 + 0x20);
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(uVar8 + 0x28);
              *(undefined8 *)(lVar9 + 0x20) = uVar13;
              uVar8 = uVar8 + 0x68;
              lVar9 = lVar9 + 0x68;
            } while (uVar8 != uVar7);
            lVar11 = plVar2[1];
          }
          FUN_10a045278(plVar2,uVar7,uVar5,lVar11);
        }
        plVar2[1] = (long)plVar4;
        return;
      }
      uVar8 = uVar7 * 2;
      if (uVar8 < param_4 || uVar8 - param_4 == 0) {
        uVar8 = param_4;
      }
      if (0x3ffffffffffffffe < uVar7) {
        uVar8 = 0x7fffffffffffffff;
      }
      FUN_10a044fac(puVar1,uVar8);
      uVar7 = puVar1[1];
      lVar9 = param_3 - param_2;
      if (lVar9 != 0) {
        _memmove(uVar7,param_2,lVar9);
      }
      uVar7 = uVar7 + lVar9;
    }
    else {
      puVar12 = (ulong *)puVar1[1];
      if ((ulong)((long)puVar12 - (long)puVar10) < param_4) {
        lVar9 = param_2 + ((long)puVar12 - (long)puVar10);
        if (puVar12 != puVar10) {
          _memmove(puVar10,param_2);
          puVar12 = (ulong *)puVar1[1];
        }
        lVar11 = param_3 - lVar9;
        if (lVar11 != 0) {
          _memmove(puVar12,lVar9,lVar11);
        }
        uVar7 = (long)puVar12 + lVar11;
      }
      else {
        lVar9 = param_3 - param_2;
        if (lVar9 != 0) {
          _memmove(puVar10,param_2,lVar9);
        }
        uVar7 = (long)puVar10 + lVar9;
      }
    }
    puVar1[1] = uVar7;
    return;
  }
  __Znwm(param_2 * 0x18);
  return;
}



/* Entry: 10a044e30; end: 10a044e43;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044e30(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = (ulong *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  uVar7 = puVar1[2];
  puVar10 = (ulong *)*puVar1;
  if (uVar7 - (long)puVar10 < param_4) {
    puVar12 = puVar1;
    uVar8 = param_2;
    uVar5 = param_3;
    uVar6 = param_4;
    if (puVar10 != (ulong *)0x0) {
      puVar1[1] = (ulong)puVar10;
      puVar12 = puVar10;
      __ZdlPv();
      uVar7 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    if ((long)param_4 < 0) {
      FUN_10a044fe8();
      if (-1 < (long)uVar8) {
        uVar7 = uVar8;
        __Znwm();
        *puVar12 = uVar7;
        puVar12[1] = uVar7;
        puVar12[2] = uVar7 + uVar8;
        return;
      }
      FUN_10a044fe8();
      plVar2 = (long *)&UNK_10f6334ac;
      FUN_109ffde64();
      lVar9 = *plVar2;
      plVar4 = plVar2;
      if ((ulong)((plVar2[2] - lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar6) {
        plVar3 = plVar2;
        FUN_10a0451f4();
        if (0x276276276276276 < uVar6) {
          FUN_10a045450();
          plVar2[1] = (long)puVar10;
          __Unwind_Resume();
          plVar2[1] = 0x276276276276276;
          __Unwind_Resume();
          if (*plVar3 != 0) {
            FUN_10a045404();
            __ZdlPv(*plVar3);
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3[2] = 0;
          }
          return;
        }
        lVar9 = plVar2[2] - *plVar2 >> 3;
        uVar7 = lVar9 * -0x6276276276276276;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
          uVar7 = 0x276276276276276;
        }
        func_0x00010a04522c(plVar2,uVar7);
        FUN_10a045278(plVar2,uVar8,uVar5,plVar2[1]);
      }
      else {
        lVar11 = plVar2[1];
        if (uVar6 <= (ulong)((lVar11 - lVar9 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          if (uVar8 != uVar5) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,uVar8);
              *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(uVar8 + 0x18);
              uVar14 = *(undefined8 *)(uVar8 + 0x38);
              uVar13 = *(undefined8 *)(uVar8 + 0x30);
              uVar16 = *(undefined8 *)(uVar8 + 0x48);
              uVar15 = *(undefined8 *)(uVar8 + 0x40);
              uVar18 = *(undefined8 *)(uVar8 + 0x58);
              uVar17 = *(undefined8 *)(uVar8 + 0x50);
              *(undefined4 *)(lVar9 + 0x60) = *(undefined4 *)(uVar8 + 0x60);
              *(undefined8 *)(lVar9 + 0x48) = uVar16;
              *(undefined8 *)(lVar9 + 0x40) = uVar15;
              *(undefined8 *)(lVar9 + 0x58) = uVar18;
              *(undefined8 *)(lVar9 + 0x50) = uVar17;
              *(undefined8 *)(lVar9 + 0x38) = uVar14;
              *(undefined8 *)(lVar9 + 0x30) = uVar13;
              uVar13 = *(undefined8 *)(uVar8 + 0x20);
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(uVar8 + 0x28);
              *(undefined8 *)(lVar9 + 0x20) = uVar13;
              uVar8 = uVar8 + 0x68;
              lVar9 = lVar9 + 0x68;
            } while (uVar8 != uVar5);
            lVar11 = plVar2[1];
          }
          for (; lVar11 != lVar9; lVar11 = lVar11 + -0x68) {
          }
          plVar2[1] = lVar9;
          return;
        }
        uVar7 = uVar8 + (lVar11 - lVar9);
        if (lVar11 != lVar9) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9,uVar8);
            *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(uVar8 + 0x18);
            uVar14 = *(undefined8 *)(uVar8 + 0x38);
            uVar13 = *(undefined8 *)(uVar8 + 0x30);
            uVar16 = *(undefined8 *)(uVar8 + 0x48);
            uVar15 = *(undefined8 *)(uVar8 + 0x40);
            uVar18 = *(undefined8 *)(uVar8 + 0x58);
            uVar17 = *(undefined8 *)(uVar8 + 0x50);
            *(undefined4 *)(lVar9 + 0x60) = *(undefined4 *)(uVar8 + 0x60);
            *(undefined8 *)(lVar9 + 0x48) = uVar16;
            *(undefined8 *)(lVar9 + 0x40) = uVar15;
            *(undefined8 *)(lVar9 + 0x58) = uVar18;
            *(undefined8 *)(lVar9 + 0x50) = uVar17;
            *(undefined8 *)(lVar9 + 0x38) = uVar14;
            *(undefined8 *)(lVar9 + 0x30) = uVar13;
            uVar13 = *(undefined8 *)(uVar8 + 0x20);
            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(uVar8 + 0x28);
            *(undefined8 *)(lVar9 + 0x20) = uVar13;
            uVar8 = uVar8 + 0x68;
            lVar9 = lVar9 + 0x68;
          } while (uVar8 != uVar7);
          lVar11 = plVar2[1];
        }
        FUN_10a045278(plVar2,uVar7,uVar5,lVar11);
      }
      plVar2[1] = (long)plVar4;
      return;
    }
    uVar8 = uVar7 * 2;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar7) {
      uVar8 = 0x7fffffffffffffff;
    }
    FUN_10a044fac(puVar1,uVar8);
    uVar7 = puVar1[1];
    lVar9 = param_3 - param_2;
    if (lVar9 != 0) {
      _memmove(uVar7,param_2,lVar9);
    }
    uVar7 = uVar7 + lVar9;
  }
  else {
    puVar12 = (ulong *)puVar1[1];
    if ((ulong)((long)puVar12 - (long)puVar10) < param_4) {
      lVar9 = param_2 + ((long)puVar12 - (long)puVar10);
      if (puVar12 != puVar10) {
        _memmove(puVar10,param_2);
        puVar12 = (ulong *)puVar1[1];
      }
      lVar11 = param_3 - lVar9;
      if (lVar11 != 0) {
        _memmove(puVar12,lVar9,lVar11);
      }
      uVar7 = (long)puVar12 + lVar11;
    }
    else {
      lVar9 = param_3 - param_2;
      if (lVar9 != 0) {
        _memmove(puVar10,param_2,lVar9);
      }
      uVar7 = (long)puVar10 + lVar9;
    }
  }
  puVar1[1] = uVar7;
  return;
}



/* Entry: 10a044e44; end: 10a044e87;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044e44(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  uVar6 = param_1[2];
  puVar9 = (ulong *)*param_1;
  if (uVar6 - (long)puVar9 < param_4) {
    puVar11 = param_1;
    uVar7 = param_2;
    uVar4 = param_3;
    uVar5 = param_4;
    if (puVar9 != (ulong *)0x0) {
      param_1[1] = (ulong)puVar9;
      puVar11 = puVar9;
      __ZdlPv();
      uVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_4 < 0) {
      FUN_10a044fe8();
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
        __Znwm();
        *puVar11 = uVar6;
        puVar11[1] = uVar6;
        puVar11[2] = uVar6 + uVar7;
        return;
      }
      FUN_10a044fe8();
      plVar1 = (long *)&UNK_10f6334ac;
      FUN_109ffde64();
      lVar8 = *plVar1;
      plVar3 = plVar1;
      if ((ulong)((plVar1[2] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar5) {
        plVar2 = plVar1;
        FUN_10a0451f4();
        if (0x276276276276276 < uVar5) {
          FUN_10a045450();
          plVar1[1] = (long)puVar9;
          __Unwind_Resume();
          plVar1[1] = 0x276276276276276;
          __Unwind_Resume();
          if (*plVar2 != 0) {
            FUN_10a045404();
            __ZdlPv(*plVar2);
            *plVar2 = 0;
            plVar2[1] = 0;
            plVar2[2] = 0;
          }
          return;
        }
        lVar8 = plVar1[2] - *plVar1 >> 3;
        uVar6 = lVar8 * -0x6276276276276276;
        if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
          uVar6 = uVar5;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
          uVar6 = 0x276276276276276;
        }
        func_0x00010a04522c(plVar1,uVar6);
        FUN_10a045278(plVar1,uVar7,uVar4,plVar1[1]);
      }
      else {
        lVar10 = plVar1[1];
        if (uVar5 <= (ulong)((lVar10 - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          if (uVar7 != uVar4) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar8,uVar7);
              *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(uVar7 + 0x18);
              uVar13 = *(undefined8 *)(uVar7 + 0x38);
              uVar12 = *(undefined8 *)(uVar7 + 0x30);
              uVar15 = *(undefined8 *)(uVar7 + 0x48);
              uVar14 = *(undefined8 *)(uVar7 + 0x40);
              uVar17 = *(undefined8 *)(uVar7 + 0x58);
              uVar16 = *(undefined8 *)(uVar7 + 0x50);
              *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(uVar7 + 0x60);
              *(undefined8 *)(lVar8 + 0x48) = uVar15;
              *(undefined8 *)(lVar8 + 0x40) = uVar14;
              *(undefined8 *)(lVar8 + 0x58) = uVar17;
              *(undefined8 *)(lVar8 + 0x50) = uVar16;
              *(undefined8 *)(lVar8 + 0x38) = uVar13;
              *(undefined8 *)(lVar8 + 0x30) = uVar12;
              uVar12 = *(undefined8 *)(uVar7 + 0x20);
              *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(uVar7 + 0x28);
              *(undefined8 *)(lVar8 + 0x20) = uVar12;
              uVar7 = uVar7 + 0x68;
              lVar8 = lVar8 + 0x68;
            } while (uVar7 != uVar4);
            lVar10 = plVar1[1];
          }
          for (; lVar10 != lVar8; lVar10 = lVar10 + -0x68) {
          }
          plVar1[1] = lVar8;
          return;
        }
        uVar6 = uVar7 + (lVar10 - lVar8);
        if (lVar10 != lVar8) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar8,uVar7);
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(uVar7 + 0x18);
            uVar13 = *(undefined8 *)(uVar7 + 0x38);
            uVar12 = *(undefined8 *)(uVar7 + 0x30);
            uVar15 = *(undefined8 *)(uVar7 + 0x48);
            uVar14 = *(undefined8 *)(uVar7 + 0x40);
            uVar17 = *(undefined8 *)(uVar7 + 0x58);
            uVar16 = *(undefined8 *)(uVar7 + 0x50);
            *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(uVar7 + 0x60);
            *(undefined8 *)(lVar8 + 0x48) = uVar15;
            *(undefined8 *)(lVar8 + 0x40) = uVar14;
            *(undefined8 *)(lVar8 + 0x58) = uVar17;
            *(undefined8 *)(lVar8 + 0x50) = uVar16;
            *(undefined8 *)(lVar8 + 0x38) = uVar13;
            *(undefined8 *)(lVar8 + 0x30) = uVar12;
            uVar12 = *(undefined8 *)(uVar7 + 0x20);
            *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(uVar7 + 0x28);
            *(undefined8 *)(lVar8 + 0x20) = uVar12;
            uVar7 = uVar7 + 0x68;
            lVar8 = lVar8 + 0x68;
          } while (uVar7 != uVar6);
          lVar10 = plVar1[1];
        }
        FUN_10a045278(plVar1,uVar6,uVar4,lVar10);
      }
      plVar1[1] = (long)plVar3;
      return;
    }
    uVar7 = uVar6 * 2;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x3ffffffffffffffe < uVar6) {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_10a044fac(param_1,uVar7);
    uVar6 = param_1[1];
    lVar8 = param_3 - param_2;
    if (lVar8 != 0) {
      _memmove(uVar6,param_2,lVar8);
    }
    uVar6 = uVar6 + lVar8;
  }
  else {
    puVar11 = (ulong *)param_1[1];
    if ((ulong)((long)puVar11 - (long)puVar9) < param_4) {
      lVar8 = param_2 + ((long)puVar11 - (long)puVar9);
      if (puVar11 != puVar9) {
        _memmove(puVar9,param_2);
        puVar11 = (ulong *)param_1[1];
      }
      lVar10 = param_3 - lVar8;
      if (lVar10 != 0) {
        _memmove(puVar11,lVar8,lVar10);
      }
      uVar6 = (long)puVar11 + lVar10;
    }
    else {
      lVar8 = param_3 - param_2;
      if (lVar8 != 0) {
        _memmove(puVar9,param_2,lVar8);
      }
      uVar6 = (long)puVar9 + lVar8;
    }
  }
  param_1[1] = uVar6;
  return;
}



/* Entry: 10a044e88; end: 10a044fab;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044e88(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar5 = param_1[2];
  plVar9 = (long *)*param_1;
  if (uVar5 - (long)plVar9 < param_4) {
    plVar11 = param_1;
    lVar8 = param_2;
    lVar2 = param_3;
    uVar6 = param_4;
    if (plVar9 != (long *)0x0) {
      param_1[1] = (long)plVar9;
      plVar11 = plVar9;
      __ZdlPv();
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_4 < 0) {
      FUN_10a044fe8();
      if (-1 < lVar8) {
        lVar2 = lVar8;
        __Znwm();
        *plVar11 = lVar2;
        plVar11[1] = lVar2;
        plVar11[2] = lVar2 + lVar8;
        return;
      }
      FUN_10a044fe8();
      plVar11 = (long *)&UNK_10f6334ac;
      FUN_109ffde64();
      lVar7 = *plVar11;
      plVar4 = plVar11;
      if ((ulong)((plVar11[2] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5) < uVar6) {
        plVar3 = plVar11;
        FUN_10a0451f4();
        if (0x276276276276276 < uVar6) {
          FUN_10a045450();
          plVar11[1] = (long)plVar9;
          __Unwind_Resume();
          plVar11[1] = 0x276276276276276;
          __Unwind_Resume();
          if (*plVar3 != 0) {
            FUN_10a045404();
            __ZdlPv(*plVar3);
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3[2] = 0;
          }
          return;
        }
        lVar7 = plVar11[2] - *plVar11 >> 3;
        uVar5 = lVar7 * -0x6276276276276276;
        if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
          uVar5 = uVar6;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
          uVar5 = 0x276276276276276;
        }
        func_0x00010a04522c(plVar11,uVar5);
        FUN_10a045278(plVar11,lVar8,lVar2,plVar11[1]);
      }
      else {
        lVar10 = plVar11[1];
        if (uVar6 <= (ulong)((lVar10 - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          if (lVar8 != lVar2) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,lVar8);
              *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
              uVar13 = *(undefined8 *)(lVar8 + 0x38);
              uVar12 = *(undefined8 *)(lVar8 + 0x30);
              uVar15 = *(undefined8 *)(lVar8 + 0x48);
              uVar14 = *(undefined8 *)(lVar8 + 0x40);
              uVar17 = *(undefined8 *)(lVar8 + 0x58);
              uVar16 = *(undefined8 *)(lVar8 + 0x50);
              *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(lVar8 + 0x60);
              *(undefined8 *)(lVar7 + 0x48) = uVar15;
              *(undefined8 *)(lVar7 + 0x40) = uVar14;
              *(undefined8 *)(lVar7 + 0x58) = uVar17;
              *(undefined8 *)(lVar7 + 0x50) = uVar16;
              *(undefined8 *)(lVar7 + 0x38) = uVar13;
              *(undefined8 *)(lVar7 + 0x30) = uVar12;
              uVar12 = *(undefined8 *)(lVar8 + 0x20);
              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
              *(undefined8 *)(lVar7 + 0x20) = uVar12;
              lVar8 = lVar8 + 0x68;
              lVar7 = lVar7 + 0x68;
            } while (lVar8 != lVar2);
            lVar10 = plVar11[1];
          }
          for (; lVar10 != lVar7; lVar10 = lVar10 + -0x68) {
          }
          plVar11[1] = lVar7;
          return;
        }
        lVar1 = lVar8 + (lVar10 - lVar7);
        if (lVar10 != lVar7) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar7,lVar8);
            *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
            uVar13 = *(undefined8 *)(lVar8 + 0x38);
            uVar12 = *(undefined8 *)(lVar8 + 0x30);
            uVar15 = *(undefined8 *)(lVar8 + 0x48);
            uVar14 = *(undefined8 *)(lVar8 + 0x40);
            uVar17 = *(undefined8 *)(lVar8 + 0x58);
            uVar16 = *(undefined8 *)(lVar8 + 0x50);
            *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(lVar8 + 0x60);
            *(undefined8 *)(lVar7 + 0x48) = uVar15;
            *(undefined8 *)(lVar7 + 0x40) = uVar14;
            *(undefined8 *)(lVar7 + 0x58) = uVar17;
            *(undefined8 *)(lVar7 + 0x50) = uVar16;
            *(undefined8 *)(lVar7 + 0x38) = uVar13;
            *(undefined8 *)(lVar7 + 0x30) = uVar12;
            uVar12 = *(undefined8 *)(lVar8 + 0x20);
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
            *(undefined8 *)(lVar7 + 0x20) = uVar12;
            lVar8 = lVar8 + 0x68;
            lVar7 = lVar7 + 0x68;
          } while (lVar8 != lVar1);
          lVar10 = plVar11[1];
        }
        FUN_10a045278(plVar11,lVar1,lVar2,lVar10);
      }
      plVar11[1] = (long)plVar4;
      return;
    }
    uVar6 = uVar5 * 2;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0x3ffffffffffffffe < uVar5) {
      uVar6 = 0x7fffffffffffffff;
    }
    FUN_10a044fac(param_1,uVar6);
    lVar8 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar8,param_2,param_3);
    }
    lVar8 = lVar8 + param_3;
  }
  else {
    plVar11 = (long *)param_1[1];
    if ((ulong)((long)plVar11 - (long)plVar9) < param_4) {
      lVar8 = param_2 + ((long)plVar11 - (long)plVar9);
      if (plVar11 != plVar9) {
        _memmove(plVar9,param_2);
        plVar11 = (long *)param_1[1];
      }
      param_3 = param_3 - lVar8;
      if (param_3 != 0) {
        _memmove(plVar11,lVar8,param_3);
      }
      lVar8 = (long)plVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(plVar9,param_2,param_3);
      }
      lVar8 = (long)plVar9 + param_3;
    }
  }
  param_1[1] = lVar8;
  return;
}



/* Entry: 10a044fac; end: 10a044fe7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044fac(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (-1 < param_2) {
    lVar6 = param_2;
    __Znwm();
    *param_1 = lVar6;
    param_1[1] = lVar6;
    param_1[2] = lVar6 + param_2;
    return;
  }
  FUN_10a044fe8();
  plVar2 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar6 = *plVar2;
  plVar4 = plVar2;
  if ((ulong)((plVar2[2] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_4) {
    plVar3 = plVar2;
    FUN_10a0451f4();
    if (0x276276276276276 < param_4) {
      FUN_10a045450();
      plVar2[1] = unaff_x23;
      __Unwind_Resume();
      plVar2[1] = 0x276276276276276;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10a045404();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar5 = lVar6 * -0x6276276276276276;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar5 = 0x276276276276276;
    }
    func_0x00010a04522c(plVar2,uVar5);
    FUN_10a045278(plVar2,param_2,param_3,plVar2[1]);
  }
  else {
    lVar7 = plVar2[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar9 = *(undefined8 *)(param_2 + 0x38);
          uVar8 = *(undefined8 *)(param_2 + 0x30);
          uVar11 = *(undefined8 *)(param_2 + 0x48);
          uVar10 = *(undefined8 *)(param_2 + 0x40);
          uVar13 = *(undefined8 *)(param_2 + 0x58);
          uVar12 = *(undefined8 *)(param_2 + 0x50);
          *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(param_2 + 0x60);
          *(undefined8 *)(lVar6 + 0x48) = uVar11;
          *(undefined8 *)(lVar6 + 0x40) = uVar10;
          *(undefined8 *)(lVar6 + 0x58) = uVar13;
          *(undefined8 *)(lVar6 + 0x50) = uVar12;
          *(undefined8 *)(lVar6 + 0x38) = uVar9;
          *(undefined8 *)(lVar6 + 0x30) = uVar8;
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar6 + 0x20) = uVar8;
          param_2 = param_2 + 0x68;
          lVar6 = lVar6 + 0x68;
        } while (param_2 != param_3);
        lVar7 = plVar2[1];
      }
      for (; lVar7 != lVar6; lVar7 = lVar7 + -0x68) {
      }
      plVar2[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(param_2 + 0x48);
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        uVar13 = *(undefined8 *)(param_2 + 0x58);
        uVar12 = *(undefined8 *)(param_2 + 0x50);
        *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        *(undefined8 *)(lVar6 + 0x48) = uVar11;
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        *(undefined8 *)(lVar6 + 0x58) = uVar13;
        *(undefined8 *)(lVar6 + 0x50) = uVar12;
        *(undefined8 *)(lVar6 + 0x38) = uVar9;
        *(undefined8 *)(lVar6 + 0x30) = uVar8;
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        param_2 = param_2 + 0x68;
        lVar6 = lVar6 + 0x68;
      } while (param_2 != lVar1);
      lVar7 = plVar2[1];
    }
    FUN_10a045278(plVar2,lVar1,param_3,lVar7);
  }
  plVar2[1] = (long)plVar4;
  return;
}



/* Entry: 10a044fe8; end: 10a044ffb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044fe8(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar2 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  lVar6 = *plVar2;
  plVar4 = plVar2;
  if ((ulong)((plVar2[2] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_4) {
    plVar3 = plVar2;
    FUN_10a0451f4();
    if (0x276276276276276 < param_4) {
      FUN_10a045450();
      plVar2[1] = unaff_x23;
      __Unwind_Resume();
      plVar2[1] = 0x276276276276276;
      __Unwind_Resume();
      if (*plVar3 != 0) {
        FUN_10a045404();
        __ZdlPv(*plVar3);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
      return;
    }
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar5 = lVar6 * -0x6276276276276276;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
      uVar5 = 0x276276276276276;
    }
    func_0x00010a04522c(plVar2,uVar5);
    FUN_10a045278(plVar2,param_2,param_3,plVar2[1]);
  }
  else {
    lVar7 = plVar2[1];
    if (param_4 <= (ulong)((lVar7 - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
          *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar9 = *(undefined8 *)(param_2 + 0x38);
          uVar8 = *(undefined8 *)(param_2 + 0x30);
          uVar11 = *(undefined8 *)(param_2 + 0x48);
          uVar10 = *(undefined8 *)(param_2 + 0x40);
          uVar13 = *(undefined8 *)(param_2 + 0x58);
          uVar12 = *(undefined8 *)(param_2 + 0x50);
          *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(param_2 + 0x60);
          *(undefined8 *)(lVar6 + 0x48) = uVar11;
          *(undefined8 *)(lVar6 + 0x40) = uVar10;
          *(undefined8 *)(lVar6 + 0x58) = uVar13;
          *(undefined8 *)(lVar6 + 0x50) = uVar12;
          *(undefined8 *)(lVar6 + 0x38) = uVar9;
          *(undefined8 *)(lVar6 + 0x30) = uVar8;
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar6 + 0x20) = uVar8;
          param_2 = param_2 + 0x68;
          lVar6 = lVar6 + 0x68;
        } while (param_2 != param_3);
        lVar7 = plVar2[1];
      }
      for (; lVar7 != lVar6; lVar7 = lVar7 + -0x68) {
      }
      plVar2[1] = lVar6;
      return;
    }
    lVar1 = param_2 + (lVar7 - lVar6);
    if (lVar7 != lVar6) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar6,param_2);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        uVar11 = *(undefined8 *)(param_2 + 0x48);
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        uVar13 = *(undefined8 *)(param_2 + 0x58);
        uVar12 = *(undefined8 *)(param_2 + 0x50);
        *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        *(undefined8 *)(lVar6 + 0x48) = uVar11;
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        *(undefined8 *)(lVar6 + 0x58) = uVar13;
        *(undefined8 *)(lVar6 + 0x50) = uVar12;
        *(undefined8 *)(lVar6 + 0x38) = uVar9;
        *(undefined8 *)(lVar6 + 0x30) = uVar8;
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        param_2 = param_2 + 0x68;
        lVar6 = lVar6 + 0x68;
      } while (param_2 != lVar1);
      lVar7 = plVar2[1];
    }
    FUN_10a045278(plVar2,lVar1,param_3,lVar7);
  }
  plVar2[1] = (long)plVar4;
  return;
}



/* Entry: 10a044ffc; end: 10a0451f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0451b4) */

void FUN_10a044ffc(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *param_1;
  plVar3 = param_1;
  if ((ulong)((param_1[2] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_4) {
    plVar2 = param_1;
    FUN_10a0451f4();
    if (0x276276276276276 < param_4) {
      FUN_10a045450();
      param_1[1] = unaff_x23;
      __Unwind_Resume();
      param_1[1] = 0x276276276276276;
      __Unwind_Resume();
      if (*plVar2 != 0) {
        FUN_10a045404();
        __ZdlPv(*plVar2);
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar5 * -0x6276276276276276;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar4 = 0x276276276276276;
    }
    func_0x00010a04522c(param_1,uVar4);
    FUN_10a045278(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1];
    if (param_4 <= (ulong)((lVar6 - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      if (param_2 != param_3) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          uVar8 = *(undefined8 *)(param_2 + 0x38);
          uVar7 = *(undefined8 *)(param_2 + 0x30);
          uVar10 = *(undefined8 *)(param_2 + 0x48);
          uVar9 = *(undefined8 *)(param_2 + 0x40);
          uVar12 = *(undefined8 *)(param_2 + 0x58);
          uVar11 = *(undefined8 *)(param_2 + 0x50);
          *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(param_2 + 0x60);
          *(undefined8 *)(lVar5 + 0x48) = uVar10;
          *(undefined8 *)(lVar5 + 0x40) = uVar9;
          *(undefined8 *)(lVar5 + 0x58) = uVar12;
          *(undefined8 *)(lVar5 + 0x50) = uVar11;
          *(undefined8 *)(lVar5 + 0x38) = uVar8;
          *(undefined8 *)(lVar5 + 0x30) = uVar7;
          uVar7 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          param_2 = param_2 + 0x68;
          lVar5 = lVar5 + 0x68;
        } while (param_2 != param_3);
        lVar6 = param_1[1];
      }
      for (; lVar6 != lVar5; lVar6 = lVar6 + -0x68) {
      }
      param_1[1] = lVar5;
      return;
    }
    lVar1 = param_2 + (lVar6 - lVar5);
    if (lVar6 != lVar5) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar5,param_2);
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x38);
        uVar7 = *(undefined8 *)(param_2 + 0x30);
        uVar10 = *(undefined8 *)(param_2 + 0x48);
        uVar9 = *(undefined8 *)(param_2 + 0x40);
        uVar12 = *(undefined8 *)(param_2 + 0x58);
        uVar11 = *(undefined8 *)(param_2 + 0x50);
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(param_2 + 0x60);
        *(undefined8 *)(lVar5 + 0x48) = uVar10;
        *(undefined8 *)(lVar5 + 0x40) = uVar9;
        *(undefined8 *)(lVar5 + 0x58) = uVar12;
        *(undefined8 *)(lVar5 + 0x50) = uVar11;
        *(undefined8 *)(lVar5 + 0x38) = uVar8;
        *(undefined8 *)(lVar5 + 0x30) = uVar7;
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        param_2 = param_2 + 0x68;
        lVar5 = lVar5 + 0x68;
      } while (param_2 != lVar1);
      lVar6 = param_1[1];
    }
    FUN_10a045278(param_1,lVar1,param_3,lVar6);
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10a0451f4; end: 10a045277;  */

void FUN_10a0451f4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a045404();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a045278; end: 10a045317;  */

long FUN_10a045278(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x68) {
    FUN_10a045318(param_4,param_2);
    param_4 = lStack_38 + 0x68;
  }
  uStack_48 = 1;
  FUN_10a04538c(&uStack_60);
  return param_4;
}



/* Entry: 10a045318; end: 10a04538b;  */

undefined8 * FUN_10a045318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 10a04538c; end: 10a0453bf;  */

long FUN_10a04538c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a0453c0(param_1);
  }
  return param_1;
}



/* Entry: 10a0453c0; end: 10a045403;  */

/* WARNING: Removing unreachable block (ram,0x00010a0453ec) */

void FUN_10a0453c0(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x68
      ) {
  }
  return;
}



/* Entry: 10a045404; end: 10a04544f;  */

/* WARNING: Removing unreachable block (ram,0x00010a045430) */

void FUN_10a045404(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x68) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a045450; end: 10a045463;  */

void FUN_10a045450(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_80;
  long *plStack_78;
  
  plVar1 = (long *)&UNK_10f6334ac;
  FUN_109ffde64();
  if (param_2 < (ulong *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  lVar3 = plVar1[1];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    plVar5 = (long *)plVar1[2];
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar6 = plVar5;
    if (plVar5 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_78 = plVar6 + 6;
        plStack_80 = plVar6 + 2;
        FUN_10a04560c(&plStack_80,param_2 + 2);
        plVar5 = (long *)*plVar6;
        plVar6[1] = plVar6[5];
        plVar2 = plVar1;
        FUN_10a0456f4(plVar1,plVar6[5],plVar6 + 2);
        FUN_10a04583c(plVar1,plVar6,plVar2);
        param_2 = (ulong *)*param_2;
        if (plVar5 == (long *)0x0) break;
        plVar6 = plVar5;
      } while (param_2 != param_3);
    }
    FUN_10a0455d0(plVar1,plVar5);
  }
  for (; param_2 != param_3; param_2 = (ulong *)*param_2) {
    FUN_10a045b74(plVar1,param_2 + 2);
  }
  return;
}



/* Entry: 10a045464; end: 10a0454ab;  */

void FUN_10a045464(long *param_1,ulong *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 < (ulong *)0x276276276276277) {
    __Znwm((long)param_2 * 0x68);
    return;
  }
  func_0x000109ffded8();
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_68 = plVar5 + 6;
        plStack_70 = plVar5 + 2;
        FUN_10a04560c(&plStack_70,param_2 + 2);
        plVar4 = (long *)*plVar5;
        plVar5[1] = plVar5[5];
        plVar1 = param_1;
        FUN_10a0456f4(param_1,plVar5[5],plVar5 + 2);
        FUN_10a04583c(param_1,plVar5,plVar1);
        param_2 = (ulong *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    FUN_10a0455d0(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (ulong *)*param_2) {
    FUN_10a045b74(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a0454ac; end: 10a0455cf;  */

void FUN_10a0454ac(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_48 = plVar5 + 6;
        plStack_50 = plVar5 + 2;
        FUN_10a04560c(&plStack_50,param_2 + 2);
        plVar4 = (long *)*plVar5;
        plVar5[1] = plVar5[5];
        plVar1 = param_1;
        FUN_10a0456f4(param_1,plVar5[5],plVar5 + 2);
        FUN_10a04583c(param_1,plVar5,plVar1);
        param_2 = (long *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    FUN_10a0455d0(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a045b74(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a0455d0; end: 10a04560b;  */

void FUN_10a0455d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x00010a045b28(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a04560c; end: 10a045677;  */

long * FUN_10a04560c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar1 = param_1[1];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x38);
  FUN_10a045678(lVar1 + 0x20,param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 10a045678; end: 10a0456f3;  */

undefined8 * FUN_10a045678(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0456f4; end: 10a04583b;  */

long * FUN_10a0456f4(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a04590c(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[5] == *(long *)(param_3 + 0x18);
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a04583c; end: 10a04590b;  */

void FUN_10a04583c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a045864;
LAB_10a0458a0:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a0458fc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a0458a0;
LAB_10a045864:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a0458fc;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a0458fc;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a0458fc:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a04590c; end: 10a0459db;  */

void FUN_10a04590c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (param_2 <= uVar6) {
        param_2 = uVar6;
      }
      if (param_2 < uVar10) goto LAB_10a045954;
    }
    return;
  }
LAB_10a045954:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      func_0x00010a0616d0(param_1 + 8);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar10 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (param_2 <= uVar10) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar10) {
          lVar2 = *param_1;
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar10 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (plVar4[5] == plVar9[5]);
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a0459dc; end: 10a045b73;  */

void FUN_10a0459dc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      func_0x00010a0616d0(param_1 + 8);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar8 = plVar5[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar5[5] == plVar10[5]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a045b74; end: 10a045be3;  */

long FUN_10a045b74(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  FUN_10a045be4(alStack_38);
  *(undefined8 *)(alStack_38[0] + 8) = *(undefined8 *)(alStack_38[0] + 0x28);
  uVar1 = param_1;
  FUN_10a0456f4(param_1,*(undefined8 *)(alStack_38[0] + 0x28),alStack_38[0] + 0x10);
  FUN_10a04583c(param_1,alStack_38[0],uVar1);
  return alStack_38[0];
}



/* Entry: 10a045be4; end: 10a045c57;  */

void FUN_10a045be4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a045c58(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = puVar1[5];
  return;
}



/* Entry: 10a045c58; end: 10a045d23;  */

undefined8 * FUN_10a045c58(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  param_1[7] = param_2[7];
  lVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 10a045d24; end: 10a045d6b;  */

void FUN_10a045d24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a045b28(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a045d6c; end: 10a045e8f;  */

void FUN_10a045d6c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_50;
  long *plStack_48;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        plStack_48 = plVar5 + 6;
        plStack_50 = plVar5 + 2;
        FUN_10a045ecc(&plStack_50,param_2 + 2);
        plVar4 = (long *)*plVar5;
        plVar5[1] = plVar5[5];
        plVar1 = param_1;
        FUN_10a04600c(param_1,plVar5[5],plVar5 + 2);
        FUN_10a046154(param_1,plVar5,plVar1);
        param_2 = (long *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    FUN_10a045e90(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a04648c(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a045e90; end: 10a045ecb;  */

void FUN_10a045e90(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x00010a046440(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a045ecc; end: 10a045f37;  */

long * FUN_10a045ecc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar1 = param_1[1];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x38);
  FUN_10a045f38(lVar1 + 0x20,param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 10a045f38; end: 10a04600b;  */

undefined8 * FUN_10a045f38(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a04600c; end: 10a046153;  */

long * FUN_10a04600c(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a046224(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[5] == *(long *)(param_3 + 0x18);
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a046154; end: 10a046223;  */

void FUN_10a046154(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a04617c;
LAB_10a0461b8:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a046214;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a0461b8;
LAB_10a04617c:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a046214;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a046214;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a046214:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a046224; end: 10a0462f3;  */

void FUN_10a046224(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (param_2 <= uVar6) {
        param_2 = uVar6;
      }
      if (param_2 < uVar10) goto LAB_10a04626c;
    }
    return;
  }
LAB_10a04626c:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      func_0x00010a045fb4(param_1 + 8);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar10 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (param_2 <= uVar10) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar10) {
          lVar2 = *param_1;
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar10 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (plVar4[5] == plVar9[5]);
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a0462f4; end: 10a04648b;  */

void FUN_10a0462f4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      func_0x00010a045fb4(param_1 + 8);
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar8 = plVar5[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar5[5] == plVar10[5]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a04648c; end: 10a0464fb;  */

long FUN_10a04648c(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  FUN_10a0464fc(alStack_38);
  *(undefined8 *)(alStack_38[0] + 8) = *(undefined8 *)(alStack_38[0] + 0x28);
  uVar1 = param_1;
  FUN_10a04600c(param_1,*(undefined8 *)(alStack_38[0] + 0x28),alStack_38[0] + 0x10);
  FUN_10a046154(param_1,alStack_38[0],uVar1);
  return alStack_38[0];
}



/* Entry: 10a0464fc; end: 10a04656f;  */

void FUN_10a0464fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a046570(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = puVar1[5];
  return;
}



/* Entry: 10a046570; end: 10a04663b;  */

undefined8 * FUN_10a046570(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  param_1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    func_0x000107c3192c(param_1 + 4,param_2[4],param_2[5]);
  }
  else {
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  param_1[7] = param_2[7];
  lVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 10a04663c; end: 10a046683;  */

void FUN_10a04663c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a046440(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a046684; end: 10a0467c3;  */

long * FUN_10a046684(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x51b3bea3677d46cf + 1;
  if (uVar3 < 0xae4c415c9882ba) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x5c9882b931057262;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x572620ae4c415b < (ulong)(lVar2 * 0x51b3bea3677d46cf)) {
      uVar4 = 0xae4c415c9882b9;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a047570();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 0x2f;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_10a0467c4(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x178);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_10a0475b8(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x00010a04784c(&plStack_58);
    return plVar1;
  }
  FUN_10a04755c();
  func_0x00010a04784c(&plStack_58);
  __Unwind_Resume();
  lVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar5;
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar7 = param_2[5];
  lVar6 = param_2[4];
  lVar8 = param_2[6];
  lVar10 = param_2[9];
  lVar9 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = lVar8;
  param_1[9] = lVar10;
  param_1[8] = lVar9;
  param_1[3] = lVar2;
  param_1[2] = lVar5;
  param_1[5] = lVar7;
  param_1[4] = lVar6;
  lVar2 = param_2[0xb];
  lVar5 = param_2[10];
  lVar7 = param_2[0xd];
  lVar6 = param_2[0xc];
  lVar9 = param_2[0xf];
  lVar8 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = lVar7;
  param_1[0xc] = lVar6;
  param_1[0xf] = lVar9;
  param_1[0xe] = lVar8;
  param_1[0xb] = lVar2;
  param_1[10] = lVar5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_10a046950(param_1 + 0x11,param_2[0x11],param_2[0x12],
                (param_2[0x12] - param_2[0x11] >> 3) * -0x5555555555555555);
  lVar6 = param_2[0x15];
  lVar2 = param_2[0x14];
  lVar5 = param_2[0x16];
  param_1[0x17] = 0;
  param_1[0x16] = lVar5;
  param_1[0x15] = lVar6;
  param_1[0x14] = lVar2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_10a0469c8(param_1 + 0x17,param_2[0x17],param_2[0x18],param_2[0x18] - param_2[0x17]);
  lVar6 = param_2[0x1b];
  lVar2 = param_2[0x1a];
  lVar5 = param_2[0x1c];
  param_1[0x1d] = 0;
  param_1[0x1c] = lVar5;
  param_1[0x1b] = lVar6;
  param_1[0x1a] = lVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_10a046a40(param_1 + 0x1d,param_2[0x1d],param_2[0x1e],
                (param_2[0x1e] - param_2[0x1d] >> 3) * 0x4ec4ec4ec4ec4ec5);
  FUN_10a046b04(param_1 + 0x20,param_2 + 0x20);
  FUN_10a047030(param_1 + 0x25,param_2 + 0x25);
  lVar2 = param_2[0x2b];
  lVar5 = param_2[0x2a];
  lVar7 = param_2[0x2d];
  lVar6 = param_2[0x2c];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2b] = lVar2;
  param_1[0x2a] = lVar5;
  param_1[0x2d] = lVar7;
  param_1[0x2c] = lVar6;
  return param_1;
}



/* Entry: 10a0467c4; end: 10a04694f;  */

undefined8 * FUN_10a0467c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_10a046950(param_1 + 0x11,param_2[0x11],param_2[0x12],
                ((long)(param_2[0x12] - param_2[0x11]) >> 3) * -0x5555555555555555);
  uVar3 = param_2[0x15];
  uVar2 = param_2[0x14];
  uVar1 = param_2[0x16];
  param_1[0x17] = 0;
  param_1[0x16] = uVar1;
  param_1[0x15] = uVar3;
  param_1[0x14] = uVar2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_10a0469c8(param_1 + 0x17,param_2[0x17],param_2[0x18],param_2[0x18] - param_2[0x17]);
  uVar3 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  uVar1 = param_2[0x1c];
  param_1[0x1d] = 0;
  param_1[0x1c] = uVar1;
  param_1[0x1b] = uVar3;
  param_1[0x1a] = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_10a046a40(param_1 + 0x1d,param_2[0x1d],param_2[0x1e],
                ((long)(param_2[0x1e] - param_2[0x1d]) >> 3) * 0x4ec4ec4ec4ec4ec5);
  FUN_10a046b04(param_1 + 0x20,param_2 + 0x20);
  FUN_10a047030(param_1 + 0x25,param_2 + 0x25);
  uVar2 = param_2[0x2b];
  uVar1 = param_2[0x2a];
  uVar4 = param_2[0x2d];
  uVar3 = param_2[0x2c];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x2d] = uVar4;
  param_1[0x2c] = uVar3;
  return param_1;
}



/* Entry: 10a046950; end: 10a0469c7;  */

void FUN_10a046950(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a044de8(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -4);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a0469c8; end: 10a046a3f;  */

void FUN_10a0469c8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a044fac(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a046a40; end: 10a046ac3;  */

void FUN_10a046a40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010a04522c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a045278(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a046ac4; end: 10a046b03;  */

void FUN_10a046ac4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a045404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a046b04; end: 10a046b77;  */

undefined8 * FUN_10a046b04(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a046b78(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a046d84(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a046b78; end: 10a046c47;  */

undefined1  [16] FUN_10a046b78(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (param_2 >= plVar14 && param_2 != plVar14) {
LAB_10a046bc0:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar2 = param_1;
        plVar6 = param_2;
        func_0x000109ffded8();
        uVar7 = plVar6[3];
        uVar15 = plVar2[1];
        if (uVar15 != 0) {
          uVar8 = uVar15 - 1;
          if ((uVar15 & uVar8) == 0) {
            unaff_x22 = uVar8 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar10 * uVar15;
            }
          }
          puVar9 = *(undefined8 **)(*plVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (plVar6 = (long *)*puVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
              uVar10 = plVar6[1];
              if (uVar10 == uVar7) {
                if (plVar6[5] == uVar7) {
                  uVar5 = 0;
                  goto LAB_10a046f58;
                }
              }
              else {
                if ((uVar15 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar15 <= uVar10) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar1 * uVar15;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        plStack_40 = param_2;
        plStack_38 = param_1;
        FUN_10a046f8c(aplStack_68,plVar2,uVar7);
        if ((uVar15 == 0) || (*(float *)(plVar2 + 4) * (float)uVar15 < (float)(plVar2[3] + 1))) {
          uVar8 = 1;
          if (2 < uVar15) {
            uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar8 = uVar8 | uVar15 << 1;
          uVar15 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
          if (uVar8 <= uVar15) {
            uVar8 = uVar15;
          }
          FUN_10a046b78(plVar2,uVar8);
          uVar15 = plVar2[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar8 * uVar15;
            }
          }
        }
        lVar4 = *plVar2;
        plVar6 = *(long **)(lVar4 + unaff_x22 * 8);
        if (plVar6 == (long *)0x0) {
          plVar6 = plVar2 + 2;
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
          *(long **)(lVar4 + unaff_x22 * 8) = plVar6;
          if (*aplStack_68[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_68[0] + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar7 = uVar7 & uVar15 - 1;
            }
            else if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar8 * uVar15;
            }
            *(long **)(*plVar2 + uVar7 * 8) = aplStack_68[0];
          }
        }
        else {
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
        }
        plVar2[3] = plVar2[3] + 1;
        uVar5 = 1;
        plVar6 = aplStack_68[0];
LAB_10a046f58:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar6;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar7);
        }
        else if (param_2 <= plVar14) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)param_2;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar6;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (param_2 <= plVar13) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)param_2;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar14) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar6;
              plVar14 = plVar13;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar6;
            }
          }
          plVar6 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar17._8_8_ = plVar2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar14) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar14) goto LAB_10a046bc0;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a046c48; end: 10a046d83;  */

undefined1  [16] FUN_10a046c48(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *aplStack_68 [3];
  
  uVar12 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar12 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar12 = *(ulong *)(param_2 + 0x18);
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          unaff_x22 = uVar6 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar11 * uVar5;
          }
        }
        puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar7 = (long *)*puVar8; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            uVar11 = plVar7[1];
            if (uVar11 == uVar12) {
              if (plVar7[5] == uVar12) {
                uVar4 = 0;
                goto LAB_10a046f58;
              }
            }
            else {
              if ((uVar5 & uVar6) == 0) {
                uVar11 = uVar11 & uVar6;
              }
              else if (uVar5 <= uVar11) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar1 * uVar5;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a046f8c(aplStack_68,param_1,uVar12);
      if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar5) {
          uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar6 = uVar6 | uVar5 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        FUN_10a046b78(param_1,uVar6);
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x22 = uVar5 - 1 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar6 * uVar5;
          }
        }
      }
      lVar3 = *param_1;
      plVar7 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 2;
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar7;
        if (*aplStack_68[0] != 0) {
          uVar12 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar6 * uVar5;
          }
          *(long **)(*param_1 + uVar12 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar7 = aplStack_68[0];
LAB_10a046f58:
      auVar14._8_8_ = uVar4;
      auVar14._0_8_ = plVar7;
      return auVar14;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar7;
            uVar5 = uVar11;
          }
          else {
            *plVar7 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar7;
          }
        }
        plVar7 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = lVar3;
  return auVar13;
}



/* Entry: 10a046d84; end: 10a046f8b;  */

undefined1  [16] FUN_10a046d84(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if (plVar2[5] == uVar8) {
            uVar3 = 0;
            goto LAB_10a046f58;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a046f8c(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a046b78(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a046f58:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a046f8c; end: 10a046ff7;  */

void FUN_10a046f8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a045c58(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a046ff8; end: 10a04702f;  */

long * FUN_10a046ff8(long *param_1)

{
  long lVar1;
  
  FUN_10a0455d0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a047030; end: 10a0470a3;  */

undefined8 * FUN_10a047030(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a0470a4(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a0472b0(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a0470a4; end: 10a047173;  */

undefined1  [16] FUN_10a0470a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *aplStack_68 [5];
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar14 = (long *)param_1[1];
  if (param_2 >= plVar14 && param_2 != plVar14) {
LAB_10a0470ec:
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
        plVar2 = param_2;
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar2 = param_1;
        plVar6 = param_2;
        func_0x000109ffded8();
        uVar7 = plVar6[3];
        uVar15 = plVar2[1];
        if (uVar15 != 0) {
          uVar8 = uVar15 - 1;
          if ((uVar15 & uVar8) == 0) {
            unaff_x22 = uVar8 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar10 * uVar15;
            }
          }
          puVar9 = *(undefined8 **)(*plVar2 + unaff_x22 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            for (plVar6 = (long *)*puVar9; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
              uVar10 = plVar6[1];
              if (uVar10 == uVar7) {
                if (plVar6[5] == uVar7) {
                  uVar5 = 0;
                  goto LAB_10a047484;
                }
              }
              else {
                if ((uVar15 & uVar8) == 0) {
                  uVar10 = uVar10 & uVar8;
                }
                else if (uVar15 <= uVar10) {
                  uVar1 = 0;
                  if (uVar15 != 0) {
                    uVar1 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar1 * uVar15;
                }
                if (uVar10 != unaff_x22) break;
              }
            }
          }
        }
        plStack_40 = param_2;
        plStack_38 = param_1;
        FUN_10a0474b8(aplStack_68,plVar2,uVar7);
        if ((uVar15 == 0) || (*(float *)(plVar2 + 4) * (float)uVar15 < (float)(plVar2[3] + 1))) {
          uVar8 = 1;
          if (2 < uVar15) {
            uVar8 = (ulong)((uVar15 & uVar15 - 1) != 0);
          }
          uVar8 = uVar8 | uVar15 << 1;
          uVar15 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
          if (uVar8 <= uVar15) {
            uVar8 = uVar15;
          }
          FUN_10a0470a4(plVar2,uVar8);
          uVar15 = plVar2[1];
          if ((uVar15 & uVar15 - 1) == 0) {
            unaff_x22 = uVar15 - 1 & uVar7;
          }
          else {
            unaff_x22 = uVar7;
            if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              unaff_x22 = uVar7 - uVar8 * uVar15;
            }
          }
        }
        lVar4 = *plVar2;
        plVar6 = *(long **)(lVar4 + unaff_x22 * 8);
        if (plVar6 == (long *)0x0) {
          plVar6 = plVar2 + 2;
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
          *(long **)(lVar4 + unaff_x22 * 8) = plVar6;
          if (*aplStack_68[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_68[0] + 8);
            if ((uVar15 & uVar15 - 1) == 0) {
              uVar7 = uVar7 & uVar15 - 1;
            }
            else if (uVar15 <= uVar7) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar7 / uVar15;
              }
              uVar7 = uVar7 - uVar8 * uVar15;
            }
            *(long **)(*plVar2 + uVar7 * 8) = aplStack_68[0];
          }
        }
        else {
          *aplStack_68[0] = *plVar6;
          *plVar6 = (long)aplStack_68[0];
        }
        plVar2[3] = plVar2[3] + 1;
        uVar5 = 1;
        plVar6 = aplStack_68[0];
LAB_10a047484:
        auVar18._8_8_ = uVar5;
        auVar18._0_8_ = plVar6;
        return auVar18;
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar6 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
        plVar6 = (long *)((long)plVar6 + 1);
      } while (param_2 != plVar6);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        plVar14 = (long *)plVar6[1];
        uVar7 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar7) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar7);
        }
        else if (param_2 <= plVar14) {
          uVar15 = 0;
          if (param_2 != (long *)0x0) {
            uVar15 = (ulong)plVar14 / (ulong)param_2;
          }
          plVar14 = (long *)((long)plVar14 - uVar15 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar14 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar6;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)param_2 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (param_2 <= plVar13) {
            uVar15 = 0;
            if (param_2 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)param_2;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)param_2);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar14) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar6;
              plVar14 = plVar13;
            }
            else {
              *plVar6 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar6;
            }
          }
          plVar6 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    auVar17._8_8_ = plVar2;
    auVar17._0_8_ = lVar4;
    return auVar17;
  }
  if (param_2 < plVar14) {
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (param_2 < plVar14) goto LAB_10a0470ec;
  }
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a047174; end: 10a0472af;  */

undefined1  [16] FUN_10a047174(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *aplStack_68 [3];
  
  uVar12 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
      uVar12 = param_2;
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar12 = *(ulong *)(param_2 + 0x18);
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          unaff_x22 = uVar6 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar11 = 0;
            if (uVar5 != 0) {
              uVar11 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar11 * uVar5;
          }
        }
        puVar8 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
        if (puVar8 != (undefined8 *)0x0) {
          for (plVar7 = (long *)*puVar8; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            uVar11 = plVar7[1];
            if (uVar11 == uVar12) {
              if (plVar7[5] == uVar12) {
                uVar4 = 0;
                goto LAB_10a047484;
              }
            }
            else {
              if ((uVar5 & uVar6) == 0) {
                uVar11 = uVar11 & uVar6;
              }
              else if (uVar5 <= uVar11) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar1 * uVar5;
              }
              if (uVar11 != unaff_x22) break;
            }
          }
        }
      }
      FUN_10a0474b8(aplStack_68,param_1,uVar12);
      if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
        uVar6 = 1;
        if (2 < uVar5) {
          uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar6 = uVar6 | uVar5 << 1;
        uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        FUN_10a0470a4(param_1,uVar6);
        uVar5 = param_1[1];
        if ((uVar5 & uVar5 - 1) == 0) {
          unaff_x22 = uVar5 - 1 & uVar12;
        }
        else {
          unaff_x22 = uVar12;
          if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            unaff_x22 = uVar12 - uVar6 * uVar5;
          }
        }
      }
      lVar3 = *param_1;
      plVar7 = *(long **)(lVar3 + unaff_x22 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 2;
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
        *(long **)(lVar3 + unaff_x22 * 8) = plVar7;
        if (*aplStack_68[0] != 0) {
          uVar12 = *(ulong *)(*aplStack_68[0] + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar6 * uVar5;
          }
          *(long **)(*param_1 + uVar12 * 8) = aplStack_68[0];
        }
      }
      else {
        *aplStack_68[0] = *plVar7;
        *plVar7 = (long)aplStack_68[0];
      }
      param_1[3] = param_1[3] + 1;
      uVar4 = 1;
      plVar7 = aplStack_68[0];
LAB_10a047484:
      auVar14._8_8_ = uVar4;
      auVar14._0_8_ = plVar7;
      return auVar14;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((param_2 & uVar6) == 0) {
          uVar11 = uVar11 & uVar6;
        }
        else if (param_2 <= uVar11) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar11 / param_2;
          }
          uVar11 = uVar11 - uVar1 * param_2;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar11 * 8) == 0) {
            *(long **)(lVar2 + uVar11 * 8) = plVar7;
            uVar5 = uVar11;
          }
          else {
            *plVar7 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + uVar11 * 8);
            **(long **)(lVar2 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar7;
          }
        }
        plVar7 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = lVar3;
  return auVar13;
}



/* Entry: 10a0472b0; end: 10a0474b7;  */

undefined1  [16] FUN_10a0472b0(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if (plVar2[5] == uVar8) {
            uVar3 = 0;
            goto LAB_10a047484;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a0474b8(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a0470a4(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a047484:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a0474b8; end: 10a047523;  */

void FUN_10a0474b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a046570(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a047524; end: 10a04755b;  */

long * FUN_10a047524(long *param_1)

{
  long lVar1;
  
  FUN_10a045e90(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a04755c; end: 10a04756f;  */

void FUN_10a04755c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  FUN_109ffde64(&UNK_10f6334ac);
  if (0xae4c415c9882b9 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a047620(param_4,uVar1);
        uVar1 = uVar1 + 0x178;
        param_4 = param_4 + 0x178;
      } while (uVar1 != param_3);
      do {
        FUN_10a0477e8(param_2);
        param_2 = param_2 + 0x178;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x178);
  return;
}



/* Entry: 10a047570; end: 10a0475b7;  */

void FUN_10a047570(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0xae4c415c9882b9 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a047620(param_4,uVar1);
        uVar1 = uVar1 + 0x178;
        param_4 = param_4 + 0x178;
      } while (uVar1 != param_3);
      do {
        FUN_10a0477e8(param_2);
        param_2 = param_2 + 0x178;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x178);
  return;
}



/* Entry: 10a0475b8; end: 10a04761f;  */

void FUN_10a0475b8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a047620(param_4,lVar1);
      lVar1 = lVar1 + 0x178;
      param_4 = param_4 + 0x178;
    } while (lVar1 != param_3);
    do {
      FUN_10a0477e8(param_2);
      param_2 = param_2 + 0x178;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a047620; end: 10a04770f;  */

undefined8 * FUN_10a047620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  uVar4 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar1 = param_2[0x10];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar1;
  param_1[0x13] = param_2[0x13];
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar2 = param_2[0x14];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x19] = param_2[0x19];
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  uVar2 = param_2[0x1a];
  uVar1 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar2;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  FUN_10a047710(param_1 + 0x20,param_2 + 0x20);
  func_0x00010a04777c(param_1 + 0x25,param_2 + 0x25);
  uVar2 = param_2[0x2b];
  uVar1 = param_2[0x2a];
  uVar4 = param_2[0x2d];
  uVar3 = param_2[0x2c];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x2d] = uVar4;
  param_1[0x2c] = uVar3;
  return param_1;
}



/* Entry: 10a047710; end: 10a0477e7;  */

void FUN_10a047710(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a0477e8; end: 10a047897;  */

void FUN_10a0477e8(long param_1)

{
  long lStack_28;
  
  FUN_10a047524(param_1 + 0x128);
  FUN_10a046ff8(param_1 + 0x100);
  lStack_28 = param_1 + 0xe8;
  FUN_10a046ac4(&lStack_28);
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a047898; end: 10a047947;  */

undefined1  [16] FUN_10a047898(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *aplStack_48 [3];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, (ulong)plVar3[7] <= *(ulong *)(param_2 + 0x18)) {
        if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar3[7]) {
          uVar2 = 0;
          goto LAB_10a047930;
        }
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          plVar4 = plVar3 + 1;
          goto LAB_10a0478fc;
        }
      }
      plVar1 = (long *)*plVar3;
      plVar4 = plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
LAB_10a0478fc:
  FUN_10a047948(aplStack_48,param_1,param_3);
  FUN_10a0479ec(param_1,plVar3,plVar4,aplStack_48[0]);
  uVar2 = 1;
  plVar3 = aplStack_48[0];
LAB_10a047930:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a047948; end: 10a0479eb;  */

void FUN_10a047948(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  }
  *(undefined8 *)(lVar1 + 0x38) = param_3[3];
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a0479ec; end: 10a04803f;  */

void FUN_10a0479ec(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a048040; end: 10a0480ab;  */

undefined8 FUN_10a048040(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  plVar3 = plVar4;
  do {
    lVar1 = 8;
    if (*(ulong *)(param_2 + 0x18) <= (ulong)plVar5[7]) {
      lVar1 = 0;
      plVar3 = plVar5;
    }
    plVar5 = *(long **)((long)plVar5 + lVar1);
  } while (plVar5 != (long *)0x0);
  if ((plVar3 == plVar4) || (*(ulong *)(param_2 + 0x18) < (ulong)plVar3[7])) {
    uVar2 = 0;
  }
  else {
    FUN_10a0480ac();
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10a0480ac; end: 10a04815b;  */

undefined8 FUN_10a0480ac(undefined8 param_1,long param_2)

{
  func_0x00010a0480ec();
  if (*(char *)(param_2 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x20));
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 10a04815c; end: 10a0484f7;  */

void FUN_10a04815c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar5 = (long *)*param_2;
  plVar9 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_10a04817c:
    plVar5 = (long *)plVar9[1];
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)plVar9[2];
      bVar3 = true;
      goto LAB_10a0481a0;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar9 = plVar4;
        plVar4 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
      goto LAB_10a04817c;
    }
  }
  bVar3 = false;
  puVar7 = (undefined8 *)plVar9[2];
  plVar5[2] = (long)puVar7;
LAB_10a0481a0:
  plVar4 = (long *)*puVar7;
  if (plVar4 == plVar9) {
    *puVar7 = plVar5;
    if (plVar9 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar5;
  }
  lVar10 = plVar9[3];
  plVar6 = param_1;
  if (plVar9 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar9[2] = (long)puVar7;
    lVar1 = 0;
    if ((long *)*puVar7 != param_2) {
      lVar1 = 8;
    }
    *(long **)((long)puVar7 + lVar1) = plVar9;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar9;
    *plVar9 = lVar1;
    plVar9[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar9;
    }
    *(char *)(plVar9 + 3) = (char)param_2[3];
    plVar6 = plVar9;
    if (param_1 != param_2) {
      plVar6 = param_1;
    }
  }
  if ((plVar6 != (long *)0x0) && ((char)lVar10 != '\0')) {
    if (bVar3) {
      while( true ) {
        plVar5 = (long *)plVar4[2];
        plVar8 = (long *)*plVar5;
        plVar9 = plVar6;
        if (plVar8 == plVar4) break;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar9 = (long *)plVar5[1];
          lVar10 = *plVar9;
          plVar5[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar5;
          }
          puVar7 = (undefined8 *)plVar5[2];
          plVar9[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar5) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar9;
          *plVar9 = (long)plVar5;
          plVar5[2] = (long)plVar9;
          plVar9 = plVar4;
          if (plVar6 != (long *)*plVar4) {
            plVar9 = plVar6;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar6 = (long *)*plVar4;
        plVar5 = plVar4;
        if ((plVar6 != (long *)0x0) && ((char)plVar6[3] != '\x01')) {
          plVar8 = (long *)plVar4[1];
          if ((plVar8 == (long *)0x0) || ((char)plVar8[3] == '\x01')) {
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(plVar4 + 3) = 0;
            lVar10 = plVar6[1];
            *plVar4 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 0x10) = plVar4;
            }
            puVar7 = (undefined8 *)plVar4[2];
            plVar6[2] = (long)puVar7;
            lVar10 = 0;
            if ((long *)*puVar7 != plVar4) {
              lVar10 = 8;
            }
            *(long **)((long)puVar7 + lVar10) = plVar6;
            plVar6[1] = (long)plVar4;
            plVar4[2] = (long)plVar6;
            plVar5 = plVar6;
            plVar8 = plVar4;
          }
LAB_10a0483f4:
          plVar9 = (long *)plVar5[2];
          *(char *)(plVar5 + 3) = (char)plVar9[3];
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 1;
          plVar5 = (long *)plVar9[1];
          lVar10 = *plVar5;
          plVar9[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar9;
          }
          puVar7 = (undefined8 *)plVar9[2];
          plVar5[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar9) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar5;
          *plVar5 = (long)plVar9;
LAB_10a0484ec:
          plVar9[2] = (long)plVar5;
          return;
        }
        plVar8 = (long *)plVar4[1];
        if ((plVar8 != (long *)0x0) && ((char)plVar8[3] != '\x01')) goto LAB_10a0483f4;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (long *)plVar4[2];
        if ((plVar5 == plVar9) || ((*(byte *)(plVar5 + 3) & 1) == 0)) goto LAB_10a048388;
LAB_10a048364:
        lVar10 = 8;
        if (*(long **)plVar5[2] != plVar5) {
          lVar10 = 0;
        }
        plVar4 = *(long **)((long)plVar5[2] + lVar10);
        plVar6 = plVar9;
      }
      if ((*(byte *)(plVar4 + 3) & 1) == 0) {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        lVar10 = plVar8[1];
        *plVar5 = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar5;
        }
        puVar7 = (undefined8 *)plVar5[2];
        plVar8[2] = (long)puVar7;
        lVar10 = 0;
        if ((long *)*puVar7 != plVar5) {
          lVar10 = 8;
        }
        *(long **)((long)puVar7 + lVar10) = plVar8;
        plVar8[1] = (long)plVar5;
        plVar5[2] = (long)plVar8;
        plVar9 = plVar4;
        if (plVar6 != (long *)plVar4[1]) {
          plVar9 = plVar6;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar6 = (long *)*plVar4;
      plVar5 = plVar4;
      if ((plVar6 == (long *)0x0) || ((char)plVar6[3] == '\x01')) {
        plVar8 = (long *)plVar4[1];
        if ((plVar8 == (long *)0x0) || ((char)plVar8[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = (long *)plVar4[2];
          if ((char)plVar5[3] == '\x01' && plVar5 != plVar9) goto LAB_10a048364;
LAB_10a048388:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if ((plVar6 == (long *)0x0) || ((char)plVar6[3] == '\x01')) {
          *(undefined1 *)(plVar8 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar10 = *plVar8;
          plVar4[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar4;
          }
          puVar7 = (undefined8 *)plVar4[2];
          plVar8[2] = (long)puVar7;
          lVar10 = 0;
          if ((long *)*puVar7 != plVar4) {
            lVar10 = 8;
          }
          *(long **)((long)puVar7 + lVar10) = plVar8;
          *plVar8 = (long)plVar4;
          plVar4[2] = (long)plVar8;
          plVar5 = plVar8;
          plVar6 = plVar4;
        }
      }
      plVar9 = (long *)plVar5[2];
      *(char *)(plVar5 + 3) = (char)plVar9[3];
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(plVar6 + 3) = 1;
      plVar5 = (long *)*plVar9;
      lVar10 = plVar5[1];
      *plVar9 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar9;
      }
      puVar7 = (undefined8 *)plVar9[2];
      plVar5[2] = (long)puVar7;
      lVar10 = 0;
      if ((long *)*puVar7 != plVar9) {
        lVar10 = 8;
      }
      *(long **)((long)puVar7 + lVar10) = plVar5;
      plVar5[1] = (long)plVar9;
      goto LAB_10a0484ec;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}



/* Entry: 10a0484f8; end: 10a04855b;  */

undefined8 * FUN_10a0484f8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  param_1[4] = (long)param_3;
  return param_1;
}



/* Entry: 10a04855c; end: 10a0487f7;  */

void FUN_10a04855c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong unaff_x24;
  ulong uVar9;
  
  uRam00000001137e93d8 = 0;
  lRam00000001137e93d0 = 0;
  lRam00000001137e93e8 = 0;
  plRam00000001137e93e0 = (long *)0x0;
  fRam00000001137e93f0 = 1.0;
  if (param_2 != 0) {
    lVar8 = param_1 + param_2 * 0x28;
    do {
      uVar5 = uRam00000001137e93d8;
      uVar9 = *(ulong *)(param_1 + 0x18);
      if (uRam00000001137e93d8 != 0) {
        uVar3 = uRam00000001137e93d8 - 1;
        if ((uRam00000001137e93d8 & uVar3) == 0) {
          unaff_x24 = uVar3 & uVar9;
        }
        else {
          unaff_x24 = uVar9;
          if (uRam00000001137e93d8 <= uVar9) {
            uVar6 = 0;
            if (uRam00000001137e93d8 != 0) {
              uVar6 = uVar9 / uRam00000001137e93d8;
            }
            unaff_x24 = uVar9 - uVar6 * uRam00000001137e93d8;
          }
        }
        plVar4 = *(long **)(lRam00000001137e93d0 + unaff_x24 * 8);
        if (plVar4 != (long *)0x0) {
          do {
            while( true ) {
              plVar4 = (long *)*plVar4;
              if (plVar4 == (long *)0x0) goto LAB_10a048644;
              uVar6 = plVar4[1];
              if (uVar6 != uVar9) break;
              if (plVar4[5] == uVar9) goto LAB_10a04877c;
            }
            if ((uRam00000001137e93d8 & uVar3) == 0) {
              uVar6 = uVar6 & uVar3;
            }
            else if (uRam00000001137e93d8 <= uVar6) {
              uVar1 = 0;
              if (uRam00000001137e93d8 != 0) {
                uVar1 = uVar6 / uRam00000001137e93d8;
              }
              uVar6 = uVar6 - uVar1 * uRam00000001137e93d8;
            }
          } while (uVar6 == unaff_x24);
        }
      }
LAB_10a048644:
      plVar4 = (long *)0x38;
      __Znwm();
      *plVar4 = 0;
      plVar4[1] = uVar9;
      FUN_10a0487f8(plVar4 + 2,param_1);
      if ((uVar5 == 0) || (fRam00000001137e93f0 * (float)uVar5 < (float)(lRam00000001137e93e8 + 1)))
      {
        uVar3 = 1;
        if (2 < uVar5) {
          uVar3 = (ulong)((uVar5 & uVar5 - 1) != 0);
        }
        uVar3 = uVar3 | uVar5 << 1;
        uVar5 = (ulong)((float)(lRam00000001137e93e8 + 1) / fRam00000001137e93f0);
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        FUN_10a04884c(0x1137e93d0,uVar3);
        uVar5 = uRam00000001137e93d8;
        if ((uRam00000001137e93d8 & uRam00000001137e93d8 - 1) == 0) {
          unaff_x24 = uRam00000001137e93d8 - 1 & uVar9;
        }
        else {
          unaff_x24 = uVar9;
          if (uRam00000001137e93d8 <= uVar9) {
            uVar3 = 0;
            if (uRam00000001137e93d8 != 0) {
              uVar3 = uVar9 / uRam00000001137e93d8;
            }
            unaff_x24 = uVar9 - uVar3 * uRam00000001137e93d8;
          }
        }
      }
      lVar2 = lRam00000001137e93d0;
      plVar7 = *(long **)(lRam00000001137e93d0 + unaff_x24 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar4 = (long)plRam00000001137e93e0;
        plRam00000001137e93e0 = plVar4;
        *(undefined8 *)(lVar2 + unaff_x24 * 8) = 0x1137e93e0;
        if (*plVar4 != 0) {
          uVar9 = *(ulong *)(*plVar4 + 8);
          if ((uVar5 & uVar5 - 1) == 0) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar3 * uVar5;
          }
          *(long **)(lRam00000001137e93d0 + uVar9 * 8) = plVar4;
        }
      }
      else {
        *plVar4 = *plVar7;
        *plVar7 = (long)plVar4;
      }
      lRam00000001137e93e8 = lRam00000001137e93e8 + 1;
LAB_10a04877c:
      param_1 = param_1 + 0x28;
    } while (param_1 != lVar8);
  }
  return;
}



/* Entry: 10a0487f8; end: 10a04884b;  */

undefined8 * FUN_10a0487f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10a04884c; end: 10a04891b;  */

void FUN_10a04884c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_10a048894:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (*(char *)(param_2 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(param_2 + 0x10));
          }
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (param_2 != uVar9);
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        uVar9 = plVar5[1];
        uVar4 = param_2 - 1;
        if ((param_2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (param_2 <= uVar9) {
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar8 * param_2;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar6 = (long *)*plVar5;
        while (plVar6 != (long *)0x0) {
          uVar8 = plVar6[1];
          if ((param_2 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          plVar7 = plVar6;
          if (uVar8 != uVar9) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar8 * 8) == 0) {
              *(long **)(lVar2 + uVar8 * 8) = plVar5;
              uVar9 = uVar8;
            }
            else {
              *plVar5 = *plVar6;
              *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
              **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
              plVar7 = plVar5;
            }
          }
          plVar5 = plVar7;
          plVar6 = (long *)*plVar7;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar4) {
      uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
    }
    if (param_2 <= uVar4) {
      param_2 = uVar4;
    }
    if (param_2 < uVar9) goto LAB_10a048894;
  }
  return;
}



/* Entry: 10a04891c; end: 10a048b23;  */

void FUN_10a04891c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (*(char *)(param_2 + 0x27) < '\0') {
          __ZdlPv(*(undefined8 *)(param_2 + 0x10));
        }
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 10a048b24; end: 10a048bc3;  */

long * FUN_10a048b24(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[5] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a048bc4; end: 10a048c53;  */

void FUN_10a048bc4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    return;
  }
  plVar2 = (long *)(param_1 + 0x88);
  lVar1 = *plVar2;
  lVar3 = *(long *)(param_1 + 0xa0);
  if ((ulong)((*(long *)(param_1 + 0x90) - lVar1 >> 3) * -0x5555555555555555) < (ulong)(lVar3 << 1))
  {
    FUN_10a048c54(plVar2,lVar3 << 1);
    lVar1 = *plVar2;
  }
  if (lVar3 != 0) {
    _memmove(lVar1 + lVar3 * 0x18,lVar1,lVar3 * 0x18 + -4);
  }
  *(long *)(param_1 + 0xb0) = lVar3;
  *(long *)(param_1 + 0xa0) = lVar3 << 1;
  return;
}



/* Entry: 10a048c54; end: 10a048c8f;  */

void FUN_10a048c54(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar8 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar1 || uVar8 == 0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0x18;
    }
    return;
  }
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x5555555555555555) < uVar8) {
    lVar4 = lVar4 - *param_1;
    uVar6 = uVar8 + (lVar4 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_10a044e30();
      puVar3 = &UNK_10f6334ac;
      FUN_109ffde64(&UNK_10f6334ac);
      if (uVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
        if (uVar8 != 0) {
          puVar3 = puVar3 + uVar8 * 0x68;
          do {
            uVar8 = uVar8 - 1;
            func_0x00010a0523dc(puVar3 + -0x40);
            func_0x00010a0523dc(puVar3 + -0x68);
            puVar3 = puVar3 + -0x68;
          } while (uVar8 != 0);
        }
        return;
      }
      __Znwm(uVar8 << 3);
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a044e44();
    }
    lVar4 = (long)plVar2 + lVar4;
    lVar9 = ((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar4,lVar9);
    lVar10 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lVar5 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar4 + lVar9;
    param_1[2] = (long)(plVar2 + uVar7 * 3);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (uVar8 != 0) {
      lVar5 = ((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar4,lVar5);
      lVar4 = lVar4 + lVar5;
    }
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 10a048c90; end: 10a048deb;  */

void FUN_10a048c90(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1[1];
  if ((ulong)((param_1[2] - lVar8 >> 3) * -0x5555555555555555) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar4 = param_2 + (lVar8 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_10a044e30();
      puVar2 = &UNK_10f6334ac;
      FUN_109ffde64(&UNK_10f6334ac);
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if (param_2 != 0) {
          puVar2 = puVar2 + param_2 * 0x68;
          do {
            param_2 = param_2 - 1;
            func_0x00010a0523dc(puVar2 + -0x40);
            func_0x00010a0523dc(puVar2 + -0x68);
            puVar2 = puVar2 + -0x68;
          } while (param_2 != 0);
        }
        return;
      }
      __Znwm(param_2 << 3);
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a044e44();
    }
    lVar8 = (long)plVar1 + lVar8;
    lVar6 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar8,lVar6);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar3 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + lVar6;
    param_1[2] = (long)(plVar1 + uVar5 * 3);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar3 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar8,lVar3);
      lVar8 = lVar8 + lVar3;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 10a048dec; end: 10a048dff;  */

void FUN_10a048dec(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f6334ac;
  FUN_109ffde64(&UNK_10f6334ac);
  if (param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    if (param_2 != 0) {
      puVar1 = puVar1 + param_2 * 0x68;
      do {
        param_2 = param_2 - 1;
        func_0x00010a0523dc(puVar1 + -0x40);
        func_0x00010a0523dc(puVar1 + -0x68);
        puVar1 = puVar1 + -0x68;
      } while (param_2 != 0);
    }
    return;
  }
  __Znwm(param_2 << 3);
  return;
}



/* Entry: 10a048e00; end: 10a048e7b;  */

void FUN_10a048e00(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000109ffded8();
    if (param_2 != 0) {
      lVar1 = param_1 + param_2 * 0x68;
      do {
        param_2 = param_2 - 1;
        func_0x00010a0523dc(lVar1 + -0x40);
        func_0x00010a0523dc(lVar1 + -0x68);
        lVar1 = lVar1 + -0x68;
      } while (param_2 != 0);
    }
    return;
  }
  __Znwm(param_2 << 3);
  return;
}



/* Entry: 10a048e7c; end: 10a048f03;  */

void FUN_10a048e7c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  int param_9,undefined1 param_10)

{
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 1;
  uStack_3c = param_10;
  uStack_54 = param_4;
  uStack_50 = param_5;
  uStack_4c = param_6;
  uStack_48 = param_7;
  uStack_44 = param_8;
  iStack_40 = param_9;
  uStack_38 = param_3;
  FUN_10a048f04(param_1,param_2,&uStack_54);
  if (param_9 == 0) {
    (**(code **)(*(long *)*param_1 + 0xb0))();
  }
  *(undefined1 *)(*param_1 + 0x19) = 1;
  return;
}



/* Entry: 10a048f04; end: 10a049143;  */

void FUN_10a048f04(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_87;
  undefined1 uStack_85;
  undefined8 uStack_84;
  undefined8 **ppuStack_78;
  long *plStack_70;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined8 **ppuStack_60;
  long *plStack_58;
  char cStack_49;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a049144(&plStack_38,param_2 + 3);
  plStack_40 = (long *)0x0;
  if (plStack_38 == (long *)0x0) {
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x10))(param_2,param_3);
    plStack_40 = plVar5;
    FUN_10a049218(&ppuStack_60,&plStack_40);
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      pppuVar2 = (undefined8 ***)ppuStack_60;
      if (-1 < cStack_49) {
        pppuVar2 = &ppuStack_60;
      }
      func_0x00010ae06f08(1,4,&UNK_10f633be3,&UNK_10f633c18,0x1d,&UNK_10f633d7c,in_x6,in_x7,pppuVar2
                         );
    }
    if (cStack_49 < '\0') {
      __ZdlPv(ppuStack_60);
    }
  }
  else {
    plStack_40 = plStack_38;
    plStack_38 = (long *)0x0;
  }
  FUN_10a049418(&ppuStack_60,param_2 + 1);
  plVar5 = plStack_58;
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_90 = param_3[2];
  uStack_88 = *(undefined1 *)(param_3 + 3);
  uStack_87 = *(undefined2 *)((long)param_3 + 0x19);
  uStack_85 = *(undefined1 *)((long)param_3 + 0x1b);
  uStack_84 = *(undefined8 *)((long)param_3 + 0x1c);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_70 = plStack_58;
  ppuStack_78 = ppuStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_64 = uStack_87;
  uStack_62 = uStack_85;
  FUN_10a049458(param_1,plStack_40,&uStack_a0);
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  plVar5 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return;
}



/* Entry: 10a049144; end: 10a049217;  */

void FUN_10a049144(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  lVar4 = param_2 + 0x68;
  FUN_10a0492a0(lVar4,param_3);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x48) == 0)) {
    *param_1 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x38);
    plVar1 = *(long **)(lVar5 + 0x10);
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *param_1 = uVar2;
    if (plVar1 == (long *)(param_2 + 0x50)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a0491e4);
      (*pcVar3)();
    }
    lVar5 = *plVar1;
    plVar1 = (long *)plVar1[1];
    *(long **)(lVar5 + 8) = plVar1;
    *plVar1 = lVar5;
    *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + -1;
    __ZdlPv();
    FUN_10a049248(lVar4 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10a049218; end: 10a049247;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a049218(ulong *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong *unaff_x19;
  ulong *puVar10;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar6 = (undefined8 *)&UNK_10f6337b7;
    FUN_10a00946c();
    lVar9 = puVar6[2];
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0492a0);
      (*pcVar4)();
    }
    puVar10 = (ulong *)*puVar6;
    uVar3 = *puVar10;
    puVar7 = (ulong *)puVar10[1];
    *(ulong **)(uVar3 + 8) = puVar7;
    *puVar7 = uVar3;
    puVar6[2] = lVar9 + -1;
    plVar8 = (long *)puVar10[3];
    puVar10[3] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar10);
    return puVar10;
  }
  puVar7 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar7 == (ulong *)0x0) {
    puVar7 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar10 = puVar7;
    ___cxa_demangle(puVar7,0,0,&iStack_34);
    if (iStack_34 == 0) {
      func_0x000107c2b054(param_1,puVar10);
      _free(puVar10);
      return puVar10;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar7;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = puVar7;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar10) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar10 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar10 != 0) {
        puVar6 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar6;
        puVar6[1] = 0x434948504152475f;
        *puVar6 = 0x45524f43534e454c;
        puVar6[3] = 0x525f595a414c5f54;
        puVar6[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar6 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar6 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar6 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar7 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar7;
      }
    }
    return puVar10;
  }
  if (puVar10 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar10;
    puVar5 = param_1;
    if (puVar10 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar10 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar10 | 7) + 1);
    }
    puVar5 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar10;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar7,puVar10);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar5 + (long)puVar10) = 0;
  return param_1;
}



/* Entry: 10a049248; end: 10a04929f;  */

void FUN_10a049248(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    plVar5 = (long *)*param_1;
    lVar1 = *plVar5;
    plVar3 = (long *)plVar5[1];
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    param_1[2] = lVar4 + -1;
    plVar3 = (long *)plVar5[3];
    plVar5[3] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0492a0);
  (*pcVar2)();
}



/* Entry: 10a0492a0; end: 10a04937b;  */

long FUN_10a0492a0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10a25428c();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          FUN_10a04937c(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a04937c; end: 10a049417;  */

bool FUN_10a04937c(int *param_1,int *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] &&
      (((char)param_1[6] == (char)param_2[6] && (param_1[7] == param_2[7])))))) {
    return param_1[8] == param_2[8];
  }
  return false;
}



/* Entry: 10a049418; end: 10a049457;  */

undefined8 * FUN_10a049418(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  FUN_10a043ecc();
  *puVar2 = param_2;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  puVar3[5] = param_3[1];
  puVar3[4] = uVar4;
  puVar3[7] = uVar6;
  puVar3[6] = uVar5;
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_3 + 4);
  uVar5 = param_3[6];
  uVar4 = param_3[5];
  param_3[5] = 0;
  param_3[6] = 0;
  *puVar3 = &PTR_FUN_110b9f430;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_2;
  puVar3[10] = uVar5;
  puVar3[9] = uVar4;
  puVar2[1] = puVar3;
  return puVar2;
}



/* Entry: 10a049458; end: 10a0494ef;  */

undefined8 * FUN_10a049458(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  puVar1[5] = param_3[1];
  puVar1[4] = uVar2;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_3 + 4);
  uVar3 = param_3[6];
  uVar2 = param_3[5];
  param_3[5] = 0;
  param_3[6] = 0;
  *puVar1 = &PTR_FUN_110b9f430;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  puVar1[10] = uVar3;
  puVar1[9] = uVar2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a0494f0; end: 10a0495ef;  */

void FUN_10a0494f0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x30);
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 == (long *)0x0)) ||
     (lStack_40 = *(long *)(param_1 + 0x28), lStack_40 == 0)) {
    plVar4 = plStack_38;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    plStack_48 = param_2;
    FUN_10a0496e4(lStack_40 + 0x18,param_1,&plStack_48);
    plVar1 = plStack_48;
    plStack_48 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  plVar1 = plVar4 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a0495f0; end: 10a049663;  */

void FUN_10a0495f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9f430;
  if (param_1[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a049664; end: 10a0496a3;  */

void FUN_10a049664(long param_1)

{
  FUN_10a0494f0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a0496a4; end: 10a0496df;  */

long FUN_10a0496a4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110b9f470);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0496e0; end: 10a0496e3;  */

void FUN_10a0496e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0496e4; end: 10a049857;  */

void FUN_10a0496e4(long param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  if (*param_3 != 0) {
    plVar2 = (long *)0x38;
    __Znwm();
    lVar6 = *param_2;
    lVar11 = param_2[3];
    lVar10 = param_2[2];
    plVar2[3] = param_2[1];
    plVar2[2] = lVar6;
    plVar2[5] = lVar11;
    plVar2[4] = lVar10;
    *(int *)(plVar2 + 6) = (int)param_2[4];
    lVar6 = *(long *)(param_1 + 0x50);
    *plVar2 = lVar6;
    plVar2[1] = param_1 + 0x50;
    *(long **)(lVar6 + 8) = plVar2;
    *(long **)(param_1 + 0x50) = plVar2;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    ppppuVar3 = (undefined8 ****)(param_1 + 0x68);
    FUN_10a0492a0(ppppuVar3,param_2);
    ppppuVar4 = ppppuVar3;
    if (ppppuVar3 == (undefined8 ****)0x0) {
      pppuStack_98 = &pppuStack_98;
      uStack_88 = 0;
      pppuStack_90 = pppuStack_98;
      FUN_10a049df8(auStack_80,param_2,&pppuStack_98);
      ppppuVar4 = (undefined8 ****)(param_1 + 0x68);
      FUN_10a0498d4(ppppuVar4,auStack_80,auStack_80);
      FUN_10a049e40(auStack_58);
      ppppuVar3 = &pppuStack_98;
      FUN_10a049e40();
    }
    ppuVar9 = *(undefined8 ***)(param_1 + 0x50);
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar5 = (undefined8 ***)0x28;
    __Znwm();
    ppuVar7 = (undefined8 **)*param_3;
    *param_3 = 0;
    pppuVar5[2] = ppuVar9;
    pppuVar5[3] = ppuVar7;
    pppuVar5[4] = ppppuVar3;
    ppppuVar3 = ppppuVar4 + 7;
    pppuVar8 = *ppppuVar3;
    *pppuVar5 = pppuVar8;
    pppuVar5[1] = ppppuVar3;
    pppuVar8[1] = pppuVar5;
    *ppppuVar3 = pppuVar5;
    ppppuVar4[9] = (undefined8 ***)((long)ppppuVar4[9] + 1);
    FUN_10a049858(param_1);
    __ZNSt3__15mutex6unlockEv(param_1 + 8);
    return;
  }
  FUN_10a00946c(&UNK_10f633df4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a049820);
  (*pcVar1)();
}


